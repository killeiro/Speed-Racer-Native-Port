#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00FF[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 11, 0, 0, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0,
    0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0,
    0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0,
    0, 0, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 37,
    0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40,
    0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0,
    45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0,
    0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 59, 0, 0, 0, 60, 0, 0, 61, 0, 0, 62, 0, 0, 0, 63, 0,
    0, 64, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 70,
    0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0,
    78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0,
    0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0,
    0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0,
    0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0,
    101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0,
    0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0,
    0, 119, 0, 0, 0, 120, 0, 121, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130,
    0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 135, 0, 136, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0,
    0, 140, 0, 141, 0, 0, 0, 0, 0, 142, 0, 143, 0, 144, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0,
    0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 153, 0,
    0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0,
    158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0,
    0, 162, 0, 163, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0,
    0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 174, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0,
    0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186,
    0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0,
    0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0,
    0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 211, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0,
    215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0,
    0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 225, 0,
    0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 228, 0, 229, 0, 0, 0,
    0, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0,
    0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0,
    241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0,
    0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0,
    0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    255, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0,
    0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0,
    268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 270, 0, 0, 0, 0, 0, 0,
    271, 0, 272, 0, 273, 0, 274, 0, 0, 275, 0, 276, 0, 0, 0, 0, 277, 0, 0, 278, 0, 279, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0,
    0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 286, 0, 0, 287, 0,
    0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    290, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 293, 0, 294, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 297,
    0, 298, 0, 0, 299, 0, 300, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0,
    304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0,
    309, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 314, 0, 315, 0, 316, 0, 317, 0, 318, 0, 319, 0,
    320, 0, 0, 0, 0, 321, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0,
    0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 331, 0, 0, 332, 0, 333, 0, 334, 0, 0, 335, 0, 0, 0, 0, 336,
    0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 0, 339, 0, 0, 340, 0, 0, 341, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0, 0,
    0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 346, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0,
    0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 0,
    0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364,
    0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 368, 0, 369, 0, 370, 0, 371, 0, 0, 0,
    0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 374, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 377, 0, 0, 0, 378, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 380, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 383, 0, 0,
    384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 395, 0, 0, 0, 0, 0, 396, 0, 0,
    0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 400,
    0, 0, 0, 0, 401, 0, 0, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 406, 0, 0, 0, 0,
    407, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 410, 0, 0, 411, 0, 412, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 417, 0, 0,
    418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0,
    0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0,
    0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 434, 0, 0, 0, 435,
    0, 0, 436, 0, 0, 437, 0, 0, 438, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 442, 0, 0, 443,
    0, 0, 0, 444, 0, 445, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 449,
    0, 450, 0, 0, 451, 0, 452, 0, 0, 453, 0, 0, 454, 0, 0, 0, 0, 0, 455, 0, 456, 0, 0, 0, 0, 0, 457, 0, 0, 0, 458, 0,
    0, 0, 459, 0, 460, 0, 0, 0, 0, 461, 0, 0, 0, 462, 0, 0, 0, 0, 463, 0, 0, 464, 0, 0, 465, 0, 466, 0, 0, 0, 0, 0,
    467, 0, 0, 468, 0, 469, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    472, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 476, 0, 0, 0, 0, 0,
    0, 0, 477, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0,
    481, 0, 0, 0, 0, 482, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 484, 0, 0, 485, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 487,
    0, 0, 0, 0, 488, 0, 0, 489, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 492, 0, 0, 0, 493, 0, 494, 0,
    495, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 499, 0, 0, 500, 0,
    0, 501, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 504, 0, 0, 505, 0, 0, 0, 0, 506,
    0, 0, 0, 507, 0, 0, 0, 508, 0, 0, 0, 509, 0, 510, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 513, 0,
    0, 514, 0, 0, 515, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 517, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 522,
    0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 525, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0,
    528, 0, 0, 0, 529, 0, 530, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0,
    0, 0, 534, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0,
    538, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 543, 0, 0, 544, 0, 0, 0, 0, 545, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0,
    547, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 552,
    0, 0, 0, 553, 0, 0, 0, 554, 0, 0, 0, 0, 555, 0, 0, 556, 0, 0, 557, 0, 0, 0, 0, 558, 0, 0, 559, 0, 0, 0, 560, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00FF(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_004FC000;
    case 2u: goto L_004FC030;
    case 3u: goto L_004FC214;
    case 4u: goto L_004FC298;
    case 5u: goto L_004FC2E0;
    case 6u: goto L_004FC318;
    case 7u: goto L_004FC32C;
    case 8u: goto L_004FC344;
    case 9u: goto L_004FC36C;
    case 10u: goto L_004FC3D0;
    case 11u: goto L_004FC404;
    case 12u: goto L_004FC41C;
    case 13u: goto L_004FC424;
    case 14u: goto L_004FC458;
    case 15u: goto L_004FC490;
    case 16u: goto L_004FC4A0;
    case 17u: goto L_004FC4B4;
    case 18u: goto L_004FC4BC;
    case 19u: goto L_004FC4E8;
    case 20u: goto L_004FC504;
    case 21u: goto L_004FC538;
    case 22u: goto L_004FC550;
    case 23u: goto L_004FC570;
    case 24u: goto L_004FC5A4;
    case 25u: goto L_004FC5B0;
    case 26u: goto L_004FC5E4;
    case 27u: goto L_004FC5F8;
    case 28u: goto L_004FC608;
    case 29u: goto L_004FC61C;
    case 30u: goto L_004FC634;
    case 31u: goto L_004FC66C;
    case 32u: goto L_004FC690;
    case 33u: goto L_004FC698;
    case 34u: goto L_004FC6B8;
    case 35u: goto L_004FC6D4;
    case 36u: goto L_004FC6F4;
    case 37u: goto L_004FC6FC;
    case 38u: goto L_004FC71C;
    case 39u: goto L_004FC740;
    case 40u: goto L_004FC77C;
    case 41u: goto L_004FC784;
    case 42u: goto L_004FC7B0;
    case 43u: goto L_004FC7D0;
    case 44u: goto L_004FC7EC;
    case 45u: goto L_004FC800;
    case 46u: goto L_004FC810;
    case 47u: goto L_004FC840;
    case 48u: goto L_004FC86C;
    case 49u: goto L_004FC898;
    case 50u: goto L_004FC8C4;
    case 51u: goto L_004FC900;
    case 52u: goto L_004FC918;
    case 53u: goto L_004FC930;
    case 54u: goto L_004FC954;
    case 55u: goto L_004FC96C;
    case 56u: goto L_004FC984;
    case 57u: goto L_004FC9A8;
    case 58u: goto L_004FC9B4;
    case 59u: goto L_004FC9C0;
    case 60u: goto L_004FC9D0;
    case 61u: goto L_004FC9DC;
    case 62u: goto L_004FC9E8;
    case 63u: goto L_004FC9F8;
    case 64u: goto L_004FCA04;
    case 65u: goto L_004FCA10;
    case 66u: goto L_004FCA18;
    case 67u: goto L_004FCA50;
    case 68u: goto L_004FCA68;
    case 69u: goto L_004FCA74;
    case 70u: goto L_004FCA7C;
    case 71u: goto L_004FCA90;
    case 72u: goto L_004FCAA0;
    case 73u: goto L_004FCAB0;
    case 74u: goto L_004FCAC8;
    case 75u: goto L_004FCAD4;
    case 76u: goto L_004FCADC;
    case 77u: goto L_004FCAF0;
    case 78u: goto L_004FCB00;
    case 79u: goto L_004FCB10;
    case 80u: goto L_004FCB28;
    case 81u: goto L_004FCB34;
    case 82u: goto L_004FCB3C;
    case 83u: goto L_004FCB50;
    case 84u: goto L_004FCB60;
    case 85u: goto L_004FCB70;
    case 86u: goto L_004FCB88;
    case 87u: goto L_004FCBA0;
    case 88u: goto L_004FCBB8;
    case 89u: goto L_004FCBD0;
    case 90u: goto L_004FCBEC;
    case 91u: goto L_004FCC08;
    case 92u: goto L_004FCC24;
    case 93u: goto L_004FCC34;
    case 94u: goto L_004FCC44;
    case 95u: goto L_004FCC5C;
    case 96u: goto L_004FCC78;
    case 97u: goto L_004FCC88;
    case 98u: goto L_004FCCA8;
    case 99u: goto L_004FCCC4;
    case 100u: goto L_004FCCE0;
    case 101u: goto L_004FCD00;
    case 102u: goto L_004FCD10;
    case 103u: goto L_004FCD30;
    case 104u: goto L_004FCD40;
    case 105u: goto L_004FCD50;
    case 106u: goto L_004FCD70;
    case 107u: goto L_004FCD90;
    case 108u: goto L_004FCDB4;
    case 109u: goto L_004FCDC0;
    case 110u: goto L_004FCE30;
    case 111u: goto L_004FCEB0;
    case 112u: goto L_004FCF24;
    case 113u: goto L_004FCF40;
    case 114u: goto L_004FCF5C;
    case 115u: goto L_004FCF74;
    case 116u: goto L_004FD000;
    case 117u: goto L_004FD010;
    case 118u: goto L_004FD064;
    case 119u: goto L_004FD084;
    case 120u: goto L_004FD094;
    case 121u: goto L_004FD09C;
    case 122u: goto L_004FD0A4;
    case 123u: goto L_004FD0B4;
    case 124u: goto L_004FD0E0;
    case 125u: goto L_004FD108;
    case 126u: goto L_004FD128;
    case 127u: goto L_004FD138;
    case 128u: goto L_004FD140;
    case 129u: goto L_004FD168;
    case 130u: goto L_004FD17C;
    case 131u: goto L_004FD198;
    case 132u: goto L_004FD1B4;
    case 133u: goto L_004FD1BC;
    case 134u: goto L_004FD1E0;
    case 135u: goto L_004FD21C;
    case 136u: goto L_004FD224;
    case 137u: goto L_004FD22C;
    case 138u: goto L_004FD244;
    case 139u: goto L_004FD26C;
    case 140u: goto L_004FD284;
    case 141u: goto L_004FD28C;
    case 142u: goto L_004FD2A4;
    case 143u: goto L_004FD2AC;
    case 144u: goto L_004FD2B4;
    case 145u: goto L_004FD2BC;
    case 146u: goto L_004FD2D4;
    case 147u: goto L_004FD2F0;
    case 148u: goto L_004FD30C;
    case 149u: goto L_004FD31C;
    case 150u: goto L_004FD348;
    case 151u: goto L_004FD35C;
    case 152u: goto L_004FD36C;
    case 153u: goto L_004FD378;
    case 154u: goto L_004FD390;
    case 155u: goto L_004FD3A0;
    case 156u: goto L_004FD540;
    case 157u: goto L_004FD560;
    case 158u: goto L_004FD580;
    case 159u: goto L_004FD5A4;
    case 160u: goto L_004FD5C8;
    case 161u: goto L_004FD5F0;
    case 162u: goto L_004FD604;
    case 163u: goto L_004FD60C;
    case 164u: goto L_004FD614;
    case 165u: goto L_004FD62C;
    case 166u: goto L_004FD658;
    case 167u: goto L_004FD678;
    case 168u: goto L_004FD698;
    case 169u: goto L_004FD6B0;
    case 170u: goto L_004FD6D4;
    case 171u: goto L_004FD6F8;
    case 172u: goto L_004FD720;
    case 173u: goto L_004FD734;
    case 174u: goto L_004FD73C;
    case 175u: goto L_004FD744;
    case 176u: goto L_004FD75C;
    case 177u: goto L_004FD788;
    case 178u: goto L_004FD7A8;
    case 179u: goto L_004FD7C8;
    case 180u: goto L_004FD810;
    case 181u: goto L_004FD864;
    case 182u: goto L_004FD878;
    case 183u: goto L_004FD88C;
    case 184u: goto L_004FD8A4;
    case 185u: goto L_004FD8C0;
    case 186u: goto L_004FD8FC;
    case 187u: goto L_004FD920;
    case 188u: goto L_004FD930;
    case 189u: goto L_004FD948;
    case 190u: goto L_004FD95C;
    case 191u: goto L_004FD974;
    case 192u: goto L_004FD988;
    case 193u: goto L_004FD9A0;
    case 194u: goto L_004FD9D4;
    case 195u: goto L_004FDA04;
    case 196u: goto L_004FDA1C;
    case 197u: goto L_004FDA30;
    case 198u: goto L_004FDA48;
    case 199u: goto L_004FDA5C;
    case 200u: goto L_004FDA74;
    case 201u: goto L_004FDAD0;
    case 202u: goto L_004FDAE0;
    case 203u: goto L_004FDB04;
    case 204u: goto L_004FDB20;
    case 205u: goto L_004FDB54;
    case 206u: goto L_004FDB84;
    case 207u: goto L_004FDBA0;
    case 208u: goto L_004FDBC0;
    case 209u: goto L_004FDBD0;
    case 210u: goto L_004FDC20;
    case 211u: goto L_004FDC28;
    case 212u: goto L_004FDC30;
    case 213u: goto L_004FDC48;
    case 214u: goto L_004FDC60;
    case 215u: goto L_004FDC80;
    case 216u: goto L_004FDC9C;
    case 217u: goto L_004FDCB0;
    case 218u: goto L_004FDCEC;
    case 219u: goto L_004FDD0C;
    case 220u: goto L_004FDD34;
    case 221u: goto L_004FDD60;
    case 222u: goto L_004FDDB0;
    case 223u: goto L_004FDDC4;
    case 224u: goto L_004FDDD8;
    case 225u: goto L_004FDDF8;
    case 226u: goto L_004FDE10;
    case 227u: goto L_004FDE60;
    case 228u: goto L_004FDE68;
    case 229u: goto L_004FDE70;
    case 230u: goto L_004FDE88;
    case 231u: goto L_004FDEA4;
    case 232u: goto L_004FDEC0;
    case 233u: goto L_004FDED8;
    case 234u: goto L_004FDF00;
    case 235u: goto L_004FDF38;
    case 236u: goto L_004FDF54;
    case 237u: goto L_004FDF74;
    case 238u: goto L_004FDF90;
    case 239u: goto L_004FDFB0;
    case 240u: goto L_004FDFDC;
    case 241u: goto L_004FE000;
    case 242u: goto L_004FE04C;
    case 243u: goto L_004FE060;
    case 244u: goto L_004FE0B0;
    case 245u: goto L_004FE0F0;
    case 246u: goto L_004FE128;
    case 247u: goto L_004FE140;
    case 248u: goto L_004FE168;
    case 249u: goto L_004FE174;
    case 250u: goto L_004FE194;
    case 251u: goto L_004FE1C0;
    case 252u: goto L_004FE1EC;
    case 253u: goto L_004FE210;
    case 254u: goto L_004FE230;
    case 255u: goto L_004FE280;
    case 256u: goto L_004FE2A4;
    case 257u: goto L_004FE2E0;
    case 258u: goto L_004FE310;
    case 259u: goto L_004FE330;
    case 260u: goto L_004FE344;
    case 261u: goto L_004FE35C;
    case 262u: goto L_004FE410;
    case 263u: goto L_004FE44C;
    case 264u: goto L_004FE468;
    case 265u: goto L_004FE488;
    case 266u: goto L_004FE4D0;
    case 267u: goto L_004FE4EC;
    case 268u: goto L_004FE500;
    case 269u: goto L_004FE55C;
    case 270u: goto L_004FE564;
    case 271u: goto L_004FE580;
    case 272u: goto L_004FE588;
    case 273u: goto L_004FE590;
    case 274u: goto L_004FE598;
    case 275u: goto L_004FE5A4;
    case 276u: goto L_004FE5AC;
    case 277u: goto L_004FE5C0;
    case 278u: goto L_004FE5CC;
    case 279u: goto L_004FE5D4;
    case 280u: goto L_004FE5E4;
    case 281u: goto L_004FE5F4;
    case 282u: goto L_004FE614;
    case 283u: goto L_004FE62C;
    case 284u: goto L_004FE640;
    case 285u: goto L_004FE660;
    case 286u: goto L_004FE66C;
    case 287u: goto L_004FE678;
    case 288u: goto L_004FE69C;
    case 289u: goto L_004FE6D0;
    case 290u: goto L_004FE700;
    case 291u: goto L_004FE70C;
    case 292u: goto L_004FE71C;
    case 293u: goto L_004FE73C;
    case 294u: goto L_004FE744;
    case 295u: goto L_004FE750;
    case 296u: goto L_004FE760;
    case 297u: goto L_004FE77C;
    case 298u: goto L_004FE784;
    case 299u: goto L_004FE790;
    case 300u: goto L_004FE798;
    case 301u: goto L_004FE7A8;
    case 302u: goto L_004FE7B8;
    case 303u: goto L_004FE7F0;
    case 304u: goto L_004FE800;
    case 305u: goto L_004FE830;
    case 306u: goto L_004FE838;
    case 307u: goto L_004FE868;
    case 308u: goto L_004FE878;
    case 309u: goto L_004FE880;
    case 310u: goto L_004FE88C;
    case 311u: goto L_004FE8AC;
    case 312u: goto L_004FE8F0;
    case 313u: goto L_004FE930;
    case 314u: goto L_004FE950;
    case 315u: goto L_004FE958;
    case 316u: goto L_004FE960;
    case 317u: goto L_004FE968;
    case 318u: goto L_004FE970;
    case 319u: goto L_004FE978;
    case 320u: goto L_004FE980;
    case 321u: goto L_004FE994;
    case 322u: goto L_004FE9A0;
    case 323u: goto L_004FE9C8;
    case 324u: goto L_004FE9DC;
    case 325u: goto L_004FEA10;
    case 326u: goto L_004FEA34;
    case 327u: goto L_004FEA40;
    case 328u: goto L_004FEA74;
    case 329u: goto L_004FEA90;
    case 330u: goto L_004FEAB8;
    case 331u: goto L_004FEAC0;
    case 332u: goto L_004FEACC;
    case 333u: goto L_004FEAD4;
    case 334u: goto L_004FEADC;
    case 335u: goto L_004FEAE8;
    case 336u: goto L_004FEAFC;
    case 337u: goto L_004FEB10;
    case 338u: goto L_004FEB2C;
    case 339u: goto L_004FEB38;
    case 340u: goto L_004FEB44;
    case 341u: goto L_004FEB50;
    case 342u: goto L_004FEB58;
    case 343u: goto L_004FEB6C;
    case 344u: goto L_004FEB88;
    case 345u: goto L_004FEBA8;
    case 346u: goto L_004FEBB4;
    case 347u: goto L_004FEBD0;
    case 348u: goto L_004FEBEC;
    case 349u: goto L_004FEC04;
    case 350u: goto L_004FEC40;
    case 351u: goto L_004FEC60;
    case 352u: goto L_004FEC8C;
    case 353u: goto L_004FECA8;
    case 354u: goto L_004FECCC;
    case 355u: goto L_004FECE8;
    case 356u: goto L_004FED18;
    case 357u: goto L_004FED28;
    case 358u: goto L_004FED48;
    case 359u: goto L_004FED5C;
    case 360u: goto L_004FED6C;
    case 361u: goto L_004FED90;
    case 362u: goto L_004FEDB4;
    case 363u: goto L_004FEDCC;
    case 364u: goto L_004FEDFC;
    case 365u: goto L_004FEE0C;
    case 366u: goto L_004FEE2C;
    case 367u: goto L_004FEE48;
    case 368u: goto L_004FEE58;
    case 369u: goto L_004FEE60;
    case 370u: goto L_004FEE68;
    case 371u: goto L_004FEE70;
    case 372u: goto L_004FEE88;
    case 373u: goto L_004FEE9C;
    case 374u: goto L_004FEEB8;
    case 375u: goto L_004FEEC4;
    case 376u: goto L_004FEED8;
    case 377u: goto L_004FEEE4;
    case 378u: goto L_004FEEF4;
    case 379u: goto L_004FEF1C;
    case 380u: goto L_004FEF28;
    case 381u: goto L_004FEF40;
    case 382u: goto L_004FEF58;
    case 383u: goto L_004FEF74;
    case 384u: goto L_004FEF80;
    case 385u: goto L_004FEFB4;
    case 386u: goto L_004FEFC8;
    case 387u: goto L_004FEFD8;
    case 388u: goto L_004FEFE8;
    case 389u: goto L_004FF020;
    case 390u: goto L_004FF04C;
    case 391u: goto L_004FF05C;
    case 392u: goto L_004FF09C;
    case 393u: goto L_004FF0BC;
    case 394u: goto L_004FF0D0;
    case 395u: goto L_004FF0DC;
    case 396u: goto L_004FF0F4;
    case 397u: goto L_004FF110;
    case 398u: goto L_004FF148;
    case 399u: goto L_004FF164;
    case 400u: goto L_004FF17C;
    case 401u: goto L_004FF190;
    case 402u: goto L_004FF1A4;
    case 403u: goto L_004FF1B8;
    case 404u: goto L_004FF1CC;
    case 405u: goto L_004FF1E0;
    case 406u: goto L_004FF1EC;
    case 407u: goto L_004FF200;
    case 408u: goto L_004FF220;
    case 409u: goto L_004FF230;
    case 410u: goto L_004FF23C;
    case 411u: goto L_004FF248;
    case 412u: goto L_004FF250;
    case 413u: goto L_004FF258;
    case 414u: goto L_004FF280;
    case 415u: goto L_004FF2C0;
    case 416u: goto L_004FF2E0;
    case 417u: goto L_004FF2F4;
    case 418u: goto L_004FF300;
    case 419u: goto L_004FF354;
    case 420u: goto L_004FF36C;
    case 421u: goto L_004FF38C;
    case 422u: goto L_004FF3BC;
    case 423u: goto L_004FF3CC;
    case 424u: goto L_004FF3D4;
    case 425u: goto L_004FF3FC;
    case 426u: goto L_004FF428;
    case 427u: goto L_004FF438;
    case 428u: goto L_004FF454;
    case 429u: goto L_004FF470;
    case 430u: goto L_004FF48C;
    case 431u: goto L_004FF4AC;
    case 432u: goto L_004FF4BC;
    case 433u: goto L_004FF4D8;
    case 434u: goto L_004FF4EC;
    case 435u: goto L_004FF4FC;
    case 436u: goto L_004FF508;
    case 437u: goto L_004FF514;
    case 438u: goto L_004FF520;
    case 439u: goto L_004FF52C;
    case 440u: goto L_004FF540;
    case 441u: goto L_004FF560;
    case 442u: goto L_004FF570;
    case 443u: goto L_004FF57C;
    case 444u: goto L_004FF58C;
    case 445u: goto L_004FF594;
    case 446u: goto L_004FF59C;
    case 447u: goto L_004FF5D0;
    case 448u: goto L_004FF5F0;
    case 449u: goto L_004FF5FC;
    case 450u: goto L_004FF604;
    case 451u: goto L_004FF610;
    case 452u: goto L_004FF618;
    case 453u: goto L_004FF624;
    case 454u: goto L_004FF630;
    case 455u: goto L_004FF648;
    case 456u: goto L_004FF650;
    case 457u: goto L_004FF668;
    case 458u: goto L_004FF678;
    case 459u: goto L_004FF688;
    case 460u: goto L_004FF690;
    case 461u: goto L_004FF6A4;
    case 462u: goto L_004FF6B4;
    case 463u: goto L_004FF6C8;
    case 464u: goto L_004FF6D4;
    case 465u: goto L_004FF6E0;
    case 466u: goto L_004FF6E8;
    case 467u: goto L_004FF700;
    case 468u: goto L_004FF70C;
    case 469u: goto L_004FF714;
    case 470u: goto L_004FF720;
    case 471u: goto L_004FF740;
    case 472u: goto L_004FF780;
    case 473u: goto L_004FF790;
    case 474u: goto L_004FF7B8;
    case 475u: goto L_004FF7D8;
    case 476u: goto L_004FF7E8;
    case 477u: goto L_004FF808;
    case 478u: goto L_004FF818;
    case 479u: goto L_004FF838;
    case 480u: goto L_004FF874;
    case 481u: goto L_004FF880;
    case 482u: goto L_004FF894;
    case 483u: goto L_004FF8A8;
    case 484u: goto L_004FF8C4;
    case 485u: goto L_004FF8D0;
    case 486u: goto L_004FF8E4;
    case 487u: goto L_004FF8FC;
    case 488u: goto L_004FF910;
    case 489u: goto L_004FF91C;
    case 490u: goto L_004FF934;
    case 491u: goto L_004FF94C;
    case 492u: goto L_004FF960;
    case 493u: goto L_004FF970;
    case 494u: goto L_004FF978;
    case 495u: goto L_004FF980;
    case 496u: goto L_004FF988;
    case 497u: goto L_004FF9B0;
    case 498u: goto L_004FF9D4;
    case 499u: goto L_004FF9EC;
    case 500u: goto L_004FF9F8;
    case 501u: goto L_004FFA04;
    case 502u: goto L_004FFA10;
    case 503u: goto L_004FFA40;
    case 504u: goto L_004FFA5C;
    case 505u: goto L_004FFA68;
    case 506u: goto L_004FFA7C;
    case 507u: goto L_004FFA8C;
    case 508u: goto L_004FFA9C;
    case 509u: goto L_004FFAAC;
    case 510u: goto L_004FFAB4;
    case 511u: goto L_004FFAC0;
    case 512u: goto L_004FFAE4;
    case 513u: goto L_004FFAF8;
    case 514u: goto L_004FFB04;
    case 515u: goto L_004FFB10;
    case 516u: goto L_004FFB20;
    case 517u: goto L_004FFB88;
    case 518u: goto L_004FFB98;
    case 519u: goto L_004FFBB4;
    case 520u: goto L_004FFBD0;
    case 521u: goto L_004FFBE0;
    case 522u: goto L_004FFBFC;
    case 523u: goto L_004FFC08;
    case 524u: goto L_004FFC28;
    case 525u: goto L_004FFC34;
    case 526u: goto L_004FFC50;
    case 527u: goto L_004FFC60;
    case 528u: goto L_004FFC80;
    case 529u: goto L_004FFC90;
    case 530u: goto L_004FFC98;
    case 531u: goto L_004FFCA0;
    case 532u: goto L_004FFCD0;
    case 533u: goto L_004FFCE8;
    case 534u: goto L_004FFD08;
    case 535u: goto L_004FFD18;
    case 536u: goto L_004FFD34;
    case 537u: goto L_004FFD74;
    case 538u: goto L_004FFD80;
    case 539u: goto L_004FFD8C;
    case 540u: goto L_004FFDB8;
    case 541u: goto L_004FFDE0;
    case 542u: goto L_004FFE1C;
    case 543u: goto L_004FFE28;
    case 544u: goto L_004FFE34;
    case 545u: goto L_004FFE48;
    case 546u: goto L_004FFE5C;
    case 547u: goto L_004FFE80;
    case 548u: goto L_004FFE90;
    case 549u: goto L_004FFEB0;
    case 550u: goto L_004FFECC;
    case 551u: goto L_004FFEF0;
    case 552u: goto L_004FFEFC;
    case 553u: goto L_004FFF0C;
    case 554u: goto L_004FFF1C;
    case 555u: goto L_004FFF30;
    case 556u: goto L_004FFF3C;
    case 557u: goto L_004FFF48;
    case 558u: goto L_004FFF5C;
    case 559u: goto L_004FFF68;
    case 560u: goto L_004FFF78;
    case 561u: goto L_004FFFD0;
    default: bad_entry(c, 0x004FC000u); return;
    }
