#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00DE[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0,
    7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0,
    0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0,
    0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0,
    0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0,
    32, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0,
    41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0,
    48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50,
    0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 55,
    0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 60, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 67, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0,
    0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0,
    76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0,
    81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0,
    0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0,
    92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0,
    0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101,
    0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 106,
    0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 111,
    0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 117, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0,
    136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    145, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 150,
    0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0,
    0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160,
    0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0,
    0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0,
    167, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 172,
    0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 179, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0,
    0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 207, 0,
    0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 212,
    0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 216, 0, 0, 0, 0, 0, 0,
    0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0,
    220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0,
    0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 241, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0,
    250, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 257, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0,
    0, 273, 0, 0, 0, 274, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 281,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 290,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0,
    0, 0, 304, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0,
    0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    314, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0,
    0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0, 331, 0, 0, 0, 332, 0, 0,
    0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 0, 337, 0, 0,
    0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 342, 0,
    0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 346,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353,
    0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0,
    357, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0,
    0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0,
    0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    375, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0,
    0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0,
    389, 0, 0, 0, 0, 390, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 394, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0,
    0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 407,
    0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0,
    410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0,
    0, 412, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0,
    0, 417, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 421, 0, 0,
    0, 422, 0, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0,
    428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0,
    0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 433, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 436,
    0, 0, 0, 0, 437, 0, 0, 0, 0, 438, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 441, 0, 0,
    0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446,
    0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0,
    0, 0, 456, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460,
    0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 466, 0, 0,
    0, 0, 467, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 471,
    0, 0, 0, 472, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 476, 0, 477, 0, 0,
};

void unit_00DE(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00478000;
    case 2u: goto L_00478034;
    case 3u: goto L_00478040;
    case 4u: goto L_00478048;
    case 5u: goto L_00478054;
    case 6u: goto L_00478070;
    case 7u: goto L_00478080;
    case 8u: goto L_004780CC;
    case 9u: goto L_004780E0;
    case 10u: goto L_00478130;
    case 11u: goto L_00478144;
    case 12u: goto L_00478164;
    case 13u: goto L_00478188;
    case 14u: goto L_004781A4;
    case 15u: goto L_004781B8;
    case 16u: goto L_004781C4;
    case 17u: goto L_004781D4;
    case 18u: goto L_004781E4;
    case 19u: goto L_00478228;
    case 20u: goto L_00478234;
    case 21u: goto L_00478250;
    case 22u: goto L_00478278;
    case 23u: goto L_00478298;
    case 24u: goto L_004782A8;
    case 25u: goto L_004782C8;
    case 26u: goto L_004782E8;
    case 27u: goto L_004782F8;
    case 28u: goto L_00478318;
    case 29u: goto L_00478340;
    case 30u: goto L_00478350;
    case 31u: goto L_00478378;
    case 32u: goto L_00478380;
    case 33u: goto L_004783A4;
    case 34u: goto L_004783B0;
    case 35u: goto L_004783E0;
    case 36u: goto L_00478420;
    case 37u: goto L_00478484;
    case 38u: goto L_004784B4;
    case 39u: goto L_004784C4;
    case 40u: goto L_004784E4;
    case 41u: goto L_00478500;
    case 42u: goto L_00478534;
    case 43u: goto L_0047853C;
    case 44u: goto L_00478560;
    case 45u: goto L_0047856C;
    case 46u: goto L_004785A0;
    case 47u: goto L_004785EC;
    case 48u: goto L_00478600;
    case 49u: goto L_00478668;
    case 50u: goto L_0047867C;
    case 51u: goto L_0047869C;
    case 52u: goto L_004786C0;
    case 53u: goto L_004786DC;
    case 54u: goto L_004786F0;
    case 55u: goto L_004786FC;
    case 56u: goto L_0047870C;
    case 57u: goto L_0047871C;
    case 58u: goto L_0047875C;
    case 59u: goto L_00478768;
    case 60u: goto L_00478778;
    case 61u: goto L_004787C0;
    case 62u: goto L_004787CC;
    case 63u: goto L_004787DC;
    case 64u: goto L_00478824;
    case 65u: goto L_00478830;
    case 66u: goto L_00478840;
    case 67u: goto L_00478888;
    case 68u: goto L_00478894;
    case 69u: goto L_004788A4;
    case 70u: goto L_004788EC;
    case 71u: goto L_004788F8;
    case 72u: goto L_00478908;
    case 73u: goto L_00478950;
    case 74u: goto L_0047895C;
    case 75u: goto L_0047896C;
    case 76u: goto L_00478980;
    case 77u: goto L_004789A0;
    case 78u: goto L_004789B0;
    case 79u: goto L_004789E0;
    case 80u: goto L_004789F0;
    case 81u: goto L_00478A00;
    case 82u: goto L_00478A44;
    case 83u: goto L_00478A7C;
    case 84u: goto L_00478ABC;
    case 85u: goto L_00478AFC;
    case 86u: goto L_00478B38;
    case 87u: goto L_00478B74;
    case 88u: goto L_00478B88;
    case 89u: goto L_00478BC0;
    case 90u: goto L_00478BD4;
    case 91u: goto L_00478BF0;
    case 92u: goto L_00478C00;
    case 93u: goto L_00478C48;
    case 94u: goto L_00478C68;
    case 95u: goto L_00478C94;
    case 96u: goto L_00478CB0;
    case 97u: goto L_00478CF0;
    case 98u: goto L_00478D0C;
    case 99u: goto L_00478D4C;
    case 100u: goto L_00478D68;
    case 101u: goto L_00478D7C;
    case 102u: goto L_00478D9C;
    case 103u: goto L_00478DC0;
    case 104u: goto L_00478DDC;
    case 105u: goto L_00478DF0;
    case 106u: goto L_00478DFC;
    case 107u: goto L_00478E0C;
    case 108u: goto L_00478E1C;
    case 109u: goto L_00478E60;
    case 110u: goto L_00478E6C;
    case 111u: goto L_00478E7C;
    case 112u: goto L_00478E90;
    case 113u: goto L_00478EB0;
    case 114u: goto L_00478EC0;
    case 115u: goto L_00478ED0;
    case 116u: goto L_00478EE0;
    case 117u: goto L_00478F10;
    case 118u: goto L_00478F18;
    case 119u: goto L_00478F40;
    case 120u: goto L_00478F48;
    case 121u: goto L_00478F60;
    case 122u: goto L_00478FB0;
    case 123u: goto L_00478FC0;
    case 124u: goto L_00479000;
    case 125u: goto L_00479054;
    case 126u: goto L_0047908C;
    case 127u: goto L_0047909C;
    case 128u: goto L_004790BC;
    case 129u: goto L_004790D0;
    case 130u: goto L_004790E0;
    case 131u: goto L_0047912C;
    case 132u: goto L_00479140;
    case 133u: goto L_004791A8;
    case 134u: goto L_004791BC;
    case 135u: goto L_004791DC;
    case 136u: goto L_00479200;
    case 137u: goto L_0047921C;
    case 138u: goto L_00479230;
    case 139u: goto L_0047923C;
    case 140u: goto L_0047924C;
    case 141u: goto L_0047925C;
    case 142u: goto L_004792A0;
    case 143u: goto L_004792AC;
    case 144u: goto L_004792BC;
    case 145u: goto L_00479300;
    case 146u: goto L_0047930C;
    case 147u: goto L_0047931C;
    case 148u: goto L_00479360;
    case 149u: goto L_0047936C;
    case 150u: goto L_0047937C;
    case 151u: goto L_00479390;
    case 152u: goto L_004793B0;
    case 153u: goto L_004793C0;
    case 154u: goto L_004793F8;
    case 155u: goto L_0047941C;
    case 156u: goto L_0047943C;
    case 157u: goto L_0047948C;
    case 158u: goto L_004794A0;
    case 159u: goto L_004794B0;
    case 160u: goto L_004794FC;
    case 161u: goto L_00479510;
    case 162u: goto L_00479578;
    case 163u: goto L_0047958C;
    case 164u: goto L_004795AC;
    case 165u: goto L_004795D0;
    case 166u: goto L_004795EC;
    case 167u: goto L_00479600;
    case 168u: goto L_0047960C;
    case 169u: goto L_0047961C;
    case 170u: goto L_0047962C;
    case 171u: goto L_00479670;
    case 172u: goto L_0047967C;
    case 173u: goto L_0047968C;
    case 174u: goto L_004796A0;
    case 175u: goto L_004796B0;
    case 176u: goto L_004796C4;
    case 177u: goto L_004796E0;
    case 178u: goto L_004796F0;
    case 179u: goto L_0047971C;
    case 180u: goto L_00479724;
    case 181u: goto L_00479744;
    case 182u: goto L_0047975C;
    case 183u: goto L_004797B0;
    case 184u: goto L_004797C0;
    case 185u: goto L_00479800;
    case 186u: goto L_0047985C;
    case 187u: goto L_0047986C;
    case 188u: goto L_00479898;
    case 189u: goto L_004798A8;
    case 190u: goto L_004798C0;
    case 191u: goto L_004798D0;
    case 192u: goto L_0047991C;
    case 193u: goto L_00479930;
    case 194u: goto L_00479994;
    case 195u: goto L_004799A8;
    case 196u: goto L_004799C8;
    case 197u: goto L_004799EC;
    case 198u: goto L_00479A08;
    case 199u: goto L_00479A1C;
    case 200u: goto L_00479A28;
    case 201u: goto L_00479A38;
    case 202u: goto L_00479A48;
    case 203u: goto L_00479A8C;
    case 204u: goto L_00479A98;
    case 205u: goto L_00479AA8;
    case 206u: goto L_00479AEC;
    case 207u: goto L_00479AF8;
    case 208u: goto L_00479B08;
    case 209u: goto L_00479B4C;
    case 210u: goto L_00479B58;
    case 211u: goto L_00479B68;
    case 212u: goto L_00479B7C;
    case 213u: goto L_00479BA0;
    case 214u: goto L_00479BB0;
    case 215u: goto L_00479BDC;
    case 216u: goto L_00479BE4;
    case 217u: goto L_00479C04;
    case 218u: goto L_00479C1C;
    case 219u: goto L_00479C70;
    case 220u: goto L_00479C80;
    case 221u: goto L_00479CC0;
    case 222u: goto L_00479D08;
    case 223u: goto L_00479D2C;
    case 224u: goto L_00479D4C;
    case 225u: goto L_00479D60;
    case 226u: goto L_00479D70;
    case 227u: goto L_00479DBC;
    case 228u: goto L_00479DD0;
    case 229u: goto L_00479E2C;
    case 230u: goto L_00479E40;
    case 231u: goto L_00479E60;
    case 232u: goto L_00479E84;
    case 233u: goto L_00479EA0;
    case 234u: goto L_00479EB4;
    case 235u: goto L_00479EC0;
    case 236u: goto L_00479ED0;
    case 237u: goto L_00479EE0;
    case 238u: goto L_00479F24;
    case 239u: goto L_00479F30;
    case 240u: goto L_00479F40;
    case 241u: goto L_00479F84;
    case 242u: goto L_00479F90;
    case 243u: goto L_00479FA0;
    case 244u: goto L_00479FB4;
    case 245u: goto L_00479FD0;
    case 246u: goto L_00479FE0;
    case 247u: goto L_0047A008;
    case 248u: goto L_0047A038;
    case 249u: goto L_0047A070;
    case 250u: goto L_0047A080;
    case 251u: goto L_0047A088;
    case 252u: goto L_0047A0D0;
    case 253u: goto L_0047A118;
    case 254u: goto L_0047A12C;
    case 255u: goto L_0047A158;
    case 256u: goto L_0047A168;
    case 257u: goto L_0047A170;
    case 258u: goto L_0047A1B8;
    case 259u: goto L_0047A200;
    case 260u: goto L_0047A214;
    case 261u: goto L_0047A238;
    case 262u: goto L_0047A248;
    case 263u: goto L_0047A250;
    case 264u: goto L_0047A298;
    case 265u: goto L_0047A2E0;
    case 266u: goto L_0047A2F4;
    case 267u: goto L_0047A324;
    case 268u: goto L_0047A334;
    case 269u: goto L_0047A33C;
    case 270u: goto L_0047A384;
    case 271u: goto L_0047A3CC;
    case 272u: goto L_0047A3E0;
    case 273u: goto L_0047A404;
    case 274u: goto L_0047A414;
    case 275u: goto L_0047A41C;
    case 276u: goto L_0047A464;
    case 277u: goto L_0047A4AC;
    case 278u: goto L_0047A4C0;
    case 279u: goto L_0047A4E4;
    case 280u: goto L_0047A4F4;
    case 281u: goto L_0047A4FC;
    case 282u: goto L_0047A544;
    case 283u: goto L_0047A58C;
    case 284u: goto L_0047A5A0;
    case 285u: goto L_0047A5C0;
    case 286u: goto L_0047A5D0;
    case 287u: goto L_0047A5D8;
    case 288u: goto L_0047A620;
    case 289u: goto L_0047A668;
    case 290u: goto L_0047A67C;
    case 291u: goto L_0047A6B4;
    case 292u: goto L_0047A6C4;
    case 293u: goto L_0047A6CC;
    case 294u: goto L_0047A714;
    case 295u: goto L_0047A75C;
    case 296u: goto L_0047A770;
    case 297u: goto L_0047A798;
    case 298u: goto L_0047A7A8;
    case 299u: goto L_0047A7B0;
    case 300u: goto L_0047A7F8;
    case 301u: goto L_0047A840;
    case 302u: goto L_0047A854;
    case 303u: goto L_0047A878;
    case 304u: goto L_0047A888;
    case 305u: goto L_0047A890;
    case 306u: goto L_0047A8D8;
    case 307u: goto L_0047A920;
    case 308u: goto L_0047A92C;
    case 309u: goto L_0047A940;
    case 310u: goto L_0047A978;
    case 311u: goto L_0047A99C;
    case 312u: goto L_0047A9B8;
    case 313u: goto L_0047AA40;
    case 314u: goto L_0047AA80;
    case 315u: goto L_0047AA90;
    case 316u: goto L_0047AAB0;
    case 317u: goto L_0047AAD0;
    case 318u: goto L_0047AB10;
    case 319u: goto L_0047AB3C;
    case 320u: goto L_0047AB60;
    case 321u: goto L_0047AB90;
    case 322u: goto L_0047ABA8;
    case 323u: goto L_0047ABC0;
    case 324u: goto L_0047AC2C;
    case 325u: goto L_0047AC50;
    case 326u: goto L_0047AC64;
    case 327u: goto L_0047AC84;
    case 328u: goto L_0047ACA8;
    case 329u: goto L_0047ACC4;
    case 330u: goto L_0047ACD8;
    case 331u: goto L_0047ACE4;
    case 332u: goto L_0047ACF4;
    case 333u: goto L_0047AD04;
    case 334u: goto L_0047AD44;
    case 335u: goto L_0047AD50;
    case 336u: goto L_0047AD60;
    case 337u: goto L_0047AD74;
    case 338u: goto L_0047AD84;
    case 339u: goto L_0047AD98;
    case 340u: goto L_0047ADAC;
    case 341u: goto L_0047ADDC;
    case 342u: goto L_0047ADF8;
    case 343u: goto L_0047AE14;
    case 344u: goto L_0047AE44;
    case 345u: goto L_0047AE60;
    case 346u: goto L_0047AE7C;
    case 347u: goto L_0047AEAC;
    case 348u: goto L_0047AEC8;
    case 349u: goto L_0047AEE4;
    case 350u: goto L_0047AF14;
    case 351u: goto L_0047AF30;
    case 352u: goto L_0047AF4C;
    case 353u: goto L_0047AF7C;
    case 354u: goto L_0047AF98;
    case 355u: goto L_0047AFB4;
    case 356u: goto L_0047AFE4;
    case 357u: goto L_0047B000;
    case 358u: goto L_0047B01C;
    case 359u: goto L_0047B04C;
    case 360u: goto L_0047B068;
    case 361u: goto L_0047B084;
    case 362u: goto L_0047B0B4;
    case 363u: goto L_0047B0D0;
    case 364u: goto L_0047B0EC;
    case 365u: goto L_0047B11C;
    case 366u: goto L_0047B138;
    case 367u: goto L_0047B154;
    case 368u: goto L_0047B184;
    case 369u: goto L_0047B1A0;
    case 370u: goto L_0047B1B8;
    case 371u: goto L_0047B1EC;
    case 372u: goto L_0047B208;
    case 373u: goto L_0047B230;
    case 374u: goto L_0047B258;
    case 375u: goto L_0047B280;
    case 376u: goto L_0047B290;
    case 377u: goto L_0047B2C8;
    case 378u: goto L_0047B2EC;
    case 379u: goto L_0047B308;
    case 380u: goto L_0047B328;
    case 381u: goto L_0047B340;
    case 382u: goto L_0047B350;
    case 383u: goto L_0047B39C;
    case 384u: goto L_0047B3B0;
    case 385u: goto L_0047B40C;
    case 386u: goto L_0047B420;
    case 387u: goto L_0047B440;
    case 388u: goto L_0047B464;
    case 389u: goto L_0047B480;
    case 390u: goto L_0047B494;
    case 391u: goto L_0047B4A0;
    case 392u: goto L_0047B4B0;
    case 393u: goto L_0047B4C0;
    case 394u: goto L_0047B504;
    case 395u: goto L_0047B510;
    case 396u: goto L_0047B520;
    case 397u: goto L_0047B534;
    case 398u: goto L_0047B550;
    case 399u: goto L_0047B560;
    case 400u: goto L_0047B570;
    case 401u: goto L_0047B5B8;
    case 402u: goto L_0047B5CC;
    case 403u: goto L_0047B5F4;
    case 404u: goto L_0047B604;
    case 405u: goto L_0047B640;
    case 406u: goto L_0047B664;
    case 407u: goto L_0047B67C;
    case 408u: goto L_0047B6A0;
    case 409u: goto L_0047B6EC;
    case 410u: goto L_0047B700;
    case 411u: goto L_0047B770;
    case 412u: goto L_0047B784;
    case 413u: goto L_0047B7A4;
    case 414u: goto L_0047B7C8;
    case 415u: goto L_0047B7E4;
    case 416u: goto L_0047B7F8;
    case 417u: goto L_0047B804;
    case 418u: goto L_0047B814;
    case 419u: goto L_0047B824;
    case 420u: goto L_0047B868;
    case 421u: goto L_0047B874;
    case 422u: goto L_0047B884;
    case 423u: goto L_0047B898;
    case 424u: goto L_0047B8A8;
    case 425u: goto L_0047B8BC;
    case 426u: goto L_0047B8CC;
    case 427u: goto L_0047B8E0;
    case 428u: goto L_0047B900;
    case 429u: goto L_0047B964;
    case 430u: goto L_0047B984;
    case 431u: goto L_0047B9C0;
    case 432u: goto L_0047B9E0;
    case 433u: goto L_0047B9F0;
    case 434u: goto L_0047BA48;
    case 435u: goto L_0047BA6C;
    case 436u: goto L_0047BA7C;
    case 437u: goto L_0047BA90;
    case 438u: goto L_0047BAA4;
    case 439u: goto L_0047BAB4;
    case 440u: goto L_0047BAD8;
    case 441u: goto L_0047BAF4;
    case 442u: goto L_0047BB08;
    case 443u: goto L_0047BB50;
    case 444u: goto L_0047BB7C;
    case 445u: goto L_0047BBC4;
    case 446u: goto L_0047BBFC;
    case 447u: goto L_0047BC14;
    case 448u: goto L_0047BC2C;
    case 449u: goto L_0047BC40;
    case 450u: goto L_0047BC58;
    case 451u: goto L_0047BC88;
    case 452u: goto L_0047BCC4;
    case 453u: goto L_0047BCF0;
    case 454u: goto L_0047BD38;
    case 455u: goto L_0047BD70;
    case 456u: goto L_0047BD88;
    case 457u: goto L_0047BDA0;
    case 458u: goto L_0047BDB4;
    case 459u: goto L_0047BDCC;
    case 460u: goto L_0047BDFC;
    case 461u: goto L_0047BE18;
    case 462u: goto L_0047BE44;
    case 463u: goto L_0047BE8C;
    case 464u: goto L_0047BEC4;
    case 465u: goto L_0047BEDC;
    case 466u: goto L_0047BEF4;
    case 467u: goto L_0047BF08;
    case 468u: goto L_0047BF20;
    case 469u: goto L_0047BF50;
    case 470u: goto L_0047BF5C;
    case 471u: goto L_0047BF7C;
    case 472u: goto L_0047BF8C;
    case 473u: goto L_0047BF98;
    case 474u: goto L_0047BFD0;
    case 475u: goto L_0047BFE4;
    case 476u: goto L_0047BFEC;
    case 477u: goto L_0047BFF4;
    default: bad_entry(c, 0x00478000u); return;
    }
