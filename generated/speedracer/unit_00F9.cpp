#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00F9[4096] = {
    1, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0,
    0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0,
    30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0,
    0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 40, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 46, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62,
    0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0,
    0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0,
    78, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0,
    88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0,
    0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100,
    0, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0,
    0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0,
    0, 112, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 118,
    0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0,
    0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0,
    0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0,
    135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0,
    141, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 0,
    0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0,
    0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0,
    0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164,
    0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0,
    0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0,
    0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0,
    0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181,
    0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0,
    185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0,
    0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 195, 0, 196, 0, 197, 0, 198, 0, 199, 0, 200, 0, 201, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0,
    0, 205, 0, 0, 206, 0, 0, 207, 0, 0, 208, 0, 0, 209, 0, 0, 210, 0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 215, 0, 0, 0, 0, 0, 216,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0,
    0, 0, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0,
    0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 234, 0,
    0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 237, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0,
    248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0,
    0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0,
    0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0,
    0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0,
    267, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0,
    271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 273, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0,
    277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0,
    0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0,
    0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0,
    0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 303, 0, 0, 304, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0,
    308, 0, 0, 309, 0, 0, 310, 0, 311, 0, 0, 0, 312, 0, 0, 313, 0, 0, 314, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 319, 0, 0, 320, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0,
    0, 324, 0, 0, 325, 0, 0, 326, 0, 327, 0, 0, 0, 328, 0, 0, 329, 0, 0, 330, 0, 331, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0, 337, 0, 0, 0,
    338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0,
    342, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0,
    0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 349, 0, 350, 0, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 365,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 368, 0, 0,
    0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0,
    373, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    379, 0, 0, 0, 380, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 387,
    0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 392, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 395,
    0, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 399, 400, 0, 0, 0, 0, 0, 0, 0, 401, 0,
    0, 0, 402, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 405, 0, 0, 406, 0, 0, 407, 0, 0, 408, 0, 0,
    409, 0, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 416, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 418, 0, 0, 419, 0, 0, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423,
    0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 428, 0,
    0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 432, 0, 0,
    0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 438,
    0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0, 442, 0, 0, 443, 0, 0, 444, 0, 0, 0, 445, 0, 0,
    446, 0, 0, 447, 0, 0, 0, 448, 0, 0, 449, 0, 0, 450, 0, 0, 0, 451, 0, 0, 452, 0, 0, 453, 0, 0, 0, 454, 0, 455, 0, 0,
    0, 0, 0, 0, 0, 456, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 459, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0,
    0, 461, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 464, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0,
    0, 467, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 469, 0, 0, 0, 470, 0, 0, 0, 0, 471, 0, 0, 0, 472, 0, 0, 0, 0, 0,
    0, 473, 0, 0, 0, 0, 474, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 477, 0, 0, 0, 478, 0, 0, 0, 0, 0,
    0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 483, 0, 0,
    0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 491, 0, 0, 0,
    0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00F9(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_004E4000;
    case 2u: goto L_004E4004;
    case 3u: goto L_004E4010;
    case 4u: goto L_004E4148;
    case 5u: goto L_004E415C;
    case 6u: goto L_004E4164;
    case 7u: goto L_004E41A8;
    case 8u: goto L_004E41BC;
    case 9u: goto L_004E41C4;
    case 10u: goto L_004E4208;
    case 11u: goto L_004E422C;
    case 12u: goto L_004E4264;
    case 13u: goto L_004E4364;
    case 14u: goto L_004E43AC;
    case 15u: goto L_004E4404;
    case 16u: goto L_004E44A0;
    case 17u: goto L_004E44F0;
    case 18u: goto L_004E464C;
    case 19u: goto L_004E4658;
    case 20u: goto L_004E4660;
    case 21u: goto L_004E4694;
    case 22u: goto L_004E46C4;
    case 23u: goto L_004E4730;
    case 24u: goto L_004E4764;
    case 25u: goto L_004E4778;
    case 26u: goto L_004E4798;
    case 27u: goto L_004E47A8;
    case 28u: goto L_004E47C4;
    case 29u: goto L_004E47DC;
    case 30u: goto L_004E4800;
    case 31u: goto L_004E482C;
    case 32u: goto L_004E483C;
    case 33u: goto L_004E4850;
    case 34u: goto L_004E4870;
    case 35u: goto L_004E4890;
    case 36u: goto L_004E48B8;
    case 37u: goto L_004E48C4;
    case 38u: goto L_004E490C;
    case 39u: goto L_004E494C;
    case 40u: goto L_004E4950;
    case 41u: goto L_004E4958;
    case 42u: goto L_004E4994;
    case 43u: goto L_004E49D0;
    case 44u: goto L_004E49DC;
    case 45u: goto L_004E4A50;
    case 46u: goto L_004E4A84;
    case 47u: goto L_004E4A90;
    case 48u: goto L_004E4A98;
    case 49u: goto L_004E4B14;
    case 50u: goto L_004E4B20;
    case 51u: goto L_004E4B78;
    case 52u: goto L_004E4BD0;
    case 53u: goto L_004E4BDC;
    case 54u: goto L_004E4BE4;
    case 55u: goto L_004E4C34;
    case 56u: goto L_004E4C3C;
    case 57u: goto L_004E4C90;
    case 58u: goto L_004E4C98;
    case 59u: goto L_004E4CB4;
    case 60u: goto L_004E4CD0;
    case 61u: goto L_004E4CD8;
    case 62u: goto L_004E4CFC;
    case 63u: goto L_004E4D04;
    case 64u: goto L_004E4D1C;
    case 65u: goto L_004E4D3C;
    case 66u: goto L_004E4D5C;
    case 67u: goto L_004E4D6C;
    case 68u: goto L_004E4DA8;
    case 69u: goto L_004E4DF0;
    case 70u: goto L_004E4E40;
    case 71u: goto L_004E4E50;
    case 72u: goto L_004E4E6C;
    case 73u: goto L_004E4EBC;
    case 74u: goto L_004E4EF8;
    case 75u: goto L_004E4F10;
    case 76u: goto L_004E4F54;
    case 77u: goto L_004E4F70;
    case 78u: goto L_004E4F80;
    case 79u: goto L_004E4F8C;
    case 80u: goto L_004E4FB0;
    case 81u: goto L_004E4FCC;
    case 82u: goto L_004E4FDC;
    case 83u: goto L_004E4FE8;
    case 84u: goto L_004E5070;
    case 85u: goto L_004E50C8;
    case 86u: goto L_004E50EC;
    case 87u: goto L_004E50F8;
    case 88u: goto L_004E5100;
    case 89u: goto L_004E5118;
    case 90u: goto L_004E5130;
    case 91u: goto L_004E5174;
    case 92u: goto L_004E5190;
    case 93u: goto L_004E51A0;
    case 94u: goto L_004E51AC;
    case 95u: goto L_004E5200;
    case 96u: goto L_004E5210;
    case 97u: goto L_004E5238;
    case 98u: goto L_004E5244;
    case 99u: goto L_004E5268;
    case 100u: goto L_004E527C;
    case 101u: goto L_004E5290;
    case 102u: goto L_004E529C;
    case 103u: goto L_004E52C0;
    case 104u: goto L_004E52D4;
    case 105u: goto L_004E52E8;
    case 106u: goto L_004E52F4;
    case 107u: goto L_004E5318;
    case 108u: goto L_004E532C;
    case 109u: goto L_004E5340;
    case 110u: goto L_004E534C;
    case 111u: goto L_004E5370;
    case 112u: goto L_004E5384;
    case 113u: goto L_004E5398;
    case 114u: goto L_004E53A4;
    case 115u: goto L_004E53C8;
    case 116u: goto L_004E53DC;
    case 117u: goto L_004E53F0;
    case 118u: goto L_004E53FC;
    case 119u: goto L_004E5420;
    case 120u: goto L_004E5434;
    case 121u: goto L_004E5448;
    case 122u: goto L_004E5454;
    case 123u: goto L_004E5478;
    case 124u: goto L_004E548C;
    case 125u: goto L_004E54A0;
    case 126u: goto L_004E54AC;
    case 127u: goto L_004E54D0;
    case 128u: goto L_004E54E4;
    case 129u: goto L_004E54F8;
    case 130u: goto L_004E5504;
    case 131u: goto L_004E5528;
    case 132u: goto L_004E553C;
    case 133u: goto L_004E5550;
    case 134u: goto L_004E555C;
    case 135u: goto L_004E5580;
    case 136u: goto L_004E5594;
    case 137u: goto L_004E55A8;
    case 138u: goto L_004E55B4;
    case 139u: goto L_004E55D8;
    case 140u: goto L_004E55EC;
    case 141u: goto L_004E5600;
    case 142u: goto L_004E560C;
    case 143u: goto L_004E5630;
    case 144u: goto L_004E5644;
    case 145u: goto L_004E5658;
    case 146u: goto L_004E5664;
    case 147u: goto L_004E5688;
    case 148u: goto L_004E569C;
    case 149u: goto L_004E56B0;
    case 150u: goto L_004E56BC;
    case 151u: goto L_004E56E0;
    case 152u: goto L_004E56F4;
    case 153u: goto L_004E5708;
    case 154u: goto L_004E5714;
    case 155u: goto L_004E5738;
    case 156u: goto L_004E574C;
    case 157u: goto L_004E5760;
    case 158u: goto L_004E576C;
    case 159u: goto L_004E5790;
    case 160u: goto L_004E57A4;
    case 161u: goto L_004E57B8;
    case 162u: goto L_004E57C4;
    case 163u: goto L_004E57E8;
    case 164u: goto L_004E57FC;
    case 165u: goto L_004E5810;
    case 166u: goto L_004E581C;
    case 167u: goto L_004E5840;
    case 168u: goto L_004E5854;
    case 169u: goto L_004E5868;
    case 170u: goto L_004E5874;
    case 171u: goto L_004E5898;
    case 172u: goto L_004E58AC;
    case 173u: goto L_004E58F0;
    case 174u: goto L_004E590C;
    case 175u: goto L_004E591C;
    case 176u: goto L_004E5928;
    case 177u: goto L_004E5970;
    case 178u: goto L_004E5990;
    case 179u: goto L_004E59C4;
    case 180u: goto L_004E59E4;
    case 181u: goto L_004E59FC;
    case 182u: goto L_004E5A20;
    case 183u: goto L_004E5A48;
    case 184u: goto L_004E5A64;
    case 185u: goto L_004E5A80;
    case 186u: goto L_004E5AB0;
    case 187u: goto L_004E5B70;
    case 188u: goto L_004E5B84;
    case 189u: goto L_004E5BD4;
    case 190u: goto L_004E5C20;
    case 191u: goto L_004E5CB0;
    case 192u: goto L_004E5D30;
    case 193u: goto L_004E5D58;
    case 194u: goto L_004E5D70;
    case 195u: goto L_004E5D9C;
    case 196u: goto L_004E5DA4;
    case 197u: goto L_004E5DAC;
    case 198u: goto L_004E5DB4;
    case 199u: goto L_004E5DBC;
    case 200u: goto L_004E5DC4;
    case 201u: goto L_004E5DCC;
    case 202u: goto L_004E5DD4;
    case 203u: goto L_004E5DDC;
    case 204u: goto L_004E5DF8;
    case 205u: goto L_004E5E04;
    case 206u: goto L_004E5E10;
    case 207u: goto L_004E5E1C;
    case 208u: goto L_004E5E28;
    case 209u: goto L_004E5E34;
    case 210u: goto L_004E5E40;
    case 211u: goto L_004E5E4C;
    case 212u: goto L_004E5E58;
    case 213u: goto L_004E5EB0;
    case 214u: goto L_004E5EDC;
    case 215u: goto L_004E5EE4;
    case 216u: goto L_004E5EFC;
    case 217u: goto L_004E5F30;
    case 218u: goto L_004E5F4C;
    case 219u: goto L_004E5F5C;
    case 220u: goto L_004E5F6C;
    case 221u: goto L_004E5FA0;
    case 222u: goto L_004E5FBC;
    case 223u: goto L_004E5FC4;
    case 224u: goto L_004E5FF0;
    case 225u: goto L_004E6010;
    case 226u: goto L_004E601C;
    case 227u: goto L_004E6050;
    case 228u: goto L_004E6064;
    case 229u: goto L_004E6074;
    case 230u: goto L_004E6088;
    case 231u: goto L_004E60A0;
    case 232u: goto L_004E60CC;
    case 233u: goto L_004E60F0;
    case 234u: goto L_004E60F8;
    case 235u: goto L_004E6110;
    case 236u: goto L_004E6124;
    case 237u: goto L_004E612C;
    case 238u: goto L_004E6134;
    case 239u: goto L_004E6168;
    case 240u: goto L_004E6178;
    case 241u: goto L_004E61AC;
    case 242u: goto L_004E61B4;
    case 243u: goto L_004E61CC;
    case 244u: goto L_004E61F0;
    case 245u: goto L_004E622C;
    case 246u: goto L_004E6234;
    case 247u: goto L_004E6260;
    case 248u: goto L_004E6280;
    case 249u: goto L_004E62B4;
    case 250u: goto L_004E62CC;
    case 251u: goto L_004E62DC;
    case 252u: goto L_004E62F4;
    case 253u: goto L_004E6308;
    case 254u: goto L_004E6338;
    case 255u: goto L_004E635C;
    case 256u: goto L_004E6374;
    case 257u: goto L_004E6390;
    case 258u: goto L_004E63C8;
    case 259u: goto L_004E63DC;
    case 260u: goto L_004E63F0;
    case 261u: goto L_004E6404;
    case 262u: goto L_004E6418;
    case 263u: goto L_004E642C;
    case 264u: goto L_004E6440;
    case 265u: goto L_004E6454;
    case 266u: goto L_004E6468;
    case 267u: goto L_004E6480;
    case 268u: goto L_004E64A0;
    case 269u: goto L_004E64C4;
    case 270u: goto L_004E64E0;
    case 271u: goto L_004E6500;
    case 272u: goto L_004E6520;
    case 273u: goto L_004E652C;
    case 274u: goto L_004E6534;
    case 275u: goto L_004E6548;
    case 276u: goto L_004E6560;
    case 277u: goto L_004E6580;
    case 278u: goto L_004E6598;
    case 279u: goto L_004E65B0;
    case 280u: goto L_004E65D4;
    case 281u: goto L_004E65F0;
    case 282u: goto L_004E6610;
    case 283u: goto L_004E6628;
    case 284u: goto L_004E6640;
    case 285u: goto L_004E6670;
    case 286u: goto L_004E6690;
    case 287u: goto L_004E66D4;
    case 288u: goto L_004E66E0;
    case 289u: goto L_004E671C;
    case 290u: goto L_004E6730;
    case 291u: goto L_004E674C;
    case 292u: goto L_004E6774;
    case 293u: goto L_004E67A0;
    case 294u: goto L_004E67F0;
    case 295u: goto L_004E6808;
    case 296u: goto L_004E6820;
    case 297u: goto L_004E6854;
    case 298u: goto L_004E685C;
    case 299u: goto L_004E688C;
    case 300u: goto L_004E68C0;
    case 301u: goto L_004E6908;
    case 302u: goto L_004E691C;
    case 303u: goto L_004E6928;
    case 304u: goto L_004E6934;
    case 305u: goto L_004E693C;
    case 306u: goto L_004E694C;
    case 307u: goto L_004E696C;
    case 308u: goto L_004E6980;
    case 309u: goto L_004E698C;
    case 310u: goto L_004E6998;
    case 311u: goto L_004E69A0;
    case 312u: goto L_004E69B0;
    case 313u: goto L_004E69BC;
    case 314u: goto L_004E69C8;
    case 315u: goto L_004E69D0;
    case 316u: goto L_004E69E0;
    case 317u: goto L_004E6A0C;
    case 318u: goto L_004E6A20;
    case 319u: goto L_004E6A2C;
    case 320u: goto L_004E6A38;
    case 321u: goto L_004E6A40;
    case 322u: goto L_004E6A50;
    case 323u: goto L_004E6A70;
    case 324u: goto L_004E6A84;
    case 325u: goto L_004E6A90;
    case 326u: goto L_004E6A9C;
    case 327u: goto L_004E6AA4;
    case 328u: goto L_004E6AB4;
    case 329u: goto L_004E6AC0;
    case 330u: goto L_004E6ACC;
    case 331u: goto L_004E6AD4;
    case 332u: goto L_004E6AE4;
    case 333u: goto L_004E6B24;
    case 334u: goto L_004E6B34;
    case 335u: goto L_004E6B50;
    case 336u: goto L_004E6B64;
    case 337u: goto L_004E6B70;
    case 338u: goto L_004E6B80;
    case 339u: goto L_004E6BC0;
    case 340u: goto L_004E6BD0;
    case 341u: goto L_004E6BE0;
    case 342u: goto L_004E6C00;
    case 343u: goto L_004E6C20;
    case 344u: goto L_004E6C50;
    case 345u: goto L_004E6C74;
    case 346u: goto L_004E6C90;
    case 347u: goto L_004E6CA8;
    case 348u: goto L_004E6CC0;
    case 349u: goto L_004E6D1C;
    case 350u: goto L_004E6D24;
    case 351u: goto L_004E6D30;
    case 352u: goto L_004E6D4C;
    case 353u: goto L_004E6D94;
    case 354u: goto L_004E6DD0;
    case 355u: goto L_004E6E0C;
    case 356u: goto L_004E6E20;
    case 357u: goto L_004E6E50;
    case 358u: goto L_004E6E70;
    case 359u: goto L_004E6EA0;
    case 360u: goto L_004E6EB0;
    case 361u: goto L_004E6F10;
    case 362u: goto L_004E6F3C;
    case 363u: goto L_004E6F4C;
    case 364u: goto L_004E6F74;
    case 365u: goto L_004E6F7C;
    case 366u: goto L_004E6FAC;
    case 367u: goto L_004E6FDC;
    case 368u: goto L_004E6FF4;
    case 369u: goto L_004E700C;
    case 370u: goto L_004E70BC;
    case 371u: goto L_004E70D8;
    case 372u: goto L_004E70F0;
    case 373u: goto L_004E7100;
    case 374u: goto L_004E7108;
    case 375u: goto L_004E711C;
    case 376u: goto L_004E724C;
    case 377u: goto L_004E72A4;
    case 378u: goto L_004E72B8;
    case 379u: goto L_004E7380;
    case 380u: goto L_004E7390;
    case 381u: goto L_004E739C;
    case 382u: goto L_004E7428;
    case 383u: goto L_004E7434;
    case 384u: goto L_004E74BC;
    case 385u: goto L_004E74C8;
    case 386u: goto L_004E74E8;
    case 387u: goto L_004E74FC;
    case 388u: goto L_004E7504;
    case 389u: goto L_004E7550;
    case 390u: goto L_004E7570;
    case 391u: goto L_004E75A8;
    case 392u: goto L_004E75B4;
    case 393u: goto L_004E75D0;
    case 394u: goto L_004E75E0;
    case 395u: goto L_004E75FC;
    case 396u: goto L_004E7610;
    case 397u: goto L_004E7620;
    case 398u: goto L_004E7640;
    case 399u: goto L_004E7654;
    case 400u: goto L_004E7658;
    case 401u: goto L_004E7678;
    case 402u: goto L_004E7688;
    case 403u: goto L_004E76A4;
    case 404u: goto L_004E76B4;
    case 405u: goto L_004E76D0;
    case 406u: goto L_004E76DC;
    case 407u: goto L_004E76E8;
    case 408u: goto L_004E76F4;
    case 409u: goto L_004E7700;
    case 410u: goto L_004E770C;
    case 411u: goto L_004E7724;
    case 412u: goto L_004E7734;
    case 413u: goto L_004E77A4;
    case 414u: goto L_004E77B4;
    case 415u: goto L_004E7830;
    case 416u: goto L_004E7838;
    case 417u: goto L_004E7850;
    case 418u: goto L_004E7888;
    case 419u: goto L_004E7894;
    case 420u: goto L_004E78AC;
    case 421u: goto L_004E78BC;
    case 422u: goto L_004E78D4;
    case 423u: goto L_004E78FC;
    case 424u: goto L_004E7908;
    case 425u: goto L_004E7930;
    case 426u: goto L_004E794C;
    case 427u: goto L_004E7960;
    case 428u: goto L_004E7978;
    case 429u: goto L_004E7988;
    case 430u: goto L_004E79C8;
    case 431u: goto L_004E79DC;
    case 432u: goto L_004E79F4;
    case 433u: goto L_004E7A04;
    case 434u: goto L_004E7A2C;
    case 435u: goto L_004E7A50;
    case 436u: goto L_004E7A60;
    case 437u: goto L_004E7AEC;
    case 438u: goto L_004E7AFC;
    case 439u: goto L_004E7B18;
    case 440u: goto L_004E7B2C;
    case 441u: goto L_004E7B3C;
    case 442u: goto L_004E7B4C;
    case 443u: goto L_004E7B58;
    case 444u: goto L_004E7B64;
    case 445u: goto L_004E7B74;
    case 446u: goto L_004E7B80;
    case 447u: goto L_004E7B8C;
    case 448u: goto L_004E7B9C;
    case 449u: goto L_004E7BA8;
    case 450u: goto L_004E7BB4;
    case 451u: goto L_004E7BC4;
    case 452u: goto L_004E7BD0;
    case 453u: goto L_004E7BDC;
    case 454u: goto L_004E7BEC;
    case 455u: goto L_004E7BF4;
    case 456u: goto L_004E7C14;
    case 457u: goto L_004E7C24;
    case 458u: goto L_004E7C40;
    case 459u: goto L_004E7C54;
    case 460u: goto L_004E7C64;
    case 461u: goto L_004E7C84;
    case 462u: goto L_004E7C94;
    case 463u: goto L_004E7CB0;
    case 464u: goto L_004E7CC4;
    case 465u: goto L_004E7CD4;
    case 466u: goto L_004E7CF4;
    case 467u: goto L_004E7D04;
    case 468u: goto L_004E7D20;
    case 469u: goto L_004E7D34;
    case 470u: goto L_004E7D44;
    case 471u: goto L_004E7D58;
    case 472u: goto L_004E7D68;
    case 473u: goto L_004E7D84;
    case 474u: goto L_004E7D98;
    case 475u: goto L_004E7DA8;
    case 476u: goto L_004E7DC4;
    case 477u: goto L_004E7DD8;
    case 478u: goto L_004E7DE8;
    case 479u: goto L_004E7E04;
    case 480u: goto L_004E7E34;
    case 481u: goto L_004E7E44;
    case 482u: goto L_004E7E60;
    case 483u: goto L_004E7E74;
    case 484u: goto L_004E7E88;
    case 485u: goto L_004E7EA8;
    case 486u: goto L_004E7EB4;
    case 487u: goto L_004E7EE0;
    case 488u: goto L_004E7F20;
    case 489u: goto L_004E7F2C;
    case 490u: goto L_004E7F58;
    case 491u: goto L_004E7F70;
    case 492u: goto L_004E7F88;
    case 493u: goto L_004E7FA8;
    case 494u: goto L_004E7FB8;
    case 495u: goto L_004E7FD4;
    default: bad_entry(c, 0x004E4000u); return;
    }
