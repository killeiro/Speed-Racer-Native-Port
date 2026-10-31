#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00DF[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0,
    16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0,
    0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 55, 0, 0, 0, 56,
    0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0,
    64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 67, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 70, 0, 0, 71, 0,
    0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 79, 0, 0, 0,
    0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 86, 0, 0, 87,
    0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 92, 0, 0, 93, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102,
    0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0,
    0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0,
    115, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0,
    0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0,
    0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0,
    0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 133,
    0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0,
    137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0,
    0, 145, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0,
    153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0,
    157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 161, 0, 0, 0, 0, 0,
    162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0,
    176, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184,
    0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0,
    0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0,
    0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0,
    0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0,
    0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0,
    0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0,
    0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0,
    234, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0,
    0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0,
    0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 252, 0, 0, 0,
    253, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0,
    259, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0,
    267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0,
    0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0,
    272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 276, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 279,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0, 0, 286, 0, 0, 287, 0,
    0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0,
    294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0,
    298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 0, 310, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0,
    0, 313, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0,
    0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0,
    322, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 327, 0,
    0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 332, 0, 0, 0, 0, 0, 333, 0, 0,
    0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 0,
    338, 0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0,
    0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 346, 0, 347, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0,
    0, 350, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 356, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0,
    0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0,
    0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0,
    371, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0,
    378, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0,
    0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0,
    0, 398, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 402,
    0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 409, 0, 0, 0, 0, 0, 410,
    0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 424, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0,
    428, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0,
    0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0,
    0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0,
    449, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 451, 0, 0, 0, 452, 0, 0, 0, 453, 0, 0, 0, 454, 0, 0, 0, 455, 0, 0, 0,
    456, 0, 0, 0, 457, 0, 0, 0, 458, 0, 0, 0, 459, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    466, 0, 0, 0, 467, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0,
    471, 0, 472, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0,
    0, 0, 476, 0, 0, 477, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0,
    0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 484, 0, 0, 0, 0,
    0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 489,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 492, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0,
};

void unit_00DF(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0047C000;
    case 2u: goto L_0047C030;
    case 3u: goto L_0047C058;
    case 4u: goto L_0047C06C;
    case 5u: goto L_0047C098;
    case 6u: goto L_0047C10C;
    case 7u: goto L_0047C124;
    case 8u: goto L_0047C13C;
    case 9u: goto L_0047C150;
    case 10u: goto L_0047C168;
    case 11u: goto L_0047C198;
    case 12u: goto L_0047C1C8;
    case 13u: goto L_0047C23C;
    case 14u: goto L_0047C254;
    case 15u: goto L_0047C26C;
    case 16u: goto L_0047C280;
    case 17u: goto L_0047C298;
    case 18u: goto L_0047C2C8;
    case 19u: goto L_0047C2E4;
    case 20u: goto L_0047C318;
    case 21u: goto L_0047C328;
    case 22u: goto L_0047C354;
    case 23u: goto L_0047C36C;
    case 24u: goto L_0047C378;
    case 25u: goto L_0047C3BC;
    case 26u: goto L_0047C42C;
    case 27u: goto L_0047C444;
    case 28u: goto L_0047C45C;
    case 29u: goto L_0047C470;
    case 30u: goto L_0047C488;
    case 31u: goto L_0047C4B8;
    case 32u: goto L_0047C4CC;
    case 33u: goto L_0047C4F0;
    case 34u: goto L_0047C51C;
    case 35u: goto L_0047C58C;
    case 36u: goto L_0047C5A4;
    case 37u: goto L_0047C5BC;
    case 38u: goto L_0047C5D0;
    case 39u: goto L_0047C5E8;
    case 40u: goto L_0047C618;
    case 41u: goto L_0047C63C;
    case 42u: goto L_0047C64C;
    case 43u: goto L_0047C660;
    case 44u: goto L_0047C688;
    case 45u: goto L_0047C698;
    case 46u: goto L_0047C6C4;
    case 47u: goto L_0047C734;
    case 48u: goto L_0047C74C;
    case 49u: goto L_0047C764;
    case 50u: goto L_0047C778;
    case 51u: goto L_0047C790;
    case 52u: goto L_0047C7C0;
    case 53u: goto L_0047C7D4;
    case 54u: goto L_0047C7E0;
    case 55u: goto L_0047C7EC;
    case 56u: goto L_0047C7FC;
    case 57u: goto L_0047C814;
    case 58u: goto L_0047C838;
    case 59u: goto L_0047C854;
    case 60u: goto L_0047C868;
    case 61u: goto L_0047C8B0;
    case 62u: goto L_0047C8D4;
    case 63u: goto L_0047C8E8;
    case 64u: goto L_0047C900;
    case 65u: goto L_0047C928;
    case 66u: goto L_0047C934;
    case 67u: goto L_0047C93C;
    case 68u: goto L_0047C950;
    case 69u: goto L_0047C958;
    case 70u: goto L_0047C96C;
    case 71u: goto L_0047C978;
    case 72u: goto L_0047C990;
    case 73u: goto L_0047C9B0;
    case 74u: goto L_0047C9D8;
    case 75u: goto L_0047C9F0;
    case 76u: goto L_0047CA20;
    case 77u: goto L_0047CA58;
    case 78u: goto L_0047CA64;
    case 79u: goto L_0047CA70;
    case 80u: goto L_0047CA8C;
    case 81u: goto L_0047CAA8;
    case 82u: goto L_0047CAB0;
    case 83u: goto L_0047CAC4;
    case 84u: goto L_0047CAE0;
    case 85u: goto L_0047CAE8;
    case 86u: goto L_0047CAF0;
    case 87u: goto L_0047CAFC;
    case 88u: goto L_0047CB10;
    case 89u: goto L_0047CB30;
    case 90u: goto L_0047CB50;
    case 91u: goto L_0047CB68;
    case 92u: goto L_0047CB90;
    case 93u: goto L_0047CB9C;
    case 94u: goto L_0047CBA4;
    case 95u: goto L_0047CBC0;
    case 96u: goto L_0047CBD4;
    case 97u: goto L_0047CC00;
    case 98u: goto L_0047CC20;
    case 99u: goto L_0047CC54;
    case 100u: goto L_0047CC90;
    case 101u: goto L_0047CCB0;
    case 102u: goto L_0047CCFC;
    case 103u: goto L_0047CD10;
    case 104u: goto L_0047CD34;
    case 105u: goto L_0047CD40;
    case 106u: goto L_0047CD64;
    case 107u: goto L_0047CD70;
    case 108u: goto L_0047CDB4;
    case 109u: goto L_0047CDF0;
    case 110u: goto L_0047CE10;
    case 111u: goto L_0047CE34;
    case 112u: goto L_0047CE44;
    case 113u: goto L_0047CE58;
    case 114u: goto L_0047CE74;
    case 115u: goto L_0047CE80;
    case 116u: goto L_0047CE88;
    case 117u: goto L_0047CE9C;
    case 118u: goto L_0047CEB4;
    case 119u: goto L_0047CED0;
    case 120u: goto L_0047CEF8;
    case 121u: goto L_0047CF08;
    case 122u: goto L_0047CF20;
    case 123u: goto L_0047CF3C;
    case 124u: goto L_0047CF6C;
    case 125u: goto L_0047CF84;
    case 126u: goto L_0047CFA0;
    case 127u: goto L_0047CFAC;
    case 128u: goto L_0047CFF0;
    case 129u: goto L_0047D008;
    case 130u: goto L_0047D014;
    case 131u: goto L_0047D05C;
    case 132u: goto L_0047D06C;
    case 133u: goto L_0047D07C;
    case 134u: goto L_0047D0A0;
    case 135u: goto L_0047D0C8;
    case 136u: goto L_0047D0E0;
    case 137u: goto L_0047D100;
    case 138u: goto L_0047D134;
    case 139u: goto L_0047D14C;
    case 140u: goto L_0047D17C;
    case 141u: goto L_0047D1B4;
    case 142u: goto L_0047D1C0;
    case 143u: goto L_0047D1CC;
    case 144u: goto L_0047D1E8;
    case 145u: goto L_0047D204;
    case 146u: goto L_0047D20C;
    case 147u: goto L_0047D220;
    case 148u: goto L_0047D23C;
    case 149u: goto L_0047D244;
    case 150u: goto L_0047D258;
    case 151u: goto L_0047D280;
    case 152u: goto L_0047D2E8;
    case 153u: goto L_0047D300;
    case 154u: goto L_0047D320;
    case 155u: goto L_0047D360;
    case 156u: goto L_0047D370;
    case 157u: goto L_0047D380;
    case 158u: goto L_0047D3B4;
    case 159u: goto L_0047D3C8;
    case 160u: goto L_0047D3E0;
    case 161u: goto L_0047D3E8;
    case 162u: goto L_0047D400;
    case 163u: goto L_0047D41C;
    case 164u: goto L_0047D434;
    case 165u: goto L_0047D484;
    case 166u: goto L_0047D4B4;
    case 167u: goto L_0047D504;
    case 168u: goto L_0047D534;
    case 169u: goto L_0047D558;
    case 170u: goto L_0047D568;
    case 171u: goto L_0047D590;
    case 172u: goto L_0047D5C0;
    case 173u: goto L_0047D5D8;
    case 174u: goto L_0047D620;
    case 175u: goto L_0047D668;
    case 176u: goto L_0047D680;
    case 177u: goto L_0047D6A4;
    case 178u: goto L_0047D6AC;
    case 179u: goto L_0047D6C0;
    case 180u: goto L_0047D6F8;
    case 181u: goto L_0047D720;
    case 182u: goto L_0047D740;
    case 183u: goto L_0047D75C;
    case 184u: goto L_0047D77C;
    case 185u: goto L_0047D798;
    case 186u: goto L_0047D7A8;
    case 187u: goto L_0047D7B4;
    case 188u: goto L_0047D7F0;
    case 189u: goto L_0047D818;
    case 190u: goto L_0047D838;
    case 191u: goto L_0047D854;
    case 192u: goto L_0047D874;
    case 193u: goto L_0047D890;
    case 194u: goto L_0047D8A0;
    case 195u: goto L_0047D8AC;
    case 196u: goto L_0047D8C0;
    case 197u: goto L_0047D8E0;
    case 198u: goto L_0047D904;
    case 199u: goto L_0047D950;
    case 200u: goto L_0047D968;
    case 201u: goto L_0047D984;
    case 202u: goto L_0047D9A0;
    case 203u: goto L_0047D9AC;
    case 204u: goto L_0047D9D0;
    case 205u: goto L_0047D9F4;
    case 206u: goto L_0047DA0C;
    case 207u: goto L_0047DA28;
    case 208u: goto L_0047DA34;
    case 209u: goto L_0047DA6C;
    case 210u: goto L_0047DA94;
    case 211u: goto L_0047DAB4;
    case 212u: goto L_0047DB10;
    case 213u: goto L_0047DB38;
    case 214u: goto L_0047DB58;
    case 215u: goto L_0047DBA4;
    case 216u: goto L_0047DBC0;
    case 217u: goto L_0047DBF0;
    case 218u: goto L_0047DC10;
    case 219u: goto L_0047DC20;
    case 220u: goto L_0047DC8C;
    case 221u: goto L_0047DC9C;
    case 222u: goto L_0047DCC0;
    case 223u: goto L_0047DCD0;
    case 224u: goto L_0047DD04;
    case 225u: goto L_0047DD34;
    case 226u: goto L_0047DD40;
    case 227u: goto L_0047DD64;
    case 228u: goto L_0047DD84;
    case 229u: goto L_0047DDAC;
    case 230u: goto L_0047DDD0;
    case 231u: goto L_0047DDF0;
    case 232u: goto L_0047DE58;
    case 233u: goto L_0047DE6C;
    case 234u: goto L_0047DE80;
    case 235u: goto L_0047DE94;
    case 236u: goto L_0047DEA0;
    case 237u: goto L_0047DEB8;
    case 238u: goto L_0047DED0;
    case 239u: goto L_0047DEEC;
    case 240u: goto L_0047DF34;
    case 241u: goto L_0047DF40;
    case 242u: goto L_0047DF4C;
    case 243u: goto L_0047DF74;
    case 244u: goto L_0047DF90;
    case 245u: goto L_0047DFB4;
    case 246u: goto L_0047DFD0;
    case 247u: goto L_0047DFF4;
    case 248u: goto L_0047E00C;
    case 249u: goto L_0047E030;
    case 250u: goto L_0047E040;
    case 251u: goto L_0047E064;
    case 252u: goto L_0047E070;
    case 253u: goto L_0047E080;
    case 254u: goto L_0047E090;
    case 255u: goto L_0047E0B4;
    case 256u: goto L_0047E0C0;
    case 257u: goto L_0047E0E4;
    case 258u: goto L_0047E0F0;
    case 259u: goto L_0047E100;
    case 260u: goto L_0047E110;
    case 261u: goto L_0047E120;
    case 262u: goto L_0047E130;
    case 263u: goto L_0047E140;
    case 264u: goto L_0047E150;
    case 265u: goto L_0047E160;
    case 266u: goto L_0047E170;
    case 267u: goto L_0047E180;
    case 268u: goto L_0047E1F8;
    case 269u: goto L_0047E210;
    case 270u: goto L_0047E230;
    case 271u: goto L_0047E270;
    case 272u: goto L_0047E280;
    case 273u: goto L_0047E2BC;
    case 274u: goto L_0047E2E0;
    case 275u: goto L_0047E324;
    case 276u: goto L_0047E340;
    case 277u: goto L_0047E34C;
    case 278u: goto L_0047E370;
    case 279u: goto L_0047E37C;
    case 280u: goto L_0047E3A4;
    case 281u: goto L_0047E3D0;
    case 282u: goto L_0047E414;
    case 283u: goto L_0047E434;
    case 284u: goto L_0047E450;
    case 285u: goto L_0047E45C;
    case 286u: goto L_0047E46C;
    case 287u: goto L_0047E478;
    case 288u: goto L_0047E49C;
    case 289u: goto L_0047E4C8;
    case 290u: goto L_0047E524;
    case 291u: goto L_0047E53C;
    case 292u: goto L_0047E554;
    case 293u: goto L_0047E568;
    case 294u: goto L_0047E580;
    case 295u: goto L_0047E5B0;
    case 296u: goto L_0047E5C0;
    case 297u: goto L_0047E65C;
    case 298u: goto L_0047E680;
    case 299u: goto L_0047E6D0;
    case 300u: goto L_0047E720;
    case 301u: goto L_0047E738;
    case 302u: goto L_0047E750;
    case 303u: goto L_0047E764;
    case 304u: goto L_0047E77C;
    case 305u: goto L_0047E7AC;
    case 306u: goto L_0047E7D0;
    case 307u: goto L_0047E844;
    case 308u: goto L_0047E850;
    case 309u: goto L_0047E86C;
    case 310u: goto L_0047E878;
    case 311u: goto L_0047E8B0;
    case 312u: goto L_0047E8EC;
    case 313u: goto L_0047E904;
    case 314u: goto L_0047E920;
    case 315u: goto L_0047E944;
    case 316u: goto L_0047E960;
    case 317u: goto L_0047E984;
    case 318u: goto L_0047E99C;
    case 319u: goto L_0047E9C0;
    case 320u: goto L_0047E9D0;
    case 321u: goto L_0047E9F4;
    case 322u: goto L_0047EA00;
    case 323u: goto L_0047EA10;
    case 324u: goto L_0047EA20;
    case 325u: goto L_0047EA30;
    case 326u: goto L_0047EA60;
    case 327u: goto L_0047EA78;
    case 328u: goto L_0047EA90;
    case 329u: goto L_0047EAC8;
    case 330u: goto L_0047EAE4;
    case 331u: goto L_0047EB50;
    case 332u: goto L_0047EB5C;
    case 333u: goto L_0047EB74;
    case 334u: goto L_0047EB98;
    case 335u: goto L_0047EBBC;
    case 336u: goto L_0047EBD8;
    case 337u: goto L_0047EBF0;
    case 338u: goto L_0047EC00;
    case 339u: goto L_0047EC14;
    case 340u: goto L_0047EC28;
    case 341u: goto L_0047EC34;
    case 342u: goto L_0047EC48;
    case 343u: goto L_0047EC6C;
    case 344u: goto L_0047EC90;
    case 345u: goto L_0047ECD0;
    case 346u: goto L_0047ECDC;
    case 347u: goto L_0047ECE4;
    case 348u: goto L_0047ED1C;
    case 349u: goto L_0047ED6C;
    case 350u: goto L_0047ED84;
    case 351u: goto L_0047ED9C;
    case 352u: goto L_0047EDB0;
    case 353u: goto L_0047EDC8;
    case 354u: goto L_0047EDF8;
    case 355u: goto L_0047EEC0;
    case 356u: goto L_0047EED4;
    case 357u: goto L_0047EEDC;
    case 358u: goto L_0047EEF0;
    case 359u: goto L_0047EF14;
    case 360u: goto L_0047EF30;
    case 361u: goto L_0047EF54;
    case 362u: goto L_0047EF6C;
    case 363u: goto L_0047EF90;
    case 364u: goto L_0047EFA0;
    case 365u: goto L_0047EFC4;
    case 366u: goto L_0047EFD0;
    case 367u: goto L_0047EFE0;
    case 368u: goto L_0047EFF0;
    case 369u: goto L_0047F050;
    case 370u: goto L_0047F068;
    case 371u: goto L_0047F080;
    case 372u: goto L_0047F0A4;
    case 373u: goto L_0047F0B0;
    case 374u: goto L_0047F0C0;
    case 375u: goto L_0047F0D0;
    case 376u: goto L_0047F0E0;
    case 377u: goto L_0047F0F0;
    case 378u: goto L_0047F100;
    case 379u: goto L_0047F110;
    case 380u: goto L_0047F120;
    case 381u: goto L_0047F130;
    case 382u: goto L_0047F140;
    case 383u: goto L_0047F1B8;
    case 384u: goto L_0047F1D0;
    case 385u: goto L_0047F1F0;
    case 386u: goto L_0047F230;
    case 387u: goto L_0047F240;
    case 388u: goto L_0047F250;
    case 389u: goto L_0047F284;
    case 390u: goto L_0047F29C;
    case 391u: goto L_0047F2F0;
    case 392u: goto L_0047F310;
    case 393u: goto L_0047F34C;
    case 394u: goto L_0047F354;
    case 395u: goto L_0047F384;
    case 396u: goto L_0047F3D4;
    case 397u: goto L_0047F3EC;
    case 398u: goto L_0047F404;
    case 399u: goto L_0047F418;
    case 400u: goto L_0047F430;
    case 401u: goto L_0047F460;
    case 402u: goto L_0047F47C;
    case 403u: goto L_0047F488;
    case 404u: goto L_0047F4AC;
    case 405u: goto L_0047F4B8;
    case 406u: goto L_0047F4CC;
    case 407u: goto L_0047F530;
    case 408u: goto L_0047F55C;
    case 409u: goto L_0047F564;
    case 410u: goto L_0047F57C;
    case 411u: goto L_0047F590;
    case 412u: goto L_0047F5BC;
    case 413u: goto L_0047F610;
    case 414u: goto L_0047F628;
    case 415u: goto L_0047F640;
    case 416u: goto L_0047F654;
    case 417u: goto L_0047F66C;
    case 418u: goto L_0047F69C;
    case 419u: goto L_0047F6E0;
    case 420u: goto L_0047F718;
    case 421u: goto L_0047F728;
    case 422u: goto L_0047F73C;
    case 423u: goto L_0047F74C;
    case 424u: goto L_0047F754;
    case 425u: goto L_0047F764;
    case 426u: goto L_0047F798;
    case 427u: goto L_0047F7E8;
    case 428u: goto L_0047F800;
    case 429u: goto L_0047F818;
    case 430u: goto L_0047F82C;
    case 431u: goto L_0047F844;
    case 432u: goto L_0047F874;
    case 433u: goto L_0047F8A0;
    case 434u: goto L_0047F8F8;
    case 435u: goto L_0047F910;
    case 436u: goto L_0047F928;
    case 437u: goto L_0047F93C;
    case 438u: goto L_0047F954;
    case 439u: goto L_0047F984;
    case 440u: goto L_0047F9C0;
    case 441u: goto L_0047FA20;
    case 442u: goto L_0047FA38;
    case 443u: goto L_0047FA50;
    case 444u: goto L_0047FA74;
    case 445u: goto L_0047FA90;
    case 446u: goto L_0047FAB4;
    case 447u: goto L_0047FACC;
    case 448u: goto L_0047FAF0;
    case 449u: goto L_0047FB00;
    case 450u: goto L_0047FB24;
    case 451u: goto L_0047FB30;
    case 452u: goto L_0047FB40;
    case 453u: goto L_0047FB50;
    case 454u: goto L_0047FB60;
    case 455u: goto L_0047FB70;
    case 456u: goto L_0047FB80;
    case 457u: goto L_0047FB90;
    case 458u: goto L_0047FBA0;
    case 459u: goto L_0047FBB0;
    case 460u: goto L_0047FBC0;
    case 461u: goto L_0047FBD0;
    case 462u: goto L_0047FBE0;
    case 463u: goto L_0047FC10;
    case 464u: goto L_0047FC28;
    case 465u: goto L_0047FC40;
    case 466u: goto L_0047FC80;
    case 467u: goto L_0047FC90;
    case 468u: goto L_0047FCA0;
    case 469u: goto L_0047FCD4;
    case 470u: goto L_0047FCE8;
    case 471u: goto L_0047FD00;
    case 472u: goto L_0047FD08;
    case 473u: goto L_0047FD20;
    case 474u: goto L_0047FD44;
    case 475u: goto L_0047FD64;
    case 476u: goto L_0047FD88;
    case 477u: goto L_0047FD94;
    case 478u: goto L_0047FDAC;
    case 479u: goto L_0047FDD0;
    case 480u: goto L_0047FDF0;
    case 481u: goto L_0047FE14;
    case 482u: goto L_0047FE34;
    case 483u: goto L_0047FE58;
    case 484u: goto L_0047FE6C;
    case 485u: goto L_0047FE90;
    case 486u: goto L_0047FEA8;
    case 487u: goto L_0047FED0;
    case 488u: goto L_0047FEE4;
    case 489u: goto L_0047FEFC;
    case 490u: goto L_0047FF24;
    case 491u: goto L_0047FF50;
    case 492u: goto L_0047FF84;
    case 493u: goto L_0047FF8C;
    case 494u: goto L_0047FFD4;
    case 495u: goto L_0047FFE8;
    default: bad_entry(c, 0x0047C000u); return;
    }