L_004FC000:
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 428u));
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 432u));
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 436u));
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 440u));
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 444u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC030u); st32((c.r[16].w[0] + 60u), c.f[0]);  if (depth < kMaxDepth) unit_00C5(c, 74u, depth + 1u); else { c.pc = 0x00414BB0u; return; } if (c.pc != 0x004FC030u) [[unlikely]] return; }
L_004FC030:
    c.f[1] = ld32((c.r[29].w[0] + 224u));
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.f[4] = ld32((c.r[16].w[0] + 16u));
    c.f[18] = ld32((c.r[29].w[0] + 196u));
    st32((c.r[29].w[0] + 172u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 232u));
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[17] = ld32((c.r[29].w[0] + 192u));
    st32((c.r[29].w[0] + 168u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 236u));
    c.facc = fp::mul(c.f[18], c.f[4]);
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    st32((c.r[29].w[0] + 164u), c.f[1]);
    c.f[16] = ld32((c.r[29].w[0] + 200u));
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[3]));
    c.f[15] = ld32((c.r[29].w[0] + 204u));
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.facc = fp::add(c.facc, fp::mul(c.f[16], c.f[2]));
    c.f[8] = ld32((c.r[16].w[0] + 20u));
    c.f[12] = fp::add(c.facc, fp::mul(c.f[15], c.f[1]));
    c.f[7] = ld32((c.r[16].w[0] + 4u));
    c.facc = fp::mul(c.f[18], c.f[8]);
    c.f[6] = ld32((c.r[16].w[0] + 36u));
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[7]));
    c.f[5] = ld32((c.r[16].w[0] + 52u));
    c.facc = fp::add(c.facc, fp::mul(c.f[16], c.f[6]));
    c.f[20] = ld32((c.r[16].w[0] + 24u));
    c.f[13] = fp::add(c.facc, fp::mul(c.f[15], c.f[5]));
    c.f[11] = ld32((c.r[16].w[0] + 8u));
    c.facc = fp::mul(c.f[18], c.f[20]);
    c.f[10] = ld32((c.r[16].w[0] + 40u));
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[11]));
    c.f[9] = ld32((c.r[16].w[0] + 56u));
    c.facc = fp::add(c.facc, fp::mul(c.f[16], c.f[10]));
    c.f[28] = ld32((c.r[16].w[0] + 28u));
    c.f[14] = fp::add(c.facc, fp::mul(c.f[15], c.f[9]));
    c.f[26] = ld32((c.r[16].w[0] + 12u));
    c.facc = fp::mul(c.f[18], c.f[28]);
    c.f[24] = ld32((c.r[16].w[0] + 44u));
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[26]));
    c.f[22] = ld32((c.r[16].w[0] + 60u));
    c.facc = fp::add(c.facc, fp::mul(c.f[16], c.f[24]));
    c.f[31] = ld32((c.r[29].w[0] + 212u));
    c.f[15] = fp::add(c.facc, fp::mul(c.f[15], c.f[22]));
    c.f[30] = ld32((c.r[29].w[0] + 208u));
    c.facc = fp::mul(c.f[31], c.f[4]);
    c.f[29] = ld32((c.r[29].w[0] + 216u));
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[3]));
    c.f[19] = ld32((c.r[29].w[0] + 220u));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[2]));
    c.f[0] = ld32((c.r[29].w[0] + 228u));
    c.f[16] = fp::add(c.facc, fp::mul(c.f[19], c.f[1]));
    c.facc = fp::mul(c.f[31], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[7]));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[6]));
    c.f[17] = fp::add(c.facc, fp::mul(c.f[19], c.f[5]));
    c.facc = fp::mul(c.f[31], c.f[20]);
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[11]));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[10]));
    c.f[18] = fp::add(c.facc, fp::mul(c.f[19], c.f[9]));
    c.facc = fp::mul(c.f[31], c.f[28]);
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[26]));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[24]));
    c.f[19] = fp::add(c.facc, fp::mul(c.f[19], c.f[22]));
    c.f[29] = ld32((c.r[29].w[0] + 172u));
    c.facc = fp::mul(c.f[0], c.f[4]);
    c.f[27] = ld32((c.r[29].w[0] + 244u));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[3]));
    c.f[29] = ld32((c.r[29].w[0] + 168u));
    c.f[25] = ld32((c.r[29].w[0] + 240u));
    c.f[23] = ld32((c.r[29].w[0] + 248u));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[2]));
    c.f[29] = ld32((c.r[29].w[0] + 164u));
    c.f[21] = ld32((c.r[29].w[0] + 252u));
    c.f[29] = fp::add(c.facc, fp::mul(c.f[29], c.f[1]));
    st32((c.r[29].w[0]), c.f[29]);
    c.f[29] = ld32((c.r[29].w[0] + 172u));
    c.facc = fp::mul(c.f[0], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[7]));
    c.f[29] = ld32((c.r[29].w[0] + 168u));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[6]));
    c.f[29] = ld32((c.r[29].w[0] + 164u));
    c.f[29] = fp::add(c.facc, fp::mul(c.f[29], c.f[5]));
    st32((c.r[29].w[0] + 8u), c.f[29]);
    c.f[29] = ld32((c.r[29].w[0] + 172u));
    c.facc = fp::mul(c.f[0], c.f[20]);
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[11]));
    c.f[29] = ld32((c.r[29].w[0] + 168u));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[10]));
    c.f[29] = ld32((c.r[29].w[0] + 164u));
    c.f[29] = fp::add(c.facc, fp::mul(c.f[29], c.f[9]));
    c.facc = fp::mul(c.f[0], c.f[28]);
    c.f[0] = ld32((c.r[29].w[0] + 172u));
    st32((c.r[29].w[0] + 16u), c.f[29]);
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[26]));
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[24]));
    c.f[0] = ld32((c.r[29].w[0] + 164u));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[22]));
    c.facc = fp::mul(c.f[27], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[25], c.f[3]));
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[2]));
    st32((c.r[29].w[0] + 24u), c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[21], c.f[1]));
    c.facc = fp::mul(c.f[27], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[25], c.f[7]));
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[6]));
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[21], c.f[5]));
    c.facc = fp::mul(c.f[27], c.f[20]);
    c.facc = fp::add(c.facc, fp::mul(c.f[25], c.f[11]));
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[10]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[21], c.f[9]));
    c.facc = fp::mul(c.f[27], c.f[28]);
    c.facc = fp::add(c.facc, fp::mul(c.f[25], c.f[26]));
    st32((c.r[29].w[0] + 40u), c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[23], c.f[24]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[21], c.f[22]));
    st32((c.r[29].w[0] + 48u), c.f[1]);
    c.budget -= 121;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC214u); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_0013(c, 290u, depth + 1u); else { c.pc = 0x0014E3B0u; return; } if (c.pc != 0x004FC214u) [[unlikely]] return; }
L_004FC214:
    c.f[0] = ld32((c.r[29].w[0] + 256u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 260u));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 264u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 268u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 272u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 276u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 280u));
    st32((c.r[16].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 284u));
    st32((c.r[16].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 288u));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 292u));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 296u));
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 300u));
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 304u));
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 308u));
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 312u));
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 316u));
    st32((c.r[16].w[0] + 60u), c.f[0]);
    c.budget -= 33;
L_004FC298:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.f[31] = ld32((c.r[29].w[0] + 108u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.f[30] = ld32((c.r[29].w[0] + 104u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.f[29] = ld32((c.r[29].w[0] + 100u));
    c.f[28] = ld32((c.r[29].w[0] + 96u));
    c.f[27] = ld32((c.r[29].w[0] + 92u));
    c.f[26] = ld32((c.r[29].w[0] + 88u));
    c.f[25] = ld32((c.r[29].w[0] + 84u));
    c.f[24] = ld32((c.r[29].w[0] + 80u));
    c.f[23] = ld32((c.r[29].w[0] + 76u));
    c.f[22] = ld32((c.r[29].w[0] + 72u));
    c.f[21] = ld32((c.r[29].w[0] + 68u));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 448u);  c.pc = t; return; }
L_004FC2E0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.f[20] = c.f[12];
    set32(c.r[18], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[18].w[0] + c.r[3].w[0]);  if (t) { goto L_004FC388; } }
L_004FC318:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC32Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 103u, depth + 1u); else { c.pc = 0x00468FC0u; return; } if (c.pc != 0x004FC32Cu) [[unlikely]] return; }
L_004FC32C:
    set32(c.r[3], ld32((c.r[17].w[0] + 364u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[18].d[0] << 32;  goto L_004FC380; }
    set32(c.r[16], ld32((c.r[17].w[0] + 404u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_004FC370; } }
L_004FC344:
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 204u));
    c.r[3].d[0] = c.r[3].d[0] << 62;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_004FC370; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC36Cu);  if (depth < kMaxDepth) unit_00D6(c, 451u, depth + 1u); else { c.pc = 0x0045B7C0u; return; } if (c.pc != 0x004FC36Cu) [[unlikely]] return; }
L_004FC36C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_004FC370:
    c.r[3].d[0] = c.r[19].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 408u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FC344u | kUnwind; return; } goto L_004FC344; }
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.budget -= 1;
L_004FC380:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[18], c.r[3].w[0] + 4u);
    c.budget -= 2;
L_004FC388:
    c.r[4].d[0] = c.r[18].d[0] << 32;
    c.r[3].d[0] = c.r[20].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 9;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = c.r[18].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FC318u | kUnwind; return; } goto L_004FC318; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004FC3D0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC404u); set32(c.r[5], c.r[16].w[0] + 88u);  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x004FC404u) [[unlikely]] return; }
L_004FC404:
    set32(c.r[18], ld32((c.r[29].w[0] + 148u)));
    set32(c.r[17], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[20], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[21], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[29].w[0] + 144u)));  if (t) { goto L_004FC448; } }
L_004FC41C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC424u); set32(c.r[4], ld32((c.r[20].w[0])));  if (depth < kMaxDepth) unit_00D6(c, 461u, depth + 1u); else { c.pc = 0x0045B980u; return; } if (c.pc != 0x004FC424u) [[unlikely]] return; }
L_004FC424:
    set32(c.r[20], c.r[20].w[0] + 4u);
    c.budget -= 3;
    if (c.r[20].d[0] != c.r[21].d[0]) { set32(c.r[6], ld32((c.r[16].w[0] + 116u)));  goto L_004FC44C; }
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.budget -= 3;
    if (c.r[19].d[0] != c.r[17].d[0]) { set32(c.r[20], ld32((c.r[19].w[0])));  goto L_004FC444; }
    c.r[19].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[20], ld32((c.r[19].w[0])));
    c.budget -= 2;
L_004FC444:
    set32(c.r[21], c.r[20].w[0] + 512u);
    c.budget -= 1;
L_004FC448:
    set32(c.r[6], ld32((c.r[16].w[0] + 116u)));
    c.budget -= 1;
L_004FC44C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC458u); set32(c.r[5], c.r[16].w[0] + 88u);  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x004FC458u) [[unlikely]] return; }
L_004FC458:
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FC41Cu | kUnwind; return; } goto L_004FC41C; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_004FC490:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FC3D0u | kUnwind; return; } goto L_004FC3D0; }
L_004FC4A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC4B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FE(c, 368u, depth + 1u); else { c.pc = 0x004FAE40u; return; } if (c.pc != 0x004FC4B4u) [[unlikely]] return; }
L_004FC4B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC4BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FE(c, 65u, depth + 1u); else { c.pc = 0x004F88B0u; return; } if (c.pc != 0x004FC4BCu) [[unlikely]] return; }
L_004FC4BC:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[29].w[0] + 44u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 32u), c.f[0]);  if (t) { goto L_004FC510; } }
L_004FC4E8:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 36u)));  goto L_004FC508; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC504u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FC504u) [[unlikely]] return; }
L_004FC504:
    set32(c.r[2], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 1;
L_004FC508:
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[29].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 2;
L_004FC510:
    set32(c.r[3], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 36u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FC4E8u | kUnwind; return; } goto L_004FC4E8; }
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC538u); set32(c.r[4], ld32((c.r[16].w[0] + 148u)));  if (depth < kMaxDepth) unit_008A(c, 33u, depth + 1u); else { c.pc = 0x003296B0u; return; } if (c.pc != 0x004FC538u) [[unlikely]] return; }
L_004FC538:
    set32(c.r[2], 0u + 3u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 124u);
    st32((c.r[16].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC550u); set32(c.r[5], c.r[5].w[0] + 19680u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004FC550u) [[unlikely]] return; }
