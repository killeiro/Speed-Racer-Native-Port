#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0072[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 13, 0, 0, 14, 0, 0, 15,
    0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0,
    0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    27, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0,
    32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38,
    0, 0, 39, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0,
    0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 50,
    0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0,
    54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0,
    61, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0,
    0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0,
    0, 77, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    92, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0,
    99, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0,
    105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109,
    0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 115,
    0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0,
    0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 126,
    0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132,
    0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0,
    0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0,
    0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149,
    0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 155,
    0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0,
    0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0,
    166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0,
    0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 174, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0,
    0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 187, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 192,
    0, 0, 193, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 200, 0, 0, 201, 0, 0,
    0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0,
    241, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 251, 0, 0, 252, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0,
    260, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 265, 0, 0, 0,
    0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0,
    0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0,
    0, 275, 0, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0,
    0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 283, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 0,
    0, 0, 0, 290, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0,
    296, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 304, 0, 0, 305, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0,
    309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 313,
    0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0,
    0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 321, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329,
    0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 0, 0,
    0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 342,
    0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0,
    346, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 356, 0, 357, 0, 358, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 363, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0,
    0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0,
    370, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0,
    0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0,
    0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0,
    0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 0, 0, 386, 0,
    0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0,
    0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 396,
    0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 398, 0, 0, 399, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0,
    0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 0, 0, 407, 0, 0,
    0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 0, 0, 411, 0, 412, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 416, 0, 0, 417, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 419, 0, 0,
    0, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 0, 425, 0, 0,
    0, 426, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 434, 0, 0, 0, 435, 0, 0, 0, 0, 0, 436, 0, 0, 0,
    0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 441,
    0, 0, 0, 0, 442, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 445, 0, 0, 446, 0, 0, 0, 0, 447, 0, 0,
    0, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 0, 452, 0, 0, 0, 453, 0, 0, 0, 0, 0, 454, 0,
    0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 458, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    461, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0,
    0, 465, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 472, 0, 0, 0, 473, 0, 0, 0,
    474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    477, 0, 0, 0, 478, 0, 0, 0, 0, 479, 0, 0, 480, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 483, 0, 0, 0,
    484, 0, 0, 0, 485, 0, 0, 0, 486, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 492, 0, 0, 0,
    493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 496, 0,
    0, 0, 497, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 499, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0,
};

void unit_0072(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002C8000;
    case 2u: goto L_002C8020;
    case 3u: goto L_002C8054;
    case 4u: goto L_002C8080;
    case 5u: goto L_002C80B4;
    case 6u: goto L_002C80E0;
    case 7u: goto L_002C8114;
    case 8u: goto L_002C8140;
    case 9u: goto L_002C8174;
    case 10u: goto L_002C81A0;
    case 11u: goto L_002C81C8;
    case 12u: goto L_002C81D8;
    case 13u: goto L_002C81E4;
    case 14u: goto L_002C81F0;
    case 15u: goto L_002C81FC;
    case 16u: goto L_002C8208;
    case 17u: goto L_002C822C;
    case 18u: goto L_002C8250;
    case 19u: goto L_002C826C;
    case 20u: goto L_002C8278;
    case 21u: goto L_002C8290;
    case 22u: goto L_002C82AC;
    case 23u: goto L_002C82B8;
    case 24u: goto L_002C82D0;
    case 25u: goto L_002C8320;
    case 26u: goto L_002C8350;
    case 27u: goto L_002C8380;
    case 28u: goto L_002C83A4;
    case 29u: goto L_002C83B0;
    case 30u: goto L_002C83D0;
    case 31u: goto L_002C83F4;
    case 32u: goto L_002C8400;
    case 33u: goto L_002C8420;
    case 34u: goto L_002C843C;
    case 35u: goto L_002C8448;
    case 36u: goto L_002C84C0;
    case 37u: goto L_002C84EC;
    case 38u: goto L_002C84FC;
    case 39u: goto L_002C8508;
    case 40u: goto L_002C8514;
    case 41u: goto L_002C8520;
    case 42u: goto L_002C8544;
    case 43u: goto L_002C8570;
    case 44u: goto L_002C8594;
    case 45u: goto L_002C85A0;
    case 46u: goto L_002C85AC;
    case 47u: goto L_002C85C0;
    case 48u: goto L_002C85E4;
    case 49u: goto L_002C85F0;
    case 50u: goto L_002C85FC;
    case 51u: goto L_002C8610;
    case 52u: goto L_002C8640;
    case 53u: goto L_002C865C;
    case 54u: goto L_002C8680;
    case 55u: goto L_002C8690;
    case 56u: goto L_002C86AC;
    case 57u: goto L_002C86B8;
    case 58u: goto L_002C86CC;
    case 59u: goto L_002C86DC;
    case 60u: goto L_002C86F0;
    case 61u: goto L_002C8700;
    case 62u: goto L_002C8714;
    case 63u: goto L_002C8724;
    case 64u: goto L_002C8738;
    case 65u: goto L_002C8750;
    case 66u: goto L_002C876C;
    case 67u: goto L_002C87D0;
    case 68u: goto L_002C87EC;
    case 69u: goto L_002C87F8;
    case 70u: goto L_002C8804;
    case 71u: goto L_002C8810;
    case 72u: goto L_002C8830;
    case 73u: goto L_002C8840;
    case 74u: goto L_002C8850;
    case 75u: goto L_002C886C;
    case 76u: goto L_002C8878;
    case 77u: goto L_002C8884;
    case 78u: goto L_002C8890;
    case 79u: goto L_002C88B0;
    case 80u: goto L_002C88C8;
    case 81u: goto L_002C88D8;
    case 82u: goto L_002C8910;
    case 83u: goto L_002C892C;
    case 84u: goto L_002C8960;
    case 85u: goto L_002C8988;
    case 86u: goto L_002C8998;
    case 87u: goto L_002C89CC;
    case 88u: goto L_002C8A00;
    case 89u: goto L_002C8A14;
    case 90u: goto L_002C8A30;
    case 91u: goto L_002C8A44;
    case 92u: goto L_002C8A80;
    case 93u: goto L_002C8A94;
    case 94u: goto L_002C8AA0;
    case 95u: goto L_002C8AB4;
    case 96u: goto L_002C8AD0;
    case 97u: goto L_002C8AE0;
    case 98u: goto L_002C8AF0;
    case 99u: goto L_002C8B00;
    case 100u: goto L_002C8B10;
    case 101u: goto L_002C8B20;
    case 102u: goto L_002C8B30;
    case 103u: goto L_002C8B4C;
    case 104u: goto L_002C8B5C;
    case 105u: goto L_002C8B80;
    case 106u: goto L_002C8BBC;
    case 107u: goto L_002C8BCC;
    case 108u: goto L_002C8BE8;
    case 109u: goto L_002C8BFC;
    case 110u: goto L_002C8C0C;
    case 111u: goto L_002C8C2C;
    case 112u: goto L_002C8C3C;
    case 113u: goto L_002C8C58;
    case 114u: goto L_002C8C6C;
    case 115u: goto L_002C8C7C;
    case 116u: goto L_002C8C9C;
    case 117u: goto L_002C8CAC;
    case 118u: goto L_002C8CC8;
    case 119u: goto L_002C8CDC;
    case 120u: goto L_002C8CEC;
    case 121u: goto L_002C8D0C;
    case 122u: goto L_002C8D1C;
    case 123u: goto L_002C8D38;
    case 124u: goto L_002C8D4C;
    case 125u: goto L_002C8D5C;
    case 126u: goto L_002C8D7C;
    case 127u: goto L_002C8D8C;
    case 128u: goto L_002C8DA8;
    case 129u: goto L_002C8DBC;
    case 130u: goto L_002C8DCC;
    case 131u: goto L_002C8DEC;
    case 132u: goto L_002C8DFC;
    case 133u: goto L_002C8E18;
    case 134u: goto L_002C8E2C;
    case 135u: goto L_002C8E3C;
    case 136u: goto L_002C8E5C;
    case 137u: goto L_002C8E6C;
    case 138u: goto L_002C8E88;
    case 139u: goto L_002C8E9C;
    case 140u: goto L_002C8EAC;
    case 141u: goto L_002C8ECC;
    case 142u: goto L_002C8EDC;
    case 143u: goto L_002C8EF8;
    case 144u: goto L_002C8F0C;
    case 145u: goto L_002C8F1C;
    case 146u: goto L_002C8F3C;
    case 147u: goto L_002C8F4C;
    case 148u: goto L_002C8F68;
    case 149u: goto L_002C8F7C;
    case 150u: goto L_002C8F8C;
    case 151u: goto L_002C8FAC;
    case 152u: goto L_002C8FBC;
    case 153u: goto L_002C8FD8;
    case 154u: goto L_002C8FEC;
    case 155u: goto L_002C8FFC;
    case 156u: goto L_002C901C;
    case 157u: goto L_002C902C;
    case 158u: goto L_002C9048;
    case 159u: goto L_002C905C;
    case 160u: goto L_002C906C;
    case 161u: goto L_002C9090;
    case 162u: goto L_002C90A0;
    case 163u: goto L_002C90BC;
    case 164u: goto L_002C90D0;
    case 165u: goto L_002C90E0;
    case 166u: goto L_002C9100;
    case 167u: goto L_002C9140;
    case 168u: goto L_002C9158;
    case 169u: goto L_002C9168;
    case 170u: goto L_002C9184;
    case 171u: goto L_002C91A0;
    case 172u: goto L_002C91DC;
    case 173u: goto L_002C91EC;
    case 174u: goto L_002C9218;
    case 175u: goto L_002C9220;
    case 176u: goto L_002C9248;
    case 177u: goto L_002C9258;
    case 178u: goto L_002C9274;
    case 179u: goto L_002C928C;
    case 180u: goto L_002C929C;
    case 181u: goto L_002C92E0;
    case 182u: goto L_002C9308;
    case 183u: goto L_002C9318;
    case 184u: goto L_002C9330;
    case 185u: goto L_002C9354;
    case 186u: goto L_002C9364;
    case 187u: goto L_002C9390;
    case 188u: goto L_002C9398;
    case 189u: goto L_002C93B0;
    case 190u: goto L_002C93E0;
    case 191u: goto L_002C93F0;
    case 192u: goto L_002C93FC;
    case 193u: goto L_002C9408;
    case 194u: goto L_002C9414;
    case 195u: goto L_002C9420;
    case 196u: goto L_002C9448;
    case 197u: goto L_002C9470;
    case 198u: goto L_002C9550;
    case 199u: goto L_002C955C;
    case 200u: goto L_002C9568;
    case 201u: goto L_002C9574;
    case 202u: goto L_002C9590;
    case 203u: goto L_002C95B4;
    case 204u: goto L_002C95C0;
    case 205u: goto L_002C95CC;
    case 206u: goto L_002C95D8;
    case 207u: goto L_002C95F0;
    case 208u: goto L_002C9678;
    case 209u: goto L_002C96B0;
    case 210u: goto L_002C9874;
    case 211u: goto L_002C9940;
    case 212u: goto L_002C99F4;
    case 213u: goto L_002C9A60;
    case 214u: goto L_002C9A94;
    case 215u: goto L_002C9AA8;
    case 216u: goto L_002C9AD8;
    case 217u: goto L_002C9B00;
    case 218u: goto L_002C9BB8;
    case 219u: goto L_002C9BC4;
    case 220u: goto L_002C9C54;
    case 221u: goto L_002C9C60;
    case 222u: goto L_002C9CD0;
    case 223u: goto L_002C9CDC;
    case 224u: goto L_002C9D90;
    case 225u: goto L_002C9DB4;
    case 226u: goto L_002C9DC0;
    case 227u: goto L_002C9E30;
    case 228u: goto L_002C9E60;
    case 229u: goto L_002C9EE0;
    case 230u: goto L_002C9F20;
    case 231u: goto L_002C9F70;
    case 232u: goto L_002C9FC0;
    case 233u: goto L_002C9FE0;
    case 234u: goto L_002C9FF0;
    case 235u: goto L_002CA01C;
    case 236u: goto L_002CA030;
    case 237u: goto L_002CA040;
    case 238u: goto L_002CA054;
    case 239u: goto L_002CA064;
    case 240u: goto L_002CA078;
    case 241u: goto L_002CA080;
    case 242u: goto L_002CA088;
    case 243u: goto L_002CA0A0;
    case 244u: goto L_002CA0AC;
    case 245u: goto L_002CA0CC;
    case 246u: goto L_002CA0DC;
    case 247u: goto L_002CA110;
    case 248u: goto L_002CA128;
    case 249u: goto L_002CA190;
    case 250u: goto L_002CA1B4;
    case 251u: goto L_002CA1C0;
    case 252u: goto L_002CA1CC;
    case 253u: goto L_002CA1D4;
    case 254u: goto L_002CA1E4;
    case 255u: goto L_002CA1F8;
    case 256u: goto L_002CA230;
    case 257u: goto L_002CA240;
    case 258u: goto L_002CA250;
    case 259u: goto L_002CA274;
    case 260u: goto L_002CA280;
    case 261u: goto L_002CA28C;
    case 262u: goto L_002CA2B0;
    case 263u: goto L_002CA2C4;
    case 264u: goto L_002CA2E4;
    case 265u: goto L_002CA2F0;
    case 266u: goto L_002CA304;
    case 267u: goto L_002CA314;
    case 268u: goto L_002CA328;
    case 269u: goto L_002CA360;
    case 270u: goto L_002CA378;
    case 271u: goto L_002CA388;
    case 272u: goto L_002CA3E0;
    case 273u: goto L_002CA450;
    case 274u: goto L_002CA464;
    case 275u: goto L_002CA484;
    case 276u: goto L_002CA490;
    case 277u: goto L_002CA4AC;
    case 278u: goto L_002CA4D0;
    case 279u: goto L_002CA4F8;
    case 280u: goto L_002CA508;
    case 281u: goto L_002CA550;
    case 282u: goto L_002CA570;
    case 283u: goto L_002CA598;
    case 284u: goto L_002CA5A4;
    case 285u: goto L_002CA600;
    case 286u: goto L_002CA654;
    case 287u: goto L_002CA6A0;
    case 288u: goto L_002CA6D8;
    case 289u: goto L_002CA6EC;
    case 290u: goto L_002CA70C;
    case 291u: goto L_002CA718;
    case 292u: goto L_002CA740;
    case 293u: goto L_002CA768;
    case 294u: goto L_002CA778;
    case 295u: goto L_002CA7EC;
    case 296u: goto L_002CA800;
    case 297u: goto L_002CA820;
    case 298u: goto L_002CA82C;
    case 299u: goto L_002CA848;
    case 300u: goto L_002CA870;
    case 301u: goto L_002CA8C0;
    case 302u: goto L_002CA8F8;
    case 303u: goto L_002CA950;
    case 304u: goto L_002CA984;
    case 305u: goto L_002CA990;
    case 306u: goto L_002CA9AC;
    case 307u: goto L_002CA9D0;
    case 308u: goto L_002CA9EC;
    case 309u: goto L_002CAA00;
    case 310u: goto L_002CAA34;
    case 311u: goto L_002CAA44;
    case 312u: goto L_002CAA60;
    case 313u: goto L_002CAA7C;
    case 314u: goto L_002CAAA0;
    case 315u: goto L_002CAAE8;
    case 316u: goto L_002CAAF8;
    case 317u: goto L_002CAB14;
    case 318u: goto L_002CAB44;
    case 319u: goto L_002CAB50;
    case 320u: goto L_002CABAC;
    case 321u: goto L_002CABB8;
    case 322u: goto L_002CABD4;
    case 323u: goto L_002CABF0;
    case 324u: goto L_002CAC18;
    case 325u: goto L_002CAC28;
    case 326u: goto L_002CAC40;
    case 327u: goto L_002CAC50;
    case 328u: goto L_002CAC60;
    case 329u: goto L_002CACFC;
    case 330u: goto L_002CAD18;
    case 331u: goto L_002CAD38;
    case 332u: goto L_002CAD48;
    case 333u: goto L_002CAD7C;
    case 334u: goto L_002CADB8;
    case 335u: goto L_002CADD8;
    case 336u: goto L_002CADE8;
    case 337u: goto L_002CAE0C;
    case 338u: goto L_002CAE2C;
    case 339u: goto L_002CAE3C;
    case 340u: goto L_002CAE58;
    case 341u: goto L_002CAE6C;
    case 342u: goto L_002CAE7C;
    case 343u: goto L_002CAE94;
    case 344u: goto L_002CAEB8;
    case 345u: goto L_002CAEF0;
    case 346u: goto L_002CAF00;
    case 347u: goto L_002CAF10;
    case 348u: goto L_002CAF20;
    case 349u: goto L_002CAF30;
    case 350u: goto L_002CAF50;
    case 351u: goto L_002CB030;
    case 352u: goto L_002CB040;
    case 353u: goto L_002CB050;
    case 354u: goto L_002CB080;
    case 355u: goto L_002CB0AC;
    case 356u: goto L_002CB0B4;
    case 357u: goto L_002CB0BC;
    case 358u: goto L_002CB0C4;
    case 359u: goto L_002CB0CC;
    case 360u: goto L_002CB0F4;
    case 361u: goto L_002CB120;
    case 362u: goto L_002CB134;
    case 363u: goto L_002CB140;
    case 364u: goto L_002CB154;
    case 365u: goto L_002CB170;
    case 366u: goto L_002CB190;
    case 367u: goto L_002CB1B0;
    case 368u: goto L_002CB1D0;
    case 369u: goto L_002CB1F0;
    case 370u: goto L_002CB200;
    case 371u: goto L_002CB210;
    case 372u: goto L_002CB238;
    case 373u: goto L_002CB250;
    case 374u: goto L_002CB278;
    case 375u: goto L_002CB290;
    case 376u: goto L_002CB2B8;
    case 377u: goto L_002CB2D0;
    case 378u: goto L_002CB2F8;
    case 379u: goto L_002CB310;
    case 380u: goto L_002CB338;
    case 381u: goto L_002CB350;
    case 382u: goto L_002CB378;
    case 383u: goto L_002CB390;
    case 384u: goto L_002CB3D0;
    case 385u: goto L_002CB3E4;
    case 386u: goto L_002CB3F8;
    case 387u: goto L_002CB418;
    case 388u: goto L_002CB428;
    case 389u: goto L_002CB444;
    case 390u: goto L_002CB464;
    case 391u: goto L_002CB474;
    case 392u: goto L_002CB490;
    case 393u: goto L_002CB4B0;
    case 394u: goto L_002CB4C0;
    case 395u: goto L_002CB4DC;
    case 396u: goto L_002CB4FC;
    case 397u: goto L_002CB50C;
    case 398u: goto L_002CB528;
    case 399u: goto L_002CB534;
    case 400u: goto L_002CB550;
    case 401u: goto L_002CB570;
    case 402u: goto L_002CB58C;
    case 403u: goto L_002CB5AC;
    case 404u: goto L_002CB5BC;
    case 405u: goto L_002CB5D0;
    case 406u: goto L_002CB5E0;
    case 407u: goto L_002CB5F4;
    case 408u: goto L_002CB604;
    case 409u: goto L_002CB618;
    case 410u: goto L_002CB628;
    case 411u: goto L_002CB640;
    case 412u: goto L_002CB648;
    case 413u: goto L_002CB650;
    case 414u: goto L_002CB694;
    case 415u: goto L_002CB6A8;
    case 416u: goto L_002CB6B8;
    case 417u: goto L_002CB6C4;
    case 418u: goto L_002CB6E0;
    case 419u: goto L_002CB6F4;
    case 420u: goto L_002CB710;
    case 421u: goto L_002CB720;
    case 422u: goto L_002CB73C;
    case 423u: goto L_002CB750;
    case 424u: goto L_002CB760;
    case 425u: goto L_002CB774;
    case 426u: goto L_002CB784;
    case 427u: goto L_002CB7A0;
    case 428u: goto L_002CB7C0;
    case 429u: goto L_002CB7D0;
    case 430u: goto L_002CB7E0;
    case 431u: goto L_002CB808;
    case 432u: goto L_002CB818;
    case 433u: goto L_002CB834;
    case 434u: goto L_002CB848;
    case 435u: goto L_002CB858;
    case 436u: goto L_002CB870;
    case 437u: goto L_002CB88C;
    case 438u: goto L_002CB89C;
    case 439u: goto L_002CB8D0;
    case 440u: goto L_002CB8E0;
    case 441u: goto L_002CB8FC;
    case 442u: goto L_002CB910;
    case 443u: goto L_002CB920;
    case 444u: goto L_002CB940;
    case 445u: goto L_002CB954;
    case 446u: goto L_002CB960;
    case 447u: goto L_002CB974;
    case 448u: goto L_002CB990;
    case 449u: goto L_002CB9A0;
    case 450u: goto L_002CB9B0;
    case 451u: goto L_002CB9C0;
    case 452u: goto L_002CB9D0;
    case 453u: goto L_002CB9E0;
    case 454u: goto L_002CB9F8;
    case 455u: goto L_002CBA08;
    case 456u: goto L_002CBA40;
    case 457u: goto L_002CBA68;
    case 458u: goto L_002CBA78;
    case 459u: goto L_002CBAA0;
    case 460u: goto L_002CBAC0;
    case 461u: goto L_002CBB00;
    case 462u: goto L_002CBB1C;
    case 463u: goto L_002CBB40;
    case 464u: goto L_002CBB74;
    case 465u: goto L_002CBB84;
    case 466u: goto L_002CBBA0;
    case 467u: goto L_002CBBBC;
    case 468u: goto L_002CBBE0;
    case 469u: goto L_002CBC1C;
    case 470u: goto L_002CBC2C;
    case 471u: goto L_002CBC48;
    case 472u: goto L_002CBC60;
    case 473u: goto L_002CBC70;
    case 474u: goto L_002CBC80;
    case 475u: goto L_002CBCB0;
    case 476u: goto L_002CBCCC;
    case 477u: goto L_002CBD00;
    case 478u: goto L_002CBD10;
    case 479u: goto L_002CBD24;
    case 480u: goto L_002CBD30;
    case 481u: goto L_002CBD44;
    case 482u: goto L_002CBD60;
    case 483u: goto L_002CBD70;
    case 484u: goto L_002CBD80;
    case 485u: goto L_002CBD90;
    case 486u: goto L_002CBDA0;
    case 487u: goto L_002CBDB0;
    case 488u: goto L_002CBDD0;
    case 489u: goto L_002CBE10;
    case 490u: goto L_002CBE40;
    case 491u: goto L_002CBE60;
    case 492u: goto L_002CBE70;
    case 493u: goto L_002CBE80;
    case 494u: goto L_002CBEB0;
    case 495u: goto L_002CBEDC;
    case 496u: goto L_002CBEF8;
    case 497u: goto L_002CBF08;
    case 498u: goto L_002CBF24;
    case 499u: goto L_002CBF38;
    case 500u: goto L_002CBF48;
    case 501u: goto L_002CBF70;
    case 502u: goto L_002CBFA0;
    case 503u: goto L_002CBFD4;
    case 504u: goto L_002CBFE4;
    default: bad_entry(c, 0x002C8000u); return;
    }