L_0047C000:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);  goto L_0047C1A0; }
    set32(c.r[2], ld32((c.r[29].w[0] + 380u)));
    set32(c.r[3], c.r[21].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[3].w[0] + 1u);  goto L_0047C028; }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_0047C028:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C030u); set32(c.r[4], ld32((c.r[28].w[0] - 22676u)));  if (depth < kMaxDepth) unit_00F9(c, 217u, depth + 1u); else { c.pc = 0x004E5F30u; return; } if (c.pc != 0x0047C030u) [[unlikely]] return; }
L_0047C030:
    set32(c.r[3], c.r[2].w[0] + 132u);
    set32(c.r[2], ld32((c.r[2].w[0] + 132u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[3].w[0] + 1u);  goto L_0047C048; }
    set32(c.r[6], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_0047C048:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C058u); set32(c.r[5], c.r[5].w[0] - 24747u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x0047C058u) [[unlikely]] return; }
L_0047C058:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 116u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C06Cu); set32(c.r[5], c.r[29].w[0] + 384u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047C06Cu) [[unlikely]] return; }
L_0047C06C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 340u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 360u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 336u), c.r[2].w[0]);
    set32(c.r[2], 0u + 64u);
    st32((c.r[29].w[0] + 356u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 362u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0047C0A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C098u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0047C098u) [[unlikely]] return; }
L_0047C098:
    set32(c.r[2], c.r[29].w[0] + 340u);
    st32((c.r[29].w[0] + 356u), c.r[2].w[0]);
    c.budget -= 2;
L_0047C0A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], ld32((c.r[29].w[0] + 356u)));
    c.f[0] = ld32((c.r[2].w[0] - 25024u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[29].w[0] + 340u);
    st32((c.r[6].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[0] = ld32((c.r[4].w[0] - 25020u));
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] - 25016u));
    st32((c.r[6].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] - 25012u));
    st32((c.r[6].w[0] + 12u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 362u)));
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[20], c.r[4].w[0] + c.r[2].w[0]);
    st16((c.r[20].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 356u)));
    c.budget -= 24;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[23], ld32((c.r[29].w[0] + 340u)));  goto L_0047C130; }
    set32(c.r[4], c.r[20].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C10Cu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0047C10Cu) [[unlikely]] return; }
L_0047C10C:
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[2], c.r[20].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[20].w[0] + 4u);  goto L_0047C128; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C124u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0047C124u) [[unlikely]] return; }
L_0047C124:
    set32(c.r[2], c.r[20].w[0] + 4u);
    c.budget -= 1;
L_0047C128:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0047C154; } }
L_0047C130:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C13Cu); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0047C13Cu) [[unlikely]] return; }
L_0047C13C:
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 356u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C150u); c.r[6].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0047C150u) [[unlikely]] return; }
L_0047C150:
    st32((c.r[20].w[0] + 4u), c.r[23].w[0]);
    c.budget -= 1;
L_0047C154:
    set32(c.r[25], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C168u); set32(c.r[4], c.r[16].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047C168u) [[unlikely]] return; }
L_0047C168:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 362u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 336u), c.r[3].w[0]);  if (t) { goto L_0047C2C8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 356u)));
    set32(c.r[2], c.r[29].w[0] + 340u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_0047C2CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C198u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0047C198u) [[unlikely]] return; }
L_0047C198:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047C2C8; } }
L_0047C1A0:
    set32(c.r[4], c.r[29].w[0] + 308u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 328u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 304u), c.r[2].w[0]);
    set32(c.r[2], 0u + 64u);
    st32((c.r[29].w[0] + 324u), c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 330u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0047C1D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C1C8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0047C1C8u) [[unlikely]] return; }
L_0047C1C8:
    set32(c.r[2], c.r[29].w[0] + 308u);
    st32((c.r[29].w[0] + 324u), c.r[2].w[0]);
    c.budget -= 2;
L_0047C1D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], ld32((c.r[29].w[0] + 324u)));
    c.f[0] = ld32((c.r[2].w[0] - 25008u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[29].w[0] + 308u);
    st32((c.r[6].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[0] = ld32((c.r[4].w[0] - 25004u));
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] - 25000u));
    st32((c.r[6].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] - 24996u));
    st32((c.r[6].w[0] + 12u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 76u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 330u)));
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[20], c.r[4].w[0] + c.r[2].w[0]);
    st16((c.r[20].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 324u)));
    c.budget -= 24;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[23], ld32((c.r[29].w[0] + 308u)));  goto L_0047C260; }
    set32(c.r[4], c.r[20].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C23Cu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0047C23Cu) [[unlikely]] return; }
L_0047C23C:
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[2], c.r[20].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[20].w[0] + 4u);  goto L_0047C258; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C254u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0047C254u) [[unlikely]] return; }
L_0047C254:
    set32(c.r[2], c.r[20].w[0] + 4u);
    c.budget -= 1;
L_0047C258:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0047C284; } }
L_0047C260:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C26Cu); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0047C26Cu) [[unlikely]] return; }
L_0047C26C:
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 324u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C280u); c.r[6].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0047C280u) [[unlikely]] return; }
L_0047C280:
    st32((c.r[20].w[0] + 4u), c.r[23].w[0]);
    c.budget -= 1;
L_0047C284:
    set32(c.r[25], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C298u); set32(c.r[4], c.r[16].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047C298u) [[unlikely]] return; }
L_0047C298:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 330u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 304u), c.r[3].w[0]);  if (t) { goto L_0047C2C8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 324u)));
    set32(c.r[2], c.r[29].w[0] + 308u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0047C2C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C2C8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0047C2C8u) [[unlikely]] return; }
L_0047C2C8:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_0047C2CC:
    c.r[2].d[0] = c.r[21].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[21].w[0] + 3u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047BFECu | kUnwind; return; } [[clang::musttail]] return unit_00DE(c, 476u, depth); }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C2E4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0047C2E4u) [[unlikely]] return; }
L_0047C2E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));  goto L_0047C31C; }
    set32(c.r[3], ld32((c.r[30].w[0] + 36u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[30].w[0] + 36u);  if (t) { goto L_0047C304; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[4].w[0] + 8u)));  if (t) { goto L_0047C308; } }
L_0047C304:
    set32(c.r[5], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0047C308:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C318u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047C318u) [[unlikely]] return; }
L_0047C318:
    set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));
    c.budget -= 1;
L_0047C31C:
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C328u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 88u, depth + 1u); else { c.pc = 0x003CCD20u; return; } if (c.pc != 0x0047C328u) [[unlikely]] return; }
L_0047C328:
    c.r[20].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[20].d[0] == 0ull) { c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_0047C340; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] - 24706u);  if (t) { goto L_0047C344; } }
L_0047C340:
    set32(c.r[6], c.r[6].w[0] - 24701u);
    c.budget -= 1;
L_0047C344:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C354u); set32(c.r[5], c.r[5].w[0] - 24730u);  if (depth < kMaxDepth) unit_0027(c, 246u, depth + 1u); else { c.pc = 0x0019FB50u; return; } if (c.pc != 0x0047C354u) [[unlikely]] return; }
L_0047C354:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24695u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C36Cu); set32(c.r[6], c.r[6].w[0] - 24701u);  if (depth < kMaxDepth) unit_0027(c, 246u, depth + 1u); else { c.pc = 0x0019FB50u; return; } if (c.pc != 0x0047C36Cu) [[unlikely]] return; }
L_0047C36C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C378u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0047C378u) [[unlikely]] return; }
L_0047C378:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 368u);  goto L_0047C7D8; }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));  goto L_0047C4C0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 276u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    set32(c.r[17], ld32((c.r[28].w[0] - 29896u)));
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    set32(c.r[2], 0u + 64u);
    st16((c.r[29].w[0] + 296u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 292u), c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 298u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0047C3C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C3BCu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0047C3BCu) [[unlikely]] return; }
L_0047C3BC:
    set32(c.r[2], c.r[29].w[0] + 276u);
    st32((c.r[29].w[0] + 292u), c.r[2].w[0]);
    c.budget -= 2;
L_0047C3C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], ld32((c.r[29].w[0] + 292u)));
    c.f[0] = ld32((c.r[2].w[0] - 24944u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[29].w[0] + 276u);
    st32((c.r[6].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[0] = ld32((c.r[4].w[0] - 24940u));
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] - 24936u));
    st32((c.r[6].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] - 24932u));
    st32((c.r[6].w[0] + 12u), c.f[0]);
    set32(c.r[22], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 298u)));
    set32(c.r[4], c.r[22].w[0] << 5);
    set32(c.r[20], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[20].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 292u)));
    c.budget -= 23;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[21], ld32((c.r[29].w[0] + 276u)));  goto L_0047C450; }
    set32(c.r[4], c.r[20].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C42Cu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0047C42Cu) [[unlikely]] return; }
L_0047C42C:
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[2], c.r[20].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[20].w[0] + 4u);  goto L_0047C448; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C444u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0047C444u) [[unlikely]] return; }
L_0047C444:
    set32(c.r[2], c.r[20].w[0] + 4u);
    c.budget -= 1;
L_0047C448:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0047C474; } }
L_0047C450:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C45Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0047C45Cu) [[unlikely]] return; }
L_0047C45C:
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 292u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C470u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0047C470u) [[unlikely]] return; }
L_0047C470:
    st32((c.r[20].w[0] + 4u), c.r[21].w[0]);
    c.budget -= 1;
L_0047C474:
    set32(c.r[25], ld32((c.r[16].w[0] + 60u)));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C488u); set32(c.r[4], c.r[16].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047C488u) [[unlikely]] return; }
L_0047C488:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 298u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 272u), c.r[3].w[0]);  if (t) { goto L_0047C7C0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 292u)));
    set32(c.r[2], c.r[29].w[0] + 276u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_0047C7C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C4B8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0047C4B8u) [[unlikely]] return; }