L_004E4000:
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 1;
L_004E4004:
    c.f[0] = ld32((c.r[20].w[0] + 112u));
    c.f[0] = fp::max(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 112u), c.f[0]);
    c.budget -= 3;
L_004E4010:
    c.f[1] = ld32((c.r[17].w[0] + 348u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = c.r[2].w[0];
    c.f[0] = ld32((c.r[17].w[0] + 1424u));
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[4] = 0u;
    c.f[1] = fp::max(c.f[0], c.f[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[5] = fp::min(c.f[1], c.f[0]);
    c.f[2] = ld32((c.r[20].w[0] + 92u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[5]));
    c.budget -= 17;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);  goto L_004E4074; }
    c.f[1] = fp::mul(c.f[3], c.f[20]);
    c.f[0] = fp::sub(c.f[5], c.f[2]);
    c.facc = fp::add(c.f[4], c.f[2]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[0]));
    st32((c.r[20].w[0] + 92u), c.f[0]);
    c.f[0] = fp::min(c.f[0], c.f[5]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 92u), c.f[0]);  if (t) { goto L_004E4098; } }
L_004E4074:
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[0], c.f[20]);
    c.f[0] = fp::sub(c.f[2], c.f[5]);
    c.facc = fp::add(c.f[4], c.f[2]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[1], c.f[0]));
    st32((c.r[20].w[0] + 92u), c.f[0]);
    c.f[0] = fp::max(c.f[0], c.f[5]);
    st32((c.r[20].w[0] + 92u), c.f[0]);
    c.budget -= 9;
L_004E4098:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1172u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E40AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[4] = ld32((c.r[28].w[0] - 32272u));  if (t) { goto L_004E40B0; } }
L_004E40AC:
    c.f[4] = 0u;
    c.budget -= 1;
L_004E40B0:
    c.f[3] = ld32((c.r[20].w[0] + 96u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[4]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);  goto L_004E40EC; }
    c.f[0] = ld32((c.r[28].w[0] - 32068u));
    c.f[1] = fp::sub(c.f[4], c.f[3]);
    c.f[2] = fp::mul(c.f[0], c.f[20]);
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[3]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[1]));
    st32((c.r[20].w[0] + 96u), c.f[0]);
    c.f[0] = fp::min(c.f[0], c.f[4]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 96u), c.f[0]);  if (t) { goto L_004E4114; } }
L_004E40EC:
    c.f[0] = c.r[2].w[0];
    c.f[2] = fp::mul(c.f[0], c.f[20]);
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[3], c.f[4]);
    c.facc = fp::add(c.f[0], c.f[3]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[2], c.f[1]));
    st32((c.r[20].w[0] + 96u), c.f[0]);
    c.f[0] = fp::max(c.f[0], c.f[4]);
    st32((c.r[20].w[0] + 96u), c.f[0]);
    c.budget -= 10;
L_004E4114:
    c.f[0] = ld32((c.r[20].w[0] + 132u));
    c.f[3] = ld32((c.r[28].w[0] - 32064u));
    c.f[2] = 0u;
    c.facc = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[20]));
    st32((c.r[20].w[0] + 132u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 136u));
    c.f[1] = ld32((c.r[28].w[0] - 32060u));
    c.facc = fp::add(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[20]));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 136u), c.f[0]);  if (t) { goto L_004E418C; } }
L_004E4148:
    c.f[1] = ld32((c.r[28].w[0] - 32228u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[20].w[0] + 132u), c.f[0]);  if (t) { goto L_004E418C; } }
L_004E415C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4164u);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x004E4164u) [[unlikely]] return; }
L_004E4164:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].d[0] = c.r[2].d[0] & 7ull;  if (t) { goto L_004E4178; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] + 8u);  goto L_004E417C; }
    set32(c.r[3], c.r[3].w[0] - 8u);
    c.budget -= 1;
L_004E4178:
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.budget -= 1;
L_004E417C:
    st32((c.r[20].w[0] + 140u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 144u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E415Cu | kUnwind; return; } goto L_004E415C; } }
L_004E418C:
    c.f[1] = ld32((c.r[20].w[0] + 132u));
    c.f[0] = ld32((c.r[28].w[0] - 32228u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[20].w[0] + 132u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004E4148u | kUnwind; return; } goto L_004E4148; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[20].w[0] + 136u));  if (t) { goto L_004E41F0; } }
L_004E41A8:
    c.f[1] = ld32((c.r[28].w[0] - 32228u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[20].w[0] + 136u), c.f[0]);  if (t) { goto L_004E41EC; } }
L_004E41BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E41C4u);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x004E41C4u) [[unlikely]] return; }
L_004E41C4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].d[0] = c.r[2].d[0] & 7ull;  if (t) { goto L_004E41D8; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] + 8u);  goto L_004E41DC; }
    set32(c.r[3], c.r[3].w[0] - 8u);
    c.budget -= 1;
L_004E41D8:
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.budget -= 1;
L_004E41DC:
    st32((c.r[20].w[0] + 144u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 140u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E41BCu | kUnwind; return; } goto L_004E41BC; } }
L_004E41EC:
    c.f[1] = ld32((c.r[20].w[0] + 136u));
    c.budget -= 1;
L_004E41F0:
    c.f[0] = ld32((c.r[28].w[0] - 32228u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[20].w[0] + 136u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004E41A8u | kUnwind; return; } goto L_004E41A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4208u); c.f[12] = ld32((c.r[20].w[0] + 132u));  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x004E4208u) [[unlikely]] return; }
L_004E4208:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = ld32((c.r[28].w[0] - 32056u));
    c.f[2] = c.r[2].w[0];
    c.f[1] = 0u;
    c.facc = fp::add(c.f[1], c.f[2]);
    c.f[12] = ld32((c.r[20].w[0] + 136u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E422Cu); c.f[21] = fp::sub(c.facc, fp::mul(c.f[3], c.f[0]));  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x004E422Cu) [[unlikely]] return; }
L_004E422C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[9].d[0] = 0ull + 0ull;
    c.f[3] = ld32((c.r[28].w[0] - 32056u));
    set32(c.r[5], 0u + 4u);
    c.f[2] = c.r[3].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = 0u;
    set32(c.r[7], 0u + 9u);
    c.facc = fp::add(c.f[1], c.f[2]);
    set32(c.r[8], 0u + 3u);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[3], c.f[0]));
    c.f[0] = fp::add(c.f[21], c.f[1]);
    fpu_div(c, 2u, c.f[21], c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 14;
L_004E4264:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != c.r[8].d[0];  if (t) { goto L_004E429C; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], c.r[9].w[0] << 3);  goto L_004E428C; }
    set32(c.r[3], ld32((c.r[20].w[0] + 140u)));
    set32(c.r[4], c.r[9].w[0] << 3);
    set32(c.r[4], c.r[20].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 148u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 152u), c.f[2]);  if (t) { goto L_004E42E0; } }
L_004E428C:
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 148u), c.r[7].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 152u), c.r[6].w[0]);  if (t) { goto L_004E42E0; } }
L_004E429C:
    c.budget -= 2;
    if (c.r[9].d[0] != c.r[5].d[0]) { set32(c.r[3], c.r[9].w[0] << 3);  goto L_004E42D4; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], c.r[9].w[0] << 3);  goto L_004E42C4; }
    set32(c.r[3], ld32((c.r[20].w[0] + 144u)));
    set32(c.r[4], c.r[9].w[0] << 3);
    set32(c.r[4], c.r[20].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0] + 148u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 152u), c.f[0]);  if (t) { goto L_004E42E0; } }
L_004E42C4:
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 148u), c.r[7].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 152u), c.r[6].w[0]);  if (t) { goto L_004E42E0; } }
L_004E42D4:
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 148u), c.r[9].w[0]);
    st32((c.r[3].w[0] + 152u), c.r[6].w[0]);
    c.budget -= 3;
L_004E42E0:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[3].d[0] = c.r[9].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E4264u | kUnwind; return; } goto L_004E4264; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[20].w[0] + 316u), 0u);
    c.f[2] = c.r[3].w[0];
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[20].w[0] + 116u), c.r[3].w[0]);  if (t) { goto L_004E4338; } }
    c.f[1] = ld32((c.r[28].w[0] - 32620u));
    set32(c.r[3], ld32((c.r[20].w[0] + 316u)));
    c.f[0] = ld32((c.r[20].w[0] + 112u));
    set32(c.r[4], c.r[3].w[0] + 1u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    st32((c.r[20].w[0] + 316u), c.r[4].w[0]);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 196u), c.f[2]);
    st32((c.r[3].w[0] + 200u), c.f[0]);
    st32((c.r[3].w[0] + 188u), c.f[2]);
    c.f[0] = ld32((c.r[20].w[0] + 116u));
    st32((c.r[3].w[0] + 192u), c.f[0]);
    c.budget -= 13;
L_004E4338:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 1200u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_004E4368; }
    set32(c.r[3], ld32((c.r[19].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4364u); set32(c.r[4], ld32((c.r[2].w[0] + 52u)));  if (depth < kMaxDepth) unit_002F(c, 118u, depth + 1u); else { c.pc = 0x001BDBC0u; return; } if (c.pc != 0x004E4364u) [[unlikely]] return; }
L_004E4364:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E4368:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.f[1] = ld32((c.r[20].w[0] + 176u));  goto L_004E45CC; }
    set32(c.r[3], ld32((c.r[19].w[0] + 124u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.f[1] = ld32((c.r[20].w[0] + 120u));
    set32(c.r[2], ld32((c.r[3].w[0] + 2228u)));
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 12u));
    c.f[0] = ld32((c.r[2].w[0] + 56u));
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[13], c.f[0]);
    c.f[12] = fp::add(c.facc, fp::mul(c.f[20], c.f[0]));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E43ACu); st32((c.r[20].w[0] + 120u), c.f[12]);  if (depth < kMaxDepth) unit_00AB(c, 431u, depth + 1u); else { c.pc = 0x003AF758u; return; } if (c.pc != 0x004E43ACu) [[unlikely]] return; }
L_004E43AC:
    st32((c.r[20].w[0] + 120u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = ld32((c.r[20].w[0] + 92u));
    set32(c.r[3], ld32((c.r[19].w[0] + 124u)));
    c.f[2] = c.r[2].w[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40600000u);
    c.f[0] = c.r[2].w[0];
    c.f[3] = fp::mul(c.f[0], c.f[1]);
    c.f[2] = ld32((c.r[3].w[0] + 400u));
    c.f[1] = ld32((c.r[3].w[0] + 404u));
    c.f[0] = ld32((c.r[3].w[0] + 408u));
    c.f[20] = fp::mul(c.f[3], c.f[2]);
    c.f[21] = fp::mul(c.f[3], c.f[1]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4404u); c.f[22] = fp::mul(c.f[3], c.f[0]);  if (depth < kMaxDepth) unit_00EE(c, 275u, depth + 1u); else { c.pc = 0x004BA5A0u; return; } if (c.pc != 0x004E4404u) [[unlikely]] return; }
L_004E4404:
    c.f[2] = ld32((c.r[2].w[0] + 8u));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[2] = fp::sub(c.f[2], c.f[22]);
    c.f[5] = fp::sub(c.f[0], c.f[20]);
    c.f[1] = fp::sub(c.f[1], c.f[21]);
    st32((c.r[29].w[0] + 176u), c.f[2]);
    st32((c.r[29].w[0] + 172u), c.f[1]);
    st32((c.r[29].w[0] + 168u), c.f[5]);
    c.f[4] = ld32((c.r[29].w[0] + 172u));
    c.f[3] = ld32((c.r[29].w[0] + 176u));
    st32((c.r[29].w[0] + 184u), c.f[5]);
    st32((c.r[29].w[0] + 188u), c.f[4]);
    st32((c.r[29].w[0] + 192u), c.f[3]);
    c.f[2] = ld32((c.r[17].w[0] + 160u));
    c.f[1] = ld32((c.r[17].w[0] + 164u));
    c.f[0] = ld32((c.r[17].w[0] + 168u));
    c.f[2] = fp::sub(c.f[5], c.f[2]);
    c.f[1] = fp::sub(c.f[4], c.f[1]);
    c.f[0] = fp::sub(c.f[3], c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = fp::sqrt(c.f[1]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 184u);
    set32(c.r[6], c.r[29].w[0] + 212u);
    set32(c.r[7], c.r[29].w[0] + 208u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::add(c.f[0], c.f[1]);
    c.f[0] = ld32((c.r[28].w[0] - 32052u));
    c.f[12] = ld32((c.r[28].w[0] - 32372u));
    fpu_div(c, 20u, c.f[0], c.f[1]);
    c.budget -= 39;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E44A0u);  if (depth < kMaxDepth) unit_0062(c, 118u, depth + 1u); else { c.pc = 0x00288E30u; return; } if (c.pc != 0x004E44A0u) [[unlikely]] return; }
L_004E44A0:
    c.f[4] = ld32((c.r[17].w[0] + 308u));
    set32(c.r[4], ld32((c.r[28].w[0] - 27612u)));
    c.f[1] = ld32((c.r[29].w[0] + 212u));
    c.f[2] = ld32((c.r[17].w[0] + 312u));
    c.f[3] = ld32((c.r[17].w[0] + 316u));
    c.f[1] = fp::sub(c.f[1], c.f[4]);
    c.f[21] = fp::sub(c.f[2], c.f[4]);
    fpu_div(c, 1u, c.f[1], c.f[21]);
    c.f[2] = ld32((c.r[17].w[0] + 320u));
    c.f[0] = ld32((c.r[29].w[0] + 208u));
    st32((c.r[29].w[0] + 212u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 320u));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 208u), c.f[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 240u)));
    c.budget -= 20;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004E44F0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004E44F0u) [[unlikely]] return; }