L_002C8000:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C8020:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[6], 0u + 4u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[7], c.r[29].w[0] + 56u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[8], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 56u), c.r[6].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8054u); set32(c.r[5], c.r[29].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C8054u) [[unlikely]] return; }
L_002C8054:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C8080:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[6], 0u + 4u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[7], c.r[29].w[0] + 56u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[8], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 56u), c.r[6].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C80B4u); set32(c.r[5], c.r[29].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C80B4u) [[unlikely]] return; }
L_002C80B4:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C80E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[6], 0u + 4u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[7], c.r[29].w[0] + 56u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[8], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 56u), c.r[6].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8114u); set32(c.r[5], c.r[29].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C8114u) [[unlikely]] return; }
L_002C8114:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C8140:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[6], 0u + 4u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[7], c.r[29].w[0] + 56u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[8], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 56u), c.r[6].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8174u); set32(c.r[5], c.r[29].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C8174u) [[unlikely]] return; }
L_002C8174:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C81A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C81C8u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x002C81C8u) [[unlikely]] return; }
L_002C81C8:
    set32(c.r[20], c.r[2].w[0] + 56u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C81D8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002C81D8u) [[unlikely]] return; }
L_002C81D8:
    c.f[12] = ld32((c.r[16].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C81E4u); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x002C81E4u) [[unlikely]] return; }
L_002C81E4:
    c.f[12] = ld32((c.r[16].w[0] + 4u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C81F0u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x002C81F0u) [[unlikely]] return; }
L_002C81F0:
    c.f[12] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C81FCu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x002C81FCu) [[unlikely]] return; }
L_002C81FC:
    c.f[12] = ld32((c.r[16].w[0] + 12u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8208u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x002C8208u) [[unlikely]] return; }
L_002C8208:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.r[10].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C822Cu); set32(c.r[6], c.r[6].w[0] + 30984u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x002C822Cu) [[unlikely]] return; }
L_002C822C:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002C8250:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C826Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 43u, depth + 1u); else { c.pc = 0x002C8570u; return; } if (c.pc != 0x002C826Cu) [[unlikely]] return; }
L_002C826C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8278u); set32(c.r[5], c.r[17].w[0] + 12u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x002C8278u) [[unlikely]] return; }
L_002C8278:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C8290:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C82ACu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 47u, depth + 1u); else { c.pc = 0x002C85C0u; return; } if (c.pc != 0x002C82ACu) [[unlikely]] return; }
L_002C82AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C82B8u); set32(c.r[5], c.r[17].w[0] + 12u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x002C82B8u) [[unlikely]] return; }
L_002C82B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C82D0:
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[5] = ld32((c.r[5].w[0]));
    c.f[2] = ld32((c.r[6].w[0]));
    c.f[4] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[3] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.f[0]);  c.pc = t; return; }
L_002C8320:
    c.f[0] = ld32((c.r[5].w[0]));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.f[12]);  c.pc = t; return; }
L_002C8350:
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
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), 0u);  c.pc = t; return; }
L_002C8380:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C83A4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x002C83A4u) [[unlikely]] return; }
L_002C83A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C83B0u); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x002C83B0u) [[unlikely]] return; }
L_002C83B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C83D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C83F4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x002C83F4u) [[unlikely]] return; }
L_002C83F4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8400u); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x002C8400u) [[unlikely]] return; }
L_002C8400:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C8420:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 1024u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C843Cu); set32(c.r[16], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002C843Cu) [[unlikely]] return; }
L_002C843C:
    c.r[9].d[0] = 0ull + 0ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 3;
L_002C8448:
    set32(c.r[3], c.r[9].w[0] << 2);
    set32(c.r[4], c.r[9].w[0] << 16);
    set32(c.r[7], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[8].d[0];
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    c.r[3].d[0] = c.r[9].d[0] < static_cast<std::uint64_t>(128ll) ? 1ull : 0ull;
    c.f[0] = fp::sqrt(c.f[0]);
    st32((c.r[29].w[0] + 44u), c.f[0]);
    set32(c.r[6], ld32((c.r[16].w[0])));
    st32((c.r[16].w[0]), c.r[4].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    c.r[4].d[0] = c.r[6].d[0] << 41;
    c.r[4].d[0] = c.r[4].d[0] >> 41;
    st32((c.r[7].w[0]), c.r[4].w[0]);
    c.f[0] = fp::sqrt(c.f[0]);
    st32((c.r[29].w[0] + 44u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[4].d[0] << 41;
    c.r[4].d[0] = c.r[4].d[0] >> 41;
    c.budget -= 24;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[7].w[0] + 512u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C8448u | kUnwind; return; } goto L_002C8448; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C84C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C84ECu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x002C84ECu) [[unlikely]] return; }
L_002C84EC:
    set32(c.r[19], c.r[2].w[0] + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C84FCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002C84FCu) [[unlikely]] return; }
L_002C84FC:
    c.f[12] = ld32((c.r[16].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8508u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x002C8508u) [[unlikely]] return; }
L_002C8508:
    c.f[12] = ld32((c.r[16].w[0] + 4u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8514u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x002C8514u) [[unlikely]] return; }
L_002C8514:
    c.f[12] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8520u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x002C8520u) [[unlikely]] return; }
L_002C8520:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.r[10].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8544u); set32(c.r[6], c.r[6].w[0] + 31104u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x002C8544u) [[unlikely]] return; }
L_002C8544:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002C8570:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8594u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x002C8594u) [[unlikely]] return; }
L_002C8594:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C85A0u); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x002C85A0u) [[unlikely]] return; }
L_002C85A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C85ACu); set32(c.r[5], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x002C85ACu) [[unlikely]] return; }
L_002C85AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C85C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C85E4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x002C85E4u) [[unlikely]] return; }
L_002C85E4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C85F0u); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x002C85F0u) [[unlikely]] return; }
L_002C85F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C85FCu); set32(c.r[5], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x002C85FCu) [[unlikely]] return; }
L_002C85FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C8610:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002C865C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 13376u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8640u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006A(c, 284u, depth + 1u); else { c.pc = 0x002AA6A0u; return; } if (c.pc != 0x002C8640u) [[unlikely]] return; }
L_002C8640:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002C8660; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C865Cu); set32(c.r[5], 0u + 400u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002C865Cu) [[unlikely]] return; }
L_002C865C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002C8660:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C8680:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 31120u);  c.pc = t; return; }
L_002C8690:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C86ACu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 254u, depth + 1u); else { c.pc = 0x002AA2E0u; return; } if (c.pc != 0x002C86ACu) [[unlikely]] return; }
L_002C86AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C86B8u); set32(c.r[4], ld32((c.r[2].w[0] + 31120u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x002C86B8u) [[unlikely]] return; }
L_002C86B8:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C86CCu); set32(c.r[6], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002C86CCu) [[unlikely]] return; }
L_002C86CC:
    c.f[12] = ld32((c.r[17].w[0] + 384u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C86DCu); set32(c.r[4], c.r[4].w[0] + 31136u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x002C86DCu) [[unlikely]] return; }