L_0047C4B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047C7C0; } }
L_0047C4C0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C4CCu); c.r[6].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 23u, depth + 1u); else { c.pc = 0x003CC3A0u; return; } if (c.pc != 0x0047C4CCu) [[unlikely]] return; }
L_0047C4CC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_0047C620; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[17], ld32((c.r[28].w[0] - 29888u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24695u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C4F0u); set32(c.r[6], c.r[6].w[0] - 24706u);  if (depth < kMaxDepth) unit_0027(c, 246u, depth + 1u); else { c.pc = 0x0019FB50u; return; } if (c.pc != 0x0047C4F0u) [[unlikely]] return; }
L_0047C4F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 244u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 264u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    set32(c.r[2], 0u + 64u);
    st32((c.r[29].w[0] + 260u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 266u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0047C524; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C51Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0047C51Cu) [[unlikely]] return; }
L_0047C51C:
    set32(c.r[2], c.r[29].w[0] + 244u);
    st32((c.r[29].w[0] + 260u), c.r[2].w[0]);
    c.budget -= 2;
L_0047C524:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], ld32((c.r[29].w[0] + 260u)));
    c.f[0] = ld32((c.r[2].w[0] - 24912u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[29].w[0] + 244u);
    st32((c.r[6].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[0] = ld32((c.r[4].w[0] - 24908u));
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] - 24904u));
    st32((c.r[6].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] - 24900u));
    st32((c.r[6].w[0] + 12u), c.f[0]);
    set32(c.r[22], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 266u)));
    set32(c.r[4], c.r[22].w[0] << 5);
    set32(c.r[20], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[20].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 260u)));
    c.budget -= 23;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[21], ld32((c.r[29].w[0] + 244u)));  goto L_0047C5B0; }
    set32(c.r[4], c.r[20].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C58Cu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0047C58Cu) [[unlikely]] return; }
L_0047C58C:
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[2], c.r[20].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[20].w[0] + 4u);  goto L_0047C5A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C5A4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0047C5A4u) [[unlikely]] return; }
L_0047C5A4:
    set32(c.r[2], c.r[20].w[0] + 4u);
    c.budget -= 1;
L_0047C5A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0047C5D4; } }
L_0047C5B0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C5BCu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0047C5BCu) [[unlikely]] return; }
L_0047C5BC:
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 260u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C5D0u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0047C5D0u) [[unlikely]] return; }
L_0047C5D0:
    st32((c.r[20].w[0] + 4u), c.r[21].w[0]);
    c.budget -= 1;
L_0047C5D4:
    set32(c.r[25], ld32((c.r[16].w[0] + 60u)));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C5E8u); set32(c.r[4], c.r[16].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047C5E8u) [[unlikely]] return; }
L_0047C5E8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 266u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 240u), c.r[3].w[0]);  if (t) { goto L_0047C7C0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 260u)));
    set32(c.r[2], c.r[29].w[0] + 244u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0047C7C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C618u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0047C618u) [[unlikely]] return; }
L_0047C618:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047C7C0; } }
L_0047C620:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[17], ld32((c.r[28].w[0] - 29892u)));
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 24672u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C63Cu); set32(c.r[7], c.r[7].w[0] - 24648u);  if (depth < kMaxDepth) unit_0027(c, 263u, depth + 1u); else { c.pc = 0x0019FE40u; return; } if (c.pc != 0x0047C63Cu) [[unlikely]] return; }
L_0047C63C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C64Cu); set32(c.r[5], c.r[5].w[0] - 24706u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0047C64Cu) [[unlikely]] return; }
L_0047C64C:
    c.r[21].d[0] = c.r[2].d[0] ^ 0ull;
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C660u); c.r[21].d[0] = c.r[21].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0047C660u) [[unlikely]] return; }
L_0047C660:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_0047C698; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_0047C698; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = 0u;
    set32(c.r[5], 0u + 9u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C688u); set32(c.r[17], c.r[17].w[0] - 24648u);  if (depth < kMaxDepth) unit_00E2(c, 306u, depth + 1u); else { c.pc = 0x0048A800u; return; } if (c.pc != 0x0047C688u) [[unlikely]] return; }
L_0047C688:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C698u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_00E2(c, 306u, depth + 1u); else { c.pc = 0x0048A800u; return; } if (c.pc != 0x0047C698u) [[unlikely]] return; }
L_0047C698:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 212u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 232u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[2], 0u + 64u);
    st32((c.r[29].w[0] + 228u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 234u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0047C6CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C6C4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0047C6C4u) [[unlikely]] return; }
L_0047C6C4:
    set32(c.r[2], c.r[29].w[0] + 212u);
    st32((c.r[29].w[0] + 228u), c.r[2].w[0]);
    c.budget -= 2;
L_0047C6CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], ld32((c.r[29].w[0] + 228u)));
    c.f[0] = ld32((c.r[2].w[0] - 24928u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[29].w[0] + 212u);
    st32((c.r[6].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[0] = ld32((c.r[4].w[0] - 24924u));
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] - 24920u));
    st32((c.r[6].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] - 24916u));
    st32((c.r[6].w[0] + 12u), c.f[0]);
    set32(c.r[22], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 234u)));
    set32(c.r[4], c.r[22].w[0] << 5);
    set32(c.r[20], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[20].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    c.budget -= 23;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[21], ld32((c.r[29].w[0] + 212u)));  goto L_0047C758; }
    set32(c.r[4], c.r[20].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C734u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0047C734u) [[unlikely]] return; }
L_0047C734:
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[2], c.r[20].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[20].w[0] + 4u);  goto L_0047C750; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C74Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0047C74Cu) [[unlikely]] return; }
L_0047C74C:
    set32(c.r[2], c.r[20].w[0] + 4u);
    c.budget -= 1;
L_0047C750:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0047C77C; } }
L_0047C758:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C764u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0047C764u) [[unlikely]] return; }
L_0047C764:
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 228u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C778u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0047C778u) [[unlikely]] return; }
L_0047C778:
    st32((c.r[20].w[0] + 4u), c.r[21].w[0]);
    c.budget -= 1;
L_0047C77C:
    set32(c.r[25], ld32((c.r[16].w[0] + 60u)));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C790u); set32(c.r[4], c.r[16].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047C790u) [[unlikely]] return; }
L_0047C790:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 234u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 208u), c.r[3].w[0]);  if (t) { goto L_0047C7C0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[2], c.r[29].w[0] + 212u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0047C7C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C7C0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0047C7C0u) [[unlikely]] return; }
L_0047C7C0:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_0047C7C4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C7D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047C7D4u) [[unlikely]] return; }
L_0047C7D4:
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.budget -= 1;
L_0047C7D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C7E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 292u, depth + 1u); else { c.pc = 0x0011EEB0u; return; } if (c.pc != 0x0047C7E0u) [[unlikely]] return; }
L_0047C7E0:
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C7ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0047C7ECu) [[unlikely]] return; }
L_0047C7EC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[19].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C7FCu); set32(c.r[5], c.r[5].w[0] - 24647u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0047C7FCu) [[unlikely]] return; }
L_0047C7FC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 64u)));  goto L_0047C86C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C814u); set32(c.r[5], c.r[29].w[0] + 495u);  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x0047C814u) [[unlikely]] return; }
L_0047C814:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[29].w[0] + 495u));  goto L_0047C83C; }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0047C838; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 495u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C838u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x0047C838u) [[unlikely]] return; }
L_0047C838:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 495u));
    c.budget -= 1;
L_0047C83C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0047C868; } }
    set32(c.r[16], ld32((c.r[19].w[0] + 72u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C854u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 131u, depth + 1u); else { c.pc = 0x001A21A0u; return; } if (c.pc != 0x0047C854u) [[unlikely]] return; }
L_0047C854:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 220u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C868u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047C868u) [[unlikely]] return; }
L_0047C868:
    set32(c.r[3], ld32((c.r[19].w[0] + 64u)));
    c.budget -= 1;
L_0047C86C:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 64u), c.r[3].w[0]);
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
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 496u);  c.pc = t; return; }
L_0047C8B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0047C8CC; } }
    set32(c.r[5], c.r[5].w[0] + 48u);
    c.budget -= 1;
L_0047C8CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C8D4u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 105u, depth + 1u); else { c.pc = 0x0047CD40u; return; } if (c.pc != 0x0047C8D4u) [[unlikely]] return; }
L_0047C8D4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[16].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_0047C990; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C8E8u);  if (depth < kMaxDepth) unit_0022(c, 185u, depth + 1u); else { c.pc = 0x0018AB20u; return; } if (c.pc != 0x0047C8E8u) [[unlikely]] return; }
L_0047C8E8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 64u), 0u);  goto L_0047C944; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C900u); set32(c.r[4], ld32((c.r[2].w[0] + 320u)));  if (depth < kMaxDepth) unit_00F4(c, 210u, depth + 1u); else { c.pc = 0x004D1E00u; return; } if (c.pc != 0x0047C900u) [[unlikely]] return; }
L_0047C900:
    set32(c.r[3], c.r[2].w[0] + 48u);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[3].w[0] + 1u);  goto L_0047C918; }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_0047C918:
    st32((c.r[16].w[0] + 84u), 0u);
    set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C928u); set32(c.r[6], c.r[16].w[0] + 76u);  if (depth < kMaxDepth) unit_00B3(c, 43u, depth + 1u); else { c.pc = 0x003CC640u; return; } if (c.pc != 0x0047C928u) [[unlikely]] return; }
L_0047C928:
    set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C934u); set32(c.r[5], c.r[16].w[0] + 76u);  if (depth < kMaxDepth) unit_00B3(c, 39u, depth + 1u); else { c.pc = 0x003CC5A0u; return; } if (c.pc != 0x0047C934u) [[unlikely]] return; }
L_0047C934:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C93Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 73u, depth + 1u); else { c.pc = 0x0047C9B0u; return; } if (c.pc != 0x0047C93Cu) [[unlikely]] return; }
L_0047C93C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0047C994; } }
L_0047C944:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 68u), 0u);  if (t) { goto L_0047C970; } }
L_0047C950:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C958u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 152u, depth + 1u); else { c.pc = 0x00189FB0u; return; } if (c.pc != 0x0047C958u) [[unlikely]] return; }
L_0047C958:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C96Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047C96Cu) [[unlikely]] return; }
L_0047C96C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0047C970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C978u); set32(c.r[4], ld32((c.r[16].w[0] + 72u)));  if (depth < kMaxDepth) unit_0022(c, 185u, depth + 1u); else { c.pc = 0x0018AB20u; return; } if (c.pc != 0x0047C978u) [[unlikely]] return; }
L_0047C978:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 72u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047C950u | kUnwind; return; } goto L_0047C950; }
    st32((c.r[16].w[0] + 64u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C990u); set32(c.r[4], ld32((c.r[16].w[0] + 72u)));  if (depth < kMaxDepth) unit_00ED(c, 41u, depth + 1u); else { c.pc = 0x004B4440u; return; } if (c.pc != 0x0047C990u) [[unlikely]] return; }
L_0047C990:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0047C994:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0047C9B0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[5], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C9D8u); c.r[18].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047C9D8u) [[unlikely]] return; }
L_0047C9D8:
    set32(c.r[17], c.r[29].w[0] + 64u);
    st32((c.r[18].w[0] + 64u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047C9F0u); st32((c.r[18].w[0] + 68u), 0u);  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x0047C9F0u) [[unlikely]] return; }
L_0047C9F0:
    st16((c.r[29].w[0] + 88u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[29].w[0] + 68u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[16].d[0] = ld8((c.r[28].w[0] - 29884u));
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 84u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[3].d[0]; st16((c.r[29].w[0] + 90u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0047CA28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CA20u); set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0047CA20u) [[unlikely]] return; }
L_0047CA20:
    set32(c.r[2], c.r[17].w[0] + 4u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_0047CA28:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CA58u); set32(c.r[5], c.r[5].w[0] - 24647u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047CA58u) [[unlikely]] return; }
L_0047CA58:
    set32(c.r[4], c.r[18].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CA64u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0047CA64u) [[unlikely]] return; }
L_0047CA64:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CA70u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0047CA70u) [[unlikely]] return; }
L_0047CA70:
    set32(c.r[5], ld32((c.r[18].w[0] + 72u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[6], c.r[6].w[0] - 24637u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CA8Cu); set32(c.r[7], c.r[7].w[0] - 24648u);  if (depth < kMaxDepth) unit_0027(c, 263u, depth + 1u); else { c.pc = 0x0019FE40u; return; } if (c.pc != 0x0047CA8Cu) [[unlikely]] return; }
L_0047CA8C:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 97u);  goto L_0047CAA0; }
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_0047CAA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CAA8u);  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x0047CAA8u) [[unlikely]] return; }
L_0047CAA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CAB0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 103u, depth + 1u); else { c.pc = 0x0047CD10u; return; } if (c.pc != 0x0047CAB0u) [[unlikely]] return; }
L_0047CAB0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 29244u)));
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CAC4u); st32((c.r[28].w[0] - 29244u), 0u);  if (depth < kMaxDepth) unit_0026(c, 323u, depth + 1u); else { c.pc = 0x0019BE80u; return; } if (c.pc != 0x0047CAC4u) [[unlikely]] return; }
L_0047CAC4:
    set32(c.r[8], ld32((c.r[18].w[0] + 84u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 6u);
    set32(c.r[7], c.r[16].w[0] + 60u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CAE0u); c.r[9].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0026(c, 306u, depth + 1u); else { c.pc = 0x0019BB20u; return; } if (c.pc != 0x0047CAE0u) [[unlikely]] return; }
L_0047CAE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CAE8u); set32(c.r[4], c.r[16].w[0] + 60u);  if (depth < kMaxDepth) unit_000F(c, 108u, depth + 1u); else { c.pc = 0x0013D410u; return; } if (c.pc != 0x0047CAE8u) [[unlikely]] return; }
L_0047CAE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CAF0u); set32(c.r[4], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000C(c, 347u, depth + 1u); else { c.pc = 0x00133590u; return; } if (c.pc != 0x0047CAF0u) [[unlikely]] return; }
L_0047CAF0:
    st32((c.r[18].w[0] + 64u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CAFCu); set32(c.r[4], ld32((c.r[18].w[0] + 72u)));  if (depth < kMaxDepth) unit_00ED(c, 41u, depth + 1u); else { c.pc = 0x004B4440u; return; } if (c.pc != 0x0047CAFCu) [[unlikely]] return; }
L_0047CAFC:
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CB10u); st32((c.r[28].w[0] - 29244u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0047CB10u) [[unlikely]] return; }
L_0047CB10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0047CB30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0047CB48; } }
    set32(c.r[5], c.r[5].w[0] + 48u);
    c.budget -= 1;
L_0047CB48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CB50u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 105u, depth + 1u); else { c.pc = 0x0047CD40u; return; } if (c.pc != 0x0047CB50u) [[unlikely]] return; }
L_0047CB50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_0047CBA4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CB68u); set32(c.r[4], ld32((c.r[2].w[0] + 320u)));  if (depth < kMaxDepth) unit_00F4(c, 210u, depth + 1u); else { c.pc = 0x004D1E00u; return; } if (c.pc != 0x0047CB68u) [[unlikely]] return; }
L_0047CB68:
    set32(c.r[3], c.r[2].w[0] + 48u);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[3].w[0] + 1u);  goto L_0047CB80; }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_0047CB80:
    st32((c.r[16].w[0] + 84u), 0u);
    set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CB90u); set32(c.r[6], c.r[16].w[0] + 76u);  if (depth < kMaxDepth) unit_00B3(c, 43u, depth + 1u); else { c.pc = 0x003CC640u; return; } if (c.pc != 0x0047CB90u) [[unlikely]] return; }
L_0047CB90:
    set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CB9Cu); set32(c.r[5], c.r[16].w[0] + 76u);  if (depth < kMaxDepth) unit_00B3(c, 39u, depth + 1u); else { c.pc = 0x003CC5A0u; return; } if (c.pc != 0x0047CB9Cu) [[unlikely]] return; }