L_00478000:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 9;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00478058; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478034u); set32(c.r[4], ld32((c.r[2].w[0] + 320u)));  if (depth < kMaxDepth) unit_00F4(c, 210u, depth + 1u); else { c.pc = 0x004D1E00u; return; } if (c.pc != 0x00478034u) [[unlikely]] return; }
L_00478034:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478040u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_00EE(c, 171u, depth + 1u); else { c.pc = 0x004B9630u; return; } if (c.pc != 0x00478040u) [[unlikely]] return; }
L_00478040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478048u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 390u, depth + 1u); else { c.pc = 0x00416AF0u; return; } if (c.pc != 0x00478048u) [[unlikely]] return; }
L_00478048:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478054u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00C2(c, 421u, depth + 1u); else { c.pc = 0x0040BAB0u; return; } if (c.pc != 0x00478054u) [[unlikely]] return; }
L_00478054:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00478058:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00478070:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00478080:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_004780D0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 30704u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004780B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 25632u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_004780B4:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004780CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004780CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004780CCu) [[unlikely]] return; }
L_004780CC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004780D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004780E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + 25632u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] + 30704u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[5].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 72u);
    st32((c.r[5].w[0] + 96u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478130u); set32(c.r[5], c.r[5].w[0] - 27424u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00478130u) [[unlikely]] return; }
L_00478130:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 27424u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478144u); set32(c.r[5], c.r[5].w[0] - 288u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00478144u) [[unlikely]] return; }
L_00478144:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_00478154; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), 0u);  if (t) { goto L_00478198; } }
L_00478154:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 27424u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478164u); set32(c.r[5], c.r[5].w[0] - 296u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00478164u) [[unlikely]] return; }
L_00478164:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_00478178; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[2].w[0]);  if (t) { goto L_00478198; } }
L_00478178:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 27424u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478188u); set32(c.r[5], c.r[5].w[0] - 304u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00478188u) [[unlikely]] return; }
L_00478188:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0047819C; }
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 2;
L_00478198:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0047819C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004781A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 313u, depth + 1u); else { c.pc = 0x0040AC60u; return; } if (c.pc != 0x004781A4u) [[unlikely]] return; }
L_004781A4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004781B8u); set32(c.r[6], c.r[6].w[0] - 27418u);  if (depth < kMaxDepth) unit_00C2(c, 456u, depth + 1u); else { c.pc = 0x0040BF10u; return; } if (c.pc != 0x004781B8u) [[unlikely]] return; }
L_004781B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004781C4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C2(c, 314u, depth + 1u); else { c.pc = 0x0040AC70u; return; } if (c.pc != 0x004781C4u) [[unlikely]] return; }
L_004781C4:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 624u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004781D4u); st32((c.r[16].w[0] + 152u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C6(c, 129u, depth + 1u); else { c.pc = 0x00419040u; return; } if (c.pc != 0x004781D4u) [[unlikely]] return; }
L_004781D4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004781E4u); set32(c.r[5], c.r[5].w[0] - 27411u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004781E4u) [[unlikely]] return; }
L_004781E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[29].w[0] + 64u), 0u);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 624u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[29].w[0] + 72u), 0u);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[6], 0u + 1u);
    st8((c.r[29].w[0] + 80u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], c.r[29].w[0] + 48u);
    set32(c.r[5], ld32((c.r[16].w[0] + 632u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 636u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478228u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00DD(c, 138u, depth + 1u); else { c.pc = 0x00475130u; return; } if (c.pc != 0x00478228u) [[unlikely]] return; }
L_00478228:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478234u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00478234u) [[unlikely]] return; }
L_00478234:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00478250:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00478300; } }
L_00478278:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478298u); set32(c.r[4], ld32((c.r[16].w[0] + 152u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00478298u) [[unlikely]] return; }
L_00478298:
    st32((c.r[16].w[0] + 152u), 0u);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 148u), 0u);  if (t) { goto L_004782D0; } }
L_004782A8:
    set32(c.r[2], ld32((c.r[16].w[0] + 160u)));
    set32(c.r[4], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[20], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004782C8u); set32(c.r[4], ld32((c.r[20].w[0] + 96u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004782C8u) [[unlikely]] return; }
L_004782C8:
    st32((c.r[20].w[0] + 96u), 0u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_004782D0:
    set32(c.r[2], ld32((c.r[16].w[0] + 156u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004782A8u | kUnwind; return; } goto L_004782A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004782E8u); set32(c.r[4], ld32((c.r[16].w[0] + 160u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004782E8u) [[unlikely]] return; }
L_004782E8:
    st32((c.r[16].w[0] + 160u), 0u);
    st32((c.r[16].w[0] + 156u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004782F8u); set32(c.r[4], ld32((c.r[16].w[0] + 128u)));  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004782F8u) [[unlikely]] return; }
L_004782F8:
    st32((c.r[16].w[0] + 128u), 0u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_00478300:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00478278u | kUnwind; return; } goto L_00478278; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478318u); set32(c.r[4], ld32((c.r[19].w[0] + 4u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00478318u) [[unlikely]] return; }
L_00478318:
    st32((c.r[19].w[0] + 4u), 0u);
    st32((c.r[19].w[0]), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00478340:
    c.f[1] = ld32((c.r[4].w[0] + 16u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::sub(c.f[1], c.f[0]);  c.pc = t; return; }
L_00478350:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 320u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_004783B4; } }
L_00478378:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478380u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x00478380u) [[unlikely]] return; }
L_00478380:
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1200u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_004783B4; }
    set32(c.r[4], ld32((c.r[28].w[0] - 25112u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004783A4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 187u, depth + 1u); else { c.pc = 0x0040D4D0u; return; } if (c.pc != 0x004783A4u) [[unlikely]] return; }
L_004783A4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004783B0u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_00EE(c, 171u, depth + 1u); else { c.pc = 0x004B9630u; return; } if (c.pc != 0x004783B0u) [[unlikely]] return; }
L_004783B0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_004783B4:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[16].w[0] + 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00478378u | kUnwind; return; } goto L_00478378; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004783E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 9;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_004784E8; }
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[12]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478420u); set32(c.r[4], ld32((c.r[2].w[0] + 320u)));  if (depth < kMaxDepth) unit_00F4(c, 210u, depth + 1u); else { c.pc = 0x004D1E00u; return; } if (c.pc != 0x00478420u) [[unlikely]] return; }
L_00478420:
    set32(c.r[3], ld32((c.r[2].w[0] + 1104u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 124u)));  if (t) { goto L_00478434; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00478434:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1156u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[5].w[0] + 2316u));  goto L_0047845C; }
    set32(c.r[4], ld32((c.r[5].w[0] + 2308u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00478458; } }
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00478458:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2316u));
    c.budget -= 1;
L_0047845C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[2].w[0] + 132u)));  goto L_00478490; }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2318u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0047848C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 13u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0047848C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478484u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 359u, depth + 1u); else { c.pc = 0x00416800u; return; } if (c.pc != 0x00478484u) [[unlikely]] return; }
L_00478484:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004784E4; } }
L_0047848C:
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_00478490:
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.f[1] = ld32((c.r[16].w[0] + 8u));  goto L_004784CC; }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 12u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_004784BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004784B4u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 372u, depth + 1u); else { c.pc = 0x00416940u; return; } if (c.pc != 0x004784B4u) [[unlikely]] return; }
L_004784B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004784C4; } }
L_004784BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004784C4u);  if (depth < kMaxDepth) unit_00C5(c, 359u, depth + 1u); else { c.pc = 0x00416800u; return; } if (c.pc != 0x004784C4u) [[unlikely]] return; }
L_004784C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004784E4; } }
L_004784CC:
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004784E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004784E4u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 359u, depth + 1u); else { c.pc = 0x00416800u; return; } if (c.pc != 0x004784E4u) [[unlikely]] return; }
L_004784E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004784E8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00478500:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 8u), 0u);
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 13u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 320u)));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00478570; } }
L_00478534:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047853Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x0047853Cu) [[unlikely]] return; }
L_0047853C:
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1200u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_00478570; }
    set32(c.r[4], ld32((c.r[28].w[0] - 25112u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478560u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 187u, depth + 1u); else { c.pc = 0x0040D4D0u; return; } if (c.pc != 0x00478560u) [[unlikely]] return; }
L_00478560:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047856Cu); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_00EE(c, 171u, depth + 1u); else { c.pc = 0x004B9630u; return; } if (c.pc != 0x0047856Cu) [[unlikely]] return; }
L_0047856C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00478570:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[16].w[0] + 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00478534u | kUnwind; return; } goto L_00478534; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004785A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_004785F0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 30736u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004785D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 25632u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_004785D4:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004785EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004785ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004785ECu) [[unlikely]] return; }
L_004785EC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004785F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00478600:
    set32(c.r[29], c.r[29].w[0] - 336u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 25632u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x42700000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[4].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + 30736u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[2], 0u + 5u);
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 13u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 16u), c.r[6].w[0]);
    st32((c.r[5].w[0] + 100u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 72u);
    st32((c.r[5].w[0] + 96u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478668u); set32(c.r[5], c.r[5].w[0] - 27198u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00478668u) [[unlikely]] return; }
L_00478668:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 27198u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047867Cu); set32(c.r[5], c.r[5].w[0] - 288u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0047867Cu) [[unlikely]] return; }
L_0047867C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_0047868C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), 0u);  if (t) { goto L_004786D0; } }
L_0047868C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 27198u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047869Cu); set32(c.r[5], c.r[5].w[0] - 296u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0047869Cu) [[unlikely]] return; }
L_0047869C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004786B0; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[2].w[0]);  if (t) { goto L_004786D0; } }
L_004786B0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 27198u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004786C0u); set32(c.r[5], c.r[5].w[0] - 304u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x004786C0u) [[unlikely]] return; }
L_004786C0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004786D4; }
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 2;
L_004786D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004786D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004786DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 313u, depth + 1u); else { c.pc = 0x0040AC60u; return; } if (c.pc != 0x004786DCu) [[unlikely]] return; }
L_004786DC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004786F0u); set32(c.r[6], c.r[6].w[0] - 27193u);  if (depth < kMaxDepth) unit_00C2(c, 456u, depth + 1u); else { c.pc = 0x0040BF10u; return; } if (c.pc != 0x004786F0u) [[unlikely]] return; }
L_004786F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004786FCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C2(c, 314u, depth + 1u); else { c.pc = 0x0040AC70u; return; } if (c.pc != 0x004786FCu) [[unlikely]] return; }
L_004786FC:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 624u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047870Cu); st32((c.r[16].w[0] + 152u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C6(c, 129u, depth + 1u); else { c.pc = 0x00419040u; return; } if (c.pc != 0x0047870Cu) [[unlikely]] return; }
L_0047870C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047871Cu); set32(c.r[5], c.r[5].w[0] - 27186u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0047871Cu) [[unlikely]] return; }
L_0047871C:
    set32(c.r[2], 0u + 4u);
    st32((c.r[29].w[0] + 304u), 0u);
    st32((c.r[29].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 624u);
    st32((c.r[29].w[0] + 308u), 0u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 312u), 0u);
    set32(c.r[7], c.r[29].w[0] + 288u);
    st8((c.r[29].w[0] + 320u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[16].w[0] + 632u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 636u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047875Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00DD(c, 138u, depth + 1u); else { c.pc = 0x00475130u; return; } if (c.pc != 0x0047875Cu) [[unlikely]] return; }
L_0047875C:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478768u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00478768u) [[unlikely]] return; }
L_00478768:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478778u); set32(c.r[5], c.r[5].w[0] - 27186u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00478778u) [[unlikely]] return; }
L_00478778:
    c.f[1] = ld32((c.r[28].w[0] - 32344u));
    set32(c.r[2], 0u + 4u);
    c.f[0] = ld32((c.r[28].w[0] - 32212u));
    st32((c.r[29].w[0] + 256u), 0u);
    st8((c.r[29].w[0] + 272u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[16].w[0] + 624u);
    st32((c.r[29].w[0] + 260u), c.f[1]);
    st32((c.r[29].w[0] + 268u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 264u), c.f[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 632u)));
    set32(c.r[7], c.r[29].w[0] + 240u);
    set32(c.r[2], ld32((c.r[16].w[0] + 636u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004787C0u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00DD(c, 138u, depth + 1u); else { c.pc = 0x00475130u; return; } if (c.pc != 0x004787C0u) [[unlikely]] return; }
L_004787C0:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004787CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004787CCu) [[unlikely]] return; }
L_004787CC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004787DCu); set32(c.r[5], c.r[5].w[0] - 27186u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004787DCu) [[unlikely]] return; }
L_004787DC:
    c.f[1] = ld32((c.r[28].w[0] - 32344u));
    set32(c.r[2], 0u + 3u);
    c.f[0] = ld32((c.r[28].w[0] - 31556u));
    st32((c.r[29].w[0] + 208u), 0u);
    st8((c.r[29].w[0] + 224u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[16].w[0] + 624u);
    st32((c.r[29].w[0] + 212u), c.f[1]);
    st32((c.r[29].w[0] + 220u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 216u), c.f[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 632u)));
    set32(c.r[7], c.r[29].w[0] + 192u);
    set32(c.r[2], ld32((c.r[16].w[0] + 636u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478824u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00DD(c, 138u, depth + 1u); else { c.pc = 0x00475130u; return; } if (c.pc != 0x00478824u) [[unlikely]] return; }
L_00478824:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478830u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00478830u) [[unlikely]] return; }
L_00478830:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478840u); set32(c.r[5], c.r[5].w[0] - 27186u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00478840u) [[unlikely]] return; }
L_00478840:
    c.f[1] = ld32((c.r[28].w[0] - 32344u));
    set32(c.r[2], 0u + 5u);
    c.f[0] = ld32((c.r[28].w[0] - 31552u));
    st32((c.r[29].w[0] + 160u), 0u);
    st8((c.r[29].w[0] + 176u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[16].w[0] + 624u);
    st32((c.r[29].w[0] + 164u), c.f[1]);
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 168u), c.f[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 632u)));
    set32(c.r[7], c.r[29].w[0] + 144u);
    set32(c.r[2], ld32((c.r[16].w[0] + 636u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478888u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00DD(c, 138u, depth + 1u); else { c.pc = 0x00475130u; return; } if (c.pc != 0x00478888u) [[unlikely]] return; }
L_00478888:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478894u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00478894u) [[unlikely]] return; }
L_00478894:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004788A4u); set32(c.r[5], c.r[5].w[0] - 27186u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004788A4u) [[unlikely]] return; }
L_004788A4:
    c.f[1] = ld32((c.r[28].w[0] - 32344u));
    set32(c.r[2], 0u + 2u);
    c.f[0] = ld32((c.r[28].w[0] - 31548u));
    st32((c.r[29].w[0] + 112u), 0u);
    st8((c.r[29].w[0] + 128u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[16].w[0] + 624u);
    st32((c.r[29].w[0] + 116u), c.f[1]);
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 120u), c.f[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 632u)));
    set32(c.r[7], c.r[29].w[0] + 96u);
    set32(c.r[2], ld32((c.r[16].w[0] + 636u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004788ECu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00DD(c, 138u, depth + 1u); else { c.pc = 0x00475130u; return; } if (c.pc != 0x004788ECu) [[unlikely]] return; }
L_004788EC:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004788F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004788F8u) [[unlikely]] return; }
L_004788F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478908u); set32(c.r[5], c.r[5].w[0] - 27186u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00478908u) [[unlikely]] return; }
L_00478908:
    c.f[1] = ld32((c.r[28].w[0] - 32344u));
    set32(c.r[2], 0u + 6u);
    c.f[0] = ld32((c.r[28].w[0] - 31544u));
    st32((c.r[29].w[0] + 64u), 0u);
    st8((c.r[29].w[0] + 80u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[16].w[0] + 624u);
    st32((c.r[29].w[0] + 68u), c.f[1]);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 72u), c.f[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 632u)));
    set32(c.r[7], c.r[29].w[0] + 48u);
    set32(c.r[2], ld32((c.r[16].w[0] + 636u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478950u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00DD(c, 138u, depth + 1u); else { c.pc = 0x00475130u; return; } if (c.pc != 0x00478950u) [[unlikely]] return; }
L_00478950:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047895Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0047895Cu) [[unlikely]] return; }
L_0047895C:
    set32(c.r[4], ld32((c.r[16].w[0] + 700u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047896Cu); set32(c.r[5], c.r[5].w[0] - 27171u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0047896Cu) [[unlikely]] return; }
L_0047896C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00478984; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478980u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_00B9(c, 422u, depth + 1u); else { c.pc = 0x003E7B80u; return; } if (c.pc != 0x00478980u) [[unlikely]] return; }
L_00478980:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00478984:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_004789A0:
    c.f[1] = ld32((c.r[4].w[0] + 64u));
    c.f[0] = ld32((c.r[4].w[0] + 56u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::sub(c.f[1], c.f[0]);  c.pc = t; return; }
L_004789B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 4u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 20u)));
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[5].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_004789E4; }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_004789E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004789E0u);  if (depth < kMaxDepth) unit_00C5(c, 359u, depth + 1u); else { c.pc = 0x00416800u; return; } if (c.pc != 0x004789E0u) [[unlikely]] return; }
L_004789E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004789E4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004789F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00478A00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 10;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00478BD8; }
    c.f[0] = ld32((c.r[17].w[0] + 56u));
    c.f[0] = fp::add(c.f[0], c.f[12]);
    st32((c.r[17].w[0] + 56u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478A44u); set32(c.r[4], ld32((c.r[2].w[0] + 320u)));  if (depth < kMaxDepth) unit_00F4(c, 210u, depth + 1u); else { c.pc = 0x004D1E00u; return; } if (c.pc != 0x00478A44u) [[unlikely]] return; }