L_004E44F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_004E4508; }
    c.f[0] = ld32((c.r[29].w[0] + 212u));
    c.f[0] = fp::sub(c.f[21], c.f[0]);
    st32((c.r[29].w[0] + 212u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 4;
L_004E4508:
    set32(c.r[4], ld32((c.r[20].w[0] + 316u)));
    c.f[5] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = ld32((c.r[20].w[0] + 92u));
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.f[0] = ld32((c.r[28].w[0] - 32048u));
    c.f[3] = 0u;
    st32((c.r[20].w[0] + 316u), c.r[3].w[0]);
    c.facc = fp::add(c.f[3], c.f[5]);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    c.f[4] = fp::sub(c.facc, fp::mul(c.f[0], c.f[1]));
    st32((c.r[3].w[0] + 196u), c.f[20]);
    c.f[0] = ld32((c.r[29].w[0] + 212u));
    st32((c.r[3].w[0] + 188u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 208u));
    c.f[1] = ld32((c.r[20].w[0] + 120u));
    c.f[0] = fp::sub(c.f[5], c.f[0]);
    c.facc = fp::add(c.f[3], c.f[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[1], c.f[20]));
    st32((c.r[3].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 120u));
    c.f[0] = fp::sub(c.f[5], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[3].w[0] + 200u), c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    st32((c.r[3].w[0] + 200u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 316u)));
    set32(c.r[4], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 4);
    st32((c.r[20].w[0] + 316u), c.r[4].w[0]);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 196u), c.f[20]);
    c.f[0] = ld32((c.r[29].w[0] + 212u));
    st32((c.r[3].w[0] + 188u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 208u));
    c.f[1] = ld32((c.r[20].w[0] + 120u));
    c.f[0] = fp::sub(c.f[5], c.f[0]);
    c.f[1] = fp::sub(c.f[5], c.f[1]);
    c.facc = fp::add(c.f[3], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[1], c.f[20]));
    st32((c.r[3].w[0] + 192u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 120u));
    c.f[1] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[4]);
    st32((c.r[3].w[0] + 200u), c.f[1]);
    st32((c.r[3].w[0] + 200u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 176u));
    c.budget -= 49;
L_004E45CC:
    c.f[0] = ld32((c.r[20].w[0] + 76u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 176u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 184u));
    c.f[0] = ld32((c.r[20].w[0] + 76u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 184u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 160u));
    c.f[0] = ld32((c.r[20].w[0] + 80u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 160u), c.f[0]);
    c.f[1] = ld32((c.r[20].w[0] + 168u));
    c.f[0] = ld32((c.r[20].w[0] + 96u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 16;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[20].w[0] + 168u), c.f[0]);  if (t) { goto L_004E4628; } }
    c.f[2] = ld32((c.r[20].w[0] + 76u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = ld32((c.r[20].w[0] + 152u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 152u), c.f[0]);
    c.budget -= 7;
L_004E4628:
    st32((c.r[20].w[0] + 484u), 0u);
    set32(c.r[3], ld32((c.r[19].w[0] + 412u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 108u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 488u)));  goto L_004E46B4; }
    st32((c.r[29].w[0] + 144u), c.r[4].w[0]);
    set32(c.r[5], c.r[29].w[0] + 148u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E464Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00D9(c, 127u, depth + 1u); else { c.pc = 0x00465630u; return; } if (c.pc != 0x004E464Cu) [[unlikely]] return; }
L_004E464C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_004E46A4; } }
L_004E4658:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4660u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EE(c, 275u, depth + 1u); else { c.pc = 0x004BA5A0u; return; } if (c.pc != 0x004E4660u) [[unlikely]] return; }
L_004E4660:
    set32(c.r[3], c.r[18].w[0] << 2);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    set32(c.r[5], c.r[3].w[0] + c.r[29].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[16].w[0] << 2);
    c.f[12] = c.r[4].w[0];
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 144u)));
    set32(c.r[7], c.r[3].w[0] + 320u);
    set32(c.r[3], 0u + 39u);
    set32(c.r[8], c.r[3].w[0] - c.r[16].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4694u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 165u, depth + 1u); else { c.pc = 0x0046A080u; return; } if (c.pc != 0x004E4694u) [[unlikely]] return; }
L_004E4694:
    set32(c.r[3], ld32((c.r[20].w[0] + 484u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[20].w[0] + 484u), c.r[3].w[0]);
    c.budget -= 4;
L_004E46A4:
    c.r[3].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[16], ld32((c.r[20].w[0] + 484u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004E4658u | kUnwind; return; } goto L_004E4658; }
    set32(c.r[3], ld32((c.r[20].w[0] + 488u)));
    c.budget -= 1;
L_004E46B4:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 484u)));  goto L_004E46CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E46C4u); set32(c.r[4], ld32((c.r[19].w[0] + 172u)));  if (depth < kMaxDepth) unit_00F9(c, 34u, depth + 1u); else { c.pc = 0x004E4870u; return; } if (c.pc != 0x004E46C4u) [[unlikely]] return; }
L_004E46C4:
    st32((c.r[20].w[0] + 488u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 484u)));
    c.budget -= 2;
L_004E46CC:
    set32(c.r[4], ld32((c.r[20].w[0] + 488u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    st32((c.r[3].w[0] + 320u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 484u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 320u)));
    c.budget -= 10;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  goto L_004E4700; }
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[20].w[0] + 484u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 3;
L_004E4700:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_004E4730:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004E47DC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 128u)));  goto L_004E4768; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4764u);  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x004E4764u) [[unlikely]] return; }
L_004E4764:
    set32(c.r[4], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 1;
L_004E4768:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[16].w[0] + 64u);  goto L_004E477C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4778u);  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x004E4778u) [[unlikely]] return; }
L_004E4778:
    set32(c.r[2], c.r[16].w[0] + 64u);
    c.budget -= 1;
L_004E477C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_004E47C8; }
    set32(c.r[17], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004E47C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4798u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004E4798u) [[unlikely]] return; }
L_004E4798:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E47A8u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004E47A8u) [[unlikely]] return; }
L_004E47A8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E47C4; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004E47C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004E47C4u) [[unlikely]] return; }
L_004E47C4:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_004E47C8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_004E47E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E47DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004E47DCu) [[unlikely]] return; }
L_004E47DC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004E47E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004E4800:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 40u), 0u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0] + 64u), 0u);  if (t) { goto L_004E483C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E482Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004E482Cu) [[unlikely]] return; }
L_004E482C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E483Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004E483Cu) [[unlikely]] return; }
L_004E483C:
    st32((c.r[17].w[0] + 124u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 128u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4850u); st32((c.r[17].w[0] + 488u), 0u);  if (depth < kMaxDepth) unit_00F8(c, 237u, depth + 1u); else { c.pc = 0x004E32F0u; return; } if (c.pc != 0x004E4850u) [[unlikely]] return; }
L_004E4850:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004E4870:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 8994u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4890u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00F0(c, 19u, depth + 1u); else { c.pc = 0x004C02A0u; return; } if (c.pc != 0x004E4890u) [[unlikely]] return; }
L_004E4890:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_004E4A2C; }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[25], ld32((c.r[17].w[0])));  goto L_004E48AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004E48F0; } }
L_004E48AC:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004E48B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004E48B8u) [[unlikely]] return; }
L_004E48B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 20928u);  if (t) { goto L_004E48D4; } }
L_004E48C4:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_004E48D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004E48E0; } }
L_004E48D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E48C4u | kUnwind; return; } goto L_004E48C4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004E48E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_004E48F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004E48F0; } }
L_004E48F0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004E4930; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 288u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004E490Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004E490Cu) [[unlikely]] return; }
L_004E490C:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 218u));
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { set32(c.r[3], c.r[2].w[0] << 2);  goto L_004E4924; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004E4930; } }
L_004E4924:
    set32(c.r[2], ld32((c.r[16].w[0] + 212u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_004E4930:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[25], ld32((c.r[17].w[0])));  goto L_004E4940; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004E4984; } }
L_004E4940:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004E494Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004E494Cu) [[unlikely]] return; }
L_004E494C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 1;
L_004E4950:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 23832u);  if (t) { goto L_004E4968; } }
L_004E4958:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_004E4968; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004E4974; } }
L_004E4968:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E4958u | kUnwind; return; } goto L_004E4958; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004E4974:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_004E4984; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004E4984; } }
L_004E4984:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004E4A28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004E4A18; } }
L_004E4994:
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 212u)));  goto L_004E49A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_004E49B4; } }
L_004E49A8:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_004E49B4:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[25], ld32((c.r[18].w[0])));  goto L_004E49C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_004E4A08; } }
L_004E49C4:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004E49D0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004E49D0u) [[unlikely]] return; }
L_004E49D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 19952u);  if (t) { goto L_004E49EC; } }
L_004E49DC:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_004E49EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004E49F8; } }
L_004E49EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E49DCu | kUnwind; return; } goto L_004E49DC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004E49F8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_004E4A08; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004E4A08; } }
L_004E4A08:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_004E4A18; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_004E4A2C; } }
L_004E4A18:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 220u));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[17].w[0] + 218u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004E4994u | kUnwind; return; } goto L_004E4994; }
L_004E4A28:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004E4A2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004E4A50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004E4DA8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 9008u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x004E4000u < 16384u) { entry = entries_00F9[(t - 0x004E4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004E4A84:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4A90u);  if (depth < kMaxDepth) unit_00F9(c, 75u, depth + 1u); else { c.pc = 0x004E4F10u; return; } if (c.pc != 0x004E4A90u) [[unlikely]] return; }
L_004E4A90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[16].w[0] + 144u));  if (t) { goto L_004E4DAC; } }
L_004E4A98:
    c.f[1] = ld32((c.r[16].w[0] + 112u));
    c.f[0] = ld32((c.r[28].w[0] - 32456u));
    c.f[2] = ld32((c.r[16].w[0] + 100u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004E4DA8; } }
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = ld32((c.r[28].w[0] - 32564u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], ld32((c.r[16].w[0] + 88u)));  goto L_004E4B28; }
    c.f[0] = ld32((c.r[16].w[0] + 120u));
    set32(c.r[3], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[2], 0u + 10u);
    set32(c.r[3], ld32((c.r[3].w[0] + 424u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.f[1] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_004E4B14; } }
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004E4B14; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[12] = fp::add(c.f[2], c.f[1]);  goto L_004E4B0C; }
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[12] = fp::add(c.f[2], c.f[1]);
    c.budget -= 3;
L_004E4B0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4B14u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F9(c, 75u, depth + 1u); else { c.pc = 0x004E4F10u; return; } if (c.pc != 0x004E4B14u) [[unlikely]] return; }
L_004E4B14:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4B20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F9(c, 90u, depth + 1u); else { c.pc = 0x004E5130u; return; } if (c.pc != 0x004E4B20u) [[unlikely]] return; }
L_004E4B20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004E4DA8; } }
L_004E4B28:
    c.budget -= 2;
    if (c.r[2].sd[0] <= 0) { c.f[0] = ld32((c.r[16].w[0] + 120u));  goto L_004E4B88; }
    set32(c.r[3], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[2], 0u + 10u);
    set32(c.r[3], ld32((c.r[3].w[0] + 424u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.f[1] = ld32((c.r[16].w[0] + 120u));  if (t) { goto L_004E4B78; } }
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 88u)));  goto L_004E4B7C; }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[12] = fp::add(c.f[2], c.f[1]);  goto L_004E4B70; }
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[12] = fp::add(c.f[2], c.f[1]);
    c.budget -= 3;
L_004E4B70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4B78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F9(c, 75u, depth + 1u); else { c.pc = 0x004E4F10u; return; } if (c.pc != 0x004E4B78u) [[unlikely]] return; }
L_004E4B78:
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 1;
L_004E4B7C:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[2].w[0]);  if (t) { goto L_004E4DA8; } }
L_004E4B88:
    set32(c.r[3], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[2], 0u + 10u);
    set32(c.r[3], ld32((c.r[3].w[0] + 424u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.f[1] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_004E4BD0; } }
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004E4BD0; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[12] = fp::add(c.f[2], c.f[1]);  goto L_004E4BC8; }
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[12] = fp::add(c.f[2], c.f[1]);
    c.budget -= 3;
L_004E4BC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4BD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F9(c, 75u, depth + 1u); else { c.pc = 0x004E4F10u; return; } if (c.pc != 0x004E4BD0u) [[unlikely]] return; }
L_004E4BD0:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4BDCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F9(c, 90u, depth + 1u); else { c.pc = 0x004E5130u; return; } if (c.pc != 0x004E4BDCu) [[unlikely]] return; }
L_004E4BDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004E4DA8; } }
L_004E4BE4:
    set32(c.r[3], ld32((c.r[16].w[0] + 148u)));
    c.f[0] = ld32((c.r[16].w[0] + 132u));
    set32(c.r[2], 0u + 10u);
    set32(c.r[3], ld32((c.r[3].w[0] + 424u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.f[1] = c.f[0] ^ fp::kSign;  if (t) { goto L_004E4DA8; } }
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004E4DA8; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[16].w[0] + 100u));  goto L_004E4C28; }
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 100u));
    c.budget -= 3;
L_004E4C28:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4C34u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00F9(c, 75u, depth + 1u); else { c.pc = 0x004E4F10u; return; } if (c.pc != 0x004E4C34u) [[unlikely]] return; }
L_004E4C34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004E4DA8; } }
L_004E4C3C:
    c.f[0] = ld32((c.r[16].w[0] + 140u));
    set32(c.r[3], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[2], 0u + 10u);
    c.f[0] = c.f[0] ^ fp::kSign;
    set32(c.r[3], ld32((c.r[3].w[0] + 424u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.f[1] = fp::mul(c.f[0], c.f[12]);  if (t) { goto L_004E4DA8; } }
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004E4DA8; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[16].w[0] + 100u));  goto L_004E4C84; }
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 100u));
    c.budget -= 3;
L_004E4C84:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4C90u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_00F9(c, 75u, depth + 1u); else { c.pc = 0x004E4F10u; return; } if (c.pc != 0x004E4C90u) [[unlikely]] return; }
L_004E4C90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004E4DA8; } }
L_004E4C98:
    c.f[12] = ld32((c.r[16].w[0] + 56u));
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[12] = ld32((c.r[16].w[0] + 108u));  goto L_004E4CB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4CB4u);  if (depth < kMaxDepth) unit_00F9(c, 90u, depth + 1u); else { c.pc = 0x004E5130u; return; } if (c.pc != 0x004E4CB4u) [[unlikely]] return; }
L_004E4CB4:
    c.f[12] = ld32((c.r[16].w[0] + 108u));
    c.budget -= 1;
L_004E4CB8:
    c.f[0] = ld32((c.r[16].w[0] + 100u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004E4DA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4CD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F9(c, 75u, depth + 1u); else { c.pc = 0x004E4F10u; return; } if (c.pc != 0x004E4CD0u) [[unlikely]] return; }
L_004E4CD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004E4DA8; } }
L_004E4CD8:
    set32(c.r[3], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[3].w[0] + 424u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_004E4DD4; }
    c.f[0] = ld32((c.r[16].w[0] + 136u));
    c.f[0] = fp::mul(c.f[12], c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4CFCu); c.f[12] = c.f[0] ^ fp::kSign;  if (depth < kMaxDepth) unit_00F9(c, 71u, depth + 1u); else { c.pc = 0x004E4E50u; return; } if (c.pc != 0x004E4CFCu) [[unlikely]] return; }
L_004E4CFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004E4DA8; } }
L_004E4D04:
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_004E4DD4; }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[2].w[0]);  if (t) { goto L_004E4DA8; } }
L_004E4D1C:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_004E4DD4; }
    set32(c.r[2], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[2].w[0]);  if (t) { goto L_004E4DA8; } }
L_004E4D3C:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_004E4DD4; }
    set32(c.r[2], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), c.r[2].w[0]);  if (t) { goto L_004E4DA8; } }
L_004E4D5C:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    st32((c.r[16].w[0] + 100u), c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 97u), static_cast<std::uint8_t>(0u));  if (t) { goto L_004E4DA8; } }
L_004E4D6C:
    c.f[0] = 0u;
    c.f[0] = fp::sub(c.f[12], c.f[0]);
    c.f[1] = c.f[0] & fp::kAbs;
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[16].w[0] + 100u), c.f[12]);  goto L_004E4D94; }
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    st32((c.r[16].w[0] + 100u), c.f[0]);
    c.budget -= 2;
L_004E4D94:
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    st32((c.r[16].w[0] + 48u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 97u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_004E4DA8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 144u));
    c.budget -= 1;
L_004E4DAC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_004E4DD4; }
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 76u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 8;
L_004E4DD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004E4DF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 10u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 148u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 424u)));
    c.budget -= 7;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_004E4E44; }
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_004E4E40; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[4].w[0] + 100u));  goto L_004E4E38; }
    c.f[0] = ld32((c.r[4].w[0] + 128u));
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 100u));
    c.budget -= 3;
L_004E4E38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4E40u); c.f[12] = fp::add(c.f[0], c.f[12]);  if (depth < kMaxDepth) unit_00F9(c, 75u, depth + 1u); else { c.pc = 0x004E4F10u; return; } if (c.pc != 0x004E4E40u) [[unlikely]] return; }
L_004E4E40:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004E4E44:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004E4E50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[4].w[0] + 48u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4E6Cu); c.f[12] = fp::add(c.f[0], c.f[12]);  if (depth < kMaxDepth) unit_00F9(c, 90u, depth + 1u); else { c.pc = 0x004E5130u; return; } if (c.pc != 0x004E4E6Cu) [[unlikely]] return; }
L_004E4E6C:
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_004E4EFC; }
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    c.f[0] = ld32((c.r[16].w[0] + 76u));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004E4EF8; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4EBCu); st32((c.r[16].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00F9(c, 90u, depth + 1u); else { c.pc = 0x004E5130u; return; } if (c.pc != 0x004E4EBCu) [[unlikely]] return; }
L_004E4EBC:
    set32(c.r[5], 0u + 1u);
    st8((c.r[16].w[0] + 96u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1200u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004E4EF8; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 424u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004E4EF8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4EF8u); set32(c.r[4], c.r[4].w[0] + 9056u);  if (depth < kMaxDepth) unit_00D5(c, 24u, depth + 1u); else { c.pc = 0x00454290u; return; } if (c.pc != 0x004E4EF8u) [[unlikely]] return; }
L_004E4EF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004E4EFC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004E4F10:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 148u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1200u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_004E5004; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[17], ld32((c.r[28].w[0] - 27036u)));
    set32(c.r[2], c.r[2].w[0] + 9071u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4F54u); st32((c.r[29].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 160u, depth + 1u); else { c.pc = 0x003C5A20u; return; } if (c.pc != 0x004E4F54u) [[unlikely]] return; }
L_004E4F54:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 104u);  goto L_004E4F68; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_004E4F90; } }
L_004E4F68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4F70u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_00B1(c, 159u, depth + 1u); else { c.pc = 0x003C5A10u; return; } if (c.pc != 0x004E4F70u) [[unlikely]] return; }
L_004E4F70:
    set32(c.r[5], c.r[17].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 100u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4F80u); set32(c.r[6], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_00B1(c, 153u, depth + 1u); else { c.pc = 0x003C5910u; return; } if (c.pc != 0x004E4F80u) [[unlikely]] return; }