L_0047CB9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CBA4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 73u, depth + 1u); else { c.pc = 0x0047C9B0u; return; } if (c.pc != 0x0047CBA4u) [[unlikely]] return; }
L_0047CBA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0047CBC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CBD4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E8(c, 213u, depth + 1u); else { c.pc = 0x004A1BA0u; return; } if (c.pc != 0x0047CBD4u) [[unlikely]] return; }
L_0047CBD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[16].w[0] + 76u);
    set32(c.r[2], c.r[2].w[0] + 31056u);
    set32(c.r[5], 0u + 24u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 72u), 0u);
    st32((c.r[16].w[0] + 76u), 0u);
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CC00u); st32((c.r[16].w[0] + 88u), 0u);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x0047CC00u) [[unlikely]] return; }
L_0047CC00:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0047CC20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0047CC90; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27552u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CC54u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x0047CC54u) [[unlikely]] return; }
L_0047CC54:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0047CC7C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 31120u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0047CC78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26416u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0047CC78:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0047CC7C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0047CC94; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CC90u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0047CC90u) [[unlikely]] return; }
L_0047CC90:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0047CC94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0047CCB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0047CD00; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 31120u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0047CCE4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26416u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0047CCE4:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0047CCFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CCFCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0047CCFCu) [[unlikely]] return; }
L_0047CCFC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0047CD00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0047CD10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0047CD24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0047CD34; } }
L_0047CD24:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CD34u); set32(c.r[5], ld32((c.r[28].w[0] - 31168u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047CD34u) [[unlikely]] return; }
L_0047CD34:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0047CD40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0047CD54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0047CD64; } }
L_0047CD54:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CD64u); set32(c.r[5], ld32((c.r[28].w[0] - 29572u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047CD64u) [[unlikely]] return; }
L_0047CD64:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0047CD70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0047CDF0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 31168u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0047CDD8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27552u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CDB4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x0047CDB4u) [[unlikely]] return; }
L_0047CDB4:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_0047CDDC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 31120u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0047CDD8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26416u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0047CDD8:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 1;
L_0047CDDC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0047CDF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CDF0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0047CDF0u) [[unlikely]] return; }
L_0047CDF0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0047CDF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0047CE10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0047CE2C; } }
    set32(c.r[5], c.r[5].w[0] + 48u);
    c.budget -= 1;
L_0047CE2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CE34u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 105u, depth + 1u); else { c.pc = 0x0047CD40u; return; } if (c.pc != 0x0047CE34u) [[unlikely]] return; }
L_0047CE34:
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CE44u); st32((c.r[17].w[0] + 64u), 0u);  if (depth < kMaxDepth) unit_000C(c, 347u, depth + 1u); else { c.pc = 0x00133590u; return; } if (c.pc != 0x0047CE44u) [[unlikely]] return; }
L_0047CE44:
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0047CEB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CE58u);  if (depth < kMaxDepth) unit_0022(c, 185u, depth + 1u); else { c.pc = 0x0018AB20u; return; } if (c.pc != 0x0047CE58u) [[unlikely]] return; }
L_0047CE58:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0047CE7C; }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CE74u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047CE74u) [[unlikely]] return; }
L_0047CE74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047CEB4; } }
L_0047CE7C:
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 1;
L_0047CE80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CE88u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 152u, depth + 1u); else { c.pc = 0x00189FB0u; return; } if (c.pc != 0x0047CE88u) [[unlikely]] return; }
L_0047CE88:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CE9Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047CE9Cu) [[unlikely]] return; }
L_0047CE9C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 68u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047CE80u | kUnwind; return; } goto L_0047CE80; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CEB4u); set32(c.r[4], ld32((c.r[17].w[0] + 68u)));  if (depth < kMaxDepth) unit_00ED(c, 41u, depth + 1u); else { c.pc = 0x004B4440u; return; } if (c.pc != 0x0047CEB4u) [[unlikely]] return; }
L_0047CEB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0047CEB8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0047CED0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CEF8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0047CEF8u) [[unlikely]] return; }
L_0047CEF8:
    set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));
    set32(c.r[19], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CF08u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 22u, depth + 1u); else { c.pc = 0x003CC390u; return; } if (c.pc != 0x0047CF08u) [[unlikely]] return; }
L_0047CF08:
    c.r[1].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_0047CF8C; }
    set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CF20u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 21u, depth + 1u); else { c.pc = 0x003CC380u; return; } if (c.pc != 0x0047CF20u) [[unlikely]] return; }
L_0047CF20:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], c.r[2].w[0] + 1u);  goto L_0047CF34; }
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 1;
L_0047CF34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CF3Cu); set32(c.r[4], ld32((c.r[28].w[0] - 22676u)));  if (depth < kMaxDepth) unit_00F9(c, 217u, depth + 1u); else { c.pc = 0x004E5F30u; return; } if (c.pc != 0x0047CF3Cu) [[unlikely]] return; }
L_0047CF3C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 132u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + 132u);  if (t) { goto L_0047CF58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_0047CF5C; } }
L_0047CF58:
    set32(c.r[6], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0047CF5C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CF6Cu); set32(c.r[5], c.r[5].w[0] - 24528u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x0047CF6Cu) [[unlikely]] return; }
L_0047CF6C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24511u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CF84u); set32(c.r[6], c.r[6].w[0] - 24500u);  if (depth < kMaxDepth) unit_0027(c, 246u, depth + 1u); else { c.pc = 0x0019FB50u; return; } if (c.pc != 0x0047CF84u) [[unlikely]] return; }
L_0047CF84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0047CFA4; } }
L_0047CF8C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 24511u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CFA0u); set32(c.r[6], c.r[6].w[0] - 24488u);  if (depth < kMaxDepth) unit_0027(c, 246u, depth + 1u); else { c.pc = 0x0019FB50u; return; } if (c.pc != 0x0047CFA0u) [[unlikely]] return; }
L_0047CFA0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0047CFA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CFACu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0047CFACu) [[unlikely]] return; }
L_0047CFAC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0047D00C; }
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[29].w[0] + 80u));  goto L_0047CFCC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 84u)));  if (t) { goto L_0047CFD4; } }
L_0047CFCC:
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 57;
    c.budget -= 2;
L_0047CFD4:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[25], ld32((c.r[2].w[0])));  goto L_0047CFF8; }
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 116u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047CFF0u); set32(c.r[5], c.r[29].w[0] + 80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047CFF0u) [[unlikely]] return; }
L_0047CFF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047D008; } }
L_0047CFF8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D008u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047D008u) [[unlikely]] return; }
L_0047D008:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0047D00C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D014u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0047D014u) [[unlikely]] return; }
L_0047D014:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0047D05C; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_0047D048; }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 36u);  if (t) { goto L_0047D03C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[4].w[0] + 8u)));  if (t) { goto L_0047D040; } }
L_0047D03C:
    set32(c.r[5], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0047D040:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[2].w[0])));  if (t) { goto L_0047D050; } }
L_0047D048:
    set32(c.r[5], c.r[5].w[0] - 24478u);
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_0047D050:
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D05Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047D05Cu) [[unlikely]] return; }
L_0047D05C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[18].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D06Cu); set32(c.r[5], c.r[5].w[0] - 24477u);  if (depth < kMaxDepth) unit_000C(c, 350u, depth + 1u); else { c.pc = 0x001335E0u; return; } if (c.pc != 0x0047D06Cu) [[unlikely]] return; }
L_0047D06C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 111u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D07Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x0047D07Cu) [[unlikely]] return; }
L_0047D07C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 111u));  goto L_0047D0A4; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0047D0A0; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 111u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D0A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x0047D0A0u) [[unlikely]] return; }
L_0047D0A0:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 111u));
    c.budget -= 1;
L_0047D0A4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 64u)));  goto L_0047D0CC; }
    set32(c.r[4], ld32((c.r[18].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0047D0C8; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 220u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D0C8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047D0C8u) [[unlikely]] return; }
L_0047D0C8:
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 1;
L_0047D0CC:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D0E0u); st32((c.r[18].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0047D0E0u) [[unlikely]] return; }
L_0047D0E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0047D100:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0047D12C; } }
    set32(c.r[4], c.r[4].w[0] + 48u);
    c.budget -= 1;
L_0047D12C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D134u);  if (depth < kMaxDepth) unit_00DF(c, 105u, depth + 1u); else { c.pc = 0x0047CD40u; return; } if (c.pc != 0x0047D134u) [[unlikely]] return; }
L_0047D134:
    set32(c.r[17], c.r[29].w[0] + 80u);
    st32((c.r[19].w[0] + 68u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D14Cu); st32((c.r[19].w[0] + 64u), 0u);  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x0047D14Cu) [[unlikely]] return; }
L_0047D14C:
    st16((c.r[29].w[0] + 104u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[29].w[0] + 84u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[16].d[0] = ld8((c.r[28].w[0] - 29880u));
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[3].d[0]; st16((c.r[29].w[0] + 106u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0047D184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D17Cu); set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0047D17Cu) [[unlikely]] return; }
L_0047D17C:
    set32(c.r[2], c.r[17].w[0] + 4u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_0047D184:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D1B4u); set32(c.r[5], c.r[5].w[0] - 24477u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047D1B4u) [[unlikely]] return; }
L_0047D1B4:
    set32(c.r[4], c.r[19].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D1C0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0047D1C0u) [[unlikely]] return; }
L_0047D1C0:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D1CCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0047D1CCu) [[unlikely]] return; }
L_0047D1CC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[6].w[0] - 24467u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D1E8u); set32(c.r[7], c.r[7].w[0] - 24478u);  if (depth < kMaxDepth) unit_0027(c, 263u, depth + 1u); else { c.pc = 0x0019FE40u; return; } if (c.pc != 0x0047D1E8u) [[unlikely]] return; }
L_0047D1E8:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 113u);  goto L_0047D1FC; }
    set32(c.r[4], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 1;
L_0047D1FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D204u);  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x0047D204u) [[unlikely]] return; }
L_0047D204:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D20Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 103u, depth + 1u); else { c.pc = 0x0047CD10u; return; } if (c.pc != 0x0047D20Cu) [[unlikely]] return; }
L_0047D20C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 29244u)));
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D220u); st32((c.r[28].w[0] - 29244u), 0u);  if (depth < kMaxDepth) unit_0026(c, 323u, depth + 1u); else { c.pc = 0x0019BE80u; return; } if (c.pc != 0x0047D220u) [[unlikely]] return; }
L_0047D220:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[9].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[16].w[0] + 60u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D23Cu); set32(c.r[8], 0u + 3u);  if (depth < kMaxDepth) unit_0026(c, 306u, depth + 1u); else { c.pc = 0x0019BB20u; return; } if (c.pc != 0x0047D23Cu) [[unlikely]] return; }
L_0047D23C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D244u); set32(c.r[4], c.r[16].w[0] + 60u);  if (depth < kMaxDepth) unit_000F(c, 108u, depth + 1u); else { c.pc = 0x0013D410u; return; } if (c.pc != 0x0047D244u) [[unlikely]] return; }
L_0047D244:
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D258u); st32((c.r[28].w[0] - 29244u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0047D258u) [[unlikely]] return; }
L_0047D258:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0047D280:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0047D300; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 31232u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0047D2E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 17744u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0047D2E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 21552u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0047D2E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0047D2E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D2E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0047D2E8u) [[unlikely]] return; }
L_0047D2E8:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0047D304; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D300u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0047D300u) [[unlikely]] return; }
L_0047D300:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0047D304:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0047D320:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_0047D348; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 5u);  goto L_0047D340; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_0047D340:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047D34C; } }
L_0047D348:
    set32(c.r[2], c.r[2].w[0] - 24416u);
    c.budget -= 1;
L_0047D34C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047D360:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 24408u);  c.pc = t; return; }
L_0047D370:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047D380:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0047D3CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D3B4u); set32(c.r[4], 0u + 348u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0047D3B4u) [[unlikely]] return; }
L_0047D3B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = c.r[2].d[0] + 0ull;  goto L_0047D3CC; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D3C8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 238u, depth + 1u); else { c.pc = 0x0047DED0u; return; } if (c.pc != 0x0047D3C8u) [[unlikely]] return; }
L_0047D3C8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0047D3CC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D3E0u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 229u, depth + 1u); else { c.pc = 0x00193520u; return; } if (c.pc != 0x0047D3E0u) [[unlikely]] return; }
L_0047D3E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D3E8u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0047D3E8u) [[unlikely]] return; }
L_0047D3E8:
    set32(c.r[4], ld32((c.r[17].w[0] + 196u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 192u)));
    set32(c.r[6], c.r[6].w[0] - 23202u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D400u); set32(c.r[7], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x0047D400u) [[unlikely]] return; }
L_0047D400:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 81u);  goto L_0047D414; }
    set32(c.r[5], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_0047D414:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D41Cu); set32(c.r[4], c.r[16].w[0] + 284u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0047D41Cu) [[unlikely]] return; }
L_0047D41C:
    set32(c.r[4], ld32((c.r[17].w[0] + 196u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 192u)));
    set32(c.r[6], c.r[6].w[0] - 23187u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D434u); set32(c.r[7], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x0047D434u) [[unlikely]] return; }
L_0047D434:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 196u)));  goto L_0047D4A0; }
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 84u)));  goto L_0047D464; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 80u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_0047D464:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0047D49C; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[18], ld32((c.r[29].w[0] + 88u)));  goto L_0047D478; }
    set32(c.r[18], c.r[29].w[0] + 81u);
    c.budget -= 1;
L_0047D478:
    set32(c.r[4], c.r[16].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D484u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0047D484u) [[unlikely]] return; }
L_0047D484:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0047D498; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 345u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0047D49C; } }
L_0047D498:
    st8((c.r[16].w[0] + 345u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0047D49C:
    set32(c.r[4], ld32((c.r[17].w[0] + 196u)));
    c.budget -= 1;
L_0047D4A0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 192u)));
    set32(c.r[6], c.r[6].w[0] - 23166u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D4B4u); set32(c.r[7], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x0047D4B4u) [[unlikely]] return; }
L_0047D4B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 196u)));  goto L_0047D520; }
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 84u)));  goto L_0047D4E4; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 80u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_0047D4E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0047D51C; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[18], ld32((c.r[29].w[0] + 88u)));  goto L_0047D4F8; }
    set32(c.r[18], c.r[29].w[0] + 81u);
    c.budget -= 1;
L_0047D4F8:
    set32(c.r[4], c.r[16].w[0] + 324u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D504u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0047D504u) [[unlikely]] return; }
L_0047D504:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0047D518; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 345u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0047D51C; } }
L_0047D518:
    st8((c.r[16].w[0] + 345u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0047D51C:
    set32(c.r[4], ld32((c.r[17].w[0] + 196u)));
    c.budget -= 1;
L_0047D520:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 192u)));
    set32(c.r[6], c.r[6].w[0] - 23142u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D534u); set32(c.r[7], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x0047D534u) [[unlikely]] return; }
L_0047D534:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_0047D560; }
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 81u);  goto L_0047D550; }
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_0047D550:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D558u);  if (depth < kMaxDepth) unit_000F(c, 289u, depth + 1u); else { c.pc = 0x0013EE00u; return; } if (c.pc != 0x0047D558u) [[unlikely]] return; }
L_0047D558:
    st8((c.r[16].w[0] + 344u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 2;
L_0047D560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D568u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0047D568u) [[unlikely]] return; }
L_0047D568:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0047D590:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 284u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0047D5B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 292u)));  if (t) { goto L_0047D5B8; } }
L_0047D5B4:
    set32(c.r[5], c.r[16].w[0] + 285u);
    c.budget -= 1;
L_0047D5B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D5C0u); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0047D5C0u) [[unlikely]] return; }
L_0047D5C0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_0047D5D0; }
    set32(c.r[2], c.r[2].w[0] + 48u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0047D5D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D5D8u);  if (depth < kMaxDepth) unit_00DF(c, 254u, depth + 1u); else { c.pc = 0x0047E090u; return; } if (c.pc != 0x0047D5D8u) [[unlikely]] return; }
L_0047D5D8:
    st32((c.r[16].w[0] + 280u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 304u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 8;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 308u)));  goto L_0047D604; }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 304u));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 57;
    c.budget -= 3;
L_0047D604:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 324u)));  goto L_0047D628; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 312u)));  goto L_0047D618; }
    set32(c.r[5], c.r[16].w[0] + 305u);
    c.budget -= 1;