L_002C86DC:
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C86F0u); set32(c.r[6], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002C86F0u) [[unlikely]] return; }
L_002C86F0:
    c.f[12] = ld32((c.r[17].w[0] + 388u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8700u); set32(c.r[4], c.r[4].w[0] + 31146u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x002C8700u) [[unlikely]] return; }
L_002C8700:
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8714u); set32(c.r[6], c.r[29].w[0] + 52u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002C8714u) [[unlikely]] return; }
L_002C8714:
    c.f[12] = ld32((c.r[17].w[0] + 392u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8724u); set32(c.r[4], c.r[4].w[0] + 31156u);  if (depth < kMaxDepth) unit_0088(c, 227u, depth + 1u); else { c.pc = 0x00321AC0u; return; } if (c.pc != 0x002C8724u) [[unlikely]] return; }
L_002C8724:
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8738u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002C8738u) [[unlikely]] return; }
L_002C8738:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C8750:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C876Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 266u, depth + 1u); else { c.pc = 0x002AA3C0u; return; } if (c.pc != 0x002C876Cu) [[unlikely]] return; }
L_002C876C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[1] = ld32((c.r[17].w[0] + 384u));  goto L_002C877C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002C87B8; } }
L_002C877C:
    c.f[0] = ld32((c.r[16].w[0] + 384u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = 0ull + 0ull;  goto L_002C87B8; }
    c.f[1] = ld32((c.r[17].w[0] + 388u));
    c.f[0] = ld32((c.r[16].w[0] + 388u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C87B4; } }
    c.f[1] = ld32((c.r[17].w[0] + 392u));
    c.f[0] = ld32((c.r[16].w[0] + 392u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], 0u + 1u);  goto L_002C87B8; }
L_002C87B4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002C87B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C87D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C87ECu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 268u, depth + 1u); else { c.pc = 0x002AA540u; return; } if (c.pc != 0x002C87ECu) [[unlikely]] return; }
L_002C87EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C87F8u); set32(c.r[5], c.r[17].w[0] + 384u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x002C87F8u) [[unlikely]] return; }
L_002C87F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8804u); set32(c.r[5], c.r[17].w[0] + 388u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x002C8804u) [[unlikely]] return; }
L_002C8804:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8810u); set32(c.r[5], c.r[17].w[0] + 392u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x002C8810u) [[unlikely]] return; }
L_002C8810:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C8830:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AA5A0u | kUnwind; return; } [[clang::musttail]] return unit_006A(c, 274u, depth); }
L_002C8840:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AA5B0u | kUnwind; return; } [[clang::musttail]] return unit_006A(c, 275u, depth); }
L_002C8850:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C886Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 276u, depth + 1u); else { c.pc = 0x002AA5C0u; return; } if (c.pc != 0x002C886Cu) [[unlikely]] return; }
L_002C886C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8878u); set32(c.r[5], c.r[17].w[0] + 384u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x002C8878u) [[unlikely]] return; }
L_002C8878:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8884u); set32(c.r[5], c.r[17].w[0] + 388u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x002C8884u) [[unlikely]] return; }
L_002C8884:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8890u); set32(c.r[5], c.r[17].w[0] + 392u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x002C8890u) [[unlikely]] return; }
L_002C8890:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C88B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 400u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C88C8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002C88C8u) [[unlikely]] return; }
L_002C88C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C88FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C88D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 288u, depth + 1u); else { c.pc = 0x002AA710u; return; } if (c.pc != 0x002C88D8u) [[unlikely]] return; }
L_002C88D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] + 13376u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st8((c.r[16].w[0] + 209u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 384u), 0u);
    st32((c.r[16].w[0] + 388u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 392u), 0u);
    c.budget -= 9;
L_002C88FC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C8910:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C892Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 282u, depth + 1u); else { c.pc = 0x002AA620u; return; } if (c.pc != 0x002C892Cu) [[unlikely]] return; }
L_002C892C:
    c.f[0] = ld32((c.r[17].w[0] + 384u));
    st32((c.r[16].w[0] + 384u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 388u));
    st32((c.r[16].w[0] + 388u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 392u));
    st32((c.r[16].w[0] + 392u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C8960:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 400u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8988u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002C8988u) [[unlikely]] return; }
L_002C8988:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002C89BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8998u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 288u, depth + 1u); else { c.pc = 0x002AA710u; return; } if (c.pc != 0x002C8998u) [[unlikely]] return; }
L_002C8998:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] + 13376u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st8((c.r[16].w[0] + 209u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 384u), 0u);
    st32((c.r[16].w[0] + 388u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 392u), 0u);
    c.budget -= 9;
L_002C89BC:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C89CCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 282u, depth + 1u); else { c.pc = 0x002AA620u; return; } if (c.pc != 0x002C89CCu) [[unlikely]] return; }
L_002C89CC:
    c.f[0] = ld32((c.r[18].w[0] + 384u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 384u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 388u));
    st32((c.r[16].w[0] + 388u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 392u));
    st32((c.r[16].w[0] + 392u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C8A00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8A14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 20u, depth + 1u); else { c.pc = 0x0027C310u; return; } if (c.pc != 0x002C8A14u) [[unlikely]] return; }
L_002C8A14:
    set32(c.r[3], ld32((c.r[16].w[0] + 220u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 220u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C8A30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8A44u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 288u, depth + 1u); else { c.pc = 0x002AA710u; return; } if (c.pc != 0x002C8A44u) [[unlikely]] return; }
L_002C8A44:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + 13376u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st8((c.r[16].w[0] + 209u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 384u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 388u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 392u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C8A80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8A94u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 485u, depth + 1u); else { c.pc = 0x002BBA30u; return; } if (c.pc != 0x002C8A94u) [[unlikely]] return; }
L_002C8A94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8AA0u); set32(c.r[4], ld32((c.r[2].w[0] + 31184u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x002C8AA0u) [[unlikely]] return; }
L_002C8AA0:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8AB4u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002C8AB4u) [[unlikely]] return; }
L_002C8AB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C8AD0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BBB20u | kUnwind; return; } [[clang::musttail]] return unit_006E(c, 495u, depth); }
L_002C8AE0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC340u | kUnwind; return; } [[clang::musttail]] return unit_006F(c, 15u, depth); }
L_002C8AF0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC4A0u | kUnwind; return; } [[clang::musttail]] return unit_006F(c, 27u, depth); }
L_002C8B00:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC590u | kUnwind; return; } [[clang::musttail]] return unit_006F(c, 34u, depth); }
L_002C8B10:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC690u | kUnwind; return; } [[clang::musttail]] return unit_006F(c, 47u, depth); }
L_002C8B20:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BD830u | kUnwind; return; } [[clang::musttail]] return unit_006F(c, 177u, depth); }
L_002C8B30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[12];  if (t) { goto L_002C8B60; } }
L_002C8B4C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8B5Cu); c.f[12] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C8B5Cu) [[unlikely]] return; }
L_002C8B5C:
    set32(c.r[16], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 1;
L_002C8B60:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C8B4Cu | kUnwind; return; } goto L_002C8B4C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C8B80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[19], ld32((c.r[4].w[0] + 8u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[28].w[0] - 27716u)));
    c.budget -= 11;
    { const bool t = c.r[19].d[0] == c.r[18].d[0]; set32(c.r[17], c.r[16].w[0] + 8u);  if (t) { goto L_002C8C0C; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[17].w[0]), c.r[18].w[0]);  goto L_002C8BEC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8BBCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002C8BBCu) [[unlikely]] return; }
L_002C8BBC:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8BCCu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002C8BCCu) [[unlikely]] return; }
L_002C8BCC:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C8BE8; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8BE8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C8BE8u) [[unlikely]] return; }
L_002C8BE8:
    st32((c.r[17].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_002C8BEC:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[28].w[0] - 27708u)));  goto L_002C8C10; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8BFCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002C8BFCu) [[unlikely]] return; }
L_002C8BFC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8C0Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002C8C0Cu) [[unlikely]] return; }
L_002C8C0C:
    set32(c.r[18], ld32((c.r[28].w[0] - 27708u)));
    c.budget -= 1;
L_002C8C10:
    set32(c.r[19], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[18].d[0]; set32(c.r[17], c.r[16].w[0] + 12u);  if (t) { goto L_002C8C7C; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[17].w[0]), c.r[18].w[0]);  goto L_002C8C5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8C2Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002C8C2Cu) [[unlikely]] return; }
L_002C8C2C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8C3Cu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002C8C3Cu) [[unlikely]] return; }
L_002C8C3C:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C8C58; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8C58u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C8C58u) [[unlikely]] return; }
L_002C8C58:
    st32((c.r[17].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_002C8C5C:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[28].w[0] - 27704u)));  goto L_002C8C80; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8C6Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002C8C6Cu) [[unlikely]] return; }
L_002C8C6C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8C7Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002C8C7Cu) [[unlikely]] return; }
L_002C8C7C:
    set32(c.r[18], ld32((c.r[28].w[0] - 27704u)));
    c.budget -= 1;
L_002C8C80:
    set32(c.r[19], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[18].d[0]; set32(c.r[17], c.r[16].w[0] + 16u);  if (t) { goto L_002C8CEC; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[17].w[0]), c.r[18].w[0]);  goto L_002C8CCC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8C9Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002C8C9Cu) [[unlikely]] return; }
L_002C8C9C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8CACu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002C8CACu) [[unlikely]] return; }
L_002C8CAC:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C8CC8; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8CC8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C8CC8u) [[unlikely]] return; }
L_002C8CC8:
    st32((c.r[17].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_002C8CCC:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[28].w[0] - 27660u)));  goto L_002C8CF0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8CDCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002C8CDCu) [[unlikely]] return; }
L_002C8CDC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8CECu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002C8CECu) [[unlikely]] return; }
L_002C8CEC:
    set32(c.r[18], ld32((c.r[28].w[0] - 27660u)));
    c.budget -= 1;
L_002C8CF0:
    set32(c.r[19], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[18].d[0]; set32(c.r[17], c.r[16].w[0] + 20u);  if (t) { goto L_002C8D5C; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[17].w[0]), c.r[18].w[0]);  goto L_002C8D3C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8D0Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002C8D0Cu) [[unlikely]] return; }
L_002C8D0C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8D1Cu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002C8D1Cu) [[unlikely]] return; }
L_002C8D1C:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C8D38; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8D38u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C8D38u) [[unlikely]] return; }
L_002C8D38:
    st32((c.r[17].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_002C8D3C:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[28].w[0] - 27608u)));  goto L_002C8D60; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8D4Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002C8D4Cu) [[unlikely]] return; }
L_002C8D4C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8D5Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002C8D5Cu) [[unlikely]] return; }
L_002C8D5C:
    set32(c.r[18], ld32((c.r[28].w[0] - 27608u)));
    c.budget -= 1;
L_002C8D60:
    set32(c.r[19], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[18].d[0]; set32(c.r[17], c.r[16].w[0] + 24u);  if (t) { goto L_002C8DCC; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[17].w[0]), c.r[18].w[0]);  goto L_002C8DAC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8D7Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002C8D7Cu) [[unlikely]] return; }
L_002C8D7C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8D8Cu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002C8D8Cu) [[unlikely]] return; }
L_002C8D8C:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C8DA8; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8DA8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C8DA8u) [[unlikely]] return; }
L_002C8DA8:
    st32((c.r[17].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_002C8DAC:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[28].w[0] - 27592u)));  goto L_002C8DD0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8DBCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002C8DBCu) [[unlikely]] return; }
L_002C8DBC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8DCCu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002C8DCCu) [[unlikely]] return; }
L_002C8DCC:
    set32(c.r[18], ld32((c.r[28].w[0] - 27592u)));
    c.budget -= 1;
L_002C8DD0:
    set32(c.r[19], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[18].d[0]; set32(c.r[17], c.r[16].w[0] + 28u);  if (t) { goto L_002C8E3C; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[17].w[0]), c.r[18].w[0]);  goto L_002C8E1C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8DECu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002C8DECu) [[unlikely]] return; }
L_002C8DEC:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8DFCu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002C8DFCu) [[unlikely]] return; }
L_002C8DFC:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C8E18; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8E18u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C8E18u) [[unlikely]] return; }
L_002C8E18:
    st32((c.r[17].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_002C8E1C:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[28].w[0] - 27540u)));  goto L_002C8E40; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8E2Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002C8E2Cu) [[unlikely]] return; }
L_002C8E2C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8E3Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002C8E3Cu) [[unlikely]] return; }
L_002C8E3C:
    set32(c.r[18], ld32((c.r[28].w[0] - 27540u)));
    c.budget -= 1;
L_002C8E40:
    set32(c.r[19], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[18].d[0]; set32(c.r[17], c.r[16].w[0] + 32u);  if (t) { goto L_002C8EAC; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[17].w[0]), c.r[18].w[0]);  goto L_002C8E8C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8E5Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002C8E5Cu) [[unlikely]] return; }
L_002C8E5C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8E6Cu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002C8E6Cu) [[unlikely]] return; }
L_002C8E6C:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C8E88; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8E88u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C8E88u) [[unlikely]] return; }
L_002C8E88:
    st32((c.r[17].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_002C8E8C:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[28].w[0] - 27536u)));  goto L_002C8EB0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8E9Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002C8E9Cu) [[unlikely]] return; }
L_002C8E9C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8EACu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002C8EACu) [[unlikely]] return; }
L_002C8EAC:
    set32(c.r[18], ld32((c.r[28].w[0] - 27536u)));
    c.budget -= 1;
L_002C8EB0:
    set32(c.r[19], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[18].d[0]; set32(c.r[17], c.r[16].w[0] + 36u);  if (t) { goto L_002C8F1C; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[17].w[0]), c.r[18].w[0]);  goto L_002C8EFC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8ECCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002C8ECCu) [[unlikely]] return; }
L_002C8ECC:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8EDCu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002C8EDCu) [[unlikely]] return; }
L_002C8EDC:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C8EF8; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8EF8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C8EF8u) [[unlikely]] return; }
L_002C8EF8:
    st32((c.r[17].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_002C8EFC:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[28].w[0] - 27512u)));  goto L_002C8F20; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8F0Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002C8F0Cu) [[unlikely]] return; }