L_00478A44:
    set32(c.r[4], ld32((c.r[2].w[0] + 124u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], ld32((c.r[4].w[0] + 2340u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00478A84; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 25572u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[5].w[0] - 26992u);
    set32(c.r[6], c.r[6].w[0] - 26985u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478A7Cu); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00CA(c, 251u, depth + 1u); else { c.pc = 0x00429930u; return; } if (c.pc != 0x00478A7Cu) [[unlikely]] return; }
L_00478A7C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 61u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00478A84:
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 2340u)));
    c.budget -= 5;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 124u)));  goto L_00478AC8; }
    set32(c.r[4], ld32((c.r[28].w[0] - 25572u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[5].w[0] - 26992u);
    set32(c.r[6], c.r[6].w[0] - 26975u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478ABCu); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00CA(c, 251u, depth + 1u); else { c.pc = 0x00429930u; return; } if (c.pc != 0x00478ABCu) [[unlikely]] return; }
L_00478ABC:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 61u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 3;
L_00478AC8:
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], ld32((c.r[4].w[0] + 2340u)));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 124u)));  goto L_00478B08; }
    set32(c.r[4], ld32((c.r[28].w[0] - 25572u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[5].w[0] - 26992u);
    set32(c.r[6], c.r[6].w[0] - 26965u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478AFCu); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00CA(c, 251u, depth + 1u); else { c.pc = 0x00429930u; return; } if (c.pc != 0x00478AFCu) [[unlikely]] return; }
L_00478AFC:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 60u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 3;
L_00478B08:
    set32(c.r[7], 0u + 4u);
    set32(c.r[3], ld32((c.r[3].w[0] + 2340u)));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[7].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 132u)));  goto L_00478B44; }
    set32(c.r[4], ld32((c.r[28].w[0] - 25572u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[5].w[0] - 26992u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478B38u); set32(c.r[6], c.r[6].w[0] - 26965u);  if (depth < kMaxDepth) unit_00CA(c, 251u, depth + 1u); else { c.pc = 0x00429930u; return; } if (c.pc != 0x00478B38u) [[unlikely]] return; }
L_00478B38:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 60u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 3;
L_00478B44:
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.f[1] = ld32((c.r[17].w[0] + 56u));  goto L_00478B90; }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 60u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  goto L_00478B80; }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 61u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00478B7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478B74u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 372u, depth + 1u); else { c.pc = 0x00416940u; return; } if (c.pc != 0x00478B74u) [[unlikely]] return; }
L_00478B74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00478B88; } }
L_00478B7C:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_00478B80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478B88u);  if (depth < kMaxDepth) unit_00C5(c, 359u, depth + 1u); else { c.pc = 0x00416800u; return; } if (c.pc != 0x00478B88u) [[unlikely]] return; }
L_00478B88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00478BD4; } }
L_00478B90:
    c.f[0] = ld32((c.r[17].w[0] + 64u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00478BD4; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 60u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  goto L_00478BCC; }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 61u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00478BC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478BC0u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 372u, depth + 1u); else { c.pc = 0x00416940u; return; } if (c.pc != 0x00478BC0u) [[unlikely]] return; }
L_00478BC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00478BD4; } }
L_00478BC8:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_00478BCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478BD4u);  if (depth < kMaxDepth) unit_00C5(c, 359u, depth + 1u); else { c.pc = 0x00416800u; return; } if (c.pc != 0x00478BD4u) [[unlikely]] return; }
L_00478BD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00478BD8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00478BF0:
    st32((c.r[4].w[0] + 56u), 0u);
    st8((c.r[4].w[0] + 60u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 61u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00478C00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00478C94; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 30768u);
    set32(c.r[2], c.r[2].w[0] + 30796u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00478C40; } }
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.budget -= 1;
L_00478C40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478C48u); set32(c.r[4], ld32((c.r[28].w[0] - 25112u)));  if (depth < kMaxDepth) unit_00C3(c, 187u, depth + 1u); else { c.pc = 0x0040D4D0u; return; } if (c.pc != 0x00478C48u) [[unlikely]] return; }
L_00478C48:
    set32(c.r[4], c.r[17].w[0] + 8u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00478C68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 27824u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478C68u); st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C3(c, 34u, depth + 1u); else { c.pc = 0x0040C3D0u; return; } if (c.pc != 0x00478C68u) [[unlikely]] return; }
L_00478C68:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00478C80; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 25632u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 4;
L_00478C80:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00478C98; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478C94u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00478C94u) [[unlikely]] return; }
L_00478C94:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00478C98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00478CB0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 25632u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[18], c.r[17].w[0] + 8u);
    st32((c.r[4].w[0] + 4u), c.r[16].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478CF0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 84u, depth + 1u); else { c.pc = 0x0040C9F0u; return; } if (c.pc != 0x00478CF0u) [[unlikely]] return; }
L_00478CF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 27824u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478D0Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00C3(c, 99u, depth + 1u); else { c.pc = 0x0040CBA0u; return; } if (c.pc != 0x00478D0Cu) [[unlikely]] return; }
L_00478D0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 30768u);
    set32(c.r[3], c.r[3].w[0] + 30796u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    st32((c.r[17].w[0] + 56u), 0u);
    st8((c.r[17].w[0] + 60u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 61u), static_cast<std::uint8_t>(0u));
    c.budget -= 13;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_00478D44; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00478D44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478D4Cu); set32(c.r[4], ld32((c.r[28].w[0] - 25112u)));  if (depth < kMaxDepth) unit_00C3(c, 195u, depth + 1u); else { c.pc = 0x0040D5B0u; return; } if (c.pc != 0x00478D4Cu) [[unlikely]] return; }
L_00478D4C:
    set32(c.r[2], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 72u);
    set32(c.r[5], c.r[5].w[0] - 26955u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478D68u); st32((c.r[16].w[0] + 96u), 0u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00478D68u) [[unlikely]] return; }
L_00478D68:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 26955u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478D7Cu); set32(c.r[5], c.r[5].w[0] - 288u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00478D7Cu) [[unlikely]] return; }
L_00478D7C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_00478D8C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), 0u);  if (t) { goto L_00478DD0; } }
L_00478D8C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 26955u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478D9Cu); set32(c.r[5], c.r[5].w[0] - 296u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00478D9Cu) [[unlikely]] return; }
L_00478D9C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_00478DB0; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[2].w[0]);  if (t) { goto L_00478DD0; } }
L_00478DB0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 26955u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478DC0u); set32(c.r[5], c.r[5].w[0] - 304u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00478DC0u) [[unlikely]] return; }
L_00478DC0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00478DD4; }
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 2;
L_00478DD0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00478DD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478DDCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 313u, depth + 1u); else { c.pc = 0x0040AC60u; return; } if (c.pc != 0x00478DDCu) [[unlikely]] return; }
L_00478DDC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478DF0u); set32(c.r[6], c.r[6].w[0] - 26950u);  if (depth < kMaxDepth) unit_00C2(c, 456u, depth + 1u); else { c.pc = 0x0040BF10u; return; } if (c.pc != 0x00478DF0u) [[unlikely]] return; }
L_00478DF0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478DFCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C2(c, 314u, depth + 1u); else { c.pc = 0x0040AC70u; return; } if (c.pc != 0x00478DFCu) [[unlikely]] return; }
L_00478DFC:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 624u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478E0Cu); st32((c.r[16].w[0] + 152u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C6(c, 129u, depth + 1u); else { c.pc = 0x00419040u; return; } if (c.pc != 0x00478E0Cu) [[unlikely]] return; }
L_00478E0C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478E1Cu); set32(c.r[5], c.r[5].w[0] - 26943u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00478E1Cu) [[unlikely]] return; }
L_00478E1C:
    c.f[0] = ld32((c.r[28].w[0] - 32564u));
    set32(c.r[2], 0u + 4u);
    st32((c.r[29].w[0] + 80u), 0u);
    set32(c.r[4], c.r[16].w[0] + 624u);
    st32((c.r[29].w[0] + 88u), 0u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    st8((c.r[29].w[0] + 96u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], c.r[29].w[0] + 64u);
    set32(c.r[5], ld32((c.r[16].w[0] + 632u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 636u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478E60u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00DD(c, 138u, depth + 1u); else { c.pc = 0x00475130u; return; } if (c.pc != 0x00478E60u) [[unlikely]] return; }
L_00478E60:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478E6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00478E6Cu) [[unlikely]] return; }
L_00478E6C:
    set32(c.r[4], ld32((c.r[16].w[0] + 700u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478E7Cu); set32(c.r[5], c.r[5].w[0] - 26929u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00478E7Cu) [[unlikely]] return; }
L_00478E7C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00478E94; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478E90u); set32(c.r[5], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_00B9(c, 422u, depth + 1u); else { c.pc = 0x003E7B80u; return; } if (c.pc != 0x00478E90u) [[unlikely]] return; }
L_00478E90:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00478E94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00478EB0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004789B0u | kUnwind; return; } goto L_004789B0; }
L_00478EC0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00478C00u | kUnwind; return; } goto L_00478C00; }
L_00478ED0:
    c.f[1] = ld32((c.r[4].w[0] + 20u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::sub(c.f[1], c.f[0]);  c.pc = t; return; }
L_00478EE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[0] = ld32((c.r[28].w[0] - 31720u));
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    st32((c.r[28].w[0] - 30152u), c.f[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 320u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00478F80; } }
L_00478F10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478F18u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x00478F18u) [[unlikely]] return; }
L_00478F18:
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_00478F80; }
    set32(c.r[4], ld32((c.r[16].w[0] + 420u)));
    c.f[12] = ld32((c.r[28].w[0] - 32344u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478F40u); set32(c.r[5], 0u + 11u);  if (depth < kMaxDepth) unit_00F9(c, 45u, depth + 1u); else { c.pc = 0x004E4A50u; return; } if (c.pc != 0x00478F40u) [[unlikely]] return; }
L_00478F40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478F48u); set32(c.r[4], ld32((c.r[16].w[0] + 68u)));  if (depth < kMaxDepth) unit_00BE(c, 228u, depth + 1u); else { c.pc = 0x003FA660u; return; } if (c.pc != 0x00478F48u) [[unlikely]] return; }
L_00478F48:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00478F7C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00478F60u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B1(c, 461u, depth + 1u); else { c.pc = 0x003C7B40u; return; } if (c.pc != 0x00478F60u) [[unlikely]] return; }
L_00478F60:
    c.f[1] = ld32((c.r[28].w[0] - 32620u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32564u));
    st32((c.r[16].w[0] + 64u), c.f[1]);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 72u), c.f[0]);
    c.budget -= 7;
L_00478F7C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00478F80:
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[17].w[0] + 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00478F10u | kUnwind; return; } goto L_00478F10; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00478FB0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00478EE0u | kUnwind; return; } goto L_00478EE0; }
L_00478FC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 9;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_004790C0; }
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[12]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479000u); set32(c.r[4], ld32((c.r[2].w[0] + 320u)));  if (depth < kMaxDepth) unit_00F4(c, 210u, depth + 1u); else { c.pc = 0x004D1E00u; return; } if (c.pc != 0x00479000u) [[unlikely]] return; }
L_00479000:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 12u));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[2].w[0] + 132u)));  goto L_00479068; }
    set32(c.r[4], ld32((c.r[2].w[0] + 124u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1156u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00479064; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 2308u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00479064; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 8u)));  goto L_00479060; }
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0047905C; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479054u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 372u, depth + 1u); else { c.pc = 0x00416940u; return; } if (c.pc != 0x00479054u) [[unlikely]] return; }
L_00479054:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004790BC; } }
L_0047905C:
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 1;
L_00479060:
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 1;
L_00479064:
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_00479068:
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.f[1] = ld32((c.r[16].w[0] + 8u));  goto L_004790A4; }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 12u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_00479094; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047908Cu); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 372u, depth + 1u); else { c.pc = 0x00416940u; return; } if (c.pc != 0x0047908Cu) [[unlikely]] return; }
L_0047908C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047909C; } }
L_00479094:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047909Cu);  if (depth < kMaxDepth) unit_00C5(c, 359u, depth + 1u); else { c.pc = 0x00416800u; return; } if (c.pc != 0x0047909Cu) [[unlikely]] return; }
L_0047909C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004790BC; } }
L_004790A4:
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004790BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004790BCu); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 359u, depth + 1u); else { c.pc = 0x00416800u; return; } if (c.pc != 0x004790BCu) [[unlikely]] return; }
L_004790BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004790C0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004790D0:
    st32((c.r[4].w[0] + 8u), 0u);
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { st32((c.r[4].w[0] + 16u), 0u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00478EE0u | kUnwind; return; } goto L_00478EE0; }
L_004790E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00479130; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 30832u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00479114; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 25632u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00479114:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0047912C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047912Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0047912Cu) [[unlikely]] return; }
L_0047912C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00479130:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00479140:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 25632u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x42700000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[4].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + 30832u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[2], 0u + 2u);
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), c.r[6].w[0]);
    st32((c.r[5].w[0] + 100u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 72u);
    st32((c.r[5].w[0] + 96u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004791A8u); set32(c.r[5], c.r[5].w[0] - 26654u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004791A8u) [[unlikely]] return; }
L_004791A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 26654u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004791BCu); set32(c.r[5], c.r[5].w[0] - 288u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x004791BCu) [[unlikely]] return; }
L_004791BC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004791CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), 0u);  if (t) { goto L_00479210; } }
L_004791CC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 26654u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004791DCu); set32(c.r[5], c.r[5].w[0] - 296u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x004791DCu) [[unlikely]] return; }
L_004791DC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004791F0; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[2].w[0]);  if (t) { goto L_00479210; } }
L_004791F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 26654u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479200u); set32(c.r[5], c.r[5].w[0] - 304u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00479200u) [[unlikely]] return; }
L_00479200:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00479214; }
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 2;
L_00479210:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00479214:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047921Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C2(c, 313u, depth + 1u); else { c.pc = 0x0040AC60u; return; } if (c.pc != 0x0047921Cu) [[unlikely]] return; }
L_0047921C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479230u); set32(c.r[6], c.r[6].w[0] - 26648u);  if (depth < kMaxDepth) unit_00C2(c, 456u, depth + 1u); else { c.pc = 0x0040BF10u; return; } if (c.pc != 0x00479230u) [[unlikely]] return; }
L_00479230:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047923Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C2(c, 314u, depth + 1u); else { c.pc = 0x0040AC70u; return; } if (c.pc != 0x0047923Cu) [[unlikely]] return; }
L_0047923C:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 624u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047924Cu); st32((c.r[16].w[0] + 152u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C6(c, 129u, depth + 1u); else { c.pc = 0x00419040u; return; } if (c.pc != 0x0047924Cu) [[unlikely]] return; }
L_0047924C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047925Cu); set32(c.r[5], c.r[5].w[0] - 26641u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0047925Cu) [[unlikely]] return; }
L_0047925C:
    c.f[0] = ld32((c.r[28].w[0] - 31560u));
    set32(c.r[2], 0u + 4u);
    st32((c.r[29].w[0] + 160u), 0u);
    set32(c.r[4], c.r[16].w[0] + 624u);
    st32((c.r[29].w[0] + 168u), 0u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 164u), c.f[0]);
    st8((c.r[29].w[0] + 176u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], c.r[29].w[0] + 144u);
    set32(c.r[5], ld32((c.r[16].w[0] + 632u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 636u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004792A0u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00DD(c, 138u, depth + 1u); else { c.pc = 0x00475130u; return; } if (c.pc != 0x004792A0u) [[unlikely]] return; }
L_004792A0:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004792ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004792ACu) [[unlikely]] return; }
L_004792AC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004792BCu); set32(c.r[5], c.r[5].w[0] - 26641u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004792BCu) [[unlikely]] return; }
L_004792BC:
    c.f[0] = ld32((c.r[28].w[0] - 32304u));
    set32(c.r[2], 0u + 3u);
    st32((c.r[29].w[0] + 112u), 0u);
    set32(c.r[4], c.r[16].w[0] + 624u);
    st32((c.r[29].w[0] + 120u), 0u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    st8((c.r[29].w[0] + 128u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], c.r[29].w[0] + 96u);
    set32(c.r[5], ld32((c.r[16].w[0] + 632u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 636u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479300u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00DD(c, 138u, depth + 1u); else { c.pc = 0x00475130u; return; } if (c.pc != 0x00479300u) [[unlikely]] return; }
L_00479300:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047930Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0047930Cu) [[unlikely]] return; }
L_0047930C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047931Cu); set32(c.r[5], c.r[5].w[0] - 26641u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0047931Cu) [[unlikely]] return; }
L_0047931C:
    c.f[0] = ld32((c.r[28].w[0] - 31540u));
    set32(c.r[2], 0u + 5u);
    st32((c.r[29].w[0] + 64u), 0u);
    set32(c.r[4], c.r[16].w[0] + 624u);
    st32((c.r[29].w[0] + 72u), 0u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    st8((c.r[29].w[0] + 80u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], c.r[29].w[0] + 48u);
    set32(c.r[5], ld32((c.r[16].w[0] + 632u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 636u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479360u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00DD(c, 138u, depth + 1u); else { c.pc = 0x00475130u; return; } if (c.pc != 0x00479360u) [[unlikely]] return; }
L_00479360:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047936Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0047936Cu) [[unlikely]] return; }
L_0047936C:
    set32(c.r[4], ld32((c.r[16].w[0] + 700u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047937Cu); set32(c.r[5], c.r[5].w[0] - 26626u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0047937Cu) [[unlikely]] return; }
L_0047937C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00479394; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479390u); set32(c.r[5], c.r[17].w[0] + 20u);  if (depth < kMaxDepth) unit_00B9(c, 422u, depth + 1u); else { c.pc = 0x003E7B80u; return; } if (c.pc != 0x00479390u) [[unlikely]] return; }
L_00479390:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00479394:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_004793B0:
    c.f[1] = ld32((c.r[4].w[0] + 16u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::sub(c.f[1], c.f[0]);  c.pc = t; return; }
L_004793C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.f[20] = c.f[12];  if (t) { goto L_0047948C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004793F8u); set32(c.r[4], ld32((c.r[2].w[0] + 320u)));  if (depth < kMaxDepth) unit_00F4(c, 210u, depth + 1u); else { c.pc = 0x004D1E00u; return; } if (c.pc != 0x004793F8u) [[unlikely]] return; }
L_004793F8:
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[1] = fp::add(c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 8u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[2].w[0] + 132u)));  goto L_00479424; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047941Cu); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 359u, depth + 1u); else { c.pc = 0x00416800u; return; } if (c.pc != 0x0047941Cu) [[unlikely]] return; }
L_0047941C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00479490; } }
L_00479424:
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[2].w[0] + 124u)));  goto L_00479444; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047943Cu); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 359u, depth + 1u); else { c.pc = 0x00416800u; return; } if (c.pc != 0x0047943Cu) [[unlikely]] return; }
L_0047943C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047948C; } }
L_00479444:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1166u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00479460; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 1052u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 4ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_00479460:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[16].w[0] + 12u), 0u);  goto L_0047948C; }
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.f[1] = fp::add(c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 12u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0047948C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047948Cu); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 372u, depth + 1u); else { c.pc = 0x00416940u; return; } if (c.pc != 0x0047948Cu) [[unlikely]] return; }
L_0047948C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00479490:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004794A0:
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), 0u);  c.pc = t; return; }
L_004794B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00479500; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 30864u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004794E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 25632u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_004794E4:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004794FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004794FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004794FCu) [[unlikely]] return; }
L_004794FC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00479500:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00479510:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 25632u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[4].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + 30864u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 72u);
    st32((c.r[5].w[0] + 96u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479578u); set32(c.r[5], c.r[5].w[0] - 26496u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00479578u) [[unlikely]] return; }