L_0047D618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D620u); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0047D620u) [[unlikely]] return; }
L_0047D620:
    st32((c.r[16].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 324u)));
    c.budget -= 2;
L_0047D628:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 328u)));  goto L_0047D64C; }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 324u));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 57;
    c.budget -= 3;
L_0047D64C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0047D670; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 332u)));  goto L_0047D660; }
    set32(c.r[5], c.r[16].w[0] + 325u);
    c.budget -= 1;
L_0047D660:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D668u); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0047D668u) [[unlikely]] return; }
L_0047D668:
    st32((c.r[16].w[0] + 320u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_0047D670:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0047D680:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D6A4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 236u, depth + 1u); else { c.pc = 0x001A39A0u; return; } if (c.pc != 0x0047D6A4u) [[unlikely]] return; }
L_0047D6A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D6ACu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0028(c, 229u, depth + 1u); else { c.pc = 0x001A3860u; return; } if (c.pc != 0x0047D6ACu) [[unlikely]] return; }
L_0047D6AC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_0047D8B8; }
    set32(c.r[4], c.r[29].w[0] + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D6C0u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0028(c, 217u, depth + 1u); else { c.pc = 0x001A3510u; return; } if (c.pc != 0x0047D6C0u) [[unlikely]] return; }
L_0047D6C0:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 345u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0047D708; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0047D6D8; }
    set32(c.r[4], ld32((c.r[17].w[0] + 300u)));
    c.budget -= 1;
L_0047D6D8:
    c.r[2].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] & 255ull;  goto L_0047D748; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[29].w[0] + 88u);
    set32(c.r[25], ld32((c.r[25].w[0] + 164u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D6F8u); set32(c.r[6], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047D6F8u) [[unlikely]] return; }
L_0047D6F8:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047D748; } }
L_0047D708:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0047D718; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0047D720; } }
L_0047D718:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D720u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0047D720u) [[unlikely]] return; }
L_0047D720:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 255ull;  goto L_0047D748; }
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D740u); set32(c.r[5], c.r[29].w[0] + 88u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047D740u) [[unlikely]] return; }
L_0047D740:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 2;
L_0047D748:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0] + 345u));  goto L_0047D7BC; }
    set32(c.r[5], ld32((c.r[17].w[0] + 280u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D75Cu); set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  if (depth < kMaxDepth) unit_00FC(c, 463u, depth + 1u); else { c.pc = 0x004F3780u; return; } if (c.pc != 0x0047D75Cu) [[unlikely]] return; }
L_0047D75C:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 344u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 280u)));  goto L_0047D784; }
    set32(c.r[4], ld32((c.r[17].w[0] + 280u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 252u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D77Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047D77Cu) [[unlikely]] return; }
L_0047D77C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047D798; } }
L_0047D784:
    set32(c.r[5], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 244u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D798u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047D798u) [[unlikely]] return; }
L_0047D798:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D7A8u); set32(c.r[5], c.r[5].w[0] - 23127u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0047D7A8u) [[unlikely]] return; }
L_0047D7A8:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D7B4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0028(c, 233u, depth + 1u); else { c.pc = 0x001A3920u; return; } if (c.pc != 0x0047D7B4u) [[unlikely]] return; }
L_0047D7B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0047D8C4; } }
L_0047D7BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0047D800; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0047D7D0; }
    set32(c.r[4], ld32((c.r[17].w[0] + 320u)));
    c.budget -= 1;
L_0047D7D0:
    c.r[2].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] & 255ull;  goto L_0047D840; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[29].w[0] + 88u);
    set32(c.r[25], ld32((c.r[25].w[0] + 164u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D7F0u); set32(c.r[6], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047D7F0u) [[unlikely]] return; }
L_0047D7F0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047D840; } }
L_0047D800:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0047D810; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0047D818; } }
L_0047D810:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D818u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0047D818u) [[unlikely]] return; }
L_0047D818:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 255ull;  goto L_0047D840; }
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D838u); set32(c.r[5], c.r[29].w[0] + 88u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047D838u) [[unlikely]] return; }
L_0047D838:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 2;
L_0047D840:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0047D8B4; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 280u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D854u); set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  if (depth < kMaxDepth) unit_00FC(c, 463u, depth + 1u); else { c.pc = 0x004F3780u; return; } if (c.pc != 0x0047D854u) [[unlikely]] return; }
L_0047D854:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 344u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 280u)));  goto L_0047D87C; }
    set32(c.r[4], ld32((c.r[17].w[0] + 280u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 248u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D874u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047D874u) [[unlikely]] return; }
L_0047D874:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047D890; } }
L_0047D87C:
    set32(c.r[5], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 240u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D890u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047D890u) [[unlikely]] return; }
L_0047D890:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D8A0u); set32(c.r[5], c.r[5].w[0] - 23127u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0047D8A0u) [[unlikely]] return; }
L_0047D8A0:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D8ACu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0028(c, 233u, depth + 1u); else { c.pc = 0x001A3920u; return; } if (c.pc != 0x0047D8ACu) [[unlikely]] return; }
L_0047D8AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0047D8C4; } }
L_0047D8B4:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_0047D8B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D8C0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0028(c, 233u, depth + 1u); else { c.pc = 0x001A3920u; return; } if (c.pc != 0x0047D8C0u) [[unlikely]] return; }
L_0047D8C0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0047D8C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0047D8E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D904u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 340u, depth + 1u); else { c.pc = 0x0016FD30u; return; } if (c.pc != 0x0047D904u) [[unlikely]] return; }
L_0047D904:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[16].w[0] + 52u));  goto L_0047D91C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 56u)));  if (t) { goto L_0047D924; } }
L_0047D91C:
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 57;
    c.budget -= 2;
L_0047D924:
    c.r[3].d[0] = c.r[3].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0047D9B0; }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 192u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0047D9AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D950u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 231u, depth + 1u); else { c.pc = 0x001A38C0u; return; } if (c.pc != 0x0047D950u) [[unlikely]] return; }
L_0047D950:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0047D9AC; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D968u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 176u, depth + 1u); else { c.pc = 0x0047D680u; return; } if (c.pc != 0x0047D968u) [[unlikely]] return; }
L_0047D968:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0047D9AC; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D984u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047D984u) [[unlikely]] return; }
L_0047D984:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 65u);  goto L_0047D998; }
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_0047D998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D9A0u); set32(c.r[4], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0047D9A0u) [[unlikely]] return; }
L_0047D9A0:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D9ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0047D9ACu) [[unlikely]] return; }
L_0047D9AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0047D9B0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0047D9D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 345u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0047DBF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047D9F4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0015(c, 176u, depth + 1u); else { c.pc = 0x00155A70u; return; } if (c.pc != 0x0047D9F4u) [[unlikely]] return; }
L_0047D9F4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_0047DA04; }
    set32(c.r[2], c.r[2].w[0] + 16u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0047DA04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DA0Cu);  if (depth < kMaxDepth) unit_00DF(c, 256u, depth + 1u); else { c.pc = 0x0047E0C0u; return; } if (c.pc != 0x0047DA0Cu) [[unlikely]] return; }
L_0047DA0C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0047DBF8; }
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DA28u); set32(c.r[4], c.r[29].w[0] + 56u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047DA28u) [[unlikely]] return; }
L_0047DA28:
    set32(c.r[4], c.r[29].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DA34u); set32(c.r[5], c.r[29].w[0] + 56u);  if (depth < kMaxDepth) unit_00E8(c, 92u, depth + 1u); else { c.pc = 0x004A0CF0u; return; } if (c.pc != 0x0047DA34u) [[unlikely]] return; }
L_0047DA34:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 345u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0047DA7C; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0047DA4C; }
    set32(c.r[4], ld32((c.r[17].w[0] + 300u)));
    c.budget -= 1;
L_0047DA4C:
    c.r[3].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[3].d[0] & 255ull;  goto L_0047DABC; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[29].w[0] + 72u);
    set32(c.r[25], ld32((c.r[25].w[0] + 164u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DA6Cu); set32(c.r[6], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047DA6Cu) [[unlikely]] return; }
L_0047DA6C:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047DABC; } }
L_0047DA7C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0047DA8C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0047DA98; } }
L_0047DA8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DA94u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0047DA94u) [[unlikely]] return; }
L_0047DA94:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0047DA98:
    c.r[3].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[3].d[0] & 255ull;  goto L_0047DABC; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DAB4u); set32(c.r[5], c.r[29].w[0] + 72u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047DAB4u) [[unlikely]] return; }
L_0047DAB4:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 2;
L_0047DABC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[17].w[0] + 345u));  goto L_0047DADC; }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 345u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0047DAD4; }
    set32(c.r[16], ld32((c.r[17].w[0] + 300u)));
    c.budget -= 1;
L_0047DAD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047DB7C; } }
L_0047DADC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0047DB20; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0047DAF0; }
    set32(c.r[4], ld32((c.r[17].w[0] + 320u)));
    c.budget -= 1;
L_0047DAF0:
    c.r[3].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[3].d[0] & 255ull;  goto L_0047DB60; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[5], c.r[29].w[0] + 72u);
    set32(c.r[25], ld32((c.r[25].w[0] + 164u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DB10u); set32(c.r[6], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047DB10u) [[unlikely]] return; }
L_0047DB10:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047DB60; } }
L_0047DB20:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0047DB30; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0047DB3C; } }
L_0047DB30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DB38u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0047DB38u) [[unlikely]] return; }
L_0047DB38:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0047DB3C:
    c.r[3].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[3].d[0] & 255ull;  goto L_0047DB60; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DB58u); set32(c.r[5], c.r[29].w[0] + 72u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047DB58u) [[unlikely]] return; }
L_0047DB58:
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 2;
L_0047DB60:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0047DB7C; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 345u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_0047DB7C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 320u)));  if (t) { goto L_0047DB7C; } }
L_0047DB7C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 340u)));  goto L_0047DBD0; }
    set32(c.r[3], ld32((c.r[17].w[0] + 340u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_0047DBCC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 25180u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DBA4u); set32(c.r[6], c.r[6].w[0] - 23112u);  if (depth < kMaxDepth) unit_00CD(c, 130u, depth + 1u); else { c.pc = 0x00434D60u; return; } if (c.pc != 0x0047DBA4u) [[unlikely]] return; }
L_0047DBA4:
    set32(c.r[5], ld32((c.r[17].w[0] + 340u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { st32((c.r[17].w[0] + 340u), c.r[16].w[0]);  goto L_0047DBF4; }
    set32(c.r[4], ld32((c.r[28].w[0] - 25180u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DBC0u); set32(c.r[6], c.r[6].w[0] - 23100u);  if (depth < kMaxDepth) unit_00CD(c, 130u, depth + 1u); else { c.pc = 0x00434D60u; return; } if (c.pc != 0x0047DBC0u) [[unlikely]] return; }
L_0047DBC0:
    st32((c.r[17].w[0] + 340u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047DBF4; } }
L_0047DBCC:
    set32(c.r[5], ld32((c.r[17].w[0] + 340u)));
    c.budget -= 1;
L_0047DBD0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0047DBF4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[5].d[0];  if (t) { goto L_0047DBF4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 25180u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DBF0u); set32(c.r[6], c.r[6].w[0] - 23100u);  if (depth < kMaxDepth) unit_00CD(c, 130u, depth + 1u); else { c.pc = 0x00434D60u; return; } if (c.pc != 0x0047DBF0u) [[unlikely]] return; }
L_0047DBF0:
    st32((c.r[17].w[0] + 340u), 0u);
    c.budget -= 1;
L_0047DBF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0047DBF8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0047DC10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047DC20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 192u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0047DC4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0047DDD4; } }
L_0047DC4C:
    set32(c.r[4], ld32((c.r[16].w[0] + 280u)));
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[4].w[0] + 192u));  goto L_0047DC60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0047DDD4; } }
L_0047DC60:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[16].w[0] + 344u));  goto L_0047DC74; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0047DDD4; } }
L_0047DC74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0047DC94; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 272u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DC8Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047DC8Cu) [[unlikely]] return; }
L_0047DC8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0047DCA0; } }
L_0047DC94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DC9Cu);  if (depth < kMaxDepth) unit_00E2(c, 234u, depth + 1u); else { c.pc = 0x00489FB0u; return; } if (c.pc != 0x0047DC9Cu) [[unlikely]] return; }
L_0047DC9C:
    c.r[18].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_0047DCA0:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 344u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 280u)));  goto L_0047DCC8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 280u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 276u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DCC0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047DCC0u) [[unlikely]] return; }
L_0047DCC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_0047DCD4; } }
L_0047DCC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DCD0u);  if (depth < kMaxDepth) unit_00E2(c, 230u, depth + 1u); else { c.pc = 0x00489F40u; return; } if (c.pc != 0x0047DCD0u) [[unlikely]] return; }
L_0047DCD0:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_0047DCD4:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 345u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0047DCE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 346u), static_cast<std::uint8_t>(c.r[18].w[0]));  if (t) { goto L_0047DD04; } }
L_0047DCE8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0047DCF4; }
    set32(c.r[4], ld32((c.r[16].w[0] + 300u)));
    c.budget -= 1;
L_0047DCF4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[16].w[0] + 345u));  goto L_0047DD08; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DD04u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x0047DD04u) [[unlikely]] return; }
L_0047DD04:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 345u));
    c.budget -= 1;
L_0047DD08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0047DD18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 347u), static_cast<std::uint8_t>(c.r[17].w[0]));  if (t) { goto L_0047DD34; } }
L_0047DD18:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0047DD24; }
    set32(c.r[4], ld32((c.r[16].w[0] + 320u)));
    c.budget -= 1;
L_0047DD24:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0047DD38; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DD34u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x0047DD34u) [[unlikely]] return; }
L_0047DD34:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0047DD38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DD40u);  if (depth < kMaxDepth) unit_00DF(c, 204u, depth + 1u); else { c.pc = 0x0047D9D0u; return; } if (c.pc != 0x0047DD40u) [[unlikely]] return; }
L_0047DD40:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 345u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0047DDD4; }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0047DD5C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0047DD68; } }
L_0047DD5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DD64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0047DD64u) [[unlikely]] return; }
L_0047DD64:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0047DD68:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 345u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0047DD7C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0047DD88; } }
L_0047DD7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DD84u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0047DD84u) [[unlikely]] return; }
L_0047DD84:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0047DD88:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0047DDAC; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 346u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0047DDAC; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DDACu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047DDACu) [[unlikely]] return; }
L_0047DDAC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0047DDD0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 347u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0047DDD0; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DDD0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047DDD0u) [[unlikely]] return; }
L_0047DDD0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0047DDD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0047DDF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0047DEB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 31280u);
    set32(c.r[3], c.r[3].w[0] + 31304u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 31336u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 31348u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[17].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 31372u);
    st32((c.r[17].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 28808u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DE58u); set32(c.r[4], c.r[2].w[0] + 96u);  if (depth < kMaxDepth) unit_0027(c, 186u, depth + 1u); else { c.pc = 0x0019EEA0u; return; } if (c.pc != 0x0047DE58u) [[unlikely]] return; }
L_0047DE58:
    set32(c.r[4], c.r[17].w[0] + 324u);
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 304u);  goto L_0047DE70; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DE6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0047DE6Cu) [[unlikely]] return; }
L_0047DE6C:
    set32(c.r[4], c.r[17].w[0] + 304u);
    c.budget -= 1;
L_0047DE70:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 284u);  goto L_0047DE84; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DE80u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0047DE80u) [[unlikely]] return; }
L_0047DE80:
    set32(c.r[4], c.r[17].w[0] + 284u);
    c.budget -= 1;
L_0047DE84:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0047DE98; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DE94u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0047DE94u) [[unlikely]] return; }
L_0047DE94:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0047DE98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DEA0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 138u, depth + 1u); else { c.pc = 0x001A2330u; return; } if (c.pc != 0x0047DEA0u) [[unlikely]] return; }
L_0047DEA0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0047DEBC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DEB8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0047DEB8u) [[unlikely]] return; }
L_0047DEB8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0047DEBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0047DED0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 2u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[7], 0u + 8u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DEECu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 169u, depth + 1u); else { c.pc = 0x001A2AC0u; return; } if (c.pc != 0x0047DEECu) [[unlikely]] return; }
L_0047DEEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 31280u);
    set32(c.r[3], c.r[3].w[0] + 31304u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 284u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 31336u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 31348u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 31372u);
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DF34u); st32((c.r[16].w[0] + 280u), 0u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0047DF34u) [[unlikely]] return; }
L_0047DF34:
    set32(c.r[4], c.r[16].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DF40u); st32((c.r[16].w[0] + 300u), 0u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0047DF40u) [[unlikely]] return; }