L_002C8F0C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8F1Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002C8F1Cu) [[unlikely]] return; }
L_002C8F1C:
    set32(c.r[18], ld32((c.r[28].w[0] - 27512u)));
    c.budget -= 1;
L_002C8F20:
    set32(c.r[19], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[18].d[0]; set32(c.r[17], c.r[16].w[0] + 40u);  if (t) { goto L_002C8F8C; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[17].w[0]), c.r[18].w[0]);  goto L_002C8F6C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8F3Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002C8F3Cu) [[unlikely]] return; }
L_002C8F3C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8F4Cu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002C8F4Cu) [[unlikely]] return; }
L_002C8F4C:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C8F68; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8F68u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C8F68u) [[unlikely]] return; }
L_002C8F68:
    st32((c.r[17].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_002C8F6C:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[28].w[0] - 27468u)));  goto L_002C8F90; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8F7Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002C8F7Cu) [[unlikely]] return; }
L_002C8F7C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8F8Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002C8F8Cu) [[unlikely]] return; }
L_002C8F8C:
    set32(c.r[18], ld32((c.r[28].w[0] - 27468u)));
    c.budget -= 1;
L_002C8F90:
    set32(c.r[19], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[18].d[0]; set32(c.r[17], c.r[16].w[0] + 44u);  if (t) { goto L_002C8FFC; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[17].w[0]), c.r[18].w[0]);  goto L_002C8FDC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8FACu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002C8FACu) [[unlikely]] return; }
L_002C8FAC:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8FBCu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002C8FBCu) [[unlikely]] return; }
L_002C8FBC:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C8FD8; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8FD8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C8FD8u) [[unlikely]] return; }
L_002C8FD8:
    st32((c.r[17].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_002C8FDC:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[28].w[0] - 27460u)));  goto L_002C9000; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8FECu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002C8FECu) [[unlikely]] return; }
L_002C8FEC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C8FFCu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002C8FFCu) [[unlikely]] return; }
L_002C8FFC:
    set32(c.r[18], ld32((c.r[28].w[0] - 27460u)));
    c.budget -= 1;
L_002C9000:
    set32(c.r[19], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[18].d[0]; set32(c.r[17], c.r[16].w[0] + 48u);  if (t) { goto L_002C906C; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[17].w[0]), c.r[18].w[0]);  goto L_002C904C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C901Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002C901Cu) [[unlikely]] return; }
L_002C901C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C902Cu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002C902Cu) [[unlikely]] return; }
L_002C902C:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C9048; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9048u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C9048u) [[unlikely]] return; }
L_002C9048:
    st32((c.r[17].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_002C904C:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], c.r[16].w[0] + 52u);  goto L_002C9070; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C905Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002C905Cu) [[unlikely]] return; }
L_002C905C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C906Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002C906Cu) [[unlikely]] return; }
L_002C906C:
    set32(c.r[18], c.r[16].w[0] + 52u);
    c.budget -= 1;
L_002C9070:
    set32(c.r[17], ld32((c.r[28].w[0] - 27456u)));
    set32(c.r[16], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 4;
    if (c.r[16].d[0] == c.r[17].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_002C90E4; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[18].w[0]), c.r[17].w[0]);  goto L_002C90C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9090u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002C9090u) [[unlikely]] return; }
L_002C9090:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C90A0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002C90A0u) [[unlikely]] return; }
L_002C90A0:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002C90BC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C90BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C90BCu) [[unlikely]] return; }
L_002C90BC:
    st32((c.r[18].w[0]), c.r[17].w[0]);
    c.budget -= 1;
L_002C90C0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002C90E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C90D0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002C90D0u) [[unlikely]] return; }
L_002C90D0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C90E0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002C90E0u) [[unlikely]] return; }
L_002C90E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002C90E4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002C9100:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002C9184; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[2], c.r[2].w[0] + 13616u);
    set32(c.r[4], c.r[17].w[0] + 8u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 8464u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9140u); set32(c.r[7], 0u + 12u);  if (depth < kMaxDepth) unit_00A5(c, 157u, depth + 1u); else { c.pc = 0x00397E80u; return; } if (c.pc != 0x002C9140u) [[unlikely]] return; }
L_002C9140:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_002C916C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 9072u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9158u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002C9158u) [[unlikely]] return; }
L_002C9158:
    set32(c.r[2], ld32((c.r[28].w[0] - 27620u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9168u); st32((c.r[28].w[0] - 27620u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002C9168u) [[unlikely]] return; }
L_002C9168:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_002C916C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002C9188; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9184u); set32(c.r[5], 0u + 56u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002C9184u) [[unlikely]] return; }
L_002C9184:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002C9188:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C91A0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 9072u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C91DCu); st32((c.r[4].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002C91DCu) [[unlikely]] return; }
L_002C91DC:
    set32(c.r[2], ld32((c.r[28].w[0] - 27620u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C91ECu); st32((c.r[28].w[0] - 27620u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002C91ECu) [[unlikely]] return; }
L_002C91EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    set32(c.r[2], c.r[2].w[0] + 13616u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[4], c.r[17].w[0] + 8u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 27936u);
    set32(c.r[6], c.r[6].w[0] - 8464u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9218u); set32(c.r[8], 0u + 12u);  if (depth < kMaxDepth) unit_00A5(c, 152u, depth + 1u); else { c.pc = 0x00397DB0u; return; } if (c.pc != 0x002C9218u) [[unlikely]] return; }
L_002C9218:
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[21].w[0] << 2);
    c.budget -= 2;
L_002C9220:
    set32(c.r[2], c.r[17].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[16].w[0] + c.r[19].w[0]);
    set32(c.r[20], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[20].d[0] == c.r[2].d[0]; set32(c.r[18], c.r[3].w[0] + 8u);  if (t) { goto L_002C929C; } }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[18], ld32((c.r[18].w[0])));  goto L_002C9278; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9248u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002C9248u) [[unlikely]] return; }
L_002C9248:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9258u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002C9258u) [[unlikely]] return; }
L_002C9258:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002C9274; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9274u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002C9274u) [[unlikely]] return; }
L_002C9274:
    set32(c.r[18], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_002C9278:
    set32(c.r[2], c.r[17].w[0] + c.r[19].w[0]);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[2].w[0] + 8u), c.r[18].w[0]);  if (t) { goto L_002C929C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C928Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002C928Cu) [[unlikely]] return; }
L_002C928C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C929Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002C929Cu) [[unlikely]] return; }
L_002C929C:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.r[2].d[0] = c.r[21].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], c.r[21].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C9220u | kUnwind; return; } goto L_002C9220; }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002C92E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), 0u);  if (t) { goto L_002C9318; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9308u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002C9308u) [[unlikely]] return; }
L_002C9308:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9318u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002C9318u) [[unlikely]] return; }
L_002C9318:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C9330:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 9072u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9354u); st32((c.r[4].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002C9354u) [[unlikely]] return; }
L_002C9354:
    set32(c.r[2], ld32((c.r[28].w[0] - 27620u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9364u); st32((c.r[28].w[0] - 27620u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002C9364u) [[unlikely]] return; }
L_002C9364:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002D0000u);
    set32(c.r[2], c.r[2].w[0] + 13616u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 27936u);
    set32(c.r[6], c.r[6].w[0] - 8464u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9390u); set32(c.r[8], 0u + 12u);  if (depth < kMaxDepth) unit_00A5(c, 152u, depth + 1u); else { c.pc = 0x00397DB0u; return; } if (c.pc != 0x002C9390u) [[unlikely]] return; }
L_002C9390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9398u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 105u, depth + 1u); else { c.pc = 0x002C8B80u; return; } if (c.pc != 0x002C9398u) [[unlikely]] return; }
L_002C9398:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C93B0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C93E0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x002C93E0u) [[unlikely]] return; }
L_002C93E0:
    set32(c.r[20], c.r[2].w[0] + 128u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C93F0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002C93F0u) [[unlikely]] return; }
L_002C93F0:
    c.f[12] = ld32((c.r[16].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C93FCu); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x002C93FCu) [[unlikely]] return; }
L_002C93FC:
    c.f[12] = ld32((c.r[16].w[0] + 4u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9408u); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x002C9408u) [[unlikely]] return; }
L_002C9408:
    c.f[12] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9414u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x002C9414u) [[unlikely]] return; }
L_002C9414:
    c.f[12] = ld32((c.r[16].w[0] + 12u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9420u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x002C9420u) [[unlikely]] return; }
L_002C9420:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    c.r[10].d[0] = c.r[16].d[0] + 0ull;
    c.r[11].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9448u); set32(c.r[6], c.r[6].w[0] + 31248u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x002C9448u) [[unlikely]] return; }
L_002C9448:
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
L_002C9470:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32632u));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[2] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002C94B4; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[17].w[0] + 8u));  goto L_002C94B8; }
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.budget -= 1;
L_002C94B4:
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 1;
L_002C94B8:
    c.f[0] = ld32((c.r[28].w[0] - 32632u));
    c.f[2] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[17].w[0] + 12u));  goto L_002C94E8; }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C94E4; } }
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.budget -= 1;
L_002C94E4:
    c.f[1] = ld32((c.r[17].w[0] + 12u));
    c.budget -= 1;
L_002C94E8:
    c.f[0] = ld32((c.r[28].w[0] - 32632u));
    c.f[2] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[17].w[0]));  goto L_002C9518; }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C9514; } }
    st32((c.r[17].w[0] + 12u), c.f[0]);
    c.budget -= 1;
L_002C9514:
    c.f[1] = ld32((c.r[17].w[0]));
    c.budget -= 1;
L_002C9518:
    c.f[0] = ld32((c.r[28].w[0] - 32632u));
    c.f[2] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002C9548; }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C9544; } }
    st32((c.r[17].w[0]), c.f[0]);
    c.budget -= 1;
L_002C9544:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002C9548:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9550u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x002C9550u) [[unlikely]] return; }
L_002C9550:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C955Cu); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x002C955Cu) [[unlikely]] return; }
L_002C955C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9568u); set32(c.r[5], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x002C9568u) [[unlikely]] return; }
L_002C9568:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9574u); set32(c.r[5], c.r[17].w[0] + 12u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x002C9574u) [[unlikely]] return; }
L_002C9574:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C9590:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C95B4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x002C95B4u) [[unlikely]] return; }
L_002C95B4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C95C0u); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x002C95C0u) [[unlikely]] return; }
L_002C95C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C95CCu); set32(c.r[5], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x002C95CCu) [[unlikely]] return; }
L_002C95CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C95D8u); set32(c.r[5], c.r[17].w[0] + 12u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x002C95D8u) [[unlikely]] return; }
L_002C95D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002C95F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x5F370000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[3].d[0] = c.r[2].d[0] | 23007ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[4] = ld32((c.r[4].w[0]));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[3] = ld32((c.r[4].w[0] + 8u));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.f[2] = ld32((c.r[4].w[0] + 12u));
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[4]));
    c.f[1] = c.r[2].w[0];
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[2] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 60u), c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    set32(c.r[2], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.f[2] = 0u;
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    c.facc = fp::add(c.f[2], c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 56u));
    c.f[0] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[2], c.f[0]));
    c.f[12] = fp::mul(c.f[2], c.f[0]);
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9678u); st32((c.r[29].w[0] + 60u), c.f[12]);  if (depth < kMaxDepth) unit_005F(c, 117u, depth + 1u); else { c.pc = 0x0027E2F0u; return; } if (c.pc != 0x002C9678u) [[unlikely]] return; }
L_002C9678:
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C96B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[4] = ld32((c.r[5].w[0] + 20u));
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[5] = ld32((c.r[5].w[0] + 40u));
    c.f[1] = 0u;
    c.f[0] = fp::add(c.f[3], c.f[4]);
    c.f[2] = fp::add(c.f[5], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002C977C; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x5F370000u);
    c.f[0] = c.r[6].w[0];
    c.r[7].d[0] = c.r[3].d[0] | 23007ull;
    c.f[3] = fp::add(c.f[0], c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 28u), c.f[3]);
    set32(c.r[3], ld32((c.r[29].w[0] + 28u)));
    c.f[2] = c.r[6].w[0];
    c.facc = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[3]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[3], c.r[7].w[0] - c.r[3].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 24u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[1], c.f[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[1] = fp::mul(c.f[3], c.f[0]);
    st32((c.r[29].w[0] + 28u), c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[1]);
    fpu_div(c, 2u, c.f[2], c.f[1]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 24u));
    c.f[0] = ld32((c.r[5].w[0] + 36u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 32u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.budget -= 41;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.f[0]);  if (t) { goto L_002C992C; } }
L_002C977C:
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[3]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002C978C; } }
    set32(c.r[7], 0u + 1u);
    c.budget -= 1;
L_002C978C:
    set32(c.r[6], c.r[7].w[0] << 4);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[0]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[10], c.r[7].w[0] << 2);  goto L_002C97B4; }
    set32(c.r[7], 0u + 2u);
    set32(c.r[10], c.r[7].w[0] << 2);
    c.budget -= 2;