L_00479578:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 26496u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047958Cu); set32(c.r[5], c.r[5].w[0] - 288u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0047958Cu) [[unlikely]] return; }
L_0047958C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_0047959C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), 0u);  if (t) { goto L_004795E0; } }
L_0047959C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 26496u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004795ACu); set32(c.r[5], c.r[5].w[0] - 296u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x004795ACu) [[unlikely]] return; }
L_004795AC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004795C0; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[2].w[0]);  if (t) { goto L_004795E0; } }
L_004795C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 26496u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004795D0u); set32(c.r[5], c.r[5].w[0] - 304u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x004795D0u) [[unlikely]] return; }
L_004795D0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004795E4; }
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 2;
L_004795E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004795E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004795ECu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C2(c, 313u, depth + 1u); else { c.pc = 0x0040AC60u; return; } if (c.pc != 0x004795ECu) [[unlikely]] return; }
L_004795EC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479600u); set32(c.r[6], c.r[6].w[0] - 26489u);  if (depth < kMaxDepth) unit_00C2(c, 456u, depth + 1u); else { c.pc = 0x0040BF10u; return; } if (c.pc != 0x00479600u) [[unlikely]] return; }
L_00479600:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047960Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C2(c, 314u, depth + 1u); else { c.pc = 0x0040AC70u; return; } if (c.pc != 0x0047960Cu) [[unlikely]] return; }
L_0047960C:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 624u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047961Cu); st32((c.r[16].w[0] + 152u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C6(c, 129u, depth + 1u); else { c.pc = 0x00419040u; return; } if (c.pc != 0x0047961Cu) [[unlikely]] return; }
L_0047961C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047962Cu); set32(c.r[5], c.r[5].w[0] - 26482u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0047962Cu) [[unlikely]] return; }
L_0047962C:
    c.f[0] = ld32((c.r[28].w[0] - 31568u));
    set32(c.r[2], 0u + 4u);
    st32((c.r[29].w[0] + 64u), 0u);
    set32(c.r[4], c.r[16].w[0] + 624u);
    st32((c.r[29].w[0] + 72u), 0u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    st8((c.r[29].w[0] + 80u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], c.r[29].w[0] + 48u);
    set32(c.r[5], ld32((c.r[16].w[0] + 632u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 636u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479670u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00DD(c, 138u, depth + 1u); else { c.pc = 0x00475130u; return; } if (c.pc != 0x00479670u) [[unlikely]] return; }
L_00479670:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047967Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0047967Cu) [[unlikely]] return; }
L_0047967C:
    set32(c.r[4], ld32((c.r[16].w[0] + 700u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047968Cu); set32(c.r[5], c.r[5].w[0] - 26468u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0047968Cu) [[unlikely]] return; }
L_0047968C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 700u)));  goto L_004796A4; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004796A0u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_00B9(c, 422u, depth + 1u); else { c.pc = 0x003E7B80u; return; } if (c.pc != 0x004796A0u) [[unlikely]] return; }
L_004796A0:
    set32(c.r[4], ld32((c.r[16].w[0] + 700u)));
    c.budget -= 1;
L_004796A4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004796B0u); set32(c.r[5], c.r[5].w[0] - 26457u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004796B0u) [[unlikely]] return; }
L_004796B0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004796C8; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004796C4u); set32(c.r[5], c.r[17].w[0] + 20u);  if (depth < kMaxDepth) unit_00B9(c, 422u, depth + 1u); else { c.pc = 0x003E7B80u; return; } if (c.pc != 0x004796C4u) [[unlikely]] return; }
L_004796C4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004796C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004796E0:
    c.f[1] = ld32((c.r[4].w[0] + 16u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::sub(c.f[1], c.f[0]);  c.pc = t; return; }
L_004796F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    st32((c.r[28].w[0] - 30152u), 0u);
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 320u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0047977C; } }
L_0047971C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479724u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x00479724u) [[unlikely]] return; }
L_00479724:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1200u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0047977C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479744u); set32(c.r[4], ld32((c.r[4].w[0] + 68u)));  if (depth < kMaxDepth) unit_00BE(c, 228u, depth + 1u); else { c.pc = 0x003FA660u; return; } if (c.pc != 0x00479744u) [[unlikely]] return; }
L_00479744:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00479778; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047975Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B1(c, 461u, depth + 1u); else { c.pc = 0x003C7B40u; return; } if (c.pc != 0x0047975Cu) [[unlikely]] return; }
L_0047975C:
    c.f[1] = ld32((c.r[28].w[0] - 32620u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[18].w[0] + 24u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32564u));
    st32((c.r[18].w[0] + 64u), c.f[1]);
    st32((c.r[18].w[0] + 68u), 0u);
    st32((c.r[18].w[0] + 72u), c.f[0]);
    c.budget -= 7;
L_00479778:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0047977C:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[16].w[0] + 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047971Cu | kUnwind; return; } goto L_0047971C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004797B0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x004796F0u | kUnwind; return; } goto L_004796F0; }
L_004797C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 9;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_004798AC; }
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[12]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479800u); set32(c.r[4], ld32((c.r[2].w[0] + 320u)));  if (depth < kMaxDepth) unit_00F4(c, 210u, depth + 1u); else { c.pc = 0x004D1E00u; return; } if (c.pc != 0x00479800u) [[unlikely]] return; }
L_00479800:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 12u));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[2].w[0] + 132u)));  goto L_00479838; }
    set32(c.r[4], ld32((c.r[2].w[0] + 124u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1156u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00479834; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 2308u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00479834; } }
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00479834:
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_00479838:
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.f[1] = ld32((c.r[16].w[0] + 8u));  goto L_00479874; }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 12u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_00479864; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047985Cu); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 372u, depth + 1u); else { c.pc = 0x00416940u; return; } if (c.pc != 0x0047985Cu) [[unlikely]] return; }
L_0047985C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047986C; } }
L_00479864:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047986Cu);  if (depth < kMaxDepth) unit_00C5(c, 359u, depth + 1u); else { c.pc = 0x00416800u; return; } if (c.pc != 0x0047986Cu) [[unlikely]] return; }
L_0047986C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004798A8; } }
L_00479874:
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004798A8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 12u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_004798A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479898u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 372u, depth + 1u); else { c.pc = 0x00416940u; return; } if (c.pc != 0x00479898u) [[unlikely]] return; }
L_00479898:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004798A8; } }
L_004798A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004798A8u);  if (depth < kMaxDepth) unit_00C5(c, 359u, depth + 1u); else { c.pc = 0x00416800u; return; } if (c.pc != 0x004798A8u) [[unlikely]] return; }
L_004798A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004798AC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004798C0:
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 3;
    { st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(0u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004796F0u | kUnwind; return; } goto L_004796F0; }
L_004798D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00479920; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 30896u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00479904; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 25632u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00479904:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0047991C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047991Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0047991Cu) [[unlikely]] return; }
L_0047991C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00479920:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00479930:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 25632u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x42700000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[4].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + 30896u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[2], 0u + 2u);
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 16u), c.r[6].w[0]);
    st32((c.r[5].w[0] + 100u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 72u);
    st32((c.r[5].w[0] + 96u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479994u); set32(c.r[5], c.r[5].w[0] - 26238u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00479994u) [[unlikely]] return; }
L_00479994:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 26238u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004799A8u); set32(c.r[5], c.r[5].w[0] - 288u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x004799A8u) [[unlikely]] return; }
L_004799A8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004799B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), 0u);  if (t) { goto L_004799FC; } }
L_004799B8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 26238u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004799C8u); set32(c.r[5], c.r[5].w[0] - 296u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x004799C8u) [[unlikely]] return; }
L_004799C8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004799DC; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[2].w[0]);  if (t) { goto L_004799FC; } }
L_004799DC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 26238u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004799ECu); set32(c.r[5], c.r[5].w[0] - 304u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x004799ECu) [[unlikely]] return; }
L_004799EC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00479A00; }
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 2;
L_004799FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00479A00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479A08u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C2(c, 313u, depth + 1u); else { c.pc = 0x0040AC60u; return; } if (c.pc != 0x00479A08u) [[unlikely]] return; }
L_00479A08:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479A1Cu); set32(c.r[6], c.r[6].w[0] - 26232u);  if (depth < kMaxDepth) unit_00C2(c, 456u, depth + 1u); else { c.pc = 0x0040BF10u; return; } if (c.pc != 0x00479A1Cu) [[unlikely]] return; }
L_00479A1C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479A28u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C2(c, 314u, depth + 1u); else { c.pc = 0x0040AC70u; return; } if (c.pc != 0x00479A28u) [[unlikely]] return; }
L_00479A28:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 624u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479A38u); st32((c.r[16].w[0] + 152u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C6(c, 129u, depth + 1u); else { c.pc = 0x00419040u; return; } if (c.pc != 0x00479A38u) [[unlikely]] return; }
L_00479A38:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479A48u); set32(c.r[5], c.r[5].w[0] - 26225u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00479A48u) [[unlikely]] return; }
L_00479A48:
    c.f[0] = ld32((c.r[28].w[0] - 32044u));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[29].w[0] + 168u), 0u);
    st32((c.r[29].w[0] + 160u), c.r[6].w[0]);
    set32(c.r[4], c.r[16].w[0] + 624u);
    st8((c.r[29].w[0] + 176u), static_cast<std::uint8_t>(0u));
    st32((c.r[29].w[0] + 164u), c.f[0]);
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[7], c.r[29].w[0] + 144u);
    set32(c.r[5], ld32((c.r[16].w[0] + 632u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 636u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479A8Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00DD(c, 138u, depth + 1u); else { c.pc = 0x00475130u; return; } if (c.pc != 0x00479A8Cu) [[unlikely]] return; }
L_00479A8C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479A98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00479A98u) [[unlikely]] return; }
L_00479A98:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479AA8u); set32(c.r[5], c.r[5].w[0] - 26225u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00479AA8u) [[unlikely]] return; }
L_00479AA8:
    c.f[0] = ld32((c.r[28].w[0] - 32488u));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], 0u + 3u);
    st32((c.r[29].w[0] + 120u), 0u);
    st32((c.r[29].w[0] + 112u), c.r[6].w[0]);
    set32(c.r[4], c.r[16].w[0] + 624u);
    st8((c.r[29].w[0] + 128u), static_cast<std::uint8_t>(0u));
    st32((c.r[29].w[0] + 116u), c.f[0]);
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[7], c.r[29].w[0] + 96u);
    set32(c.r[5], ld32((c.r[16].w[0] + 632u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 636u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479AECu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00DD(c, 138u, depth + 1u); else { c.pc = 0x00475130u; return; } if (c.pc != 0x00479AECu) [[unlikely]] return; }
L_00479AEC:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479AF8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00479AF8u) [[unlikely]] return; }
L_00479AF8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479B08u); set32(c.r[5], c.r[5].w[0] - 26225u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00479B08u) [[unlikely]] return; }
L_00479B08:
    c.f[0] = ld32((c.r[28].w[0] - 32564u));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], 0u + 5u);
    st32((c.r[29].w[0] + 72u), 0u);
    st32((c.r[29].w[0] + 64u), c.r[6].w[0]);
    set32(c.r[4], c.r[16].w[0] + 624u);
    st8((c.r[29].w[0] + 80u), static_cast<std::uint8_t>(0u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[7], c.r[29].w[0] + 48u);
    set32(c.r[5], ld32((c.r[16].w[0] + 632u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 636u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479B4Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00DD(c, 138u, depth + 1u); else { c.pc = 0x00475130u; return; } if (c.pc != 0x00479B4Cu) [[unlikely]] return; }
L_00479B4C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479B58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00479B58u) [[unlikely]] return; }
L_00479B58:
    set32(c.r[4], ld32((c.r[16].w[0] + 700u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479B68u); set32(c.r[5], c.r[5].w[0] - 26211u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00479B68u) [[unlikely]] return; }
L_00479B68:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00479B80; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479B7Cu); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_00B9(c, 422u, depth + 1u); else { c.pc = 0x003E7B80u; return; } if (c.pc != 0x00479B7Cu) [[unlikely]] return; }
L_00479B7C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00479B80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00479BA0:
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::sub(c.f[1], c.f[0]);  c.pc = t; return; }
L_00479BB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    st32((c.r[28].w[0] - 30152u), 0u);
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 320u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00479C40; } }
L_00479BDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479BE4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x00479BE4u) [[unlikely]] return; }
L_00479BE4:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1200u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00479C40; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479C04u); set32(c.r[4], ld32((c.r[4].w[0] + 68u)));  if (depth < kMaxDepth) unit_00BE(c, 228u, depth + 1u); else { c.pc = 0x003FA660u; return; } if (c.pc != 0x00479C04u) [[unlikely]] return; }
L_00479C04:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00479C3C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479C1Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00B1(c, 461u, depth + 1u); else { c.pc = 0x003C7B40u; return; } if (c.pc != 0x00479C1Cu) [[unlikely]] return; }
L_00479C1C:
    c.f[1] = ld32((c.r[28].w[0] - 32304u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = ld32((c.r[28].w[0] - 32564u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[18].w[0] + 24u), c.f[1]);
    st32((c.r[18].w[0] + 64u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 68u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 72u), c.f[0]);
    c.budget -= 8;
L_00479C3C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00479C40:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[16].w[0] + 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00479BDCu | kUnwind; return; } goto L_00479BDC; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00479C70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00479C80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 9;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00479D50; }
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[12]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479CC0u); set32(c.r[4], ld32((c.r[2].w[0] + 320u)));  if (depth < kMaxDepth) unit_00F4(c, 210u, depth + 1u); else { c.pc = 0x004D1E00u; return; } if (c.pc != 0x00479CC0u) [[unlikely]] return; }
L_00479CC0:
    set32(c.r[4], ld32((c.r[2].w[0] + 124u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1156u));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[2].w[0] + 132u)));  goto L_00479D14; }
    set32(c.r[4], ld32((c.r[4].w[0] + 2308u)));
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 5;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_00479D00; }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00479CFC; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00479D10; } }
L_00479CFC:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_00479D00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479D08u);  if (depth < kMaxDepth) unit_00C5(c, 372u, depth + 1u); else { c.pc = 0x00416940u; return; } if (c.pc != 0x00479D08u) [[unlikely]] return; }
L_00479D08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00479D4C; } }
L_00479D10:
    set32(c.r[4], ld32((c.r[2].w[0] + 132u)));
    c.budget -= 1;