L_004E4F80:
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4F8Cu); set32(c.r[5], c.r[29].w[0] + 100u);  if (depth < kMaxDepth) unit_00B1(c, 152u, depth + 1u); else { c.pc = 0x003C58F0u; return; } if (c.pc != 0x004E4F8Cu) [[unlikely]] return; }
L_004E4F8C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E4F90:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.f[0] = ld32((c.r[16].w[0] + 112u));  goto L_004E4FFC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[17], ld32((c.r[28].w[0] - 27036u)));
    set32(c.r[2], c.r[2].w[0] + 9090u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4FB0u); st32((c.r[29].w[0] + 96u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 160u, depth + 1u); else { c.pc = 0x003C5A20u; return; } if (c.pc != 0x004E4FB0u) [[unlikely]] return; }
L_004E4FB0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 92u);  goto L_004E4FC4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_004E4FEC; } }
L_004E4FC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4FCCu); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_00B1(c, 159u, depth + 1u); else { c.pc = 0x003C5A10u; return; } if (c.pc != 0x004E4FCCu) [[unlikely]] return; }
L_004E4FCC:
    set32(c.r[5], c.r[17].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 88u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4FDCu); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_00B1(c, 153u, depth + 1u); else { c.pc = 0x003C5910u; return; } if (c.pc != 0x004E4FDCu) [[unlikely]] return; }
L_004E4FDC:
    set32(c.r[4], c.r[29].w[0] + 92u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E4FE8u); set32(c.r[5], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_00B1(c, 152u, depth + 1u); else { c.pc = 0x003C58F0u; return; } if (c.pc != 0x004E4FE8u) [[unlikely]] return; }
L_004E4FE8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E4FEC:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.f[0] = ld32((c.r[28].w[0] - 32260u));  goto L_004E5008; }
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    c.budget -= 1;
L_004E4FFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 100u), c.f[0]);  if (t) { goto L_004E5118; } }
L_004E5004:
    c.f[0] = ld32((c.r[28].w[0] - 32260u));
    c.budget -= 1;
L_004E5008:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = ld32((c.r[28].w[0] - 32260u));  goto L_004E5020; }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 97u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[28].w[0] - 32260u));
    c.budget -= 3;
L_004E5020:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[16].w[0] + 100u), c.f[20]);  goto L_004E5034; }
    st8((c.r[16].w[0] + 97u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 100u), c.f[20]);
    c.budget -= 2;
L_004E5034:
    c.f[3] = ld32((c.r[16].w[0] + 112u));
    c.f[2] = ld32((c.r[16].w[0] + 100u));
    c.f[0] = ld32((c.r[28].w[0] - 29444u));
    fpu_div(c, 1u, c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004E5078; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 148u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[2].w[0] + 1136u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5070u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00EE(c, 100u, depth + 1u); else { c.pc = 0x004B8DB0u; return; } if (c.pc != 0x004E5070u) [[unlikely]] return; }
L_004E5070:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 100u), 0u);  if (t) { goto L_004E5118; } }
L_004E5078:
    c.f[0] = 0u;
    c.f[0] = fp::max(c.f[2], c.f[0]);
    st32((c.r[16].w[0] + 100u), c.f[0]);
    c.f[1] = fp::min(c.f[0], c.f[3]);
    c.f[0] = ld32((c.r[28].w[0] - 32340u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 100u), c.f[1]);  if (t) { goto L_004E50D0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], ld32((c.r[4].w[0] + 424u)));
    c.budget -= 5;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_004E50C0; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_004E511C; }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004E50C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E50C8u);  if (depth < kMaxDepth) unit_00EE(c, 100u, depth + 1u); else { c.pc = 0x004B8DB0u; return; } if (c.pc != 0x004E50C8u) [[unlikely]] return; }
L_004E50C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004E5118; } }
L_004E50D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 148u)));
    set32(c.r[3], 0u + 4u);
    set32(c.r[5], ld32((c.r[4].w[0] + 424u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_004E5118; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E50ECu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00EE(c, 171u, depth + 1u); else { c.pc = 0x004B9630u; return; } if (c.pc != 0x004E50ECu) [[unlikely]] return; }
L_004E50EC:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E50F8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_00CD(c, 189u, depth + 1u); else { c.pc = 0x00435290u; return; } if (c.pc != 0x004E50F8u) [[unlikely]] return; }
L_004E50F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5100u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_00CD(c, 194u, depth + 1u); else { c.pc = 0x00435310u; return; } if (c.pc != 0x004E5100u) [[unlikely]] return; }
L_004E5100:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 68u);
    set32(c.r[2], c.r[2].w[0] + 24664u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5118u); st32((c.r[29].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004E5118u) [[unlikely]] return; }
L_004E5118:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_004E511C:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004E5130:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 148u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1200u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_004E51BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[17], ld32((c.r[28].w[0] - 27036u)));
    set32(c.r[2], c.r[2].w[0] + 9108u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5174u); st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 160u, depth + 1u); else { c.pc = 0x003C5A20u; return; } if (c.pc != 0x004E5174u) [[unlikely]] return; }
L_004E5174:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 72u);  goto L_004E5188; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_004E51B0; } }
L_004E5188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5190u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_00B1(c, 159u, depth + 1u); else { c.pc = 0x003C5A10u; return; } if (c.pc != 0x004E5190u) [[unlikely]] return; }
L_004E5190:
    set32(c.r[5], c.r[17].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 68u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E51A0u); set32(c.r[6], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_00B1(c, 153u, depth + 1u); else { c.pc = 0x003C5910u; return; } if (c.pc != 0x004E51A0u) [[unlikely]] return; }
L_004E51A0:
    set32(c.r[4], c.r[29].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E51ACu); set32(c.r[5], c.r[29].w[0] + 68u);  if (depth < kMaxDepth) unit_00B1(c, 152u, depth + 1u); else { c.pc = 0x003C58F0u; return; } if (c.pc != 0x004E51ACu) [[unlikely]] return; }
L_004E51AC:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E51B0:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_004E51E4; }
L_004E51BC:
    st32((c.r[16].w[0] + 48u), c.f[20]);
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    c.f[2] = ld32((c.r[16].w[0] + 60u));
    c.f[1] = 0u;
    c.f[0] = fp::max(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.f[0] = fp::min(c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 10;
L_004E51E4:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004E5200:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 96u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_004E5210:
    set32(c.r[29], c.r[29].w[0] - 752u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] + 9129u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5238u); set32(c.r[4], c.r[29].w[0] + 624u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004E5238u) [[unlikely]] return; }
L_004E5238:
    set32(c.r[4], c.r[29].w[0] + 624u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5244u); set32(c.r[5], c.r[29].w[0] + 748u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004E5244u) [[unlikely]] return; }
L_004E5244:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 748u));  goto L_004E526C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 650u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004E5268; } }
    c.f[12] = ld32((c.r[29].w[0] + 748u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5268u); set32(c.r[4], c.r[29].w[0] + 624u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004E5268u) [[unlikely]] return; }
L_004E5268:
    c.f[0] = ld32((c.r[29].w[0] + 748u));
    c.budget -= 1;
L_004E526C:
    set32(c.r[4], c.r[29].w[0] + 624u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E527Cu); st32((c.r[17].w[0] + 52u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004E527Cu) [[unlikely]] return; }
L_004E527C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 592u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5290u); set32(c.r[6], c.r[6].w[0] + 9150u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004E5290u) [[unlikely]] return; }
L_004E5290:
    set32(c.r[4], c.r[29].w[0] + 592u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E529Cu); set32(c.r[5], c.r[29].w[0] + 744u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004E529Cu) [[unlikely]] return; }
L_004E529C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 744u));  goto L_004E52C4; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 618u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004E52C0; } }
    c.f[12] = ld32((c.r[29].w[0] + 744u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E52C0u); set32(c.r[4], c.r[29].w[0] + 592u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004E52C0u) [[unlikely]] return; }
L_004E52C0:
    c.f[0] = ld32((c.r[29].w[0] + 744u));
    c.budget -= 1;
L_004E52C4:
    set32(c.r[4], c.r[29].w[0] + 592u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E52D4u); st32((c.r[17].w[0] + 60u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004E52D4u) [[unlikely]] return; }
L_004E52D4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 560u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E52E8u); set32(c.r[6], c.r[6].w[0] + 9169u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004E52E8u) [[unlikely]] return; }
L_004E52E8:
    set32(c.r[4], c.r[29].w[0] + 560u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E52F4u); set32(c.r[5], c.r[29].w[0] + 740u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004E52F4u) [[unlikely]] return; }
L_004E52F4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 740u));  goto L_004E531C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 586u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004E5318; } }
    c.f[12] = ld32((c.r[29].w[0] + 740u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5318u); set32(c.r[4], c.r[29].w[0] + 560u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004E5318u) [[unlikely]] return; }
L_004E5318:
    c.f[0] = ld32((c.r[29].w[0] + 740u));
    c.budget -= 1;
L_004E531C:
    set32(c.r[4], c.r[29].w[0] + 560u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E532Cu); st32((c.r[17].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004E532Cu) [[unlikely]] return; }
L_004E532C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 528u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5340u); set32(c.r[6], c.r[6].w[0] + 9192u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004E5340u) [[unlikely]] return; }
L_004E5340:
    set32(c.r[4], c.r[29].w[0] + 528u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E534Cu); set32(c.r[5], c.r[29].w[0] + 736u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004E534Cu) [[unlikely]] return; }
L_004E534C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 736u));  goto L_004E5374; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 554u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004E5370; } }
    c.f[12] = ld32((c.r[29].w[0] + 736u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5370u); set32(c.r[4], c.r[29].w[0] + 528u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004E5370u) [[unlikely]] return; }
L_004E5370:
    c.f[0] = ld32((c.r[29].w[0] + 736u));
    c.budget -= 1;
L_004E5374:
    set32(c.r[4], c.r[29].w[0] + 528u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5384u); st32((c.r[17].w[0] + 128u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004E5384u) [[unlikely]] return; }
L_004E5384:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 496u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5398u); set32(c.r[6], c.r[6].w[0] + 9217u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004E5398u) [[unlikely]] return; }
L_004E5398:
    set32(c.r[4], c.r[29].w[0] + 496u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E53A4u); set32(c.r[5], c.r[29].w[0] + 732u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004E53A4u) [[unlikely]] return; }
L_004E53A4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 732u));  goto L_004E53CC; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 522u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004E53C8; } }
    c.f[12] = ld32((c.r[29].w[0] + 732u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E53C8u); set32(c.r[4], c.r[29].w[0] + 496u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004E53C8u) [[unlikely]] return; }
L_004E53C8:
    c.f[0] = ld32((c.r[29].w[0] + 732u));
    c.budget -= 1;
L_004E53CC:
    set32(c.r[4], c.r[29].w[0] + 496u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E53DCu); st32((c.r[17].w[0] + 64u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004E53DCu) [[unlikely]] return; }
L_004E53DC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E53F0u); set32(c.r[6], c.r[6].w[0] + 9242u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004E53F0u) [[unlikely]] return; }
L_004E53F0:
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E53FCu); set32(c.r[5], c.r[29].w[0] + 728u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004E53FCu) [[unlikely]] return; }
L_004E53FC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 728u));  goto L_004E5424; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 490u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004E5420; } }
    c.f[12] = ld32((c.r[29].w[0] + 728u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5420u); set32(c.r[4], c.r[29].w[0] + 464u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004E5420u) [[unlikely]] return; }
L_004E5420:
    c.f[0] = ld32((c.r[29].w[0] + 728u));
    c.budget -= 1;
L_004E5424:
    set32(c.r[4], c.r[29].w[0] + 464u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5434u); st32((c.r[17].w[0] + 68u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004E5434u) [[unlikely]] return; }
L_004E5434:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5448u); set32(c.r[6], c.r[6].w[0] + 9273u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004E5448u) [[unlikely]] return; }
L_004E5448:
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5454u); set32(c.r[5], c.r[29].w[0] + 724u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004E5454u) [[unlikely]] return; }
L_004E5454:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 724u));  goto L_004E547C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 458u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004E5478; } }
    c.f[12] = ld32((c.r[29].w[0] + 724u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5478u); set32(c.r[4], c.r[29].w[0] + 432u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004E5478u) [[unlikely]] return; }
L_004E5478:
    c.f[0] = ld32((c.r[29].w[0] + 724u));
    c.budget -= 1;
L_004E547C:
    set32(c.r[4], c.r[29].w[0] + 432u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E548Cu); st32((c.r[17].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004E548Cu) [[unlikely]] return; }
L_004E548C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E54A0u); set32(c.r[6], c.r[6].w[0] + 9291u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004E54A0u) [[unlikely]] return; }
L_004E54A0:
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E54ACu); set32(c.r[5], c.r[29].w[0] + 720u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004E54ACu) [[unlikely]] return; }
L_004E54AC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 720u));  goto L_004E54D4; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 426u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004E54D0; } }
    c.f[12] = ld32((c.r[29].w[0] + 720u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E54D0u); set32(c.r[4], c.r[29].w[0] + 400u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004E54D0u) [[unlikely]] return; }
L_004E54D0:
    c.f[0] = ld32((c.r[29].w[0] + 720u));
    c.budget -= 1;
L_004E54D4:
    set32(c.r[4], c.r[29].w[0] + 400u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E54E4u); st32((c.r[17].w[0] + 76u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004E54E4u) [[unlikely]] return; }
L_004E54E4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E54F8u); set32(c.r[6], c.r[6].w[0] + 9311u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004E54F8u) [[unlikely]] return; }
L_004E54F8:
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5504u); set32(c.r[5], c.r[29].w[0] + 716u);  if (depth < kMaxDepth) unit_0004(c, 241u, depth + 1u); else { c.pc = 0x00112E00u; return; } if (c.pc != 0x004E5504u) [[unlikely]] return; }
L_004E5504:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 716u)));  goto L_004E552C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 394u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004E5528; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 716u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5528u); set32(c.r[4], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_0004(c, 239u, depth + 1u); else { c.pc = 0x00112DA0u; return; } if (c.pc != 0x004E5528u) [[unlikely]] return; }
L_004E5528:
    set32(c.r[2], ld32((c.r[29].w[0] + 716u)));
    c.budget -= 1;
L_004E552C:
    set32(c.r[4], c.r[29].w[0] + 368u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E553Cu); st32((c.r[17].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004E553Cu) [[unlikely]] return; }
L_004E553C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5550u); set32(c.r[6], c.r[6].w[0] + 9340u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004E5550u) [[unlikely]] return; }
L_004E5550:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E555Cu); set32(c.r[5], c.r[29].w[0] + 712u);  if (depth < kMaxDepth) unit_0004(c, 241u, depth + 1u); else { c.pc = 0x00112E00u; return; } if (c.pc != 0x004E555Cu) [[unlikely]] return; }
L_004E555C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 712u)));  goto L_004E5584; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 362u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004E5580; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 712u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5580u); set32(c.r[4], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0004(c, 239u, depth + 1u); else { c.pc = 0x00112DA0u; return; } if (c.pc != 0x004E5580u) [[unlikely]] return; }
L_004E5580:
    set32(c.r[2], ld32((c.r[29].w[0] + 712u)));
    c.budget -= 1;
L_004E5584:
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5594u); st32((c.r[17].w[0] + 80u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004E5594u) [[unlikely]] return; }
L_004E5594:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E55A8u); set32(c.r[6], c.r[6].w[0] + 9371u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004E55A8u) [[unlikely]] return; }
L_004E55A8:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E55B4u); set32(c.r[5], c.r[29].w[0] + 708u);  if (depth < kMaxDepth) unit_0004(c, 241u, depth + 1u); else { c.pc = 0x00112E00u; return; } if (c.pc != 0x004E55B4u) [[unlikely]] return; }
L_004E55B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 708u)));  goto L_004E55DC; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 330u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004E55D8; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 708u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E55D8u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0004(c, 239u, depth + 1u); else { c.pc = 0x00112DA0u; return; } if (c.pc != 0x004E55D8u) [[unlikely]] return; }
L_004E55D8:
    set32(c.r[2], ld32((c.r[29].w[0] + 708u)));
    c.budget -= 1;
L_004E55DC:
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E55ECu); st32((c.r[17].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004E55ECu) [[unlikely]] return; }
L_004E55EC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5600u); set32(c.r[6], c.r[6].w[0] + 9399u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004E5600u) [[unlikely]] return; }
L_004E5600:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E560Cu); set32(c.r[5], c.r[29].w[0] + 704u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004E560Cu) [[unlikely]] return; }
L_004E560C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 704u));  goto L_004E5634; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 298u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004E5630; } }
    c.f[12] = ld32((c.r[29].w[0] + 704u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5630u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004E5630u) [[unlikely]] return; }
L_004E5630:
    c.f[0] = ld32((c.r[29].w[0] + 704u));
    c.budget -= 1;
L_004E5634:
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5644u); st32((c.r[17].w[0] + 104u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004E5644u) [[unlikely]] return; }
L_004E5644:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5658u); set32(c.r[6], c.r[6].w[0] + 9421u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004E5658u) [[unlikely]] return; }
L_004E5658:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5664u); set32(c.r[5], c.r[29].w[0] + 700u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004E5664u) [[unlikely]] return; }
L_004E5664:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 700u));  goto L_004E568C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 266u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004E5688; } }
    c.f[12] = ld32((c.r[29].w[0] + 700u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5688u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004E5688u) [[unlikely]] return; }
L_004E5688:
    c.f[0] = ld32((c.r[29].w[0] + 700u));
    c.budget -= 1;
L_004E568C:
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E569Cu); st32((c.r[17].w[0] + 112u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004E569Cu) [[unlikely]] return; }
L_004E569C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E56B0u); set32(c.r[6], c.r[6].w[0] + 9441u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004E56B0u) [[unlikely]] return; }
L_004E56B0:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E56BCu); set32(c.r[5], c.r[29].w[0] + 696u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004E56BCu) [[unlikely]] return; }
L_004E56BC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 696u));  goto L_004E56E4; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 234u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004E56E0; } }
    c.f[12] = ld32((c.r[29].w[0] + 696u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E56E0u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004E56E0u) [[unlikely]] return; }
L_004E56E0:
    c.f[0] = ld32((c.r[29].w[0] + 696u));
    c.budget -= 1;
L_004E56E4:
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E56F4u); st32((c.r[17].w[0] + 116u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004E56F4u) [[unlikely]] return; }
L_004E56F4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5708u); set32(c.r[6], c.r[6].w[0] + 9460u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004E5708u) [[unlikely]] return; }
L_004E5708:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5714u); set32(c.r[5], c.r[29].w[0] + 692u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004E5714u) [[unlikely]] return; }
L_004E5714:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 692u));  goto L_004E573C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 202u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004E5738; } }
    c.f[12] = ld32((c.r[29].w[0] + 692u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5738u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004E5738u) [[unlikely]] return; }
