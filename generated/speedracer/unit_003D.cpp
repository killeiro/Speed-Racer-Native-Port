#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_003D[4096] = {
    1, 2, 0, 0, 3, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0,
    0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0,
    23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0,
    40, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0,
    44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0,
    0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0,
    61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0,
    67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0,
    71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0,
    0, 0, 75, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0,
    0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0,
    0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0,
    0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0,
    0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106,
    0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0,
    110, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116,
    0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0,
    0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0,
    0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0,
    0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0,
    0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0,
    0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 151, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0,
    0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160,
    0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 165, 0,
    0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0,
    0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0,
    190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194,
    0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0,
    199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0,
    0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222,
    0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0,
    231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0,
    0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 246, 0, 0, 0, 0, 0, 247, 0,
    0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0,
    0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0,
    263, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0,
    268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 276,
    0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0,
    0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0,
    0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 293,
    0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 298,
    0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0,
    0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 0,
    0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0,
    0, 0, 323, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0,
    0, 0, 0, 0, 0, 0, 328, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0,
    0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 337, 0, 0, 0, 338, 0, 0,
    0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0,
    353, 0, 0, 354, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0,
    359, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0,
    0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0,
    367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0,
    0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 373,
    0, 0, 374, 0, 0, 375, 0, 0, 376, 0, 0, 377, 0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0,
    0, 0, 0, 0, 381, 0, 0, 382, 0, 0, 383, 0, 0, 384, 0, 0, 385, 0, 0, 386, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0,
    396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399,
    0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 402, 0, 0, 403, 0, 0, 404, 0, 0, 405, 0, 0,
    406, 0, 0, 407, 0, 0, 408, 0, 0, 409, 0, 0, 410, 0, 0, 411, 0, 0, 412, 0, 0, 413, 0, 0, 414, 0, 0, 415, 0, 0, 416, 0,
    0, 417, 0, 0, 418, 0, 0, 419, 0, 0, 420, 0, 0, 421, 0, 0, 422, 0, 0, 423, 0, 0, 424, 0, 0, 425, 0, 0, 426, 0, 0, 427,
    0, 0, 428, 0, 0, 429, 0, 0, 430, 0, 0, 431, 0, 0, 432, 0, 0, 433, 0, 0, 434, 0, 0, 435, 0, 0, 436, 0, 0, 437, 0, 0,
    438, 0, 0, 439, 0, 0, 440, 0, 0, 441, 0, 0, 442, 0, 0, 443, 0, 0, 444, 0, 0, 445, 0, 0, 446, 0, 0, 447, 0, 0, 448, 0,
    0, 449, 0, 0, 450, 0, 0, 451, 0, 452, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 455, 0, 0,
    0, 0, 456, 0, 0, 0, 0, 457, 0, 0, 0, 0, 458, 0, 0, 0, 0, 459, 0, 0, 0, 0, 460, 0, 0, 0, 0, 461, 0, 0, 0, 0,
    462, 0, 0, 0, 0, 463, 0, 0, 0, 0, 464, 0, 0, 0, 0, 465, 0, 0, 0, 0, 466, 0, 0, 0, 0, 467, 0, 0, 0, 0, 468, 0,
    0, 0, 0, 469, 0, 0, 0, 0, 470, 0, 0, 0, 0, 471, 0, 0, 0, 0, 472, 0, 0, 0, 0, 473, 0, 0, 0, 0, 474, 0, 0, 0,
    0, 475, 0, 0, 0, 0, 476, 0, 0, 0, 0, 477, 0, 0, 0, 0, 478, 0, 0, 0, 0, 479, 0, 0, 0, 0, 480, 0, 0, 0, 0, 481,
    0, 0, 0, 0, 482, 0, 0, 0, 0, 483, 0, 0, 0, 0, 484, 0, 0, 0, 0, 485, 0, 0, 0, 0, 486, 0, 0, 0, 0, 487, 0, 0,
    0, 0, 488, 0, 0, 0, 0, 489, 0, 0, 0, 0, 490, 0, 0, 0, 0, 491, 0, 0, 0, 0, 492, 0, 0, 0, 0, 493, 0, 0, 0, 0,
    494, 0, 0, 0, 0, 495, 0, 0, 0, 0, 496, 0, 0, 0, 0, 497, 0, 0, 0, 0, 498, 0, 0, 0, 0, 499, 0, 0, 0, 0, 500, 0,
    0, 0, 0, 501, 0, 0, 0, 0, 502, 0, 0, 0, 0, 503, 0, 0, 0, 0, 504, 0, 505, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 510, 0, 0, 511, 0, 0, 0, 0, 512,
    0, 0, 0, 513, 0, 0, 0, 0, 514, 0, 515, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 518,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 524, 0, 0, 0, 0, 525, 0, 526,
    0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 530, 0, 0, 0, 0, 531, 0, 0, 0,
    0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 534, 0, 0, 535, 0, 536, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 539, 0, 0, 540, 0, 0, 0, 0, 541, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 543, 0,
    0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0,
    0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 552,
    0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 556, 0, 0,
    0, 0, 557, 0, 0, 0, 558, 0, 0, 0, 0, 559, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 562, 0, 0, 0,
};