L_004FC550:
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004FC570:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC5A4u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000A(c, 391u, depth + 1u); else { c.pc = 0x0012B240u; return; } if (c.pc != 0x004FC5A4u) [[unlikely]] return; }
L_004FC5A4:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC5B0u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x00102E20u; return; } if (c.pc != 0x004FC5B0u) [[unlikely]] return; }
L_004FC5B0:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 112u));  goto L_004FC5C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 116u)));  if (t) { goto L_004FC5D0; } }
L_004FC5C8:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_004FC5D0:
    c.r[20].d[0] = c.r[2].d[0] ^ 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC5E4u); c.r[20].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004FC5E4u) [[unlikely]] return; }
L_004FC5E4:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_004FC624; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC5F8u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x00102E20u; return; } if (c.pc != 0x004FC5F8u) [[unlikely]] return; }
L_004FC5F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC608u); set32(c.r[5], c.r[5].w[0] + 19773u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004FC608u) [[unlikely]] return; }
L_004FC608:
    c.r[20].d[0] = c.r[2].d[0] ^ 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC61Cu); c.r[20].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004FC61Cu) [[unlikely]] return; }
L_004FC61C:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_004FC634; } }
L_004FC624:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC634u); set32(c.r[5], c.r[5].w[0] + 19777u);  if (depth < kMaxDepth) unit_000A(c, 328u, depth + 1u); else { c.pc = 0x0012AC80u; return; } if (c.pc != 0x004FC634u) [[unlikely]] return; }
L_004FC634:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - 23040u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 128u);
    set32(c.r[2], ld32((c.r[28].w[0] - 29244u)));
    set32(c.r[6], c.r[6].w[0] + 16896u);
    set32(c.r[7], c.r[29].w[0] + 160u);
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 164u), 0u);
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC66Cu); st32((c.r[28].w[0] - 29244u), 0u);  if (depth < kMaxDepth) unit_0000(c, 231u, depth + 1u); else { c.pc = 0x00102E60u; return; } if (c.pc != 0x004FC66Cu) [[unlikely]] return; }
L_004FC66C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 164u)));  goto L_004FC6C0; }
    set32(c.r[4], ld32((c.r[29].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 23040u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 160u), c.r[2].w[0]);  if (t) { goto L_004FC698; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC690u);  if (depth < kMaxDepth) unit_00FF(c, 89u, depth + 1u); else { c.pc = 0x004FCBD0u; return; } if (c.pc != 0x004FC690u) [[unlikely]] return; }
L_004FC690:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC698u); set32(c.r[4], ld32((c.r[29].w[0] + 164u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004FC698u) [[unlikely]] return; }
L_004FC698:
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 27888u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[5], 0u - 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC6B8u); st32((c.r[28].w[0] - 29244u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x004FC6B8u) [[unlikely]] return; }
L_004FC6B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004FC720; } }
L_004FC6C0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC6D4u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FE(c, 439u, depth + 1u); else { c.pc = 0x004FB710u; return; } if (c.pc != 0x004FC6D4u) [[unlikely]] return; }
L_004FC6D4:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 23040u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 160u), c.r[2].w[0]);  if (t) { goto L_004FC6FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC6F4u);  if (depth < kMaxDepth) unit_00FF(c, 89u, depth + 1u); else { c.pc = 0x004FCBD0u; return; } if (c.pc != 0x004FC6F4u) [[unlikely]] return; }
L_004FC6F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC6FCu); set32(c.r[4], ld32((c.r[29].w[0] + 164u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004FC6FCu) [[unlikely]] return; }
L_004FC6FC:
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 27888u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[5], 0u - 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC71Cu); st32((c.r[28].w[0] - 29244u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x004FC71Cu) [[unlikely]] return; }
L_004FC71C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004FC720:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_004FC740:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004FC7B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 23040u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FC784; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC77Cu);  if (depth < kMaxDepth) unit_00FF(c, 89u, depth + 1u); else { c.pc = 0x004FCBD0u; return; } if (c.pc != 0x004FC77Cu) [[unlikely]] return; }
L_004FC77C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC784u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004FC784u) [[unlikely]] return; }
L_004FC784:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_004FC79C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27888u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 4;
L_004FC79C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004FC7B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC7B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004FC7B0u) [[unlikely]] return; }
L_004FC7B0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004FC7B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004FC7D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 152u), c.r[5].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC7ECu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_008A(c, 37u, depth + 1u); else { c.pc = 0x00329760u; return; } if (c.pc != 0x004FC7ECu) [[unlikely]] return; }
L_004FC7EC:
    st32((c.r[16].w[0] + 148u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC800u); st64((c.r[2].w[0] + 64u), c.r[3].d[0]);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x004FC800u) [[unlikely]] return; }
L_004FC800:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004FC810:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004FC918; } }
    set32(c.r[4], c.r[17].w[0] + 124u);
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 88u);  goto L_004FC844; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC840u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004FC840u) [[unlikely]] return; }
L_004FC840:
    set32(c.r[4], c.r[17].w[0] + 88u);
    c.budget -= 1;
L_004FC844:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 48u);  goto L_004FC870; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FC86C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FC86C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FC86C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC86Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 120u, depth + 1u); else { c.pc = 0x001251B0u; return; } if (c.pc != 0x004FC86Cu) [[unlikely]] return; }
L_004FC86C:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 1;
L_004FC870:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 16u);  goto L_004FC89C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FC898; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FC898; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FC898; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC898u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 120u, depth + 1u); else { c.pc = 0x001251B0u; return; } if (c.pc != 0x004FC898u) [[unlikely]] return; }
L_004FC898:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 1;
L_004FC89C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FC8C4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FC8C4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FC8C4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FC8C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC8C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 120u, depth + 1u); else { c.pc = 0x001251B0u; return; } if (c.pc != 0x004FC8C4u) [[unlikely]] return; }
L_004FC8C4:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_004FC904; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004FC900; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004FC900; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004FC900; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FC900; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FC900; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC900u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004FC900u) [[unlikely]] return; }
L_004FC900:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_004FC904:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004FC91C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC918u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004FC918u) [[unlikely]] return; }
L_004FC918:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004FC91C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004FC930:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004FC988; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC954u);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x004FC954u) [[unlikely]] return; }
L_004FC954:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_004FC974; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC96Cu);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x004FC96Cu) [[unlikely]] return; }
L_004FC96C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_004FC974:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0]), c.r[5].w[0]);  goto L_004FC98C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC984u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x004FC984u) [[unlikely]] return; }
L_004FC984:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004FC988:
    st32((c.r[16].w[0]), c.r[5].w[0]);
    c.budget -= 1;
L_004FC98C:
    set32(c.r[17], c.r[16].w[0] + 16u);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[4], 0u - 1u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC9A8u); st32((c.r[16].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_00FF(c, 85u, depth + 1u); else { c.pc = 0x004FCB70u; return; } if (c.pc != 0x004FC9A8u) [[unlikely]] return; }
L_004FC9A8:
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC9B4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FF(c, 84u, depth + 1u); else { c.pc = 0x004FCB60u; return; } if (c.pc != 0x004FC9B4u) [[unlikely]] return; }
L_004FC9B4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC9C0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FF(c, 79u, depth + 1u); else { c.pc = 0x004FCB10u; return; } if (c.pc != 0x004FC9C0u) [[unlikely]] return; }
L_004FC9C0:
    set32(c.r[17], c.r[16].w[0] + 48u);
    set32(c.r[4], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC9D0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FF(c, 85u, depth + 1u); else { c.pc = 0x004FCB70u; return; } if (c.pc != 0x004FC9D0u) [[unlikely]] return; }
L_004FC9D0:
    set32(c.r[4], c.r[29].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC9DCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FF(c, 78u, depth + 1u); else { c.pc = 0x004FCB00u; return; } if (c.pc != 0x004FC9DCu) [[unlikely]] return; }
L_004FC9DC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC9E8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FF(c, 73u, depth + 1u); else { c.pc = 0x004FCAB0u; return; } if (c.pc != 0x004FC9E8u) [[unlikely]] return; }
L_004FC9E8:
    set32(c.r[17], c.r[16].w[0] + 88u);
    set32(c.r[4], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FC9F8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FF(c, 85u, depth + 1u); else { c.pc = 0x004FCB70u; return; } if (c.pc != 0x004FC9F8u) [[unlikely]] return; }
L_004FC9F8:
    set32(c.r[4], c.r[29].w[0] + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FCA04u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FF(c, 72u, depth + 1u); else { c.pc = 0x004FCAA0u; return; } if (c.pc != 0x004FCA04u) [[unlikely]] return; }
L_004FCA04:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FCA10u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FF(c, 67u, depth + 1u); else { c.pc = 0x004FCA50u; return; } if (c.pc != 0x004FCA10u) [[unlikely]] return; }
L_004FCA10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FCA18u); set32(c.r[4], c.r[16].w[0] + 124u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004FCA18u) [[unlikely]] return; }
L_004FCA18:
    set32(c.r[3], 0u + 3u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 120u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 144u), 0u);
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004FCA50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FCA68u); set32(c.r[4], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_00FF(c, 71u, depth + 1u); else { c.pc = 0x004FCA90u; return; } if (c.pc != 0x004FCA68u) [[unlikely]] return; }
L_004FCA68:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FCA74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 461u, depth + 1u); else { c.pc = 0x001238F0u; return; } if (c.pc != 0x004FCA74u) [[unlikely]] return; }
L_004FCA74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FCA7Cu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0008(c, 460u, depth + 1u); else { c.pc = 0x001238E0u; return; } if (c.pc != 0x004FCA7Cu) [[unlikely]] return; }
L_004FCA7C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004FCA90:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_004FCAA0:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_004FCAB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FCAC8u); set32(c.r[4], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_00FF(c, 77u, depth + 1u); else { c.pc = 0x004FCAF0u; return; } if (c.pc != 0x004FCAC8u) [[unlikely]] return; }
L_004FCAC8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FCAD4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 461u, depth + 1u); else { c.pc = 0x001238F0u; return; } if (c.pc != 0x004FCAD4u) [[unlikely]] return; }
L_004FCAD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FCADCu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0008(c, 460u, depth + 1u); else { c.pc = 0x001238E0u; return; } if (c.pc != 0x004FCADCu) [[unlikely]] return; }
L_004FCADC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004FCAF0:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_004FCB00:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_004FCB10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FCB28u); set32(c.r[4], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_00FF(c, 83u, depth + 1u); else { c.pc = 0x004FCB50u; return; } if (c.pc != 0x004FCB28u) [[unlikely]] return; }
L_004FCB28:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FCB34u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 461u, depth + 1u); else { c.pc = 0x001238F0u; return; } if (c.pc != 0x004FCB34u) [[unlikely]] return; }
L_004FCB34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FCB3Cu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0008(c, 460u, depth + 1u); else { c.pc = 0x001238E0u; return; } if (c.pc != 0x004FCB3Cu) [[unlikely]] return; }
L_004FCB3C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004FCB50:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_004FCB60:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_004FCB70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_004FCBBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FCB88u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x004FCB88u) [[unlikely]] return; }
L_004FCB88:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_004FCBA8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FCBA0u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x004FCBA0u) [[unlikely]] return; }
L_004FCBA0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_004FCBA8:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_004FCBC0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FCBB8u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x004FCBB8u) [[unlikely]] return; }
L_004FCBB8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004FCBBC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004FCBC0:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004FCBD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004FCC0C; } }
L_004FCBEC:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FCC08u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00FF(c, 100u, depth + 1u); else { c.pc = 0x004FCCE0u; return; } if (c.pc != 0x004FCC08u) [[unlikely]] return; }
L_004FCC08:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_004FCC0C:
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FCBECu | kUnwind; return; } goto L_004FCBEC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FCC24u); set32(c.r[4], ld32((c.r[17].w[0] + 76u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004FCC24u) [[unlikely]] return; }
L_004FCC24:
    st32((c.r[17].w[0] + 72u), 0u);
    st32((c.r[17].w[0] + 76u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FCC34u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004FCC34u) [[unlikely]] return; }
L_004FCC34:
    st32((c.r[17].w[0] + 80u), 0u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 84u), 0u);  if (t) { goto L_004FCC60; } }
L_004FCC44:
    set32(c.r[2], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FCC5Cu); set32(c.r[4], ld32((c.r[2].w[0] + 36u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004FCC5Cu) [[unlikely]] return; }
L_004FCC5C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_004FCC60:
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FCC44u | kUnwind; return; } goto L_004FCC44; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FCC78u); set32(c.r[4], ld32((c.r[17].w[0] + 92u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004FCC78u) [[unlikely]] return; }
L_004FCC78:
    st32((c.r[17].w[0] + 88u), 0u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 92u), 0u);  if (t) { goto L_004FCCAC; } }
L_004FCC88:
    set32(c.r[2], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FCCA8u); set32(c.r[4], ld32((c.r[2].w[0] + 200u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004FCCA8u) [[unlikely]] return; }
L_004FCCA8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_004FCCAC:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FCC88u | kUnwind; return; } goto L_004FCC88; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FCCC4u); set32(c.r[4], ld32((c.r[17].w[0] + 100u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004FCCC4u) [[unlikely]] return; }
L_004FCCC4:
    st32((c.r[17].w[0] + 96u), 0u);
    st32((c.r[17].w[0] + 100u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004FCCE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004FCD18; } }
L_004FCD00:
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FCD10u); set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004FCD10u) [[unlikely]] return; }
L_004FCD10:
    st32((c.r[18].w[0] + 4u), 0u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_004FCD18:
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 52u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FCD00u | kUnwind; return; } goto L_004FCD00; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FCD30u); set32(c.r[4], ld32((c.r[17].w[0] + 52u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004FCD30u) [[unlikely]] return; }
L_004FCD30:
    st32((c.r[17].w[0] + 52u), 0u);
    st32((c.r[17].w[0] + 48u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FCD40u); set32(c.r[4], ld32((c.r[17].w[0] + 88u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004FCD40u) [[unlikely]] return; }
L_004FCD40:
    st32((c.r[17].w[0] + 84u), 0u);
    st32((c.r[17].w[0] + 88u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FCD50u); set32(c.r[4], ld32((c.r[17].w[0] + 96u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004FCD50u) [[unlikely]] return; }
L_004FCD50:
    st32((c.r[17].w[0] + 92u), 0u);
    st32((c.r[17].w[0] + 96u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004FCD70:
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[3], 0u + 305u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_004FCD84; } }
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 1;
L_004FCD84:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004FCD90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_004FCDA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004FCDB4; } }
L_004FCDA4:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FCDB4u); set32(c.r[5], ld32((c.r[28].w[0] - 29940u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FCDB4u) [[unlikely]] return; }
L_004FCDB4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004FCDC0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[17].w[0] - c.r[18].w[0]);
    c.budget -= 12;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));  if (t) { goto L_004FCDF8; } }
    set32(c.r[3], c.r[3].w[0] + 31u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.budget -= 2;
L_004FCDF8:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_004FCF1C; }
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], c.r[29].w[0] + 92u);  goto L_004FCE1C; }
    set32(c.r[3], c.r[19].w[0] + 8u);
    c.budget -= 1;
L_004FCE1C:
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_004FCE74; } }
L_004FCE30:
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    st32((c.r[5].w[0]), c.f[2]);
    st32((c.r[5].w[0] + 4u), c.f[1]);
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.f[2] = ld32((c.r[18].w[0] + 12u));
    c.f[1] = ld32((c.r[18].w[0] + 16u));
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    st32((c.r[5].w[0] + 12u), c.f[2]);
    st32((c.r[5].w[0] + 16u), c.f[1]);
    st32((c.r[5].w[0] + 20u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    st32((c.r[5].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[18], c.r[18].w[0] + 32u);
    set32(c.r[5], c.r[5].w[0] + 32u);
    c.budget -= 17;
L_004FCE74:
    c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.f[2] = ld32((c.r[18].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FCE30u | kUnwind; return; } goto L_004FCE30; }
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;  goto L_004FCEA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_004FCFD8; } }
L_004FCEA0:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_004FCFDC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004FCF0C; } }
L_004FCEB0:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 8u)));  goto L_004FCEFC; }
    c.f[0] = ld32((c.r[18].w[0]));
    st32((c.r[5].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    st32((c.r[5].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    st32((c.r[5].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    st32((c.r[5].w[0] + 20u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    st32((c.r[5].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    st32((c.r[5].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 17;
L_004FCEFC:
    set32(c.r[18], c.r[18].w[0] + 32u);
    set32(c.r[5], c.r[5].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_004FCF0C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FCEB0u | kUnwind; return; } goto L_004FCEB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004FCFD8; } }
L_004FCF1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FCF24u);  if (depth < kMaxDepth) unit_00DB(c, 41u, depth + 1u); else { c.pc = 0x0046C810u; return; } if (c.pc != 0x004FCF24u) [[unlikely]] return; }
L_004FCF24:
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 32;  goto L_004FCF4C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[19].w[0] + 12u), 0u);  goto L_004FCF44; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FCF40u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004FCF40u) [[unlikely]] return; }
L_004FCF40:
    st32((c.r[19].w[0] + 12u), 0u);
    c.budget -= 1;
L_004FCF44:
    st32((c.r[19].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.budget -= 2;
L_004FCF4C:
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FCF5Cu); set32(c.r[4], c.r[2].w[0] << 5);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x004FCF5Cu) [[unlikely]] return; }
L_004FCF5C:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    st32((c.r[19].w[0] + 12u), c.r[2].w[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[19].w[0] + 12u)));  if (t) { goto L_004FCFD0; } }
L_004FCF74:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 8u)));  goto L_004FCFC0; }
    c.f[0] = ld32((c.r[18].w[0]));
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    st32((c.r[4].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    st32((c.r[4].w[0] + 24u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    st32((c.r[4].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 17;
L_004FCFC0:
    set32(c.r[18], c.r[18].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_004FCFD0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FCF74u | kUnwind; return; } goto L_004FCF74; } }
L_004FCFD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_004FCFDC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004FD000:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[4].w[0] + 116u));  c.pc = t; return; }
L_004FD010:
    set32(c.r[29], c.r[29].w[0] - 352u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBEBE0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[3].d[0] = c.r[2].d[0] | 51966ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 12u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 336u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 320u), c.r[3].w[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 340u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 324u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 344u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 328u), c.r[6].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 21;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD064u); set32(c.r[5], c.r[29].w[0] + 336u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FD064u) [[unlikely]] return; }
L_004FD064:
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 336u);  goto L_004FD08C; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], 0u + 64u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD084u); set32(c.r[6], c.r[6].w[0] + 20032u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x004FD084u) [[unlikely]] return; }
L_004FD084:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004FD1C0; } }
L_004FD08C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD094u);  if (depth < kMaxDepth) unit_0019(c, 65u, depth + 1u); else { c.pc = 0x00164820u; return; } if (c.pc != 0x004FD094u) [[unlikely]] return; }
L_004FD094:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD09Cu); set32(c.r[4], c.r[29].w[0] + 340u);  if (depth < kMaxDepth) unit_0019(c, 65u, depth + 1u); else { c.pc = 0x00164820u; return; } if (c.pc != 0x004FD09Cu) [[unlikely]] return; }
L_004FD09C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD0A4u); set32(c.r[4], c.r[29].w[0] + 344u);  if (depth < kMaxDepth) unit_0019(c, 65u, depth + 1u); else { c.pc = 0x00164820u; return; } if (c.pc != 0x004FD0A4u) [[unlikely]] return; }
L_004FD0A4:
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[5], c.r[29].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD0B4u); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x004FD0B4u) [[unlikely]] return; }
L_004FD0B4:
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { st32((c.r[29].w[0] + 304u), 0u);  goto L_004FD0E8; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], 0u + 64u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD0E0u); set32(c.r[6], c.r[6].w[0] + 20113u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x004FD0E0u) [[unlikely]] return; }
L_004FD0E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004FD1C0; } }
L_004FD0E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 308u), 0u);
    set32(c.r[5], c.r[29].w[0] + 304u);
    st8((c.r[29].w[0] + 312u), static_cast<std::uint8_t>(0u));
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD108u); set32(c.r[6], 0u + 12u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FD108u) [[unlikely]] return; }
L_004FD108:
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 304u);  goto L_004FD130; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], 0u + 64u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD128u); set32(c.r[6], c.r[6].w[0] + 20176u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x004FD128u) [[unlikely]] return; }
L_004FD128:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004FD1C0; } }
L_004FD130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD138u);  if (depth < kMaxDepth) unit_0019(c, 67u, depth + 1u); else { c.pc = 0x00164860u; return; } if (c.pc != 0x004FD138u) [[unlikely]] return; }
L_004FD138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD140u); set32(c.r[4], c.r[29].w[0] + 308u);  if (depth < kMaxDepth) unit_0019(c, 65u, depth + 1u); else { c.pc = 0x00164820u; return; } if (c.pc != 0x004FD140u) [[unlikely]] return; }
L_004FD140:
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    c.r[3].d[0] = ld8((c.r[29].w[0] + 312u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.f[0] = ld32((c.r[29].w[0] + 304u));  goto L_004FD170; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], 0u + 64u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD168u); set32(c.r[6], c.r[6].w[0] + 20254u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x004FD168u) [[unlikely]] return; }
L_004FD168:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004FD1C0; } }
L_004FD170:
    st32((c.r[17].w[0] + 116u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD17Cu); set32(c.r[4], ld32((c.r[17].w[0] + 100u)));  if (depth < kMaxDepth) unit_000F(c, 104u, depth + 1u); else { c.pc = 0x0013D2F0u; return; } if (c.pc != 0x004FD17Cu) [[unlikely]] return; }