L_002C97B4:
    set32(c.r[3], c.r[7].w[0] << 4);
    set32(c.r[7], c.r[5].w[0] + c.r[3].w[0]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[7].w[0] + c.r[10].w[0]);
    set32(c.r[11], c.r[11].w[0] - 4456u);
    c.f[4] = ld32((c.r[3].w[0]));
    set32(c.r[6], c.r[11].w[0] + c.r[10].w[0]);
    set32(c.r[8], ld32((c.r[6].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x5F370000u);
    c.r[13].d[0] = c.r[3].d[0] | 23007ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[9], c.r[8].w[0] << 2);
    set32(c.r[3], c.r[8].w[0] << 4);
    set32(c.r[8], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[8].w[0] + c.r[9].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[3] = c.r[6].w[0];
    set32(c.r[6], c.r[11].w[0] + c.r[9].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[14], ld32((c.r[6].w[0])));
    c.f[2] = c.r[3].w[0];
    set32(c.r[11], c.r[29].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[6], c.r[14].w[0] << 2);
    c.f[5] = fp::sub(c.f[4], c.f[0]);
    set32(c.r[3], c.r[14].w[0] << 4);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[12], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[5], 0u + 12u);
    c.f[0] = 0u;
    c.f[4] = ld32((c.r[12].w[0]));
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.f[5], c.f[4]);
    c.f[3] = fp::add(c.f[3], c.f[0]);
    st32((c.r[29].w[0] + 20u), c.f[3]);
    set32(c.r[12], ld32((c.r[29].w[0] + 20u)));
    c.f[0] = fp::mul(c.f[2], c.f[3]);
    set32(c.r[12], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[12].w[0]) >> 1));
    set32(c.r[12], c.r[13].w[0] - c.r[12].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[12].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 16u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[1], c.f[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[2] = fp::mul(c.f[3], c.f[0]);
    c.budget -= 48;
    { const bool t = c.r[11].d[0] == 0ull; st32((c.r[29].w[0] + 20u), c.f[0]);  if (t) { goto L_002C9890; } }
L_002C9874:
    st8((c.r[11].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002C9874u | kUnwind; return; } goto L_002C9874; } }
L_002C9890:
    set32(c.r[11], c.r[4].w[0] + 4u);
    set32(c.r[12], c.r[4].w[0] + 12u);
    st32((c.r[29].w[0]), c.r[11].w[0]);
    set32(c.r[5], c.r[14].w[0] << 2);
    set32(c.r[11], c.r[4].w[0] + 8u);
    st32((c.r[29].w[0] + 8u), c.r[12].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[11].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[29].w[0]);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[12], c.r[8].w[0] + c.r[6].w[0]);
    c.f[1] = c.r[11].w[0];
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.f[0] = fp::mul(c.f[1], c.f[2]);
    set32(c.r[11], c.r[10].w[0] + c.r[29].w[0]);
    set32(c.r[13], ld32((c.r[11].w[0])));
    set32(c.r[11], c.r[8].w[0] + c.r[10].w[0]);
    fpu_div(c, 2u, c.f[1], c.f[2]);
    set32(c.r[8], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[3].w[0] + c.r[10].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[10], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[9].w[0] + c.r[29].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[13].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[12].w[0]));
    c.f[0] = ld32((c.r[10].w[0]));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[7].w[0]));
    c.f[0] = ld32((c.r[11].w[0]));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[8].w[0]));
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 39;
L_002C992C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002C9940:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x5F370000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.f[4] = 0u;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[5].d[0] = c.r[3].d[0] | 23007ull;
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = ld32((c.r[4].w[0] + 4u));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.f[2] = ld32((c.r[4].w[0] + 12u));
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[3] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 92u), c.f[3]);
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    c.facc = fp::add(c.f[4], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    st32((c.r[29].w[0] + 88u), c.r[3].w[0]);
    c.f[2] = ld32((c.r[29].w[0] + 88u));
    c.f[0] = ld32((c.r[28].w[0] - 32628u));
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[2], c.f[1]));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[20] = fp::mul(c.f[3], c.f[1]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 38;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 92u), c.f[1]);  if (t) { goto L_002C99EC; } }
    st32((c.r[17].w[0]), c.f[4]);
    st32((c.r[16].w[0]), c.f[4]);
    st32((c.r[16].w[0] + 4u), c.f[4]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.f[4]);  if (t) { goto L_002C9A3C; } }
L_002C99EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C99F4u); c.f[12] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_00AB(c, 427u, depth + 1u); else { c.pc = 0x003AF6F8u; return; } if (c.pc != 0x002C99F4u) [[unlikely]] return; }
L_002C99F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[4].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 1u, c.f[0], c.f[20]);
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.budget -= 18;
L_002C9A3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002C9A60:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.f[20] = c.f[12];
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9A94u); c.r[6].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_005F(c, 107u, depth + 1u); else { c.pc = 0x0027DE70u; return; } if (c.pc != 0x002C9A94u) [[unlikely]] return; }
L_002C9A94:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9AA8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_005F(c, 107u, depth + 1u); else { c.pc = 0x0027DE70u; return; } if (c.pc != 0x002C9AA8u) [[unlikely]] return; }
L_002C9AA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.f[1] = fp::mul(c.f[0], c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9AD8u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_005F(c, 107u, depth + 1u); else { c.pc = 0x0027DE70u; return; } if (c.pc != 0x002C9AD8u) [[unlikely]] return; }
L_002C9AD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002C9B00:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 36u), c.f[29]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 32u), c.f[28]);
    st32((c.r[29].w[0] + 28u), c.f[27]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[2] = ld32((c.r[6].w[0] + 12u));
    c.f[1] = ld32((c.r[6].w[0] + 8u));
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[20] = c.f[2] ^ fp::kSign;
    c.f[3] = ld32((c.r[7].w[0]));
    c.f[21] = c.f[1] ^ fp::kSign;
    c.f[22] = c.f[0] ^ fp::kSign;
    c.f[23] = ld32((c.r[6].w[0]));
    c.f[2] = ld32((c.r[7].w[0] + 12u));
    c.facc = fp::mul(c.f[20], c.f[3]);
    c.f[1] = ld32((c.r[7].w[0] + 8u));
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[2]));
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    c.facc = fp::add(c.facc, fp::mul(c.f[22], c.f[1]));
    c.f[24] = fp::sub(c.facc, fp::mul(c.f[21], c.f[0]));
    c.facc = fp::mul(c.f[21], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[1]));
    c.facc = fp::add(c.facc, fp::mul(c.f[20], c.f[0]));
    c.f[25] = fp::sub(c.facc, fp::mul(c.f[22], c.f[2]));
    c.facc = fp::mul(c.f[22], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[0]));
    c.facc = fp::add(c.facc, fp::mul(c.f[21], c.f[2]));
    c.f[26] = fp::sub(c.facc, fp::mul(c.f[20], c.f[1]));
    c.facc = fp::mul(c.f[23], c.f[3]);
    c.facc = fp::sub(c.facc, fp::mul(c.f[22], c.f[0]));
    c.facc = fp::sub(c.facc, fp::mul(c.f[21], c.f[1]));
    c.budget -= 46;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9BB8u); c.f[12] = fp::sub(c.facc, fp::mul(c.f[20], c.f[2]));  if (depth < kMaxDepth) unit_00AB(c, 427u, depth + 1u); else { c.pc = 0x003AF6F8u; return; } if (c.pc != 0x002C9BB8u) [[unlikely]] return; }
L_002C9BB8:
    c.f[27] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9BC4u); c.f[12] = c.f[27];  if (depth < kMaxDepth) unit_00AB(c, 406u, depth + 1u); else { c.pc = 0x003AF510u; return; } if (c.pc != 0x002C9BC4u) [[unlikely]] return; }
L_002C9BC4:
    c.f[1] = ld32((c.r[28].w[0] - 32460u));
    c.f[2] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C9BE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[27] = fp::mul(c.f[0], c.f[24]);  if (t) { goto L_002C9BF8; } }
L_002C9BE8:
    fpu_div(c, 0u, c.f[27], c.f[0]);
    c.f[27] = fp::mul(c.f[0], c.f[24]);
    c.budget -= 4;
L_002C9BF8:
    c.f[3] = ld32((c.r[18].w[0]));
    c.f[28] = fp::mul(c.f[0], c.f[25]);
    c.f[29] = fp::mul(c.f[0], c.f[26]);
    c.f[2] = ld32((c.r[18].w[0] + 12u));
    c.facc = fp::mul(c.f[20], c.f[3]);
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[2]));
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    c.facc = fp::add(c.facc, fp::mul(c.f[22], c.f[1]));
    c.f[24] = fp::sub(c.facc, fp::mul(c.f[21], c.f[0]));
    c.facc = fp::mul(c.f[21], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[1]));
    c.facc = fp::add(c.facc, fp::mul(c.f[20], c.f[0]));
    c.f[25] = fp::sub(c.facc, fp::mul(c.f[22], c.f[2]));
    c.facc = fp::mul(c.f[22], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[0]));
    c.facc = fp::add(c.facc, fp::mul(c.f[21], c.f[2]));
    c.f[26] = fp::sub(c.facc, fp::mul(c.f[20], c.f[1]));
    c.facc = fp::mul(c.f[23], c.f[3]);
    c.facc = fp::sub(c.facc, fp::mul(c.f[22], c.f[0]));
    c.facc = fp::sub(c.facc, fp::mul(c.f[21], c.f[1]));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9C54u); c.f[12] = fp::sub(c.facc, fp::mul(c.f[20], c.f[2]));  if (depth < kMaxDepth) unit_00AB(c, 427u, depth + 1u); else { c.pc = 0x003AF6F8u; return; } if (c.pc != 0x002C9C54u) [[unlikely]] return; }
L_002C9C54:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9C60u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00AB(c, 406u, depth + 1u); else { c.pc = 0x003AF510u; return; } if (c.pc != 0x002C9C60u) [[unlikely]] return; }
L_002C9C60:
    c.f[1] = ld32((c.r[28].w[0] - 32460u));
    c.f[2] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C9C84; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002C9C90; } }
L_002C9C84:
    fpu_div(c, 2u, c.f[20], c.f[0]);
    c.budget -= 3;
L_002C9C90:
    c.f[1] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE800000u);
    c.facc = fp::add(c.f[1], c.f[29]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[26]));
    set32(c.r[5], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    st32((c.r[29].w[0] + 112u), 0u);
    c.facc = fp::add(c.f[1], c.f[28]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[25]));
    c.facc = fp::add(c.f[1], c.f[27]);
    st32((c.r[29].w[0] + 120u), c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[24]));
    c.f[12] = c.r[2].w[0];
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9CD0u); st32((c.r[29].w[0] + 124u), c.f[0]);  if (depth < kMaxDepth) unit_005F(c, 116u, depth + 1u); else { c.pc = 0x0027E2D0u; return; } if (c.pc != 0x002C9CD0u) [[unlikely]] return; }
L_002C9CD0:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9CDCu); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_005F(c, 111u, depth + 1u); else { c.pc = 0x0027E1B0u; return; } if (c.pc != 0x002C9CDCu) [[unlikely]] return; }
L_002C9CDC:
    c.f[10] = ld32((c.r[17].w[0] + 12u));
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    c.f[9] = ld32((c.r[29].w[0] + 156u));
    c.f[8] = ld32((c.r[17].w[0]));
    c.facc = fp::mul(c.f[10], c.f[0]);
    c.f[7] = ld32((c.r[29].w[0] + 152u));
    c.f[6] = ld32((c.r[17].w[0] + 4u));
    c.facc = fp::add(c.facc, fp::mul(c.f[8], c.f[9]));
    c.f[5] = ld32((c.r[29].w[0] + 148u));
    c.f[4] = ld32((c.r[17].w[0] + 8u));
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[7]));
    c.f[3] = fp::sub(c.facc, fp::mul(c.f[4], c.f[5]));
    c.facc = fp::mul(c.f[4], c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[8], c.f[7]));
    c.facc = fp::add(c.facc, fp::mul(c.f[10], c.f[5]));
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[6], c.f[9]));
    c.facc = fp::mul(c.f[6], c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[8], c.f[5]));
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[9]));
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[10], c.f[7]));
    c.facc = fp::mul(c.f[8], c.f[0]);
    c.facc = fp::sub(c.facc, fp::mul(c.f[6], c.f[5]));
    c.facc = fp::sub(c.facc, fp::mul(c.f[4], c.f[7]));
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[10], c.f[9]));
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[1]);
    st32((c.r[16].w[0] + 8u), c.f[2]);
    st32((c.r[16].w[0] + 12u), c.f[3]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[29] = ld32((c.r[29].w[0] + 36u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.f[28] = ld32((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 44;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002C9D90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[12] = ld32((c.r[5].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9DB4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 427u, depth + 1u); else { c.pc = 0x003AF6F8u; return; } if (c.pc != 0x002C9DB4u) [[unlikely]] return; }
L_002C9DB4:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002C9DC0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00AB(c, 406u, depth + 1u); else { c.pc = 0x003AF510u; return; } if (c.pc != 0x002C9DC0u) [[unlikely]] return; }
L_002C9DC0:
    c.f[1] = ld32((c.r[28].w[0] - 32460u));
    c.f[2] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002C9DE4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[3].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[16].w[0] + 4u));  if (t) { goto L_002C9DF4; } }
L_002C9DE4:
    fpu_div(c, 3u, c.f[20], c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.budget -= 4;
L_002C9DF4:
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[2] = ld32((c.r[16].w[0] + 12u));
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    st32((c.r[17].w[0]), 0u);
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    st32((c.r[17].w[0] + 8u), c.f[1]);
    st32((c.r[17].w[0] + 12u), c.f[2]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002C9E30:
    c.f[2] = ld32((c.r[5].w[0] + 12u));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.f[3] = c.f[2] ^ fp::kSign;
    c.f[2] = c.f[1] ^ fp::kSign;
    c.f[1] = c.f[0] ^ fp::kSign;
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0]), c.f[0]);
    st32((c.r[4].w[0] + 4u), c.f[1]);
    st32((c.r[4].w[0] + 8u), c.f[2]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.f[3]);  c.pc = t; return; }
L_002C9E60:
    c.f[9] = ld32((c.r[6].w[0]));
    c.f[6] = ld32((c.r[5].w[0]));
    c.f[3] = ld32((c.r[6].w[0] + 4u));
    c.f[4] = ld32((c.r[5].w[0] + 4u));
    c.facc = fp::mul(c.f[6], c.f[9]);
    c.f[5] = ld32((c.r[6].w[0] + 8u));
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.facc = fp::sub(c.facc, fp::mul(c.f[4], c.f[3]));
    c.f[8] = ld32((c.r[5].w[0] + 12u));
    c.f[7] = ld32((c.r[6].w[0] + 12u));
    c.facc = fp::sub(c.facc, fp::mul(c.f[2], c.f[5]));
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[8], c.f[7]));
    c.facc = fp::mul(c.f[4], c.f[9]);
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[3]));
    st32((c.r[4].w[0]), c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[7]));
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[8], c.f[5]));
    c.facc = fp::mul(c.f[2], c.f[9]);
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[5]));
    c.facc = fp::add(c.facc, fp::mul(c.f[8], c.f[3]));
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[4], c.f[7]));
    c.facc = fp::mul(c.f[8], c.f[9]);
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[7]));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[4], c.f[5]));
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[2], c.f[3]));
    st32((c.r[4].w[0] + 8u), c.f[1]);
    c.budget -= 29;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.f[0]);  c.pc = t; return; }
L_002C9EE0:
    c.f[2] = ld32((c.r[5].w[0] + 12u));
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.f[3] = c.f[2] ^ fp::kSign;
    c.f[2] = c.f[1] ^ fp::kSign;
    c.f[1] = c.f[0] ^ fp::kSign;
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[4].w[0]), c.f[0]);
    st32((c.r[4].w[0] + 4u), c.f[1]);
    st32((c.r[4].w[0] + 8u), c.f[2]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.f[3]);  c.pc = t; return; }