void unit_003D(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001F4000;
    case 2u: goto L_001F4004;
    case 3u: goto L_001F4010;
    case 4u: goto L_001F4014;
    case 5u: goto L_001F4030;
    case 6u: goto L_001F4040;
    case 7u: goto L_001F4050;
    case 8u: goto L_001F4064;
    case 9u: goto L_001F4070;
    case 10u: goto L_001F4084;
    case 11u: goto L_001F40A0;
    case 12u: goto L_001F40F8;
    case 13u: goto L_001F4154;
    case 14u: goto L_001F4160;
    case 15u: goto L_001F419C;
    case 16u: goto L_001F41E0;
    case 17u: goto L_001F42A0;
    case 18u: goto L_001F42B0;
    case 19u: goto L_001F42C0;
    case 20u: goto L_001F42D0;
    case 21u: goto L_001F42E0;
    case 22u: goto L_001F42F0;
    case 23u: goto L_001F4300;
    case 24u: goto L_001F4310;
    case 25u: goto L_001F4328;
    case 26u: goto L_001F4338;
    case 27u: goto L_001F4370;
    case 28u: goto L_001F43C8;
    case 29u: goto L_001F43DC;
    case 30u: goto L_001F4424;
    case 31u: goto L_001F4440;
    case 32u: goto L_001F4460;
    case 33u: goto L_001F4488;
    case 34u: goto L_001F4498;
    case 35u: goto L_001F44C0;
    case 36u: goto L_001F44F0;
    case 37u: goto L_001F4524;
    case 38u: goto L_001F454C;
    case 39u: goto L_001F4560;
    case 40u: goto L_001F4580;
    case 41u: goto L_001F45A4;
    case 42u: goto L_001F45D0;
    case 43u: goto L_001F45F0;
    case 44u: goto L_001F4600;
    case 45u: goto L_001F4634;
    case 46u: goto L_001F4668;
    case 47u: goto L_001F469C;
    case 48u: goto L_001F46AC;
    case 49u: goto L_001F46E0;
    case 50u: goto L_001F4714;
    case 51u: goto L_001F4760;
    case 52u: goto L_001F4774;
    case 53u: goto L_001F47B0;
    case 54u: goto L_001F47C4;
    case 55u: goto L_001F47D8;
    case 56u: goto L_001F4834;
    case 57u: goto L_001F4850;
    case 58u: goto L_001F4878;
    case 59u: goto L_001F4898;
    case 60u: goto L_001F48E0;
    case 61u: goto L_001F4900;
    case 62u: goto L_001F4914;
    case 63u: goto L_001F492C;
    case 64u: goto L_001F4940;
    case 65u: goto L_001F4954;
    case 66u: goto L_001F496C;
    case 67u: goto L_001F4980;
    case 68u: goto L_001F499C;
    case 69u: goto L_001F49C0;
    case 70u: goto L_001F49DC;
    case 71u: goto L_001F4A00;
    case 72u: goto L_001F4A38;
    case 73u: goto L_001F4A5C;
    case 74u: goto L_001F4A6C;
    case 75u: goto L_001F4A88;
    case 76u: goto L_001F4A94;
    case 77u: goto L_001F4AD4;
    case 78u: goto L_001F4AF0;
    case 79u: goto L_001F4B0C;
    case 80u: goto L_001F4B24;
    case 81u: goto L_001F4B34;
    case 82u: goto L_001F4B60;
    case 83u: goto L_001F4B70;
    case 84u: goto L_001F4BA8;
    case 85u: goto L_001F4BC0;
    case 86u: goto L_001F4BF4;
    case 87u: goto L_001F4C08;
    case 88u: goto L_001F4C48;
    case 89u: goto L_001F4C70;
    case 90u: goto L_001F4CB4;
    case 91u: goto L_001F4CC8;
    case 92u: goto L_001F4D08;
    case 93u: goto L_001F4D30;
    case 94u: goto L_001F4D5C;
    case 95u: goto L_001F4D6C;
    case 96u: goto L_001F4D88;
    case 97u: goto L_001F4D9C;
    case 98u: goto L_001F4DAC;
    case 99u: goto L_001F4DB8;
    case 100u: goto L_001F4DD4;
    case 101u: goto L_001F4DF0;
    case 102u: goto L_001F4E08;
    case 103u: goto L_001F4E38;
    case 104u: goto L_001F4E50;
    case 105u: goto L_001F4E70;
    case 106u: goto L_001F4EFC;
    case 107u: goto L_001F4F10;
    case 108u: goto L_001F4F20;
    case 109u: goto L_001F4F70;
    case 110u: goto L_001F4F80;
    case 111u: goto L_001F4F90;
    case 112u: goto L_001F4FA4;
    case 113u: goto L_001F4FB0;
    case 114u: goto L_001F4FC4;
    case 115u: goto L_001F4FE0;
    case 116u: goto L_001F4FFC;
    case 117u: goto L_001F501C;
    case 118u: goto L_001F5030;
    case 119u: goto L_001F5050;
    case 120u: goto L_001F505C;
    case 121u: goto L_001F5070;
    case 122u: goto L_001F5084;
    case 123u: goto L_001F508C;
    case 124u: goto L_001F50B4;
    case 125u: goto L_001F50C4;
    case 126u: goto L_001F50EC;
    case 127u: goto L_001F5110;
    case 128u: goto L_001F512C;
    case 129u: goto L_001F513C;
    case 130u: goto L_001F5150;
    case 131u: goto L_001F516C;
    case 132u: goto L_001F518C;
    case 133u: goto L_001F51B0;
    case 134u: goto L_001F51D0;
    case 135u: goto L_001F51D8;
    case 136u: goto L_001F51F8;
    case 137u: goto L_001F5208;
    case 138u: goto L_001F5224;
    case 139u: goto L_001F5238;
    case 140u: goto L_001F5248;
    case 141u: goto L_001F5260;
    case 142u: goto L_001F5294;
    case 143u: goto L_001F52C0;
    case 144u: goto L_001F52D0;
    case 145u: goto L_001F52DC;
    case 146u: goto L_001F52F4;
    case 147u: goto L_001F531C;
    case 148u: goto L_001F5378;
    case 149u: goto L_001F5384;
    case 150u: goto L_001F53C0;
    case 151u: goto L_001F5404;
    case 152u: goto L_001F5410;
    case 153u: goto L_001F5418;
    case 154u: goto L_001F5430;
    case 155u: goto L_001F5474;
    case 156u: goto L_001F5494;
    case 157u: goto L_001F54CC;
    case 158u: goto L_001F54D4;
    case 159u: goto L_001F54EC;
    case 160u: goto L_001F54FC;
    case 161u: goto L_001F5510;
    case 162u: goto L_001F5520;
    case 163u: goto L_001F552C;
    case 164u: goto L_001F556C;
    case 165u: goto L_001F5578;
    case 166u: goto L_001F558C;
    case 167u: goto L_001F55B0;
    case 168u: goto L_001F55B8;
    case 169u: goto L_001F55D0;
    case 170u: goto L_001F55DC;
    case 171u: goto L_001F5610;
    case 172u: goto L_001F56BC;
    case 173u: goto L_001F56F0;
    case 174u: goto L_001F5734;
    case 175u: goto L_001F5750;
    case 176u: goto L_001F5770;
    case 177u: goto L_001F5790;
    case 178u: goto L_001F57B0;
    case 179u: goto L_001F57D0;
    case 180u: goto L_001F57E0;
    case 181u: goto L_001F5818;
    case 182u: goto L_001F5828;
    case 183u: goto L_001F5844;
    case 184u: goto L_001F5858;
    case 185u: goto L_001F5868;
    case 186u: goto L_001F5890;
    case 187u: goto L_001F58B0;
    case 188u: goto L_001F58D8;
    case 189u: goto L_001F58E8;
    case 190u: goto L_001F5900;
    case 191u: goto L_001F5934;
    case 192u: goto L_001F5944;
    case 193u: goto L_001F5960;
    case 194u: goto L_001F597C;
    case 195u: goto L_001F59A0;
    case 196u: goto L_001F59C8;
    case 197u: goto L_001F59D8;
    case 198u: goto L_001F59F0;
    case 199u: goto L_001F5A00;
    case 200u: goto L_001F5A10;
    case 201u: goto L_001F5A2C;
    case 202u: goto L_001F5A3C;
    case 203u: goto L_001F5A5C;
    case 204u: goto L_001F5A6C;
    case 205u: goto L_001F5AA4;
    case 206u: goto L_001F5AE0;
    case 207u: goto L_001F5B24;
    case 208u: goto L_001F5B40;
    case 209u: goto L_001F5B60;
    case 210u: goto L_001F5B94;
    case 211u: goto L_001F5BB0;
    case 212u: goto L_001F5BD0;
    case 213u: goto L_001F5C04;
    case 214u: goto L_001F5C14;
    case 215u: goto L_001F5C30;
    case 216u: goto L_001F5C4C;
    case 217u: goto L_001F5C70;
    case 218u: goto L_001F5C8C;
    case 219u: goto L_001F5CA0;
    case 220u: goto L_001F5CC0;
    case 221u: goto L_001F5CEC;
    case 222u: goto L_001F5CFC;
    case 223u: goto L_001F5D1C;
    case 224u: goto L_001F5D2C;
    case 225u: goto L_001F5D64;
    case 226u: goto L_001F5D8C;
    case 227u: goto L_001F5DA0;
    case 228u: goto L_001F5DC0;
    case 229u: goto L_001F5DD0;
    case 230u: goto L_001F5DEC;
    case 231u: goto L_001F5E00;
    case 232u: goto L_001F5E10;
    case 233u: goto L_001F5E40;
    case 234u: goto L_001F5E88;
    case 235u: goto L_001F5EE0;
    case 236u: goto L_001F5F2C;
    case 237u: goto L_001F5F88;
    case 238u: goto L_001F5F98;
    case 239u: goto L_001F5FD8;
    case 240u: goto L_001F601C;
    case 241u: goto L_001F6028;
    case 242u: goto L_001F6030;
    case 243u: goto L_001F6074;
    case 244u: goto L_001F6094;
    case 245u: goto L_001F60D8;
    case 246u: goto L_001F60E0;
    case 247u: goto L_001F60F8;
    case 248u: goto L_001F6108;
    case 249u: goto L_001F611C;
    case 250u: goto L_001F612C;
    case 251u: goto L_001F6138;
    case 252u: goto L_001F6178;
    case 253u: goto L_001F6188;
    case 254u: goto L_001F619C;
    case 255u: goto L_001F61C4;
    case 256u: goto L_001F61CC;
    case 257u: goto L_001F61E4;
    case 258u: goto L_001F61F0;
    case 259u: goto L_001F6224;
    case 260u: goto L_001F62F0;
    case 261u: goto L_001F6344;
    case 262u: goto L_001F6360;
    case 263u: goto L_001F6380;
    case 264u: goto L_001F63A4;
    case 265u: goto L_001F63B8;
    case 266u: goto L_001F63CC;
    case 267u: goto L_001F63E0;
    case 268u: goto L_001F6400;
    case 269u: goto L_001F6450;
    case 270u: goto L_001F6458;
    case 271u: goto L_001F64C0;
    case 272u: goto L_001F6514;
    case 273u: goto L_001F6528;
    case 274u: goto L_001F6538;
    case 275u: goto L_001F655C;
    case 276u: goto L_001F657C;
    case 277u: goto L_001F658C;
    case 278u: goto L_001F65A8;
    case 279u: goto L_001F65BC;
    case 280u: goto L_001F65CC;
    case 281u: goto L_001F65E0;
    case 282u: goto L_001F65F4;
    case 283u: goto L_001F6614;
    case 284u: goto L_001F662C;
    case 285u: goto L_001F6644;
    case 286u: goto L_001F6664;
    case 287u: goto L_001F6674;
    case 288u: goto L_001F6690;
    case 289u: goto L_001F66A4;
    case 290u: goto L_001F66B4;
    case 291u: goto L_001F66C8;
    case 292u: goto L_001F66DC;
    case 293u: goto L_001F66FC;
    case 294u: goto L_001F6718;
    case 295u: goto L_001F672C;
    case 296u: goto L_001F6740;
    case 297u: goto L_001F6760;
    case 298u: goto L_001F677C;
    case 299u: goto L_001F678C;
    case 300u: goto L_001F67A8;
    case 301u: goto L_001F67BC;
    case 302u: goto L_001F67CC;
    case 303u: goto L_001F67E0;
    case 304u: goto L_001F67F0;
    case 305u: goto L_001F680C;
    case 306u: goto L_001F6820;
    case 307u: goto L_001F6834;
    case 308u: goto L_001F6844;
    case 309u: goto L_001F6858;
    case 310u: goto L_001F686C;
    case 311u: goto L_001F688C;
    case 312u: goto L_001F68A0;
    case 313u: goto L_001F68B0;
    case 314u: goto L_001F68CC;
    case 315u: goto L_001F68F0;
    case 316u: goto L_001F693C;
    case 317u: goto L_001F6950;
    case 318u: goto L_001F69B4;
    case 319u: goto L_001F69BC;
    case 320u: goto L_001F69D4;
    case 321u: goto L_001F69E4;
    case 322u: goto L_001F69F8;
    case 323u: goto L_001F6A08;
    case 324u: goto L_001F6A14;
    case 325u: goto L_001F6A54;
    case 326u: goto L_001F6A60;
    case 327u: goto L_001F6A74;
    case 328u: goto L_001F6A98;
    case 329u: goto L_001F6AA0;
    case 330u: goto L_001F6AB8;
    case 331u: goto L_001F6AC4;
    case 332u: goto L_001F6AF8;
    case 333u: goto L_001F6B1C;
    case 334u: goto L_001F6B28;
    case 335u: goto L_001F6B38;
    case 336u: goto L_001F6B58;
    case 337u: goto L_001F6B64;
    case 338u: goto L_001F6B74;
    case 339u: goto L_001F6B88;
    case 340u: goto L_001F6B9C;
    case 341u: goto L_001F6BAC;
    case 342u: goto L_001F6BCC;
    case 343u: goto L_001F6BE0;
    case 344u: goto L_001F6BF0;
    case 345u: goto L_001F6C18;
    case 346u: goto L_001F6C50;
    case 347u: goto L_001F6C70;
    case 348u: goto L_001F6CA0;
    case 349u: goto L_001F6CF4;
    case 350u: goto L_001F6D34;
    case 351u: goto L_001F6D54;
    case 352u: goto L_001F6D64;
    case 353u: goto L_001F6D80;
    case 354u: goto L_001F6D8C;
    case 355u: goto L_001F6DA8;
    case 356u: goto L_001F6DD0;
    case 357u: goto L_001F6DE0;
    case 358u: goto L_001F6DF0;
    case 359u: goto L_001F6E00;
    case 360u: goto L_001F6E10;
    case 361u: goto L_001F6E20;
    case 362u: goto L_001F6E4C;
    case 363u: goto L_001F6E70;
    case 364u: goto L_001F6E94;
    case 365u: goto L_001F6EB0;
    case 366u: goto L_001F6EDC;
    case 367u: goto L_001F6F00;
    case 368u: goto L_001F6F2C;
    case 369u: goto L_001F6F50;
    case 370u: goto L_001F6F74;
    case 371u: goto L_001F6F90;
    case 372u: goto L_001F7060;
    case 373u: goto L_001F707C;
    case 374u: goto L_001F7088;
    case 375u: goto L_001F7094;
    case 376u: goto L_001F70A0;
    case 377u: goto L_001F70AC;
    case 378u: goto L_001F70B8;
    case 379u: goto L_001F70D0;
    case 380u: goto L_001F70EC;
    case 381u: goto L_001F7110;
    case 382u: goto L_001F711C;
    case 383u: goto L_001F7128;
    case 384u: goto L_001F7134;
    case 385u: goto L_001F7140;
    case 386u: goto L_001F714C;
    case 387u: goto L_001F7160;
    case 388u: goto L_001F71A0;
    case 389u: goto L_001F71B0;
    case 390u: goto L_001F71C0;
    case 391u: goto L_001F71D0;
    case 392u: goto L_001F71E0;
    case 393u: goto L_001F720C;
    case 394u: goto L_001F7230;
    case 395u: goto L_001F725C;
    case 396u: goto L_001F7280;
    case 397u: goto L_001F72AC;
    case 398u: goto L_001F72D0;
    case 399u: goto L_001F72FC;
    case 400u: goto L_001F7320;
    case 401u: goto L_001F7344;
    case 402u: goto L_001F7350;
    case 403u: goto L_001F735C;
    case 404u: goto L_001F7368;
    case 405u: goto L_001F7374;
    case 406u: goto L_001F7380;
    case 407u: goto L_001F738C;
    case 408u: goto L_001F7398;
    case 409u: goto L_001F73A4;
    case 410u: goto L_001F73B0;
    case 411u: goto L_001F73BC;
    case 412u: goto L_001F73C8;
    case 413u: goto L_001F73D4;
    case 414u: goto L_001F73E0;
    case 415u: goto L_001F73EC;
    case 416u: goto L_001F73F8;
    case 417u: goto L_001F7404;
    case 418u: goto L_001F7410;
    case 419u: goto L_001F741C;
    case 420u: goto L_001F7428;
    case 421u: goto L_001F7434;
    case 422u: goto L_001F7440;
    case 423u: goto L_001F744C;
    case 424u: goto L_001F7458;
    case 425u: goto L_001F7464;
    case 426u: goto L_001F7470;
    case 427u: goto L_001F747C;
    case 428u: goto L_001F7488;
    case 429u: goto L_001F7494;
    case 430u: goto L_001F74A0;
    case 431u: goto L_001F74AC;
    case 432u: goto L_001F74B8;
    case 433u: goto L_001F74C4;
    case 434u: goto L_001F74D0;
    case 435u: goto L_001F74DC;
    case 436u: goto L_001F74E8;
    case 437u: goto L_001F74F4;
    case 438u: goto L_001F7500;
    case 439u: goto L_001F750C;
    case 440u: goto L_001F7518;
    case 441u: goto L_001F7524;
    case 442u: goto L_001F7530;
    case 443u: goto L_001F753C;
    case 444u: goto L_001F7548;
    case 445u: goto L_001F7554;
    case 446u: goto L_001F7560;
    case 447u: goto L_001F756C;
    case 448u: goto L_001F7578;
    case 449u: goto L_001F7584;
    case 450u: goto L_001F7590;
    case 451u: goto L_001F759C;
    case 452u: goto L_001F75A4;
    case 453u: goto L_001F75B0;
    case 454u: goto L_001F75E0;
    case 455u: goto L_001F75F4;
    case 456u: goto L_001F7608;
    case 457u: goto L_001F761C;
    case 458u: goto L_001F7630;
    case 459u: goto L_001F7644;
    case 460u: goto L_001F7658;
    case 461u: goto L_001F766C;
    case 462u: goto L_001F7680;
    case 463u: goto L_001F7694;
    case 464u: goto L_001F76A8;
    case 465u: goto L_001F76BC;
    case 466u: goto L_001F76D0;
    case 467u: goto L_001F76E4;
    case 468u: goto L_001F76F8;
    case 469u: goto L_001F770C;
    case 470u: goto L_001F7720;
    case 471u: goto L_001F7734;
    case 472u: goto L_001F7748;
    case 473u: goto L_001F775C;
    case 474u: goto L_001F7770;
    case 475u: goto L_001F7784;
    case 476u: goto L_001F7798;
    case 477u: goto L_001F77AC;
    case 478u: goto L_001F77C0;
    case 479u: goto L_001F77D4;
    case 480u: goto L_001F77E8;
    case 481u: goto L_001F77FC;
    case 482u: goto L_001F7810;
    case 483u: goto L_001F7824;
    case 484u: goto L_001F7838;
    case 485u: goto L_001F784C;
    case 486u: goto L_001F7860;
    case 487u: goto L_001F7874;
    case 488u: goto L_001F7888;
    case 489u: goto L_001F789C;
    case 490u: goto L_001F78B0;
    case 491u: goto L_001F78C4;
    case 492u: goto L_001F78D8;
    case 493u: goto L_001F78EC;
    case 494u: goto L_001F7900;
    case 495u: goto L_001F7914;
    case 496u: goto L_001F7928;
    case 497u: goto L_001F793C;
    case 498u: goto L_001F7950;
    case 499u: goto L_001F7964;
    case 500u: goto L_001F7978;
    case 501u: goto L_001F798C;
    case 502u: goto L_001F79A0;
    case 503u: goto L_001F79B4;
    case 504u: goto L_001F79C8;
    case 505u: goto L_001F79D0;
    case 506u: goto L_001F79E0;
    case 507u: goto L_001F7A14;
    case 508u: goto L_001F7A30;
    case 509u: goto L_001F7A40;
    case 510u: goto L_001F7A5C;
    case 511u: goto L_001F7A68;
    case 512u: goto L_001F7A7C;
    case 513u: goto L_001F7A8C;
    case 514u: goto L_001F7AA0;
    case 515u: goto L_001F7AA8;
    case 516u: goto L_001F7ABC;
    case 517u: goto L_001F7AE0;
    case 518u: goto L_001F7AFC;
    case 519u: goto L_001F7B34;
    case 520u: goto L_001F7B44;
    case 521u: goto L_001F7B80;
    case 522u: goto L_001F7BB0;
    case 523u: goto L_001F7BCC;
    case 524u: goto L_001F7BE0;
    case 525u: goto L_001F7BF4;
    case 526u: goto L_001F7BFC;
    case 527u: goto L_001F7C10;
    case 528u: goto L_001F7C30;
    case 529u: goto L_001F7C4C;
    case 530u: goto L_001F7C5C;
    case 531u: goto L_001F7C70;
    case 532u: goto L_001F7C90;
    case 533u: goto L_001F7CB4;
    case 534u: goto L_001F7CBC;
    case 535u: goto L_001F7CC8;
    case 536u: goto L_001F7CD0;
    case 537u: goto L_001F7CDC;
    case 538u: goto L_001F7D10;
    case 539u: goto L_001F7D2C;
    case 540u: goto L_001F7D38;
    case 541u: goto L_001F7D4C;
    case 542u: goto L_001F7D60;
    case 543u: goto L_001F7D78;
    case 544u: goto L_001F7D88;
    case 545u: goto L_001F7E00;
    case 546u: goto L_001F7E30;
    case 547u: goto L_001F7E4C;
    case 548u: goto L_001F7E70;
    case 549u: goto L_001F7E90;
    case 550u: goto L_001F7EBC;
    case 551u: goto L_001F7EE8;
    case 552u: goto L_001F7EFC;
    case 553u: goto L_001F7F18;
    case 554u: goto L_001F7F30;
    case 555u: goto L_001F7F64;
    case 556u: goto L_001F7F74;
    case 557u: goto L_001F7F88;
    case 558u: goto L_001F7F98;
    case 559u: goto L_001F7FAC;
    case 560u: goto L_001F7FBC;
    case 561u: goto L_001F7FE0;
    case 562u: goto L_001F7FF0;
    default: bad_entry(c, 0x001F4000u); return;
    }
L_001F4000:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001F4004:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4010u); set32(c.r[5], 0u + 368u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x001F4010u) [[unlikely]] return; }
L_001F4010:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001F4014:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F4030:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 14648u);  c.pc = t; return; }
L_001F4040:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F4050:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4064u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 509u, depth + 1u); else { c.pc = 0x001F7A40u; return; } if (c.pc != 0x001F4064u) [[unlikely]] return; }
L_001F4064:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4070u); set32(c.r[4], ld32((c.r[2].w[0] - 14648u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x001F4070u) [[unlikely]] return; }
L_001F4070:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4084u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x001F4084u) [[unlikely]] return; }
L_001F4084:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F40A0:
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
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001F41E0; } }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 14u));
    set32(c.r[4], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[2].d[0] = ld16((c.r[19].w[0] + 10u));  goto L_001F41E4; }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 10u));
    c.r[1].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[16], ld32((c.r[19].w[0] + 4u)));  goto L_001F4144; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_001F4128; } }
L_001F40F8:
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_001F4124; }
    st32((c.r[3].w[0]), 0u);
    c.r[2].d[0] = ld16((c.r[19].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[19].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 5;
L_001F4124:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_001F4128:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 10u));
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F40F8u | kUnwind; return; } goto L_001F40F8; }
    st16((c.r[19].w[0] + 10u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[16], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 2;
L_001F4144:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; st16((c.r[19].w[0] + 8u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_001F41D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4154u); c.r[4].d[0] = ld16((c.r[19].w[0] + 8u));  if (depth < kMaxDepth) unit_003D(c, 18u, depth + 1u); else { c.pc = 0x001F42B0u; return; } if (c.pc != 0x001F4154u) [[unlikely]] return; }
L_001F4154:
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001F4180; } }
L_001F4160:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[5], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + 1u);
    set32(c.r[4], c.r[16].w[0] + c.r[5].w[0]);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 8;
L_001F4180:
    c.r[5].d[0] = ld16((c.r[19].w[0] + 10u));
    c.r[2].d[0] = c.r[6].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[6].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F4160u | kUnwind; return; } goto L_001F4160; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[19].w[0] + 8u));  if (t) { goto L_001F41B8; } }
L_001F419C:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.r[2].d[0] = ld16((c.r[19].w[0] + 8u));
    c.budget -= 7;
L_001F41B8:
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[5].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F419Cu | kUnwind; return; } goto L_001F419C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001F41D8; } }
L_001F41D0:
    st32((c.r[19].w[0] + 4u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_001F41D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F41E0u);  if (depth < kMaxDepth) unit_003D(c, 17u, depth + 1u); else { c.pc = 0x001F42A0u; return; } if (c.pc != 0x001F41E0u) [[unlikely]] return; }
L_001F41E0:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 10u));
    c.budget -= 1;
L_001F41E4:
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_001F4214; }
    set32(c.r[2], c.r[18].w[0] + 1u);
    st16((c.r[19].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 4u)));  goto L_001F4268; }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001F4264; } }
L_001F4214:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 4u)));  goto L_001F4244; }
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F4264; } }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001F4264; } }
L_001F4244:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F4264; } }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[19].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001F4264:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_001F4268:
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
L_001F42A0:
    c.budget -= 2;
    { c.r[5].d[0] = 0ull + 0ull;  [[clang::musttail]] return unit_0047(c, 96u, depth); }
L_001F42B0:
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 3;
    { c.r[5].d[0] = 0ull + 0ull;  [[clang::musttail]] return unit_0047(c, 104u, depth); }
L_001F42C0:
    c.budget -= 2;
    {  goto L_001F7AE0; }
L_001F42D0:
    c.budget -= 2;
    {  goto L_001F7BB0; }
L_001F42E0:
    c.budget -= 2;
    {  goto L_001F7C30; }
L_001F42F0:
    c.budget -= 2;
    {  goto L_001F7C90; }
L_001F4300:
    c.budget -= 2;
    {  goto L_001F7D10; }
L_001F4310:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 368u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4328u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x001F4328u) [[unlikely]] return; }
L_001F4328:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001F4350; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4338u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 101u, depth + 1u); else { c.pc = 0x001F8D50u; return; } if (c.pc != 0x001F4338u) [[unlikely]] return; }
L_001F4338:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] - 15440u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 352u), 0u);
    st8((c.r[16].w[0] + 356u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_001F4350:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F4370:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F4440; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[17].w[0] + 260u);
    set32(c.r[2], c.r[2].w[0] - 14992u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_001F4404; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 15200u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[17].w[0] + 260u), c.r[2].w[0]);  if (t) { goto L_001F4404; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 15232u);
    st32((c.r[17].w[0] + 260u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[17].w[0] + 264u)));  if (t) { goto L_001F43DC; } }