L_004FD17C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[16], ld32((c.r[29].w[0] + 308u)));
    set32(c.r[7], c.r[29].w[0] + 48u);
    set32(c.r[8], 0u + 256u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD198u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 19u, depth + 1u); else { c.pc = 0x0013C200u; return; } if (c.pc != 0x004FD198u) [[unlikely]] return; }
L_004FD198:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_004FD1C0; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], 0u + 64u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD1B4u); set32(c.r[6], c.r[6].w[0] + 20327u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x004FD1B4u) [[unlikely]] return; }
L_004FD1B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD1BCu); set32(c.r[4], ld32((c.r[17].w[0] + 100u)));  if (depth < kMaxDepth) unit_000F(c, 104u, depth + 1u); else { c.pc = 0x0013D2F0u; return; } if (c.pc != 0x004FD1BCu) [[unlikely]] return; }
L_004FD1BC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004FD1C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 352u);  c.pc = t; return; }
L_004FD1E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBEBE0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 51966ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], 0u + 12u);
    st32((c.r[29].w[0] + 68u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD21Cu); st32((c.r[29].w[0] + 72u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0019(c, 73u, depth + 1u); else { c.pc = 0x00164900u; return; } if (c.pc != 0x004FD21Cu) [[unlikely]] return; }
L_004FD21C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD224u); set32(c.r[4], c.r[29].w[0] + 68u);  if (depth < kMaxDepth) unit_0019(c, 73u, depth + 1u); else { c.pc = 0x00164900u; return; } if (c.pc != 0x004FD224u) [[unlikely]] return; }
L_004FD224:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD22Cu); set32(c.r[4], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_0019(c, 73u, depth + 1u); else { c.pc = 0x00164900u; return; } if (c.pc != 0x004FD22Cu) [[unlikely]] return; }
L_004FD22C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD244u); set32(c.r[6], 0u + 12u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FD244u) [[unlikely]] return; }
L_004FD244:
    st32((c.r[29].w[0] + 48u), 0u);
    st32((c.r[29].w[0] + 52u), 0u);
    st8((c.r[29].w[0] + 56u), static_cast<std::uint8_t>(0u));
    c.f[0] = ld32((c.r[17].w[0] + 116u));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD26Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FD26Cu) [[unlikely]] return; }
L_004FD26C:
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD284u); st8((c.r[29].w[0] + 56u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0019(c, 69u, depth + 1u); else { c.pc = 0x001648A0u; return; } if (c.pc != 0x004FD284u) [[unlikely]] return; }
L_004FD284:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD28Cu); set32(c.r[4], c.r[29].w[0] + 52u);  if (depth < kMaxDepth) unit_0019(c, 73u, depth + 1u); else { c.pc = 0x00164900u; return; } if (c.pc != 0x004FD28Cu) [[unlikely]] return; }
L_004FD28C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD2A4u); set32(c.r[6], 0u + 12u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FD2A4u) [[unlikely]] return; }
L_004FD2A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD2ACu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0019(c, 67u, depth + 1u); else { c.pc = 0x00164860u; return; } if (c.pc != 0x004FD2ACu) [[unlikely]] return; }
L_004FD2AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD2B4u); set32(c.r[4], c.r[29].w[0] + 52u);  if (depth < kMaxDepth) unit_0019(c, 65u, depth + 1u); else { c.pc = 0x00164820u; return; } if (c.pc != 0x004FD2B4u) [[unlikely]] return; }
L_004FD2B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD2BCu); set32(c.r[4], ld32((c.r[17].w[0] + 100u)));  if (depth < kMaxDepth) unit_000F(c, 65u, depth + 1u); else { c.pc = 0x0013CA00u; return; } if (c.pc != 0x004FD2BCu) [[unlikely]] return; }
L_004FD2BC:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD2D4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FD2D4u) [[unlikely]] return; }
L_004FD2D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004FD2F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] + 20400u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD30Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004FD30Cu) [[unlikely]] return; }
L_004FD30C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD31Cu); set32(c.r[5], c.r[5].w[0] + 20412u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004FD31Cu) [[unlikely]] return; }
L_004FD31C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20016u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004FD33C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 20024u)));  if (t) { goto L_004FD340; } }
L_004FD33C:
    set32(c.r[16], c.r[16].w[0] + 20017u);
    c.budget -= 1;
L_004FD340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD348u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0017(c, 335u, depth + 1u); else { c.pc = 0x0015F140u; return; } if (c.pc != 0x004FD348u) [[unlikely]] return; }
L_004FD348:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD35Cu); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 37u, depth + 1u); else { c.pc = 0x00160510u; return; } if (c.pc != 0x004FD35Cu) [[unlikely]] return; }
L_004FD35C:
    st16((c.r[28].w[0] - 22416u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD36Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004FD36Cu) [[unlikely]] return; }
L_004FD36C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD378u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004FD378u) [[unlikely]] return; }
L_004FD378:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004FD390:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 72u);  c.pc = t; return; }
L_004FD3A0:
    c.f[2] = ld32((c.r[4].w[0] + 112u));
    c.f[1] = ld32((c.r[4].w[0] + 116u));
    c.f[0] = 0u;
    c.f[2] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], c.r[4].w[0] + 8u);  goto L_004FD538; }
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_004FD3D8; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004FD3F0; } }
L_004FD3D8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_004FD3F0:
    fpu_div(c, 1u, c.f[0], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[1], c.f[0]);  goto L_004FD424; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_004FD43C; } }
L_004FD424:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 6;
L_004FD43C:
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_004FD454; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004FD46C; } }
L_004FD454:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_004FD46C:
    fpu_div(c, 1u, c.f[0], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[1], c.f[0]);  goto L_004FD4A0; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_004FD4B8; } }
L_004FD4A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[4].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 6;
L_004FD4B8:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_004FD4D0; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_004FD4E8; } }
L_004FD4D0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_004FD4E8:
    fpu_div(c, 1u, c.f[0], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[1], c.f[0]);  goto L_004FD51C; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 44u), c.r[3].w[0]);  if (t) { goto L_004FD534; } }
L_004FD51C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[4].w[0] + 44u), c.r[3].w[0]);
    c.budget -= 6;
L_004FD534:
    set32(c.r[2], c.r[4].w[0] + 8u);
    c.budget -= 1;
L_004FD538:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004FD540:
    set32(c.r[29], c.r[29].w[0] - 304u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 109u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004FD7F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));  if (t) { goto L_004FD7CC; } }
L_004FD560:
    st16((c.r[29].w[0] + 302u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 100u)));  goto L_004FD6A0; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD580u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FD580u) [[unlikely]] return; }
L_004FD580:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_004FD7F8; }
    st16((c.r[29].w[0] + 300u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], c.r[29].w[0] + 300u);
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD5A4u); set32(c.r[6], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FD5A4u) [[unlikely]] return; }
L_004FD5A4:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_004FD5D8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], c.r[29].w[0] + 302u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD5C8u); set32(c.r[6], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FD5C8u) [[unlikely]] return; }
L_004FD5C8:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 300u);  goto L_004FD5FC; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_004FD5D8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD5F0u); set32(c.r[7], 0u + 8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FD5F0u) [[unlikely]] return; }
L_004FD5F0:
    st8((c.r[16].w[0] + 109u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004FD7F8; } }
L_004FD5FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD604u);  if (depth < kMaxDepth) unit_0019(c, 64u, depth + 1u); else { c.pc = 0x00164800u; return; } if (c.pc != 0x004FD604u) [[unlikely]] return; }
L_004FD604:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD60Cu); set32(c.r[4], c.r[29].w[0] + 302u);  if (depth < kMaxDepth) unit_0019(c, 64u, depth + 1u); else { c.pc = 0x00164800u; return; } if (c.pc != 0x004FD60Cu) [[unlikely]] return; }
L_004FD60C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD614u); set32(c.r[4], c.r[16].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 104u, depth + 1u); else { c.pc = 0x0013D2F0u; return; } if (c.pc != 0x004FD614u) [[unlikely]] return; }
L_004FD614:
    c.r[6].d[0] = ld16((c.r[29].w[0] + 300u));
    set32(c.r[4], c.r[16].w[0] + 80u);
    set32(c.r[5], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[7], c.r[29].w[0] + 160u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD62Cu); set32(c.r[8], 0u + 128u);  if (depth < kMaxDepth) unit_000F(c, 19u, depth + 1u); else { c.pc = 0x0013C200u; return; } if (c.pc != 0x004FD62Cu) [[unlikely]] return; }
L_004FD62C:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 300u));
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[25], ld32((c.r[16].w[0] + 80u)));  goto L_004FD664; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD658u); set32(c.r[7], 0u + 8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FD658u) [[unlikely]] return; }
L_004FD658:
    st8((c.r[16].w[0] + 109u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004FD7F8; } }
L_004FD664:
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD678u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FD678u) [[unlikely]] return; }
L_004FD678:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = ld16((c.r[29].w[0] + 302u));
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD698u); set32(c.r[8], c.r[16].w[0] + 80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FD698u) [[unlikely]] return; }
L_004FD698:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004FD7C8; } }
L_004FD6A0:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD6B0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FD6B0u) [[unlikely]] return; }
L_004FD6B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004FD7F4; } }
    st16((c.r[29].w[0] + 298u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], c.r[29].w[0] + 298u);
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD6D4u); set32(c.r[6], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FD6D4u) [[unlikely]] return; }
L_004FD6D4:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_004FD708; }
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[5], c.r[29].w[0] + 302u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD6F8u); set32(c.r[6], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FD6F8u) [[unlikely]] return; }
L_004FD6F8:
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 298u);  goto L_004FD72C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_004FD708:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD720u); set32(c.r[7], 0u + 8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FD720u) [[unlikely]] return; }
L_004FD720:
    st8((c.r[16].w[0] + 109u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004FD7F8; } }
L_004FD72C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD734u);  if (depth < kMaxDepth) unit_0019(c, 64u, depth + 1u); else { c.pc = 0x00164800u; return; } if (c.pc != 0x004FD734u) [[unlikely]] return; }
L_004FD734:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD73Cu); set32(c.r[4], c.r[29].w[0] + 302u);  if (depth < kMaxDepth) unit_0019(c, 64u, depth + 1u); else { c.pc = 0x00164800u; return; } if (c.pc != 0x004FD73Cu) [[unlikely]] return; }
L_004FD73C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD744u); set32(c.r[4], c.r[16].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 104u, depth + 1u); else { c.pc = 0x0013D2F0u; return; } if (c.pc != 0x004FD744u) [[unlikely]] return; }
L_004FD744:
    c.r[6].d[0] = ld16((c.r[29].w[0] + 298u));
    set32(c.r[4], c.r[16].w[0] + 80u);
    set32(c.r[5], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[7], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD75Cu); set32(c.r[8], 0u + 128u);  if (depth < kMaxDepth) unit_000F(c, 19u, depth + 1u); else { c.pc = 0x0013C200u; return; } if (c.pc != 0x004FD75Cu) [[unlikely]] return; }
L_004FD75C:
    c.r[3].d[0] = ld16((c.r[29].w[0] + 298u));
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[25], ld32((c.r[16].w[0] + 80u)));  goto L_004FD794; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD788u); set32(c.r[7], 0u + 8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FD788u) [[unlikely]] return; }
L_004FD788:
    st8((c.r[16].w[0] + 109u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004FD7F8; } }
L_004FD794:
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD7A8u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FD7A8u) [[unlikely]] return; }
L_004FD7A8:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = ld16((c.r[29].w[0] + 302u));
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD7C8u); set32(c.r[8], c.r[16].w[0] + 80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FD7C8u) [[unlikely]] return; }
L_004FD7C8:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    c.budget -= 1;
L_004FD7CC:
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.f[2] = ld32((c.r[28].w[0] - 29052u));  goto L_004FD7DC; }
    c.f[2] = ld32((c.r[2].w[0] + 96u));
    c.budget -= 1;
L_004FD7DC:
    c.f[1] = ld32((c.r[16].w[0] + 120u));
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[2], 0u + 255u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FD560u | kUnwind; return; } goto L_004FD560; }
L_004FD7F4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004FD7F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_004FD810:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 108u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004FD8A4; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 128u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_004FD8A8; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[28].w[0] - 29052u));  goto L_004FD848; }
    c.f[0] = ld32((c.r[2].w[0] + 96u));
    c.budget -= 1;
L_004FD848:
    c.r[5].d[0] = ld16((c.r[28].w[0] - 22416u));
    st32((c.r[29].w[0] + 108u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    set32(c.r[7], 0u + 32u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD864u); set32(c.r[8], 0u + 6u);  if (depth < kMaxDepth) unit_0018(c, 17u, depth + 1u); else { c.pc = 0x00160200u; return; } if (c.pc != 0x004FD864u) [[unlikely]] return; }
L_004FD864:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[5].w[0] + 20016u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD878u); set32(c.r[6], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_0017(c, 449u, depth + 1u); else { c.pc = 0x0015FF90u; return; } if (c.pc != 0x004FD878u) [[unlikely]] return; }
L_004FD878:
    set32(c.r[4], ld32((c.r[28].w[0] - 25052u)));
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD88Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CE(c, 113u, depth + 1u); else { c.pc = 0x00439080u; return; } if (c.pc != 0x004FD88Cu) [[unlikely]] return; }
L_004FD88C:
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], 0u - 1u);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD8A4u); st8((c.r[16].w[0] + 128u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0018(c, 14u, depth + 1u); else { c.pc = 0x00160180u; return; } if (c.pc != 0x004FD8A4u) [[unlikely]] return; }
L_004FD8A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004FD8A8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004FD8C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st16((c.r[29].w[0] + 90u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 108u));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_004FDAB4; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD8FCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FD8FCu) [[unlikely]] return; }
L_004FD8FC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 104u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 92u);  goto L_004FD9FC; }
    set32(c.r[4], ld32((c.r[19].w[0] + 100u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD920u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FD920u) [[unlikely]] return; }
L_004FD920:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 94u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD930u); st16((c.r[29].w[0] + 94u), static_cast<std::uint16_t>(c.r[17].w[0]));  if (depth < kMaxDepth) unit_0019(c, 72u, depth + 1u); else { c.pc = 0x001648E0u; return; } if (c.pc != 0x004FD930u) [[unlikely]] return; }
L_004FD930:
    set32(c.r[4], ld32((c.r[19].w[0] + 104u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD948u); set32(c.r[6], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FD948u) [[unlikely]] return; }
L_004FD948:
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { st8((c.r[19].w[0] + 108u), static_cast<std::uint8_t>(0u));  goto L_004FDAB4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD95Cu); set32(c.r[4], c.r[29].w[0] + 90u);  if (depth < kMaxDepth) unit_0019(c, 72u, depth + 1u); else { c.pc = 0x001648E0u; return; } if (c.pc != 0x004FD95Cu) [[unlikely]] return; }
L_004FD95C:
    set32(c.r[4], ld32((c.r[19].w[0] + 104u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD974u); set32(c.r[6], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FD974u) [[unlikely]] return; }
L_004FD974:
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004FD9AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD988u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 64u, depth + 1u); else { c.pc = 0x0013C9F0u; return; } if (c.pc != 0x004FD988u) [[unlikely]] return; }
L_004FD988:
    set32(c.r[4], ld32((c.r[19].w[0] + 104u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD9A0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FD9A0u) [[unlikely]] return; }
L_004FD9A0:
    c.r[1].d[0] = c.r[2].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 24u)));  goto L_004FD9B8; }
L_004FD9AC:
    st8((c.r[19].w[0] + 108u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004FDAB4; } }
L_004FD9B8:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 100u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FD9D4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FD9D4u) [[unlikely]] return; }
L_004FD9D4:
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[5], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[19].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[19].w[0] + 12u), c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 128u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004FDAB4; } }
L_004FD9FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDA04u); st16((c.r[29].w[0] + 92u), static_cast<std::uint16_t>(c.r[17].w[0]));  if (depth < kMaxDepth) unit_0019(c, 72u, depth + 1u); else { c.pc = 0x001648E0u; return; } if (c.pc != 0x004FDA04u) [[unlikely]] return; }
L_004FDA04:
    set32(c.r[4], ld32((c.r[19].w[0] + 100u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDA1Cu); set32(c.r[6], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FDA1Cu) [[unlikely]] return; }
L_004FDA1C:
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { st8((c.r[19].w[0] + 108u), static_cast<std::uint8_t>(0u));  goto L_004FDAB4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDA30u); set32(c.r[4], c.r[29].w[0] + 90u);  if (depth < kMaxDepth) unit_0019(c, 72u, depth + 1u); else { c.pc = 0x001648E0u; return; } if (c.pc != 0x004FDA30u) [[unlikely]] return; }
L_004FDA30:
    set32(c.r[4], ld32((c.r[19].w[0] + 100u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDA48u); set32(c.r[6], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FDA48u) [[unlikely]] return; }
L_004FDA48:
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004FDA80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDA5Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 64u, depth + 1u); else { c.pc = 0x0013C9F0u; return; } if (c.pc != 0x004FDA5Cu) [[unlikely]] return; }
L_004FDA5C:
    set32(c.r[4], ld32((c.r[19].w[0] + 100u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDA74u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FDA74u) [[unlikely]] return; }
L_004FDA74:
    c.r[1].d[0] = c.r[2].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 24u)));  goto L_004FDA8C; }
L_004FDA80:
    st8((c.r[19].w[0] + 108u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004FDAB4; } }
L_004FDA8C:
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[19].w[0] + 24u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    st32((c.r[19].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[19].w[0] + 12u), c.r[4].w[0]);
    st8((c.r[19].w[0] + 128u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 10;
L_004FDAB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004FDAD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004FDAE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDB04u); set32(c.r[7], 0u + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FDB04u) [[unlikely]] return; }
L_004FDB04:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004FDB20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[4].w[0] + 109u));  goto L_004FDB64; }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 109u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_004FDB8C; }
    set32(c.r[25], ld32((c.r[3].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDB54u); c.r[4].d[0] = c.r[3].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FDB54u) [[unlikely]] return; }
L_004FDB54:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004FDB88; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 109u));
    c.budget -= 1;
L_004FDB64:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004FDB88; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 100u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDB84u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FDB84u) [[unlikely]] return; }
L_004FDB84:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_004FDB88:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004FDB8C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004FDBA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st8((c.r[4].w[0] + 109u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[4].w[0] + 104u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_004FDBC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDBC0u);  if (depth < kMaxDepth) unit_00B7(c, 140u, depth + 1u); else { c.pc = 0x003DDB60u; return; } if (c.pc != 0x004FDBC0u) [[unlikely]] return; }
L_004FDBC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004FDBC4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004FDBD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 108u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004FDC48; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { st8((c.r[16].w[0] + 108u), static_cast<std::uint8_t>(0u));  goto L_004FDC4C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[28].w[0] - 29052u));  goto L_004FDC08; }
    c.f[0] = ld32((c.r[2].w[0] + 96u));
    c.budget -= 1;