L_002C9F20:
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[3] = ld32((c.r[5].w[0] + 12u));
    c.f[2] = ld32((c.r[6].w[0] + 12u));
    c.f[4] = fp::sub(c.f[1], c.f[0]);
    c.f[5] = fp::sub(c.f[3], c.f[2]);
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[3] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    st32((c.r[4].w[0]), c.f[0]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[4]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.f[5]);  c.pc = t; return; }
L_002C9F70:
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[3] = ld32((c.r[5].w[0] + 12u));
    c.f[2] = ld32((c.r[6].w[0] + 12u));
    c.f[4] = fp::add(c.f[1], c.f[0]);
    c.f[5] = fp::add(c.f[3], c.f[2]);
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[3] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[2] = fp::add(c.f[3], c.f[2]);
    st32((c.r[4].w[0]), c.f[0]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[4]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.f[5]);  c.pc = t; return; }
L_002C9FC0:
    st32((c.r[4].w[0]), c.f[12]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), c.f[13]);
    st32((c.r[4].w[0] + 8u), c.f[14]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.f[15]);  c.pc = t; return; }
L_002C9FE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 31280u);  c.pc = t; return; }
L_002C9FF0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[2].w[0] + 31280u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA01Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x002CA01Cu) [[unlikely]] return; }
L_002CA01C:
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[17].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA030u); set32(c.r[6], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002CA030u) [[unlikely]] return; }
L_002CA030:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[18].w[0] + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA040u); set32(c.r[5], c.r[5].w[0] + 31296u);  if (depth < kMaxDepth) unit_0072(c, 36u, depth + 1u); else { c.pc = 0x002C84C0u; return; } if (c.pc != 0x002CA040u) [[unlikely]] return; }
L_002CA040:
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[17].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA054u); set32(c.r[6], c.r[29].w[0] + 84u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002CA054u) [[unlikely]] return; }
L_002CA054:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[18].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA064u); set32(c.r[5], c.r[5].w[0] + 31306u);  if (depth < kMaxDepth) unit_0072(c, 36u, depth + 1u); else { c.pc = 0x002C84C0u; return; } if (c.pc != 0x002CA064u) [[unlikely]] return; }
L_002CA064:
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[17].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA078u); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002CA078u) [[unlikely]] return; }
L_002CA078:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002CA0E0; } }
L_002CA080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA088u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002CA088u) [[unlikely]] return; }
L_002CA088:
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA0A0u); c.f[12] = ld32((c.r[19].w[0]));  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x002CA0A0u) [[unlikely]] return; }
L_002CA0A0:
    c.f[12] = ld32((c.r[19].w[0] + 4u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA0ACu); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x002CA0ACu) [[unlikely]] return; }
L_002CA0AC:
    set32(c.r[4], ld32((c.r[29].w[0] + 92u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 128u);
    set32(c.r[6], c.r[6].w[0] + 31321u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA0CCu); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x002CA0CCu) [[unlikely]] return; }
L_002CA0CC:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 10u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA0DCu); set32(c.r[6], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002CA0DCu) [[unlikely]] return; }
L_002CA0DC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002CA0E0:
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], 0u + 128u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CA080u | kUnwind; return; } goto L_002CA080; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002CA110:
    set32(c.r[7], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 32u)));
    c.budget -= 4;
    if (c.r[7].d[0] == c.r[2].d[0]) { c.r[8].d[0] = 0ull + 0ull;  goto L_002CA16C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CA17C; } }
L_002CA128:
    set32(c.r[6], c.r[8].w[0] << 4);
    set32(c.r[2], ld32((c.r[5].w[0] + 36u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.f[1] = ld32((c.r[2].w[0]));
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 9;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = 0ull + 0ull;  goto L_002CA17C; }
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_002CA16C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA17C; } }
L_002CA16C:
    c.r[2].d[0] = c.r[8].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 36u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CA128u | kUnwind; return; } goto L_002CA128; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002CA17C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CA190:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA1B4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006A(c, 365u, depth + 1u); else { c.pc = 0x002AAF40u; return; } if (c.pc != 0x002CA1B4u) [[unlikely]] return; }
L_002CA1B4:
    set32(c.r[4], c.r[18].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA1C0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 43u, depth + 1u); else { c.pc = 0x002C8570u; return; } if (c.pc != 0x002CA1C0u) [[unlikely]] return; }
L_002CA1C0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA1CCu); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x002CA1CCu) [[unlikely]] return; }
L_002CA1CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002CA1FC; } }
L_002CA1D4:
    set32(c.r[19], c.r[16].w[0] << 4);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA1E4u); set32(c.r[5], c.r[2].w[0] + c.r[19].w[0]);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x002CA1E4u) [[unlikely]] return; }
L_002CA1E4:
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA1F8u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x002CA1F8u) [[unlikely]] return; }
L_002CA1F8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002CA1FC:
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 36u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CA1D4u | kUnwind; return; } goto L_002CA1D4; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002CA230:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AAF50u | kUnwind; return; } [[clang::musttail]] return unit_006A(c, 366u, depth); }
L_002CA240:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002AAF60u | kUnwind; return; } [[clang::musttail]] return unit_006A(c, 367u, depth); }
L_002CA250:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA274u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006A(c, 368u, depth + 1u); else { c.pc = 0x002AAF70u; return; } if (c.pc != 0x002CA274u) [[unlikely]] return; }
L_002CA274:
    set32(c.r[4], c.r[18].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA280u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 47u, depth + 1u); else { c.pc = 0x002C85C0u; return; } if (c.pc != 0x002CA280u) [[unlikely]] return; }
L_002CA280:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA28Cu); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x002CA28Cu) [[unlikely]] return; }
L_002CA28C:
    set32(c.r[16], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 4;
    if (c.r[16].d[0] == c.r[3].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_002CA32C; }
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], c.r[16].w[0] << 4);  goto L_002CA2BC; }
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA2B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002CA2B0u) [[unlikely]] return; }
L_002CA2B0:
    st32((c.r[18].w[0] + 36u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 32u), 0u);  if (t) { goto L_002CA2F8; } }
L_002CA2BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA2C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002CA2C4u) [[unlikely]] return; }
L_002CA2C4:
    set32(c.r[5], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002CA2E4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    mmi::pminw(c.r[2], c.r[2], c.r[16]);
    set32(c.r[6], c.r[2].w[0] << 4);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA2E4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x002CA2E4u) [[unlikely]] return; }
L_002CA2E4:
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA2F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002CA2F0u) [[unlikely]] return; }
L_002CA2F0:
    st32((c.r[18].w[0] + 36u), c.r[19].w[0]);
    st32((c.r[18].w[0] + 32u), c.r[16].w[0]);
    c.budget -= 2;
L_002CA2F8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA32C; } }
L_002CA304:
    set32(c.r[19], c.r[16].w[0] << 4);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA314u); set32(c.r[5], c.r[2].w[0] + c.r[19].w[0]);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x002CA314u) [[unlikely]] return; }
L_002CA314:
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA328u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x002CA328u) [[unlikely]] return; }
L_002CA328:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002CA32C:
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 36u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CA304u | kUnwind; return; } goto L_002CA304; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002CA360:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 40u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA378u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002CA378u) [[unlikely]] return; }
L_002CA378:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002CA3C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA388u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 372u, depth + 1u); else { c.pc = 0x002AAFF0u; return; } if (c.pc != 0x002CA388u) [[unlikely]] return; }
L_002CA388:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] + 13632u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 31024u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 31028u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 31032u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    c.budget -= 14;
L_002CA3C0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CA3E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[5].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    st32((c.r[5].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 20u));
    st32((c.r[5].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 24u));
    st32((c.r[5].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 28u));
    st32((c.r[5].w[0] + 28u), c.f[0]);
    set32(c.r[16], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 32u)));
    c.budget -= 23;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002CA498; } }
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], c.r[16].w[0] << 4);  goto L_002CA45C; }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA450u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002CA450u) [[unlikely]] return; }
L_002CA450:
    st32((c.r[17].w[0] + 36u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 32u), 0u);  if (t) { goto L_002CA498; } }
L_002CA45C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA464u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002CA464u) [[unlikely]] return; }
L_002CA464:
    set32(c.r[5], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002CA484; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    mmi::pminw(c.r[2], c.r[2], c.r[16]);
    set32(c.r[6], c.r[2].w[0] << 4);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA484u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x002CA484u) [[unlikely]] return; }
L_002CA484:
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA490u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002CA490u) [[unlikely]] return; }
L_002CA490:
    st32((c.r[17].w[0] + 36u), c.r[19].w[0]);
    st32((c.r[17].w[0] + 32u), c.r[16].w[0]);
    c.budget -= 2;
L_002CA498:
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA4ACu); set32(c.r[6], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x002CA4ACu) [[unlikely]] return; }
L_002CA4AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002CA4D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 40u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA4F8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002CA4F8u) [[unlikely]] return; }
L_002CA4F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002CA540; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA508u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 372u, depth + 1u); else { c.pc = 0x002AAFF0u; return; } if (c.pc != 0x002CA508u) [[unlikely]] return; }
L_002CA508:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] + 13632u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 31024u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 31028u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 31032u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    c.budget -= 14;
L_002CA540:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA550u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 272u, depth + 1u); else { c.pc = 0x002CA3E0u; return; } if (c.pc != 0x002CA550u) [[unlikely]] return; }
L_002CA550:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002CA570:
    c.r[2].d[0] = 0ull + 0ull;
    mmi::pmaxw(c.r[3], c.r[5], c.r[2]);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    mmi::pminw(c.r[7], c.r[3], c.r[2]);
    c.f[3] = ld32((c.r[28].w[0] - 32644u));
    set32(c.r[2], 0u - 1u);
    c.f[1] = ld32((c.r[28].w[0] - 32640u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_002CA5E8; } }
L_002CA598:
    c.f[2] = c.f[1];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_002CA5D8; } }
L_002CA5A4:
    set32(c.r[3], c.r[8].w[0] << 4);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_002CA5D8; }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002CA5D4; } }
    c.f[3] = c.f[0];
    c.r[2].d[0] = c.r[8].d[0] + 0ull;
    c.f[2] = c.f[0];
    c.budget -= 3;
L_002CA5D4:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_002CA5D8:
    c.r[3].d[0] = c.r[8].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 36u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CA5A4u | kUnwind; return; } goto L_002CA5A4; }
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_002CA5E8:
    c.r[1].d[0] = c.r[7].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[6], ld32((c.r[4].w[0] + 32u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CA598u | kUnwind; return; } goto L_002CA598; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CA600:
    c.f[3] = ld32((c.r[4].w[0] + 20u));
    c.f[2] = ld32((c.r[5].w[0] + 160u));
    c.f[1] = ld32((c.r[4].w[0] + 24u));
    c.f[0] = ld32((c.r[5].w[0] + 164u));
    c.f[3] = fp::sub(c.f[3], c.f[2]);
    c.f[2] = fp::sub(c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 28u));
    c.f[0] = ld32((c.r[5].w[0] + 168u));
    c.f[6] = ld32((c.r[5].w[0] + 112u));
    c.f[5] = ld32((c.r[5].w[0] + 116u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[4] = ld32((c.r[5].w[0] + 120u));
    c.facc = fp::mul(c.f[6], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[5], c.f[2]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[4], c.f[0]));
    c.f[0] = ld32((c.r[5].w[0] + 324u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[1] = c.f[0] & fp::kAbs;
    set32(c.r[6], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 21;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CA688; } }
L_002CA654:
    set32(c.r[5], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_002CA688; }
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002CA684; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002CA698; } }
L_002CA684:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_002CA688:
    c.r[3].d[0] = c.r[2].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 36u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CA654u | kUnwind; return; } goto L_002CA654; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_002CA698:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CA6A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002CA720; } }
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], c.r[17].w[0] << 4);  goto L_002CA6E4; }
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA6D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002CA6D8u) [[unlikely]] return; }
L_002CA6D8:
    st32((c.r[18].w[0] + 36u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 32u), 0u);  if (t) { goto L_002CA720; } }
L_002CA6E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA6ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002CA6ECu) [[unlikely]] return; }
L_002CA6EC:
    set32(c.r[5], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002CA70C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    mmi::pminw(c.r[2], c.r[2], c.r[17]);
    set32(c.r[6], c.r[2].w[0] << 4);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA70Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x002CA70Cu) [[unlikely]] return; }
L_002CA70C:
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA718u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002CA718u) [[unlikely]] return; }
L_002CA718:
    st32((c.r[18].w[0] + 36u), c.r[16].w[0]);
    st32((c.r[18].w[0] + 32u), c.r[17].w[0]);
    c.budget -= 2;
L_002CA720:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002CA740:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 40u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA768u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002CA768u) [[unlikely]] return; }
L_002CA768:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002CA7B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA778u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 372u, depth + 1u); else { c.pc = 0x002AAFF0u; return; } if (c.pc != 0x002CA778u) [[unlikely]] return; }
L_002CA778:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] + 13632u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 31024u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 31028u));
    st32((c.r[17].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 31032u));
    st32((c.r[17].w[0] + 16u), c.f[0]);
    st32((c.r[17].w[0] + 32u), 0u);
    st32((c.r[17].w[0] + 36u), 0u);
    c.budget -= 14;
L_002CA7B0:
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    st32((c.r[17].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    st32((c.r[17].w[0] + 16u), c.f[0]);
    set32(c.r[16], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 10;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[18].w[0] + 32u)));  goto L_002CA838; }
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], c.r[16].w[0] << 4);  goto L_002CA7F8; }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA7ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002CA7ECu) [[unlikely]] return; }
L_002CA7EC:
    st32((c.r[17].w[0] + 36u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 32u), 0u);  if (t) { goto L_002CA834; } }
L_002CA7F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA800u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002CA800u) [[unlikely]] return; }
L_002CA800:
    set32(c.r[5], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002CA820; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    mmi::pminw(c.r[2], c.r[2], c.r[16]);
    set32(c.r[6], c.r[2].w[0] << 4);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA820u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x002CA820u) [[unlikely]] return; }
L_002CA820:
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA82Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002CA82Cu) [[unlikely]] return; }
L_002CA82C:
    st32((c.r[17].w[0] + 36u), c.r[19].w[0]);
    st32((c.r[17].w[0] + 32u), c.r[16].w[0]);
    c.budget -= 2;
L_002CA834:
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 1;
L_002CA838:
    set32(c.r[5], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA848u); set32(c.r[6], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x002CA848u) [[unlikely]] return; }
L_002CA848:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002CA870:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.f[3] = ld32((c.r[5].w[0] + 172u));
    set32(c.r[16], c.r[5].w[0] + 112u);
    c.f[2] = ld32((c.r[4].w[0] + 16u));
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    st32((c.r[29].w[0] + 56u), c.f[2]);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA8C0u); st32((c.r[29].w[0] + 48u), c.f[0]);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x002CA8C0u) [[unlikely]] return; }
L_002CA8C0:
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.r[5].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    c.f[3] = ld32((c.r[29].w[0] + 68u));
    c.f[2] = ld32((c.r[16].w[0] + 52u));
    c.f[5] = ld32((c.r[29].w[0] + 72u));
    c.f[4] = ld32((c.r[16].w[0] + 56u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[2] = fp::add(c.f[3], c.f[2]);
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.f[4] = fp::add(c.f[5], c.f[4]);
    st32((c.r[17].w[0] + 24u), c.f[2]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 28u), c.f[4]);  if (t) { goto L_002CA92C; } }