L_001F43C8:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F43DCu); set32(c.r[4], c.r[17].w[0] + 260u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F43DCu) [[unlikely]] return; }
L_001F43DC:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[25], ld32((c.r[17].w[0] + 260u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F43C8u | kUnwind; return; } goto L_001F43C8; }
    st32((c.r[17].w[0] + 272u), 0u);
    set32(c.r[2], c.r[17].w[0] + 260u);
    st32((c.r[17].w[0] + 264u), 0u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 268u), 0u);  if (t) { goto L_001F4404; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 15264u);
    st32((c.r[17].w[0] + 260u), c.r[2].w[0]);
    c.budget -= 3;
L_001F4404:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_001F4428; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 12928u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4424u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0069(c, 225u, depth + 1u); else { c.pc = 0x002A5BA0u; return; } if (c.pc != 0x001F4424u) [[unlikely]] return; }
L_001F4424:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_001F4428:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001F4444; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4440u); set32(c.r[5], 0u + 352u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x001F4440u) [[unlikely]] return; }
L_001F4440:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001F4444:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F4460:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 368u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4488u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x001F4488u) [[unlikely]] return; }
L_001F4488:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001F44B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4498u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 101u, depth + 1u); else { c.pc = 0x001F8D50u; return; } if (c.pc != 0x001F4498u) [[unlikely]] return; }
L_001F4498:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] - 15440u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 352u), 0u);
    st8((c.r[16].w[0] + 356u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_001F44B0:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F44C0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 554u, depth + 1u); else { c.pc = 0x001F7F30u; return; } if (c.pc != 0x001F44C0u) [[unlikely]] return; }
L_001F44C0:
    c.f[0] = ld32((c.r[18].w[0] + 352u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 352u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 356u));
    st8((c.r[16].w[0] + 356u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F44F0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4524u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0069(c, 80u, depth + 1u); else { c.pc = 0x002A48E0u; return; } if (c.pc != 0x001F4524u) [[unlikely]] return; }
L_001F4524:
    set32(c.r[17], ld32((c.r[21].w[0] + 220u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001F454C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F454C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F454Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F454Cu) [[unlikely]] return; }
L_001F454C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[16], ld32((c.r[21].w[0] + 264u)));  goto L_001F4724; }
    c.r[22].d[0] = ld16((c.r[17].w[0] + 150u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_001F45B8; } }
L_001F4560:
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[16].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_001F45B8; }
    c.r[23].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001F45A8; } }
L_001F4580:
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_001F45A8; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F45A4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F45A4u) [[unlikely]] return; }
L_001F45A4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001F45A8:
    c.r[3].d[0] = c.r[18].d[0] < c.r[23].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F4580u | kUnwind; return; } goto L_001F4580; }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_001F45B8:
    c.r[3].d[0] = c.r[19].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 144u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F4560u | kUnwind; return; } goto L_001F4560; }
    set32(c.r[16], ld32((c.r[21].w[0] + 264u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F4724; } }
L_001F45D0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[16], ld32((c.r[16].w[0])));  if (t) { goto L_001F45E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001F4620; } }
L_001F45E0:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F45F0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F45F0u) [[unlikely]] return; }
L_001F45F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 10720u);  if (t) { goto L_001F4610; } }
L_001F4600:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_001F4610; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_001F461C; } }
L_001F4610:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F4600u | kUnwind; return; } goto L_001F4600; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F461C:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_001F4620:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F4680; } }
    c.r[17].d[0] = ld16((c.r[18].w[0] + 92u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_001F466C; } }
L_001F4634:
    c.r[1].d[0] = c.r[19].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_001F4650; }
    set32(c.r[3], ld32((c.r[18].w[0] + 84u)));
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 4;
L_001F4650:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_001F466C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4668u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F4668u) [[unlikely]] return; }
L_001F4668:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_001F466C:
    c.r[3].d[0] = c.r[19].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld16((c.r[18].w[0] + 92u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F4634u | kUnwind; return; } goto L_001F4634; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F4724; } }
L_001F4680:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[25], ld32((c.r[18].w[0])));  goto L_001F4690; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001F46CC; } }
L_001F4690:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F469Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F469Cu) [[unlikely]] return; }
L_001F469C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 10336u);  if (t) { goto L_001F46BC; } }
L_001F46AC:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_001F46BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_001F46C8; } }
L_001F46BC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F46ACu | kUnwind; return; } goto L_001F46AC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F46C8:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_001F46CC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F4724; } }
    c.r[17].d[0] = ld16((c.r[18].w[0] + 34u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_001F4718; } }
L_001F46E0:
    c.r[1].d[0] = c.r[19].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_001F46FC; }
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 4;
L_001F46FC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_001F4718; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4714u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F4714u) [[unlikely]] return; }
L_001F4714:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_001F4718:
    c.r[3].d[0] = c.r[19].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld16((c.r[18].w[0] + 34u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F46E0u | kUnwind; return; } goto L_001F46E0; }
L_001F4724:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[18], ld32((c.r[16].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F45D0u | kUnwind; return; } goto L_001F45D0; }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001F4760:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4774u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 25u, depth + 1u); else { c.pc = 0x001F8360u; return; } if (c.pc != 0x001F4774u) [[unlikely]] return; }
L_001F4774:
    set32(c.r[3], ld32((c.r[16].w[0] + 220u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 128u)));
    c.f[2] = ld32((c.r[3].w[0] + 32u));
    c.f[1] = ld32((c.r[3].w[0] + 36u));
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    st32((c.r[16].w[0] + 32u), c.f[2]);
    st32((c.r[16].w[0] + 36u), c.f[1]);
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 44u));
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F47B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F47C4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 28u, depth + 1u); else { c.pc = 0x001F8410u; return; } if (c.pc != 0x001F47C4u) [[unlikely]] return; }
L_001F47C4:
    set32(c.r[6], ld32((c.r[16].w[0] + 220u)));
    set32(c.r[5], c.r[16].w[0] + 112u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], ld32((c.r[6].w[0] + 128u)));
    set32(c.r[4], c.r[2].w[0] + 48u);
    c.budget -= 5;
L_001F47D8:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F47D8u | kUnwind; return; } goto L_001F47D8; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 128u)));
    c.f[0] = ld32((c.r[16].w[0] + 160u));
    st32((c.r[2].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 164u));
    st32((c.r[2].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 168u));
    st32((c.r[2].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 172u));
    c.f[0] = c.f[0] & fp::kAbs;
    set32(c.r[2], ld32((c.r[6].w[0] + 128u)));
    st32((c.r[2].w[0] + 108u), c.f[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 128u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4834u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F4834u) [[unlikely]] return; }
L_001F4834:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F4850:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4878u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 24u, depth + 1u); else { c.pc = 0x001F82E0u; return; } if (c.pc != 0x001F4878u) [[unlikely]] return; }
L_001F4878:
    set32(c.r[16], ld32((c.r[16].w[0] + 220u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4898u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F4898u) [[unlikely]] return; }
L_001F4898:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 128u)));  if (t) { goto L_001F48B8; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] | 16ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001F48C4; } }
L_001F48B8:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] & 65519ull;
    st16((c.r[4].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001F48C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F48E0:
    set32(c.r[2], ld32((c.r[4].w[0] + 220u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 128u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 136u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x001F4000u < 16384u) { entry = entries_003D[(t - 0x001F4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001F4900:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4914u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 382u, depth + 1u); else { c.pc = 0x002C32B0u; return; } if (c.pc != 0x001F4914u) [[unlikely]] return; }
L_001F4914:
    set32(c.r[2], ld32((c.r[16].w[0] + 220u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 128u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 124u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F492Cu); set32(c.r[5], ld32((c.r[16].w[0] + 216u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F492Cu) [[unlikely]] return; }
L_001F492C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F4940:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4954u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 125u, depth + 1u); else { c.pc = 0x002A5000u; return; } if (c.pc != 0x001F4954u) [[unlikely]] return; }
L_001F4954:
    set32(c.r[2], ld32((c.r[16].w[0] + 220u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 128u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 120u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F496Cu); set32(c.r[5], ld32((c.r[16].w[0] + 212u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F496Cu) [[unlikely]] return; }
L_001F496C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F4980:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F499Cu); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_003E(c, 32u, depth + 1u); else { c.pc = 0x001F84E0u; return; } if (c.pc != 0x001F499Cu) [[unlikely]] return; }
L_001F499C:
    st32((c.r[16].w[0] + 352u), c.f[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F49C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F49DCu); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_003E(c, 35u, depth + 1u); else { c.pc = 0x001F8540u; return; } if (c.pc != 0x001F49DCu) [[unlikely]] return; }
L_001F49DC:
    st32((c.r[16].w[0] + 352u), c.f[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F4A00:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 12;
    { const bool t = c.r[18].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_001F4B14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[19].w[0] + 180u)));  if (t) { goto L_001F4A5C; } }
L_001F4A38:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], ld32((c.r[16].w[0])));  if (t) { goto L_001F4A5C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F4A5C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4A5Cu); c.f[12] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F4A5Cu) [[unlikely]] return; }
L_001F4A5C:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F4A38u | kUnwind; return; } goto L_001F4A38; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[19].w[0] + 12u)));  if (t) { goto L_001F4AD8; } }
L_001F4A6C:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_001F4A7C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F4AB4; } }
L_001F4A7C:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4A88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F4A88u) [[unlikely]] return; }
L_001F4A88:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 9320u);  if (t) { goto L_001F4AA4; } }
L_001F4A94:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_001F4AA4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_001F4AB0; } }
L_001F4AA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F4A94u | kUnwind; return; } goto L_001F4A94; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F4AB0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_001F4AB4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_001F4AC4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001F4AD4; } }
L_001F4AC4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4AD4u); c.f[12] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F4AD4u) [[unlikely]] return; }
L_001F4AD4:
    set32(c.r[16], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 1;
L_001F4AD8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F4A6Cu | kUnwind; return; } goto L_001F4A6C; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4AF0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F4AF0u) [[unlikely]] return; }
L_001F4AF0:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[25], ld32((c.r[19].w[0])));  goto L_001F4B28; }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4B0Cu); c.f[12] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F4B0Cu) [[unlikely]] return; }
L_001F4B0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F4B24; } }
L_001F4B14:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4B24u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F4B24u) [[unlikely]] return; }
L_001F4B24:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_001F4B28:
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4B34u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F4B34u) [[unlikely]] return; }
L_001F4B34:
    st32((c.r[19].w[0] + 352u), c.f[20]);
    st8((c.r[19].w[0] + 356u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001F4B60:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_003E(c, 100u, depth); }
L_001F4B70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001F4BAC; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 15264u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_001F4BA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4BA8u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x001F4BA8u) [[unlikely]] return; }
L_001F4BA8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001F4BAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F4BC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F4C48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 15232u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[18].w[0] + 4u)));  if (t) { goto L_001F4C08; } }
L_001F4BF4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4C08u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F4C08u) [[unlikely]] return; }
L_001F4C08:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[25], ld32((c.r[18].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F4BF4u | kUnwind; return; } goto L_001F4BF4; }
    st32((c.r[18].w[0] + 12u), 0u);
    st32((c.r[18].w[0] + 4u), 0u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[18].w[0] + 8u), 0u);  if (t) { goto L_001F4C2C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 15264u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_001F4C2C:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_001F4C4C; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4C48u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x001F4C48u) [[unlikely]] return; }
L_001F4C48:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001F4C4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F4C70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F4D08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 15200u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_001F4CEC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 15232u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[16].w[0] + 4u)));  if (t) { goto L_001F4CC8; } }
L_001F4CB4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4CC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F4CC8u) [[unlikely]] return; }
L_001F4CC8:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F4CB4u | kUnwind; return; } goto L_001F4CB4; }
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { goto L_001F4CEC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 15264u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_001F4CEC:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001F4D0C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4D08u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x001F4D08u) [[unlikely]] return; }
L_001F4D08:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001F4D0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F4D30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F4DAC; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_001F4D8C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4D5Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001F4D5Cu) [[unlikely]] return; }
L_001F4D5C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4D6Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001F4D6Cu) [[unlikely]] return; }
L_001F4D6C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F4D88; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4D88u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F4D88u) [[unlikely]] return; }
L_001F4D88:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F4D8C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { goto L_001F4DAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4D9Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001F4D9Cu) [[unlikely]] return; }
L_001F4D9C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4DACu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001F4DACu) [[unlikely]] return; }
L_001F4DAC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4DB8u); set32(c.r[4], c.r[4].w[0] + 16912u);  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x001F4DB8u) [[unlikely]] return; }
L_001F4DB8:
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    set32(c.r[4], c.r[4].w[0] + 16912u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4DD4u); st32((c.r[28].w[0] - 27476u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x001F4DD4u) [[unlikely]] return; }
L_001F4DD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F4DF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 16912u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4E08u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x001F4E08u) [[unlikely]] return; }
L_001F4E08:
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[28].w[0] - 27476u)));  goto L_001F4EDC; }
    set32(c.r[16], ld32((c.r[28].w[0] - 30596u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4E38u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x001F4E38u) [[unlikely]] return; }
L_001F4E38:
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4E50u); set32(c.r[7], 0u + 12u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x001F4E50u) [[unlikely]] return; }
L_001F4E50:
    set32(c.r[4], ld32((c.r[28].w[0] - 30596u)));
    set32(c.r[5], 0u + 1u);
    st32((c.r[28].w[0] - 27476u), c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] - 12u), 0u);
    c.budget -= 8;
L_001F4E70:
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[4].w[0] + 12u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30596u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F4E70u | kUnwind; return; } goto L_001F4E70; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 27480u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));  goto L_001F4EC4; }
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 27480u), c.r[2].w[0]);  if (t) { goto L_001F4ECC; } }
L_001F4EC4:
    st32((c.r[28].w[0] - 27480u), c.r[2].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 2;
L_001F4ECC:
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    set32(c.r[2], c.r[2].w[0] + 12u);
    st32((c.r[28].w[0] - 27476u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[28].w[0] - 27476u)));
    c.budget -= 4;
L_001F4EDC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 16912u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[28].w[0] - 27476u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0]), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4EFCu); st32((c.r[16].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x001F4EFCu) [[unlikely]] return; }
L_001F4EFC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F4F10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 14616u);  c.pc = t; return; }
L_001F4F20:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 120u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = ld16((c.r[4].w[0] + 122u));  goto L_001F4F38; }
    c.r[2].d[0] = ld16((c.r[4].w[0] + 48u));
    st16((c.r[4].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 122u));
    c.budget -= 3;
L_001F4F38:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 120u));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 12u));
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001F4F60; }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 120u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001F4F64; } }
L_001F4F60:
    c.r[2].d[0] = ld16((c.r[2].w[0] - 12480u));
    c.budget -= 1;
L_001F4F64:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F4F70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F4F80:
    st16((c.r[4].w[0] + 12u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 48u), static_cast<std::uint16_t>(c.r[5].w[0]));  c.pc = t; return; }
L_001F4F90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4FA4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 387u, depth + 1u); else { c.pc = 0x001FF6A0u; return; } if (c.pc != 0x001F4FA4u) [[unlikely]] return; }
L_001F4FA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4FB0u); set32(c.r[4], ld32((c.r[2].w[0] - 14616u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x001F4FB0u) [[unlikely]] return; }
L_001F4FB0:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4FC4u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x001F4FC4u) [[unlikely]] return; }
L_001F4FC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F4FE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4FFCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 399u, depth + 1u); else { c.pc = 0x001FF780u; return; } if (c.pc != 0x001F4FFCu) [[unlikely]] return; }
L_001F4FFC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 128u)));  goto L_001F500C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F501C; } }
L_001F500C:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F501Cu); set32(c.r[5], ld32((c.r[16].w[0] + 128u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F501Cu) [[unlikely]] return; }
L_001F501C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F5030:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5050u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_003F(c, 403u, depth + 1u); else { c.pc = 0x001FF8C0u; return; } if (c.pc != 0x001F5050u) [[unlikely]] return; }
L_001F5050:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F505Cu); set32(c.r[5], c.r[18].w[0] + 136u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x001F505Cu) [[unlikely]] return; }
L_001F505C:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 132u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 79u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5070u); st8((c.r[29].w[0] + 79u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x001F5070u) [[unlikely]] return; }
L_001F5070:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 150u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 72u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5084u); st32((c.r[29].w[0] + 72u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x001F5084u) [[unlikely]] return; }
L_001F5084:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001F50C8; } }
L_001F508C:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001F50BC; }
    c.r[2].d[0] = ld16((c.r[2].w[0] + 8u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 68u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F50B4u); st32((c.r[29].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x001F50B4u) [[unlikely]] return; }
L_001F50B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_001F50C8; } }
L_001F50BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F50C4u); set32(c.r[5], c.r[28].w[0] - 30800u);  if (depth < kMaxDepth) unit_003D(c, 356u, depth + 1u); else { c.pc = 0x001F6DD0u; return; } if (c.pc != 0x001F50C4u) [[unlikely]] return; }
L_001F50C4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001F50C8:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 150u));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 144u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F508Cu | kUnwind; return; } goto L_001F508C; }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[18].w[0] + 128u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F50ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F50ECu) [[unlikely]] return; }
L_001F50EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001F5110:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F512Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F512Cu) [[unlikely]] return; }
L_001F512C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F513Cu); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x001F513Cu) [[unlikely]] return; }
L_001F513C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F5150:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F516Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 411u, depth + 1u); else { c.pc = 0x001FF990u; return; } if (c.pc != 0x001F516Cu) [[unlikely]] return; }
L_001F516C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 128u)));  goto L_001F517C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F5190; } }
L_001F517C:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F518Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F518Cu) [[unlikely]] return; }
L_001F518C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001F5190:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F51B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F51D0u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 412u, depth + 1u); else { c.pc = 0x001FF9A0u; return; } if (c.pc != 0x001F51D0u) [[unlikely]] return; }
L_001F51D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F51D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x001F51D8u) [[unlikely]] return; }
L_001F51D8:
    set32(c.r[17], ld32((c.r[18].w[0] + 128u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[16].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_001F524C; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[18].w[0] + 128u), c.r[16].w[0]);  goto L_001F5228; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F51F8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001F51F8u) [[unlikely]] return; }