L_004FDC08:
    st32((c.r[16].w[0] + 112u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDC20u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FDC20u) [[unlikely]] return; }
L_004FDC20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDC28u); set32(c.r[4], ld32((c.r[16].w[0] + 104u)));  if (depth < kMaxDepth) unit_00B7(c, 125u, depth + 1u); else { c.pc = 0x003DD9E0u; return; } if (c.pc != 0x004FDC28u) [[unlikely]] return; }
L_004FDC28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDC30u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x004FDC30u) [[unlikely]] return; }
L_004FDC30:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] + 20418u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDC48u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x004FDC48u) [[unlikely]] return; }
L_004FDC48:
    st8((c.r[16].w[0] + 108u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_004FDC4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004FDC60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[4].w[0] + 116u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDC80u); set32(c.r[4], ld32((c.r[4].w[0] + 100u)));  if (depth < kMaxDepth) unit_000F(c, 108u, depth + 1u); else { c.pc = 0x0013D410u; return; } if (c.pc != 0x004FDC80u) [[unlikely]] return; }
L_004FDC80:
    st8((c.r[16].w[0] + 108u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 109u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 25052u)));
    c.r[5].d[0] = ld16((c.r[28].w[0] - 22416u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDC9Cu); set32(c.r[6], ld32((c.r[16].w[0] + 124u)));  if (depth < kMaxDepth) unit_0018(c, 274u, depth + 1u); else { c.pc = 0x00162420u; return; } if (c.pc != 0x004FDC9Cu) [[unlikely]] return; }
L_004FDC9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004FDCB0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 120u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004FDCDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[2].w[0] + 96u));  if (t) { goto L_004FDCE0; } }
L_004FDCDC:
    c.f[0] = ld32((c.r[28].w[0] - 29052u));
    c.budget -= 1;
L_004FDCE0:
    st32((c.r[17].w[0] + 116u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDCECu); set32(c.r[4], ld32((c.r[17].w[0] + 100u)));  if (depth < kMaxDepth) unit_000F(c, 104u, depth + 1u); else { c.pc = 0x0013D2F0u; return; } if (c.pc != 0x004FDCECu) [[unlikely]] return; }
L_004FDCEC:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[29].w[0] + 48u);
    st8((c.r[17].w[0] + 108u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 109u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 64u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[17].w[0] + 128u), static_cast<std::uint8_t>(0u));  if (t) { goto L_004FDD28; } }
    set32(c.r[16], c.r[3].w[0] + 0u);
    c.budget -= 1;
L_004FDD0C:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FDD0Cu | kUnwind; return; } goto L_004FDD0C; } }
L_004FDD28:
    set32(c.r[5], c.r[17].w[0] + 8u);
    set32(c.r[4], 0u + 4u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_004FDD34:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FDD34u | kUnwind; return; } goto L_004FDD34; } }
    set32(c.r[6], c.r[16].w[0] + 32u);
    set32(c.r[5], c.r[17].w[0] + 40u);
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
L_004FDD60:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FDD60u | kUnwind; return; } goto L_004FDD60; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[28].w[0] - 29052u));  goto L_004FDD94; }
    c.f[0] = ld32((c.r[2].w[0] + 96u));
    c.budget -= 1;
L_004FDD94:
    c.r[5].d[0] = ld16((c.r[28].w[0] - 22416u));
    st32((c.r[29].w[0] + 188u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[29].w[0] + 144u);
    set32(c.r[7], 0u + 32u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDDB0u); set32(c.r[8], 0u + 6u);  if (depth < kMaxDepth) unit_0018(c, 17u, depth + 1u); else { c.pc = 0x00160200u; return; } if (c.pc != 0x004FDDB0u) [[unlikely]] return; }
L_004FDDB0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[5].w[0] + 20016u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDDC4u); set32(c.r[6], c.r[29].w[0] + 188u);  if (depth < kMaxDepth) unit_0017(c, 449u, depth + 1u); else { c.pc = 0x0015FF90u; return; } if (c.pc != 0x004FDDC4u) [[unlikely]] return; }
L_004FDDC4:
    set32(c.r[4], ld32((c.r[28].w[0] - 25052u)));
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDDD8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CE(c, 113u, depth + 1u); else { c.pc = 0x00439080u; return; } if (c.pc != 0x004FDDD8u) [[unlikely]] return; }
L_004FDDD8:
    c.f[1] = ld32((c.r[29].w[0] + 188u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], 0u - 1u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDDF8u); st32((c.r[17].w[0] + 112u), c.f[0]);  if (depth < kMaxDepth) unit_0018(c, 14u, depth + 1u); else { c.pc = 0x00160180u; return; } if (c.pc != 0x004FDDF8u) [[unlikely]] return; }
L_004FDDF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_004FDE10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 108u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004FDE88; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { st8((c.r[16].w[0] + 108u), static_cast<std::uint8_t>(0u));  goto L_004FDE8C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[28].w[0] - 29052u));  goto L_004FDE48; }
    c.f[0] = ld32((c.r[2].w[0] + 96u));
    c.budget -= 1;
L_004FDE48:
    st32((c.r[16].w[0] + 112u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDE60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FDE60u) [[unlikely]] return; }
L_004FDE60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDE68u); set32(c.r[4], ld32((c.r[16].w[0] + 104u)));  if (depth < kMaxDepth) unit_00B7(c, 125u, depth + 1u); else { c.pc = 0x003DD9E0u; return; } if (c.pc != 0x004FDE68u) [[unlikely]] return; }
L_004FDE68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDE70u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x004FDE70u) [[unlikely]] return; }
L_004FDE70:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] + 20418u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDE88u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x004FDE88u) [[unlikely]] return; }
L_004FDE88:
    st8((c.r[16].w[0] + 108u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_004FDE8C:
    st8((c.r[16].w[0] + 109u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_004FDEA8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDEA4u);  if (depth < kMaxDepth) unit_00B7(c, 140u, depth + 1u); else { c.pc = 0x003DDB60u; return; } if (c.pc != 0x004FDEA4u) [[unlikely]] return; }
L_004FDEA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004FDEA8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004FDEC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDED8u); set32(c.r[4], ld32((c.r[4].w[0] + 100u)));  if (depth < kMaxDepth) unit_000F(c, 104u, depth + 1u); else { c.pc = 0x0013D2F0u; return; } if (c.pc != 0x004FDED8u) [[unlikely]] return; }
L_004FDED8:
    st8((c.r[16].w[0] + 108u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 109u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 128u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004FDF00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004FDFDC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 23024u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDF38u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FDF38u) [[unlikely]] return; }
L_004FDF38:
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 96u), 0u);  goto L_004FDF58; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDF54u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FDF54u) [[unlikely]] return; }
L_004FDF54:
    st32((c.r[17].w[0] + 96u), 0u);
    c.budget -= 1;
L_004FDF58:
    set32(c.r[4], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 104u)));  goto L_004FDF78; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDF74u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FDF74u) [[unlikely]] return; }
L_004FDF74:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 1;
L_004FDF78:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 80u);  goto L_004FDF94; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDF90u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FDF90u) [[unlikely]] return; }
L_004FDF90:
    set32(c.r[4], c.r[17].w[0] + 80u);
    c.budget -= 1;
L_004FDF94:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FDFB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 22400u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDFB0u); st32((c.r[17].w[0] + 80u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 121u, depth + 1u); else { c.pc = 0x0013D730u; return; } if (c.pc != 0x004FDFB0u) [[unlikely]] return; }
L_004FDFB0:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_004FDFC8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 21872u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 4;
L_004FDFC8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004FDFE0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FDFDCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004FDFDCu) [[unlikely]] return; }
L_004FDFDC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004FDFE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004FE000:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_004FE050; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 22976u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_004FE034; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 22240u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_004FE034:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004FE04C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE04Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004FE04Cu) [[unlikely]] return; }
L_004FE04C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004FE050:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004FE060:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[3], c.r[3].w[0] - 21872u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] - 23024u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[19], c.r[18].w[0] + 80u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 900u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE0B0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 130u, depth + 1u); else { c.pc = 0x0013D9B0u; return; } if (c.pc != 0x004FE0B0u) [[unlikely]] return; }
L_004FE0B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] - 22400u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[19].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0] + 96u), 0u);
    st32((c.r[18].w[0] + 100u), 0u);
    st32((c.r[18].w[0] + 104u), 0u);
    st8((c.r[18].w[0] + 108u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 109u), static_cast<std::uint8_t>(0u));
    st32((c.r[18].w[0] + 112u), 0u);
    st32((c.r[18].w[0] + 116u), 0u);
    st32((c.r[18].w[0] + 120u), 0u);
    st32((c.r[18].w[0] + 124u), 0u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE0F0u); st8((c.r[18].w[0] + 128u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004FE0F0u) [[unlikely]] return; }
L_004FE0F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 124u), c.r[2].w[0]);  goto L_004FE11C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 22240u);
    set32(c.r[4], c.r[4].w[0] - 22976u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[3], c.r[18].w[0] + 112u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 9;
L_004FE11C:
    set32(c.r[4], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE128u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004FE128u) [[unlikely]] return; }
L_004FE128:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004FE150; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE140u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 130u, depth + 1u); else { c.pc = 0x0013D9B0u; return; } if (c.pc != 0x004FE140u) [[unlikely]] return; }
L_004FE140:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 23088u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    st32((c.r[19].w[0] + 16u), 0u);
    c.budget -= 4;
L_004FE150:
    st32((c.r[18].w[0] + 96u), c.r[19].w[0]);
    set32(c.r[4], c.r[18].w[0] + 8u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE168u); st32((c.r[18].w[0] + 100u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x004FE168u) [[unlikely]] return; }
L_004FE168:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE174u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004FE174u) [[unlikely]] return; }
L_004FE174:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[18].w[0] + 104u), c.r[2].w[0]);  goto L_004FE198; }
    set32(c.r[5], ld32((c.r[18].w[0] + 100u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE194u); set32(c.r[8], 0u + 700u);  if (depth < kMaxDepth) unit_00B7(c, 185u, depth + 1u); else { c.pc = 0x003DE050u; return; } if (c.pc != 0x004FE194u) [[unlikely]] return; }
L_004FE194:
    st32((c.r[18].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 1;
L_004FE198:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004FE1C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld16((c.r[28].w[0] - 22416u));
    c.r[2].d[0] = ld16((c.r[6].w[0] + 4u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[7].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004FE1F4; } }
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE1ECu); set32(c.r[5], c.r[5].w[0] + 20016u);  if (depth < kMaxDepth) unit_0017(c, 440u, depth + 1u); else { c.pc = 0x0015FE00u; return; } if (c.pc != 0x004FE1ECu) [[unlikely]] return; }
L_004FE1EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004FE1F8; } }
L_004FE1F4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004FE1F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004FE210:
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 24u)));  c.pc = t; return; }
L_004FE230:
    set32(c.r[7], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0] + 48u), c.r[6].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[2], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x004FC000u < 16384u) { entry = entries_00FF[(t - 0x004FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004FE280:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004FE2E4; } }
L_004FE2A4:
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[18].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0] + 48u), c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE2E0u); set32(c.r[5], ld32((c.r[2].w[0] + 24u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FE2E0u) [[unlikely]] return; }
L_004FE2E0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_004FE2E4:
    set32(c.r[3], ld32((c.r[18].w[0] + 320u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 60u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FE2A4u | kUnwind; return; } goto L_004FE2A4; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004FE310:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 332u), 0u);  if (t) { goto L_004FE494; } }
L_004FE330:
    c.r[1].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004FE348; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE344u); set32(c.r[4], c.r[4].w[0] + 4u);  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x004FE344u) [[unlikely]] return; }
L_004FE344:
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_004FE348:
    set32(c.r[16], ld32((c.r[18].w[0] + 100u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_004FE35C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE35Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 266u, depth + 1u); else { c.pc = 0x003BE370u; return; } if (c.pc != 0x004FE35Cu) [[unlikely]] return; }
L_004FE35C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004FE3D0; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], 0u + 1u);  goto L_004FE374; }
    set32(c.r[3], ld32((c.r[17].w[0] + 444u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 60u));
    c.budget -= 2;
L_004FE374:
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = ld8((c.r[16].w[0] + 4u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[3].d[0] ^ 1ull;  goto L_004FE390; }
    c.r[3].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 2;
L_004FE390:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[2].w[0] + 196u));  goto L_004FE3A8; }
    c.r[3].d[0] = ld16((c.r[2].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004FE3B0; } }
L_004FE3A8:
    c.r[3].d[0] = c.r[3].d[0] & 65534ull;
    st16((c.r[2].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_004FE3B0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[2].w[0] + 196u));  goto L_004FE3C8; }
    c.r[3].d[0] = ld16((c.r[2].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004FE3D0; } }
L_004FE3C8:
    c.r[3].d[0] = c.r[3].d[0] & 65533ull;
    st16((c.r[2].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_004FE3D0:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[10], ld32((c.r[18].w[0] + 332u)));  goto L_004FE414; }
    set32(c.r[3], ld32((c.r[17].w[0] + 124u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], ld32((c.r[3].w[0] + 1052u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004FE410; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 448u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FE410; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26056u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_004FE410; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE410u);  if (depth < kMaxDepth) unit_00FB(c, 157u, depth + 1u); else { c.pc = 0x004EDCE0u; return; } if (c.pc != 0x004FE410u) [[unlikely]] return; }
L_004FE410:
    set32(c.r[10], ld32((c.r[18].w[0] + 332u)));
    c.budget -= 1;
L_004FE414:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 320u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 260u)));
    set32(c.r[3], c.r[10].w[0] << 1);
    set32(c.r[7], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 60u)));
    set32(c.r[3], c.r[3].w[0] + c.r[10].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[8], ld32((c.r[18].w[0] + 316u)));
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    set32(c.r[4], c.r[3].w[0] + 288u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE44Cu); c.r[9].d[0] = c.r[2].d[0] ^ 1ull;  if (depth < kMaxDepth) unit_00FF(c, 561u, depth + 1u); else { c.pc = 0x004FFFD0u; return; } if (c.pc != 0x004FE44Cu) [[unlikely]] return; }
L_004FE44C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 332u)));  goto L_004FE46C; }
    set32(c.r[4], ld32((c.r[17].w[0] + 448u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FE468; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE468u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00FB(c, 157u, depth + 1u); else { c.pc = 0x004EDCE0u; return; } if (c.pc != 0x004FE468u) [[unlikely]] return; }
L_004FE468:
    set32(c.r[3], ld32((c.r[18].w[0] + 332u)));
    c.budget -= 1;
L_004FE46C:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 332u)));  goto L_004FE48C; }
    set32(c.r[4], ld32((c.r[18].w[0] + 284u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FE488; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE488u);  if (depth < kMaxDepth) unit_00CC(c, 67u, depth + 1u); else { c.pc = 0x00430800u; return; } if (c.pc != 0x004FE488u) [[unlikely]] return; }
L_004FE488:
    set32(c.r[3], ld32((c.r[18].w[0] + 332u)));
    c.budget -= 1;
L_004FE48C:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 332u), c.r[3].w[0]);
    c.budget -= 2;
L_004FE494:
    set32(c.r[4], ld32((c.r[18].w[0] + 320u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 332u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.r[3].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FE330u | kUnwind; return; } goto L_004FE330; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004FE4D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_004FE4F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE4ECu);  if (depth < kMaxDepth) unit_00D3(c, 447u, depth + 1u); else { c.pc = 0x0044FF90u; return; } if (c.pc != 0x004FE4ECu) [[unlikely]] return; }
L_004FE4EC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004FE4F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004FE500:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 13;
    { const bool t = c.r[16].d[0] == 0ull; c.f[21] = c.f[12];  if (t) { goto L_004FE540; } }
    c.f[0] = ld32((c.r[18].w[0] + 96u));
    c.f[0] = fp::add(c.f[0], c.f[21]);
    st32((c.r[18].w[0] + 96u), c.f[0]);
    c.budget -= 3;
L_004FE540:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.f[20] = ld32((c.r[28].w[0] - 29052u));  if (t) { goto L_004FE55C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE55Cu); c.f[12] = c.f[21];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FE55Cu) [[unlikely]] return; }
L_004FE55C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE564u); set32(c.r[4], ld32((c.r[28].w[0] - 26388u)));  if (depth < kMaxDepth) unit_00BE(c, 44u, depth + 1u); else { c.pc = 0x003F8AE0u; return; } if (c.pc != 0x004FE564u) [[unlikely]] return; }
L_004FE564:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004FE574; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = c.f[21];  if (t) { goto L_004FE578; } }
L_004FE574:
    c.f[12] = 0u;
    c.budget -= 1;
L_004FE578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE580u); set32(c.r[4], ld32((c.r[28].w[0] - 26388u)));  if (depth < kMaxDepth) unit_00BE(c, 47u, depth + 1u); else { c.pc = 0x003F8B50u; return; } if (c.pc != 0x004FE580u) [[unlikely]] return; }
L_004FE580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE588u); set32(c.r[4], ld32((c.r[18].w[0] + 320u)));  if (depth < kMaxDepth) unit_00F4(c, 129u, depth + 1u); else { c.pc = 0x004D11D0u; return; } if (c.pc != 0x004FE588u) [[unlikely]] return; }
L_004FE588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE590u); set32(c.r[4], ld32((c.r[18].w[0] + 320u)));  if (depth < kMaxDepth) unit_00F4(c, 152u, depth + 1u); else { c.pc = 0x004D15A0u; return; } if (c.pc != 0x004FE590u) [[unlikely]] return; }
L_004FE590:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE598u); set32(c.r[4], ld32((c.r[18].w[0] + 320u)));  if (depth < kMaxDepth) unit_00F4(c, 149u, depth + 1u); else { c.pc = 0x004D1490u; return; } if (c.pc != 0x004FE598u) [[unlikely]] return; }
L_004FE598:
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE5A4u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_00BD(c, 249u, depth + 1u); else { c.pc = 0x003F63E0u; return; } if (c.pc != 0x004FE5A4u) [[unlikely]] return; }
L_004FE5A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE5ACu); set32(c.r[4], ld32((c.r[18].w[0] + 316u)));  if (depth < kMaxDepth) unit_00CF(c, 89u, depth + 1u); else { c.pc = 0x0043CEF0u; return; } if (c.pc != 0x004FE5ACu) [[unlikely]] return; }
L_004FE5AC:
    set32(c.r[4], ld32((c.r[18].w[0] + 284u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[18].w[0] + 104u);  goto L_004FE5C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE5C0u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_00CC(c, 68u, depth + 1u); else { c.pc = 0x00430810u; return; } if (c.pc != 0x004FE5C0u) [[unlikely]] return; }
L_004FE5C0:
    set32(c.r[4], c.r[18].w[0] + 104u);
    c.budget -= 1;
L_004FE5C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE5CCu); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_00FF(c, 5u, depth + 1u); else { c.pc = 0x004FC2E0u; return; } if (c.pc != 0x004FE5CCu) [[unlikely]] return; }
L_004FE5CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE5D4u); set32(c.r[4], c.r[18].w[0] + 56u);  if (depth < kMaxDepth) unit_00B7(c, 440u, depth + 1u); else { c.pc = 0x003DFCB0u; return; } if (c.pc != 0x004FE5D4u) [[unlikely]] return; }
L_004FE5D4:
    set32(c.r[4], ld32((c.r[18].w[0] + 260u)));
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE5E4u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_00C9(c, 175u, depth + 1u); else { c.pc = 0x004253F0u; return; } if (c.pc != 0x004FE5E4u) [[unlikely]] return; }
L_004FE5E4:
    set32(c.r[3], ld32((c.r[18].w[0] + 320u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 60u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004FE644; } }
L_004FE5F4:
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[20], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 288u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE614u); c.f[12] = c.f[21];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FE614u) [[unlikely]] return; }
L_004FE614:
    set32(c.r[4], ld32((c.r[20].w[0] + 292u)));
    c.f[12] = c.f[21];
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE62Cu); set32(c.r[19], c.r[20].w[0] + 292u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FE62Cu) [[unlikely]] return; }
L_004FE62C:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[4], ld32((c.r[20].w[0] + 296u)));
    c.f[12] = ld32((c.r[2].w[0] + 96u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE640u); c.f[13] = c.f[21];  if (depth < kMaxDepth) unit_00FE(c, 46u, depth + 1u); else { c.pc = 0x004F85B0u; return; } if (c.pc != 0x004FE640u) [[unlikely]] return; }