L_0047DF40:
    set32(c.r[4], c.r[16].w[0] + 324u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DF4Cu); st32((c.r[16].w[0] + 320u), 0u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0047DF4Cu) [[unlikely]] return; }
L_0047DF4C:
    st32((c.r[16].w[0] + 340u), 0u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 344u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 345u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 346u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 347u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 28808u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DF74u); set32(c.r[4], c.r[2].w[0] + 96u);  if (depth < kMaxDepth) unit_0027(c, 194u, depth + 1u); else { c.pc = 0x0019F0E0u; return; } if (c.pc != 0x0047DF74u) [[unlikely]] return; }
L_0047DF74:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0047DF90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29876u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0047DFAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0047DFBC; } }
L_0047DFAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DFB4u);  if (depth < kMaxDepth) unit_0028(c, 186u, depth + 1u); else { c.pc = 0x001A2F10u; return; } if (c.pc != 0x0047DFB4u) [[unlikely]] return; }
L_0047DFB4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0047DFBC:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0047DFD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047DFF4u); set32(c.r[4], c.r[4].w[0] - 24448u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0047DFF4u) [[unlikely]] return; }
L_0047DFF4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0047E004; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0047E014; } }
L_0047E004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E00Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 187u, depth + 1u); else { c.pc = 0x001A2F50u; return; } if (c.pc != 0x0047E00Cu) [[unlikely]] return; }
L_0047E00C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0047E014:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0047E030:
    set32(c.r[2], ld32((c.r[28].w[0] - 30864u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0047E040:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29876u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0047E05C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0047E064; } }
L_0047E05C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E064u);  if (depth < kMaxDepth) unit_0028(c, 190u, depth + 1u); else { c.pc = 0x001A2FC0u; return; } if (c.pc != 0x0047E064u) [[unlikely]] return; }
L_0047E064:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0047E070:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29876u)));  c.pc = t; return; }
L_0047E080:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 24432u);  c.pc = t; return; }
L_0047E090:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0047E0A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0047E0B4; } }
L_0047E0A4:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E0B4u); set32(c.r[5], ld32((c.r[28].w[0] - 30968u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047E0B4u) [[unlikely]] return; }
L_0047E0B4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0047E0C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0047E0D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0047E0E4; } }
L_0047E0D4:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E0E4u); set32(c.r[5], ld32((c.r[28].w[0] - 31060u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047E0E4u) [[unlikely]] return; }
L_0047E0E4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0047E0F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047DFD0u | kUnwind; return; } goto L_0047DFD0; }
L_0047E100:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047DF90u | kUnwind; return; } goto L_0047DF90; }
L_0047E110:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047E030u | kUnwind; return; } goto L_0047E030; }
L_0047E120:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047E040u | kUnwind; return; } goto L_0047E040; }
L_0047E130:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047E070u | kUnwind; return; } goto L_0047E070; }
L_0047E140:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047DDF0u | kUnwind; return; } goto L_0047DDF0; }
L_0047E150:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047DDF0u | kUnwind; return; } goto L_0047DDF0; }
L_0047E160:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 72u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047DDF0u | kUnwind; return; } goto L_0047DDF0; }
L_0047E170:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 132u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047DDF0u | kUnwind; return; } goto L_0047DDF0; }
L_0047E180:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0047E210; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 31504u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0047E1F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 16384u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0047E1F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 17776u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0047E1F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 18208u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0047E1F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0047E1F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E1F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0047E1F8u) [[unlikely]] return; }
L_0047E1F8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0047E214; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E210u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0047E210u) [[unlikely]] return; }
L_0047E210:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0047E214:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0047E230:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_0047E258; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 5u);  goto L_0047E250; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_0047E250:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047E25C; } }
L_0047E258:
    set32(c.r[2], c.r[2].w[0] - 22880u);
    c.budget -= 1;
L_0047E25C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047E270:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 22864u);  c.pc = t; return; }
L_0047E280:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 13;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0047E30C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E2BCu); set32(c.r[4], 0u + 368u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0047E2BCu) [[unlikely]] return; }
L_0047E2BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0047E30C; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] - 22832u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E2E0u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 63u, depth + 1u); else { c.pc = 0x001B1370u; return; } if (c.pc != 0x0047E2E0u) [[unlikely]] return; }
L_0047E2E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 31536u);
    set32(c.r[3], c.r[3].w[0] + 31560u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 352u), 0u);
    st32((c.r[16].w[0] + 356u), 0u);
    st32((c.r[16].w[0] + 360u), 0u);
    st32((c.r[16].w[0] + 364u), c.r[2].w[0]);
    c.budget -= 11;
L_0047E30C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E324u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002B(c, 100u, depth + 1u); else { c.pc = 0x001ADE10u; return; } if (c.pc != 0x0047E324u) [[unlikely]] return; }
L_0047E324:
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E340u); set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x0047E340u) [[unlikely]] return; }
L_0047E340:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E34Cu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x0047E34Cu) [[unlikely]] return; }
L_0047E34C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 112u);  goto L_0047E374; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0047E370; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E370u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x0047E370u) [[unlikely]] return; }
L_0047E370:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_0047E374:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E37Cu); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x0047E37Cu) [[unlikely]] return; }
L_0047E37C:
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    st32((c.r[16].w[0] + 352u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 116u));
    st32((c.r[16].w[0] + 356u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    st32((c.r[16].w[0] + 360u), c.f[0]);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E3A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047E3A4u) [[unlikely]] return; }
L_0047E3A4:
    st32((c.r[16].w[0] + 364u), c.f[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0047E3D0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    st8((c.r[4].w[0] + 140u), static_cast<std::uint8_t>(0u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E414u); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0047E414u) [[unlikely]] return; }
L_0047E414:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 141u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_0047E464; }
    set32(c.r[5], ld32((c.r[28].w[0] - 29004u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E434u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 372u, depth + 1u); else { c.pc = 0x00142DF0u; return; } if (c.pc != 0x0047E434u) [[unlikely]] return; }
L_0047E434:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 145u);  goto L_0047E448; }
    set32(c.r[5], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 1;
L_0047E448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E450u); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0047E450u) [[unlikely]] return; }
L_0047E450:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E45Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0047E45Cu) [[unlikely]] return; }
L_0047E45C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 224u);  if (t) { goto L_0047E470; } }
L_0047E464:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E46Cu); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0047E46Cu) [[unlikely]] return; }
L_0047E46C:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 1;
L_0047E470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E478u); set32(c.r[5], c.r[20].w[0] + 144u);  if (depth < kMaxDepth) unit_000A(c, 6u, depth + 1u); else { c.pc = 0x001280C0u; return; } if (c.pc != 0x0047E478u) [[unlikely]] return; }
L_0047E478:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 224u);  goto L_0047E870; }
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.f[12] = ld32((c.r[20].w[0] + 364u));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E49Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047E49Cu) [[unlikely]] return; }
L_0047E49C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 196u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 216u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[2], 0u + 16u);
    st32((c.r[29].w[0] + 212u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 218u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0047E4D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E4C8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0047E4C8u) [[unlikely]] return; }
L_0047E4C8:
    set32(c.r[2], c.r[29].w[0] + 196u);
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    c.budget -= 2;
L_0047E4D0:
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    c.f[0] = ld32((c.r[20].w[0] + 352u));
    set32(c.r[5], c.r[29].w[0] + 196u);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 356u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 360u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    set32(c.r[18], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[17], ld32((c.r[20].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 218u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[4], c.r[17].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 18;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[19], ld32((c.r[29].w[0] + 196u)));  goto L_0047E548; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E524u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0047E524u) [[unlikely]] return; }
L_0047E524:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_0047E540; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E53Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0047E53Cu) [[unlikely]] return; }
L_0047E53C:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_0047E540:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0047E56C; } }
L_0047E548:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E554u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0047E554u) [[unlikely]] return; }
L_0047E554:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E568u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0047E568u) [[unlikely]] return; }
L_0047E568:
    st32((c.r[16].w[0] + 4u), c.r[19].w[0]);
    c.budget -= 1;
L_0047E56C:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E580u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047E580u) [[unlikely]] return; }
L_0047E580:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 218u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 192u), c.r[3].w[0]);  if (t) { goto L_0047E5B0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[2], c.r[29].w[0] + 196u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[25], ld32((c.r[20].w[0])));  goto L_0047E5B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E5B0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0047E5B0u) [[unlikely]] return; }
L_0047E5B0:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_0047E5B4:
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E5C0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047E5C0u) [[unlikely]] return; }
L_0047E5C0:
    c.f[0] = ld32((c.r[20].w[0] + 352u));
    st32((c.r[20].w[0] + 252u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 356u));
    st32((c.r[20].w[0] + 256u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 252u));
    st32((c.r[20].w[0] + 312u), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 324u)));
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 224u)));  goto L_0047E854; }
    set32(c.r[2], ld32((c.r[20].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[20].w[0] + 144u));  goto L_0047E5FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[20].w[0] + 148u)));  if (t) { goto L_0047E604; } }
L_0047E5FC:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_0047E604:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[20].w[0] + 296u), 0u);  goto L_0047E638; }
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 224u));  goto L_0047E624; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 228u)));  if (t) { goto L_0047E62C; } }
L_0047E624:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_0047E62C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0047E850; } }
    st32((c.r[20].w[0] + 296u), 0u);
    c.budget -= 1;
L_0047E638:
    set32(c.r[2], 0u - 1u);
    st32((c.r[20].w[0] + 300u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[20].w[0] + 292u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 224u);  goto L_0047E834; }
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0047E7E0; } }
L_0047E65C:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.f[0] = ld32((c.r[20].w[0] + 364u));
    c.f[20] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E680u); c.f[12] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047E680u) [[unlikely]] return; }
L_0047E680:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], c.r[3].w[0] - 26768u);
    fpu_div(c, 3u, c.f[0], c.f[20]);
    set32(c.r[4], c.r[29].w[0] + 164u);
    set32(c.r[2], 0u + 16u);
    c.f[2] = ld32((c.r[20].w[0] + 352u));
    c.f[1] = ld32((c.r[20].w[0] + 356u));
    c.f[0] = ld32((c.r[20].w[0] + 360u));
    c.f[20] = fp::mul(c.f[2], c.f[3]);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    st16((c.r[29].w[0] + 186u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[29].w[0] + 184u), static_cast<std::uint16_t>(0u));
    c.f[21] = fp::mul(c.f[1], c.f[3]);
    st32((c.r[29].w[0] + 180u), c.r[4].w[0]);
    c.budget -= 18;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; c.f[22] = fp::mul(c.f[0], c.f[3]);  if (t) { goto L_0047E6D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E6D0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0047E6D0u) [[unlikely]] return; }
L_0047E6D0:
    set32(c.r[2], c.r[29].w[0] + 164u);
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    c.budget -= 2;
L_0047E6D8:
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[5], c.r[29].w[0] + 164u);
    st32((c.r[2].w[0]), c.f[20]);
    st32((c.r[2].w[0] + 4u), c.f[21]);
    st32((c.r[2].w[0] + 8u), c.f[22]);
    set32(c.r[18], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[22], ld32((c.r[20].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 186u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[4], c.r[22].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 15;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[17], ld32((c.r[29].w[0] + 164u)));  goto L_0047E744; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E720u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0047E720u) [[unlikely]] return; }
L_0047E720:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_0047E73C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E738u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0047E738u) [[unlikely]] return; }
L_0047E738:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_0047E73C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0047E768; } }
L_0047E744:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E750u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0047E750u) [[unlikely]] return; }
L_0047E750:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E764u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0047E764u) [[unlikely]] return; }
L_0047E764:
    st32((c.r[16].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 1;
L_0047E768:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E77Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047E77Cu) [[unlikely]] return; }
L_0047E77C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 186u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 160u), c.r[3].w[0]);  if (t) { goto L_0047E7AC; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[2], c.r[29].w[0] + 164u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { st32((c.r[20].w[0] + 252u), c.f[20]);  goto L_0047E7B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E7ACu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0047E7ACu) [[unlikely]] return; }
L_0047E7AC:
    st32((c.r[20].w[0] + 252u), c.f[20]);
    c.budget -= 1;
L_0047E7B0:
    set32(c.r[4], c.r[29].w[0] + 224u);
    st32((c.r[20].w[0] + 256u), c.f[21]);
    set32(c.r[5], c.r[20].w[0] + 292u);
    c.f[0] = ld32((c.r[20].w[0] + 252u));
    set32(c.r[6], c.r[20].w[0] + 268u);
    set32(c.r[7], c.r[20].w[0] + 160u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E7D0u); st32((c.r[20].w[0] + 312u), c.f[0]);  if (depth < kMaxDepth) unit_0014(c, 8u, depth + 1u); else { c.pc = 0x00150180u; return; } if (c.pc != 0x0047E7D0u) [[unlikely]] return; }
L_0047E7D0:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 268u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_0047E7E0; }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_0047E7E0:
    c.budget -= 2;
    if (c.r[21].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_0047E848; }
    c.budget -= 2;
    if (c.r[19].sd[0] < 0) { set32(c.r[3], c.r[19].w[0] >> 1);  goto L_0047E7FC; }
    c.f[0] = c.r[19].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0047E814; } }
L_0047E7FC:
    c.r[2].d[0] = c.r[19].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 6;
L_0047E814:
    c.f[1] = ld32((c.r[28].w[0] - 31536u));
    c.f[0] = ld32((c.r[28].w[0] - 31936u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047E65Cu | kUnwind; return; } goto L_0047E65C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047E844; } }
L_0047E834:
    set32(c.r[5], c.r[20].w[0] + 292u);
    set32(c.r[6], c.r[20].w[0] + 268u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E844u); set32(c.r[7], c.r[20].w[0] + 160u);  if (depth < kMaxDepth) unit_0014(c, 8u, depth + 1u); else { c.pc = 0x00150180u; return; } if (c.pc != 0x0047E844u) [[unlikely]] return; }
L_0047E844:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0047E848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E850u);  if (depth < kMaxDepth) unit_002C(c, 9u, depth + 1u); else { c.pc = 0x001B0410u; return; } if (c.pc != 0x0047E850u) [[unlikely]] return; }
L_0047E850:
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.budget -= 1;
L_0047E854:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 225u);  goto L_0047E864; }
    set32(c.r[5], ld32((c.r[29].w[0] + 232u)));
    c.budget -= 1;
L_0047E864:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E86Cu); set32(c.r[4], c.r[20].w[0] + 144u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0047E86Cu) [[unlikely]] return; }
L_0047E86C:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 1;
L_0047E870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E878u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0047E878u) [[unlikely]] return; }
L_0047E878:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
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
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_0047E8B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0047E904; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 31536u);
    set32(c.r[2], c.r[2].w[0] + 31560u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E8ECu); st32((c.r[17].w[0] + 60u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_002C(c, 55u, depth + 1u); else { c.pc = 0x001B1160u; return; } if (c.pc != 0x0047E8ECu) [[unlikely]] return; }
L_0047E8EC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0047E908; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E904u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0047E904u) [[unlikely]] return; }
L_0047E904:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0047E908:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0047E920:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29872u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0047E93C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0047E94C; } }
L_0047E93C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E944u);  if (depth < kMaxDepth) unit_002C(c, 98u, depth + 1u); else { c.pc = 0x001B1B10u; return; } if (c.pc != 0x0047E944u) [[unlikely]] return; }
L_0047E944:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0047E94C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0047E960:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E984u); set32(c.r[4], c.r[4].w[0] - 22944u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0047E984u) [[unlikely]] return; }
L_0047E984:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0047E994; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0047E9A4; } }
L_0047E994:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E99Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 100u, depth + 1u); else { c.pc = 0x001B1B70u; return; } if (c.pc != 0x0047E99Cu) [[unlikely]] return; }
L_0047E99C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0047E9A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0047E9C0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30844u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0047E9D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29872u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0047E9EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0047E9F4; } }
L_0047E9EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047E9F4u);  if (depth < kMaxDepth) unit_002C(c, 104u, depth + 1u); else { c.pc = 0x001B1C10u; return; } if (c.pc != 0x0047E9F4u) [[unlikely]] return; }
L_0047E9F4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0047EA00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29872u)));  c.pc = t; return; }
L_0047EA10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 22912u);  c.pc = t; return; }
L_0047EA20:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 60u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047E8B0u | kUnwind; return; } goto L_0047E8B0; }
L_0047EA30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0047EA78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 31696u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047EA60u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 94u, depth + 1u); else { c.pc = 0x00188FF0u; return; } if (c.pc != 0x0047EA60u) [[unlikely]] return; }
L_0047EA60:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0047EA7C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047EA78u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0047EA78u) [[unlikely]] return; }
L_0047EA78:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0047EA7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0047EA90:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 12;
    { const bool t = c.r[17].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0047EB3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047EAC8u); set32(c.r[4], 0u + 320u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0047EAC8u) [[unlikely]] return; }