L_002CA8F8:
    set32(c.r[4], c.r[5].w[0] << 4);
    c.f[1] = ld32((c.r[16].w[0] + 60u));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.f[1] = ld32((c.r[16].w[0] + 60u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.budget -= 13;
L_002CA92C:
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.r[3].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 36u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CA8F8u | kUnwind; return; } goto L_002CA8F8; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002CA950:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002CA9AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 13632u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA984u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002CA984u) [[unlikely]] return; }
L_002CA984:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA990u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 369u, depth + 1u); else { c.pc = 0x002AAF80u; return; } if (c.pc != 0x002CA990u) [[unlikely]] return; }
L_002CA990:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002CA9B0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA9ACu); set32(c.r[5], 0u + 40u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002CA9ACu) [[unlikely]] return; }
L_002CA9AC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002CA9B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CA9D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_002CA9EC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CA9ECu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CA9ECu) [[unlikely]] return; }
L_002CA9EC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002CAA00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002CAA7C; } }
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_002CAA64; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAA34u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002CAA34u) [[unlikely]] return; }
L_002CAA34:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAA44u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002CAA44u) [[unlikely]] return; }
L_002CAA44:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CAA60; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAA60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CAA60u) [[unlikely]] return; }
L_002CAA60:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_002CAA64:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002CAA80; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAA7Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002CAA7Cu) [[unlikely]] return; }
L_002CAA7C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002CAA80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002CAAA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002CABD4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[18].w[0] + 52u);
    set32(c.r[3], c.r[3].w[0] + 13728u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { goto L_002CAB14; } }
    set32(c.r[16], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002CAB14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAAE8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002CAAE8u) [[unlikely]] return; }
L_002CAAE8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAAF8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002CAAF8u) [[unlikely]] return; }
L_002CAAF8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CAB14; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAB14u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CAB14u) [[unlikely]] return; }
L_002CAB14:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_002CABBC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 17872u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002CAB44; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAB44u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CAB44u) [[unlikely]] return; }
L_002CAB44:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAB50u); set32(c.r[4], c.r[4].w[0] + 16608u);  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x002CAB50u) [[unlikely]] return; }
L_002CAB50:
    set32(c.r[2], ld32((c.r[28].w[0] - 27524u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 27520u)));  goto L_002CAB68; }
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    st32((c.r[28].w[0] - 27524u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 27520u)));
    c.budget -= 3;
L_002CAB68:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 44u)));  goto L_002CAB7C; }
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    st32((c.r[28].w[0] - 27520u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 3;
L_002CAB7C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 48u)));  goto L_002CAB90; }
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    st32((c.r[3].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 3;
L_002CAB90:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002CABA0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    st32((c.r[3].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 2;
L_002CABA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CABACu); set32(c.r[4], c.r[4].w[0] + 16608u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x002CABACu) [[unlikely]] return; }
L_002CABAC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CABB8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 208u, depth + 1u); else { c.pc = 0x002BDBC0u; return; } if (c.pc != 0x002CABB8u) [[unlikely]] return; }
L_002CABB8:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 1;
L_002CABBC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_002CABD8; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CABD4u); set32(c.r[5], 0u + 56u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002CABD4u) [[unlikely]] return; }
L_002CABD4:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002CABD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002CABF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), 0u);  if (t) { goto L_002CAC28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAC18u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002CAC18u) [[unlikely]] return; }
L_002CAC18:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAC28u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002CAC28u) [[unlikely]] return; }
L_002CAC28:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CAC40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 31608u);  c.pc = t; return; }
L_002CAC50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 52u)));  c.pc = t; return; }
L_002CAC60:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const bool t = c.r[18].d[0] != 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002CACA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CAEBC; } }
L_002CACA4:
    c.r[2].d[0] = 0ull < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CACC0; } }
    set32(c.r[2], c.r[20].w[0] - 1u);
    c.r[2].d[0] = c.r[20].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
L_002CACC0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[18].w[0])));  goto L_002CACF0; }
    c.r[2].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002CACE4; } }
    set32(c.r[2], c.r[19].w[0] - 1u);
    c.r[2].d[0] = c.r[19].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
L_002CACE4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 56u);  goto L_002CAD30; }
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_002CACF0:
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CACFCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CACFCu) [[unlikely]] return; }
L_002CACFC:
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CAD2C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAD18u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CAD18u) [[unlikely]] return; }
L_002CAD18:
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CAD2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CAEBC; } }
L_002CAD2C:
    set32(c.r[4], 0u + 56u);
    c.budget -= 1;
L_002CAD30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAD38u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002CAD38u) [[unlikely]] return; }
L_002CAD38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002CADE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAD48u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x002CAD48u) [[unlikely]] return; }
L_002CAD48:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] + 17872u);
    set32(c.r[2], 0u + 6u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 16608u);
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAD7Cu); st32((c.r[16].w[0] + 40u), 0u);  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x002CAD7Cu) [[unlikely]] return; }
L_002CAD7C:
    set32(c.r[2], ld32((c.r[28].w[0] - 27524u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 27520u)));  goto L_002CAD90; }
    st32((c.r[28].w[0] - 27524u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 27520u)));
    c.budget -= 2;
L_002CAD90:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 44u), 0u);  goto L_002CADA4; }
    st32((c.r[2].w[0] + 48u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 27520u)));
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 3;
L_002CADA4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[28].w[0] - 27520u), c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] + 16608u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CADB8u); st32((c.r[16].w[0] + 48u), 0u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x002CADB8u) [[unlikely]] return; }
L_002CADB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[22].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 13728u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[22].d[0] == 0ull; st32((c.r[16].w[0] + 52u), 0u);  if (t) { goto L_002CADE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CADD8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002CADD8u) [[unlikely]] return; }
L_002CADD8:
    set32(c.r[2], ld32((c.r[22].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CADE8u); st32((c.r[22].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002CADE8u) [[unlikely]] return; }
L_002CADE8:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAE0Cu); st32((c.r[16].w[0] + 36u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005F(c, 201u, depth + 1u); else { c.pc = 0x0027F040u; return; } if (c.pc != 0x002CAE0Cu) [[unlikely]] return; }
L_002CAE0C:
    set32(c.r[19], ld32((c.r[16].w[0] + 52u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[19].d[0] == c.r[17].d[0]) { set32(c.r[25], ld32((c.r[18].w[0])));  goto L_002CAE80; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[16].w[0] + 52u), c.r[17].w[0]);  goto L_002CAE5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAE2Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002CAE2Cu) [[unlikely]] return; }
L_002CAE2C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAE3Cu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002CAE3Cu) [[unlikely]] return; }
L_002CAE3C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CAE58; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAE58u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CAE58u) [[unlikely]] return; }
L_002CAE58:
    st32((c.r[16].w[0] + 52u), c.r[17].w[0]);
    c.budget -= 1;
L_002CAE5C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002CAE7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAE6Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002CAE6Cu) [[unlikely]] return; }
L_002CAE6C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAE7Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002CAE7Cu) [[unlikely]] return; }
L_002CAE7C:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_002CAE80:
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 272u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAE94u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CAE94u) [[unlikely]] return; }
L_002CAE94:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002CAEBC; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002CAEBC; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CAEB8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CAEB8u) [[unlikely]] return; }
L_002CAEB8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002CAEBC:
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
L_002CAEF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 31640u);  c.pc = t; return; }
L_002CAF00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_002CAF10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CAF20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_002CAF30:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 5;
    { set32(c.r[6], 0u - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002A52D0u | kUnwind; return; } [[clang::musttail]] return unit_0069(c, 152u, depth); }
L_002CAF50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[10], c.r[5].w[0] + 308u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[9], c.r[5].w[0] + 272u);
    c.f[2] = ld32((c.r[5].w[0] + 148u));
    c.f[1] = ld32((c.r[5].w[0] + 152u));
    c.f[0] = ld32((c.r[5].w[0] + 144u));
    st32((c.r[29].w[0] + 16u), c.f[0]);
    st32((c.r[29].w[0] + 20u), c.f[2]);
    st32((c.r[29].w[0] + 24u), c.f[1]);
    c.f[2] = ld32((c.r[5].w[0] + 132u));
    c.f[1] = ld32((c.r[5].w[0] + 136u));
    c.f[0] = ld32((c.r[5].w[0] + 128u));
    st32((c.r[29].w[0] + 32u), c.f[0]);
    st32((c.r[29].w[0] + 36u), c.f[2]);
    st32((c.r[29].w[0] + 40u), c.f[1]);
    c.f[2] = ld32((c.r[5].w[0] + 116u));
    c.f[1] = ld32((c.r[5].w[0] + 120u));
    c.f[0] = ld32((c.r[5].w[0] + 112u));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    st32((c.r[29].w[0] + 52u), c.f[2]);
    st32((c.r[29].w[0] + 56u), c.f[1]);
    set32(c.r[3], ld32((c.r[4].w[0] + 100u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 27;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 160u);  if (t) { goto L_002CAFC8; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 100u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 2ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_002CAFC8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002CAFDC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 100u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 4ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_002CAFDC:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[6].d[0] = ld8((c.r[4].w[0] + 96u));  goto L_002CAFEC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002CB00C; } }
L_002CAFEC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_002CB00C; }
    set32(c.r[6], ld32((c.r[4].w[0] + 100u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    if (c.r[6].d[0] != c.r[3].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_002CB00C; }
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_002CB00C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002CB034; }
    st8((c.r[4].w[0] + 132u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], c.r[29].w[0] + 48u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[7], c.r[29].w[0] + 32u);
    set32(c.r[25], ld32((c.r[25].w[0] + 348u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB030u); set32(c.r[8], c.r[29].w[0] + 16u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CB030u) [[unlikely]] return; }
L_002CB030:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002CB034:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002CB040:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 27612u), 0u);  c.pc = t; return; }
L_002CB050:
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
L_002CB080:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB0ACu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0068(c, 398u, depth + 1u); else { c.pc = 0x002A3500u; return; } if (c.pc != 0x002CB0ACu) [[unlikely]] return; }
L_002CB0AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB0B4u); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 397u, depth + 1u); else { c.pc = 0x002A34F0u; return; } if (c.pc != 0x002CB0B4u) [[unlikely]] return; }
L_002CB0B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB0BCu); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 399u, depth + 1u); else { c.pc = 0x002A3510u; return; } if (c.pc != 0x002CB0BCu) [[unlikely]] return; }
L_002CB0BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB0C4u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0068(c, 396u, depth + 1u); else { c.pc = 0x002A34E0u; return; } if (c.pc != 0x002CB0C4u) [[unlikely]] return; }
L_002CB0C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB0CCu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006B(c, 156u, depth + 1u); else { c.pc = 0x002ACC40u; return; } if (c.pc != 0x002CB0CCu) [[unlikely]] return; }
L_002CB0CC:
    set32(c.r[25], ld32((c.r[21].w[0])));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 312u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB0F4u); c.r[10].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CB0F4u) [[unlikely]] return; }
L_002CB0F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002CB120:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB134u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 411u, depth + 1u); else { c.pc = 0x002BB1A0u; return; } if (c.pc != 0x002CB134u) [[unlikely]] return; }
L_002CB134:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB140u); set32(c.r[4], ld32((c.r[2].w[0] + 31640u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x002CB140u) [[unlikely]] return; }
L_002CB140:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB154u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002CB154u) [[unlikely]] return; }
L_002CB154:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CB170:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[6], 0u + 32u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x002C8000u < 16384u) { entry = entries_0072[(t - 0x002C8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002CB190:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x002C8000u < 16384u) { entry = entries_0072[(t - 0x002C8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002CB1B0:
    set32(c.r[2], ld32((c.r[5].w[0] + 212u)));
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 216u)));
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 392u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x002C8000u < 16384u) { entry = entries_0072[(t - 0x002C8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002CB1D0:
    set32(c.r[2], ld32((c.r[5].w[0] + 212u)));
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 216u)));
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 388u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x002C8000u < 16384u) { entry = entries_0072[(t - 0x002C8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002CB1F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CB200:
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), c.r[6].w[0]);  c.pc = t; return; }
L_002CB210:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 27612u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002CB23C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 212u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB238u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CB238u) [[unlikely]] return; }
L_002CB238:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002CB23C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002CB250:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 27612u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002CB27C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 208u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB278u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CB278u) [[unlikely]] return; }
L_002CB278:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002CB27C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002CB290:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 27612u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002CB2BC; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 204u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB2B8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CB2B8u) [[unlikely]] return; }
L_002CB2B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002CB2BC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002CB2D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 27612u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002CB2FC; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 196u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB2F8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CB2F8u) [[unlikely]] return; }
L_002CB2F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002CB2FC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002CB310:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 27612u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002CB33C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 192u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB338u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CB338u) [[unlikely]] return; }
L_002CB338:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002CB33C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002CB350:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 27612u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002CB37C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 200u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB378u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CB378u) [[unlikely]] return; }
L_002CB378:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002CB37C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002CB390:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002CB550; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[17].w[0] + 80u);
    set32(c.r[3], c.r[3].w[0] + 13824u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[28].w[0] - 27612u), 0u);  if (t) { goto L_002CB3D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB3D0u); set32(c.r[4], ld32((c.r[17].w[0] + 80u)));  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x002CB3D0u) [[unlikely]] return; }
L_002CB3D0:
    set32(c.r[2], c.r[17].w[0] + 64u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 48u);  goto L_002CB3E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB3E4u); set32(c.r[4], ld32((c.r[17].w[0] + 64u)));  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x002CB3E4u) [[unlikely]] return; }
L_002CB3E4:
    set32(c.r[2], c.r[17].w[0] + 48u);
    c.budget -= 1;
L_002CB3E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 28u);  goto L_002CB3FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB3F8u); set32(c.r[4], ld32((c.r[17].w[0] + 48u)));  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x002CB3F8u) [[unlikely]] return; }
L_002CB3F8:
    set32(c.r[2], c.r[17].w[0] + 28u);
    c.budget -= 1;
L_002CB3FC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 24u);  goto L_002CB448; }
    set32(c.r[18], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002CB444; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB418u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002CB418u) [[unlikely]] return; }
L_002CB418:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB428u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002CB428u) [[unlikely]] return; }
L_002CB428:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CB444; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB444u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CB444u) [[unlikely]] return; }
L_002CB444:
    set32(c.r[2], c.r[17].w[0] + 24u);
    c.budget -= 1;