L_004FE640:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_004FE644:
    c.r[3].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FE5F4u | kUnwind; return; } goto L_004FE5F4; }
    set32(c.r[3], ld32((c.r[18].w[0] + 320u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004FE67C; } }
L_004FE660:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE66Cu); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x004FE66Cu) [[unlikely]] return; }
L_004FE66C:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE678u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_00EF(c, 61u, depth + 1u); else { c.pc = 0x004BCDC0u; return; } if (c.pc != 0x004FE678u) [[unlikely]] return; }
L_004FE678:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_004FE67C:
    c.r[3].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 320u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FE660u | kUnwind; return; } goto L_004FE660; }
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_004FE6A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE69Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00FD(c, 587u, depth + 1u); else { c.pc = 0x004F7C10u; return; } if (c.pc != 0x004FE69Cu) [[unlikely]] return; }
L_004FE69C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_004FE6A0:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004FE6D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 320u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[12];  if (t) { goto L_004FE720; } }
L_004FE700:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE70Cu); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x004FE70Cu) [[unlikely]] return; }
L_004FE70C:
    c.f[0] = ld32((c.r[28].w[0] - 22380u));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE71Cu); c.f[12] = fp::add(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_00EF(c, 147u, depth + 1u); else { c.pc = 0x004BDA60u; return; } if (c.pc != 0x004FE71Cu) [[unlikely]] return; }
L_004FE71C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_004FE720:
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 320u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FE700u | kUnwind; return; } goto L_004FE700; }
    set32(c.r[4], ld32((c.r[18].w[0] + 324u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE73Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CE(c, 245u, depth + 1u); else { c.pc = 0x0043A3D0u; return; } if (c.pc != 0x004FE73Cu) [[unlikely]] return; }
L_004FE73C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004FE764; } }
L_004FE744:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE750u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x004FE750u) [[unlikely]] return; }
L_004FE750:
    c.f[0] = ld32((c.r[28].w[0] - 22380u));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE760u); c.f[12] = fp::add(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_00EF(c, 86u, depth + 1u); else { c.pc = 0x004BD190u; return; } if (c.pc != 0x004FE760u) [[unlikely]] return; }
L_004FE760:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_004FE764:
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 320u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FE744u | kUnwind; return; } goto L_004FE744; }
    set32(c.r[4], ld32((c.r[18].w[0] + 324u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE77Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00CE(c, 243u, depth + 1u); else { c.pc = 0x0043A390u; return; } if (c.pc != 0x004FE77Cu) [[unlikely]] return; }
L_004FE77C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004FE7BC; } }
L_004FE784:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE790u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x004FE790u) [[unlikely]] return; }
L_004FE790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE798u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00EE(c, 317u, depth + 1u); else { c.pc = 0x004BAC80u; return; } if (c.pc != 0x004FE798u) [[unlikely]] return; }
L_004FE798:
    set32(c.r[2], ld32((c.r[18].w[0] + 320u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE7A8u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x004FE7A8u) [[unlikely]] return; }
L_004FE7A8:
    c.f[0] = ld32((c.r[28].w[0] - 22380u));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE7B8u); c.f[12] = fp::add(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_00EF(c, 66u, depth + 1u); else { c.pc = 0x004BCE70u; return; } if (c.pc != 0x004FE7B8u) [[unlikely]] return; }
L_004FE7B8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_004FE7BC:
    c.r[3].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 320u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FE784u | kUnwind; return; } goto L_004FE784; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004FE7F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_004FE800:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 320u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004FE908; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004FE890; } }
L_004FE830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE838u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x004FE838u) [[unlikely]] return; }
L_004FE838:
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[19], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 32u)));
    c.budget -= 8;
    if (c.r[4].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_004FE860; }
    set32(c.r[4], c.r[4].w[0] - 8u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_004FE860:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE868u);  if (depth < kMaxDepth) unit_00F0(c, 342u, depth + 1u); else { c.pc = 0x004C26E0u; return; } if (c.pc != 0x004FE868u) [[unlikely]] return; }
L_004FE868:
    set32(c.r[19], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE878u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 370u, depth + 1u); else { c.pc = 0x0042FEB0u; return; } if (c.pc != 0x004FE878u) [[unlikely]] return; }
L_004FE878:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE880u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 372u, depth + 1u); else { c.pc = 0x0042FF10u; return; } if (c.pc != 0x004FE880u) [[unlikely]] return; }
L_004FE880:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE88Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 371u, depth + 1u); else { c.pc = 0x0042FEC0u; return; } if (c.pc != 0x004FE88Cu) [[unlikely]] return; }
L_004FE88C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_004FE890:
    set32(c.r[4], ld32((c.r[18].w[0] + 320u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] + 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FE830u | kUnwind; return; } goto L_004FE830; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004FE8F4; } }
L_004FE8AC:
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], c.r[18].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[28].w[0] - 26896u)));
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(8ll);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[2], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE8F0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FE8F0u) [[unlikely]] return; }
L_004FE8F0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_004FE8F4:
    set32(c.r[3], ld32((c.r[18].w[0] + 320u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 60u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FE8ACu | kUnwind; return; } goto L_004FE8AC; }
L_004FE908:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004FE930:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE950u); set32(c.r[4], ld32((c.r[4].w[0] + 324u)));  if (depth < kMaxDepth) unit_00CE(c, 275u, depth + 1u); else { c.pc = 0x0043AAF0u; return; } if (c.pc != 0x004FE950u) [[unlikely]] return; }
L_004FE950:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE958u); set32(c.r[4], ld32((c.r[17].w[0] + 320u)));  if (depth < kMaxDepth) unit_00F4(c, 198u, depth + 1u); else { c.pc = 0x004D1C40u; return; } if (c.pc != 0x004FE958u) [[unlikely]] return; }
L_004FE958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE960u); set32(c.r[4], c.r[17].w[0] + 104u);  if (depth < kMaxDepth) unit_00FF(c, 15u, depth + 1u); else { c.pc = 0x004FC490u; return; } if (c.pc != 0x004FE960u) [[unlikely]] return; }
L_004FE960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE968u); set32(c.r[4], ld32((c.r[17].w[0] + 340u)));  if (depth < kMaxDepth) unit_00BD(c, 180u, depth + 1u); else { c.pc = 0x003F5C00u; return; } if (c.pc != 0x004FE968u) [[unlikely]] return; }
L_004FE968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE970u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FF(c, 304u, depth + 1u); else { c.pc = 0x004FE800u; return; } if (c.pc != 0x004FE970u) [[unlikely]] return; }
L_004FE970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE978u); set32(c.r[4], c.r[17].w[0] + 56u);  if (depth < kMaxDepth) unit_00B8(c, 2u, depth + 1u); else { c.pc = 0x003E0010u; return; } if (c.pc != 0x004FE978u) [[unlikely]] return; }
L_004FE978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE980u); set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  if (depth < kMaxDepth) unit_00BD(c, 246u, depth + 1u); else { c.pc = 0x003F6340u; return; } if (c.pc != 0x004FE980u) [[unlikely]] return; }
L_004FE980:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_004FE9E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE994u);  if (depth < kMaxDepth) unit_00FD(c, 575u, depth + 1u); else { c.pc = 0x004F7AD0u; return; } if (c.pc != 0x004FE994u) [[unlikely]] return; }
L_004FE994:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004FE9E0; } }
L_004FE9A0:
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[18], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 292u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 296u)));  goto L_004FE9CC; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE9C8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FE9C8u) [[unlikely]] return; }
L_004FE9C8:
    set32(c.r[4], ld32((c.r[18].w[0] + 296u)));
    c.budget -= 1;
L_004FE9CC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_004FE9E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FE9DCu);  if (depth < kMaxDepth) unit_00FE(c, 44u, depth + 1u); else { c.pc = 0x004F84C0u; return; } if (c.pc != 0x004FE9DCu) [[unlikely]] return; }
L_004FE9DC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_004FE9E0:
    set32(c.r[3], ld32((c.r[17].w[0] + 320u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 60u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FE9A0u | kUnwind; return; } goto L_004FE9A0; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004FEA10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004FEA78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004FEA44; } }
L_004FEA34:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEA40u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 142u, depth + 1u); else { c.pc = 0x00451050u; return; } if (c.pc != 0x004FEA40u) [[unlikely]] return; }
L_004FEA40:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_004FEA44:
    set32(c.r[3], ld32((c.r[28].w[0] - 26060u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 100u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FEA34u | kUnwind; return; } goto L_004FEA34; }
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 16u), 0u);  goto L_004FEA78; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEA74u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FEA74u) [[unlikely]] return; }
L_004FEA74:
    st32((c.r[16].w[0] + 16u), 0u);
    c.budget -= 1;
L_004FEA78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004FEA90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEAB8u); set32(c.r[4], c.r[4].w[0] + 22131u);  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x004FEAB8u) [[unlikely]] return; }
L_004FEAB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEAC0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0100(c, 135u, depth + 1u); else { c.pc = 0x00500E20u; return; } if (c.pc != 0x004FEAC0u) [[unlikely]] return; }
L_004FEAC0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004FEAE0; } }
L_004FEACC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEAD4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 279u, depth + 1u); else { c.pc = 0x0013A9F0u; return; } if (c.pc != 0x004FEAD4u) [[unlikely]] return; }
L_004FEAD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEADCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x004FEADCu) [[unlikely]] return; }
L_004FEADC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_004FEAE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEAE8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013A9E0u; return; } if (c.pc != 0x004FEAE8u) [[unlikely]] return; }
L_004FEAE8:
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FEACCu | kUnwind; return; } goto L_004FEACC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEAFCu); set32(c.r[4], ld32((c.r[17].w[0] + 340u)));  if (depth < kMaxDepth) unit_00BD(c, 181u, depth + 1u); else { c.pc = 0x003F5C60u; return; } if (c.pc != 0x004FEAFCu) [[unlikely]] return; }
L_004FEAFC:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 100u)));  goto L_004FEB14; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEB10u);  if (depth < kMaxDepth) unit_00AF(c, 271u, depth + 1u); else { c.pc = 0x003BE440u; return; } if (c.pc != 0x004FEB10u) [[unlikely]] return; }
L_004FEB10:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.budget -= 1;
L_004FEB14:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 100u), 0u);  goto L_004FEB30; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEB2Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FEB2Cu) [[unlikely]] return; }
L_004FEB2C:
    st32((c.r[17].w[0] + 100u), 0u);
    c.budget -= 1;
L_004FEB30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEB38u);  if (depth < kMaxDepth) unit_00D7(c, 314u, depth + 1u); else { c.pc = 0x0045F090u; return; } if (c.pc != 0x004FEB38u) [[unlikely]] return; }
L_004FEB38:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEB44u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00BD(c, 276u, depth + 1u); else { c.pc = 0x003F6820u; return; } if (c.pc != 0x004FEB44u) [[unlikely]] return; }
L_004FEB44:
    set32(c.r[4], c.r[17].w[0] + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEB50u); st32((c.r[17].w[0] + 20u), 0u);  if (depth < kMaxDepth) unit_00FF(c, 16u, depth + 1u); else { c.pc = 0x004FC4A0u; return; } if (c.pc != 0x004FEB50u) [[unlikely]] return; }
L_004FEB50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEB58u); set32(c.r[4], ld32((c.r[17].w[0] + 324u)));  if (depth < kMaxDepth) unit_00CE(c, 297u, depth + 1u); else { c.pc = 0x0043ACA0u; return; } if (c.pc != 0x004FEB58u) [[unlikely]] return; }
L_004FEB58:
    set32(c.r[4], ld32((c.r[17].w[0] + 284u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  goto L_004FEB70; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEB6Cu);  if (depth < kMaxDepth) unit_00CC(c, 73u, depth + 1u); else { c.pc = 0x00430900u; return; } if (c.pc != 0x004FEB6Cu) [[unlikely]] return; }
L_004FEB6C:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_004FEB70:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 12u), 0u);  goto L_004FEB8C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEB88u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FEB88u) [[unlikely]] return; }
L_004FEB88:
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 1;
L_004FEB8C:
    set32(c.r[4], ld32((c.r[17].w[0] + 260u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 260u), 0u);  goto L_004FEBAC; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEBA8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FEBA8u) [[unlikely]] return; }
L_004FEBA8:
    st32((c.r[17].w[0] + 260u), 0u);
    c.budget -= 1;
L_004FEBAC:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    c.budget -= 2;
L_004FEBB4:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEBD0u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FEBD0u) [[unlikely]] return; }
L_004FEBD0:
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[18], c.r[3].w[0] + 36u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[3].w[0] + 24u);  if (t) { goto L_004FEC0C; } }
L_004FEBEC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[19].w[0]), 0u);  goto L_004FEC08; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEC04u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FEC04u) [[unlikely]] return; }
L_004FEC04:
    st32((c.r[19].w[0]), 0u);
    c.budget -= 1;
L_004FEC08:
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.budget -= 1;
L_004FEC0C:
    c.budget -= 2;
    if (c.r[19].d[0] != c.r[18].d[0]) { set32(c.r[4], ld32((c.r[19].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FEBECu | kUnwind; return; } goto L_004FEBEC; }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FEBB4u | kUnwind; return; } goto L_004FEBB4; }
    set32(c.r[4], ld32((c.r[17].w[0] + 316u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_004FEC44; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEC40u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FEC40u) [[unlikely]] return; }
L_004FEC40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_004FEC44:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004FEC60:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 100u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEC8Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004FEC8Cu) [[unlikely]] return; }
L_004FEC8C:
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[2], 0u + 5u);
    st32((c.r[29].w[0] + 120u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 260u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FECA8u); set32(c.r[5], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_0100(c, 107u, depth + 1u); else { c.pc = 0x00500A50u; return; } if (c.pc != 0x004FECA8u) [[unlikely]] return; }
L_004FECA8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 22163u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004FECC4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_004FECCC; } }
L_004FECC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FECCCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x004FECCCu) [[unlikely]] return; }
L_004FECCC:
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 260u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FECE8u); set32(c.r[5], c.r[29].w[0] + 108u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FECE8u) [[unlikely]] return; }
L_004FECE8:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 344u);  goto L_004FED4C; }
    set32(c.r[17], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FED18u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004FED18u) [[unlikely]] return; }
L_004FED18:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FED28u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004FED28u) [[unlikely]] return; }
L_004FED28:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004FED48; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FED48u); set32(c.r[5], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x004FED48u) [[unlikely]] return; }
L_004FED48:
    set32(c.r[2], c.r[16].w[0] + 344u);
    c.budget -= 1;
L_004FED4C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FED5Cu); set32(c.r[5], c.r[29].w[0] + 116u);  if (depth < kMaxDepth) unit_0100(c, 86u, depth + 1u); else { c.pc = 0x00500820u; return; } if (c.pc != 0x004FED5Cu) [[unlikely]] return; }
L_004FED5C:
    set32(c.r[2], ld32((c.r[16].w[0] + 260u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FED6Cu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0100(c, 49u, depth + 1u); else { c.pc = 0x00500540u; return; } if (c.pc != 0x004FED6Cu) [[unlikely]] return; }
L_004FED6C:
    set32(c.r[2], ld32((c.r[16].w[0] + 260u)));
    set32(c.r[5], c.r[29].w[0] + 127u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[29].w[0] + 126u);
    set32(c.r[20], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FED90u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FED90u) [[unlikely]] return; }
L_004FED90:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 22189u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004FEDAC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_004FEDB4; } }
L_004FEDAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEDB4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x004FEDB4u) [[unlikely]] return; }
L_004FEDB4:
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEDCCu); set32(c.r[5], c.r[29].w[0] + 104u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FEDCCu) [[unlikely]] return; }
L_004FEDCC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = ld16((c.r[18].w[0] + 196u));  goto L_004FEE30; }
    set32(c.r[17], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEDFCu); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004FEDFCu) [[unlikely]] return; }
L_004FEDFC:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEE0Cu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004FEE0Cu) [[unlikely]] return; }
L_004FEE0C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004FEE2C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEE2Cu); set32(c.r[5], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x004FEE2Cu) [[unlikely]] return; }
L_004FEE2C:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 196u));
    c.budget -= 1;
L_004FEE30:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 65519ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEE48u); st16((c.r[18].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0060(c, 582u, depth + 1u); else { c.pc = 0x00283C30u; return; } if (c.pc != 0x004FEE48u) [[unlikely]] return; }
L_004FEE48:
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEE58u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FEE58u) [[unlikely]] return; }
L_004FEE58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEE60u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 529u, depth + 1u); else { c.pc = 0x002836E0u; return; } if (c.pc != 0x004FEE60u) [[unlikely]] return; }
L_004FEE60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEE68u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 474u, depth + 1u); else { c.pc = 0x00283090u; return; } if (c.pc != 0x004FEE68u) [[unlikely]] return; }
L_004FEE68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEE70u); set32(c.r[4], ld32((c.r[29].w[0] + 96u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004FEE70u) [[unlikely]] return; }
L_004FEE70:
    set32(c.r[3], ld32((c.r[28].w[0] - 26156u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 260u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEE88u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 394u, depth + 1u); else { c.pc = 0x0041FA60u; return; } if (c.pc != 0x004FEE88u) [[unlikely]] return; }
L_004FEE88:
    set32(c.r[4], ld32((c.r[16].w[0] + 284u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 320u)));  goto L_004FEEA0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEE9Cu);  if (depth < kMaxDepth) unit_00CC(c, 74u, depth + 1u); else { c.pc = 0x00430930u; return; } if (c.pc != 0x004FEE9Cu) [[unlikely]] return; }
L_004FEE9C:
    set32(c.r[2], ld32((c.r[16].w[0] + 320u)));
    c.budget -= 1;
L_004FEEA0:
    set32(c.r[2], ld32((c.r[2].w[0] + 60u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 280u)));  goto L_004FEF10; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEEB8u);  if (depth < kMaxDepth) unit_00D4(c, 206u, depth + 1u); else { c.pc = 0x00451730u; return; } if (c.pc != 0x004FEEB8u) [[unlikely]] return; }
L_004FEEB8:
    set32(c.r[4], 0u + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEEC4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004FEEC4u) [[unlikely]] return; }
L_004FEEC4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  goto L_004FEEDC; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEED8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 264u, depth + 1u); else { c.pc = 0x00451C60u; return; } if (c.pc != 0x004FEED8u) [[unlikely]] return; }
L_004FEED8:
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 1;
L_004FEEDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004FEEF8; } }
L_004FEEE4:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEEF4u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 148u, depth + 1u); else { c.pc = 0x00451130u; return; } if (c.pc != 0x004FEEF4u) [[unlikely]] return; }
L_004FEEF4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_004FEEF8:
    set32(c.r[2], ld32((c.r[28].w[0] - 26060u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 100u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FEEE4u | kUnwind; return; } goto L_004FEEE4; }
    set32(c.r[4], ld32((c.r[16].w[0] + 280u)));
    c.budget -= 1;
L_004FEF10:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEF1Cu); set32(c.r[5], c.r[5].w[0] - 4064u);  if (depth < kMaxDepth) unit_00D4(c, 299u, depth + 1u); else { c.pc = 0x00452120u; return; } if (c.pc != 0x004FEF1Cu) [[unlikely]] return; }
L_004FEF1C:
    set32(c.r[4], ld32((c.r[16].w[0] + 280u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEF28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 215u, depth + 1u); else { c.pc = 0x004033D0u; return; } if (c.pc != 0x004FEF28u) [[unlikely]] return; }
L_004FEF28:
    set32(c.r[2], ld32((c.r[16].w[0] + 320u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[20], ld32((c.r[2].w[0] + 60u)));  if (t) { goto L_004FEF48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEF40u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 233u, depth + 1u); else { c.pc = 0x0044DDE0u; return; } if (c.pc != 0x004FEF40u) [[unlikely]] return; }
L_004FEF40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004FEF4C; } }
L_004FEF48:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004FEF4C:
    set32(c.r[4], 0u + 1008u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEF58u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004FEF58u) [[unlikely]] return; }