L_00479D14:
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.f[1] = ld32((c.r[16].w[0] + 8u));  goto L_00479D34; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479D2Cu); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 359u, depth + 1u); else { c.pc = 0x00416800u; return; } if (c.pc != 0x00479D2Cu) [[unlikely]] return; }
L_00479D2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00479D4C; } }
L_00479D34:
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00479D4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479D4Cu); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 359u, depth + 1u); else { c.pc = 0x00416800u; return; } if (c.pc != 0x00479D4Cu) [[unlikely]] return; }
L_00479D4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00479D50:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00479D60:
    c.budget -= 2;
    { st32((c.r[4].w[0] + 8u), 0u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00479BB0u | kUnwind; return; } goto L_00479BB0; }
L_00479D70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00479DC0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 30928u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00479DA4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 25632u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00479DA4:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00479DBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479DBCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00479DBCu) [[unlikely]] return; }
L_00479DBC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00479DC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00479DD0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 25632u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[4].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + 30928u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 72u);
    st32((c.r[5].w[0] + 96u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479E2Cu); set32(c.r[5], c.r[5].w[0] - 25966u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00479E2Cu) [[unlikely]] return; }
L_00479E2C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 25966u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479E40u); set32(c.r[5], c.r[5].w[0] - 288u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00479E40u) [[unlikely]] return; }
L_00479E40:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_00479E50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), 0u);  if (t) { goto L_00479E94; } }
L_00479E50:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 25966u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479E60u); set32(c.r[5], c.r[5].w[0] - 296u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00479E60u) [[unlikely]] return; }
L_00479E60:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_00479E74; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[2].w[0]);  if (t) { goto L_00479E94; } }
L_00479E74:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 25966u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479E84u); set32(c.r[5], c.r[5].w[0] - 304u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00479E84u) [[unlikely]] return; }
L_00479E84:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00479E98; }
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 2;
L_00479E94:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00479E98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479EA0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C2(c, 313u, depth + 1u); else { c.pc = 0x0040AC60u; return; } if (c.pc != 0x00479EA0u) [[unlikely]] return; }
L_00479EA0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479EB4u); set32(c.r[6], c.r[6].w[0] - 25960u);  if (depth < kMaxDepth) unit_00C2(c, 456u, depth + 1u); else { c.pc = 0x0040BF10u; return; } if (c.pc != 0x00479EB4u) [[unlikely]] return; }
L_00479EB4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479EC0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C2(c, 314u, depth + 1u); else { c.pc = 0x0040AC70u; return; } if (c.pc != 0x00479EC0u) [[unlikely]] return; }
L_00479EC0:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 624u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479ED0u); st32((c.r[16].w[0] + 152u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C6(c, 129u, depth + 1u); else { c.pc = 0x00419040u; return; } if (c.pc != 0x00479ED0u) [[unlikely]] return; }
L_00479ED0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479EE0u); set32(c.r[5], c.r[5].w[0] - 25953u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00479EE0u) [[unlikely]] return; }
L_00479EE0:
    c.f[0] = ld32((c.r[28].w[0] - 31560u));
    set32(c.r[2], 0u + 4u);
    st32((c.r[29].w[0] + 112u), 0u);
    set32(c.r[4], c.r[16].w[0] + 624u);
    st32((c.r[29].w[0] + 120u), 0u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    st8((c.r[29].w[0] + 128u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], c.r[29].w[0] + 96u);
    set32(c.r[5], ld32((c.r[16].w[0] + 632u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 636u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479F24u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00DD(c, 138u, depth + 1u); else { c.pc = 0x00475130u; return; } if (c.pc != 0x00479F24u) [[unlikely]] return; }
L_00479F24:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479F30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00479F30u) [[unlikely]] return; }
L_00479F30:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479F40u); set32(c.r[5], c.r[5].w[0] - 25953u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00479F40u) [[unlikely]] return; }
L_00479F40:
    c.f[0] = ld32((c.r[28].w[0] - 32304u));
    set32(c.r[2], 0u + 4u);
    st32((c.r[29].w[0] + 64u), 0u);
    set32(c.r[4], c.r[16].w[0] + 624u);
    st32((c.r[29].w[0] + 72u), 0u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    st8((c.r[29].w[0] + 80u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], c.r[29].w[0] + 48u);
    set32(c.r[5], ld32((c.r[16].w[0] + 632u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 636u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479F84u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00DD(c, 138u, depth + 1u); else { c.pc = 0x00475130u; return; } if (c.pc != 0x00479F84u) [[unlikely]] return; }
L_00479F84:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479F90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00479F90u) [[unlikely]] return; }
L_00479F90:
    set32(c.r[4], ld32((c.r[16].w[0] + 700u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479FA0u); set32(c.r[5], c.r[5].w[0] - 25938u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00479FA0u) [[unlikely]] return; }
L_00479FA0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00479FB8; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00479FB4u); set32(c.r[5], c.r[17].w[0] + 12u);  if (depth < kMaxDepth) unit_00B9(c, 422u, depth + 1u); else { c.pc = 0x003E7B80u; return; } if (c.pc != 0x00479FB4u) [[unlikely]] return; }
L_00479FB4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00479FB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00479FD0:
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::sub(c.f[1], c.f[0]);  c.pc = t; return; }
L_00479FE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 328u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0047A92C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A008u); set32(c.r[4], ld32((c.r[2].w[0] + 320u)));  if (depth < kMaxDepth) unit_00F4(c, 210u, depth + 1u); else { c.pc = 0x004D1E00u; return; } if (c.pc != 0x0047A008u) [[unlikely]] return; }
L_0047A008:
    set32(c.r[3], ld32((c.r[16].w[0] + 328u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0047A930; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 25808u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00478000u < 16384u) { entry = entries_00DE[(t - 0x00478000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0047A038:
    set32(c.r[4], ld32((c.r[2].w[0] + 124u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1166u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0047A058; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 1052u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 4ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0047A058:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0047A92C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A070u); set32(c.r[4], ld32((c.r[2].w[0] + 320u)));  if (depth < kMaxDepth) unit_00F4(c, 210u, depth + 1u); else { c.pc = 0x004D1E00u; return; } if (c.pc != 0x0047A070u) [[unlikely]] return; }
L_0047A070:
    set32(c.r[4], ld32((c.r[2].w[0] + 420u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 328u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A080u); c.f[12] = ld32((c.r[2].w[0] + 20u));  if (depth < kMaxDepth) unit_00F9(c, 71u, depth + 1u); else { c.pc = 0x004E4E50u; return; } if (c.pc != 0x0047A080u) [[unlikely]] return; }
L_0047A080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A088u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 389u, depth + 1u); else { c.pc = 0x00416AC0u; return; } if (c.pc != 0x0047A088u) [[unlikely]] return; }
L_0047A088:
    set32(c.r[4], ld32((c.r[16].w[0] + 328u)));
    set32(c.r[3], 0u + 11u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[3].d[0]) { st32((c.r[16].w[0] + 328u), 0u);  goto L_0047A124; }
    set32(c.r[2], c.r[4].w[0] << 3);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] - 25744u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 20u);
    st32((c.r[16].w[0] + 328u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 332u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 328u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A0D0u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0047A0D0u) [[unlikely]] return; }
L_0047A0D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0047A92C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 328u)));
    set32(c.r[3], c.r[2].w[0] + 4u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[3].w[0] + 1u);  goto L_0047A0FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_0047A0FC; } }
    set32(c.r[6], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0047A0FC:
    set32(c.r[4], ld32((c.r[28].w[0] - 25572u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[7], 0u + 4u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A118u); set32(c.r[5], c.r[5].w[0] - 25743u);  if (depth < kMaxDepth) unit_00CA(c, 251u, depth + 1u); else { c.pc = 0x00429930u; return; } if (c.pc != 0x0047A118u) [[unlikely]] return; }
L_0047A118:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047A124; } }
    st32((c.r[16].w[0] + 328u), 0u);
    c.budget -= 1;
L_0047A124:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047A92C; } }
L_0047A12C:
    set32(c.r[4], ld32((c.r[2].w[0] + 124u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1185u));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));  goto L_0047A14C; }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1188u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0047A92C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    c.budget -= 1;
L_0047A14C:
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A158u); set32(c.r[4], ld32((c.r[2].w[0] + 320u)));  if (depth < kMaxDepth) unit_00F4(c, 210u, depth + 1u); else { c.pc = 0x004D1E00u; return; } if (c.pc != 0x0047A158u) [[unlikely]] return; }
L_0047A158:
    set32(c.r[4], ld32((c.r[2].w[0] + 420u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 328u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A168u); c.f[12] = ld32((c.r[2].w[0] + 20u));  if (depth < kMaxDepth) unit_00F9(c, 71u, depth + 1u); else { c.pc = 0x004E4E50u; return; } if (c.pc != 0x0047A168u) [[unlikely]] return; }
L_0047A168:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A170u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 389u, depth + 1u); else { c.pc = 0x00416AC0u; return; } if (c.pc != 0x0047A170u) [[unlikely]] return; }
L_0047A170:
    set32(c.r[4], ld32((c.r[16].w[0] + 328u)));
    set32(c.r[3], 0u + 11u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[3].d[0]) { st32((c.r[16].w[0] + 328u), 0u);  goto L_0047A20C; }
    set32(c.r[2], c.r[4].w[0] << 3);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] - 25744u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 20u);
    st32((c.r[16].w[0] + 328u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 332u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 328u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A1B8u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0047A1B8u) [[unlikely]] return; }
L_0047A1B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0047A92C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 328u)));
    set32(c.r[3], c.r[2].w[0] + 4u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[3].w[0] + 1u);  goto L_0047A1E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_0047A1E4; } }
    set32(c.r[6], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0047A1E4:
    set32(c.r[4], ld32((c.r[28].w[0] - 25572u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[7], 0u + 4u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A200u); set32(c.r[5], c.r[5].w[0] - 25743u);  if (depth < kMaxDepth) unit_00CA(c, 251u, depth + 1u); else { c.pc = 0x00429930u; return; } if (c.pc != 0x0047A200u) [[unlikely]] return; }
L_0047A200:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047A20C; } }
    st32((c.r[16].w[0] + 328u), 0u);
    c.budget -= 1;
L_0047A20C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047A92C; } }
L_0047A214:
    set32(c.r[4], ld32((c.r[2].w[0] + 124u)));
    set32(c.r[3], 0u + 5u);
    set32(c.r[4], ld32((c.r[4].w[0] + 2340u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0047A92C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A238u); set32(c.r[4], ld32((c.r[2].w[0] + 320u)));  if (depth < kMaxDepth) unit_00F4(c, 210u, depth + 1u); else { c.pc = 0x004D1E00u; return; } if (c.pc != 0x0047A238u) [[unlikely]] return; }
L_0047A238:
    set32(c.r[4], ld32((c.r[2].w[0] + 420u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 328u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A248u); c.f[12] = ld32((c.r[2].w[0] + 20u));  if (depth < kMaxDepth) unit_00F9(c, 71u, depth + 1u); else { c.pc = 0x004E4E50u; return; } if (c.pc != 0x0047A248u) [[unlikely]] return; }
L_0047A248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A250u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 389u, depth + 1u); else { c.pc = 0x00416AC0u; return; } if (c.pc != 0x0047A250u) [[unlikely]] return; }
L_0047A250:
    set32(c.r[4], ld32((c.r[16].w[0] + 328u)));
    set32(c.r[3], 0u + 11u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[3].d[0]) { st32((c.r[16].w[0] + 328u), 0u);  goto L_0047A2EC; }
    set32(c.r[2], c.r[4].w[0] << 3);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] - 25744u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 20u);
    st32((c.r[16].w[0] + 328u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 332u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 328u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A298u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0047A298u) [[unlikely]] return; }
L_0047A298:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0047A92C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 328u)));
    set32(c.r[3], c.r[2].w[0] + 4u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[3].w[0] + 1u);  goto L_0047A2C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_0047A2C4; } }
    set32(c.r[6], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0047A2C4:
    set32(c.r[4], ld32((c.r[28].w[0] - 25572u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[7], 0u + 4u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A2E0u); set32(c.r[5], c.r[5].w[0] - 25743u);  if (depth < kMaxDepth) unit_00CA(c, 251u, depth + 1u); else { c.pc = 0x00429930u; return; } if (c.pc != 0x0047A2E0u) [[unlikely]] return; }
L_0047A2E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047A2EC; } }
    st32((c.r[16].w[0] + 328u), 0u);
    c.budget -= 1;
L_0047A2EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047A92C; } }
L_0047A2F4:
    set32(c.r[4], ld32((c.r[2].w[0] + 124u)));
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], ld32((c.r[4].w[0] + 2340u)));
    c.budget -= 5;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));  goto L_0047A318; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0047A92C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    c.budget -= 1;
L_0047A318:
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A324u); set32(c.r[4], ld32((c.r[2].w[0] + 320u)));  if (depth < kMaxDepth) unit_00F4(c, 210u, depth + 1u); else { c.pc = 0x004D1E00u; return; } if (c.pc != 0x0047A324u) [[unlikely]] return; }
L_0047A324:
    set32(c.r[4], ld32((c.r[2].w[0] + 420u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 328u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A334u); c.f[12] = ld32((c.r[2].w[0] + 20u));  if (depth < kMaxDepth) unit_00F9(c, 71u, depth + 1u); else { c.pc = 0x004E4E50u; return; } if (c.pc != 0x0047A334u) [[unlikely]] return; }
L_0047A334:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A33Cu); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 389u, depth + 1u); else { c.pc = 0x00416AC0u; return; } if (c.pc != 0x0047A33Cu) [[unlikely]] return; }
L_0047A33C:
    set32(c.r[4], ld32((c.r[16].w[0] + 328u)));
    set32(c.r[3], 0u + 11u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[3].d[0]) { st32((c.r[16].w[0] + 328u), 0u);  goto L_0047A3D8; }
    set32(c.r[2], c.r[4].w[0] << 3);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] - 25744u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 20u);
    st32((c.r[16].w[0] + 328u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 332u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 328u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A384u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0047A384u) [[unlikely]] return; }
L_0047A384:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0047A92C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 328u)));
    set32(c.r[3], c.r[2].w[0] + 4u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[3].w[0] + 1u);  goto L_0047A3B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_0047A3B0; } }
    set32(c.r[6], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0047A3B0:
    set32(c.r[4], ld32((c.r[28].w[0] - 25572u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[7], 0u + 4u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A3CCu); set32(c.r[5], c.r[5].w[0] - 25743u);  if (depth < kMaxDepth) unit_00CA(c, 251u, depth + 1u); else { c.pc = 0x00429930u; return; } if (c.pc != 0x0047A3CCu) [[unlikely]] return; }
L_0047A3CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047A3D8; } }
    st32((c.r[16].w[0] + 328u), 0u);
    c.budget -= 1;
L_0047A3D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047A92C; } }
L_0047A3E0:
    set32(c.r[4], ld32((c.r[2].w[0] + 124u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], ld32((c.r[4].w[0] + 2340u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0047A92C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A404u); set32(c.r[4], ld32((c.r[2].w[0] + 320u)));  if (depth < kMaxDepth) unit_00F4(c, 210u, depth + 1u); else { c.pc = 0x004D1E00u; return; } if (c.pc != 0x0047A404u) [[unlikely]] return; }
L_0047A404:
    set32(c.r[4], ld32((c.r[2].w[0] + 420u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 328u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A414u); c.f[12] = ld32((c.r[2].w[0] + 20u));  if (depth < kMaxDepth) unit_00F9(c, 71u, depth + 1u); else { c.pc = 0x004E4E50u; return; } if (c.pc != 0x0047A414u) [[unlikely]] return; }
L_0047A414:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A41Cu); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 389u, depth + 1u); else { c.pc = 0x00416AC0u; return; } if (c.pc != 0x0047A41Cu) [[unlikely]] return; }
L_0047A41C:
    set32(c.r[4], ld32((c.r[16].w[0] + 328u)));
    set32(c.r[3], 0u + 11u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[3].d[0]) { st32((c.r[16].w[0] + 328u), 0u);  goto L_0047A4B8; }
    set32(c.r[2], c.r[4].w[0] << 3);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] - 25744u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 20u);
    st32((c.r[16].w[0] + 328u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 332u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 328u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A464u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0047A464u) [[unlikely]] return; }
L_0047A464:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0047A92C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 328u)));
    set32(c.r[3], c.r[2].w[0] + 4u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[3].w[0] + 1u);  goto L_0047A490; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_0047A490; } }
    set32(c.r[6], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0047A490:
    set32(c.r[4], ld32((c.r[28].w[0] - 25572u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[7], 0u + 4u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A4ACu); set32(c.r[5], c.r[5].w[0] - 25743u);  if (depth < kMaxDepth) unit_00CA(c, 251u, depth + 1u); else { c.pc = 0x00429930u; return; } if (c.pc != 0x0047A4ACu) [[unlikely]] return; }
L_0047A4AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047A4B8; } }
    st32((c.r[16].w[0] + 328u), 0u);
    c.budget -= 1;