L_001F51F8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5208u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001F5208u) [[unlikely]] return; }
L_001F5208:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F5224; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5224u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F5224u) [[unlikely]] return; }
L_001F5224:
    st32((c.r[18].w[0] + 128u), c.r[16].w[0]);
    c.budget -= 1;
L_001F5228:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001F5248; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5238u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001F5238u) [[unlikely]] return; }
L_001F5238:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5248u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001F5248u) [[unlikely]] return; }
L_001F5248:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001F524C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F5260:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5294u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_003F(c, 413u, depth + 1u); else { c.pc = 0x001FF9B0u; return; } if (c.pc != 0x001F5294u) [[unlikely]] return; }
L_001F5294:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x0A010000u);
    c.r[1].d[0] = c.r[1].d[0] | 1ull;
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001F52C8; }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 12u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F52C0u); st32((c.r[21].w[0] + 136u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003D(c, 233u, depth + 1u); else { c.pc = 0x001F5E40u; return; } if (c.pc != 0x001F52C0u) [[unlikely]] return; }
L_001F52C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_001F56B4; } }
L_001F52C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F52D0u); set32(c.r[5], c.r[21].w[0] + 136u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x001F52D0u) [[unlikely]] return; }
L_001F52D0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F52DCu); set32(c.r[5], c.r[29].w[0] + 175u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x001F52DCu) [[unlikely]] return; }
L_001F52DC:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 175u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 168u);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F52F4u); st8((c.r[21].w[0] + 132u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x001F52F4u) [[unlikely]] return; }
L_001F52F4:
    set32(c.r[4], ld32((c.r[29].w[0] + 168u)));
    c.r[2].d[0] = ld16((c.r[21].w[0] + 148u));
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[19].d[0] = 0ull + 0ull;  goto L_001F56A0; }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 150u));
    c.r[1].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[16], ld32((c.r[21].w[0] + 144u)));  goto L_001F5368; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_001F534C; } }
L_001F531C:
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_001F5348; }
    st32((c.r[3].w[0]), 0u);
    c.r[2].d[0] = ld16((c.r[21].w[0] + 152u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[21].w[0] + 152u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 5;
L_001F5348:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_001F534C:
    c.r[2].d[0] = ld16((c.r[21].w[0] + 150u));
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 144u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F531Cu | kUnwind; return; } goto L_001F531C; }
    st16((c.r[21].w[0] + 150u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[16], ld32((c.r[21].w[0] + 144u)));
    c.budget -= 2;
L_001F5368:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; st16((c.r[21].w[0] + 148u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_001F53F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5378u); c.r[4].d[0] = ld16((c.r[21].w[0] + 148u));  if (depth < kMaxDepth) unit_003D(c, 199u, depth + 1u); else { c.pc = 0x001F5A00u; return; } if (c.pc != 0x001F5378u) [[unlikely]] return; }
L_001F5378:
    st32((c.r[21].w[0] + 144u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001F53A4; } }
L_001F5384:
    set32(c.r[3], ld32((c.r[21].w[0] + 144u)));
    set32(c.r[5], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + 1u);
    set32(c.r[4], c.r[16].w[0] + c.r[5].w[0]);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 8;
L_001F53A4:
    c.r[5].d[0] = ld16((c.r[21].w[0] + 150u));
    c.r[2].d[0] = c.r[6].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[6].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F5384u | kUnwind; return; } goto L_001F5384; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[21].w[0] + 148u));  if (t) { goto L_001F53DC; } }
L_001F53C0:
    set32(c.r[3], ld32((c.r[21].w[0] + 144u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.r[2].d[0] = ld16((c.r[21].w[0] + 148u));
    c.budget -= 7;
L_001F53DC:
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[5].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F53C0u | kUnwind; return; } goto L_001F53C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001F53FC; } }
L_001F53F4:
    st32((c.r[21].w[0] + 144u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_001F53FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5404u);  if (depth < kMaxDepth) unit_003D(c, 198u, depth + 1u); else { c.pc = 0x001F59F0u; return; } if (c.pc != 0x001F5404u) [[unlikely]] return; }
L_001F5404:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F56A0; } }
L_001F5410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5418u); set32(c.r[5], c.r[29].w[0] + 164u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x001F5418u) [[unlikely]] return; }
L_001F5418:
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_001F56A0; }
    set32(c.r[4], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5430u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x001F5430u) [[unlikely]] return; }
L_001F5430:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001F54A4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] - 15008u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    st16((c.r[18].w[0] + 8u), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[18].w[0] + 10u), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0] + 12u), static_cast<std::uint16_t>(0u));
    c.r[16].d[0] = ld16((c.r[18].w[0] + 8u));
    c.budget -= 11;
    if (c.r[16].sd[0] <= 0) { st32((c.r[18].w[0] + 4u), 0u);  goto L_001F5498; }
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5474u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x001F5474u) [[unlikely]] return; }
L_001F5474:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 22944u);
    set32(c.r[6], c.r[6].w[0] + 22784u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5494u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x001F5494u) [[unlikely]] return; }
L_001F5494:
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 1;
L_001F5498:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 15024u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_001F54A4:
    set32(c.r[16], ld32((c.r[29].w[0] + 164u)));
    c.r[2].d[0] = ld16((c.r[18].w[0] + 8u));
    c.budget -= 4;
    if (c.r[16].d[0] == c.r[2].d[0]) { c.r[2].d[0] = ld16((c.r[21].w[0] + 150u));  goto L_001F5614; }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 10u));
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[22], ld32((c.r[18].w[0] + 4u)));  goto L_001F555C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[16].d[0] & 65535ull;  if (t) { goto L_001F5540; } }
L_001F54CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F54D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 187u, depth + 1u); else { c.pc = 0x001F58B0u; return; } if (c.pc != 0x001F54D4u) [[unlikely]] return; }
L_001F54D4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[22], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F54ECu); set32(c.r[4], c.r[2].w[0] + c.r[22].w[0]);  if (depth < kMaxDepth) unit_003D(c, 186u, depth + 1u); else { c.pc = 0x001F5890u; return; } if (c.pc != 0x001F54ECu) [[unlikely]] return; }
L_001F54EC:
    c.r[23].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F54FCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003D(c, 190u, depth + 1u); else { c.pc = 0x001F5900u; return; } if (c.pc != 0x001F54FCu) [[unlikely]] return; }
L_001F54FC:
    c.budget -= 2;
    if (c.r[23].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 1u);  goto L_001F553C; }
    set32(c.r[4], c.r[29].w[0] + 156u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5510u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 187u, depth + 1u); else { c.pc = 0x001F58B0u; return; } if (c.pc != 0x001F5510u) [[unlikely]] return; }
L_001F5510:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[5], c.r[29].w[0] + 156u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5520u); set32(c.r[4], c.r[2].w[0] + c.r[22].w[0]);  if (depth < kMaxDepth) unit_003D(c, 180u, depth + 1u); else { c.pc = 0x001F57E0u; return; } if (c.pc != 0x001F5520u) [[unlikely]] return; }
L_001F5520:
    set32(c.r[4], c.r[29].w[0] + 156u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F552Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003D(c, 190u, depth + 1u); else { c.pc = 0x001F5900u; return; } if (c.pc != 0x001F552Cu) [[unlikely]] return; }
L_001F552C:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[18].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.budget -= 4;
L_001F553C:
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_001F5540:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 10u));
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 160u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F54CCu | kUnwind; return; } goto L_001F54CC; }
    st16((c.r[18].w[0] + 10u), static_cast<std::uint16_t>(c.r[16].w[0]));
    set32(c.r[22], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 2;
L_001F555C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st16((c.r[18].w[0] + 8u), static_cast<std::uint16_t>(c.r[16].w[0]));  if (t) { goto L_001F5600; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F556Cu); c.r[4].d[0] = ld16((c.r[18].w[0] + 8u));  if (depth < kMaxDepth) unit_003D(c, 177u, depth + 1u); else { c.pc = 0x001F5790u; return; } if (c.pc != 0x001F556Cu) [[unlikely]] return; }
L_001F556C:
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001F5594; } }
L_001F5578:
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[22].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F558Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_003D(c, 180u, depth + 1u); else { c.pc = 0x001F57E0u; return; } if (c.pc != 0x001F558Cu) [[unlikely]] return; }
L_001F558C:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_001F5594:
    c.r[17].d[0] = ld16((c.r[18].w[0] + 10u));
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F5578u | kUnwind; return; } goto L_001F5578; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[18].w[0] + 8u));  if (t) { goto L_001F55E8; } }
L_001F55B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F55B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 187u, depth + 1u); else { c.pc = 0x001F58B0u; return; } if (c.pc != 0x001F55B8u) [[unlikely]] return; }
L_001F55B8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 152u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F55D0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_003D(c, 180u, depth + 1u); else { c.pc = 0x001F57E0u; return; } if (c.pc != 0x001F55D0u) [[unlikely]] return; }
L_001F55D0:
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F55DCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003D(c, 190u, depth + 1u); else { c.pc = 0x001F5900u; return; } if (c.pc != 0x001F55DCu) [[unlikely]] return; }
L_001F55DC:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = ld16((c.r[18].w[0] + 8u));
    c.budget -= 3;
L_001F55E8:
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 152u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F55B0u | kUnwind; return; } goto L_001F55B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_001F5608; } }
L_001F5600:
    st32((c.r[18].w[0] + 4u), 0u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 2;
L_001F5608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5610u);  if (depth < kMaxDepth) unit_003D(c, 176u, depth + 1u); else { c.pc = 0x001F5770u; return; } if (c.pc != 0x001F5610u) [[unlikely]] return; }
L_001F5610:
    c.r[2].d[0] = ld16((c.r[21].w[0] + 150u));
    c.budget -= 1;
L_001F5614:
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F563C; } }
    set32(c.r[2], c.r[19].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; st16((c.r[21].w[0] + 150u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001F568C; } }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 152u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0] + 152u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001F568C; } }
L_001F563C:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 144u)));  goto L_001F566C; }
    set32(c.r[2], ld32((c.r[21].w[0] + 144u)));
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 144u)));  goto L_001F5690; }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 152u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0] + 152u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001F568C; } }
L_001F566C:
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F568C; } }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 152u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[21].w[0] + 152u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001F568C:
    set32(c.r[2], ld32((c.r[21].w[0] + 144u)));
    c.budget -= 1;
L_001F5690:
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[18].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 4;
L_001F56A0:
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F5410u | kUnwind; return; } goto L_001F5410; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001F56B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F56BCu);  if (depth < kMaxDepth) unit_0083(c, 118u, depth + 1u); else { c.pc = 0x0030CD50u; return; } if (c.pc != 0x001F56BCu) [[unlikely]] return; }
L_001F56BC:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_001F56F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F5750; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    set32(c.r[2], c.r[2].w[0] - 15008u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 22784u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5734u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x001F5734u) [[unlikely]] return; }
L_001F5734:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001F5754; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5750u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x001F5750u) [[unlikely]] return; }
L_001F5750:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001F5754:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F5770:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] + 22784u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 6;
    { set32(c.r[7], 0u + 1u);  [[clang::musttail]] return unit_00A5(c, 164u, depth); }
L_001F5790:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F57B0u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x001F57B0u) [[unlikely]] return; }
L_001F57B0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 22944u);
    set32(c.r[6], c.r[6].w[0] + 22784u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F57D0u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x001F57D0u) [[unlikely]] return; }
L_001F57D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F57E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F5868; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[18].w[0])));  goto L_001F5848; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5818u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001F5818u) [[unlikely]] return; }
L_001F5818:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5828u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001F5828u) [[unlikely]] return; }
L_001F5828:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F5844; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5844u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F5844u) [[unlikely]] return; }
L_001F5844:
    set32(c.r[17], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_001F5848:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0]), c.r[17].w[0]);  if (t) { goto L_001F5868; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5858u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001F5858u) [[unlikely]] return; }
L_001F5858:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5868u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001F5868u) [[unlikely]] return; }
L_001F5868:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F5890:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_001F58B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_001F58E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F58D8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001F58D8u) [[unlikely]] return; }
L_001F58D8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F58E8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001F58E8u) [[unlikely]] return; }
L_001F58E8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F5900:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F597C; } }
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_001F5964; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5934u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001F5934u) [[unlikely]] return; }
L_001F5934:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5944u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001F5944u) [[unlikely]] return; }
L_001F5944:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F5960; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5960u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F5960u) [[unlikely]] return; }
L_001F5960:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_001F5964:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001F5980; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F597Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x001F597Cu) [[unlikely]] return; }
L_001F597C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001F5980:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F59A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), 0u);  if (t) { goto L_001F59D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F59C8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001F59C8u) [[unlikely]] return; }
L_001F59C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F59D8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001F59D8u) [[unlikely]] return; }
L_001F59D8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F59F0:
    c.budget -= 2;
    { c.r[5].d[0] = 0ull + 0ull;  [[clang::musttail]] return unit_0047(c, 96u, depth); }
L_001F5A00:
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 3;
    { c.r[5].d[0] = 0ull + 0ull;  [[clang::musttail]] return unit_0047(c, 104u, depth); }
L_001F5A10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 160u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5A2Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x001F5A2Cu) [[unlikely]] return; }
L_001F5A2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001F5ABC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5A3Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 19u, depth + 1u); else { c.pc = 0x00200210u; return; } if (c.pc != 0x001F5A3Cu) [[unlikely]] return; }
L_001F5A3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 15168u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 128u), 0u);  if (t) { goto L_001F5A6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5A5Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001F5A5Cu) [[unlikely]] return; }
L_001F5A5C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5A6Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001F5A6Cu) [[unlikely]] return; }
L_001F5A6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 15040u);
    st32((c.r[16].w[0] + 140u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st16((c.r[16].w[0] + 148u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 154u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 150u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 152u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 148u));
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[17], c.r[16].w[0] + 140u);  if (t) { goto L_001F5AAC; } }
    set32(c.r[4], c.r[2].w[0] << 2);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5AA4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x001F5AA4u) [[unlikely]] return; }
L_001F5AA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_001F5AB0; } }
L_001F5AAC:
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 1;
L_001F5AB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 15056u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_001F5ABC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F5AE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F5B40; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 15056u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_001F5B24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 15040u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5B24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x001F5B24u) [[unlikely]] return; }
L_001F5B24:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001F5B44; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5B40u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x001F5B40u) [[unlikely]] return; }
L_001F5B40:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001F5B44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F5B60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F5BB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 15040u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5B94u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x001F5B94u) [[unlikely]] return; }
L_001F5B94:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001F5BB4; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5BB0u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x001F5BB0u) [[unlikely]] return; }
L_001F5BB0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001F5BB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F5BD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F5C4C; } }
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_001F5C34; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5C04u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001F5C04u) [[unlikely]] return; }
L_001F5C04:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5C14u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001F5C14u) [[unlikely]] return; }
L_001F5C14:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F5C30; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5C30u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F5C30u) [[unlikely]] return; }
L_001F5C30:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_001F5C34:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001F5C50; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5C4Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x001F5C4Cu) [[unlikely]] return; }
L_001F5C4C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001F5C50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F5C70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5C8Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 450u, depth + 1u); else { c.pc = 0x002BB580u; return; } if (c.pc != 0x001F5C8Cu) [[unlikely]] return; }
L_001F5C8C:
    set32(c.r[4], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5CA0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F5CA0u) [[unlikely]] return; }