L_004FEF58:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 312u), c.r[2].w[0]);  goto L_004FEF78; }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEF74u); c.r[7].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0102(c, 378u, depth + 1u); else { c.pc = 0x0050BC30u; return; } if (c.pc != 0x004FEF74u) [[unlikely]] return; }
L_004FEF74:
    st32((c.r[16].w[0] + 312u), c.r[2].w[0]);
    c.budget -= 1;
L_004FEF78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_004FEFF0; } }
L_004FEF80:
    set32(c.r[5], ld32((c.r[16].w[0] + 260u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[17], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[18], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[4], 0u + 104u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEFB4u); st32((c.r[17].w[0] + 288u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004FEFB4u) [[unlikely]] return; }
L_004FEFB4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 292u), c.r[2].w[0]);  goto L_004FEFCC; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEFC8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 344u, depth + 1u); else { c.pc = 0x004325F0u; return; } if (c.pc != 0x004FEFC8u) [[unlikely]] return; }
L_004FEFC8:
    st32((c.r[17].w[0] + 292u), c.r[2].w[0]);
    c.budget -= 1;
L_004FEFCC:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEFD8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004FEFD8u) [[unlikely]] return; }
L_004FEFD8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 296u), c.r[2].w[0]);  goto L_004FEFEC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FEFE8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FE(c, 49u, depth + 1u); else { c.pc = 0x004F86A0u; return; } if (c.pc != 0x004FEFE8u) [[unlikely]] return; }
L_004FEFE8:
    st32((c.r[17].w[0] + 296u), c.r[2].w[0]);
    c.budget -= 1;
L_004FEFEC:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_004FEFF0:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[19].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FEF80u | kUnwind; return; } goto L_004FEF80; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004FF020:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_004FF040; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004FF088; } }
L_004FF040:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF04Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FF04Cu) [[unlikely]] return; }
L_004FF04C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 19952u);  if (t) { goto L_004FF06C; } }
L_004FF05C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_004FF06C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004FF078; } }
L_004FF06C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FF05Cu | kUnwind; return; } goto L_004FF05C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004FF078:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_004FF088; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004FF088; } }
L_004FF088:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_004FF0F8; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF09Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0061(c, 38u, depth + 1u); else { c.pc = 0x00284390u; return; } if (c.pc != 0x004FF09Cu) [[unlikely]] return; }
L_004FF09C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004FF0D4; }
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FF0D0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF0BCu); set32(c.r[5], c.r[5].w[0] + 22201u);  if (depth < kMaxDepth) unit_00AE(c, 141u, depth + 1u); else { c.pc = 0x003B9868u; return; } if (c.pc != 0x004FF0BCu) [[unlikely]] return; }
L_004FF0BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004FF0D0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF0D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 387u, depth + 1u); else { c.pc = 0x0041B120u; return; } if (c.pc != 0x004FF0D0u) [[unlikely]] return; }
L_004FF0D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004FF0D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF0DCu);  if (depth < kMaxDepth) unit_00C6(c, 388u, depth + 1u); else { c.pc = 0x0041B150u; return; } if (c.pc != 0x004FF0DCu) [[unlikely]] return; }
L_004FF0DC:
    c.r[1].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004FF0F4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF0F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 387u, depth + 1u); else { c.pc = 0x0041B120u; return; } if (c.pc != 0x004FF0F4u) [[unlikely]] return; }
L_004FF0F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004FF0F8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004FF110:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st8((c.r[4].w[0] + 328u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = ld8((c.r[16].w[0] + 328u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF148u); set32(c.r[4], c.r[16].w[0] + 104u);  if (depth < kMaxDepth) unit_00FE(c, 185u, depth + 1u); else { c.pc = 0x004F9500u; return; } if (c.pc != 0x004FF148u) [[unlikely]] return; }
L_004FF148:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004FF16C; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF164u); set32(c.r[4], c.r[16].w[0] + 104u);  if (depth < kMaxDepth) unit_00FE(c, 189u, depth + 1u); else { c.pc = 0x004F95A0u; return; } if (c.pc != 0x004FF164u) [[unlikely]] return; }
L_004FF164:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 12u)));  if (t) { goto L_004FF204; } }
L_004FF16C:
    set32(c.r[4], c.r[16].w[0] + 104u);
    set32(c.r[5], c.r[5].w[0] + 22207u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF17Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00FE(c, 239u, depth + 1u); else { c.pc = 0x004F9C70u; return; } if (c.pc != 0x004FF17Cu) [[unlikely]] return; }
L_004FF17C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 104u);
    set32(c.r[5], c.r[5].w[0] + 22213u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF190u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00FE(c, 239u, depth + 1u); else { c.pc = 0x004F9C70u; return; } if (c.pc != 0x004FF190u) [[unlikely]] return; }
L_004FF190:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 104u);
    set32(c.r[5], c.r[5].w[0] + 22220u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF1A4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00FE(c, 239u, depth + 1u); else { c.pc = 0x004F9C70u; return; } if (c.pc != 0x004FF1A4u) [[unlikely]] return; }
L_004FF1A4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 104u);
    set32(c.r[5], c.r[5].w[0] + 22207u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF1B8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00FE(c, 239u, depth + 1u); else { c.pc = 0x004F9C70u; return; } if (c.pc != 0x004FF1B8u) [[unlikely]] return; }
L_004FF1B8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 104u);
    set32(c.r[5], c.r[5].w[0] + 22213u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF1CCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00FE(c, 239u, depth + 1u); else { c.pc = 0x004F9C70u; return; } if (c.pc != 0x004FF1CCu) [[unlikely]] return; }
L_004FF1CC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 104u);
    set32(c.r[5], c.r[5].w[0] + 22220u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF1E0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00FE(c, 239u, depth + 1u); else { c.pc = 0x004F9C70u; return; } if (c.pc != 0x004FF1E0u) [[unlikely]] return; }
L_004FF1E0:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF1ECu); set32(c.r[4], c.r[16].w[0] + 104u);  if (depth < kMaxDepth) unit_00FE(c, 301u, depth + 1u); else { c.pc = 0x004FA4D0u; return; } if (c.pc != 0x004FF1ECu) [[unlikely]] return; }
L_004FF1EC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF200u); set32(c.r[4], c.r[16].w[0] + 104u);  if (depth < kMaxDepth) unit_00FE(c, 248u, depth + 1u); else { c.pc = 0x004F9D60u; return; } if (c.pc != 0x004FF200u) [[unlikely]] return; }
L_004FF200:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_004FF204:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 56u);  goto L_004FF240; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26060u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] + 22225u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF220u); set32(c.r[4], c.r[2].w[0] + 188u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004FF220u) [[unlikely]] return; }
L_004FF220:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  goto L_004FF234; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF230u); set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_00FD(c, 562u, depth + 1u); else { c.pc = 0x004F7990u; return; } if (c.pc != 0x004FF230u) [[unlikely]] return; }
L_004FF230:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_004FF234:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF23Cu);  if (depth < kMaxDepth) unit_00FD(c, 560u, depth + 1u); else { c.pc = 0x004F7960u; return; } if (c.pc != 0x004FF23Cu) [[unlikely]] return; }
L_004FF23C:
    set32(c.r[4], c.r[16].w[0] + 56u);
    c.budget -= 1;
L_004FF240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF248u);  if (depth < kMaxDepth) unit_00B8(c, 5u, depth + 1u); else { c.pc = 0x003E0070u; return; } if (c.pc != 0x004FF248u) [[unlikely]] return; }
L_004FF248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF250u); set32(c.r[4], c.r[16].w[0] + 104u);  if (depth < kMaxDepth) unit_00FE(c, 186u, depth + 1u); else { c.pc = 0x004F9510u; return; } if (c.pc != 0x004FF250u) [[unlikely]] return; }
L_004FF250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF258u); set32(c.r[4], c.r[16].w[0] + 56u);  if (depth < kMaxDepth) unit_00B7(c, 375u, depth + 1u); else { c.pc = 0x003DF4C0u; return; } if (c.pc != 0x004FF258u) [[unlikely]] return; }
L_004FF258:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004FF280:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0] + 188u), 0u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF2C0u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004FF2C0u) [[unlikely]] return; }
L_004FF2C0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26060u)));
    set32(c.r[4], 0u + 44u);
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 320u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 100u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF2E0u); st32((c.r[2].w[0] + 60u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004FF2E0u) [[unlikely]] return; }
L_004FF2E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 260u), c.r[2].w[0]);  goto L_004FF2F8; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF2F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 222u, depth + 1u); else { c.pc = 0x004258E0u; return; } if (c.pc != 0x004FF2F4u) [[unlikely]] return; }
L_004FF2F4:
    st32((c.r[20].w[0] + 260u), c.r[2].w[0]);
    c.budget -= 1;
L_004FF2F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF300u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 179u, depth + 1u); else { c.pc = 0x00425450u; return; } if (c.pc != 0x004FF300u) [[unlikely]] return; }
L_004FF300:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[19], 0u + 1u);  if (t) { goto L_004FF340; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[19], 0u + 2u);  goto L_004FF344; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[19], 0u + 1u);  goto L_004FF344; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[19].d[0];  if (t) { goto L_004FF334; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004FF344; } }
L_004FF334:
    set32(c.r[19], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004FF344; } }
L_004FF340:
    set32(c.r[19], 0u + 2u);
    c.budget -= 1;
L_004FF344:
    mmi::div(c, 0, c.r[16].w[0], c.r[19].w[0]);
    c.r[21].d[0] = c.lo.d[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF354u); c.f[12] = ld32((c.r[28].w[0] - 32416u));  if (depth < kMaxDepth) unit_00AB(c, 415u, depth + 1u); else { c.pc = 0x003AF5C8u; return; } if (c.pc != 0x004FF354u) [[unlikely]] return; }
L_004FF354:
    set32(c.r[2], ld32((c.r[28].w[0] - 29204u)));
    c.f[21] = c.f[0];
    c.r[18].d[0] = 0ull + 0ull;
    c.f[1] = ld32((c.r[2].w[0] + 156u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.f[20] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_004FF400; } }
L_004FF36C:
    set32(c.r[3], c.r[18].w[0] << 2);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF38Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 93u, depth + 1u); else { c.pc = 0x001BD720u; return; } if (c.pc != 0x004FF38Cu) [[unlikely]] return; }
L_004FF38C:
    c.f[0] = c.r[19].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 12u, c.f[20], c.f[0]);
    c.f[0] = c.r[21].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 13u, c.f[21], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF3BCu);  if (depth < kMaxDepth) unit_002F(c, 115u, depth + 1u); else { c.pc = 0x001BDB00u; return; } if (c.pc != 0x004FF3BCu) [[unlikely]] return; }
L_004FF3BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF3CCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 109u, depth + 1u); else { c.pc = 0x001BDA00u; return; } if (c.pc != 0x004FF3CCu) [[unlikely]] return; }
L_004FF3CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF3D4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 118u, depth + 1u); else { c.pc = 0x001BDBC0u; return; } if (c.pc != 0x004FF3D4u) [[unlikely]] return; }
L_004FF3D4:
    set32(c.r[3], 0u + 20000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], 0u + 15000u);
    st32((c.r[2].w[0] + 304u), c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF3FCu); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_002F(c, 112u, depth + 1u); else { c.pc = 0x001BDA80u; return; } if (c.pc != 0x004FF3FCu) [[unlikely]] return; }
L_004FF3FC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_004FF400:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FF36Cu | kUnwind; return; } goto L_004FF36C; }
    set32(c.r[4], ld32((c.r[20].w[0] + 260u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] + 22163u);
    set32(c.r[6], 0u + 70u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF428u); set32(c.r[7], c.r[7].w[0] + 22238u);  if (depth < kMaxDepth) unit_00C9(c, 151u, depth + 1u); else { c.pc = 0x00425150u; return; } if (c.pc != 0x004FF428u) [[unlikely]] return; }
L_004FF428:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF438u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 121u, depth + 1u); else { c.pc = 0x004692E0u; return; } if (c.pc != 0x004FF438u) [[unlikely]] return; }
L_004FF438:
    set32(c.r[4], ld32((c.r[20].w[0] + 260u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] + 22249u);
    set32(c.r[6], 0u + 5u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF454u); set32(c.r[7], c.r[7].w[0] + 22238u);  if (depth < kMaxDepth) unit_00C9(c, 151u, depth + 1u); else { c.pc = 0x00425150u; return; } if (c.pc != 0x004FF454u) [[unlikely]] return; }
L_004FF454:
    set32(c.r[4], ld32((c.r[20].w[0] + 260u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] + 22266u);
    set32(c.r[6], 0u + 5u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF470u); set32(c.r[7], c.r[7].w[0] + 22238u);  if (depth < kMaxDepth) unit_00C9(c, 151u, depth + 1u); else { c.pc = 0x00425150u; return; } if (c.pc != 0x004FF470u) [[unlikely]] return; }
L_004FF470:
    set32(c.r[4], ld32((c.r[20].w[0] + 260u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] + 22189u);
    set32(c.r[6], 0u + 5u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF48Cu); set32(c.r[7], c.r[7].w[0] + 22238u);  if (depth < kMaxDepth) unit_00C9(c, 151u, depth + 1u); else { c.pc = 0x00425150u; return; } if (c.pc != 0x004FF48Cu) [[unlikely]] return; }
L_004FF48C:
    set32(c.r[17], ld32((c.r[20].w[0] + 280u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[16].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_004FF500; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[20].w[0] + 280u), c.r[16].w[0]);  goto L_004FF4DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF4ACu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004FF4ACu) [[unlikely]] return; }
L_004FF4AC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF4BCu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004FF4BCu) [[unlikely]] return; }
L_004FF4BC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004FF4D8; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF4D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FF4D8u) [[unlikely]] return; }
L_004FF4D8:
    st32((c.r[20].w[0] + 280u), c.r[16].w[0]);
    c.budget -= 1;
L_004FF4DC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004FF4FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF4ECu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004FF4ECu) [[unlikely]] return; }
L_004FF4EC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF4FCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004FF4FCu) [[unlikely]] return; }
L_004FF4FC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_004FF500:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF508u); set32(c.r[5], 0u - 11u);  if (depth < kMaxDepth) unit_00C7(c, 340u, depth + 1u); else { c.pc = 0x0041F220u; return; } if (c.pc != 0x004FF508u) [[unlikely]] return; }
L_004FF508:
    set32(c.r[4], ld32((c.r[20].w[0] + 280u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF514u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 340u, depth + 1u); else { c.pc = 0x0041F220u; return; } if (c.pc != 0x004FF514u) [[unlikely]] return; }
L_004FF514:
    set32(c.r[4], ld32((c.r[20].w[0] + 324u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF520u); set32(c.r[5], c.r[20].w[0] + 104u);  if (depth < kMaxDepth) unit_00CE(c, 303u, depth + 1u); else { c.pc = 0x0043AD40u; return; } if (c.pc != 0x004FF520u) [[unlikely]] return; }
L_004FF520:
    set32(c.r[4], c.r[20].w[0] + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF52Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FF(c, 43u, depth + 1u); else { c.pc = 0x004FC7D0u; return; } if (c.pc != 0x004FF52Cu) [[unlikely]] return; }
L_004FF52C:
    set32(c.r[2], ld32((c.r[20].w[0] + 260u)));
    set32(c.r[4], 0u + 60u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF540u); st32((c.r[20].w[0] + 244u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004FF540u) [[unlikely]] return; }
L_004FF540:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 20u), c.r[2].w[0]);  goto L_004FF564; }
    set32(c.r[7], ld32((c.r[20].w[0] + 324u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[20].w[0] + 260u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF560u); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_00BD(c, 283u, depth + 1u); else { c.pc = 0x003F6940u; return; } if (c.pc != 0x004FF560u) [[unlikely]] return; }
L_004FF560:
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 1;
L_004FF564:
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF570u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000A(c, 391u, depth + 1u); else { c.pc = 0x0012B240u; return; } if (c.pc != 0x004FF570u) [[unlikely]] return; }
L_004FF570:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF57Cu); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0100(c, 28u, depth + 1u); else { c.pc = 0x00500380u; return; } if (c.pc != 0x004FF57Cu) [[unlikely]] return; }
L_004FF57C:
    st32((c.r[20].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF58Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x004FF58Cu) [[unlikely]] return; }
L_004FF58C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF594u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FF(c, 447u, depth + 1u); else { c.pc = 0x004FF5D0u; return; } if (c.pc != 0x004FF594u) [[unlikely]] return; }
L_004FF594:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF59Cu); set32(c.r[4], ld32((c.r[29].w[0] + 184u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004FF59Cu) [[unlikely]] return; }
L_004FF59C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_004FF5D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF5F0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D7(c, 348u, depth + 1u); else { c.pc = 0x0045F370u; return; } if (c.pc != 0x004FF5F0u) [[unlikely]] return; }
L_004FF5F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF5FCu); set32(c.r[4], c.r[4].w[0] + 22131u);  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x004FF5FCu) [[unlikely]] return; }
L_004FF5FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF604u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0100(c, 135u, depth + 1u); else { c.pc = 0x00500E20u; return; } if (c.pc != 0x004FF604u) [[unlikely]] return; }
L_004FF604:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004FF628; } }
L_004FF610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF618u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 279u, depth + 1u); else { c.pc = 0x0013A9F0u; return; } if (c.pc != 0x004FF618u) [[unlikely]] return; }
L_004FF618:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF624u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 67u, depth + 1u); else { c.pc = 0x00138E10u; return; } if (c.pc != 0x004FF624u) [[unlikely]] return; }
L_004FF624:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_004FF628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF630u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013A9E0u; return; } if (c.pc != 0x004FF630u) [[unlikely]] return; }
L_004FF630:
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FF610u | kUnwind; return; } goto L_004FF610; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF648u); set32(c.r[4], c.r[4].w[0] + 22285u);  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x004FF648u) [[unlikely]] return; }
L_004FF648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF650u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 36u, depth + 1u); else { c.pc = 0x003E0400u; return; } if (c.pc != 0x004FF650u) [[unlikely]] return; }
L_004FF650:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004FF6D4; } }
    set32(c.r[4], 0u + 164u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF668u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004FF668u) [[unlikely]] return; }
L_004FF668:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_004FF67C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF678u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 282u, depth + 1u); else { c.pc = 0x003BE570u; return; } if (c.pc != 0x004FF678u) [[unlikely]] return; }
L_004FF678:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004FF67C:
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF688u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 262u, depth + 1u); else { c.pc = 0x003BE2F0u; return; } if (c.pc != 0x004FF688u) [[unlikely]] return; }
L_004FF688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF690u); set32(c.r[4], ld32((c.r[16].w[0] + 100u)));  if (depth < kMaxDepth) unit_00AF(c, 274u, depth + 1u); else { c.pc = 0x003BE490u; return; } if (c.pc != 0x004FF690u) [[unlikely]] return; }
L_004FF690:
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 260u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF6A4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 267u, depth + 1u); else { c.pc = 0x003BE390u; return; } if (c.pc != 0x004FF6A4u) [[unlikely]] return; }
L_004FF6A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 22299u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF6B4u); st32((c.r[29].w[0] + 64u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x004FF6B4u) [[unlikely]] return; }
L_004FF6B4:
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 264u);
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF6C8u); set32(c.r[4], ld32((c.r[16].w[0] + 100u)));  if (depth < kMaxDepth) unit_00AF(c, 266u, depth + 1u); else { c.pc = 0x003BE370u; return; } if (c.pc != 0x004FF6C8u) [[unlikely]] return; }
L_004FF6C8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF6D4u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0100(c, 114u, depth + 1u); else { c.pc = 0x00500BE0u; return; } if (c.pc != 0x004FF6D4u) [[unlikely]] return; }
L_004FF6D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF6E0u); set32(c.r[4], c.r[4].w[0] + 22304u);  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x004FF6E0u) [[unlikely]] return; }
L_004FF6E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF6E8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 36u, depth + 1u); else { c.pc = 0x003E0400u; return; } if (c.pc != 0x004FF6E8u) [[unlikely]] return; }
L_004FF6E8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 340u)));  goto L_004FF718; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF700u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 67u, depth + 1u); else { c.pc = 0x00138E10u; return; } if (c.pc != 0x004FF700u) [[unlikely]] return; }
L_004FF700:
    set32(c.r[5], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF70Cu); set32(c.r[4], ld32((c.r[16].w[0] + 260u)));  if (depth < kMaxDepth) unit_00C9(c, 26u, depth + 1u); else { c.pc = 0x00424430u; return; } if (c.pc != 0x004FF70Cu) [[unlikely]] return; }