L_0047EAC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0047EB3C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047EAE4u); set32(c.r[7], 0u + 8u);  if (depth < kMaxDepth) unit_0023(c, 62u, depth + 1u); else { c.pc = 0x0018D210u; return; } if (c.pc != 0x0047EAE4u) [[unlikely]] return; }
L_0047EAE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 31744u);
    set32(c.r[3], c.r[3].w[0] + 31768u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 31800u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 31812u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[17].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 31836u);
    c.r[3].d[0] = 0ull & 1ull;
    st32((c.r[17].w[0] + 132u), c.r[2].w[0]);
    c.r[4].d[0] = ld8((c.r[17].w[0] + 312u));
    set32(c.r[2], 0u - 2u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[17].w[0] + 312u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 316u), 0u);
    c.budget -= 22;
L_0047EB3C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047EB50u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 67u, depth + 1u); else { c.pc = 0x00188C30u; return; } if (c.pc != 0x0047EB50u) [[unlikely]] return; }
L_0047EB50:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047EB5Cu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_000F(c, 243u, depth + 1u); else { c.pc = 0x0013E740u; return; } if (c.pc != 0x0047EB5Cu) [[unlikely]] return; }
L_0047EB5C:
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 192u)));
    set32(c.r[6], c.r[6].w[0] - 22672u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047EB74u); set32(c.r[7], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x0047EB74u) [[unlikely]] return; }
L_0047EB74:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 196u)));  goto L_0047EBC4; }
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 129u);  goto L_0047EB90; }
    set32(c.r[4], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_0047EB90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047EB98u); set32(c.r[5], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x0047EB98u) [[unlikely]] return; }
L_0047EB98:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0047EBC0; } }
    c.f[20] = ld32((c.r[29].w[0] + 156u));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0047EBB4; } }
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 1;
L_0047EBB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047EBBCu);  if (depth < kMaxDepth) unit_00DF(c, 371u, depth + 1u); else { c.pc = 0x0047F080u; return; } if (c.pc != 0x0047EBBCu) [[unlikely]] return; }
L_0047EBBC:
    st32((c.r[2].w[0] + 316u), c.f[20]);
    c.budget -= 1;
L_0047EBC0:
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    c.budget -= 1;
L_0047EBC4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 192u)));
    set32(c.r[6], c.r[6].w[0] - 22661u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047EBD8u); set32(c.r[7], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x0047EBD8u) [[unlikely]] return; }
L_0047EBD8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 128u);  goto L_0047EC64; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047EBF0u); set32(c.r[5], c.r[5].w[0] - 22650u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0047EBF0u) [[unlikely]] return; }
L_0047EBF0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047EC00u); set32(c.r[5], c.r[5].w[0] - 22639u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0047EC00u) [[unlikely]] return; }
L_0047EC00:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047EC14u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 19u, depth + 1u); else { c.pc = 0x00140140u; return; } if (c.pc != 0x0047EC14u) [[unlikely]] return; }
L_0047EC14:
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047EC28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0047EC28u) [[unlikely]] return; }
L_0047EC28:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047EC34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0047EC34u) [[unlikely]] return; }
L_0047EC34:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0047EC40; } }
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 1;
L_0047EC40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047EC48u);  if (depth < kMaxDepth) unit_00DF(c, 371u, depth + 1u); else { c.pc = 0x0047F080u; return; } if (c.pc != 0x0047EC48u) [[unlikely]] return; }
L_0047EC48:
    c.r[5].d[0] = ld8((c.r[2].w[0] + 312u));
    set32(c.r[3], 0u - 2u);
    c.r[4].d[0] = c.r[16].d[0] & 1ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st8((c.r[2].w[0] + 312u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 7;
L_0047EC64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047EC6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0047EC6Cu) [[unlikely]] return; }
L_0047EC6C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0047EC90:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[20] = 0u;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047ECD0u); c.f[21] = c.f[20];  if (depth < kMaxDepth) unit_0022(c, 185u, depth + 1u); else { c.pc = 0x0018AB20u; return; } if (c.pc != 0x0047ECD0u) [[unlikely]] return; }
L_0047ECD0:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0047EE7C; } }
L_0047ECDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047ECE4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 152u, depth + 1u); else { c.pc = 0x00189FB0u; return; } if (c.pc != 0x0047ECE4u) [[unlikely]] return; }
L_0047ECE4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_0047EE7C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 196u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 216u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[2], 0u + 16u);
    st32((c.r[29].w[0] + 212u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 218u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0047ED24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047ED1Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0047ED1Cu) [[unlikely]] return; }
L_0047ED1C:
    set32(c.r[2], c.r[29].w[0] + 196u);
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    c.budget -= 2;
L_0047ED24:
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[5], c.r[29].w[0] + 196u);
    st32((c.r[2].w[0]), c.f[20]);
    st32((c.r[2].w[0] + 4u), c.f[21]);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[19], ld32((c.r[17].w[0] + 124u)));
    set32(c.r[22], ld32((c.r[17].w[0] + 80u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 218u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[4], c.r[22].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 15;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[18], ld32((c.r[29].w[0] + 196u)));  goto L_0047ED90; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047ED6Cu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0047ED6Cu) [[unlikely]] return; }
L_0047ED6C:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_0047ED88; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047ED84u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0047ED84u) [[unlikely]] return; }
L_0047ED84:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_0047ED88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0047EDB4; } }
L_0047ED90:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047ED9Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0047ED9Cu) [[unlikely]] return; }
L_0047ED9C:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047EDB0u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0047EDB0u) [[unlikely]] return; }
L_0047EDB0:
    st32((c.r[16].w[0] + 4u), c.r[18].w[0]);
    c.budget -= 1;
L_0047EDB4:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047EDC8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047EDC8u) [[unlikely]] return; }
L_0047EDC8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 218u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 26768u);
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 192u), c.r[4].w[0]);  if (t) { goto L_0047EDF8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[3], c.r[29].w[0] + 196u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 104u)));  goto L_0047EDFC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047EDF8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0047EDF8u) [[unlikely]] return; }
L_0047EDF8:
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 1;
L_0047EDFC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 16600u);
    set32(c.r[6], ld32((c.r[17].w[0] + 108u)));
    st32((c.r[29].w[0] + 160u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 164u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[21].w[0] + 312u));
    set32(c.r[5], ld32((c.r[17].w[0] + 112u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 116u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    st32((c.r[29].w[0] + 168u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 172u), c.r[5].w[0]);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 176u), c.r[4].w[0]);  if (t) { goto L_0047EE50; } }
    set32(c.r[3], c.r[4].w[0] - c.r[5].w[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[21].w[0] + 316u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.f[20] = fp::add(c.f[20], c.f[0]);  if (t) { goto L_0047EE6C; } }
L_0047EE50:
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[21].w[0] + 316u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[21] = fp::add(c.f[21], c.f[0]);
    c.budget -= 7;
L_0047EE6C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 16600u);
    st32((c.r[29].w[0] + 160u), c.r[3].w[0]);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 4;
L_0047EE7C:
    c.r[3].d[0] = c.r[20].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047ECDCu | kUnwind; return; } goto L_0047ECDC; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_0047EEC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047EED4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 53u, depth + 1u); else { c.pc = 0x0018CF30u; return; } if (c.pc != 0x0047EED4u) [[unlikely]] return; }
L_0047EED4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047EEDCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 344u, depth + 1u); else { c.pc = 0x0047EC90u; return; } if (c.pc != 0x0047EEDCu) [[unlikely]] return; }
L_0047EEDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0047EEF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29868u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0047EF0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0047EF1C; } }
L_0047EF0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047EF14u);  if (depth < kMaxDepth) unit_0023(c, 69u, depth + 1u); else { c.pc = 0x0018D3B0u; return; } if (c.pc != 0x0047EF14u) [[unlikely]] return; }
L_0047EF14:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0047EF1C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0047EF30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047EF54u); set32(c.r[4], c.r[4].w[0] - 22736u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0047EF54u) [[unlikely]] return; }
L_0047EF54:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0047EF64; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0047EF74; } }
L_0047EF64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047EF6Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 71u, depth + 1u); else { c.pc = 0x0018D410u; return; } if (c.pc != 0x0047EF6Cu) [[unlikely]] return; }
L_0047EF6C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0047EF74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0047EF90:
    set32(c.r[2], ld32((c.r[28].w[0] - 30920u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0047EFA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29868u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0047EFBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0047EFC4; } }
L_0047EFBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047EFC4u);  if (depth < kMaxDepth) unit_0023(c, 75u, depth + 1u); else { c.pc = 0x0018D4B0u; return; } if (c.pc != 0x0047EFC4u) [[unlikely]] return; }
L_0047EFC4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0047EFD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29868u)));  c.pc = t; return; }
L_0047EFE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 22704u);  c.pc = t; return; }
L_0047EFF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0047F068; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 31744u);
    set32(c.r[3], c.r[3].w[0] + 31768u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 31800u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 31812u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[17].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 31836u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F050u); st32((c.r[17].w[0] + 132u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0023(c, 57u, depth + 1u); else { c.pc = 0x0018D0C0u; return; } if (c.pc != 0x0047F050u) [[unlikely]] return; }
L_0047F050:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0047F06C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F068u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0047F068u) [[unlikely]] return; }
L_0047F068:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0047F06C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0047F080:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0047F094; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0047F0A4; } }
L_0047F094:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F0A4u); set32(c.r[5], ld32((c.r[28].w[0] - 29868u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047F0A4u) [[unlikely]] return; }
L_0047F0A4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0047F0B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047EF30u | kUnwind; return; } goto L_0047EF30; }
L_0047F0C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047EEF0u | kUnwind; return; } goto L_0047EEF0; }
L_0047F0D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047EF90u | kUnwind; return; } goto L_0047EF90; }
L_0047F0E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047EFA0u | kUnwind; return; } goto L_0047EFA0; }
L_0047F0F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047EFD0u | kUnwind; return; } goto L_0047EFD0; }
L_0047F100:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047EFF0u | kUnwind; return; } goto L_0047EFF0; }
L_0047F110:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047EFF0u | kUnwind; return; } goto L_0047EFF0; }
L_0047F120:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 72u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047EFF0u | kUnwind; return; } goto L_0047EFF0; }
L_0047F130:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 132u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047EFF0u | kUnwind; return; } goto L_0047EFF0; }
L_0047F140:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0047F1D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 32016u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0047F1B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 20656u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0047F1B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 17744u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0047F1B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 21552u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0047F1B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0047F1B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F1B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0047F1B8u) [[unlikely]] return; }
L_0047F1B8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0047F1D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F1D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0047F1D0u) [[unlikely]] return; }
L_0047F1D0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0047F1D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0047F1F0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_0047F218; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 5u);  goto L_0047F210; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_0047F210:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047F21C; } }
L_0047F218:
    set32(c.r[2], c.r[2].w[0] - 22568u);
    c.budget -= 1;
L_0047F21C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047F230:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 22560u);  c.pc = t; return; }
L_0047F240:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047F250:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0047F2DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F284u); set32(c.r[4], 0u + 288u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0047F284u) [[unlikely]] return; }
L_0047F284:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0047F2DC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F29Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_001D(c, 69u, depth + 1u); else { c.pc = 0x00174CD0u; return; } if (c.pc != 0x0047F29Cu) [[unlikely]] return; }
L_0047F29C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 32064u);
    set32(c.r[3], c.r[3].w[0] + 32088u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 32120u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 32132u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 32156u);
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 284u), 0u);
    c.budget -= 16;
L_0047F2DC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F2F0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 26u, depth + 1u); else { c.pc = 0x00174380u; return; } if (c.pc != 0x0047F2F0u) [[unlikely]] return; }
L_0047F2F0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0047F310:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.f[21] = 0u;
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_0047F4E8; } }
L_0047F34C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F354u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0047F354u) [[unlikely]] return; }
L_0047F354:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 148u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st16((c.r[29].w[0] + 168u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 164u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[2], 0u + 16u);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 170u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0047F38C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F384u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0047F384u) [[unlikely]] return; }
L_0047F384:
    set32(c.r[2], c.r[29].w[0] + 148u);
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 2;
L_0047F38C:
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[5], c.r[29].w[0] + 148u);
    st32((c.r[2].w[0]), c.f[21]);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[18], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[22], ld32((c.r[20].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 170u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[4], c.r[22].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 15;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[17], ld32((c.r[29].w[0] + 148u)));  goto L_0047F3F8; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F3D4u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0047F3D4u) [[unlikely]] return; }
L_0047F3D4:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_0047F3F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F3ECu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0047F3ECu) [[unlikely]] return; }
L_0047F3EC:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_0047F3F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0047F41C; } }
L_0047F3F8:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F404u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0047F404u) [[unlikely]] return; }
L_0047F404:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F418u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0047F418u) [[unlikely]] return; }
L_0047F418:
    st32((c.r[16].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 1;
L_0047F41C:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F430u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047F430u) [[unlikely]] return; }
L_0047F430:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 170u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 144u), c.r[3].w[0]);  if (t) { goto L_0047F460; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[2], c.r[29].w[0] + 148u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 52u)));  goto L_0047F464; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F460u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0047F460u) [[unlikely]] return; }
L_0047F460:
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    c.budget -= 1;
L_0047F464:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[3], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F47Cu); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x0047F47Cu) [[unlikely]] return; }
L_0047F47C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F488u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x0047F488u) [[unlikely]] return; }
L_0047F488:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 192u);  goto L_0047F4B0; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0047F4AC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F4ACu); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x0047F4ACu) [[unlikely]] return; }
L_0047F4AC:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 1;
L_0047F4B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F4B8u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x0047F4B8u) [[unlikely]] return; }
L_0047F4B8:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.f[20] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F4CCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047F4CCu) [[unlikely]] return; }
L_0047F4CC:
    c.f[1] = fp::mul(c.f[20], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[21] = fp::add(c.f[21], c.f[0]);
    c.budget -= 7;
L_0047F4E8:
    set32(c.r[3], ld32((c.r[21].w[0] + 272u)));
    c.r[3].d[0] = c.r[19].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047F34Cu | kUnwind; return; } goto L_0047F34C; }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0047F530:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_0047F6A0; } }
L_0047F55C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F564u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0047F564u) [[unlikely]] return; }
L_0047F564:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F57Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047F57Cu) [[unlikely]] return; }
L_0047F57C:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.f[12] = ld32((c.r[28].w[0] - 32316u));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F590u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047F590u) [[unlikely]] return; }
L_0047F590:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 116u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 136u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[2], 0u + 64u);
    st32((c.r[29].w[0] + 132u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 138u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0047F5C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F5BCu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0047F5BCu) [[unlikely]] return; }