L_004E5738:
    c.f[0] = ld32((c.r[29].w[0] + 692u));
    c.budget -= 1;
L_004E573C:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E574Cu); st32((c.r[17].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004E574Cu) [[unlikely]] return; }
L_004E574C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5760u); set32(c.r[6], c.r[6].w[0] + 9484u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004E5760u) [[unlikely]] return; }
L_004E5760:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E576Cu); set32(c.r[5], c.r[29].w[0] + 688u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004E576Cu) [[unlikely]] return; }
L_004E576C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 688u));  goto L_004E5794; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 170u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004E5790; } }
    c.f[12] = ld32((c.r[29].w[0] + 688u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5790u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004E5790u) [[unlikely]] return; }
L_004E5790:
    c.f[0] = ld32((c.r[29].w[0] + 688u));
    c.budget -= 1;
L_004E5794:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E57A4u); st32((c.r[17].w[0] + 120u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004E57A4u) [[unlikely]] return; }
L_004E57A4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E57B8u); set32(c.r[6], c.r[6].w[0] + 9510u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004E57B8u) [[unlikely]] return; }
L_004E57B8:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E57C4u); set32(c.r[5], c.r[29].w[0] + 684u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004E57C4u) [[unlikely]] return; }
L_004E57C4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 684u));  goto L_004E57EC; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004E57E8; } }
    c.f[12] = ld32((c.r[29].w[0] + 684u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E57E8u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004E57E8u) [[unlikely]] return; }
L_004E57E8:
    c.f[0] = ld32((c.r[29].w[0] + 684u));
    c.budget -= 1;
L_004E57EC:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E57FCu); st32((c.r[17].w[0] + 132u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004E57FCu) [[unlikely]] return; }
L_004E57FC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5810u); set32(c.r[6], c.r[6].w[0] + 9535u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004E5810u) [[unlikely]] return; }
L_004E5810:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E581Cu); set32(c.r[5], c.r[29].w[0] + 680u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004E581Cu) [[unlikely]] return; }
L_004E581C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 680u));  goto L_004E5844; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 106u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004E5840; } }
    c.f[12] = ld32((c.r[29].w[0] + 680u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5840u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004E5840u) [[unlikely]] return; }
L_004E5840:
    c.f[0] = ld32((c.r[29].w[0] + 680u));
    c.budget -= 1;
L_004E5844:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5854u); st32((c.r[17].w[0] + 136u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004E5854u) [[unlikely]] return; }
L_004E5854:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5868u); set32(c.r[6], c.r[6].w[0] + 9564u);  if (depth < kMaxDepth) unit_00C6(c, 159u, depth + 1u); else { c.pc = 0x004193F0u; return; } if (c.pc != 0x004E5868u) [[unlikely]] return; }
L_004E5868:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5874u); set32(c.r[5], c.r[29].w[0] + 676u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004E5874u) [[unlikely]] return; }
L_004E5874:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[29].w[0] + 676u));  goto L_004E589C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 74u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004E5898; } }
    c.f[12] = ld32((c.r[29].w[0] + 676u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5898u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004E5898u) [[unlikely]] return; }
L_004E5898:
    c.f[0] = ld32((c.r[29].w[0] + 676u));
    c.budget -= 1;
L_004E589C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E58ACu); st32((c.r[17].w[0] + 140u), c.f[0]);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004E58ACu) [[unlikely]] return; }
L_004E58AC:
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    st32((c.r[17].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    st32((c.r[17].w[0] + 48u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 92u)));
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 148u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 12;
    if (c.r[2].d[0] == 0ull) { st8((c.r[17].w[0] + 96u), static_cast<std::uint8_t>(0u));  goto L_004E595C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[16], ld32((c.r[28].w[0] - 27036u)));
    set32(c.r[2], c.r[2].w[0] + 9108u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E58F0u); st32((c.r[29].w[0] + 672u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 160u, depth + 1u); else { c.pc = 0x003C5A20u; return; } if (c.pc != 0x004E58F0u) [[unlikely]] return; }
L_004E58F0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 668u);  goto L_004E5904; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004E5928; } }
L_004E5904:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E590Cu); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_00B1(c, 159u, depth + 1u); else { c.pc = 0x003C5A10u; return; } if (c.pc != 0x004E590Cu) [[unlikely]] return; }
L_004E590C:
    set32(c.r[5], c.r[16].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 664u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E591Cu); set32(c.r[6], c.r[29].w[0] + 672u);  if (depth < kMaxDepth) unit_00B1(c, 153u, depth + 1u); else { c.pc = 0x003C5910u; return; } if (c.pc != 0x004E591Cu) [[unlikely]] return; }
L_004E591C:
    set32(c.r[4], c.r[29].w[0] + 668u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5928u); set32(c.r[5], c.r[29].w[0] + 664u);  if (depth < kMaxDepth) unit_00B1(c, 152u, depth + 1u); else { c.pc = 0x003C58F0u; return; } if (c.pc != 0x004E5928u) [[unlikely]] return; }
L_004E5928:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E5958; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 144u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 60u));
    st32((c.r[17].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 76u));
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[0]);
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 9;
L_004E5958:
    st8((c.r[17].w[0] + 96u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_004E595C:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 11u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5970u); st8((c.r[17].w[0] + 97u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00F9(c, 45u, depth + 1u); else { c.pc = 0x004E4A50u; return; } if (c.pc != 0x004E5970u) [[unlikely]] return; }
L_004E5970:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 752u);  c.pc = t; return; }
L_004E5990:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004E59FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 23776u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 25112u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E59C4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 187u, depth + 1u); else { c.pc = 0x0040D4D0u; return; } if (c.pc != 0x004E59C4u) [[unlikely]] return; }
L_004E59C4:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_004E59E8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 27824u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E59E4u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C3(c, 34u, depth + 1u); else { c.pc = 0x0040C3D0u; return; } if (c.pc != 0x004E59E4u) [[unlikely]] return; }
L_004E59E4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_004E59E8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004E5A00; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E59FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004E59FCu) [[unlikely]] return; }
L_004E59FC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004E5A00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004E5A20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5A48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 84u, depth + 1u); else { c.pc = 0x0040C9F0u; return; } if (c.pc != 0x004E5A48u) [[unlikely]] return; }
L_004E5A48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 27824u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5A64u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00C3(c, 99u, depth + 1u); else { c.pc = 0x0040CBA0u; return; } if (c.pc != 0x004E5A64u) [[unlikely]] return; }
L_004E5A64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 23776u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0] + 148u), c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 25112u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5A80u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 195u, depth + 1u); else { c.pc = 0x0040D5B0u; return; } if (c.pc != 0x004E5A80u) [[unlikely]] return; }
L_004E5A80:
    st32((c.r[18].w[0] + 152u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 124u), 0u);
    st8((c.r[18].w[0] + 144u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004E5AB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004E5AE4; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 424u)));
    set32(c.r[2], 0u + 11u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[28].w[0] - 26060u)));  goto L_004E5AE8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004E5C08; } }
L_004E5AE4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26060u)));
    c.budget -= 1;
L_004E5AE8:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[16], ld32((c.r[3].w[0] + 152u)));  if (t) { goto L_004E5B84; } }
    c.f[2] = ld32((c.r[17].w[0] + 16u));
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[17].w[0] + 20u), c.f[2]);  goto L_004E5B20; }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004E5B84; } }
    st32((c.r[17].w[0] + 20u), c.f[2]);
    c.budget -= 1;
L_004E5B20:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    st32((c.r[17].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E5B84; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[4], c.r[3].w[0] + 48u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26064u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], ld32((c.r[28].w[0] - 26060u)));  if (t) { goto L_004E5B60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[4].w[0] + 8u)));  if (t) { goto L_004E5B64; } }
L_004E5B60:
    set32(c.r[5], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_004E5B64:
    c.f[12] = ld32((c.r[17].w[0] + 20u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5B70u); set32(c.r[4], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_00BF(c, 461u, depth + 1u); else { c.pc = 0x003FF5F0u; return; } if (c.pc != 0x004E5B70u) [[unlikely]] return; }
L_004E5B70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st8((c.r[17].w[0] + 41u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] + 9680u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5B84u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00D5(c, 24u, depth + 1u); else { c.pc = 0x00454290u; return; } if (c.pc != 0x004E5B84u) [[unlikely]] return; }
L_004E5B84:
    c.budget -= 2;
    if (c.r[16].sd[0] <= 0) { set32(c.r[2], ld32((c.r[17].w[0] + 32u)));  goto L_004E5BD8; }
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] - 1u);  goto L_004E5BA4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004E5C08; } }
L_004E5BA4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004E5BD4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E5BD4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5BD4u); set32(c.r[4], c.r[4].w[0] + 9695u);  if (depth < kMaxDepth) unit_00D5(c, 24u, depth + 1u); else { c.pc = 0x00454290u; return; } if (c.pc != 0x004E5BD4u) [[unlikely]] return; }
L_004E5BD4:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 1;
L_004E5BD8:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    st32((c.r[17].w[0] + 24u), c.f[0]);
    st32((c.r[17].w[0] + 44u), 0u);
    st32((c.r[17].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 9;
    if (c.r[2].d[0] != c.r[16].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_004E5C08; }
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 43u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_004E5C08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004E5C20:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1200u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.r[5].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_004E5CA8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 26060u)));  if (t) { goto L_004E5C74; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 121u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[4].w[0] + 41u));  goto L_004E5C78; }
    c.f[0] = ld32((c.r[4].w[0] + 28u));
    c.f[0] = fp::add(c.f[0], c.f[12]);
    st32((c.r[4].w[0] + 28u), c.f[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_004E5C74; } }
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    c.f[0] = fp::add(c.f[0], c.f[12]);
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.budget -= 3;
L_004E5C74:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 41u));
    c.budget -= 1;
L_004E5C78:
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 41u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 43u));
    st8((c.r[4].w[0] + 42u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 43u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    c.f[1] = ld32((c.r[3].w[0] + 1172u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004E5CA8; } }
    st32((c.r[4].w[0] + 44u), c.f[1]);
    c.budget -= 1;
L_004E5CA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004E5CB0:
    st32((c.r[4].w[0] + 16u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    c.r[7].d[0] = 0ull & 1ull;
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[8], 0u - 1u);
    st32((c.r[4].w[0] + 32u), 0u);
    set32(c.r[6], 0u - 2u);
    st32((c.r[4].w[0] + 36u), c.r[8].w[0]);
    set32(c.r[3], 0u - 3u);
    st32((c.r[4].w[0] + 28u), 0u);
    set32(c.r[5], c.r[7].w[0] << 1);
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 41u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 42u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 43u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 52u), c.r[8].w[0]);
    c.r[8].d[0] = ld8((c.r[4].w[0] + 4u));
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[7].d[0];
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 4u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 48u), 0u);
    c.budget -= 29;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 60u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_004E5D30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 28648u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5D58u); st32((c.r[4].w[0] + 12u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_00F9(c, 191u, depth + 1u); else { c.pc = 0x004E5CB0u; return; } if (c.pc != 0x004E5D58u) [[unlikely]] return; }
L_004E5D58:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004E5D70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 23712u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5D9Cu); set32(c.r[4], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004E5D9Cu) [[unlikely]] return; }
L_004E5D9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5DA4u); set32(c.r[4], c.r[17].w[0] + 20u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004E5DA4u) [[unlikely]] return; }
L_004E5DA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5DACu); set32(c.r[4], c.r[17].w[0] + 36u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004E5DACu) [[unlikely]] return; }
L_004E5DAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5DB4u); set32(c.r[4], c.r[17].w[0] + 52u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004E5DB4u) [[unlikely]] return; }
L_004E5DB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5DBCu); set32(c.r[4], c.r[17].w[0] + 68u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004E5DBCu) [[unlikely]] return; }
L_004E5DBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5DC4u); set32(c.r[4], c.r[17].w[0] + 84u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004E5DC4u) [[unlikely]] return; }
L_004E5DC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5DCCu); set32(c.r[4], c.r[17].w[0] + 100u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004E5DCCu) [[unlikely]] return; }
L_004E5DCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5DD4u); set32(c.r[4], c.r[17].w[0] + 116u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004E5DD4u) [[unlikely]] return; }
L_004E5DD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5DDCu); set32(c.r[4], c.r[17].w[0] + 132u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004E5DDCu) [[unlikely]] return; }
L_004E5DDC:
    st32((c.r[17].w[0] + 164u), 0u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    st32((c.r[17].w[0] + 168u), 0u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 172u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5DF8u); st32((c.r[17].w[0] + 176u), 0u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004E5DF8u) [[unlikely]] return; }
L_004E5DF8:
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5E04u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004E5E04u) [[unlikely]] return; }
L_004E5E04:
    set32(c.r[4], c.r[17].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5E10u); set32(c.r[5], c.r[16].w[0] + 64u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004E5E10u) [[unlikely]] return; }
L_004E5E10:
    set32(c.r[4], c.r[17].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5E1Cu); set32(c.r[5], c.r[16].w[0] + 96u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004E5E1Cu) [[unlikely]] return; }
L_004E5E1C:
    set32(c.r[4], c.r[17].w[0] + 68u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5E28u); set32(c.r[5], c.r[16].w[0] + 128u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004E5E28u) [[unlikely]] return; }
L_004E5E28:
    set32(c.r[4], c.r[17].w[0] + 84u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5E34u); set32(c.r[5], c.r[16].w[0] + 160u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004E5E34u) [[unlikely]] return; }
L_004E5E34:
    set32(c.r[4], c.r[17].w[0] + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5E40u); set32(c.r[5], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004E5E40u) [[unlikely]] return; }
L_004E5E40:
    set32(c.r[4], c.r[17].w[0] + 116u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5E4Cu); set32(c.r[5], c.r[16].w[0] + 224u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004E5E4Cu) [[unlikely]] return; }
L_004E5E4C:
    set32(c.r[4], c.r[17].w[0] + 132u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5E58u); set32(c.r[5], c.r[16].w[0] + 256u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004E5E58u) [[unlikely]] return; }
L_004E5E58:
    c.f[0] = ld32((c.r[16].w[0] + 260u));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 148u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 264u));
    st32((c.r[17].w[0] + 152u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 268u));
    st32((c.r[17].w[0] + 156u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 272u));
    st32((c.r[17].w[0] + 160u), c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 288u));
    c.f[2] = ld32((c.r[16].w[0] + 284u));
    c.f[1] = ld32((c.r[16].w[0] + 280u));
    c.f[0] = ld32((c.r[16].w[0] + 276u));
    st32((c.r[17].w[0] + 164u), c.f[0]);
    st32((c.r[17].w[0] + 168u), c.f[1]);
    st32((c.r[17].w[0] + 172u), c.f[2]);
    st32((c.r[17].w[0] + 176u), c.f[3]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004E5EB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (t) { goto L_004E5EFC; } }
L_004E5EDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5EE4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004E5EE4u) [[unlikely]] return; }
L_004E5EE4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 76u);  goto L_004E5EF4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004E5F10; } }
L_004E5EF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5EFCu); set32(c.r[16], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0005(c, 13u, depth + 1u); else { c.pc = 0x00114160u; return; } if (c.pc != 0x004E5EFCu) [[unlikely]] return; }
L_004E5EFC:
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[2], c.r[18].w[0] + 32u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[3].w[0] + 12u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004E5EDCu | kUnwind; return; } goto L_004E5EDC; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_004E5F10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004E5F30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5F4Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004E5F4Cu) [[unlikely]] return; }
L_004E5F4C:
    set32(c.r[4], c.r[29].w[0] + 72u);
    set32(c.r[5], c.r[17].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5F5Cu); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00F9(c, 296u, depth + 1u); else { c.pc = 0x004E6820u; return; } if (c.pc != 0x004E5F5Cu) [[unlikely]] return; }
L_004E5F5C:
    set32(c.r[16], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5F6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004E5F6Cu) [[unlikely]] return; }
L_004E5F6C:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    set32(c.r[2], c.r[17].w[0] + 32u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[3].w[0] + 28u)));  goto L_004E5F84; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004E5F84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004E5FA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 44u), c.r[2].w[0]);  if (t) { goto L_004E5FC8; } }
L_004E5FBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E5FC4u); set32(c.r[4], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_0005(c, 13u, depth + 1u); else { c.pc = 0x00114160u; return; } if (c.pc != 0x004E5FC4u) [[unlikely]] return; }
L_004E5FC4:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 1;
L_004E5FC8:
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E5FBCu | kUnwind; return; } goto L_004E5FBC; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 44u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004E5FF0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6010u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000A(c, 391u, depth + 1u); else { c.pc = 0x0012B240u; return; } if (c.pc != 0x004E6010u) [[unlikely]] return; }
L_004E6010:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E601Cu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x00102E20u; return; } if (c.pc != 0x004E601Cu) [[unlikely]] return; }
L_004E601C:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 80u));  goto L_004E6034; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 84u)));  if (t) { goto L_004E603C; } }
L_004E6034:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_004E603C:
    c.r[16].d[0] = c.r[2].d[0] ^ 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6050u); c.r[16].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004E6050u) [[unlikely]] return; }
L_004E6050:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004E6090; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6064u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x00102E20u; return; } if (c.pc != 0x004E6064u) [[unlikely]] return; }
L_004E6064:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6074u); set32(c.r[5], c.r[5].w[0] + 10346u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004E6074u) [[unlikely]] return; }
L_004E6074:
    c.r[16].d[0] = c.r[2].d[0] ^ 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6088u); c.r[16].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004E6088u) [[unlikely]] return; }
L_004E6088:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004E60A0; } }
L_004E6090:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E60A0u); set32(c.r[5], c.r[5].w[0] + 10350u);  if (depth < kMaxDepth) unit_000A(c, 328u, depth + 1u); else { c.pc = 0x0012AC80u; return; } if (c.pc != 0x004E60A0u) [[unlikely]] return; }
L_004E60A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - 23728u);
    set32(c.r[4], 0u + 6u);
    st32((c.r[29].w[0] + 136u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[6], c.r[6].w[0] + 9728u);
    set32(c.r[7], c.r[29].w[0] + 136u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E60CCu); st32((c.r[29].w[0] + 140u), 0u);  if (depth < kMaxDepth) unit_0000(c, 231u, depth + 1u); else { c.pc = 0x00102E60u; return; } if (c.pc != 0x004E60CCu) [[unlikely]] return; }