L_0047A4B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047A92C; } }
L_0047A4C0:
    set32(c.r[4], ld32((c.r[2].w[0] + 124u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 2340u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0047A92C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A4E4u); set32(c.r[4], ld32((c.r[2].w[0] + 320u)));  if (depth < kMaxDepth) unit_00F4(c, 210u, depth + 1u); else { c.pc = 0x004D1E00u; return; } if (c.pc != 0x0047A4E4u) [[unlikely]] return; }
L_0047A4E4:
    set32(c.r[4], ld32((c.r[2].w[0] + 420u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 328u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A4F4u); c.f[12] = ld32((c.r[2].w[0] + 20u));  if (depth < kMaxDepth) unit_00F9(c, 71u, depth + 1u); else { c.pc = 0x004E4E50u; return; } if (c.pc != 0x0047A4F4u) [[unlikely]] return; }
L_0047A4F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A4FCu); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 389u, depth + 1u); else { c.pc = 0x00416AC0u; return; } if (c.pc != 0x0047A4FCu) [[unlikely]] return; }
L_0047A4FC:
    set32(c.r[4], ld32((c.r[16].w[0] + 328u)));
    set32(c.r[3], 0u + 11u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[3].d[0]) { st32((c.r[16].w[0] + 328u), 0u);  goto L_0047A598; }
    set32(c.r[2], c.r[4].w[0] << 3);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] - 25744u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 20u);
    st32((c.r[16].w[0] + 328u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 332u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 328u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A544u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0047A544u) [[unlikely]] return; }
L_0047A544:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0047A92C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 328u)));
    set32(c.r[3], c.r[2].w[0] + 4u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[3].w[0] + 1u);  goto L_0047A570; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_0047A570; } }
    set32(c.r[6], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0047A570:
    set32(c.r[4], ld32((c.r[28].w[0] - 25572u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[7], 0u + 4u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A58Cu); set32(c.r[5], c.r[5].w[0] - 25743u);  if (depth < kMaxDepth) unit_00CA(c, 251u, depth + 1u); else { c.pc = 0x00429930u; return; } if (c.pc != 0x0047A58Cu) [[unlikely]] return; }
L_0047A58C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047A598; } }
    st32((c.r[16].w[0] + 328u), 0u);
    c.budget -= 1;
L_0047A598:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047A92C; } }
L_0047A5A0:
    set32(c.r[3], ld32((c.r[2].w[0] + 124u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1162u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0047A92C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A5C0u); set32(c.r[4], ld32((c.r[2].w[0] + 320u)));  if (depth < kMaxDepth) unit_00F4(c, 210u, depth + 1u); else { c.pc = 0x004D1E00u; return; } if (c.pc != 0x0047A5C0u) [[unlikely]] return; }
L_0047A5C0:
    set32(c.r[4], ld32((c.r[2].w[0] + 420u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 328u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A5D0u); c.f[12] = ld32((c.r[2].w[0] + 20u));  if (depth < kMaxDepth) unit_00F9(c, 71u, depth + 1u); else { c.pc = 0x004E4E50u; return; } if (c.pc != 0x0047A5D0u) [[unlikely]] return; }
L_0047A5D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A5D8u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 389u, depth + 1u); else { c.pc = 0x00416AC0u; return; } if (c.pc != 0x0047A5D8u) [[unlikely]] return; }
L_0047A5D8:
    set32(c.r[4], ld32((c.r[16].w[0] + 328u)));
    set32(c.r[3], 0u + 11u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[3].d[0]) { st32((c.r[16].w[0] + 328u), 0u);  goto L_0047A674; }
    set32(c.r[2], c.r[4].w[0] << 3);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] - 25744u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 20u);
    st32((c.r[16].w[0] + 328u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 332u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 328u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A620u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0047A620u) [[unlikely]] return; }
L_0047A620:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0047A92C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 328u)));
    set32(c.r[3], c.r[2].w[0] + 4u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[3].w[0] + 1u);  goto L_0047A64C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_0047A64C; } }
    set32(c.r[6], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0047A64C:
    set32(c.r[4], ld32((c.r[28].w[0] - 25572u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[7], 0u + 4u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A668u); set32(c.r[5], c.r[5].w[0] - 25743u);  if (depth < kMaxDepth) unit_00CA(c, 251u, depth + 1u); else { c.pc = 0x00429930u; return; } if (c.pc != 0x0047A668u) [[unlikely]] return; }
L_0047A668:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047A674; } }
    st32((c.r[16].w[0] + 328u), 0u);
    c.budget -= 1;
L_0047A674:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047A92C; } }
L_0047A67C:
    set32(c.r[3], ld32((c.r[2].w[0] + 124u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 1052u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0047A69C; } }
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0047A69C; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0047A69C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0047A92C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A6B4u); set32(c.r[4], ld32((c.r[2].w[0] + 320u)));  if (depth < kMaxDepth) unit_00F4(c, 210u, depth + 1u); else { c.pc = 0x004D1E00u; return; } if (c.pc != 0x0047A6B4u) [[unlikely]] return; }
L_0047A6B4:
    set32(c.r[4], ld32((c.r[2].w[0] + 420u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 328u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A6C4u); c.f[12] = ld32((c.r[2].w[0] + 20u));  if (depth < kMaxDepth) unit_00F9(c, 71u, depth + 1u); else { c.pc = 0x004E4E50u; return; } if (c.pc != 0x0047A6C4u) [[unlikely]] return; }
L_0047A6C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A6CCu); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 389u, depth + 1u); else { c.pc = 0x00416AC0u; return; } if (c.pc != 0x0047A6CCu) [[unlikely]] return; }
L_0047A6CC:
    set32(c.r[4], ld32((c.r[16].w[0] + 328u)));
    set32(c.r[3], 0u + 11u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[3].d[0]) { st32((c.r[16].w[0] + 328u), 0u);  goto L_0047A768; }
    set32(c.r[2], c.r[4].w[0] << 3);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] - 25744u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 20u);
    st32((c.r[16].w[0] + 328u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 332u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 328u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A714u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0047A714u) [[unlikely]] return; }
L_0047A714:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0047A92C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 328u)));
    set32(c.r[3], c.r[2].w[0] + 4u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[3].w[0] + 1u);  goto L_0047A740; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_0047A740; } }
    set32(c.r[6], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0047A740:
    set32(c.r[4], ld32((c.r[28].w[0] - 25572u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[7], 0u + 4u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A75Cu); set32(c.r[5], c.r[5].w[0] - 25743u);  if (depth < kMaxDepth) unit_00CA(c, 251u, depth + 1u); else { c.pc = 0x00429930u; return; } if (c.pc != 0x0047A75Cu) [[unlikely]] return; }
L_0047A75C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047A768; } }
    st32((c.r[16].w[0] + 328u), 0u);
    c.budget -= 1;
L_0047A768:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047A92C; } }
L_0047A770:
    set32(c.r[3], ld32((c.r[2].w[0] + 124u)));
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[3].w[0] + 1340u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0047A92C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A798u); set32(c.r[4], ld32((c.r[2].w[0] + 320u)));  if (depth < kMaxDepth) unit_00F4(c, 210u, depth + 1u); else { c.pc = 0x004D1E00u; return; } if (c.pc != 0x0047A798u) [[unlikely]] return; }
L_0047A798:
    set32(c.r[4], ld32((c.r[2].w[0] + 420u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 328u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A7A8u); c.f[12] = ld32((c.r[2].w[0] + 20u));  if (depth < kMaxDepth) unit_00F9(c, 71u, depth + 1u); else { c.pc = 0x004E4E50u; return; } if (c.pc != 0x0047A7A8u) [[unlikely]] return; }
L_0047A7A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A7B0u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 389u, depth + 1u); else { c.pc = 0x00416AC0u; return; } if (c.pc != 0x0047A7B0u) [[unlikely]] return; }
L_0047A7B0:
    set32(c.r[4], ld32((c.r[16].w[0] + 328u)));
    set32(c.r[3], 0u + 11u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[3].d[0]) { st32((c.r[16].w[0] + 328u), 0u);  goto L_0047A84C; }
    set32(c.r[2], c.r[4].w[0] << 3);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] - 25744u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 20u);
    st32((c.r[16].w[0] + 328u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 332u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 328u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A7F8u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0047A7F8u) [[unlikely]] return; }
L_0047A7F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0047A92C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 328u)));
    set32(c.r[3], c.r[2].w[0] + 4u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[3].w[0] + 1u);  goto L_0047A824; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_0047A824; } }
    set32(c.r[6], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0047A824:
    set32(c.r[4], ld32((c.r[28].w[0] - 25572u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[7], 0u + 4u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A840u); set32(c.r[5], c.r[5].w[0] - 25743u);  if (depth < kMaxDepth) unit_00CA(c, 251u, depth + 1u); else { c.pc = 0x00429930u; return; } if (c.pc != 0x0047A840u) [[unlikely]] return; }
L_0047A840:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047A84C; } }
    st32((c.r[16].w[0] + 328u), 0u);
    c.budget -= 1;
L_0047A84C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047A92C; } }
L_0047A854:
    set32(c.r[4], ld32((c.r[2].w[0] + 124u)));
    set32(c.r[3], 0u + 4u);
    set32(c.r[4], ld32((c.r[4].w[0] + 1052u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0047A92C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A878u); set32(c.r[4], ld32((c.r[2].w[0] + 320u)));  if (depth < kMaxDepth) unit_00F4(c, 210u, depth + 1u); else { c.pc = 0x004D1E00u; return; } if (c.pc != 0x0047A878u) [[unlikely]] return; }
L_0047A878:
    set32(c.r[4], ld32((c.r[2].w[0] + 420u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 328u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A888u); c.f[12] = ld32((c.r[2].w[0] + 20u));  if (depth < kMaxDepth) unit_00F9(c, 71u, depth + 1u); else { c.pc = 0x004E4E50u; return; } if (c.pc != 0x0047A888u) [[unlikely]] return; }
L_0047A888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A890u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 389u, depth + 1u); else { c.pc = 0x00416AC0u; return; } if (c.pc != 0x0047A890u) [[unlikely]] return; }
L_0047A890:
    set32(c.r[4], ld32((c.r[16].w[0] + 328u)));
    set32(c.r[3], 0u + 11u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[3].d[0]) { st32((c.r[16].w[0] + 328u), 0u);  goto L_0047A92C; }
    set32(c.r[2], c.r[4].w[0] << 3);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] - 25744u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 20u);
    st32((c.r[16].w[0] + 328u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 332u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 328u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A8D8u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0047A8D8u) [[unlikely]] return; }
L_0047A8D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0047A92C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 328u)));
    set32(c.r[3], c.r[2].w[0] + 4u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[3].w[0] + 1u);  goto L_0047A904; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_0047A904; } }
    set32(c.r[6], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0047A904:
    set32(c.r[4], ld32((c.r[28].w[0] - 25572u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[7], 0u + 4u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A920u); set32(c.r[5], c.r[5].w[0] - 25743u);  if (depth < kMaxDepth) unit_00CA(c, 251u, depth + 1u); else { c.pc = 0x00429930u; return; } if (c.pc != 0x0047A920u) [[unlikely]] return; }
L_0047A920:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047A92C; } }
    st32((c.r[16].w[0] + 328u), 0u);
    c.budget -= 1;
L_0047A92C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0047A930:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0047A940:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.f[20] = c.f[12];  if (t) { goto L_0047AA90; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A978u); set32(c.r[4], ld32((c.r[2].w[0] + 320u)));  if (depth < kMaxDepth) unit_00F4(c, 210u, depth + 1u); else { c.pc = 0x004D1E00u; return; } if (c.pc != 0x0047A978u) [[unlikely]] return; }
L_0047A978:
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[1] = fp::add(c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 8u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[2].w[0] + 424u)));  goto L_0047A9A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A99Cu); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 359u, depth + 1u); else { c.pc = 0x00416800u; return; } if (c.pc != 0x0047A99Cu) [[unlikely]] return; }
L_0047A99C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0047AA94; } }
L_0047A9A4:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[2].w[0] + 132u)));  goto L_0047A9C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047A9B8u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 372u, depth + 1u); else { c.pc = 0x00416940u; return; } if (c.pc != 0x0047A9B8u) [[unlikely]] return; }
L_0047A9B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047AA90; } }
L_0047A9C0:
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0047AA90; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 328u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0047AA90; } }
    c.f[0] = ld32((c.r[16].w[0] + 332u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 332u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 328u)));
    c.f[1] = ld32((c.r[16].w[0] + 332u));
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0047AA88; }
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 5;
    if (c.r[4].d[0] == c.r[3].d[0]) { st32((c.r[16].w[0] + 328u), 0u);  goto L_0047AA90; }
    set32(c.r[2], c.r[4].w[0] << 3);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] - 25744u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 20u);
    st32((c.r[16].w[0] + 328u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 332u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 328u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047AA40u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0047AA40u) [[unlikely]] return; }
L_0047AA40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0047AA90; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 328u)));
    set32(c.r[3], c.r[2].w[0] + 4u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[3].w[0] + 1u);  goto L_0047AA64; }
    set32(c.r[6], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_0047AA64:
    set32(c.r[4], ld32((c.r[28].w[0] - 25572u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[7], 0u + 4u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047AA80u); set32(c.r[5], c.r[5].w[0] - 25743u);  if (depth < kMaxDepth) unit_00CA(c, 251u, depth + 1u); else { c.pc = 0x00429930u; return; } if (c.pc != 0x0047AA80u) [[unlikely]] return; }
L_0047AA80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047AA90; } }
L_0047AA88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047AA90u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00DE(c, 246u, depth + 1u); else { c.pc = 0x00479FE0u; return; } if (c.pc != 0x0047AA90u) [[unlikely]] return; }
L_0047AA90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0047AA94:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0047AAB0:
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[3], c.r[4].w[0] + 20u);
    st32((c.r[4].w[0] + 328u), c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 332u), 0u);  c.pc = t; return; }
L_0047AAD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0047AB3C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    set32(c.r[2], c.r[2].w[0] + 30960u);
    set32(c.r[4], c.r[17].w[0] + 20u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 21664u);
    set32(c.r[6], 0u + 28u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047AB10u); set32(c.r[7], 0u + 11u);  if (depth < kMaxDepth) unit_00A5(c, 157u, depth + 1u); else { c.pc = 0x00397E80u; return; } if (c.pc != 0x0047AB10u) [[unlikely]] return; }
L_0047AB10:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0047AB28; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 25632u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 4;
L_0047AB28:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0047AB40; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047AB3Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0047AB3Cu) [[unlikely]] return; }
L_0047AB3C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0047AB40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0047AB60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0047ABA8; } }
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0047AB94; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047AB90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0047AB90u) [[unlikely]] return; }
L_0047AB90:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0047AB94:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0047ABAC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047ABA8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0047ABA8u) [[unlikely]] return; }
L_0047ABA8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0047ABAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0047ABC0:
    set32(c.r[29], c.r[29].w[0] - 464u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00480000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + 25632u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00480000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[4].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + 30960u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 19920u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] - 21664u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[7], 0u + 28u);
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047AC2Cu); set32(c.r[8], 0u + 11u);  if (depth < kMaxDepth) unit_00A5(c, 152u, depth + 1u); else { c.pc = 0x00397DB0u; return; } if (c.pc != 0x0047AC2Cu) [[unlikely]] return; }
L_0047AC2C:
    st32((c.r[17].w[0] + 328u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 332u), 0u);
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 72u);
    set32(c.r[5], c.r[5].w[0] - 25736u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047AC50u); st32((c.r[16].w[0] + 96u), 0u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0047AC50u) [[unlikely]] return; }
L_0047AC50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 25736u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047AC64u); set32(c.r[5], c.r[5].w[0] - 288u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0047AC64u) [[unlikely]] return; }
L_0047AC64:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_0047AC74; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), 0u);  if (t) { goto L_0047ACB8; } }
L_0047AC74:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 25736u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047AC84u); set32(c.r[5], c.r[5].w[0] - 296u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0047AC84u) [[unlikely]] return; }
L_0047AC84:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_0047AC98; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[2].w[0]);  if (t) { goto L_0047ACB8; } }
L_0047AC98:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 25736u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047ACA8u); set32(c.r[5], c.r[5].w[0] - 304u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0047ACA8u) [[unlikely]] return; }
L_0047ACA8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0047ACBC; }
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 2;
L_0047ACB8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0047ACBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047ACC4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 313u, depth + 1u); else { c.pc = 0x0040AC60u; return; } if (c.pc != 0x0047ACC4u) [[unlikely]] return; }
L_0047ACC4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047ACD8u); set32(c.r[6], c.r[6].w[0] - 25729u);  if (depth < kMaxDepth) unit_00C2(c, 456u, depth + 1u); else { c.pc = 0x0040BF10u; return; } if (c.pc != 0x0047ACD8u) [[unlikely]] return; }
L_0047ACD8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047ACE4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C2(c, 314u, depth + 1u); else { c.pc = 0x0040AC70u; return; } if (c.pc != 0x0047ACE4u) [[unlikely]] return; }
L_0047ACE4:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 624u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047ACF4u); st32((c.r[16].w[0] + 152u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C6(c, 129u, depth + 1u); else { c.pc = 0x00419040u; return; } if (c.pc != 0x0047ACF4u) [[unlikely]] return; }
L_0047ACF4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047AD04u); set32(c.r[5], c.r[5].w[0] - 25760u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0047AD04u) [[unlikely]] return; }
L_0047AD04:
    set32(c.r[2], 0u + 4u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 432u), 0u);
    set32(c.r[4], c.r[16].w[0] + 624u);
    st32((c.r[29].w[0] + 444u), c.r[2].w[0]);
    set32(c.r[7], c.r[29].w[0] + 416u);
    st32((c.r[29].w[0] + 436u), 0u);
    st32((c.r[29].w[0] + 440u), 0u);
    st8((c.r[29].w[0] + 448u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[5], ld32((c.r[16].w[0] + 632u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 636u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047AD44u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00DD(c, 138u, depth + 1u); else { c.pc = 0x00475130u; return; } if (c.pc != 0x0047AD44u) [[unlikely]] return; }
L_0047AD44:
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047AD50u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0047AD50u) [[unlikely]] return; }
L_0047AD50:
    set32(c.r[4], ld32((c.r[16].w[0] + 700u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047AD60u); set32(c.r[5], c.r[5].w[0] - 25722u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0047AD60u) [[unlikely]] return; }
L_0047AD60:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 700u)));  goto L_0047AD78; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047AD74u); set32(c.r[5], c.r[17].w[0] + 12u);  if (depth < kMaxDepth) unit_00B9(c, 422u, depth + 1u); else { c.pc = 0x003E7B80u; return; } if (c.pc != 0x0047AD74u) [[unlikely]] return; }
L_0047AD74:
    set32(c.r[4], ld32((c.r[16].w[0] + 700u)));
    c.budget -= 1;