L_001F5CA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F5CC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 160u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5CECu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x001F5CECu) [[unlikely]] return; }
L_001F5CEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001F5D7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5CFCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 19u, depth + 1u); else { c.pc = 0x00200210u; return; } if (c.pc != 0x001F5CFCu) [[unlikely]] return; }
L_001F5CFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 15168u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 128u), 0u);  if (t) { goto L_001F5D2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5D1Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001F5D1Cu) [[unlikely]] return; }
L_001F5D1C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5D2Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001F5D2Cu) [[unlikely]] return; }
L_001F5D2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 15040u);
    st32((c.r[17].w[0] + 140u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st16((c.r[17].w[0] + 148u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 154u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 150u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 152u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 148u));
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[16], c.r[17].w[0] + 140u);  if (t) { goto L_001F5D6C; } }
    set32(c.r[4], c.r[2].w[0] << 2);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5D64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x001F5D64u) [[unlikely]] return; }
L_001F5D64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_001F5D70; } }
L_001F5D6C:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_001F5D70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 15056u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_001F5D7C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5D8Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 429u, depth + 1u); else { c.pc = 0x001FFB70u; return; } if (c.pc != 0x001F5D8Cu) [[unlikely]] return; }
L_001F5D8C:
    set32(c.r[4], ld32((c.r[19].w[0] + 128u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5DA0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F5DA0u) [[unlikely]] return; }
L_001F5DA0:
    set32(c.r[18], ld32((c.r[17].w[0] + 128u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[18].d[0] == c.r[16].d[0]) { c.r[3].d[0] = ld8((c.r[19].w[0] + 132u));  goto L_001F5E14; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 128u), c.r[16].w[0]);  goto L_001F5DF0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5DC0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001F5DC0u) [[unlikely]] return; }
L_001F5DC0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5DD0u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001F5DD0u) [[unlikely]] return; }
L_001F5DD0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F5DEC; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5DECu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F5DECu) [[unlikely]] return; }
L_001F5DEC:
    st32((c.r[17].w[0] + 128u), c.r[16].w[0]);
    c.budget -= 1;
L_001F5DF0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001F5E10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5E00u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001F5E00u) [[unlikely]] return; }
L_001F5E00:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5E10u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001F5E10u) [[unlikely]] return; }
L_001F5E10:
    c.r[3].d[0] = ld8((c.r[19].w[0] + 132u));
    c.budget -= 1;
L_001F5E14:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[17].w[0] + 132u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001F5E40:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[19].d[0] = ld16((c.r[4].w[0] + 150u));
    c.r[1].d[0] = c.r[20].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] == 0ull; c.r[21].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001F5EF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld16((c.r[21].w[0] + 150u));  if (t) { goto L_001F5EE4; } }
    c.r[3].d[0] = ld16((c.r[21].w[0] + 150u));
    c.budget -= 1;
L_001F5E88:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_001F5E9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001F5EC8; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_001F5E9C:
    st16((c.r[21].w[0] + 150u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld16((c.r[21].w[0] + 150u));
    set32(c.r[3], ld32((c.r[21].w[0] + 144u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[3].w[0]), 0u);  if (t) { goto L_001F5EC8; } }
    c.r[3].d[0] = ld16((c.r[21].w[0] + 152u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[21].w[0] + 152u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001F5EC8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F5EE0; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5EE0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F5EE0u) [[unlikely]] return; }
L_001F5EE0:
    c.r[3].d[0] = ld16((c.r[21].w[0] + 150u));
    c.budget -= 1;
L_001F5EE4:
    c.r[1].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[3].d[0] = ld16((c.r[21].w[0] + 150u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F5E88u | kUnwind; return; } goto L_001F5E88; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_001F62C8; } }
L_001F5EF8:
    c.r[1].d[0] = c.r[19].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F62C4; } }
    c.r[3].d[0] = ld16((c.r[21].w[0] + 148u));
    c.budget -= 3;
    if (c.r[20].d[0] == c.r[3].d[0]) { c.r[3].d[0] = c.r[19].d[0] < c.r[20].d[0] ? 1ull : 0ull;  goto L_001F62BC; }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 150u));
    c.r[1].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[16], ld32((c.r[21].w[0] + 144u)));  goto L_001F5F78; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[20].d[0] & 65535ull;  if (t) { goto L_001F5F5C; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 144u)));
    c.budget -= 1;
L_001F5F2C:
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 1u);  goto L_001F5F58; }
    st32((c.r[3].w[0]), 0u);
    c.r[2].d[0] = ld16((c.r[21].w[0] + 152u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[21].w[0] + 152u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 5;
L_001F5F58:
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_001F5F5C:
    c.r[2].d[0] = ld16((c.r[21].w[0] + 150u));
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 144u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F5F2Cu | kUnwind; return; } goto L_001F5F2C; }
    st16((c.r[21].w[0] + 150u), static_cast<std::uint16_t>(c.r[20].w[0]));
    set32(c.r[16], ld32((c.r[21].w[0] + 144u)));
    c.budget -= 2;
L_001F5F78:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; st16((c.r[21].w[0] + 148u), static_cast<std::uint16_t>(c.r[20].w[0]));  if (t) { goto L_001F600C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5F88u); c.r[4].d[0] = ld16((c.r[21].w[0] + 148u));  if (depth < kMaxDepth) unit_003D(c, 199u, depth + 1u); else { c.pc = 0x001F5A00u; return; } if (c.pc != 0x001F5F88u) [[unlikely]] return; }
L_001F5F88:
    st32((c.r[21].w[0] + 144u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001F5FB8; } }
    c.r[2].d[0] = c.r[6].d[0] & 65535ull;
    c.budget -= 1;
L_001F5F98:
    set32(c.r[3], ld32((c.r[21].w[0] + 144u)));
    set32(c.r[5], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + 1u);
    set32(c.r[4], c.r[16].w[0] + c.r[5].w[0]);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 8;
L_001F5FB8:
    c.r[5].d[0] = ld16((c.r[21].w[0] + 150u));
    c.r[2].d[0] = c.r[6].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[6].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F5F98u | kUnwind; return; } goto L_001F5F98; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[21].w[0] + 148u));  if (t) { goto L_001F5FF4; } }
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 1;
L_001F5FD8:
    set32(c.r[3], ld32((c.r[21].w[0] + 144u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.r[2].d[0] = ld16((c.r[21].w[0] + 148u));
    c.budget -= 7;
L_001F5FF4:
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[5].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F5FD8u | kUnwind; return; } goto L_001F5FD8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001F6014; } }
L_001F600C:
    st32((c.r[21].w[0] + 144u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_001F6014:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F601Cu);  if (depth < kMaxDepth) unit_003D(c, 198u, depth + 1u); else { c.pc = 0x001F59F0u; return; } if (c.pc != 0x001F601Cu) [[unlikely]] return; }
L_001F601C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F62B8; } }
    set32(c.r[4], 0u + 16u);
    c.budget -= 1;
L_001F6028:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6030u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x001F6030u) [[unlikely]] return; }
L_001F6030:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001F60AC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 15008u);
    st32((c.r[18].w[0]), c.r[4].w[0]);
    st16((c.r[18].w[0] + 8u), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[18].w[0] + 10u), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0] + 12u), static_cast<std::uint16_t>(0u));
    c.r[16].d[0] = ld16((c.r[18].w[0] + 8u));
    c.budget -= 11;
    if (c.r[16].sd[0] <= 0) { st32((c.r[18].w[0] + 4u), 0u);  goto L_001F60A0; }
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6074u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x001F6074u) [[unlikely]] return; }
L_001F6074:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 22944u);
    set32(c.r[6], c.r[6].w[0] + 22784u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6094u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x001F6094u) [[unlikely]] return; }
L_001F6094:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_001F60A0; } }
    st32((c.r[18].w[0] + 4u), 0u);
    c.budget -= 1;
L_001F60A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 15024u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 3;
L_001F60AC:
    set32(c.r[16], ld32((c.r[21].w[0] + 136u)));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 8u));
    c.budget -= 4;
    if (c.r[16].d[0] == c.r[3].d[0]) { c.r[3].d[0] = ld16((c.r[21].w[0] + 150u));  goto L_001F6228; }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 10u));
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[22], ld32((c.r[18].w[0] + 4u)));  goto L_001F6168; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[16].d[0] & 65535ull;  if (t) { goto L_001F614C; } }
    set32(c.r[4], c.r[29].w[0] + 156u);
    c.budget -= 1;
L_001F60D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F60E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 187u, depth + 1u); else { c.pc = 0x001F58B0u; return; } if (c.pc != 0x001F60E0u) [[unlikely]] return; }
L_001F60E0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[22], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 156u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F60F8u); set32(c.r[4], c.r[2].w[0] + c.r[22].w[0]);  if (depth < kMaxDepth) unit_003D(c, 186u, depth + 1u); else { c.pc = 0x001F5890u; return; } if (c.pc != 0x001F60F8u) [[unlikely]] return; }
L_001F60F8:
    c.r[23].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 156u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6108u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003D(c, 190u, depth + 1u); else { c.pc = 0x001F5900u; return; } if (c.pc != 0x001F6108u) [[unlikely]] return; }
L_001F6108:
    c.budget -= 2;
    if (c.r[23].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 1u);  goto L_001F6148; }
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F611Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 187u, depth + 1u); else { c.pc = 0x001F58B0u; return; } if (c.pc != 0x001F611Cu) [[unlikely]] return; }
L_001F611C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[5], c.r[29].w[0] + 152u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F612Cu); set32(c.r[4], c.r[2].w[0] + c.r[22].w[0]);  if (depth < kMaxDepth) unit_003D(c, 180u, depth + 1u); else { c.pc = 0x001F57E0u; return; } if (c.pc != 0x001F612Cu) [[unlikely]] return; }
L_001F612C:
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6138u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003D(c, 190u, depth + 1u); else { c.pc = 0x001F5900u; return; } if (c.pc != 0x001F6138u) [[unlikely]] return; }
L_001F6138:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[18].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.budget -= 4;
L_001F6148:
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_001F614C:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 10u));
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 156u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F60D8u | kUnwind; return; } goto L_001F60D8; }
    st16((c.r[18].w[0] + 10u), static_cast<std::uint16_t>(c.r[16].w[0]));
    set32(c.r[22], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 2;
L_001F6168:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st16((c.r[18].w[0] + 8u), static_cast<std::uint16_t>(c.r[16].w[0]));  if (t) { goto L_001F6214; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6178u); c.r[4].d[0] = ld16((c.r[18].w[0] + 8u));  if (depth < kMaxDepth) unit_003D(c, 177u, depth + 1u); else { c.pc = 0x001F5790u; return; } if (c.pc != 0x001F6178u) [[unlikely]] return; }
L_001F6178:
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001F61A4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_001F6188:
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[22].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F619Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_003D(c, 180u, depth + 1u); else { c.pc = 0x001F57E0u; return; } if (c.pc != 0x001F619Cu) [[unlikely]] return; }
L_001F619C:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_001F61A4:
    c.r[17].d[0] = ld16((c.r[18].w[0] + 10u));
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F6188u | kUnwind; return; } goto L_001F6188; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[18].w[0] + 8u));  if (t) { goto L_001F61FC; } }
    set32(c.r[4], c.r[29].w[0] + 148u);
    c.budget -= 1;
L_001F61C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F61CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 187u, depth + 1u); else { c.pc = 0x001F58B0u; return; } if (c.pc != 0x001F61CCu) [[unlikely]] return; }
L_001F61CC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 148u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F61E4u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_003D(c, 180u, depth + 1u); else { c.pc = 0x001F57E0u; return; } if (c.pc != 0x001F61E4u) [[unlikely]] return; }
L_001F61E4:
    set32(c.r[4], c.r[29].w[0] + 148u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F61F0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003D(c, 190u, depth + 1u); else { c.pc = 0x001F5900u; return; } if (c.pc != 0x001F61F0u) [[unlikely]] return; }
L_001F61F0:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = ld16((c.r[18].w[0] + 8u));
    c.budget -= 3;
L_001F61FC:
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 148u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F61C4u | kUnwind; return; } goto L_001F61C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_001F621C; } }
L_001F6214:
    st32((c.r[18].w[0] + 4u), 0u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 2;
L_001F621C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6224u);  if (depth < kMaxDepth) unit_003D(c, 176u, depth + 1u); else { c.pc = 0x001F5770u; return; } if (c.pc != 0x001F6224u) [[unlikely]] return; }
L_001F6224:
    c.r[3].d[0] = ld16((c.r[21].w[0] + 150u));
    c.budget -= 1;
L_001F6228:
    c.r[3].d[0] = c.r[19].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F6250; } }
    set32(c.r[3], c.r[19].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; st16((c.r[21].w[0] + 150u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001F62A4; } }
    c.r[3].d[0] = ld16((c.r[21].w[0] + 152u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0] + 152u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001F62A4; } }
L_001F6250:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 144u)));  goto L_001F6284; }
    set32(c.r[3], ld32((c.r[21].w[0] + 144u)));
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 144u)));  goto L_001F62A8; }
    c.r[3].d[0] = ld16((c.r[21].w[0] + 152u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0] + 152u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001F62A4; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 144u)));
    c.budget -= 1;
L_001F6284:
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F62A4; } }
    c.r[3].d[0] = ld16((c.r[21].w[0] + 152u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[21].w[0] + 152u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001F62A4:
    set32(c.r[3], ld32((c.r[21].w[0] + 144u)));
    c.budget -= 1;
L_001F62A8:
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[18].w[0]);
    c.budget -= 4;
L_001F62B8:
    c.r[3].d[0] = c.r[19].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_001F62BC:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], 0u + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F6028u | kUnwind; return; } goto L_001F6028; }
L_001F62C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_001F62C8:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001F62F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F6360; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 15024u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_001F6344; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    set32(c.r[2], c.r[2].w[0] - 15008u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 22784u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6344u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x001F6344u) [[unlikely]] return; }
L_001F6344:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001F6364; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6360u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x001F6360u) [[unlikely]] return; }
L_001F6360:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001F6364:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F6380:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[17].d[0] & 65535ull;  if (t) { goto L_001F6408; } }
L_001F63A4:
    c.r[6].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F63B8u); set32(c.r[4], c.r[29].w[0] + 76u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F63B8u) [[unlikely]] return; }
L_001F63B8:
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], c.r[16].w[0] + 1u);  goto L_001F6404; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F63CCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001F63CCu) [[unlikely]] return; }
L_001F63CC:
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F63E0u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001F63E0u) [[unlikely]] return; }
L_001F63E0:
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F6400; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6400u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F6400u) [[unlikely]] return; }
L_001F6400:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001F6404:
    c.r[16].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 1;
L_001F6408:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 48u));
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 128u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F63A4u | kUnwind; return; } goto L_001F63A4; }
    c.r[4].d[0] = ld16((c.r[18].w[0] + 12u));
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { st16((c.r[18].w[0] + 48u), static_cast<std::uint16_t>(c.r[4].w[0]));  goto L_001F6434; }
    st16((c.r[18].w[0] + 48u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 1;
L_001F6434:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001F6450:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = ld16((c.r[4].w[0] + 122u));  if (t) { goto L_001F649C; } }
L_001F6458:
    c.r[3].d[0] = c.r[6].d[0] & 65535ull;
    c.r[2].d[0] = ld16((c.r[5].w[0] + 218u));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[5].w[0] + 212u)));  goto L_001F6474; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_001F6480; } }
L_001F6474:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_001F6480:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], c.r[6].w[0] + 1u);  goto L_001F6498; }
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] & 65534ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[6].w[0] + 1u);
    c.budget -= 4;
L_001F6498:
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_001F649C:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 122u));
    c.r[5].d[0] = c.r[6].d[0] & 65535ull;
    c.r[2].d[0] = ld16((c.r[4].w[0] + 120u));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 128u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F6458u | kUnwind; return; } goto L_001F6458; }
    c.budget -= 2;
    {  [[clang::musttail]] return unit_003F(c, 470u, depth); }