L_004E60CC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 140u)));  goto L_004E6118; }
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 23728u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 136u), c.r[3].w[0]);  if (t) { goto L_004E60F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E60F0u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004E60F0u) [[unlikely]] return; }
L_004E60F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E60F8u); set32(c.r[4], ld32((c.r[29].w[0] + 140u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004E60F8u) [[unlikely]] return; }
L_004E60F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[2].w[0] - 27888u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6110u); st32((c.r[29].w[0] + 136u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x004E6110u) [[unlikely]] return; }
L_004E6110:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004E61D0; } }
L_004E6118:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6124u); set32(c.r[5], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004E6124u) [[unlikely]] return; }
L_004E6124:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004E6180; } }
L_004E612C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6134u); set32(c.r[4], 0u + 180u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004E6134u) [[unlikely]] return; }
L_004E6134:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 20u);  goto L_004E6170; }
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[5], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6168u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00F9(c, 194u, depth + 1u); else { c.pc = 0x004E5D70u; return; } if (c.pc != 0x004E6168u) [[unlikely]] return; }
L_004E6168:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 2;
L_004E6170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6178u); set32(c.r[5], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_00F9(c, 286u, depth + 1u); else { c.pc = 0x004E6690u; return; } if (c.pc != 0x004E6178u) [[unlikely]] return; }
L_004E6178:
    st32((c.r[2].w[0] + 16u), c.r[18].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_004E6180:
    set32(c.r[3], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 44u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004E612Cu | kUnwind; return; } goto L_004E612C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 23728u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 136u), c.r[2].w[0]);  if (t) { goto L_004E61B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E61ACu); set32(c.r[4], ld32((c.r[3].w[0] + 4u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004E61ACu) [[unlikely]] return; }
L_004E61AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E61B4u); set32(c.r[4], ld32((c.r[29].w[0] + 140u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004E61B4u) [[unlikely]] return; }
L_004E61B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[2].w[0] - 27888u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E61CCu); st32((c.r[29].w[0] + 136u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x004E61CCu) [[unlikely]] return; }
L_004E61CC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_004E61D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_004E61F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004E6260; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 23728u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E6234; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E622Cu); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004E622Cu) [[unlikely]] return; }
L_004E622C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6234u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004E6234u) [[unlikely]] return; }
L_004E6234:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_004E624C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27888u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 4;
L_004E624C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004E6264; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6260u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004E6260u) [[unlikely]] return; }
L_004E6260:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004E6264:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004E6280:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004E6374; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 23752u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_004E62DC; } }
L_004E62B4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 60u)));  goto L_004E62D0; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004E62CCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004E62CCu) [[unlikely]] return; }
L_004E62CC:
    set32(c.r[2], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 1;
L_004E62D0:
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E62DCu); st32((c.r[2].w[0] + 28u), 0u);  if (depth < kMaxDepth) unit_0005(c, 13u, depth + 1u); else { c.pc = 0x00114160u; return; } if (c.pc != 0x004E62DCu) [[unlikely]] return; }
L_004E62DC:
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[2], c.r[17].w[0] + 32u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[3].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004E62B4u | kUnwind; return; } goto L_004E62B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E62F4u); set32(c.r[4], c.r[17].w[0] + 20u);  if (depth < kMaxDepth) unit_00F9(c, 341u, depth + 1u); else { c.pc = 0x004E6BE0u; return; } if (c.pc != 0x004E62F4u) [[unlikely]] return; }
L_004E62F4:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 20u);  goto L_004E630C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6308u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004E6308u) [[unlikely]] return; }
L_004E6308:
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 1;
L_004E630C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 4u);  goto L_004E633C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004E6338; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004E6338; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004E6338; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6338u);  if (depth < kMaxDepth) unit_00F9(c, 300u, depth + 1u); else { c.pc = 0x004E68C0u; return; } if (c.pc != 0x004E6338u) [[unlikely]] return; }
L_004E6338:
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_004E633C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_004E6360; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004E635C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004E635C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E635Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00F9(c, 344u, depth + 1u); else { c.pc = 0x004E6C50u; return; } if (c.pc != 0x004E635Cu) [[unlikely]] return; }
L_004E635C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_004E6360:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004E6378; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6374u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004E6374u) [[unlikely]] return; }
L_004E6374:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004E6378:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004E6390:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004E6480; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[17].w[0] + 132u);
    set32(c.r[2], c.r[2].w[0] - 23712u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_004E63C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E63C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004E63C8u) [[unlikely]] return; }
L_004E63C8:
    set32(c.r[4], c.r[17].w[0] + 116u);
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 100u);  goto L_004E63E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E63DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004E63DCu) [[unlikely]] return; }
L_004E63DC:
    set32(c.r[4], c.r[17].w[0] + 100u);
    c.budget -= 1;
L_004E63E0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 84u);  goto L_004E63F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E63F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004E63F0u) [[unlikely]] return; }
L_004E63F0:
    set32(c.r[4], c.r[17].w[0] + 84u);
    c.budget -= 1;
L_004E63F4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 68u);  goto L_004E6408; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6404u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004E6404u) [[unlikely]] return; }
L_004E6404:
    set32(c.r[4], c.r[17].w[0] + 68u);
    c.budget -= 1;
L_004E6408:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 52u);  goto L_004E641C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6418u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004E6418u) [[unlikely]] return; }
L_004E6418:
    set32(c.r[4], c.r[17].w[0] + 52u);
    c.budget -= 1;
L_004E641C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 36u);  goto L_004E6430; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E642Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004E642Cu) [[unlikely]] return; }
L_004E642C:
    set32(c.r[4], c.r[17].w[0] + 36u);
    c.budget -= 1;
L_004E6430:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 20u);  goto L_004E6444; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6440u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004E6440u) [[unlikely]] return; }
L_004E6440:
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 1;
L_004E6444:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 4u);  goto L_004E6458; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6454u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004E6454u) [[unlikely]] return; }
L_004E6454:
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_004E6458:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_004E646C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6468u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004E6468u) [[unlikely]] return; }
L_004E6468:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_004E646C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004E6484; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6480u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004E6480u) [[unlikely]] return; }
L_004E6480:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004E6484:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004E64A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 22676u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { st32((c.r[28].w[0] - 22676u), 0u);  goto L_004E64C8; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004E64C4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004E64C4u) [[unlikely]] return; }
L_004E64C4:
    st32((c.r[28].w[0] - 22676u), 0u);
    c.budget -= 1;
L_004E64C8:
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004E64E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 64u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6500u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004E6500u) [[unlikely]] return; }
L_004E6500:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004E6538; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 23752u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6520u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00F9(c, 281u, depth + 1u); else { c.pc = 0x004E65F0u; return; } if (c.pc != 0x004E6520u) [[unlikely]] return; }
L_004E6520:
    set32(c.r[4], c.r[16].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E652Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00F9(c, 276u, depth + 1u); else { c.pc = 0x004E6560u; return; } if (c.pc != 0x004E652Cu) [[unlikely]] return; }
L_004E652C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6534u); set32(c.r[4], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004E6534u) [[unlikely]] return; }
L_004E6534:
    st32((c.r[16].w[0] + 44u), c.r[17].w[0]);
    c.budget -= 1;
L_004E6538:
    set32(c.r[5], ld32((c.r[28].w[0] - 29440u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6548u); st32((c.r[28].w[0] - 22676u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_00F9(c, 224u, depth + 1u); else { c.pc = 0x004E5FF0u; return; } if (c.pc != 0x004E6548u) [[unlikely]] return; }
L_004E6548:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004E6560:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004E65B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6580u);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x004E6580u) [[unlikely]] return; }
L_004E6580:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_004E65A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6598u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x004E6598u) [[unlikely]] return; }
L_004E6598:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_004E65A0:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], c.r[29].w[0] + 44u);  goto L_004E65B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E65B0u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x004E65B0u) [[unlikely]] return; }
L_004E65B0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E65B4:
    set32(c.r[2], c.r[29].w[0] + 44u);
    c.budget -= 1;
L_004E65B8:
    st32((c.r[29].w[0] + 40u), c.r[5].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[5], c.r[29].w[0] + 36u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 40u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E65D4u); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00F9(c, 343u, depth + 1u); else { c.pc = 0x004E6C20u; return; } if (c.pc != 0x004E65D4u) [[unlikely]] return; }
L_004E65D4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004E65F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004E6644; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6610u);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x004E6610u) [[unlikely]] return; }
L_004E6610:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_004E6630; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6628u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x004E6628u) [[unlikely]] return; }
L_004E6628:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_004E6630:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0]), c.r[5].w[0]);  goto L_004E6648; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6640u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x004E6640u) [[unlikely]] return; }
L_004E6640:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004E6644:
    st32((c.r[16].w[0]), c.r[5].w[0]);
    c.budget -= 1;
L_004E6648:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004E6670:
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[3], 0u + 262u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_004E6684; } }
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 1;
L_004E6684:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004E6690:
    set32(c.r[29], c.r[29].w[0] - 160u);
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
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004E6700; } }
L_004E66D4:
    set32(c.r[5], c.r[17].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E66E0u); c.r[18].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x004E66E0u) [[unlikely]] return; }
L_004E66E0:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[19].d[0] = c.r[17].d[0] + 0ull;  goto L_004E66F4; }
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004E6700; } }
L_004E66F4:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], ld32((c.r[17].w[0] + 4u)));
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_004E6700:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004E66D4u | kUnwind; return; } goto L_004E66D4; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[5].d[0] = c.r[20].d[0] + 0ull;  goto L_004E6728; }
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E671Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x004E671Cu) [[unlikely]] return; }
L_004E671C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], c.r[19].w[0] + 12u);  goto L_004E6778; }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_004E6728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6730u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004E6730u) [[unlikely]] return; }
L_004E6730:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[8], c.r[29].w[0] + 128u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E674Cu); st32((c.r[29].w[0] + 144u), 0u);  if (depth < kMaxDepth) unit_00F9(c, 348u, depth + 1u); else { c.pc = 0x004E6CC0u; return; } if (c.pc != 0x004E674Cu) [[unlikely]] return; }
L_004E674C:
    set32(c.r[16], c.r[2].w[0] + 12u);
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_004E6778; }
    set32(c.r[4], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004E6774; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6774u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004E6774u) [[unlikely]] return; }
L_004E6774:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004E6778:
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
L_004E67A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004E6808; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_004E67F4; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004E67F0; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E67F0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004E67F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E67F0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004E67F0u) [[unlikely]] return; }
L_004E67F0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_004E67F4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004E680C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6808u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004E6808u) [[unlikely]] return; }
L_004E6808:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004E680C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004E6820:
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
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[19].w[0] + 12u);  if (t) { goto L_004E686C; } }
L_004E6854:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E685Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x004E685Cu) [[unlikely]] return; }
L_004E685C:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[17], ld32((c.r[17].w[0] + 4u)));  goto L_004E686C; }
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 2;
L_004E686C:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], c.r[17].w[0] + 12u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004E6854u | kUnwind; return; } goto L_004E6854; }
    set32(c.r[3], c.r[19].w[0] + 12u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[3], c.r[19].w[0] + 12u);  goto L_004E6898; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E688Cu); set32(c.r[5], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x004E688Cu) [[unlikely]] return; }
L_004E688C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { st32((c.r[20].w[0]), c.r[16].w[0]);  goto L_004E689C; }
    set32(c.r[3], c.r[19].w[0] + 12u);
    c.budget -= 1;
L_004E6898:
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_004E689C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004E68C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004E69E0; } }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_004E6950; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_004E690C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6908u);  if (depth < kMaxDepth) unit_00F9(c, 300u, depth + 1u); else { c.pc = 0x004E68C0u; return; } if (c.pc != 0x004E6908u) [[unlikely]] return; }
L_004E6908:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_004E690C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004E6920; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E691Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F9(c, 300u, depth + 1u); else { c.pc = 0x004E68C0u; return; } if (c.pc != 0x004E691Cu) [[unlikely]] return; }
L_004E691C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004E6920:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6928u);  if (depth < kMaxDepth) unit_00F9(c, 340u, depth + 1u); else { c.pc = 0x004E6BD0u; return; } if (c.pc != 0x004E6928u) [[unlikely]] return; }
L_004E6928:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6934u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00F9(c, 338u, depth + 1u); else { c.pc = 0x004E6B80u; return; } if (c.pc != 0x004E6934u) [[unlikely]] return; }
L_004E6934:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E693Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F9(c, 337u, depth + 1u); else { c.pc = 0x004E6B70u; return; } if (c.pc != 0x004E693Cu) [[unlikely]] return; }
L_004E693C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E694Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00F9(c, 335u, depth + 1u); else { c.pc = 0x004E6B50u; return; } if (c.pc != 0x004E694Cu) [[unlikely]] return; }
L_004E694C:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_004E6950:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004E69B4; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_004E6970; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E696Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F9(c, 300u, depth + 1u); else { c.pc = 0x004E68C0u; return; } if (c.pc != 0x004E696Cu) [[unlikely]] return; }
L_004E696C:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_004E6970:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004E6984; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6980u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F9(c, 300u, depth + 1u); else { c.pc = 0x004E68C0u; return; } if (c.pc != 0x004E6980u) [[unlikely]] return; }
L_004E6980:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004E6984:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E698Cu);  if (depth < kMaxDepth) unit_00F9(c, 340u, depth + 1u); else { c.pc = 0x004E6BD0u; return; } if (c.pc != 0x004E698Cu) [[unlikely]] return; }
L_004E698C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6998u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00F9(c, 338u, depth + 1u); else { c.pc = 0x004E6B80u; return; } if (c.pc != 0x004E6998u) [[unlikely]] return; }
L_004E6998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E69A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F9(c, 337u, depth + 1u); else { c.pc = 0x004E6B70u; return; } if (c.pc != 0x004E69A0u) [[unlikely]] return; }
L_004E69A0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E69B0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00F9(c, 335u, depth + 1u); else { c.pc = 0x004E6B50u; return; } if (c.pc != 0x004E69B0u) [[unlikely]] return; }
L_004E69B0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004E69B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E69BCu);  if (depth < kMaxDepth) unit_00F9(c, 340u, depth + 1u); else { c.pc = 0x004E6BD0u; return; } if (c.pc != 0x004E69BCu) [[unlikely]] return; }
L_004E69BC:
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E69C8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00F9(c, 293u, depth + 1u); else { c.pc = 0x004E67A0u; return; } if (c.pc != 0x004E69C8u) [[unlikely]] return; }
L_004E69C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E69D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F9(c, 337u, depth + 1u); else { c.pc = 0x004E6B70u; return; } if (c.pc != 0x004E69D0u) [[unlikely]] return; }
L_004E69D0:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[19], ld32((c.r[16].w[0] + 4u)));  goto L_004E69E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E69E0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004E69E0u) [[unlikely]] return; }
L_004E69E0:
    set32(c.r[19], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_004E69E4:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[3], c.r[16].w[0] + 12u);  goto L_004E6AE8; }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_004E6A54; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_004E6A10; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6A0Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F9(c, 300u, depth + 1u); else { c.pc = 0x004E68C0u; return; } if (c.pc != 0x004E6A0Cu) [[unlikely]] return; }
L_004E6A0C:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_004E6A10:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004E6A24; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6A20u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F9(c, 300u, depth + 1u); else { c.pc = 0x004E68C0u; return; } if (c.pc != 0x004E6A20u) [[unlikely]] return; }
L_004E6A20:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004E6A24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6A2Cu);  if (depth < kMaxDepth) unit_00F9(c, 340u, depth + 1u); else { c.pc = 0x004E6BD0u; return; } if (c.pc != 0x004E6A2Cu) [[unlikely]] return; }
L_004E6A2C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6A38u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00F9(c, 338u, depth + 1u); else { c.pc = 0x004E6B80u; return; } if (c.pc != 0x004E6A38u) [[unlikely]] return; }
L_004E6A38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6A40u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F9(c, 337u, depth + 1u); else { c.pc = 0x004E6B70u; return; } if (c.pc != 0x004E6A40u) [[unlikely]] return; }
L_004E6A40:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6A50u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00F9(c, 335u, depth + 1u); else { c.pc = 0x004E6B50u; return; } if (c.pc != 0x004E6A50u) [[unlikely]] return; }
L_004E6A50:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_004E6A54:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004E6AB8; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_004E6A74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6A70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F9(c, 300u, depth + 1u); else { c.pc = 0x004E68C0u; return; } if (c.pc != 0x004E6A70u) [[unlikely]] return; }
L_004E6A70:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_004E6A74:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004E6A88; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6A84u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F9(c, 300u, depth + 1u); else { c.pc = 0x004E68C0u; return; } if (c.pc != 0x004E6A84u) [[unlikely]] return; }
L_004E6A84:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004E6A88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6A90u);  if (depth < kMaxDepth) unit_00F9(c, 340u, depth + 1u); else { c.pc = 0x004E6BD0u; return; } if (c.pc != 0x004E6A90u) [[unlikely]] return; }
L_004E6A90:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6A9Cu); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00F9(c, 338u, depth + 1u); else { c.pc = 0x004E6B80u; return; } if (c.pc != 0x004E6A9Cu) [[unlikely]] return; }
L_004E6A9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6AA4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F9(c, 337u, depth + 1u); else { c.pc = 0x004E6B70u; return; } if (c.pc != 0x004E6AA4u) [[unlikely]] return; }
L_004E6AA4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6AB4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00F9(c, 335u, depth + 1u); else { c.pc = 0x004E6B50u; return; } if (c.pc != 0x004E6AB4u) [[unlikely]] return; }
L_004E6AB4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004E6AB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6AC0u);  if (depth < kMaxDepth) unit_00F9(c, 340u, depth + 1u); else { c.pc = 0x004E6BD0u; return; } if (c.pc != 0x004E6AC0u) [[unlikely]] return; }
L_004E6AC0:
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6ACCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00F9(c, 293u, depth + 1u); else { c.pc = 0x004E67A0u; return; } if (c.pc != 0x004E6ACCu) [[unlikely]] return; }
L_004E6ACC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6AD4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F9(c, 337u, depth + 1u); else { c.pc = 0x004E6B70u; return; } if (c.pc != 0x004E6AD4u) [[unlikely]] return; }
L_004E6AD4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_004E6AE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6AE4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004E6AE4u) [[unlikely]] return; }
L_004E6AE4:
    set32(c.r[3], c.r[16].w[0] + 12u);
    c.budget -= 1;