L_0047AD78:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047AD84u); set32(c.r[5], c.r[5].w[0] - 25711u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0047AD84u) [[unlikely]] return; }
L_0047AD84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0047AD98; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047AD98u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_00B9(c, 422u, depth + 1u); else { c.pc = 0x003E7B80u; return; } if (c.pc != 0x0047AD98u) [[unlikely]] return; }
L_0047AD98:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 388u);
    set32(c.r[5], c.r[5].w[0] - 25744u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047ADACu); st32((c.r[29].w[0] + 384u), 0u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0047ADACu) [[unlikely]] return; }
L_0047ADAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[29].w[0] + 404u), 0u);
    st32((c.r[29].w[0] + 408u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 388u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 389u);  goto L_0047ADD4; }
    set32(c.r[5], ld32((c.r[29].w[0] + 396u)));
    c.budget -= 1;
L_0047ADD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047ADDCu); set32(c.r[4], c.r[17].w[0] + 24u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0047ADDCu) [[unlikely]] return; }
L_0047ADDC:
    c.f[0] = ld32((c.r[29].w[0] + 404u));
    set32(c.r[4], c.r[29].w[0] + 388u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 408u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047ADF8u); st32((c.r[17].w[0] + 44u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0047ADF8u) [[unlikely]] return; }
L_0047ADF8:
    c.f[20] = ld32((c.r[17].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 356u);
    set32(c.r[5], c.r[5].w[0] - 25695u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047AE14u); st32((c.r[29].w[0] + 352u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0047AE14u) [[unlikely]] return; }
L_0047AE14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[29].w[0] + 372u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 376u), c.f[20]);
    set32(c.r[2], ld32((c.r[29].w[0] + 352u)));
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 356u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 357u);  goto L_0047AE3C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 364u)));
    c.budget -= 1;
L_0047AE3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047AE44u); set32(c.r[4], c.r[17].w[0] + 52u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0047AE44u) [[unlikely]] return; }
L_0047AE44:
    c.f[0] = ld32((c.r[29].w[0] + 372u));
    set32(c.r[4], c.r[29].w[0] + 356u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 376u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047AE60u); st32((c.r[17].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0047AE60u) [[unlikely]] return; }
L_0047AE60:
    c.f[20] = ld32((c.r[17].w[0] + 16u));
    set32(c.r[2], 0u + 2u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 324u);
    set32(c.r[5], c.r[5].w[0] - 25670u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047AE7Cu); st32((c.r[29].w[0] + 320u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0047AE7Cu) [[unlikely]] return; }
L_0047AE7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[29].w[0] + 340u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 344u), c.f[20]);
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 324u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 325u);  goto L_0047AEA4; }
    set32(c.r[5], ld32((c.r[29].w[0] + 332u)));
    c.budget -= 1;
L_0047AEA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047AEACu); set32(c.r[4], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0047AEACu) [[unlikely]] return; }
L_0047AEAC:
    c.f[0] = ld32((c.r[29].w[0] + 340u));
    set32(c.r[4], c.r[29].w[0] + 324u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 344u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047AEC8u); st32((c.r[17].w[0] + 100u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0047AEC8u) [[unlikely]] return; }
L_0047AEC8:
    c.f[20] = ld32((c.r[17].w[0] + 16u));
    set32(c.r[2], 0u + 3u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 292u);
    set32(c.r[5], c.r[5].w[0] - 25646u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047AEE4u); st32((c.r[29].w[0] + 288u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0047AEE4u) [[unlikely]] return; }
L_0047AEE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[29].w[0] + 308u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 312u), c.f[20]);
    set32(c.r[2], ld32((c.r[29].w[0] + 288u)));
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 293u);  goto L_0047AF0C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 300u)));
    c.budget -= 1;
L_0047AF0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047AF14u); set32(c.r[4], c.r[17].w[0] + 108u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0047AF14u) [[unlikely]] return; }
L_0047AF14:
    c.f[0] = ld32((c.r[29].w[0] + 308u));
    set32(c.r[4], c.r[29].w[0] + 292u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 124u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 312u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047AF30u); st32((c.r[17].w[0] + 128u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0047AF30u) [[unlikely]] return; }
L_0047AF30:
    c.f[20] = ld32((c.r[17].w[0] + 16u));
    set32(c.r[2], 0u + 4u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 260u);
    set32(c.r[5], c.r[5].w[0] - 25617u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047AF4Cu); st32((c.r[29].w[0] + 256u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0047AF4Cu) [[unlikely]] return; }
L_0047AF4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[29].w[0] + 276u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 280u), c.f[20]);
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    st32((c.r[17].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 260u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 261u);  goto L_0047AF74; }
    set32(c.r[5], ld32((c.r[29].w[0] + 268u)));
    c.budget -= 1;
L_0047AF74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047AF7Cu); set32(c.r[4], c.r[17].w[0] + 136u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0047AF7Cu) [[unlikely]] return; }
L_0047AF7C:
    c.f[0] = ld32((c.r[29].w[0] + 276u));
    set32(c.r[4], c.r[29].w[0] + 260u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 280u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047AF98u); st32((c.r[17].w[0] + 156u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0047AF98u) [[unlikely]] return; }
L_0047AF98:
    c.f[20] = ld32((c.r[17].w[0] + 16u));
    set32(c.r[2], 0u + 5u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 228u);
    set32(c.r[5], c.r[5].w[0] - 25586u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047AFB4u); st32((c.r[29].w[0] + 224u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0047AFB4u) [[unlikely]] return; }
L_0047AFB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[29].w[0] + 244u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 248u), c.f[20]);
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    st32((c.r[17].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 229u);  goto L_0047AFDC; }
    set32(c.r[5], ld32((c.r[29].w[0] + 236u)));
    c.budget -= 1;
L_0047AFDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047AFE4u); set32(c.r[4], c.r[17].w[0] + 164u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0047AFE4u) [[unlikely]] return; }
L_0047AFE4:
    c.f[0] = ld32((c.r[29].w[0] + 244u));
    set32(c.r[4], c.r[29].w[0] + 228u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 180u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 248u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B000u); st32((c.r[17].w[0] + 184u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0047B000u) [[unlikely]] return; }
L_0047B000:
    c.f[20] = ld32((c.r[17].w[0] + 16u));
    set32(c.r[2], 0u + 6u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 196u);
    set32(c.r[5], c.r[5].w[0] - 25556u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B01Cu); st32((c.r[29].w[0] + 192u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0047B01Cu) [[unlikely]] return; }
L_0047B01C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 216u), c.f[20]);
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    st32((c.r[17].w[0] + 188u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 197u);  goto L_0047B044; }
    set32(c.r[5], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 1;
L_0047B044:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B04Cu); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0047B04Cu) [[unlikely]] return; }
L_0047B04C:
    c.f[0] = ld32((c.r[29].w[0] + 212u));
    set32(c.r[4], c.r[29].w[0] + 196u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 208u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 216u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B068u); st32((c.r[17].w[0] + 212u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0047B068u) [[unlikely]] return; }
L_0047B068:
    c.f[20] = ld32((c.r[17].w[0] + 16u));
    set32(c.r[2], 0u + 7u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 164u);
    set32(c.r[5], c.r[5].w[0] - 25527u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B084u); st32((c.r[29].w[0] + 160u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0047B084u) [[unlikely]] return; }
L_0047B084:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 184u), c.f[20]);
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    st32((c.r[17].w[0] + 216u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 165u);  goto L_0047B0AC; }
    set32(c.r[5], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 1;
L_0047B0AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B0B4u); set32(c.r[4], c.r[17].w[0] + 220u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0047B0B4u) [[unlikely]] return; }
L_0047B0B4:
    c.f[0] = ld32((c.r[29].w[0] + 180u));
    set32(c.r[4], c.r[29].w[0] + 164u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 236u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B0D0u); st32((c.r[17].w[0] + 240u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0047B0D0u) [[unlikely]] return; }
L_0047B0D0:
    c.f[20] = ld32((c.r[17].w[0] + 16u));
    set32(c.r[2], 0u + 8u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 132u);
    set32(c.r[5], c.r[5].w[0] - 25502u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B0ECu); st32((c.r[29].w[0] + 128u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0047B0ECu) [[unlikely]] return; }
L_0047B0EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 148u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 152u), c.f[20]);
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    st32((c.r[17].w[0] + 244u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 133u);  goto L_0047B114; }
    set32(c.r[5], ld32((c.r[29].w[0] + 140u)));
    c.budget -= 1;
L_0047B114:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B11Cu); set32(c.r[4], c.r[17].w[0] + 248u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0047B11Cu) [[unlikely]] return; }
L_0047B11C:
    c.f[0] = ld32((c.r[29].w[0] + 148u));
    set32(c.r[4], c.r[29].w[0] + 132u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 264u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B138u); st32((c.r[17].w[0] + 268u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0047B138u) [[unlikely]] return; }
L_0047B138:
    c.f[20] = ld32((c.r[17].w[0] + 16u));
    set32(c.r[2], 0u + 9u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 100u);
    set32(c.r[5], c.r[5].w[0] - 25477u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B154u); st32((c.r[29].w[0] + 96u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0047B154u) [[unlikely]] return; }
L_0047B154:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 120u), c.f[20]);
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    st32((c.r[17].w[0] + 272u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 101u);  goto L_0047B17C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 1;
L_0047B17C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B184u); set32(c.r[4], c.r[17].w[0] + 276u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0047B184u) [[unlikely]] return; }
L_0047B184:
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    set32(c.r[4], c.r[29].w[0] + 100u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 292u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B1A0u); st32((c.r[17].w[0] + 296u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0047B1A0u) [[unlikely]] return; }
L_0047B1A0:
    set32(c.r[2], 0u + 10u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 68u);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B1B8u); set32(c.r[5], c.r[5].w[0] - 25452u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0047B1B8u) [[unlikely]] return; }
L_0047B1B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    st32((c.r[29].w[0] + 84u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 10;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 69u);  goto L_0047B1E4; }
    set32(c.r[5], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 1;
L_0047B1E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B1ECu); set32(c.r[4], c.r[17].w[0] + 304u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0047B1ECu) [[unlikely]] return; }
L_0047B1EC:
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    set32(c.r[4], c.r[29].w[0] + 68u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 320u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B208u); st32((c.r[17].w[0] + 324u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0047B208u) [[unlikely]] return; }
L_0047B208:
    set32(c.r[3], c.r[17].w[0] + 20u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 328u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 332u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 464u);  c.pc = t; return; }
L_0047B230:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[5].w[0] - 25744u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B258u); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0047B258u) [[unlikely]] return; }
L_0047B258:
    st32((c.r[16].w[0] + 20u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0047B280:
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::sub(c.f[1], c.f[0]);  c.pc = t; return; }
L_0047B290:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.f[20] = c.f[12];  if (t) { goto L_0047B328; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B2C8u); set32(c.r[4], ld32((c.r[2].w[0] + 320u)));  if (depth < kMaxDepth) unit_00F4(c, 210u, depth + 1u); else { c.pc = 0x004D1E00u; return; } if (c.pc != 0x0047B2C8u) [[unlikely]] return; }
L_0047B2C8:
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.f[1] = fp::add(c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 8u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], ld32((c.r[2].w[0] + 124u)));  goto L_0047B2F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B2ECu); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 359u, depth + 1u); else { c.pc = 0x00416800u; return; } if (c.pc != 0x0047B2ECu) [[unlikely]] return; }
L_0047B2EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0047B32C; } }
L_0047B2F4:
    c.r[3].d[0] = ld8((c.r[3].w[0] + 2344u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[2].w[0] + 132u)));  goto L_0047B310; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B308u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 359u, depth + 1u); else { c.pc = 0x00416800u; return; } if (c.pc != 0x0047B308u) [[unlikely]] return; }
L_0047B308:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047B328; } }
L_0047B310:
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0047B328; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B328u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 372u, depth + 1u); else { c.pc = 0x00416940u; return; } if (c.pc != 0x0047B328u) [[unlikely]] return; }
L_0047B328:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0047B32C:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0047B340:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), 0u);  c.pc = t; return; }
L_0047B350:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0047B3A0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 30992u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0047B384; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 25632u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0047B384:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0047B39C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B39Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0047B39Cu) [[unlikely]] return; }
L_0047B39C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0047B3A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0047B3B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 25632u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[4].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + 30992u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 72u);
    st32((c.r[5].w[0] + 96u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B40Cu); set32(c.r[5], c.r[5].w[0] - 25312u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0047B40Cu) [[unlikely]] return; }
L_0047B40C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 25312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B420u); set32(c.r[5], c.r[5].w[0] - 288u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0047B420u) [[unlikely]] return; }
L_0047B420:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_0047B430; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), 0u);  if (t) { goto L_0047B474; } }
L_0047B430:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 25312u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B440u); set32(c.r[5], c.r[5].w[0] - 296u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0047B440u) [[unlikely]] return; }
L_0047B440:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_0047B454; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[2].w[0]);  if (t) { goto L_0047B474; } }
L_0047B454:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 25312u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B464u); set32(c.r[5], c.r[5].w[0] - 304u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0047B464u) [[unlikely]] return; }
L_0047B464:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0047B478; }
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 2;
L_0047B474:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0047B478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B480u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C2(c, 313u, depth + 1u); else { c.pc = 0x0040AC60u; return; } if (c.pc != 0x0047B480u) [[unlikely]] return; }
L_0047B480:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B494u); set32(c.r[6], c.r[6].w[0] - 25305u);  if (depth < kMaxDepth) unit_00C2(c, 456u, depth + 1u); else { c.pc = 0x0040BF10u; return; } if (c.pc != 0x0047B494u) [[unlikely]] return; }
L_0047B494:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B4A0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C2(c, 314u, depth + 1u); else { c.pc = 0x0040AC70u; return; } if (c.pc != 0x0047B4A0u) [[unlikely]] return; }
L_0047B4A0:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 624u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B4B0u); st32((c.r[16].w[0] + 152u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C6(c, 129u, depth + 1u); else { c.pc = 0x00419040u; return; } if (c.pc != 0x0047B4B0u) [[unlikely]] return; }
L_0047B4B0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B4C0u); set32(c.r[5], c.r[5].w[0] - 25298u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0047B4C0u) [[unlikely]] return; }
L_0047B4C0:
    c.f[0] = ld32((c.r[28].w[0] - 31572u));
    set32(c.r[2], 0u + 4u);
    st32((c.r[29].w[0] + 64u), 0u);
    set32(c.r[4], c.r[16].w[0] + 624u);
    st32((c.r[29].w[0] + 72u), 0u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    st8((c.r[29].w[0] + 80u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], c.r[29].w[0] + 48u);
    set32(c.r[5], ld32((c.r[16].w[0] + 632u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 636u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B504u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00DD(c, 138u, depth + 1u); else { c.pc = 0x00475130u; return; } if (c.pc != 0x0047B504u) [[unlikely]] return; }
L_0047B504:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B510u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0047B510u) [[unlikely]] return; }
L_0047B510:
    set32(c.r[4], ld32((c.r[16].w[0] + 700u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B520u); set32(c.r[5], c.r[5].w[0] - 25284u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0047B520u) [[unlikely]] return; }
L_0047B520:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0047B538; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B534u); set32(c.r[5], c.r[17].w[0] + 12u);  if (depth < kMaxDepth) unit_00B9(c, 422u, depth + 1u); else { c.pc = 0x003E7B80u; return; } if (c.pc != 0x0047B534u) [[unlikely]] return; }
L_0047B534:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0047B538:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0047B550:
    c.f[1] = ld32((c.r[4].w[0] + 16u));
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::sub(c.f[1], c.f[0]);  c.pc = t; return; }
L_0047B560:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047B570:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 9;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0047B630; }
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.f[1] = fp::add(c.f[0], c.f[12]);
    st32((c.r[16].w[0] + 12u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));  goto L_0047B5C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B5B8u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 359u, depth + 1u); else { c.pc = 0x00416800u; return; } if (c.pc != 0x0047B5B8u) [[unlikely]] return; }
L_0047B5B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047B62C; } }
L_0047B5C0:
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B5CCu); set32(c.r[4], ld32((c.r[2].w[0] + 320u)));  if (depth < kMaxDepth) unit_00F4(c, 210u, depth + 1u); else { c.pc = 0x004D1E00u; return; } if (c.pc != 0x0047B5CCu) [[unlikely]] return; }
L_0047B5CC:
    set32(c.r[3], ld32((c.r[2].w[0] + 132u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[5].d[0]) { c.r[3].d[0] = ld8((c.r[16].w[0] + 8u));  goto L_0047B60C; }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_0047B5FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B5F4u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 372u, depth + 1u); else { c.pc = 0x00416940u; return; } if (c.pc != 0x0047B5F4u) [[unlikely]] return; }
L_0047B5F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047B62C; } }
L_0047B5FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B604u);  if (depth < kMaxDepth) unit_00C5(c, 359u, depth + 1u); else { c.pc = 0x00416800u; return; } if (c.pc != 0x0047B604u) [[unlikely]] return; }
L_0047B604:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047B62C; } }
L_0047B60C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0047B62C; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 124u)));
    set32(c.r[3], 0u + 4u);
    set32(c.r[4], ld32((c.r[4].w[0] + 1052u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0047B62C; } }
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 1;
L_0047B62C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0047B630:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0047B640:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0047B67C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B664u); set32(c.r[4], ld32((c.r[3].w[0] + 320u)));  if (depth < kMaxDepth) unit_00F4(c, 210u, depth + 1u); else { c.pc = 0x004D1E00u; return; } if (c.pc != 0x0047B664u) [[unlikely]] return; }
L_0047B664:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 420u)));
    st32((c.r[3].w[0] + 88u), c.r[4].w[0]);
    c.f[12] = ld32((c.r[16].w[0] + 20u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B67Cu); set32(c.r[4], ld32((c.r[2].w[0] + 420u)));  if (depth < kMaxDepth) unit_00F9(c, 71u, depth + 1u); else { c.pc = 0x004E4E50u; return; } if (c.pc != 0x0047B67Cu) [[unlikely]] return; }