L_001F64C0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[21].d[0] & 65535ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[20].w[0] << 3);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - c.r[20].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], ld32((c.r[4].w[0] + 112u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = ld16((c.r[4].w[0] + 48u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[18].d[0] = ld16((c.r[2].w[0] + 24u));
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6514u); c.r[19].d[0] = c.r[6].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0040(c, 9u, depth + 1u); else { c.pc = 0x002000A0u; return; } if (c.pc != 0x001F6514u) [[unlikely]] return; }
L_001F6514:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0] + 140u), 0u);  if (t) { goto L_001F6538; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6528u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001F6528u) [[unlikely]] return; }
L_001F6528:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6538u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001F6538u) [[unlikely]] return; }
L_001F6538:
    c.r[2].d[0] = c.r[21].d[0] & 65535ull;
    c.r[6].d[0] = c.r[19].d[0] & 65535ull;
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[6].d[0]) { set32(c.r[5], ld32((c.r[16].w[0] + 128u)));  goto L_001F661C; }
    set32(c.r[5], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F655Cu); set32(c.r[4], c.r[29].w[0] + 132u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F655Cu) [[unlikely]] return; }
L_001F655C:
    set32(c.r[17], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 132u)));  goto L_001F65D0; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[29].w[0] + 132u)));  goto L_001F65AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F657Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001F657Cu) [[unlikely]] return; }
L_001F657C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F658Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001F658Cu) [[unlikely]] return; }
L_001F658C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F65A8; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F65A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F65A8u) [[unlikely]] return; }
L_001F65A8:
    set32(c.r[17], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 1;
L_001F65AC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0] + 140u), c.r[17].w[0]);  if (t) { goto L_001F65CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F65BCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001F65BCu) [[unlikely]] return; }
L_001F65BC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F65CCu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001F65CCu) [[unlikely]] return; }
L_001F65CC:
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 1;
L_001F65D0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 140u)));  goto L_001F6810; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F65E0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001F65E0u) [[unlikely]] return; }
L_001F65E0:
    set32(c.r[3], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F65F4u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001F65F4u) [[unlikely]] return; }
L_001F65F4:
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F680C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6614u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F6614u) [[unlikely]] return; }
L_001F6614:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F680C; } }
L_001F661C:
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F662Cu); set32(c.r[4], c.r[29].w[0] + 136u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F662Cu) [[unlikely]] return; }
L_001F662C:
    set32(c.r[5], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6644u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F6644u) [[unlikely]] return; }
L_001F6644:
    set32(c.r[17], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 128u)));  goto L_001F66B8; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[29].w[0] + 128u)));  goto L_001F6694; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6664u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001F6664u) [[unlikely]] return; }
L_001F6664:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6674u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001F6674u) [[unlikely]] return; }
L_001F6674:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F6690; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6690u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F6690u) [[unlikely]] return; }
L_001F6690:
    set32(c.r[17], ld32((c.r[29].w[0] + 128u)));
    c.budget -= 1;
L_001F6694:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0] + 140u), c.r[17].w[0]);  if (t) { goto L_001F66B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F66A4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001F66A4u) [[unlikely]] return; }
L_001F66A4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F66B4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001F66B4u) [[unlikely]] return; }
L_001F66B4:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.budget -= 1;
L_001F66B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 128u)));  goto L_001F6700; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F66C8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001F66C8u) [[unlikely]] return; }
L_001F66C8:
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F66DCu); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001F66DCu) [[unlikely]] return; }
L_001F66DC:
    set32(c.r[4], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F66FC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F66FCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F66FCu) [[unlikely]] return; }
L_001F66FC:
    set32(c.r[5], ld32((c.r[16].w[0] + 128u)));
    c.budget -= 1;
L_001F6700:
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 136u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 156u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6718u); set32(c.r[4], c.r[29].w[0] + 124u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F6718u) [[unlikely]] return; }
L_001F6718:
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[29].w[0] + 136u)));  goto L_001F6764; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F672Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001F672Cu) [[unlikely]] return; }
L_001F672C:
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6740u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001F6740u) [[unlikely]] return; }
L_001F6740:
    set32(c.r[4], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F6760; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6760u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F6760u) [[unlikely]] return; }
L_001F6760:
    set32(c.r[17], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_001F6764:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[29].w[0] + 136u)));  goto L_001F67D0; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_001F67AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F677Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001F677Cu) [[unlikely]] return; }
L_001F677C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F678Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001F678Cu) [[unlikely]] return; }
L_001F678C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F67A8; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F67A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F67A8u) [[unlikely]] return; }
L_001F67A8:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F67AC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0] + 136u), 0u);  if (t) { goto L_001F67CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F67BCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001F67BCu) [[unlikely]] return; }
L_001F67BC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F67CCu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001F67CCu) [[unlikely]] return; }
L_001F67CC:
    set32(c.r[17], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_001F67D0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001F680C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F67E0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001F67E0u) [[unlikely]] return; }
L_001F67E0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F67F0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001F67F0u) [[unlikely]] return; }
L_001F67F0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F680C; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F680Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F680Cu) [[unlikely]] return; }
L_001F680C:
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    c.budget -= 1;
L_001F6810:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 120u), c.r[2].w[0]);  if (t) { goto L_001F6834; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6820u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001F6820u) [[unlikely]] return; }
L_001F6820:
    set32(c.r[3], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6834u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001F6834u) [[unlikely]] return; }
L_001F6834:
    c.r[5].d[0] = c.r[18].d[0] & 65535ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6844u); set32(c.r[6], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_003D(c, 315u, depth + 1u); else { c.pc = 0x001F68F0u; return; } if (c.pc != 0x001F6844u) [[unlikely]] return; }
L_001F6844:
    set32(c.r[3], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 140u)));  goto L_001F6890; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6858u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001F6858u) [[unlikely]] return; }
L_001F6858:
    set32(c.r[3], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F686Cu); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001F686Cu) [[unlikely]] return; }
L_001F686C:
    set32(c.r[4], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F688C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F688Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F688Cu) [[unlikely]] return; }
L_001F688C:
    set32(c.r[16], ld32((c.r[29].w[0] + 140u)));
    c.budget -= 1;
L_001F6890:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_001F68D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F68A0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001F68A0u) [[unlikely]] return; }
L_001F68A0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F68B0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001F68B0u) [[unlikely]] return; }
L_001F68B0:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F68CC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F68CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F68CCu) [[unlikely]] return; }
L_001F68CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_001F68D0:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001F68F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 150u));
    c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001F6940; }
    set32(c.r[3], ld32((c.r[4].w[0] + 144u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F693C; } }
    c.r[5].d[0] = ld16((c.r[4].w[0] + 10u));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 8u));
    c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F693C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F693Cu); c.r[5].d[0] = ld16((c.r[4].w[0] + 10u));  if (depth < kMaxDepth) unit_003D(c, 317u, depth + 1u); else { c.pc = 0x001F6950u; return; } if (c.pc != 0x001F693Cu) [[unlikely]] return; }
L_001F693C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001F6940:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F6950:
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
    c.r[3].d[0] = ld16((c.r[4].w[0] + 8u));
    c.r[2].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001F6AF8; } }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 14u));
    set32(c.r[17], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[3].d[0]) { c.r[2].d[0] = ld16((c.r[21].w[0] + 10u));  goto L_001F6AFC; }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 10u));
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[16], ld32((c.r[21].w[0] + 4u)));  goto L_001F6A44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[17].d[0] & 65535ull;  if (t) { goto L_001F6A28; } }
L_001F69B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F69BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 187u, depth + 1u); else { c.pc = 0x001F58B0u; return; } if (c.pc != 0x001F69BCu) [[unlikely]] return; }
L_001F69BC:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[16], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 156u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F69D4u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_003D(c, 186u, depth + 1u); else { c.pc = 0x001F5890u; return; } if (c.pc != 0x001F69D4u) [[unlikely]] return; }
L_001F69D4:
    c.r[22].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 156u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F69E4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003D(c, 190u, depth + 1u); else { c.pc = 0x001F5900u; return; } if (c.pc != 0x001F69E4u) [[unlikely]] return; }
L_001F69E4:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[2], c.r[18].w[0] + 1u);  goto L_001F6A24; }
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F69F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 187u, depth + 1u); else { c.pc = 0x001F58B0u; return; } if (c.pc != 0x001F69F8u) [[unlikely]] return; }
L_001F69F8:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[5], c.r[29].w[0] + 152u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6A08u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_003D(c, 180u, depth + 1u); else { c.pc = 0x001F57E0u; return; } if (c.pc != 0x001F6A08u) [[unlikely]] return; }
L_001F6A08:
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6A14u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003D(c, 190u, depth + 1u); else { c.pc = 0x001F5900u; return; } if (c.pc != 0x001F6A14u) [[unlikely]] return; }
L_001F6A14:
    c.r[2].d[0] = ld16((c.r[21].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[21].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.budget -= 4;
L_001F6A24:
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_001F6A28:
    c.r[2].d[0] = ld16((c.r[21].w[0] + 10u));
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 156u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F69B4u | kUnwind; return; } goto L_001F69B4; }
    st16((c.r[21].w[0] + 10u), static_cast<std::uint16_t>(c.r[17].w[0]));
    set32(c.r[16], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 2;
L_001F6A44:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st16((c.r[21].w[0] + 8u), static_cast<std::uint16_t>(c.r[17].w[0]));  if (t) { goto L_001F6AE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6A54u); c.r[4].d[0] = ld16((c.r[21].w[0] + 8u));  if (depth < kMaxDepth) unit_003D(c, 177u, depth + 1u); else { c.pc = 0x001F5790u; return; } if (c.pc != 0x001F6A54u) [[unlikely]] return; }
L_001F6A54:
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001F6A7C; } }
L_001F6A60:
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6A74u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_003D(c, 180u, depth + 1u); else { c.pc = 0x001F57E0u; return; } if (c.pc != 0x001F6A74u) [[unlikely]] return; }
L_001F6A74:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_001F6A7C:
    c.r[18].d[0] = ld16((c.r[21].w[0] + 10u));
    c.r[2].d[0] = c.r[17].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F6A60u | kUnwind; return; } goto L_001F6A60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[21].w[0] + 8u));  if (t) { goto L_001F6AD0; } }
L_001F6A98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6AA0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 187u, depth + 1u); else { c.pc = 0x001F58B0u; return; } if (c.pc != 0x001F6AA0u) [[unlikely]] return; }
L_001F6AA0:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 148u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6AB8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_003D(c, 180u, depth + 1u); else { c.pc = 0x001F57E0u; return; } if (c.pc != 0x001F6AB8u) [[unlikely]] return; }
L_001F6AB8:
    set32(c.r[4], c.r[29].w[0] + 148u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6AC4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003D(c, 190u, depth + 1u); else { c.pc = 0x001F5900u; return; } if (c.pc != 0x001F6AC4u) [[unlikely]] return; }
L_001F6AC4:
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = ld16((c.r[21].w[0] + 8u));
    c.budget -= 3;
L_001F6AD0:
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 148u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F6A98u | kUnwind; return; } goto L_001F6A98; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001F6AF0; } }
L_001F6AE8:
    st32((c.r[21].w[0] + 4u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_001F6AF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6AF8u);  if (depth < kMaxDepth) unit_003D(c, 176u, depth + 1u); else { c.pc = 0x001F5770u; return; } if (c.pc != 0x001F6AF8u) [[unlikely]] return; }
L_001F6AF8:
    c.r[2].d[0] = ld16((c.r[21].w[0] + 10u));
    c.budget -= 1;
L_001F6AFC:
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 140u);  goto L_001F6B50; }
    set32(c.r[2], c.r[20].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    st16((c.r[21].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6B1Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 187u, depth + 1u); else { c.pc = 0x001F58B0u; return; } if (c.pc != 0x001F6B1Cu) [[unlikely]] return; }
L_001F6B1C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6B28u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_003D(c, 186u, depth + 1u); else { c.pc = 0x001F5890u; return; } if (c.pc != 0x001F6B28u) [[unlikely]] return; }
L_001F6B28:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6B38u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003D(c, 190u, depth + 1u); else { c.pc = 0x001F5900u; return; } if (c.pc != 0x001F6B38u) [[unlikely]] return; }
L_001F6B38:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 4u)));  goto L_001F6C08; }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001F6C04; } }
L_001F6B50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6B58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 187u, depth + 1u); else { c.pc = 0x001F58B0u; return; } if (c.pc != 0x001F6B58u) [[unlikely]] return; }
L_001F6B58:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6B64u); set32(c.r[5], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_003D(c, 186u, depth + 1u); else { c.pc = 0x001F5890u; return; } if (c.pc != 0x001F6B64u) [[unlikely]] return; }
L_001F6B64:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6B74u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003D(c, 190u, depth + 1u); else { c.pc = 0x001F5900u; return; } if (c.pc != 0x001F6B74u) [[unlikely]] return; }
L_001F6B74:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 132u);  goto L_001F6BC4; }
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6B88u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 187u, depth + 1u); else { c.pc = 0x001F58B0u; return; } if (c.pc != 0x001F6B88u) [[unlikely]] return; }
L_001F6B88:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 136u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6B9Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_003D(c, 346u, depth + 1u); else { c.pc = 0x001F6C50u; return; } if (c.pc != 0x001F6B9Cu) [[unlikely]] return; }
L_001F6B9C:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6BACu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003D(c, 190u, depth + 1u); else { c.pc = 0x001F5900u; return; } if (c.pc != 0x001F6BACu) [[unlikely]] return; }
L_001F6BAC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001F6C04; } }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001F6C04; } }
L_001F6BC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6BCCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003D(c, 187u, depth + 1u); else { c.pc = 0x001F58B0u; return; } if (c.pc != 0x001F6BCCu) [[unlikely]] return; }
L_001F6BCC:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 132u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6BE0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_003D(c, 186u, depth + 1u); else { c.pc = 0x001F5890u; return; } if (c.pc != 0x001F6BE0u) [[unlikely]] return; }
L_001F6BE0:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 132u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6BF0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003D(c, 190u, depth + 1u); else { c.pc = 0x001F5900u; return; } if (c.pc != 0x001F6BF0u) [[unlikely]] return; }
L_001F6BF0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001F6C04; } }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[21].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001F6C04:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 1;
L_001F6C08:
    set32(c.r[3], c.r[20].w[0] << 2);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6C18u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_003D(c, 180u, depth + 1u); else { c.pc = 0x001F57E0u; return; } if (c.pc != 0x001F6C18u) [[unlikely]] return; }
L_001F6C18:
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
L_001F6C50:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_001F6C70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F6DA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 15168u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_001F6CF4; } }
L_001F6CA0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_001F6CB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001F6CDC; } }
L_001F6CB0:
    st16((c.r[17].w[0] + 150u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 150u));
    set32(c.r[2], ld32((c.r[17].w[0] + 144u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[2].w[0]), 0u);  if (t) { goto L_001F6CDC; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 152u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 152u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001F6CDC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[17].w[0] + 150u));  goto L_001F6CF8; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6CF4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F6CF4u) [[unlikely]] return; }
L_001F6CF4:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 150u));
    c.budget -= 1;
L_001F6CF8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[17].w[0] + 150u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F6CA0u | kUnwind; return; } goto L_001F6CA0; }
    set32(c.r[3], c.r[17].w[0] + 140u);
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 128u);  goto L_001F6D38; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 15056u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[17].w[0] + 140u), c.r[2].w[0]);  if (t) { goto L_001F6D34; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 15040u);
    st32((c.r[17].w[0] + 140u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 144u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6D34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x001F6D34u) [[unlikely]] return; }
L_001F6D34:
    set32(c.r[2], c.r[17].w[0] + 128u);
    c.budget -= 1;
L_001F6D38:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001F6D84; }
    set32(c.r[18], ld32((c.r[17].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001F6D80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6D54u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001F6D54u) [[unlikely]] return; }
L_001F6D54:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6D64u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001F6D64u) [[unlikely]] return; }
L_001F6D64:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F6D80; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6D80u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F6D80u) [[unlikely]] return; }
L_001F6D80:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001F6D84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6D8Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0040(c, 11u, depth + 1u); else { c.pc = 0x00200180u; return; } if (c.pc != 0x001F6D8Cu) [[unlikely]] return; }
L_001F6D8C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001F6DAC; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6DA8u); set32(c.r[5], 0u + 160u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x001F6DA8u) [[unlikely]] return; }
L_001F6DA8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001F6DAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F6DD0:
    set32(c.r[4], ld32((c.r[4].w[0] + 396u)));
    c.budget -= 3;
    { set32(c.r[6], 0u + 1u);  goto L_001F6EB0; }
L_001F6DE0:
    set32(c.r[4], ld32((c.r[4].w[0] + 396u)));
    c.budget -= 3;
    { set32(c.r[6], 0u + 1u);  goto L_001F6E70; }