L_004E6AE8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004E6B24; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004E6B24; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004E6B24; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004E6B24; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004E6B24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6B24u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004E6B24u) [[unlikely]] return; }
L_004E6B24:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_004E6B38; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6B34u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004E6B34u) [[unlikely]] return; }
L_004E6B34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_004E6B38:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004E6B50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_004E6B64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6B64u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004E6B64u) [[unlikely]] return; }
L_004E6B64:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004E6B70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 8u);  c.pc = t; return; }
L_004E6B80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_004E6BC0; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_004E6BC4; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004E6BC0; } }
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004E6BC0; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004E6BC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6BC0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004E6BC0u) [[unlikely]] return; }
L_004E6BC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004E6BC4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004E6BD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_004E6BE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004E6C10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6C00u);  if (depth < kMaxDepth) unit_00F9(c, 300u, depth + 1u); else { c.pc = 0x004E68C0u; return; } if (c.pc != 0x004E6C00u) [[unlikely]] return; }
L_004E6C00:
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[3], c.r[16].w[0] + 12u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 4;
L_004E6C10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004E6C20:
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
L_004E6C50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004E6CA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6C74u);  if (depth < kMaxDepth) unit_00F9(c, 354u, depth + 1u); else { c.pc = 0x004E6DD0u; return; } if (c.pc != 0x004E6C74u) [[unlikely]] return; }
L_004E6C74:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_004E6C94; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004E6C90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6C90u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004E6C90u) [[unlikely]] return; }
L_004E6C90:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_004E6C94:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004E6CAC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6CA8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004E6CA8u) [[unlikely]] return; }
L_004E6CA8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004E6CAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004E6CC0:
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
    { const bool t = c.r[1].d[0] != 0ull; c.r[18].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_004E6D24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6D1Cu); set32(c.r[5], c.r[5].w[0] + 10434u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x004E6D1Cu) [[unlikely]] return; }
L_004E6D1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6D24u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x004E6D24u) [[unlikely]] return; }
L_004E6D24:
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6D30u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x004E6D30u) [[unlikely]] return; }
L_004E6D30:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[17].w[0] + 12u);
    c.budget -= 4;
    if (c.r[16].d[0] == 0ull) { st32((c.r[17].w[0] + 4u), 0u);  goto L_004E6D58; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6D4Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004E6D4Cu) [[unlikely]] return; }
L_004E6D4C:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 3;
L_004E6D58:
    st32((c.r[17].w[0]), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_004E6D78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[17].w[0]);  if (t) { goto L_004E6D7C; } }
L_004E6D78:
    st32((c.r[20].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 1;
L_004E6D7C:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6D94u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 69u, depth + 1u); else { c.pc = 0x00114770u; return; } if (c.pc != 0x004E6D94u) [[unlikely]] return; }
L_004E6D94:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004E6DA4; }
    st32((c.r[21].w[0] + 20u), c.r[17].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_004E6DA4:
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
L_004E6DD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[16].w[0] + c.r[3].w[0]);  if (t) { goto L_004E6E20; } }
L_004E6E0C:
    set32(c.r[5], 0u - 1u);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6E20u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004E6E20u) [[unlikely]] return; }
L_004E6E20:
    c.r[1].d[0] = c.r[16].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[18], c.r[18].w[0] - 180u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004E6E0Cu | kUnwind; return; } goto L_004E6E0C; }
    st32((c.r[17].w[0] + 8u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004E6E50:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004E6E94; } }
    st8((c.r[4].w[0] + 125u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 125u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004E6E94; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004E6E70:
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[6], ld32((c.r[3].w[0] + 40u)));
    c.r[5].d[0] = ld16((c.r[6].w[0] + 196u));
    c.r[3].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 1ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; st16((c.r[6].w[0] + 196u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E6E70u | kUnwind; return; } goto L_004E6E70; } }
L_004E6E94:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004E6EA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004E6EB0:
    set32(c.r[29], c.r[29].w[0] - 272u);
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
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8u));
    c.budget -= 19;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004E7504; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 125u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));  goto L_004E7508; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6F10u); set32(c.r[4], ld32((c.r[28].w[0] - 24844u)));  if (depth < kMaxDepth) unit_00D1(c, 5u, depth + 1u); else { c.pc = 0x00444030u; return; } if (c.pc != 0x004E6F10u) [[unlikely]] return; }
L_004E6F10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E7504; } }
    c.r[3].d[0] = ld8((c.r[20].w[0] + 124u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 26156u)));  goto L_004E6F30; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004E7504; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26156u)));
    c.budget -= 1;
L_004E6F30:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6F3Cu); st32((c.r[29].w[0] + 252u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004E6F3Cu) [[unlikely]] return; }
L_004E6F3C:
    set32(c.r[17], ld32((c.r[28].w[0] - 27612u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6F4Cu); st32((c.r[29].w[0] + 248u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002F(c, 118u, depth + 1u); else { c.pc = 0x001BDBC0u; return; } if (c.pc != 0x004E6F4Cu) [[unlikely]] return; }
L_004E6F4C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    c.f[22] = ld32((c.r[28].w[0] - 29052u));
    set32(c.r[23], c.r[19].w[0] + 160u);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[22], ld32((c.r[2].w[0] + 320u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004E6FBC; } }
    set32(c.r[4], c.r[22].w[0] + 4u);
    c.budget -= 1;
L_004E6F74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6F7Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x004E6F7Cu) [[unlikely]] return; }
L_004E6F7C:
    set32(c.r[21], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_004E6FBC; }
    set32(c.r[3], ld32((c.r[21].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6FACu); set32(c.r[4], ld32((c.r[2].w[0] + 52u)));  if (depth < kMaxDepth) unit_002F(c, 118u, depth + 1u); else { c.pc = 0x001BDBC0u; return; } if (c.pc != 0x004E6FACu) [[unlikely]] return; }
L_004E6FAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_004E6FB8; } }
    c.r[18].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_004E6FB8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_004E6FBC:
    set32(c.r[2], ld32((c.r[22].w[0] + 60u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[22].w[0] + 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004E6F74u | kUnwind; return; } goto L_004E6F74; }
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[25], ld32((c.r[17].w[0])));  goto L_004E6FE8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6FDCu); set32(c.r[4], ld32((c.r[29].w[0] + 248u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004E6FDCu) [[unlikely]] return; }
L_004E6FDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004E7504; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_004E6FE8:
    set32(c.r[25], ld32((c.r[25].w[0] + 240u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004E6FF4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004E6FF4u) [[unlikely]] return; }
L_004E6FF4:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[29].w[0] + 192u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[25].w[0] + 244u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004E700Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004E700Cu) [[unlikely]] return; }
L_004E700C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[3], c.r[19].w[0] + 308u);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 328u));
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 260u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E7044; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_004E7044:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E7058; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 4ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_004E7058:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[17].w[0] + 96u));  goto L_004E706C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004E7098; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 96u));
    c.budget -= 1;
L_004E706C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_004E7098; }
    set32(c.r[3], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_004E7098; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004E7098; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004E7098:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[21].d[0] = 0ull + 0ull;  goto L_004E74CC; }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 132u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[17].w[0])));  goto L_004E70C8; }
    set32(c.r[4], c.r[29].w[0] + 260u);
    set32(c.r[5], c.r[17].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E70BCu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x004E70BCu) [[unlikely]] return; }
L_004E70BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E70F0; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_004E70C8:
    set32(c.r[5], ld32((c.r[29].w[0] + 260u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 352u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004E70D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004E70D8u) [[unlikely]] return; }
L_004E70D8:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[17].w[0] + 136u);
    st8((c.r[17].w[0] + 132u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[29].w[0] + 260u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E70F0u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004E70F0u) [[unlikely]] return; }
L_004E70F0:
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004E74CC; } }
    set32(c.r[4], c.r[22].w[0] + 4u);
    c.budget -= 1;
L_004E7100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7108u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x004E7108u) [[unlikely]] return; }
L_004E7108:
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[18].d[0]) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_004E74CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E711Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EE(c, 275u, depth + 1u); else { c.pc = 0x004BA5A0u; return; } if (c.pc != 0x004E711Cu) [[unlikely]] return; }
L_004E711C:
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[3] = ld32((c.r[23].w[0]));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[4] = ld32((c.r[23].w[0] + 4u));
    c.f[5] = fp::sub(c.f[2], c.f[3]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[3] = ld32((c.r[23].w[0] + 8u));
    c.f[4] = fp::sub(c.f[1], c.f[4]);
    c.f[3] = fp::sub(c.f[0], c.f[3]);
    c.facc = fp::mul(c.f[5], c.f[5]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[4]));
    c.f[23] = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[23] = fp::sqrt(c.f[23]);
    c.f[3] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[23]) < fp::key(c.f[3]));
    c.budget -= 20;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004E74C8; } }
    fpu_div(c, 4u, c.f[23], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[2].w[0];
    c.f[20] = fp::sub(c.f[3], c.f[4]);
    c.f[9] = 0u;
    c.f[4] = fp::max(c.f[20], c.f[9]);
    c.f[5] = fp::min(c.f[4], c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[4] = c.r[2].w[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[3] = c.r[2].w[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.facc = fp::add(c.f[9], c.f[3]);
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    c.f[3] = fp::mul(c.f[5], c.f[5]);
    set32(c.r[5], c.r[29].w[0] + 216u);
    set32(c.r[6], c.r[29].w[0] + 268u);
    set32(c.r[7], c.r[29].w[0] + 264u);
    c.f[4] = fp::sub(c.facc, fp::mul(c.f[4], c.f[5]));
    c.f[7] = fp::mul(c.f[4], c.f[3]);
    c.f[8] = ld32((c.r[28].w[0] - 29436u));
    c.f[6] = ld32((c.r[28].w[0] - 29432u));
    c.f[5] = c.r[8].w[0];
    c.facc = fp::add(c.f[9], c.f[8]);
    c.f[6] = fp::sub(c.f[6], c.f[8]);
    c.f[21] = fp::add(c.facc, fp::mul(c.f[7], c.f[6]));
    c.facc = fp::add(c.f[9], c.f[5]);
    c.f[5] = fp::mul(c.f[5], c.f[21]);
    c.f[4] = c.r[3].w[0];
    c.f[5] = fp::sub(c.facc, fp::mul(c.f[4], c.f[5]));
    c.f[3] = ld32((c.r[2].w[0] + 376u));
    c.f[4] = ld32((c.r[2].w[0] + 372u));
    c.f[3] = fp::mul(c.f[3], c.f[5]);
    st32((c.r[29].w[0] + 240u), c.f[3]);
    c.f[3] = ld32((c.r[2].w[0] + 368u));
    c.f[4] = fp::mul(c.f[4], c.f[5]);
    c.f[3] = fp::mul(c.f[3], c.f[5]);
    st32((c.r[29].w[0] + 236u), c.f[4]);
    st32((c.r[29].w[0] + 232u), c.f[3]);
    c.f[5] = ld32((c.r[29].w[0] + 240u));
    c.f[4] = ld32((c.r[29].w[0] + 236u));
    c.f[3] = ld32((c.r[29].w[0] + 232u));
    c.f[0] = fp::add(c.f[0], c.f[5]);
    st32((c.r[29].w[0] + 224u), c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[4]);
    c.f[0] = fp::add(c.f[2], c.f[3]);
    st32((c.r[29].w[0] + 220u), c.f[1]);
    c.budget -= 56;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E724Cu); st32((c.r[29].w[0] + 216u), c.f[0]);  if (depth < kMaxDepth) unit_00BE(c, 260u, depth + 1u); else { c.pc = 0x003FAB50u; return; } if (c.pc != 0x004E724Cu) [[unlikely]] return; }
L_004E724C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E74C8; } }
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);  goto L_004E7280; }
    c.f[0] = ld32((c.r[29].w[0] + 268u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 268u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.budget -= 7;
L_004E7280:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[23]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = ld8((c.r[16].w[0] + 1200u));  goto L_004E73A8; }
    set32(c.r[5], ld32((c.r[18].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E72A4u); set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));  if (depth < kMaxDepth) unit_00B3(c, 85u, depth + 1u); else { c.pc = 0x003CCC70u; return; } if (c.pc != 0x004E72A4u) [[unlikely]] return; }
L_004E72A4:
    set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E72B8u); c.r[30].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_00B3(c, 75u, depth + 1u); else { c.pc = 0x003CCAE0u; return; } if (c.pc != 0x004E72B8u) [[unlikely]] return; }
L_004E72B8:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] != 0ull; c.r[2].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_004E72C8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E73A4; } }
L_004E72C8:
    c.budget -= 2;
    if (c.r[30].d[0] == 0ull) { set32(c.r[3], 0u + 3u);  goto L_004E72DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_004E72DC; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_004E72DC:
    c.f[5] = 0u;
    c.f[0] = fp::max(c.f[20], c.f[5]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[2].w[0];
    c.f[2] = fp::min(c.f[0], c.f[4]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    c.f[1] = c.r[2].w[0];
    set32(c.r[16], c.r[4].w[0] + 40u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[2].w[0];
    c.facc = fp::add(c.f[5], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[2]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[1], c.f[2]));
    c.f[2] = fp::mul(c.f[1], c.f[0]);
    c.f[3] = ld32((c.r[28].w[0] - 29428u));
    c.f[1] = ld32((c.r[28].w[0] - 29424u));
    c.f[0] = ld32((c.r[28].w[0] - 31752u));
    c.facc = fp::add(c.f[5], c.f[3]);
    c.f[1] = fp::sub(c.f[1], c.f[3]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[2], c.f[1]));
    st32((c.r[3].w[0] + 84u), c.f[1]);
    set32(c.r[2], ld32((c.r[3].w[0] + 88u)));
    c.f[0] = fp::mul(c.f[0], c.f[21]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 88u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 264u));
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.f[2] = c.f[0] & fp::kAbs;
    c.f[0] = ld32((c.r[29].w[0] + 268u));
    c.f[1] = fp::sub(c.f[4], c.f[1]);
    st32((c.r[2].w[0] + 96u), c.f[0]);
    st32((c.r[2].w[0] + 100u), c.f[1]);
    st32((c.r[2].w[0] + 104u), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 41;
L_004E7380:
    st32((c.r[2].w[0] + 108u), c.f[2]);
    set32(c.r[4], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7390u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_0060(c, 582u, depth + 1u); else { c.pc = 0x00283C30u; return; } if (c.pc != 0x004E7390u) [[unlikely]] return; }
L_004E7390:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E739Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 61u, depth + 1u); else { c.pc = 0x002CC700u; return; } if (c.pc != 0x004E739Cu) [[unlikely]] return; }
L_004E739C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004E74C8; } }
L_004E73A4:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1200u));
    c.budget -= 1;
L_004E73A8:
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 132u)));  goto L_004E7440; }
    set32(c.r[3], ld32((c.r[16].w[0] + 92u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[5], 0u + 1u);
    c.f[0] = ld32((c.r[28].w[0] - 31848u));
    set32(c.r[2], c.r[3].w[0] + 5u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    c.f[0] = fp::mul(c.f[0], c.f[21]);
    set32(c.r[16], c.r[4].w[0] + 40u);
    st32((c.r[3].w[0] + 84u), c.f[21]);
    set32(c.r[2], ld32((c.r[3].w[0] + 88u)));
    c.f[3] = c.f[0] & fp::kAbs;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 88u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 264u));
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.f[0] = ld32((c.r[29].w[0] + 268u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    st32((c.r[2].w[0] + 96u), c.f[0]);
    st32((c.r[2].w[0] + 100u), c.f[1]);
    st32((c.r[2].w[0] + 104u), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    st32((c.r[2].w[0] + 108u), c.f[3]);
    set32(c.r[4], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7428u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_0060(c, 582u, depth + 1u); else { c.pc = 0x00283C30u; return; } if (c.pc != 0x004E7428u) [[unlikely]] return; }
L_004E7428:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7434u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 61u, depth + 1u); else { c.pc = 0x002CC700u; return; } if (c.pc != 0x004E7434u) [[unlikely]] return; }
L_004E7434:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004E74C8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 132u)));
    c.budget -= 1;
L_004E7440:
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004E74C8; } }
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[20].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    c.f[0] = ld32((c.r[28].w[0] - 31848u));
    c.f[2] = c.r[2].w[0];
    set32(c.r[16], c.r[4].w[0] + 40u);
    st32((c.r[3].w[0] + 84u), c.f[21]);
    set32(c.r[2], ld32((c.r[3].w[0] + 88u)));
    c.f[0] = fp::mul(c.f[0], c.f[21]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 88u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 264u));
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.f[3] = c.f[0] & fp::kAbs;
    c.f[0] = ld32((c.r[29].w[0] + 268u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    st32((c.r[2].w[0] + 96u), c.f[0]);
    st32((c.r[2].w[0] + 100u), c.f[1]);
    st32((c.r[2].w[0] + 104u), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    st32((c.r[2].w[0] + 108u), c.f[3]);
    set32(c.r[4], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E74BCu); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_0060(c, 582u, depth + 1u); else { c.pc = 0x00283C30u; return; } if (c.pc != 0x004E74BCu) [[unlikely]] return; }
L_004E74BC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E74C8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 61u, depth + 1u); else { c.pc = 0x002CC700u; return; } if (c.pc != 0x004E74C8u) [[unlikely]] return; }
L_004E74C8:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_004E74CC:
    set32(c.r[2], ld32((c.r[22].w[0] + 12u)));
    c.r[2].d[0] = c.r[21].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[22].w[0] + 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004E7100u | kUnwind; return; } goto L_004E7100; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E74E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 350u, depth + 1u); else { c.pc = 0x002CAF50u; return; } if (c.pc != 0x004E74E8u) [[unlikely]] return; }
L_004E74E8:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].d[0] = ld8((c.r[29].w[0] + 192u));
    set32(c.r[25], ld32((c.r[25].w[0] + 244u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004E74FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004E74FCu) [[unlikely]] return; }
L_004E74FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7504u); set32(c.r[4], ld32((c.r[29].w[0] + 248u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004E7504u) [[unlikely]] return; }
L_004E7504:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.budget -= 1;
L_004E7508:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_004E7550:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004E7560; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 125u));
    c.budget -= 1;
L_004E7560:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004E7570:
    set32(c.r[29], c.r[29].w[0] - 192u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E75A8u); st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x004E75A8u) [[unlikely]] return; }
L_004E75A8:
    st32((c.r[29].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E75B4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004E75B4u) [[unlikely]] return; }
L_004E75B4:
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[18].d[0]; st32((c.r[29].w[0] + 144u), c.r[2].w[0]);  if (t) { goto L_004E7620; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[17].w[0] + 4u), c.r[18].w[0]);  goto L_004E7600; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E75D0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004E75D0u) [[unlikely]] return; }
L_004E75D0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E75E0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004E75E0u) [[unlikely]] return; }
L_004E75E0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E75FC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004E75FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004E75FCu) [[unlikely]] return; }
L_004E75FC:
    st32((c.r[17].w[0] + 4u), c.r[18].w[0]);
    c.budget -= 1;