L_0047F5BC:
    set32(c.r[2], c.r[29].w[0] + 116u);
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    c.budget -= 2;
L_0047F5C4:
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    c.f[0] = ld32((c.r[28].w[0] - 32312u));
    set32(c.r[5], c.r[29].w[0] + 116u);
    st32((c.r[2].w[0]), c.f[0]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    st32((c.r[2].w[0] + 8u), c.f[0]);
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[21], ld32((c.r[19].w[0] + 120u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    set32(c.r[4], c.r[21].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 16;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[17], ld32((c.r[29].w[0] + 116u)));  goto L_0047F634; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F610u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0047F610u) [[unlikely]] return; }
L_0047F610:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_0047F62C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F628u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0047F628u) [[unlikely]] return; }
L_0047F628:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_0047F62C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0047F658; } }
L_0047F634:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F640u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0047F640u) [[unlikely]] return; }
L_0047F640:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F654u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0047F654u) [[unlikely]] return; }
L_0047F654:
    st32((c.r[16].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 1;
L_0047F658:
    set32(c.r[25], ld32((c.r[19].w[0] + 60u)));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F66Cu); set32(c.r[4], c.r[19].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047F66Cu) [[unlikely]] return; }
L_0047F66C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 26768u);
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 112u), c.r[4].w[0]);  if (t) { goto L_0047F69C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[3], c.r[29].w[0] + 116u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0047F6A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F69Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0047F69Cu) [[unlikely]] return; }
L_0047F69C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0047F6A0:
    set32(c.r[3], ld32((c.r[20].w[0] + 272u)));
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047F55Cu | kUnwind; return; } goto L_0047F55C; }
    st32((c.r[20].w[0] + 284u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0047F6E0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], ld32((c.r[4].w[0] + 284u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F718u); c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0047F718u) [[unlikely]] return; }
L_0047F718:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F728u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0047F728u) [[unlikely]] return; }
L_0047F728:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 116u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F73Cu); set32(c.r[5], c.r[29].w[0] + 128u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047F73Cu) [[unlikely]] return; }
L_0047F73C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F74Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0047F74Cu) [[unlikely]] return; }
L_0047F74C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F754u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 98u, depth + 1u); else { c.pc = 0x001C13D0u; return; } if (c.pc != 0x0047F754u) [[unlikely]] return; }
L_0047F754:
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F764u); c.f[21] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 99u, depth + 1u); else { c.pc = 0x001C13F0u; return; } if (c.pc != 0x0047F764u) [[unlikely]] return; }
L_0047F764:
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 180u);
    c.f[20] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 200u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], 0u + 16u);
    st32((c.r[29].w[0] + 196u), c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 202u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0047F7A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F798u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0047F798u) [[unlikely]] return; }
L_0047F798:
    set32(c.r[2], c.r[29].w[0] + 180u);
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    c.budget -= 2;
L_0047F7A0:
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    set32(c.r[5], c.r[29].w[0] + 180u);
    st32((c.r[2].w[0]), c.f[20]);
    st32((c.r[2].w[0] + 4u), c.f[21]);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[18], ld32((c.r[19].w[0] + 52u)));
    set32(c.r[21], ld32((c.r[19].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 202u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[4], c.r[21].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 15;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[17], ld32((c.r[29].w[0] + 180u)));  goto L_0047F80C; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F7E8u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0047F7E8u) [[unlikely]] return; }
L_0047F7E8:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_0047F804; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F800u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0047F800u) [[unlikely]] return; }
L_0047F800:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_0047F804:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0047F830; } }
L_0047F80C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F818u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0047F818u) [[unlikely]] return; }
L_0047F818:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F82Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0047F82Cu) [[unlikely]] return; }
L_0047F82C:
    st32((c.r[16].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 1;
L_0047F830:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F844u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047F844u) [[unlikely]] return; }
L_0047F844:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 202u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 176u), c.r[3].w[0]);  if (t) { goto L_0047F874; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 196u)));
    set32(c.r[2], c.r[29].w[0] + 180u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0047F874; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F874u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0047F874u) [[unlikely]] return; }
L_0047F874:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 148u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 168u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[2], 0u + 64u);
    st32((c.r[29].w[0] + 164u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 170u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0047F8A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F8A0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0047F8A0u) [[unlikely]] return; }
L_0047F8A0:
    set32(c.r[2], c.r[29].w[0] + 148u);
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 2;
L_0047F8A8:
    set32(c.r[3], ld32((c.r[29].w[0] + 164u)));
    c.f[0] = ld32((c.r[28].w[0] - 32312u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[29].w[0] + 148u);
    st32((c.r[3].w[0]), c.f[0]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[19].w[0] + 120u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 170u)));
    set32(c.r[4], c.r[17].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 17;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[18], ld32((c.r[29].w[0] + 148u)));  goto L_0047F91C; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F8F8u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0047F8F8u) [[unlikely]] return; }
L_0047F8F8:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_0047F914; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F910u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0047F910u) [[unlikely]] return; }
L_0047F910:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_0047F914:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0047F940; } }
L_0047F91C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F928u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0047F928u) [[unlikely]] return; }
L_0047F928:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F93Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0047F93Cu) [[unlikely]] return; }
L_0047F93C:
    st32((c.r[16].w[0] + 4u), c.r[18].w[0]);
    c.budget -= 1;
L_0047F940:
    set32(c.r[25], ld32((c.r[19].w[0] + 60u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F954u); set32(c.r[4], c.r[19].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047F954u) [[unlikely]] return; }
L_0047F954:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 170u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 26768u);
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 144u), c.r[4].w[0]);  if (t) { goto L_0047F984; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[3], c.r[29].w[0] + 148u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[20].w[0] + 284u)));  goto L_0047F988; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047F984u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0047F984u) [[unlikely]] return; }
L_0047F984:
    set32(c.r[3], ld32((c.r[20].w[0] + 284u)));
    c.budget -= 1;
L_0047F988:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 284u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0047F9C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0047FA38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 32064u);
    set32(c.r[3], c.r[3].w[0] + 32088u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 32120u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 32132u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[17].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 32156u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047FA20u); st32((c.r[17].w[0] + 132u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001D(c, 65u, depth + 1u); else { c.pc = 0x00174C20u; return; } if (c.pc != 0x0047FA20u) [[unlikely]] return; }
L_0047FA20:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0047FA3C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047FA38u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0047FA38u) [[unlikely]] return; }
L_0047FA38:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0047FA3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0047FA50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29864u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0047FA6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0047FA7C; } }
L_0047FA6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047FA74u);  if (depth < kMaxDepth) unit_001D(c, 71u, depth + 1u); else { c.pc = 0x00174D70u; return; } if (c.pc != 0x0047FA74u) [[unlikely]] return; }
L_0047FA74:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0047FA7C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0047FA90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047FAB4u); set32(c.r[4], c.r[4].w[0] - 22624u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0047FAB4u) [[unlikely]] return; }
L_0047FAB4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0047FAC4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0047FAD4; } }
L_0047FAC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047FACCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 73u, depth + 1u); else { c.pc = 0x00174DD0u; return; } if (c.pc != 0x0047FACCu) [[unlikely]] return; }
L_0047FACC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0047FAD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0047FAF0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30972u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0047FB00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29864u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0047FB1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0047FB24; } }
L_0047FB1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047FB24u);  if (depth < kMaxDepth) unit_001D(c, 77u, depth + 1u); else { c.pc = 0x00174E70u; return; } if (c.pc != 0x0047FB24u) [[unlikely]] return; }
L_0047FB24:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0047FB30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29864u)));  c.pc = t; return; }
L_0047FB40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 22592u);  c.pc = t; return; }
L_0047FB50:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047FA90u | kUnwind; return; } goto L_0047FA90; }
L_0047FB60:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047FA50u | kUnwind; return; } goto L_0047FA50; }
L_0047FB70:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047FAF0u | kUnwind; return; } goto L_0047FAF0; }
L_0047FB80:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047FB00u | kUnwind; return; } goto L_0047FB00; }
L_0047FB90:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047FB30u | kUnwind; return; } goto L_0047FB30; }
L_0047FBA0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047F9C0u | kUnwind; return; } goto L_0047F9C0; }
L_0047FBB0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047F9C0u | kUnwind; return; } goto L_0047F9C0; }
L_0047FBC0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 72u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047F9C0u | kUnwind; return; } goto L_0047F9C0; }
L_0047FBD0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 132u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0047F9C0u | kUnwind; return; } goto L_0047F9C0; }
L_0047FBE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0047FC28; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 32288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047FC10u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00EC(c, 415u, depth + 1u); else { c.pc = 0x004B3470u; return; } if (c.pc != 0x0047FC10u) [[unlikely]] return; }
L_0047FC10:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0047FC2C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047FC28u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0047FC28u) [[unlikely]] return; }
L_0047FC28:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0047FC2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0047FC40:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_0047FC68; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 5u);  goto L_0047FC60; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_0047FC60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0047FC6C; } }
L_0047FC68:
    set32(c.r[2], c.r[2].w[0] - 22472u);
    c.budget -= 1;
L_0047FC6C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0047FC80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 22464u);  c.pc = t; return; }
L_0047FC90:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_00EC(c, 398u, depth); }
L_0047FCA0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[17].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0047FCEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047FCD4u); set32(c.r[4], 0u + 436u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0047FCD4u) [[unlikely]] return; }
L_0047FCD4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[17].d[0] = c.r[2].d[0] + 0ull;  goto L_0047FCEC; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047FCE8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E0(c, 91u, depth + 1u); else { c.pc = 0x00480D90u; return; } if (c.pc != 0x0047FCE8u) [[unlikely]] return; }
L_0047FCE8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0047FCEC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047FD00u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EC(c, 399u, depth + 1u); else { c.pc = 0x004B32D0u; return; } if (c.pc != 0x0047FD00u) [[unlikely]] return; }
L_0047FD00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047FD08u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0047FD08u) [[unlikely]] return; }
L_0047FD08:
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 192u)));
    set32(c.r[6], c.r[6].w[0] - 22432u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047FD20u); set32(c.r[7], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x0047FD20u) [[unlikely]] return; }
L_0047FD20:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 196u)));  goto L_0047FD50; }
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 81u);  goto L_0047FD3C; }
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_0047FD3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047FD44u); set32(c.r[5], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x0047FD44u) [[unlikely]] return; }
L_0047FD44:
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    st32((c.r[17].w[0] + 432u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    c.budget -= 3;
L_0047FD50:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 192u)));
    set32(c.r[6], c.r[6].w[0] - 22421u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047FD64u); set32(c.r[7], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x0047FD64u) [[unlikely]] return; }
L_0047FD64:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 196u)));  goto L_0047FD98; }
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 81u);  goto L_0047FD80; }
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_0047FD80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047FD88u); set32(c.r[5], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x0047FD88u) [[unlikely]] return; }
L_0047FD88:
    c.f[12] = ld32((c.r[29].w[0] + 104u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047FD94u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 195u, depth + 1u); else { c.pc = 0x00176630u; return; } if (c.pc != 0x0047FD94u) [[unlikely]] return; }
L_0047FD94:
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    c.budget -= 1;
L_0047FD98:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 192u)));
    set32(c.r[6], c.r[6].w[0] - 22403u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047FDACu); set32(c.r[7], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x0047FDACu) [[unlikely]] return; }
L_0047FDAC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 196u)));  goto L_0047FDDC; }
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 81u);  goto L_0047FDC8; }
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_0047FDC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047FDD0u); set32(c.r[5], c.r[29].w[0] + 100u);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x0047FDD0u) [[unlikely]] return; }
L_0047FDD0:
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    st32((c.r[17].w[0] + 420u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    c.budget -= 3;
L_0047FDDC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 192u)));
    set32(c.r[6], c.r[6].w[0] - 22390u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047FDF0u); set32(c.r[7], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x0047FDF0u) [[unlikely]] return; }
L_0047FDF0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 196u)));  goto L_0047FE20; }
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 81u);  goto L_0047FE0C; }
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_0047FE0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047FE14u); set32(c.r[5], c.r[29].w[0] + 100u);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x0047FE14u) [[unlikely]] return; }
L_0047FE14:
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    st32((c.r[17].w[0] + 424u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 196u)));
    c.budget -= 3;
L_0047FE20:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 192u)));
    set32(c.r[6], c.r[6].w[0] - 22371u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047FE34u); set32(c.r[7], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x0047FE34u) [[unlikely]] return; }
L_0047FE34:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_0047FE64; }
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 81u);  goto L_0047FE50; }
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_0047FE50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047FE58u); set32(c.r[5], c.r[29].w[0] + 100u);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x0047FE58u) [[unlikely]] return; }
L_0047FE58:
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    st32((c.r[17].w[0] + 428u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
L_0047FE64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047FE6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0047FE6Cu) [[unlikely]] return; }
L_0047FE6C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0047FE90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047FEA8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0023(c, 16u, depth + 1u); else { c.pc = 0x0018C2E0u; return; } if (c.pc != 0x0047FEA8u) [[unlikely]] return; }
L_0047FEA8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 396u)));  goto L_0047FEB8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 404u), 0u);  if (t) { goto L_0047FF3C; } }
L_0047FEB8:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0047FEC8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 404u), 0u);  if (t) { goto L_0047FF3C; } }
L_0047FEC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047FED0u);  if (depth < kMaxDepth) unit_0023(c, 16u, depth + 1u); else { c.pc = 0x0018C2E0u; return; } if (c.pc != 0x0047FED0u) [[unlikely]] return; }
L_0047FED0:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 304u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0047FEE4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0047FEE4u) [[unlikely]] return; }
L_0047FEE4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[16].w[0] + 408u), c.r[2].w[0]);  if (t) { goto L_0047FEF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 404u), 0u);  if (t) { goto L_0047FF3C; } }
L_0047FEF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047FEFCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EC(c, 424u, depth + 1u); else { c.pc = 0x004B3600u; return; } if (c.pc != 0x0047FEFCu) [[unlikely]] return; }
L_0047FEFC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));  if (t) { goto L_0047FF0C; } }
    set32(c.r[3], c.r[2].w[0] + 1u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 2;
L_0047FF0C:
    set32(c.r[3], ld32((c.r[16].w[0] + 408u)));
    set32(c.r[17], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 4;
    if (c.r[17].sd[0] >= 0) { st32((c.r[16].w[0] + 404u), c.r[17].w[0]);  goto L_0047FF3C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047FF24u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 186u, depth + 1u); else { c.pc = 0x0018AB50u; return; } if (c.pc != 0x0047FF24u) [[unlikely]] return; }
L_0047FF24:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_0047FF38; }
    set32(c.r[3], ld32((c.r[16].w[0] + 396u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[3].w[0] + c.r[17].w[0]);  if (t) { goto L_0047FF38; } }
L_0047FF38:
    st32((c.r[16].w[0] + 404u), c.r[17].w[0]);
    c.budget -= 1;
L_0047FF3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0047FF50:
    set32(c.r[29], c.r[29].w[0] - 352u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047FF84u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00EC(c, 438u, depth + 1u); else { c.pc = 0x004B38A0u; return; } if (c.pc != 0x0047FF84u) [[unlikely]] return; }
L_0047FF84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047FF8Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EC(c, 424u, depth + 1u); else { c.pc = 0x004B3600u; return; } if (c.pc != 0x0047FF8Cu) [[unlikely]] return; }
L_0047FF8C:
    c.f[0] = ld32((c.r[20].w[0] + 352u));
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[30].w[0] - 1u);
    set32(c.r[22], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    st32((c.r[29].w[0] + 336u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 356u));
    st32((c.r[29].w[0] + 340u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 360u));
    c.budget -= 10;
    { const bool t = c.r[3].sd[0] >= 0; st32((c.r[29].w[0] + 344u), c.f[0]);  if (t) { goto L_0047FFBC; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[22], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 2;
L_0047FFBC:
    set32(c.r[3], ld32((c.r[20].w[0] + 408u)));
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[22].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);  if (t) { [[clang::musttail]] return unit_00E0(c, 36u, depth); } }
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 1;
L_0047FFD4:
    set32(c.r[16], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 3;
    if (c.r[16].sd[0] >= 0) { set32(c.r[2], ld32((c.r[20].w[0] + 396u)));  [[clang::musttail]] return unit_00E0(c, 2u, depth); }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0047FFE8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 186u, depth + 1u); else { c.pc = 0x0018AB50u; return; } if (c.pc != 0x0047FFE8u) [[unlikely]] return; }
L_0047FFE8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  [[clang::musttail]] return unit_00E0(c, 1u, depth); }
    set32(c.r[2], ld32((c.r[20].w[0] + 396u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[16].w[0]);  if (t) { [[clang::musttail]] return unit_00E0(c, 1u, depth); } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
    [[clang::musttail]] return unit_00E0(c, 1u, depth);
}

}