L_001F6DF0:
    set32(c.r[4], ld32((c.r[4].w[0] + 396u)));
    c.budget -= 3;
    { set32(c.r[6], 0u + 1u);  goto L_001F6E20; }
L_001F6E00:
    set32(c.r[4], ld32((c.r[4].w[0] + 392u)));
    c.budget -= 3;
    { set32(c.r[6], 0u + 1u);  goto L_001F6F50; }
L_001F6E10:
    set32(c.r[4], ld32((c.r[4].w[0] + 392u)));
    c.budget -= 3;
    { set32(c.r[6], 0u + 1u);  goto L_001F6F00; }
L_001F6E20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], c.r[29].w[0] + 44u);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6E4Cu); set32(c.r[8], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F6E4Cu) [[unlikely]] return; }
L_001F6E4C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F6E70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[7], c.r[29].w[0] + 44u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 44u), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6E94u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F6E94u) [[unlikely]] return; }
L_001F6E94:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F6EB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], c.r[29].w[0] + 44u);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6EDCu); set32(c.r[8], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F6EDCu) [[unlikely]] return; }
L_001F6EDC:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F6F00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], c.r[29].w[0] + 44u);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6F2Cu); set32(c.r[8], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F6F2Cu) [[unlikely]] return; }
L_001F6F2C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F6F50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[8], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[7], c.r[29].w[0] + 44u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 44u), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6F74u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F6F74u) [[unlikely]] return; }
L_001F6F74:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F6F90:
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F6FA8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F6FA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F6FC8; } }
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F6FC8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F6FC8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  goto L_001F6FEC; }
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_001F6FE8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F6FE8:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_001F6FEC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001F7054; }
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F7050; } }
    c.f[1] = ld32((c.r[4].w[0] + 16u));
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F7050; } }
    c.f[1] = ld32((c.r[4].w[0] + 20u));
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F7050; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 24u));
    c.r[2].d[0] = ld16((c.r[5].w[0] + 24u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F7050; } }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 26u));
    c.r[2].d[0] = ld16((c.r[5].w[0] + 26u));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_001F7054; }
L_001F7050:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F7054:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F7060:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F707Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 43u, depth + 1u); else { c.pc = 0x002C8570u; return; } if (c.pc != 0x001F707Cu) [[unlikely]] return; }
L_001F707C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7088u); set32(c.r[5], c.r[17].w[0] + 12u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x001F7088u) [[unlikely]] return; }
L_001F7088:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7094u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x001F7094u) [[unlikely]] return; }
L_001F7094:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F70A0u); set32(c.r[5], c.r[17].w[0] + 20u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x001F70A0u) [[unlikely]] return; }
L_001F70A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F70ACu); set32(c.r[5], c.r[17].w[0] + 24u);  if (depth < kMaxDepth) unit_003D(c, 388u, depth + 1u); else { c.pc = 0x001F71A0u; return; } if (c.pc != 0x001F70ACu) [[unlikely]] return; }
L_001F70AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F70B8u); set32(c.r[5], c.r[17].w[0] + 26u);  if (depth < kMaxDepth) unit_003D(c, 388u, depth + 1u); else { c.pc = 0x001F71A0u; return; } if (c.pc != 0x001F70B8u) [[unlikely]] return; }
L_001F70B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F70D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F70ECu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 47u, depth + 1u); else { c.pc = 0x002C85C0u; return; } if (c.pc != 0x001F70ECu) [[unlikely]] return; }
L_001F70EC:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x0A030000u);
    c.r[1].d[0] = c.r[1].d[0] | 5ull;
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001F7114; }
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7110u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 47u, depth + 1u); else { c.pc = 0x002C85C0u; return; } if (c.pc != 0x001F7110u) [[unlikely]] return; }
L_001F7110:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001F7114:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F711Cu); set32(c.r[5], c.r[17].w[0] + 12u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x001F711Cu) [[unlikely]] return; }
L_001F711C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7128u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x001F7128u) [[unlikely]] return; }
L_001F7128:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7134u); set32(c.r[5], c.r[17].w[0] + 20u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x001F7134u) [[unlikely]] return; }
L_001F7134:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7140u); set32(c.r[5], c.r[17].w[0] + 24u);  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x001F7140u) [[unlikely]] return; }
L_001F7140:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F714Cu); set32(c.r[5], c.r[17].w[0] + 26u);  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x001F714Cu) [[unlikely]] return; }
L_001F714C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F7160:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[2].w[0] + 31024u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[4].w[0]), c.f[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[5].w[0] + 31028u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 31032u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st16((c.r[4].w[0] + 24u), static_cast<std::uint16_t>(0u));
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 26u), static_cast<std::uint16_t>(0u));  c.pc = t; return; }
L_001F71A0:
    set32(c.r[4], ld32((c.r[4].w[0] + 396u)));
    c.budget -= 3;
    { set32(c.r[6], 0u + 1u);  goto L_001F7230; }
L_001F71B0:
    set32(c.r[4], ld32((c.r[4].w[0] + 396u)));
    c.budget -= 3;
    { set32(c.r[6], 0u + 1u);  goto L_001F71E0; }
L_001F71C0:
    set32(c.r[4], ld32((c.r[4].w[0] + 392u)));
    c.budget -= 3;
    { set32(c.r[6], 0u + 1u);  goto L_001F72D0; }
L_001F71D0:
    set32(c.r[4], ld32((c.r[4].w[0] + 392u)));
    c.budget -= 3;
    { set32(c.r[6], 0u + 1u);  goto L_001F7280; }
L_001F71E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], c.r[29].w[0] + 44u);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F720Cu); set32(c.r[8], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F720Cu) [[unlikely]] return; }
L_001F720C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F7230:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], c.r[29].w[0] + 44u);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F725Cu); set32(c.r[8], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F725Cu) [[unlikely]] return; }
L_001F725C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F7280:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], c.r[29].w[0] + 44u);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F72ACu); set32(c.r[8], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F72ACu) [[unlikely]] return; }
L_001F72AC:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F72D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], c.r[29].w[0] + 44u);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F72FCu); set32(c.r[8], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F72FCu) [[unlikely]] return; }
L_001F72FC:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F7320:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 28736u));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001F75A8; }
    st8((c.r[28].w[0] - 28736u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7344u); set32(c.r[4], c.r[4].w[0] - 14592u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F7344u) [[unlikely]] return; }
L_001F7344:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7350u); set32(c.r[4], c.r[4].w[0] - 14571u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F7350u) [[unlikely]] return; }
L_001F7350:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F735Cu); set32(c.r[4], c.r[4].w[0] - 14556u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F735Cu) [[unlikely]] return; }
L_001F735C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7368u); set32(c.r[4], c.r[4].w[0] - 14539u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F7368u) [[unlikely]] return; }
L_001F7368:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7374u); set32(c.r[4], c.r[4].w[0] - 14509u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F7374u) [[unlikely]] return; }
L_001F7374:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7380u); set32(c.r[4], c.r[4].w[0] - 14475u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F7380u) [[unlikely]] return; }
L_001F7380:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F738Cu); set32(c.r[4], c.r[4].w[0] - 14452u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F738Cu) [[unlikely]] return; }
L_001F738C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7398u); set32(c.r[4], c.r[4].w[0] - 14427u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F7398u) [[unlikely]] return; }
L_001F7398:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F73A4u); set32(c.r[4], c.r[4].w[0] - 14404u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F73A4u) [[unlikely]] return; }
L_001F73A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F73B0u); set32(c.r[4], c.r[4].w[0] - 14385u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F73B0u) [[unlikely]] return; }
L_001F73B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F73BCu); set32(c.r[4], c.r[4].w[0] - 14359u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F73BCu) [[unlikely]] return; }
L_001F73BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F73C8u); set32(c.r[4], c.r[4].w[0] - 14342u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F73C8u) [[unlikely]] return; }
L_001F73C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F73D4u); set32(c.r[4], c.r[4].w[0] - 14320u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F73D4u) [[unlikely]] return; }
L_001F73D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F73E0u); set32(c.r[4], c.r[4].w[0] - 14300u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F73E0u) [[unlikely]] return; }
L_001F73E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F73ECu); set32(c.r[4], c.r[4].w[0] - 14278u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F73ECu) [[unlikely]] return; }
L_001F73EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F73F8u); set32(c.r[4], c.r[4].w[0] - 14267u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F73F8u) [[unlikely]] return; }
L_001F73F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7404u); set32(c.r[4], c.r[4].w[0] - 14243u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F7404u) [[unlikely]] return; }
L_001F7404:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7410u); set32(c.r[4], c.r[4].w[0] - 14224u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F7410u) [[unlikely]] return; }
L_001F7410:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F741Cu); set32(c.r[4], c.r[4].w[0] - 14206u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F741Cu) [[unlikely]] return; }
L_001F741C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7428u); set32(c.r[4], c.r[4].w[0] - 14184u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F7428u) [[unlikely]] return; }
L_001F7428:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7434u); set32(c.r[4], c.r[4].w[0] - 14155u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F7434u) [[unlikely]] return; }
L_001F7434:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7440u); set32(c.r[4], c.r[4].w[0] - 14123u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F7440u) [[unlikely]] return; }
L_001F7440:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F744Cu); set32(c.r[4], c.r[4].w[0] - 14092u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F744Cu) [[unlikely]] return; }
L_001F744C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7458u); set32(c.r[4], c.r[4].w[0] - 14066u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F7458u) [[unlikely]] return; }
L_001F7458:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7464u); set32(c.r[4], c.r[4].w[0] - 14037u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F7464u) [[unlikely]] return; }
L_001F7464:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7470u); set32(c.r[4], c.r[4].w[0] - 14005u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F7470u) [[unlikely]] return; }
L_001F7470:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F747Cu); set32(c.r[4], c.r[4].w[0] - 13982u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F747Cu) [[unlikely]] return; }
L_001F747C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7488u); set32(c.r[4], c.r[4].w[0] - 13955u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F7488u) [[unlikely]] return; }
L_001F7488:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7494u); set32(c.r[4], c.r[4].w[0] - 13930u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F7494u) [[unlikely]] return; }
L_001F7494:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F74A0u); set32(c.r[4], c.r[4].w[0] - 13903u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F74A0u) [[unlikely]] return; }
L_001F74A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F74ACu); set32(c.r[4], c.r[4].w[0] - 13881u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F74ACu) [[unlikely]] return; }
L_001F74AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F74B8u); set32(c.r[4], c.r[4].w[0] - 13854u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F74B8u) [[unlikely]] return; }
L_001F74B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F74C4u); set32(c.r[4], c.r[4].w[0] - 13828u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F74C4u) [[unlikely]] return; }
L_001F74C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F74D0u); set32(c.r[4], c.r[4].w[0] - 13805u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F74D0u) [[unlikely]] return; }
L_001F74D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F74DCu); set32(c.r[4], c.r[4].w[0] - 13779u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F74DCu) [[unlikely]] return; }
L_001F74DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F74E8u); set32(c.r[4], c.r[4].w[0] - 13750u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F74E8u) [[unlikely]] return; }
L_001F74E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F74F4u); set32(c.r[4], c.r[4].w[0] - 13724u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F74F4u) [[unlikely]] return; }
L_001F74F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7500u); set32(c.r[4], c.r[4].w[0] - 13695u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F7500u) [[unlikely]] return; }
L_001F7500:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F750Cu); set32(c.r[4], c.r[4].w[0] - 13677u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F750Cu) [[unlikely]] return; }
L_001F750C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7518u); set32(c.r[4], c.r[4].w[0] - 13652u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F7518u) [[unlikely]] return; }
L_001F7518:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7524u); set32(c.r[4], c.r[4].w[0] - 13627u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F7524u) [[unlikely]] return; }
L_001F7524:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7530u); set32(c.r[4], c.r[4].w[0] - 13606u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F7530u) [[unlikely]] return; }
L_001F7530:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F753Cu); set32(c.r[4], c.r[4].w[0] - 13583u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F753Cu) [[unlikely]] return; }
L_001F753C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7548u); set32(c.r[4], c.r[4].w[0] - 13557u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F7548u) [[unlikely]] return; }
L_001F7548:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7554u); set32(c.r[4], c.r[4].w[0] - 13535u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F7554u) [[unlikely]] return; }
L_001F7554:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7560u); set32(c.r[4], c.r[4].w[0] - 13512u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F7560u) [[unlikely]] return; }
L_001F7560:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F756Cu); set32(c.r[4], c.r[4].w[0] - 13492u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F756Cu) [[unlikely]] return; }
L_001F756C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7578u); set32(c.r[4], c.r[4].w[0] - 13472u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F7578u) [[unlikely]] return; }
L_001F7578:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7584u); set32(c.r[4], c.r[4].w[0] - 13448u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F7584u) [[unlikely]] return; }
L_001F7584:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7590u); set32(c.r[4], c.r[4].w[0] - 13418u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F7590u) [[unlikely]] return; }
L_001F7590:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F759Cu); set32(c.r[4], c.r[4].w[0] - 13401u);  if (depth < kMaxDepth) unit_0082(c, 252u, depth + 1u); else { c.pc = 0x0030A390u; return; } if (c.pc != 0x001F759Cu) [[unlikely]] return; }
L_001F759C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F75A4u);  if (depth < kMaxDepth) unit_0046(c, 120u, depth + 1u); else { c.pc = 0x002193B0u; return; } if (c.pc != 0x001F75A4u) [[unlikely]] return; }
L_001F75A4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001F75A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F75B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 28736u));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_001F79D4; }
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 28736u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    set32(c.r[4], c.r[4].w[0] - 14592u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F75E0u); set32(c.r[5], c.r[5].w[0] + 17168u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F75E0u) [[unlikely]] return; }
L_001F75E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    set32(c.r[4], c.r[4].w[0] - 14571u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F75F4u); set32(c.r[5], c.r[5].w[0] + 23056u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F75F4u) [[unlikely]] return; }
L_001F75F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    set32(c.r[4], c.r[4].w[0] - 14556u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7608u); set32(c.r[5], c.r[5].w[0] + 32096u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F7608u) [[unlikely]] return; }
L_001F7608:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[4], c.r[4].w[0] - 14539u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F761Cu); set32(c.r[5], c.r[5].w[0] - 26832u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F761Cu) [[unlikely]] return; }
L_001F761C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[4], c.r[4].w[0] - 14509u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7630u); set32(c.r[5], c.r[5].w[0] - 25968u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F7630u) [[unlikely]] return; }
L_001F7630:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[4], c.r[4].w[0] - 14475u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7644u); set32(c.r[5], c.r[5].w[0] - 24208u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F7644u) [[unlikely]] return; }
L_001F7644:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[4], c.r[4].w[0] - 14452u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7658u); set32(c.r[5], c.r[5].w[0] - 19376u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F7658u) [[unlikely]] return; }
L_001F7658:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[4], c.r[4].w[0] - 14427u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F766Cu); set32(c.r[5], c.r[5].w[0] - 28208u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F766Cu) [[unlikely]] return; }
L_001F766C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[4], c.r[4].w[0] - 14404u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7680u); set32(c.r[5], c.r[5].w[0] - 17664u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F7680u) [[unlikely]] return; }
L_001F7680:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[4], c.r[4].w[0] - 14385u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7694u); set32(c.r[5], c.r[5].w[0] - 14400u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F7694u) [[unlikely]] return; }
L_001F7694:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[4], c.r[4].w[0] - 14359u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F76A8u); set32(c.r[5], c.r[5].w[0] - 10592u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F76A8u) [[unlikely]] return; }
L_001F76A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[4], c.r[4].w[0] - 14342u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F76BCu); set32(c.r[5], c.r[5].w[0] - 6256u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F76BCu) [[unlikely]] return; }
L_001F76BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[4], c.r[4].w[0] - 14320u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F76D0u); set32(c.r[5], c.r[5].w[0] - 4608u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F76D0u) [[unlikely]] return; }
L_001F76D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[4], c.r[4].w[0] - 14300u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F76E4u); set32(c.r[5], c.r[5].w[0] - 2960u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F76E4u) [[unlikely]] return; }
L_001F76E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[4], c.r[4].w[0] - 14278u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F76F8u); set32(c.r[5], c.r[5].w[0] - 1264u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F76F8u) [[unlikely]] return; }
L_001F76F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[4], c.r[4].w[0] - 14267u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F770Cu); set32(c.r[5], c.r[5].w[0] + 1792u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F770Cu) [[unlikely]] return; }
L_001F770C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[4], c.r[4].w[0] - 14243u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7720u); set32(c.r[5], c.r[5].w[0] + 5744u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F7720u) [[unlikely]] return; }
L_001F7720:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[4], c.r[4].w[0] - 14224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7734u); set32(c.r[5], c.r[5].w[0] + 12176u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F7734u) [[unlikely]] return; }
L_001F7734:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[4], c.r[4].w[0] - 14206u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7748u); set32(c.r[5], c.r[5].w[0] + 20336u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F7748u) [[unlikely]] return; }
L_001F7748:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[4], c.r[4].w[0] - 14184u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F775Cu); set32(c.r[5], c.r[5].w[0] + 21152u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F775Cu) [[unlikely]] return; }
L_001F775C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[4], c.r[4].w[0] - 14155u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7770u); set32(c.r[5], c.r[5].w[0] + 21872u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F7770u) [[unlikely]] return; }
L_001F7770:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[4], c.r[4].w[0] - 14123u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7784u); set32(c.r[5], c.r[5].w[0] + 22592u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F7784u) [[unlikely]] return; }
L_001F7784:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[4], c.r[4].w[0] - 14092u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7798u); set32(c.r[5], c.r[5].w[0] + 23312u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F7798u) [[unlikely]] return; }
L_001F7798:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[4], c.r[4].w[0] - 14066u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F77ACu); set32(c.r[5], c.r[5].w[0] + 24032u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F77ACu) [[unlikely]] return; }
L_001F77AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[4], c.r[4].w[0] - 14037u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F77C0u); set32(c.r[5], c.r[5].w[0] + 24752u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F77C0u) [[unlikely]] return; }
L_001F77C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[4], c.r[4].w[0] - 14005u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F77D4u); set32(c.r[5], c.r[5].w[0] + 25472u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F77D4u) [[unlikely]] return; }
L_001F77D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[4], c.r[4].w[0] - 13982u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F77E8u); set32(c.r[5], c.r[5].w[0] + 26192u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F77E8u) [[unlikely]] return; }
L_001F77E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[4], c.r[4].w[0] - 13955u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F77FCu); set32(c.r[5], c.r[5].w[0] + 26912u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F77FCu) [[unlikely]] return; }
L_001F77FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[4], c.r[4].w[0] - 13930u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7810u); set32(c.r[5], c.r[5].w[0] + 27632u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F7810u) [[unlikely]] return; }
L_001F7810:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[4], c.r[4].w[0] - 13903u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7824u); set32(c.r[5], c.r[5].w[0] - 31424u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F7824u) [[unlikely]] return; }
L_001F7824:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[4], c.r[4].w[0] - 13881u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7838u); set32(c.r[5], c.r[5].w[0] + 30336u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F7838u) [[unlikely]] return; }
L_001F7838:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[4], c.r[4].w[0] - 13854u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F784Cu); set32(c.r[5], c.r[5].w[0] - 27040u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F784Cu) [[unlikely]] return; }
L_001F784C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[4], c.r[4].w[0] - 13828u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7860u); set32(c.r[5], c.r[5].w[0] - 25904u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F7860u) [[unlikely]] return; }
L_001F7860:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[4], c.r[4].w[0] - 13805u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7874u); set32(c.r[5], c.r[5].w[0] - 24816u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F7874u) [[unlikely]] return; }
L_001F7874:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[4], c.r[4].w[0] - 13779u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7888u); set32(c.r[5], c.r[5].w[0] - 24096u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F7888u) [[unlikely]] return; }
L_001F7888:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[4], c.r[4].w[0] - 13750u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F789Cu); set32(c.r[5], c.r[5].w[0] - 23376u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F789Cu) [[unlikely]] return; }
L_001F789C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[4], c.r[4].w[0] - 13724u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F78B0u); set32(c.r[5], c.r[5].w[0] - 22656u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F78B0u) [[unlikely]] return; }
L_001F78B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[4], c.r[4].w[0] - 13695u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F78C4u); set32(c.r[5], c.r[5].w[0] - 19328u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F78C4u) [[unlikely]] return; }
L_001F78C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[4], c.r[4].w[0] - 13677u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F78D8u); set32(c.r[5], c.r[5].w[0] - 640u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F78D8u) [[unlikely]] return; }
L_001F78D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[4], c.r[4].w[0] - 13652u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F78ECu); set32(c.r[5], c.r[5].w[0] + 5904u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F78ECu) [[unlikely]] return; }
L_001F78EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[4], c.r[4].w[0] - 13627u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7900u); set32(c.r[5], c.r[5].w[0] + 12432u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F7900u) [[unlikely]] return; }
L_001F7900:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[4], c.r[4].w[0] - 13606u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7914u); set32(c.r[5], c.r[5].w[0] + 16512u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F7914u) [[unlikely]] return; }
L_001F7914:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[4], c.r[4].w[0] - 13583u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7928u); set32(c.r[5], c.r[5].w[0] + 17568u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F7928u) [[unlikely]] return; }
L_001F7928:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[4], c.r[4].w[0] - 13557u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F793Cu); set32(c.r[5], c.r[5].w[0] + 20048u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F793Cu) [[unlikely]] return; }
L_001F793C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[4], c.r[4].w[0] - 13535u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7950u); set32(c.r[5], c.r[5].w[0] + 21936u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F7950u) [[unlikely]] return; }
L_001F7950:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[4], c.r[4].w[0] - 13512u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7964u); set32(c.r[5], c.r[5].w[0] + 24384u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F7964u) [[unlikely]] return; }
L_001F7964:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[4], c.r[4].w[0] - 13492u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7978u); set32(c.r[5], c.r[5].w[0] + 28080u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F7978u) [[unlikely]] return; }
L_001F7978:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[4], c.r[4].w[0] - 13472u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F798Cu); set32(c.r[5], c.r[5].w[0] + 29616u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F798Cu) [[unlikely]] return; }
L_001F798C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00210000u);
    set32(c.r[4], c.r[4].w[0] - 13448u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F79A0u); set32(c.r[5], c.r[5].w[0] + 32640u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F79A0u) [[unlikely]] return; }