L_0047B67C:
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 12u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0047B6A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0047B6F0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 31024u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0047B6D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 25632u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0047B6D4:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0047B6EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B6ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0047B6ECu) [[unlikely]] return; }
L_0047B6EC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0047B6F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0047B700:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 25632u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x42480000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[4].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + 31024u);
    set32(c.r[3], 0u + 2u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 72u);
    st32((c.r[5].w[0] + 96u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B770u); set32(c.r[5], c.r[5].w[0] - 25184u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0047B770u) [[unlikely]] return; }
L_0047B770:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 25184u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B784u); set32(c.r[5], c.r[5].w[0] - 288u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0047B784u) [[unlikely]] return; }
L_0047B784:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_0047B794; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), 0u);  if (t) { goto L_0047B7D8; } }
L_0047B794:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 25184u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B7A4u); set32(c.r[5], c.r[5].w[0] - 296u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0047B7A4u) [[unlikely]] return; }
L_0047B7A4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_0047B7B8; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[2].w[0]);  if (t) { goto L_0047B7D8; } }
L_0047B7B8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 25184u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B7C8u); set32(c.r[5], c.r[5].w[0] - 304u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0047B7C8u) [[unlikely]] return; }
L_0047B7C8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0047B7DC; }
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 2;
L_0047B7D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0047B7DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B7E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C2(c, 313u, depth + 1u); else { c.pc = 0x0040AC60u; return; } if (c.pc != 0x0047B7E4u) [[unlikely]] return; }
L_0047B7E4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B7F8u); set32(c.r[6], c.r[6].w[0] - 25178u);  if (depth < kMaxDepth) unit_00C2(c, 456u, depth + 1u); else { c.pc = 0x0040BF10u; return; } if (c.pc != 0x0047B7F8u) [[unlikely]] return; }
L_0047B7F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B804u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C2(c, 314u, depth + 1u); else { c.pc = 0x0040AC70u; return; } if (c.pc != 0x0047B804u) [[unlikely]] return; }
L_0047B804:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 624u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B814u); st32((c.r[16].w[0] + 152u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C6(c, 129u, depth + 1u); else { c.pc = 0x00419040u; return; } if (c.pc != 0x0047B814u) [[unlikely]] return; }
L_0047B814:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B824u); set32(c.r[5], c.r[5].w[0] - 25171u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0047B824u) [[unlikely]] return; }
L_0047B824:
    c.f[0] = ld32((c.r[28].w[0] - 32076u));
    set32(c.r[2], 0u + 4u);
    st32((c.r[29].w[0] + 64u), 0u);
    set32(c.r[4], c.r[16].w[0] + 624u);
    st32((c.r[29].w[0] + 72u), 0u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    st8((c.r[29].w[0] + 80u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], c.r[29].w[0] + 48u);
    set32(c.r[5], ld32((c.r[16].w[0] + 632u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 636u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B868u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00DD(c, 138u, depth + 1u); else { c.pc = 0x00475130u; return; } if (c.pc != 0x0047B868u) [[unlikely]] return; }
L_0047B868:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B874u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0047B874u) [[unlikely]] return; }
L_0047B874:
    set32(c.r[4], ld32((c.r[16].w[0] + 700u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B884u); set32(c.r[5], c.r[5].w[0] - 25156u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0047B884u) [[unlikely]] return; }
L_0047B884:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 700u)));  goto L_0047B89C; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B898u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_00B9(c, 422u, depth + 1u); else { c.pc = 0x003E7B80u; return; } if (c.pc != 0x0047B898u) [[unlikely]] return; }
L_0047B898:
    set32(c.r[4], ld32((c.r[16].w[0] + 700u)));
    c.budget -= 1;
L_0047B89C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B8A8u); set32(c.r[5], c.r[5].w[0] - 25145u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0047B8A8u) [[unlikely]] return; }
L_0047B8A8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 700u)));  goto L_0047B8C0; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B8BCu); set32(c.r[5], c.r[17].w[0] + 20u);  if (depth < kMaxDepth) unit_00B9(c, 422u, depth + 1u); else { c.pc = 0x003E7B80u; return; } if (c.pc != 0x0047B8BCu) [[unlikely]] return; }
L_0047B8BC:
    set32(c.r[4], ld32((c.r[16].w[0] + 700u)));
    c.budget -= 1;
L_0047B8C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B8CCu); set32(c.r[5], c.r[5].w[0] - 25131u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0047B8CCu) [[unlikely]] return; }
L_0047B8CC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0047B8E4; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B8E0u); set32(c.r[5], c.r[17].w[0] + 24u);  if (depth < kMaxDepth) unit_00DD(c, 412u, depth + 1u); else { c.pc = 0x00477710u; return; } if (c.pc != 0x0047B8E0u) [[unlikely]] return; }
L_0047B8E0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0047B8E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0047B900:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0047B9C0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[17].w[0] + 76u);
    set32(c.r[3], c.r[3].w[0] + 31056u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_0047B964; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0047B964; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0047B964; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0047B964; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0047B964; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0047B964; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B964u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0047B964u) [[unlikely]] return; }
L_0047B964:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0047B9AC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27552u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B984u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x0047B984u) [[unlikely]] return; }
L_0047B984:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0047B9A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 31120u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0047B9A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26416u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0047B9A8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0047B9AC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0047B9C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047B9C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0047B9C0u) [[unlikely]] return; }
L_0047B9C0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0047B9C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0047B9E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 24896u);  c.pc = t; return; }
L_0047B9F0:
    set32(c.r[29], c.r[29].w[0] - 496u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 320u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BA48u); set32(c.r[17], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_00F4(c, 210u, depth + 1u); else { c.pc = 0x004D1E00u; return; } if (c.pc != 0x0047BA48u) [[unlikely]] return; }
L_0047BA48:
    set32(c.r[3], c.r[2].w[0] + 48u);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[22], c.r[3].w[0] + 1u);  goto L_0047BA60; }
    set32(c.r[22], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_0047BA60:
    set32(c.r[4], ld32((c.r[28].w[0] - 22676u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BA6Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F9(c, 217u, depth + 1u); else { c.pc = 0x004E5F30u; return; } if (c.pc != 0x0047BA6Cu) [[unlikely]] return; }
L_0047BA6C:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BA7Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0047BA7Cu) [[unlikely]] return; }
L_0047BA7C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24835u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BA90u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 246u, depth + 1u); else { c.pc = 0x0019FB50u; return; } if (c.pc != 0x0047BA90u) [[unlikely]] return; }
L_0047BA90:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24820u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BAA4u); c.r[6].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 246u, depth + 1u); else { c.pc = 0x0019FB50u; return; } if (c.pc != 0x0047BAA4u) [[unlikely]] return; }
L_0047BAA4:
    set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BAB4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 78u, depth + 1u); else { c.pc = 0x003CCB90u; return; } if (c.pc != 0x0047BAB4u) [[unlikely]] return; }
L_0047BAB4:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_0047BAE0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24805u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BAD8u); set32(c.r[6], c.r[6].w[0] - 24794u);  if (depth < kMaxDepth) unit_0027(c, 246u, depth + 1u); else { c.pc = 0x0019FB50u; return; } if (c.pc != 0x0047BAD8u) [[unlikely]] return; }
L_0047BAD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_00DF(c, 55u, depth); } }
L_0047BAE0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24805u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BAF4u); set32(c.r[6], c.r[6].w[0] - 24784u);  if (depth < kMaxDepth) unit_0027(c, 246u, depth + 1u); else { c.pc = 0x0019FB50u; return; } if (c.pc != 0x0047BAF4u) [[unlikely]] return; }
L_0047BAF4:
    set32(c.r[2], ld32((c.r[19].w[0] + 68u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BB08u); set32(c.r[4], ld32((c.r[19].w[0] + 72u)));  if (depth < kMaxDepth) unit_0023(c, 16u, depth + 1u); else { c.pc = 0x0018C2E0u; return; } if (c.pc != 0x0047BB08u) [[unlikely]] return; }
L_0047BB08:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 68u)));  goto L_0047BC90; }
    set32(c.r[3], ld32((c.r[19].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 1ull;  if (t) { goto L_0047BB28; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0047BB28; } }
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.budget -= 1;
L_0047BB28:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_0047BB3C; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] - 24763u);  if (t) { goto L_0047BB40; } }
L_0047BB3C:
    set32(c.r[6], c.r[6].w[0] - 24755u);
    c.budget -= 1;
L_0047BB40:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BB50u); set32(c.r[5], c.r[5].w[0] - 24772u);  if (depth < kMaxDepth) unit_0027(c, 246u, depth + 1u); else { c.pc = 0x0019FB50u; return; } if (c.pc != 0x0047BB50u) [[unlikely]] return; }
L_0047BB50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 468u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 488u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 464u), c.r[2].w[0]);
    set32(c.r[2], 0u + 64u);
    st32((c.r[29].w[0] + 484u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 490u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0047BB84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BB7Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0047BB7Cu) [[unlikely]] return; }
L_0047BB7C:
    set32(c.r[2], c.r[29].w[0] + 468u);
    st32((c.r[29].w[0] + 484u), c.r[2].w[0]);
    c.budget -= 2;
L_0047BB84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[7], ld32((c.r[29].w[0] + 484u)));
    c.f[0] = ld32((c.r[2].w[0] - 24960u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[7].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[0] = ld32((c.r[6].w[0] - 24956u));
    st32((c.r[7].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] - 24952u));
    st32((c.r[7].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] - 24948u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BBC4u); st32((c.r[7].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0047BBC4u) [[unlikely]] return; }
L_0047BBC4:
    set32(c.r[21], ld32((c.r[2].w[0] + 120u)));
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 76u)));
    set32(c.r[5], c.r[29].w[0] + 468u);
    set32(c.r[4], c.r[21].w[0] << 5);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 490u)));
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 484u)));
    c.budget -= 11;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[20], ld32((c.r[29].w[0] + 468u)));  goto L_0047BC20; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BBFCu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0047BBFCu) [[unlikely]] return; }
L_0047BBFC:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_0047BC18; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BC14u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0047BC14u) [[unlikely]] return; }
L_0047BC14:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_0047BC18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0047BC44; } }
L_0047BC20:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BC2Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0047BC2Cu) [[unlikely]] return; }
L_0047BC2C:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 484u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BC40u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0047BC40u) [[unlikely]] return; }
L_0047BC40:
    st32((c.r[16].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 1;
L_0047BC44:
    set32(c.r[25], ld32((c.r[23].w[0] + 60u)));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BC58u); set32(c.r[4], c.r[23].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047BC58u) [[unlikely]] return; }
L_0047BC58:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 490u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 464u), c.r[3].w[0]);  if (t) { goto L_0047BF50; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 484u)));
    set32(c.r[2], c.r[29].w[0] + 468u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 384u);  goto L_0047BF54; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BC88u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0047BC88u) [[unlikely]] return; }
L_0047BC88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047BF50; } }
L_0047BC90:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0; c.r[2].d[0] = c.r[3].d[0] & 1ull;  if (t) { goto L_0047BCA4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0047BCA4; } }
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.budget -= 1;
L_0047BCA4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_0047BE04; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24772u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BCC4u); set32(c.r[6], c.r[6].w[0] - 24763u);  if (depth < kMaxDepth) unit_0027(c, 246u, depth + 1u); else { c.pc = 0x0019FB50u; return; } if (c.pc != 0x0047BCC4u) [[unlikely]] return; }
L_0047BCC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 436u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 456u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 432u), c.r[2].w[0]);
    set32(c.r[2], 0u + 64u);
    st32((c.r[29].w[0] + 452u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 458u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0047BCF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BCF0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0047BCF0u) [[unlikely]] return; }
L_0047BCF0:
    set32(c.r[2], c.r[29].w[0] + 436u);
    st32((c.r[29].w[0] + 452u), c.r[2].w[0]);
    c.budget -= 2;
L_0047BCF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[7], ld32((c.r[29].w[0] + 452u)));
    c.f[0] = ld32((c.r[2].w[0] - 24992u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[7].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[0] = ld32((c.r[6].w[0] - 24988u));
    st32((c.r[7].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] - 24984u));
    st32((c.r[7].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] - 24980u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BD38u); st32((c.r[7].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0047BD38u) [[unlikely]] return; }
L_0047BD38:
    set32(c.r[21], ld32((c.r[2].w[0] + 120u)));
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 76u)));
    set32(c.r[5], c.r[29].w[0] + 436u);
    set32(c.r[4], c.r[21].w[0] << 5);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 458u)));
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 452u)));
    c.budget -= 11;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[20], ld32((c.r[29].w[0] + 436u)));  goto L_0047BD94; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BD70u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0047BD70u) [[unlikely]] return; }
L_0047BD70:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_0047BD8C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BD88u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0047BD88u) [[unlikely]] return; }
L_0047BD88:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_0047BD8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0047BDB8; } }
L_0047BD94:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BDA0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0047BDA0u) [[unlikely]] return; }
L_0047BDA0:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 452u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BDB4u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0047BDB4u) [[unlikely]] return; }
L_0047BDB4:
    st32((c.r[16].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 1;
L_0047BDB8:
    set32(c.r[25], ld32((c.r[23].w[0] + 60u)));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BDCCu); set32(c.r[4], c.r[23].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047BDCCu) [[unlikely]] return; }
L_0047BDCC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 458u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 432u), c.r[3].w[0]);  if (t) { goto L_0047BF50; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 452u)));
    set32(c.r[2], c.r[29].w[0] + 436u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0047BF50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BDFCu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0047BDFCu) [[unlikely]] return; }
L_0047BDFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047BF50; } }
L_0047BE04:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24772u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BE18u); set32(c.r[6], c.r[6].w[0] - 24755u);  if (depth < kMaxDepth) unit_0027(c, 246u, depth + 1u); else { c.pc = 0x0019FB50u; return; } if (c.pc != 0x0047BE18u) [[unlikely]] return; }
L_0047BE18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 404u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 424u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 400u), c.r[2].w[0]);
    set32(c.r[2], 0u + 64u);
    st32((c.r[29].w[0] + 420u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 426u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0047BE4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BE44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0047BE44u) [[unlikely]] return; }
L_0047BE44:
    set32(c.r[2], c.r[29].w[0] + 404u);
    st32((c.r[29].w[0] + 420u), c.r[2].w[0]);
    c.budget -= 2;
L_0047BE4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[7], ld32((c.r[29].w[0] + 420u)));
    c.f[0] = ld32((c.r[2].w[0] - 24976u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[7].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[0] = ld32((c.r[6].w[0] - 24972u));
    st32((c.r[7].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] - 24968u));
    st32((c.r[7].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] - 24964u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BE8Cu); st32((c.r[7].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0047BE8Cu) [[unlikely]] return; }
L_0047BE8C:
    set32(c.r[21], ld32((c.r[2].w[0] + 120u)));
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 76u)));
    set32(c.r[5], c.r[29].w[0] + 404u);
    set32(c.r[4], c.r[21].w[0] << 5);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 426u)));
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 420u)));
    c.budget -= 11;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[20], ld32((c.r[29].w[0] + 404u)));  goto L_0047BEE8; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BEC4u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0047BEC4u) [[unlikely]] return; }
L_0047BEC4:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_0047BEE0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BEDCu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0047BEDCu) [[unlikely]] return; }
L_0047BEDC:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_0047BEE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0047BF0C; } }
L_0047BEE8:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BEF4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0047BEF4u) [[unlikely]] return; }
L_0047BEF4:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 420u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BF08u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0047BF08u) [[unlikely]] return; }
L_0047BF08:
    st32((c.r[16].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 1;
L_0047BF0C:
    set32(c.r[25], ld32((c.r[23].w[0] + 60u)));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BF20u); set32(c.r[4], c.r[23].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047BF20u) [[unlikely]] return; }
L_0047BF20:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 426u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 400u), c.r[3].w[0]);  if (t) { goto L_0047BF50; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 420u)));
    set32(c.r[2], c.r[29].w[0] + 404u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0047BF50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BF50u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0047BF50u) [[unlikely]] return; }
L_0047BF50:
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.budget -= 1;
L_0047BF54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BF5Cu);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0047BF5Cu) [[unlikely]] return; }
L_0047BF5C:
    set32(c.r[2], 0u + 6u);
    set32(c.r[4], c.r[29].w[0] + 368u);
    st32((c.r[29].w[0] + 368u), c.r[2].w[0]);
    set32(c.r[5], 0u + 4u);
    st32((c.r[29].w[0] + 372u), 0u);
    st32((c.r[29].w[0] + 376u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BF7Cu); st32((c.r[29].w[0] + 380u), 0u);  if (depth < kMaxDepth) unit_00C4(c, 450u, depth + 1u); else { c.pc = 0x00413B30u; return; } if (c.pc != 0x0047BF7Cu) [[unlikely]] return; }
L_0047BF7C:
    set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BF8Cu); set32(c.r[6], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_00B3(c, 67u, depth + 1u); else { c.pc = 0x003CC9C0u; return; } if (c.pc != 0x0047BF8Cu) [[unlikely]] return; }
L_0047BF8C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BF98u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0047BF98u) [[unlikely]] return; }
L_0047BF98:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[21].d[0] = 0ull + 0ull;  goto L_0047BFE8; }
    set32(c.r[2], ld32((c.r[30].w[0] + 132u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[30].w[0] + 132u);  if (t) { goto L_0047BFBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_0047BFC0; } }
L_0047BFBC:
    set32(c.r[6], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0047BFC0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BFD0u); set32(c.r[5], c.r[5].w[0] - 24747u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x0047BFD0u) [[unlikely]] return; }
L_0047BFD0:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 116u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BFE4u); set32(c.r[5], c.r[29].w[0] + 384u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047BFE4u) [[unlikely]] return; }
L_0047BFE4:
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0047BFE8:
    set32(c.r[5], c.r[21].w[0] + 3u);
    c.budget -= 1;
L_0047BFEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047BFF4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0047BFF4u) [[unlikely]] return; }
L_0047BFF4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 376u)));
    c.r[1].d[0] = c.r[21].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    [[clang::musttail]] return unit_00DF(c, 1u, depth);
}

}