L_004FF70C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF714u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x004FF714u) [[unlikely]] return; }
L_004FF714:
    set32(c.r[4], ld32((c.r[16].w[0] + 340u)));
    c.budget -= 1;
L_004FF718:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF720u);  if (depth < kMaxDepth) unit_00BD(c, 197u, depth + 1u); else { c.pc = 0x003F5DD0u; return; } if (c.pc != 0x004FF720u) [[unlikely]] return; }
L_004FF720:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004FF740:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] << 1);
    c.budget -= 16;
L_004FF780:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[16], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_004FF790:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0] + 24u), 0u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FF790u | kUnwind; return; } goto L_004FF790; } }
    set32(c.r[4], 0u + 156u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF7B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004FF7B8u) [[unlikely]] return; }
L_004FF7B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  goto L_004FF7DC; }
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[5], c.r[17].w[0] << 2);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF7D8u); set32(c.r[5], ld32((c.r[2].w[0] + 52u)));  if (depth < kMaxDepth) unit_00CC(c, 1u, depth + 1u); else { c.pc = 0x00430000u; return; } if (c.pc != 0x004FF7D8u) [[unlikely]] return; }
L_004FF7D8:
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 1;
L_004FF7DC:
    set32(c.r[4], 0u + 84u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF7E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004FF7E8u) [[unlikely]] return; }
L_004FF7E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 28u), c.r[2].w[0]);  goto L_004FF80C; }
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[5], c.r[17].w[0] << 2);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF808u); set32(c.r[5], ld32((c.r[2].w[0] + 52u)));  if (depth < kMaxDepth) unit_00C0(c, 204u, depth + 1u); else { c.pc = 0x00403230u; return; } if (c.pc != 0x004FF808u) [[unlikely]] return; }
L_004FF808:
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 1;
L_004FF80C:
    set32(c.r[4], 0u + 792u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF818u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004FF818u) [[unlikely]] return; }
L_004FF818:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004FF838; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[5], c.r[17].w[0] << 2);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF838u); set32(c.r[5], ld32((c.r[2].w[0] + 52u)));  if (depth < kMaxDepth) unit_00F1(c, 37u, depth + 1u); else { c.pc = 0x004C43C0u; return; } if (c.pc != 0x004FF838u) [[unlikely]] return; }
L_004FF838:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 32u), c.r[2].w[0]);  goto L_004FF848; }
    set32(c.r[2], c.r[2].w[0] + 8u);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 2;
L_004FF848:
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[2].w[0] + 48u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FF780u | kUnwind; return; } goto L_004FF780; }
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF874u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 391u, depth + 1u); else { c.pc = 0x0012B240u; return; } if (c.pc != 0x004FF874u) [[unlikely]] return; }
L_004FF874:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF880u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0004(c, 343u, depth + 1u); else { c.pc = 0x00113B00u; return; } if (c.pc != 0x004FF880u) [[unlikely]] return; }
L_004FF880:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[5].w[0] + 22317u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF894u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0100(c, 46u, depth + 1u); else { c.pc = 0x005004E0u; return; } if (c.pc != 0x004FF894u) [[unlikely]] return; }
L_004FF894:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF8A8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 295u, depth + 1u); else { c.pc = 0x0012A6E0u; return; } if (c.pc != 0x004FF8A8u) [[unlikely]] return; }
L_004FF8A8:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 129u);  goto L_004FF8BC; }
    set32(c.r[5], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_004FF8BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF8C4u); set32(c.r[4], c.r[20].w[0] + 228u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004FF8C4u) [[unlikely]] return; }
L_004FF8C4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF8D0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FF(c, 414u, depth + 1u); else { c.pc = 0x004FF280u; return; } if (c.pc != 0x004FF8D0u) [[unlikely]] return; }
L_004FF8D0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF8E4u); set32(c.r[6], c.r[6].w[0] + 22319u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x004FF8E4u) [[unlikely]] return; }
L_004FF8E4:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF8FCu); set32(c.r[4], c.r[20].w[0] + 104u);  if (depth < kMaxDepth) unit_00FF(c, 23u, depth + 1u); else { c.pc = 0x004FC570u; return; } if (c.pc != 0x004FF8FCu) [[unlikely]] return; }
L_004FF8FC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF910u); set32(c.r[6], c.r[6].w[0] + 22348u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x004FF910u) [[unlikely]] return; }
L_004FF910:
    set32(c.r[4], 0u + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF91Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004FF91Cu) [[unlikely]] return; }
L_004FF91C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 12u), c.r[2].w[0]);  goto L_004FF938; }
    set32(c.r[3], ld32((c.r[20].w[0] + 260u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF934u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FE(c, 38u, depth + 1u); else { c.pc = 0x004F83E0u; return; } if (c.pc != 0x004FF934u) [[unlikely]] return; }
L_004FF934:
    st32((c.r[20].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_004FF938:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 260u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF94Cu); st32((c.r[29].w[0] + 204u), 0u);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004FF94Cu) [[unlikely]] return; }
L_004FF94C:
    st32((c.r[29].w[0] + 200u), c.r[2].w[0]);
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF960u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0060(c, 582u, depth + 1u); else { c.pc = 0x00283C30u; return; } if (c.pc != 0x004FF960u) [[unlikely]] return; }
L_004FF960:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF970u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FF970u) [[unlikely]] return; }
L_004FF970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF978u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 529u, depth + 1u); else { c.pc = 0x002836E0u; return; } if (c.pc != 0x004FF978u) [[unlikely]] return; }
L_004FF978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF980u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 474u, depth + 1u); else { c.pc = 0x00283090u; return; } if (c.pc != 0x004FF980u) [[unlikely]] return; }
L_004FF980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF988u); set32(c.r[4], ld32((c.r[29].w[0] + 200u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004FF988u) [[unlikely]] return; }
L_004FF988:
    set32(c.r[2], ld32((c.r[20].w[0] + 320u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 60u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[16], 0u + 256u);  goto L_004FF9A0; }
    set32(c.r[16], 0u + 128u);
    c.budget -= 1;
L_004FF9A0:
    set32(c.r[4], 0u + 136u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF9B0u); set32(c.r[18], c.r[16].w[0] >> 1);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004FF9B0u) [[unlikely]] return; }
L_004FF9B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004FF9D4; } }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF9D4u); set32(c.r[8], c.r[8].w[0] + 22229u);  if (depth < kMaxDepth) unit_00CC(c, 75u, depth + 1u); else { c.pc = 0x00430960u; return; } if (c.pc != 0x004FF9D4u) [[unlikely]] return; }
L_004FF9D4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[20].w[0] + 284u), c.r[2].w[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF9ECu); set32(c.r[6], c.r[6].w[0] + 22366u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x004FF9ECu) [[unlikely]] return; }
L_004FF9EC:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FF9F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004FF9F8u) [[unlikely]] return; }
L_004FF9F8:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFA04u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004FFA04u) [[unlikely]] return; }
L_004FFA04:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFA10u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x004FFA10u) [[unlikely]] return; }
L_004FFA10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_004FFA40:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[5].w[0] + 22396u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFA5Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004FFA5Cu) [[unlikely]] return; }
L_004FFA5C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFA68u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 37u, depth + 1u); else { c.pc = 0x00160510u; return; } if (c.pc != 0x004FFA68u) [[unlikely]] return; }
L_004FFA68:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    st32((c.r[28].w[0] - 22388u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFA7Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004FFA7Cu) [[unlikely]] return; }
L_004FFA7C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFA8Cu); set32(c.r[5], c.r[5].w[0] + 22409u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004FFA8Cu) [[unlikely]] return; }
L_004FFA8C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFA9Cu); set32(c.r[5], c.r[5].w[0] + 22425u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004FFA9Cu) [[unlikely]] return; }
L_004FFA9C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFAACu); set32(c.r[5], c.r[5].w[0] + 22425u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004FFAACu) [[unlikely]] return; }
L_004FFAAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFAB4u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0017(c, 335u, depth + 1u); else { c.pc = 0x0015F140u; return; } if (c.pc != 0x004FFAB4u) [[unlikely]] return; }
L_004FFAB4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFAC0u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0017(c, 335u, depth + 1u); else { c.pc = 0x0015F140u; return; } if (c.pc != 0x004FFAC0u) [[unlikely]] return; }
L_004FFAC0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] + 22431u);
    set32(c.r[8], c.r[8].w[0] + 22441u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFAE4u); c.r[9].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0018(c, 37u, depth + 1u); else { c.pc = 0x00160510u; return; } if (c.pc != 0x004FFAE4u) [[unlikely]] return; }
L_004FFAE4:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    st32((c.r[28].w[0] - 22384u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFAF8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004FFAF8u) [[unlikely]] return; }
L_004FFAF8:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFB04u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004FFB04u) [[unlikely]] return; }
L_004FFB04:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFB10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004FFB10u) [[unlikely]] return; }
L_004FFB10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004FFB20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_004FFDB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 22960u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[19].w[0] + 284u)));
    c.budget -= 6;
    if (c.r[17].d[0] == 0ull) { st32((c.r[19].w[0] + 284u), 0u);  goto L_004FFC0C; }
    set32(c.r[2], c.r[17].w[0] + 8u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004FFBB4; } }
    set32(c.r[2], c.r[17].w[0] + 92u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004FFBB4; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004FFBB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFB88u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004FFB88u) [[unlikely]] return; }
L_004FFB88:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFB98u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004FFB98u) [[unlikely]] return; }
L_004FFB98:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004FFBB4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFBB4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FFBB4u) [[unlikely]] return; }
L_004FFBB4:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004FFC00; }
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004FFBFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFBD0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004FFBD0u) [[unlikely]] return; }
L_004FFBD0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFBE0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004FFBE0u) [[unlikely]] return; }
L_004FFBE0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004FFBFC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFBFCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FFBFCu) [[unlikely]] return; }
L_004FFBFC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004FFC00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFC08u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004FFC08u) [[unlikely]] return; }
L_004FFC08:
    st32((c.r[19].w[0] + 284u), 0u);
    c.budget -= 1;
L_004FFC0C:
    set32(c.r[4], ld32((c.r[19].w[0] + 340u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[19].w[0] + 340u), 0u);  goto L_004FFC2C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFC28u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FFC28u) [[unlikely]] return; }
L_004FFC28:
    st32((c.r[19].w[0] + 340u), 0u);
    c.budget -= 1;
L_004FFC2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFC34u);  if (depth < kMaxDepth) unit_00BE(c, 106u, depth + 1u); else { c.pc = 0x003F9570u; return; } if (c.pc != 0x004FFC34u) [[unlikely]] return; }
L_004FFC34:
    set32(c.r[4], ld32((c.r[19].w[0] + 320u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[19].w[0] + 320u), 0u);  goto L_004FFC54; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFC50u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FFC50u) [[unlikely]] return; }
L_004FFC50:
    st32((c.r[19].w[0] + 320u), 0u);
    c.budget -= 1;
L_004FFC54:
    set32(c.r[4], ld32((c.r[19].w[0] + 324u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFC60u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00CE(c, 313u, depth + 1u); else { c.pc = 0x0043AE00u; return; } if (c.pc != 0x004FFC60u) [[unlikely]] return; }
L_004FFC60:
    st32((c.r[19].w[0] + 324u), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 260u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { st32((c.r[19].w[0] + 260u), 0u);  goto L_004FFC84; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFC80u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FFC80u) [[unlikely]] return; }
L_004FFC80:
    st32((c.r[19].w[0] + 260u), 0u);
    c.budget -= 1;
L_004FFC84:
    set32(c.r[4], ld32((c.r[19].w[0] + 312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFC90u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0102(c, 347u, depth + 1u); else { c.pc = 0x0050B9F0u; return; } if (c.pc != 0x004FFC90u) [[unlikely]] return; }
L_004FFC90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFC98u);  if (depth < kMaxDepth) unit_00D4(c, 175u, depth + 1u); else { c.pc = 0x00451420u; return; } if (c.pc != 0x004FFC98u) [[unlikely]] return; }
L_004FFC98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFCA0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CE(c, 202u, depth + 1u); else { c.pc = 0x00439990u; return; } if (c.pc != 0x004FFCA0u) [[unlikely]] return; }
L_004FFCA0:
    set32(c.r[4], c.r[19].w[0] + 344u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FFCD0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FFCD0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FFCD0; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 356u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004FFCD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFCD0u);  if (depth < kMaxDepth) unit_0100(c, 168u, depth + 1u); else { c.pc = 0x005012C0u; return; } if (c.pc != 0x004FFCD0u) [[unlikely]] return; }
L_004FFCD0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], c.r[19].w[0] + 288u);
    set32(c.r[5], c.r[5].w[0] + 736u);
    set32(c.r[6], 0u + 12u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFCE8u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_00A5(c, 157u, depth + 1u); else { c.pc = 0x00397E80u; return; } if (c.pc != 0x004FFCE8u) [[unlikely]] return; }
L_004FFCE8:
    set32(c.r[2], c.r[19].w[0] + 280u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] + 264u);  goto L_004FFD38; }
    set32(c.r[16], ld32((c.r[19].w[0] + 280u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004FFD34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFD08u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004FFD08u) [[unlikely]] return; }
L_004FFD08:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFD18u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004FFD18u) [[unlikely]] return; }
L_004FFD18:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004FFD34; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFD34u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FFD34u) [[unlikely]] return; }
L_004FFD34:
    set32(c.r[2], c.r[19].w[0] + 264u);
    c.budget -= 1;
L_004FFD38:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[19].w[0] + 104u);  goto L_004FFD78; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004FFD74; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004FFD74; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004FFD74; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 276u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FFD74; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FFD74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFD74u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004FFD74u) [[unlikely]] return; }
L_004FFD74:
    set32(c.r[4], c.r[19].w[0] + 104u);
    c.budget -= 1;
L_004FFD78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFD80u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00FF(c, 46u, depth + 1u); else { c.pc = 0x004FC810u; return; } if (c.pc != 0x004FFD80u) [[unlikely]] return; }
L_004FFD80:
    set32(c.r[4], c.r[19].w[0] + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFD8Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00B8(c, 21u, depth + 1u); else { c.pc = 0x003E0240u; return; } if (c.pc != 0x004FFD8Cu) [[unlikely]] return; }
L_004FFD8C:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_004FFDA4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 22240u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 4;
L_004FFDA4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_004FFDBC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFDB8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004FFDB8u) [[unlikely]] return; }
L_004FFDB8:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_004FFDBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004FFDE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[3].w[0] - 22240u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 22960u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 12u), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFE1Cu); set32(c.r[4], c.r[16].w[0] + 56u);  if (depth < kMaxDepth) unit_00B8(c, 29u, depth + 1u); else { c.pc = 0x003E0350u; return; } if (c.pc != 0x004FFE1Cu) [[unlikely]] return; }
L_004FFE1C:
    set32(c.r[4], c.r[16].w[0] + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFE28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00FF(c, 53u, depth + 1u); else { c.pc = 0x004FC930u; return; } if (c.pc != 0x004FFE28u) [[unlikely]] return; }
L_004FFE28:
    set32(c.r[18], c.r[16].w[0] + 264u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFE34u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x004FFE34u) [[unlikely]] return; }
L_004FFE34:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_004FFE4C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFE48u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x004FFE48u) [[unlikely]] return; }
L_004FFE48:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_004FFE4C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[18].w[0]), c.r[2].w[0]);  goto L_004FFE60; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFE5Cu);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x004FFE5Cu) [[unlikely]] return; }
L_004FFE5C:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_004FFE60:
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 4u), 0u);
    st32((c.r[18].w[0] + 8u), 0u);
    st32((c.r[18].w[0] + 12u), 0u);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 280u), 0u);  if (t) { goto L_004FFE90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFE80u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004FFE80u) [[unlikely]] return; }
L_004FFE80:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFE90u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004FFE90u) [[unlikely]] return; }
L_004FFE90:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], c.r[16].w[0] + 288u);
    set32(c.r[5], c.r[5].w[0] + 864u);
    set32(c.r[6], c.r[6].w[0] + 736u);
    set32(c.r[7], 0u + 12u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFEB0u); set32(c.r[8], 0u + 2u);  if (depth < kMaxDepth) unit_00A5(c, 152u, depth + 1u); else { c.pc = 0x00397DB0u; return; } if (c.pc != 0x004FFEB0u) [[unlikely]] return; }
L_004FFEB0:
    st32((c.r[16].w[0] + 312u), 0u);
    set32(c.r[4], c.r[16].w[0] + 344u);
    st32((c.r[16].w[0] + 316u), 0u);
    set32(c.r[5], c.r[29].w[0] + 76u);
    set32(c.r[6], c.r[29].w[0] + 72u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFECCu); st32((c.r[29].w[0] + 72u), 0u);  if (depth < kMaxDepth) unit_0100(c, 205u, depth + 1u); else { c.pc = 0x00501550u; return; } if (c.pc != 0x004FFECCu) [[unlikely]] return; }
L_004FFECC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 96u), 0u);
    st8((c.r[16].w[0] + 328u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 337u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 100u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFEF0u); st32((c.r[16].w[0] + 16u), 0u);  if (depth < kMaxDepth) unit_00CE(c, 202u, depth + 1u); else { c.pc = 0x00439990u; return; } if (c.pc != 0x004FFEF0u) [[unlikely]] return; }
L_004FFEF0:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFEFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004FFEFCu) [[unlikely]] return; }
L_004FFEFC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 324u), c.r[2].w[0]);  goto L_004FFF10; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFF0Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CE(c, 315u, depth + 1u); else { c.pc = 0x0043AE50u; return; } if (c.pc != 0x004FFF0Cu) [[unlikely]] return; }
L_004FFF0C:
    st32((c.r[16].w[0] + 324u), c.r[2].w[0]);
    c.budget -= 1;
L_004FFF10:
    set32(c.r[4], 0u + 116u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFF1Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004FFF1Cu) [[unlikely]] return; }
L_004FFF1C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 320u), c.r[2].w[0]);  goto L_004FFF34; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFF30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00F4(c, 246u, depth + 1u); else { c.pc = 0x004D2210u; return; } if (c.pc != 0x004FFF30u) [[unlikely]] return; }
L_004FFF30:
    st32((c.r[16].w[0] + 320u), c.r[2].w[0]);
    c.budget -= 1;
L_004FFF34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFF3Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 109u, depth + 1u); else { c.pc = 0x003F95A0u; return; } if (c.pc != 0x004FFF3Cu) [[unlikely]] return; }
L_004FFF3C:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFF48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004FFF48u) [[unlikely]] return; }
L_004FFF48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 340u), c.r[2].w[0]);  goto L_004FFF60; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FFF5Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 239u, depth + 1u); else { c.pc = 0x003F6290u; return; } if (c.pc != 0x004FFF5Cu) [[unlikely]] return; }
L_004FFF5C:
    st32((c.r[16].w[0] + 340u), c.r[2].w[0]);
    c.budget -= 1;
L_004FFF60:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[5].w[0] << 1);
    c.budget -= 2;
L_004FFF68:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_004FFF78:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[2].w[0] + 24u), 0u);
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004FFF78u | kUnwind; return; } goto L_004FFF78; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[5].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FFF68u | kUnwind; return; } goto L_004FFF68; }
    st32((c.r[16].w[0] + 284u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004FFFD0:
    set32(c.r[29], c.r[29].w[0] - 304u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.budget -= 12;
    [[clang::musttail]] return unit_0100(c, 1u, depth);
}

}