L_001F79A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[4], c.r[4].w[0] - 13418u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F79B4u); set32(c.r[5], c.r[5].w[0] - 30160u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F79B4u) [[unlikely]] return; }
L_001F79B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[4], c.r[4].w[0] - 13401u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F79C8u); set32(c.r[5], c.r[5].w[0] - 23376u);  if (depth < kMaxDepth) unit_0082(c, 262u, depth + 1u); else { c.pc = 0x0030A520u; return; } if (c.pc != 0x001F79C8u) [[unlikely]] return; }
L_001F79C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F79D0u);  if (depth < kMaxDepth) unit_0046(c, 152u, depth + 1u); else { c.pc = 0x00219710u; return; } if (c.pc != 0x001F79D0u) [[unlikely]] return; }
L_001F79D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001F79D4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F79E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], ld32((c.r[28].w[0] - 28732u)));
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[28].w[0] - 28732u), c.r[2].w[0]);  if (t) { goto L_001F7A14; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    set32(c.r[4], c.r[4].w[0] + 30128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7A14u); set32(c.r[5], c.r[5].w[0] + 29472u);  if (depth < kMaxDepth) unit_0047(c, 186u, depth + 1u); else { c.pc = 0x0021DB80u; return; } if (c.pc != 0x001F7A14u) [[unlikely]] return; }
L_001F7A14:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F7A30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 13368u);  c.pc = t; return; }
L_001F7A40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7A5Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 364u, depth + 1u); else { c.pc = 0x002C3120u; return; } if (c.pc != 0x001F7A5Cu) [[unlikely]] return; }
L_001F7A5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7A68u); set32(c.r[4], ld32((c.r[2].w[0] - 13368u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x001F7A68u) [[unlikely]] return; }
L_001F7A68:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[17].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7A7Cu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x001F7A7Cu) [[unlikely]] return; }
L_001F7A7C:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 256u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7A8Cu); set32(c.r[4], c.r[4].w[0] - 13360u);  if (depth < kMaxDepth) unit_0088(c, 253u, depth + 1u); else { c.pc = 0x00321DC0u; return; } if (c.pc != 0x001F7A8Cu) [[unlikely]] return; }
L_001F7A8C:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[17].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7AA0u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x001F7AA0u) [[unlikely]] return; }
L_001F7AA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[16].w[0] + 264u)));  if (t) { goto L_001F7ABC; } }
L_001F7AA8:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[16], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 44u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7ABCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F7ABCu) [[unlikely]] return; }
L_001F7ABC:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F7AA8u | kUnwind; return; } goto L_001F7AA8; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F7AE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7AFCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 368u, depth + 1u); else { c.pc = 0x002C3170u; return; } if (c.pc != 0x001F7AFCu) [[unlikely]] return; }
L_001F7AFC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[17].w[0] + 256u));  goto L_001F7B0C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F7B9C; } }
L_001F7B0C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 256u));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001F7B9C; }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 281u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 281u));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[17], ld32((c.r[17].w[0] + 264u)));  goto L_001F7B90; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F7B9C; } }
L_001F7B34:
    set32(c.r[7], ld32((c.r[16].w[0] + 264u)));
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[4].w[0] + 8u);  if (t) { goto L_001F7B64; } }
L_001F7B44:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[7], ld32((c.r[7].w[0])));  if (t) { goto L_001F7B64; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F7B64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[4].w[0])));  if (t) { goto L_001F7B74; } }
L_001F7B64:
    c.budget -= 2;
    if (c.r[7].d[0] != 0ull) { set32(c.r[5], ld32((c.r[7].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F7B44u | kUnwind; return; } goto L_001F7B44; }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.budget -= 2;
L_001F7B74:
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7B80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F7B80u) [[unlikely]] return; }
L_001F7B80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F7B90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F7B9C; } }
L_001F7B90:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F7B34u | kUnwind; return; } goto L_001F7B34; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001F7B9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F7BB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7BCCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 369u, depth + 1u); else { c.pc = 0x002C3180u; return; } if (c.pc != 0x001F7BCCu) [[unlikely]] return; }
L_001F7BCC:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 256u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 63u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7BE0u); st8((c.r[29].w[0] + 63u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x001F7BE0u) [[unlikely]] return; }
L_001F7BE0:
    set32(c.r[2], ld32((c.r[16].w[0] + 272u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 56u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7BF4u); st32((c.r[29].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x001F7BF4u) [[unlikely]] return; }
L_001F7BF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[16].w[0] + 264u)));  if (t) { goto L_001F7C10; } }
L_001F7BFC:
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7C10u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F7C10u) [[unlikely]] return; }
L_001F7C10:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[25], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F7BFCu | kUnwind; return; } goto L_001F7BFC; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F7C30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7C4Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 370u, depth + 1u); else { c.pc = 0x002C3190u; return; } if (c.pc != 0x001F7C4Cu) [[unlikely]] return; }
L_001F7C4C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[16].w[0] + 264u)));  goto L_001F7C70; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001F7C7C; } }
L_001F7C5C:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[16], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7C70u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F7C70u) [[unlikely]] return; }
L_001F7C70:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F7C5Cu | kUnwind; return; } goto L_001F7C5C; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001F7C7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F7C90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7CB4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0070(c, 371u, depth + 1u); else { c.pc = 0x002C31A0u; return; } if (c.pc != 0x001F7CB4u) [[unlikely]] return; }
L_001F7CB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7CBCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 104u, depth + 1u); else { c.pc = 0x0030CAE0u; return; } if (c.pc != 0x001F7CBCu) [[unlikely]] return; }
L_001F7CBC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001F7CE0; } }
L_001F7CC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7CD0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x001F7CD0u) [[unlikely]] return; }
L_001F7CD0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7CDCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x001F7CDCu) [[unlikely]] return; }
L_001F7CDC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001F7CE0:
    c.r[3].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F7CC8u | kUnwind; return; } goto L_001F7CC8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001F7D10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7D2Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 372u, depth + 1u); else { c.pc = 0x002C31B0u; return; } if (c.pc != 0x001F7D2Cu) [[unlikely]] return; }
L_001F7D2C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7D38u); set32(c.r[5], c.r[29].w[0] + 63u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x001F7D38u) [[unlikely]] return; }
L_001F7D38:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 63u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7D4Cu); st8((c.r[17].w[0] + 256u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0083(c, 105u, depth + 1u); else { c.pc = 0x0030CB00u; return; } if (c.pc != 0x001F7D4Cu) [[unlikely]] return; }
L_001F7D4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F7D60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 352u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7D78u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x001F7D78u) [[unlikely]] return; }
L_001F7D78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001F7DE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7D88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 406u, depth + 1u); else { c.pc = 0x002C3550u; return; } if (c.pc != 0x001F7D88u) [[unlikely]] return; }
L_001F7D88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 14992u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[16].w[0] + 256u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] - 15264u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[16].w[0] + 260u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 15232u);
    st32((c.r[16].w[0] + 272u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[16].w[0] + 264u), 0u);
    set32(c.r[2], c.r[2].w[0] - 15200u);
    st32((c.r[16].w[0] + 268u), 0u);
    st32((c.r[16].w[0] + 260u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 260u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 276u), c.f[0]);
    st8((c.r[16].w[0] + 280u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 281u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 300u), 0u);
    st32((c.r[16].w[0] + 316u), 0u);
    st32((c.r[16].w[0] + 332u), 0u);
    c.budget -= 24;
L_001F7DE8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F7E00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001F7E4C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 12928u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7E30u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0069(c, 225u, depth + 1u); else { c.pc = 0x002A5BA0u; return; } if (c.pc != 0x001F7E30u) [[unlikely]] return; }
L_001F7E30:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001F7E50; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7E4Cu); set32(c.r[5], 0u + 256u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x001F7E4Cu) [[unlikely]] return; }
L_001F7E4C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001F7E50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F7E70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7E90u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0069(c, 56u, depth + 1u); else { c.pc = 0x002A45D0u; return; } if (c.pc != 0x001F7E90u) [[unlikely]] return; }
L_001F7E90:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::divu(c, 0, c.r[17].w[0], c.r[2].w[0]);  if (t) { goto L_001F7EA4; } }
    breakpoint(c, 0x001F7EA0u);
    c.budget -= 1;
L_001F7EA4:
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[2].w[0])));  if (t) { goto L_001F7ECC; } }
L_001F7EBC:
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[18], ld32((c.r[17].w[0] + 264u)));  goto L_001F7EFC; }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 1;
L_001F7ECC:
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F7EBCu | kUnwind; return; } goto L_001F7EBC; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 264u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F7EFC; } }
L_001F7EE8:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[18], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7EFCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F7EFCu) [[unlikely]] return; }
L_001F7EFC:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001F7EE8u | kUnwind; return; } goto L_001F7EE8; }
    set32(c.r[4], ld32((c.r[17].w[0] + 220u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7F18u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F7F18u) [[unlikely]] return; }
L_001F7F18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F7F30:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7F64u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0070(c, 376u, depth + 1u); else { c.pc = 0x002C3210u; return; } if (c.pc != 0x001F7F64u) [[unlikely]] return; }
L_001F7F64:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 256u));
    st8((c.r[18].w[0] + 256u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[19].w[0] + 264u)));  if (t) { [[clang::musttail]] return unit_003E(c, 8u, depth); } }
L_001F7F74:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[16], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7F88u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F7F88u) [[unlikely]] return; }
L_001F7F88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 140u), c.r[2].w[0]);  if (t) { goto L_001F7FAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7F98u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001F7F98u) [[unlikely]] return; }
L_001F7F98:
    set32(c.r[3], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7FACu); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001F7FACu) [[unlikely]] return; }
L_001F7FAC:
    set32(c.r[25], ld32((c.r[18].w[0] + 260u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7FBCu); set32(c.r[4], c.r[18].w[0] + 260u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F7FBCu) [[unlikely]] return; }
L_001F7FBC:
    set32(c.r[20], ld32((c.r[2].w[0] + 8u)));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    c.budget -= 5;
    { const bool t = c.r[20].d[0] == c.r[2].d[0]; set32(c.r[22], c.r[21].w[0] + 8u);  if (t) { [[clang::musttail]] return unit_003E(c, 5u, depth); } }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[20], ld32((c.r[29].w[0] + 140u)));  [[clang::musttail]] return unit_003E(c, 3u, depth); }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7FE0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x001F7FE0u) [[unlikely]] return; }
L_001F7FE0:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7FF0u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x001F7FF0u) [[unlikely]] return; }
L_001F7FF0:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_003E(c, 2u, depth); } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.budget -= 1;
    [[clang::musttail]] return unit_003E(c, 1u, depth);
}

}