L_004E7600:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));  goto L_004E7624; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7610u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004E7610u) [[unlikely]] return; }
L_004E7610:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7620u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004E7620u) [[unlikely]] return; }
L_004E7620:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    c.budget -= 1;
L_004E7624:
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 260u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 188u), c.r[2].w[0]);  if (t) { goto L_004E7654; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7640u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004E7640u) [[unlikely]] return; }
L_004E7640:
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7654u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004E7654u) [[unlikely]] return; }
L_004E7654:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004E7658:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 32528u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7678u); set32(c.r[18], c.r[3].w[0] + 12u);  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x004E7678u) [[unlikely]] return; }
L_004E7678:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7688u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 67u, depth + 1u); else { c.pc = 0x00138E10u; return; } if (c.pc != 0x004E7688u) [[unlikely]] return; }
L_004E7688:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004E7658u | kUnwind; return; } goto L_004E7658; } }
    set32(c.r[4], 0u + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E76A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004E76A4u) [[unlikely]] return; }
L_004E76A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004E7714; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E76B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 183u, depth + 1u); else { c.pc = 0x001BE4E0u; return; } if (c.pc != 0x004E76B4u) [[unlikely]] return; }
L_004E76B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6656u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E76D0u); st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_002F(c, 182u, depth + 1u); else { c.pc = 0x001BE4B0u; return; } if (c.pc != 0x004E76D0u) [[unlikely]] return; }
L_004E76D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E76DCu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_002F(c, 181u, depth + 1u); else { c.pc = 0x001BE480u; return; } if (c.pc != 0x004E76DCu) [[unlikely]] return; }
L_004E76DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E76E8u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_002F(c, 180u, depth + 1u); else { c.pc = 0x001BE450u; return; } if (c.pc != 0x004E76E8u) [[unlikely]] return; }
L_004E76E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E76F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 179u, depth + 1u); else { c.pc = 0x001BE420u; return; } if (c.pc != 0x004E76F4u) [[unlikely]] return; }
L_004E76F4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7700u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 178u, depth + 1u); else { c.pc = 0x001BE400u; return; } if (c.pc != 0x004E7700u) [[unlikely]] return; }
L_004E7700:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E770Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 177u, depth + 1u); else { c.pc = 0x001BE3F0u; return; } if (c.pc != 0x004E770Cu) [[unlikely]] return; }
L_004E770C:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_004E7714:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 184u), c.r[16].w[0]);  if (t) { goto L_004E7734; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7724u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004E7724u) [[unlikely]] return; }
L_004E7724:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7734u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004E7734u) [[unlikely]] return; }
L_004E7734:
    set32(c.r[9], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[6], 0u - 31u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[3], 0u - 481u);
    set32(c.r[2], 0u - 7169u);
    set32(c.r[4], 0u + 32u);
    c.r[8].d[0] = ld16((c.r[9].w[0] + 28u));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[8].d[0] & c.r[6].d[0];
    c.r[6].d[0] = c.r[6].d[0] | 12ull;
    st16((c.r[9].w[0] + 28u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st8((c.r[9].w[0] + 40u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[6].d[0] = ld16((c.r[9].w[0] + 28u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 224ull;
    st16((c.r[9].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[9].w[0] + 40u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].d[0] = ld16((c.r[9].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[9].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[9].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[9].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[9].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E77A4u); st16((c.r[9].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004E77A4u) [[unlikely]] return; }
L_004E77A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004E77FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E77B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x004E77B4u) [[unlikely]] return; }
L_004E77B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 13520u);
    set32(c.r[3], c.r[3].w[0] + 19920u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[2], 0u - 61u);
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 12ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 18;
L_004E77FC:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 28u));
    set32(c.r[2], 0u - 61u);
    c.r[21].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 12ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] & 65533ull;
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 256u);
    c.budget -= 13;
L_004E7830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7838u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004E7838u) [[unlikely]] return; }
L_004E7838:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { st32((c.r[29].w[0] + 180u), c.r[18].w[0]);  goto L_004E789C; }
    set32(c.r[4], 0u + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7850u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004E7850u) [[unlikely]] return; }
L_004E7850:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_004E788C; }
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7888u); c.r[11].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 178u, depth + 1u); else { c.pc = 0x002CDAE0u; return; } if (c.pc != 0x004E7888u) [[unlikely]] return; }
L_004E7888:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_004E788C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7894u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 65u, depth + 1u); else { c.pc = 0x002CC790u; return; } if (c.pc != 0x004E7894u) [[unlikely]] return; }
L_004E7894:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 180u), c.r[18].w[0]);
    c.budget -= 2;
L_004E789C:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 180u)));  goto L_004E78C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E78ACu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004E78ACu) [[unlikely]] return; }
L_004E78AC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E78BCu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004E78BCu) [[unlikely]] return; }
L_004E78BC:
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 1;
L_004E78C0:
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 220u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E78D4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0073(c, 138u, depth + 1u); else { c.pc = 0x002CD2F0u; return; } if (c.pc != 0x004E78D4u) [[unlikely]] return; }
L_004E78D4:
    set32(c.r[3], ld32((c.r[29].w[0] + 180u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 220u)));
    c.f[14] = c.r[2].w[0];
    c.f[13] = c.f[12];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E78FCu); c.f[15] = c.f[14];  if (depth < kMaxDepth) unit_0073(c, 132u, depth + 1u); else { c.pc = 0x002CD020u; return; } if (c.pc != 0x004E78FCu) [[unlikely]] return; }
L_004E78FC:
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7908u); set32(c.r[4], ld32((c.r[2].w[0] + 220u)));  if (depth < kMaxDepth) unit_0073(c, 124u, depth + 1u); else { c.pc = 0x002CCCA0u; return; } if (c.pc != 0x004E7908u) [[unlikely]] return; }
L_004E7908:
    set32(c.r[3], ld32((c.r[29].w[0] + 180u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    c.f[14] = c.r[2].w[0];
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 220u)));
    c.f[13] = c.f[12];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7930u); c.f[15] = c.f[14];  if (depth < kMaxDepth) unit_0073(c, 126u, depth + 1u); else { c.pc = 0x002CCCD0u; return; } if (c.pc != 0x004E7930u) [[unlikely]] return; }
L_004E7930:
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[4], 0u + 92u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 96u), 0u);
    st32((c.r[2].w[0] + 100u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E794Cu); st32((c.r[2].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004E794Cu) [[unlikely]] return; }
L_004E794C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { st32((c.r[29].w[0] + 176u), c.r[18].w[0]);  goto L_004E7968; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7960u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006D(c, 173u, depth + 1u); else { c.pc = 0x002B5490u; return; } if (c.pc != 0x004E7960u) [[unlikely]] return; }
L_004E7960:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 176u), c.r[18].w[0]);
    c.budget -= 2;
L_004E7968:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004E7988; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7978u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004E7978u) [[unlikely]] return; }
L_004E7978:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7988u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004E7988u) [[unlikely]] return; }
L_004E7988:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[29].w[0] + 176u)));
    c.f[0] = ld32((c.r[2].w[0] + 18104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], 0u + 56u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[6].w[0] + 68u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 18108u));
    st32((c.r[6].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 18112u));
    st32((c.r[6].w[0] + 76u), c.f[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E79C8u); st32((c.r[6].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004E79C8u) [[unlikely]] return; }
L_004E79C8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { st32((c.r[29].w[0] + 172u), c.r[18].w[0]);  goto L_004E79E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E79DCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 404u, depth + 1u); else { c.pc = 0x0031B9B0u; return; } if (c.pc != 0x004E79DCu) [[unlikely]] return; }
L_004E79DC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 172u), c.r[18].w[0]);
    c.budget -= 2;
L_004E79E4:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 172u)));  goto L_004E7A08; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E79F4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004E79F4u) [[unlikely]] return; }
L_004E79F4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7A04u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004E7A04u) [[unlikely]] return; }
L_004E7A04:
    set32(c.r[4], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 1;
L_004E7A08:
    set32(c.r[2], c.r[21].w[0] << 2);
    set32(c.r[20], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[3], 0u - 15u);
    c.r[2].d[0] = ld16((c.r[4].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st16((c.r[4].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7A2Cu); set32(c.r[4], ld32((c.r[20].w[0] + 12u)));  if (depth < kMaxDepth) unit_0030(c, 97u, depth + 1u); else { c.pc = 0x001C13C0u; return; } if (c.pc != 0x004E7A2Cu) [[unlikely]] return; }
L_004E7A2C:
    set32(c.r[19], ld32((c.r[2].w[0])));
    set32(c.r[18], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[22], ld32((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[22].d[0] != 0ull) { set32(c.r[18], ld32((c.r[22].w[0] + 8u)));  goto L_004E7AD4; }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7A50u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004E7A50u) [[unlikely]] return; }
L_004E7A50:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[18].w[0] + 42u));  goto L_004E7A64; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7A60u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x004E7A60u) [[unlikely]] return; }
L_004E7A60:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 42u));
    c.budget -= 1;
L_004E7A64:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[22].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004E7A88; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[18].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004E7AC8; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004E7AC8; } }
L_004E7A88:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 36u)));  goto L_004E7AB0; }
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 36u)));  goto L_004E7ACC; }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004E7AC8; } }
L_004E7AB0:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004E7AC8; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[18].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_004E7AC8:
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 1;
L_004E7ACC:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[22].w[0] + 8u)));
    c.budget -= 2;
L_004E7AD4:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[19].d[0]) { set32(c.r[5], ld32((c.r[29].w[0] + 172u)));  goto L_004E7B40; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[22].w[0] + 8u), c.r[19].w[0]);  goto L_004E7B1C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7AECu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004E7AECu) [[unlikely]] return; }
L_004E7AEC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7AFCu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004E7AFCu) [[unlikely]] return; }
L_004E7AFC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E7B18; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7B18u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004E7B18u) [[unlikely]] return; }
L_004E7B18:
    st32((c.r[22].w[0] + 8u), c.r[19].w[0]);
    c.budget -= 1;
L_004E7B1C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_004E7B3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7B2Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004E7B2Cu) [[unlikely]] return; }
L_004E7B2C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7B3Cu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004E7B3Cu) [[unlikely]] return; }
L_004E7B3C:
    set32(c.r[5], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 1;
L_004E7B40:
    set32(c.r[18], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7B4Cu); set32(c.r[4], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x004E7B4Cu) [[unlikely]] return; }
L_004E7B4C:
    set32(c.r[4], c.r[18].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7B58u); set32(c.r[5], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004E7B58u) [[unlikely]] return; }
L_004E7B58:
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7B64u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004E7B64u) [[unlikely]] return; }
L_004E7B64:
    set32(c.r[5], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[18], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7B74u); set32(c.r[4], c.r[29].w[0] + 164u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x004E7B74u) [[unlikely]] return; }
L_004E7B74:
    set32(c.r[4], c.r[18].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7B80u); set32(c.r[5], c.r[29].w[0] + 164u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004E7B80u) [[unlikely]] return; }
L_004E7B80:
    set32(c.r[4], c.r[29].w[0] + 164u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7B8Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004E7B8Cu) [[unlikely]] return; }
L_004E7B8C:
    set32(c.r[18], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7B9Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x004E7B9Cu) [[unlikely]] return; }
L_004E7B9C:
    set32(c.r[4], c.r[18].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7BA8u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004E7BA8u) [[unlikely]] return; }
L_004E7BA8:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7BB4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004E7BB4u) [[unlikely]] return; }
L_004E7BB4:
    set32(c.r[5], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[18], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7BC4u); set32(c.r[4], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x004E7BC4u) [[unlikely]] return; }
L_004E7BC4:
    set32(c.r[4], c.r[18].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7BD0u); set32(c.r[5], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004E7BD0u) [[unlikely]] return; }
L_004E7BD0:
    set32(c.r[4], c.r[29].w[0] + 156u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7BDCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004E7BDCu) [[unlikely]] return; }
L_004E7BDC:
    set32(c.r[4], ld32((c.r[29].w[0] + 180u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7BECu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0060(c, 582u, depth + 1u); else { c.pc = 0x00283C30u; return; } if (c.pc != 0x004E7BECu) [[unlikely]] return; }
L_004E7BEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7BF4u); set32(c.r[4], ld32((c.r[29].w[0] + 180u)));  if (depth < kMaxDepth) unit_0060(c, 529u, depth + 1u); else { c.pc = 0x002836E0u; return; } if (c.pc != 0x004E7BF4u) [[unlikely]] return; }
L_004E7BF4:
    set32(c.r[18], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 4;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[18], ld32((c.r[20].w[0] + 96u)));  goto L_004E7C68; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[29].w[0] + 180u)));  goto L_004E7C44; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7C14u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004E7C14u) [[unlikely]] return; }
L_004E7C14:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7C24u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004E7C24u) [[unlikely]] return; }
L_004E7C24:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E7C40; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7C40u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004E7C40u) [[unlikely]] return; }
L_004E7C40:
    set32(c.r[18], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 1;
L_004E7C44:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[20].w[0] + 40u), c.r[18].w[0]);  if (t) { goto L_004E7C64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7C54u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004E7C54u) [[unlikely]] return; }
L_004E7C54:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7C64u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004E7C64u) [[unlikely]] return; }
L_004E7C64:
    set32(c.r[18], ld32((c.r[20].w[0] + 96u)));
    c.budget -= 1;
L_004E7C68:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[18], ld32((c.r[20].w[0] + 68u)));  goto L_004E7CD8; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[29].w[0] + 176u)));  goto L_004E7CB4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7C84u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004E7C84u) [[unlikely]] return; }
L_004E7C84:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7C94u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004E7C94u) [[unlikely]] return; }
L_004E7C94:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E7CB0; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7CB0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004E7CB0u) [[unlikely]] return; }
L_004E7CB0:
    set32(c.r[18], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 1;
L_004E7CB4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[20].w[0] + 96u), c.r[18].w[0]);  if (t) { goto L_004E7CD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7CC4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004E7CC4u) [[unlikely]] return; }
L_004E7CC4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7CD4u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004E7CD4u) [[unlikely]] return; }
L_004E7CD4:
    set32(c.r[18], ld32((c.r[20].w[0] + 68u)));
    c.budget -= 1;
L_004E7CD8:
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[18], ld32((c.r[29].w[0] + 172u)));  goto L_004E7D48; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[29].w[0] + 172u)));  goto L_004E7D24; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7CF4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004E7CF4u) [[unlikely]] return; }
L_004E7CF4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7D04u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004E7D04u) [[unlikely]] return; }
L_004E7D04:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E7D20; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7D20u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004E7D20u) [[unlikely]] return; }
L_004E7D20:
    set32(c.r[18], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 1;
L_004E7D24:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[20].w[0] + 68u), c.r[18].w[0]);  if (t) { goto L_004E7D44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7D34u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004E7D34u) [[unlikely]] return; }
L_004E7D34:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7D44u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004E7D44u) [[unlikely]] return; }
L_004E7D44:
    set32(c.r[18], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 1;
L_004E7D48:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[29].w[0] + 176u)));  goto L_004E7D88; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7D58u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004E7D58u) [[unlikely]] return; }
L_004E7D58:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7D68u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004E7D68u) [[unlikely]] return; }
L_004E7D68:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E7D84; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7D84u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004E7D84u) [[unlikely]] return; }
L_004E7D84:
    set32(c.r[18], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 1;
L_004E7D88:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[29].w[0] + 180u)));  goto L_004E7DC8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7D98u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004E7D98u) [[unlikely]] return; }
L_004E7D98:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7DA8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004E7DA8u) [[unlikely]] return; }
L_004E7DA8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E7DC4; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7DC4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004E7DC4u) [[unlikely]] return; }
L_004E7DC4:
    set32(c.r[18], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 1;
L_004E7DC8:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_004E7E08; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7DD8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004E7DD8u) [[unlikely]] return; }
L_004E7DD8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7DE8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004E7DE8u) [[unlikely]] return; }
L_004E7DE8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E7E04; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7E04u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004E7E04u) [[unlikely]] return; }
L_004E7E04:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_004E7E08:
    c.r[2].d[0] = c.r[21].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 256u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004E7830u | kUnwind; return; } goto L_004E7830; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26056u)));
    set32(c.r[16], ld32((c.r[29].w[0] + 184u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; st8((c.r[17].w[0] + 124u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004E7E60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7E34u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004E7E34u) [[unlikely]] return; }
L_004E7E34:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7E44u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004E7E44u) [[unlikely]] return; }
L_004E7E44:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 188u)));  goto L_004E7E64; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7E60u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004E7E60u) [[unlikely]] return; }
L_004E7E60:
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    c.budget -= 1;
L_004E7E64:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 144u)));  goto L_004E7EAC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7E74u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004E7E74u) [[unlikely]] return; }
L_004E7E74:
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7E88u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004E7E88u) [[unlikely]] return; }
L_004E7E88:
    set32(c.r[4], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E7EA8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7EA8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004E7EA8u) [[unlikely]] return; }
L_004E7EA8:
    set32(c.r[4], ld32((c.r[29].w[0] + 144u)));
    c.budget -= 1;
L_004E7EAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7EB4u);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004E7EB4u) [[unlikely]] return; }
L_004E7EB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_004E7EE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_00FA(c, 1u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 23696u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 8u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E7F3C; } }
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[18].w[0] << 2);
    c.budget -= 2;
L_004E7F20:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7F2Cu); set32(c.r[4], ld32((c.r[2].w[0] + 12u)));  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x004E7F2Cu) [[unlikely]] return; }
L_004E7F2C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004E7F20u | kUnwind; return; } goto L_004E7F20; }
L_004E7F3C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[4], c.r[17].w[0] + 96u);
    set32(c.r[5], c.r[5].w[0] - 7344u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 7u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7F58u); st8((c.r[17].w[0] + 8u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00A5(c, 157u, depth + 1u); else { c.pc = 0x00397E80u; return; } if (c.pc != 0x004E7F58u) [[unlikely]] return; }
L_004E7F58:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    set32(c.r[4], c.r[17].w[0] + 68u);
    set32(c.r[5], c.r[5].w[0] - 4096u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7F70u); set32(c.r[7], 0u + 7u);  if (depth < kMaxDepth) unit_00A5(c, 157u, depth + 1u); else { c.pc = 0x00397E80u; return; } if (c.pc != 0x004E7F70u) [[unlikely]] return; }
L_004E7F70:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[4], c.r[17].w[0] + 40u);
    set32(c.r[5], c.r[5].w[0] - 6864u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7F88u); set32(c.r[7], 0u + 7u);  if (depth < kMaxDepth) unit_00A5(c, 157u, depth + 1u); else { c.pc = 0x00397E80u; return; } if (c.pc != 0x004E7F88u) [[unlikely]] return; }
L_004E7F88:
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004E7FD4; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004E7FD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7FA8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004E7FA8u) [[unlikely]] return; }
L_004E7FA8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7FB8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004E7FB8u) [[unlikely]] return; }
L_004E7FB8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004E7FD4; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004E7FD4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004E7FD4u) [[unlikely]] return; }
L_004E7FD4:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_004E7FEC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 22384u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 4;
L_004E7FEC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  [[clang::musttail]] return unit_00FA(c, 2u, depth); }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004E8000u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004E8000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_00FA(c, 1u, depth);
}

}