L_002CB448:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 20u);  goto L_002CB494; }
    set32(c.r[18], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002CB490; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB464u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002CB464u) [[unlikely]] return; }
L_002CB464:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB474u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002CB474u) [[unlikely]] return; }
L_002CB474:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CB490; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB490u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CB490u) [[unlikely]] return; }
L_002CB490:
    set32(c.r[2], c.r[17].w[0] + 20u);
    c.budget -= 1;
L_002CB494:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 8u);  goto L_002CB4E0; }
    set32(c.r[18], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002CB4DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB4B0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002CB4B0u) [[unlikely]] return; }
L_002CB4B0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB4C0u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002CB4C0u) [[unlikely]] return; }
L_002CB4C0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CB4DC; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB4DCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CB4DCu) [[unlikely]] return; }
L_002CB4DC:
    set32(c.r[2], c.r[17].w[0] + 8u);
    c.budget -= 1;
L_002CB4E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002CB52C; }
    set32(c.r[18], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002CB528; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB4FCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002CB4FCu) [[unlikely]] return; }
L_002CB4FC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB50Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002CB50Cu) [[unlikely]] return; }
L_002CB50C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CB528; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB528u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CB528u) [[unlikely]] return; }
L_002CB528:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002CB52C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB534u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 472u, depth + 1u); else { c.pc = 0x002BB890u; return; } if (c.pc != 0x002CB534u) [[unlikely]] return; }
L_002CB534:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002CB554; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB550u); set32(c.r[5], 0u + 152u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002CB550u) [[unlikely]] return; }
L_002CB550:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002CB554:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002CB570:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB58Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x002CB58Cu) [[unlikely]] return; }
L_002CB58C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 13824u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 8u), 0u);  if (t) { goto L_002CB5BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB5ACu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002CB5ACu) [[unlikely]] return; }
L_002CB5AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB5BCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002CB5BCu) [[unlikely]] return; }
L_002CB5BC:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 20u), 0u);  if (t) { goto L_002CB5E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB5D0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002CB5D0u) [[unlikely]] return; }
L_002CB5D0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB5E0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002CB5E0u) [[unlikely]] return; }
L_002CB5E0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 24u), 0u);  if (t) { goto L_002CB604; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB5F4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002CB5F4u) [[unlikely]] return; }
L_002CB5F4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB604u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002CB604u) [[unlikely]] return; }
L_002CB604:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 28u), 0u);  if (t) { goto L_002CB628; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB618u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002CB618u) [[unlikely]] return; }
L_002CB618:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB628u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002CB628u) [[unlikely]] return; }
L_002CB628:
    st32((c.r[17].w[0] + 32u), 0u);
    set32(c.r[4], c.r[17].w[0] + 48u);
    st32((c.r[17].w[0] + 36u), 0u);
    st32((c.r[17].w[0] + 40u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB640u); st32((c.r[17].w[0] + 44u), 0u);  if (depth < kMaxDepth) unit_0047(c, 220u, depth + 1u); else { c.pc = 0x0021DEA0u; return; } if (c.pc != 0x002CB640u) [[unlikely]] return; }
L_002CB640:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB648u); set32(c.r[4], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_0047(c, 220u, depth + 1u); else { c.pc = 0x0021DEA0u; return; } if (c.pc != 0x002CB648u) [[unlikely]] return; }
L_002CB648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB650u); set32(c.r[4], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_0047(c, 220u, depth + 1u); else { c.pc = 0x0021DEA0u; return; } if (c.pc != 0x002CB650u) [[unlikely]] return; }
L_002CB650:
    st8((c.r[17].w[0] + 96u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 100u), 0u);
    st32((c.r[17].w[0] + 108u), 0u);
    st8((c.r[17].w[0] + 112u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 113u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 116u), 0u);
    st32((c.r[17].w[0] + 120u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 124u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 128u), 0u);
    st8((c.r[17].w[0] + 132u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 136u), 0u);
    st32((c.r[17].w[0] + 140u), 0u);
    st32((c.r[17].w[0] + 144u), 0u);
    st32((c.r[17].w[0] + 148u), 0u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB694u); st32((c.r[28].w[0] - 27612u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_005F(c, 158u, depth + 1u); else { c.pc = 0x0027EB90u; return; } if (c.pc != 0x002CB694u) [[unlikely]] return; }
L_002CB694:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (t) { goto L_002CB6B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB6A8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002CB6A8u) [[unlikely]] return; }
L_002CB6A8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB6B8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002CB6B8u) [[unlikely]] return; }
L_002CB6B8:
    set32(c.r[4], 0u + 664u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB6C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002CB6C4u) [[unlikely]] return; }
L_002CB6C4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_002CB6E8; }
    set32(c.r[5], ld32((c.r[29].w[0] + 76u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB6E0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0080(c, 209u, depth + 1u); else { c.pc = 0x003016F0u; return; } if (c.pc != 0x002CB6E0u) [[unlikely]] return; }
L_002CB6E0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_002CB6E8:
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB6F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CB6F4u) [[unlikely]] return; }
L_002CB6F4:
    set32(c.r[18], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[16].d[0]) { set32(c.r[16], ld32((c.r[29].w[0] + 76u)));  goto L_002CB764; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 20u), c.r[16].w[0]);  goto L_002CB740; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB710u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002CB710u) [[unlikely]] return; }
L_002CB710:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB720u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002CB720u) [[unlikely]] return; }
L_002CB720:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CB73C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB73Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CB73Cu) [[unlikely]] return; }
L_002CB73C:
    st32((c.r[17].w[0] + 20u), c.r[16].w[0]);
    c.budget -= 1;
L_002CB740:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002CB760; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB750u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002CB750u) [[unlikely]] return; }
L_002CB750:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB760u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002CB760u) [[unlikely]] return; }
L_002CB760:
    set32(c.r[16], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 1;
L_002CB764:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002CB7A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB774u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002CB774u) [[unlikely]] return; }
L_002CB774:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB784u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002CB784u) [[unlikely]] return; }
L_002CB784:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CB7A0; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB7A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CB7A0u) [[unlikely]] return; }
L_002CB7A0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002CB7A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002CB7C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 31664u);  c.pc = t; return; }
L_002CB7D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 4u);  c.pc = t; return; }
L_002CB7E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[28].w[0] - 27608u)));
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_002CB85C; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_002CB838; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB808u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002CB808u) [[unlikely]] return; }
L_002CB808:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB818u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002CB818u) [[unlikely]] return; }
L_002CB818:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002CB834; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB834u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CB834u) [[unlikely]] return; }
L_002CB834:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002CB838:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[28].w[0] - 27608u), 0u);  if (t) { goto L_002CB858; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB848u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002CB848u) [[unlikely]] return; }
L_002CB848:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB858u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002CB858u) [[unlikely]] return; }
L_002CB858:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_002CB85C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CB870:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 28u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB88Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002CB88Cu) [[unlikely]] return; }
L_002CB88C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002CB8B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB89Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x002CB89Cu) [[unlikely]] return; }
L_002CB89C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 13520u);
    set32(c.r[3], c.r[3].w[0] + 14240u);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 6;
L_002CB8B4:
    set32(c.r[17], ld32((c.r[28].w[0] - 27608u)));
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[16].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_002CB924; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[28].w[0] - 27608u), c.r[16].w[0]);  goto L_002CB900; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB8D0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002CB8D0u) [[unlikely]] return; }
L_002CB8D0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB8E0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002CB8E0u) [[unlikely]] return; }
L_002CB8E0:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002CB8FC; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB8FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CB8FCu) [[unlikely]] return; }
L_002CB8FC:
    st32((c.r[28].w[0] - 27608u), c.r[16].w[0]);
    c.budget -= 1;
L_002CB900:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002CB920; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB910u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002CB910u) [[unlikely]] return; }
L_002CB910:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB920u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002CB920u) [[unlikely]] return; }
L_002CB920:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_002CB924:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CB940:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB954u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 92u, depth + 1u); else { c.pc = 0x002C8A80u; return; } if (c.pc != 0x002CB954u) [[unlikely]] return; }
L_002CB954:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB960u); set32(c.r[4], ld32((c.r[2].w[0] + 31664u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x002CB960u) [[unlikely]] return; }
L_002CB960:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB974u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002CB974u) [[unlikely]] return; }
L_002CB974:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CB990:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C8AD0u | kUnwind; return; } goto L_002C8AD0; }
L_002CB9A0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C8AE0u | kUnwind; return; } goto L_002C8AE0; }
L_002CB9B0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C8AF0u | kUnwind; return; } goto L_002C8AF0; }
L_002CB9C0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C8B00u | kUnwind; return; } goto L_002C8B00; }
L_002CB9D0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002C8B10u | kUnwind; return; } goto L_002C8B10; }
L_002CB9E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 28u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CB9F8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002CB9F8u) [[unlikely]] return; }
L_002CB9F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002CBA20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBA08u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x002CBA08u) [[unlikely]] return; }
L_002CBA08:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 13520u);
    set32(c.r[2], c.r[2].w[0] + 14240u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 6;
L_002CBA20:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002CBA40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 28u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBA68u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002CBA68u) [[unlikely]] return; }
L_002CBA68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002CBA90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBA78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x002CBA78u) [[unlikely]] return; }
L_002CBA78:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 13520u);
    set32(c.r[2], c.r[2].w[0] + 14240u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 6;
L_002CBA90:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBAA0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 101u, depth + 1u); else { c.pc = 0x002C8B20u; return; } if (c.pc != 0x002CBAA0u) [[unlikely]] return; }
L_002CBAA0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002CBAC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002CBB1C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 14240u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_002CBB00; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 13520u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBB00u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006F(c, 208u, depth + 1u); else { c.pc = 0x002BDBC0u; return; } if (c.pc != 0x002CBB00u) [[unlikely]] return; }
L_002CBB00:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002CBB20; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBB1Cu); set32(c.r[5], 0u + 28u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002CBB1Cu) [[unlikely]] return; }
L_002CBB1C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002CBB20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CBB40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002CBBBC; } }
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_002CBBA4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBB74u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002CBB74u) [[unlikely]] return; }
L_002CBB74:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBB84u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002CBB84u) [[unlikely]] return; }
L_002CBB84:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CBBA0; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBBA0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CBBA0u) [[unlikely]] return; }
L_002CBBA0:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_002CBBA4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002CBBC0; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBBBCu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002CBBBCu) [[unlikely]] return; }
L_002CBBBC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002CBBC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002CBBE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002CBC48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 14336u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_002CBC2C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 9072u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBC1Cu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002CBC1Cu) [[unlikely]] return; }
L_002CBC1C:
    set32(c.r[2], ld32((c.r[28].w[0] - 27620u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBC2Cu); st32((c.r[28].w[0] - 27620u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002CBC2Cu) [[unlikely]] return; }
L_002CBC2C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002CBC4C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBC48u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002CBC48u) [[unlikely]] return; }
L_002CBC48:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002CBC4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CBC60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 31712u);  c.pc = t; return; }
L_002CBC70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CBC80:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002CBCDC; } }
    set32(c.r[18], ld32((c.r[28].w[0] - 27612u)));
    set32(c.r[16], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002CBCD0; } }
L_002CBCB0:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBCCCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CBCCCu) [[unlikely]] return; }
L_002CBCCC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002CBCD0:
    c.r[3].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CBCB0u | kUnwind; return; } goto L_002CBCB0; }
L_002CBCDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002CBD00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 31776u);  c.pc = t; return; }
L_002CBD10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBD24u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 411u, depth + 1u); else { c.pc = 0x002BB1A0u; return; } if (c.pc != 0x002CBD24u) [[unlikely]] return; }
L_002CBD24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBD30u); set32(c.r[4], ld32((c.r[2].w[0] + 31776u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x002CBD30u) [[unlikely]] return; }
L_002CBD30:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBD44u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002CBD44u) [[unlikely]] return; }
L_002CBD44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CBD60:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BB240u | kUnwind; return; } [[clang::musttail]] return unit_006E(c, 418u, depth); }
L_002CBD70:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BB2D0u | kUnwind; return; } [[clang::musttail]] return unit_006E(c, 424u, depth); }
L_002CBD80:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BB2E0u | kUnwind; return; } [[clang::musttail]] return unit_006E(c, 425u, depth); }
L_002CBD90:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BB310u | kUnwind; return; } [[clang::musttail]] return unit_006E(c, 427u, depth); }
L_002CBDA0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BB320u | kUnwind; return; } [[clang::musttail]] return unit_006E(c, 428u, depth); }
L_002CBDB0:
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002CBDC0; }
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 1;
L_002CBDC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CBDD0:
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[5].w[0] << 2);  goto L_002CBDE8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CBE00; } }
L_002CBDE8:
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002CBE00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_002CBE00; } }
L_002CBE00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CBE10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002CBE40; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBE40u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CBE40u) [[unlikely]] return; }
L_002CBE40:
    st32((c.r[17].w[0] + 32u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002CBE60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 32u)));  c.pc = t; return; }
L_002CBE70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 28u)));  c.pc = t; return; }
L_002CBE80:
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[5].w[0] << 2);  goto L_002CBE98; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002CBEA0; } }
L_002CBE98:
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 2;
L_002CBEA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002CBEB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBEDCu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CBEDCu) [[unlikely]] return; }
L_002CBEDC:
    set32(c.r[17], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[16].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002CBF4C; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[18].w[0] + 28u), c.r[16].w[0]);  goto L_002CBF28; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBEF8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002CBEF8u) [[unlikely]] return; }
L_002CBEF8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBF08u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002CBF08u) [[unlikely]] return; }
L_002CBF08:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002CBF24; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBF24u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CBF24u) [[unlikely]] return; }
L_002CBF24:
    st32((c.r[18].w[0] + 28u), c.r[16].w[0]);
    c.budget -= 1;
L_002CBF28:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002CBF48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBF38u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002CBF38u) [[unlikely]] return; }
L_002CBF38:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBF48u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002CBF48u) [[unlikely]] return; }
L_002CBF48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002CBF4C:
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002CBF70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBFA0u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CBFA0u) [[unlikely]] return; }
L_002CBFA0:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  [[clang::musttail]] return unit_0073(c, 5u, depth); }
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == c.r[16].d[0]; set32(c.r[17], c.r[2].w[0] + 8u);  if (t) { [[clang::musttail]] return unit_0073(c, 4u, depth); } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0]), c.r[16].w[0]);  [[clang::musttail]] return unit_0073(c, 2u, depth); }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBFD4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002CBFD4u) [[unlikely]] return; }
L_002CBFD4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002CBFE4u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002CBFE4u) [[unlikely]] return; }
L_002CBFE4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0073(c, 1u, depth); } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002CC000u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002CC000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0073(c, 1u, depth);
}

}
