#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_006F[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 8,
    0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0, 18,
    0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0,
    22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26,
    0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0,
    0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 37, 0, 38, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0,
    41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0,
    0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 51, 0, 52, 0, 0,
    0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0,
    0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65,
    0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0,
    0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0,
    0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0,
    82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0,
    0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0,
    0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0,
    101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110,
    0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0,
    0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126,
    0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 131, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0,
    142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145,
    0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0,
    0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0,
    183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0,
    0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0,
    0, 196, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206,
    0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0,
    223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    227, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0,
    234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0,
    0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0,
    0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0,
    0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0,
    0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 0,
    0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0,
    0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0,
    277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 282, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 287, 0,
    0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0,
    294, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0,
    0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0,
    302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    311, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0,
    0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0,
    324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 329, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 334, 0,
    0, 335, 0, 0, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0,
    341, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0,
    0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0,
    349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    358, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0,
    363, 0, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 369,
    0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 375, 0, 0, 0, 0, 0, 376, 0, 0, 0, 377,
    0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 382, 0,
    0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 385, 0, 0, 0, 0, 0, 386, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 393, 0,
    0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 399, 0,
    0, 0, 400, 0, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 406,
    0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0,
    411, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0,
    417, 0, 0, 0, 418, 0, 0, 0, 0, 419, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0,
    0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 426, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0,
    0, 429, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 433, 0, 0,
    0, 0, 0, 434, 0, 0, 0, 435, 0, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 439, 0, 0, 440, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 443, 0, 0, 0, 0, 0, 444, 0, 0, 445,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 0,
    0, 0, 450, 0, 0, 0, 451, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 454, 0, 0, 0, 455, 0, 0, 0, 0,
    0, 0, 0, 456, 0, 0, 457, 0, 0, 0, 458, 0, 0, 0, 0, 459, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 462,
    0, 0, 0, 463, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 466, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0,
    0, 0, 468, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 472, 0, 0, 0, 473, 0, 0,
    0, 0, 0, 0, 0, 474, 0, 0, 475, 0, 0, 0, 476, 0, 0, 0, 0, 477, 0, 0, 0, 478, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0,
    0, 480, 0, 0, 0, 481, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 484, 0, 0, 0, 0, 485, 0, 0, 0,
    0, 0, 0, 0, 486, 0, 0, 0, 0, 487, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 492, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0,
    494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 496, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0,
    0, 498, 0, 0, 499, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 502, 0, 0, 0, 503, 0, 0, 0, 0, 504, 0, 0, 0,
    0, 505, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 508, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    510, 0, 0, 0, 0, 511, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 515, 0, 0,
    0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 520, 0, 0,
    0, 521, 0, 0, 0, 0, 522, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0,
    526, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 529, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0,
    532, 0, 0, 0, 533, 0, 0, 0, 0, 534, 0, 0, 0, 0, 535, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 538,
    0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 541, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 543,
    0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 545, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 548, 0,
    0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 550, 0, 0, 0, 551, 0, 0, 0, 0, 552, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 554, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 557, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0,
    0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0,
};

void unit_006F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002BC000;
    case 2u: goto L_002BC038;
    case 3u: goto L_002BC09C;
    case 4u: goto L_002BC0A8;
    case 5u: goto L_002BC0E4;
    case 6u: goto L_002BC128;
    case 7u: goto L_002BC1E0;
    case 8u: goto L_002BC1FC;
    case 9u: goto L_002BC204;
    case 10u: goto L_002BC230;
    case 11u: goto L_002BC284;
    case 12u: goto L_002BC294;
    case 13u: goto L_002BC2B0;
    case 14u: goto L_002BC2BC;
    case 15u: goto L_002BC340;
    case 16u: goto L_002BC364;
    case 17u: goto L_002BC370;
    case 18u: goto L_002BC37C;
    case 19u: goto L_002BC39C;
    case 20u: goto L_002BC3D8;
    case 21u: goto L_002BC3E0;
    case 22u: goto L_002BC400;
    case 23u: goto L_002BC41C;
    case 24u: goto L_002BC440;
    case 25u: goto L_002BC460;
    case 26u: goto L_002BC47C;
    case 27u: goto L_002BC4A0;
    case 28u: goto L_002BC4C4;
    case 29u: goto L_002BC4E4;
    case 30u: goto L_002BC4F4;
    case 31u: goto L_002BC51C;
    case 32u: goto L_002BC538;
    case 33u: goto L_002BC570;
    case 34u: goto L_002BC590;
    case 35u: goto L_002BC5B4;
    case 36u: goto L_002BC5BC;
    case 37u: goto L_002BC5CC;
    case 38u: goto L_002BC5D4;
    case 39u: goto L_002BC5DC;
    case 40u: goto L_002BC5E8;
    case 41u: goto L_002BC600;
    case 42u: goto L_002BC620;
    case 43u: goto L_002BC630;
    case 44u: goto L_002BC64C;
    case 45u: goto L_002BC660;
    case 46u: goto L_002BC670;
    case 47u: goto L_002BC690;
    case 48u: goto L_002BC6AC;
    case 49u: goto L_002BC6D0;
    case 50u: goto L_002BC6E0;
    case 51u: goto L_002BC6EC;
    case 52u: goto L_002BC6F4;
    case 53u: goto L_002BC710;
    case 54u: goto L_002BC72C;
    case 55u: goto L_002BC738;
    case 56u: goto L_002BC740;
    case 57u: goto L_002BC790;
    case 58u: goto L_002BC7DC;
    case 59u: goto L_002BC7F0;
    case 60u: goto L_002BC810;
    case 61u: goto L_002BC820;
    case 62u: goto L_002BC83C;
    case 63u: goto L_002BC850;
    case 64u: goto L_002BC860;
    case 65u: goto L_002BC87C;
    case 66u: goto L_002BC88C;
    case 67u: goto L_002BC8A8;
    case 68u: goto L_002BC8BC;
    case 69u: goto L_002BC8CC;
    case 70u: goto L_002BC8E0;
    case 71u: goto L_002BC8F4;
    case 72u: goto L_002BC914;
    case 73u: goto L_002BC91C;
    case 74u: goto L_002BC950;
    case 75u: goto L_002BC964;
    case 76u: goto L_002BC984;
    case 77u: goto L_002BC994;
    case 78u: goto L_002BC9B0;
    case 79u: goto L_002BC9C4;
    case 80u: goto L_002BC9D4;
    case 81u: goto L_002BC9F0;
    case 82u: goto L_002BCA00;
    case 83u: goto L_002BCA1C;
    case 84u: goto L_002BCA30;
    case 85u: goto L_002BCA40;
    case 86u: goto L_002BCA54;
    case 87u: goto L_002BCA68;
    case 88u: goto L_002BCA88;
    case 89u: goto L_002BCAB0;
    case 90u: goto L_002BCAE4;
    case 91u: goto L_002BCAF4;
    case 92u: goto L_002BCB10;
    case 93u: goto L_002BCB24;
    case 94u: goto L_002BCB34;
    case 95u: goto L_002BCB50;
    case 96u: goto L_002BCB94;
    case 97u: goto L_002BCBA4;
    case 98u: goto L_002BCBC0;
    case 99u: goto L_002BCBD4;
    case 100u: goto L_002BCBE4;
    case 101u: goto L_002BCC00;
    case 102u: goto L_002BCC10;
    case 103u: goto L_002BCC2C;
    case 104u: goto L_002BCC40;
    case 105u: goto L_002BCC50;
    case 106u: goto L_002BCC70;
    case 107u: goto L_002BCCA0;
    case 108u: goto L_002BCCD0;
    case 109u: goto L_002BCCE0;
    case 110u: goto L_002BCCFC;
    case 111u: goto L_002BCD08;
    case 112u: goto L_002BCD90;
    case 113u: goto L_002BCDC0;
    case 114u: goto L_002BCE28;
    case 115u: goto L_002BCE48;
    case 116u: goto L_002BCE90;
    case 117u: goto L_002BCEA0;
    case 118u: goto L_002BCEBC;
    case 119u: goto L_002BCEC8;
    case 120u: goto L_002BCF90;
    case 121u: goto L_002BCFE8;
    case 122u: goto L_002BD008;
    case 123u: goto L_002BD090;
    case 124u: goto L_002BD0CC;
    case 125u: goto L_002BD0E8;
    case 126u: goto L_002BD0FC;
    case 127u: goto L_002BD11C;
    case 128u: goto L_002BD12C;
    case 129u: goto L_002BD144;
    case 130u: goto L_002BD158;
    case 131u: goto L_002BD18C;
    case 132u: goto L_002BD19C;
    case 133u: goto L_002BD1A4;
    case 134u: goto L_002BD1B8;
    case 135u: goto L_002BD1D8;
    case 136u: goto L_002BD1E8;
    case 137u: goto L_002BD214;
    case 138u: goto L_002BD224;
    case 139u: goto L_002BD244;
    case 140u: goto L_002BD250;
    case 141u: goto L_002BD25C;
    case 142u: goto L_002BD280;
    case 143u: goto L_002BD2D4;
    case 144u: goto L_002BD2EC;
    case 145u: goto L_002BD2FC;
    case 146u: goto L_002BD320;
    case 147u: goto L_002BD340;
    case 148u: goto L_002BD398;
    case 149u: goto L_002BD3B4;
    case 150u: goto L_002BD3DC;
    case 151u: goto L_002BD3F4;
    case 152u: goto L_002BD410;
    case 153u: goto L_002BD448;
    case 154u: goto L_002BD458;
    case 155u: goto L_002BD4A4;
    case 156u: goto L_002BD4CC;
    case 157u: goto L_002BD4E4;
    case 158u: goto L_002BD510;
    case 159u: goto L_002BD54C;
    case 160u: goto L_002BD560;
    case 161u: goto L_002BD578;
    case 162u: goto L_002BD5B4;
    case 163u: goto L_002BD5C4;
    case 164u: goto L_002BD5E0;
    case 165u: goto L_002BD5EC;
    case 166u: goto L_002BD6C0;
    case 167u: goto L_002BD700;
    case 168u: goto L_002BD710;
    case 169u: goto L_002BD734;
    case 170u: goto L_002BD744;
    case 171u: goto L_002BD764;
    case 172u: goto L_002BD790;
    case 173u: goto L_002BD7B0;
    case 174u: goto L_002BD7B8;
    case 175u: goto L_002BD7D8;
    case 176u: goto L_002BD810;
    case 177u: goto L_002BD830;
    case 178u: goto L_002BD864;
    case 179u: goto L_002BD89C;
    case 180u: goto L_002BD8AC;
    case 181u: goto L_002BD8D0;
    case 182u: goto L_002BD8E0;
    case 183u: goto L_002BD900;
    case 184u: goto L_002BD928;
    case 185u: goto L_002BD938;
    case 186u: goto L_002BD948;
    case 187u: goto L_002BD964;
    case 188u: goto L_002BD994;
    case 189u: goto L_002BD9C0;
    case 190u: goto L_002BD9D0;
    case 191u: goto L_002BD9F4;
    case 192u: goto L_002BDA04;
    case 193u: goto L_002BDA24;
    case 194u: goto L_002BDA54;
    case 195u: goto L_002BDA64;
    case 196u: goto L_002BDA84;
    case 197u: goto L_002BDA90;
    case 198u: goto L_002BDA9C;
    case 199u: goto L_002BDABC;
    case 200u: goto L_002BDAD8;
    case 201u: goto L_002BDAE4;
    case 202u: goto L_002BDB1C;
    case 203u: goto L_002BDB3C;
    case 204u: goto L_002BDB4C;
    case 205u: goto L_002BDB68;
    case 206u: goto L_002BDB7C;
    case 207u: goto L_002BDB8C;
    case 208u: goto L_002BDBC0;
    case 209u: goto L_002BDC08;
    case 210u: goto L_002BDC38;
    case 211u: goto L_002BDC48;
    case 212u: goto L_002BDC64;
    case 213u: goto L_002BDC70;
    case 214u: goto L_002BDCF8;
    case 215u: goto L_002BDD20;
    case 216u: goto L_002BDD30;
    case 217u: goto L_002BDD4C;
    case 218u: goto L_002BDD84;
    case 219u: goto L_002BDD94;
    case 220u: goto L_002BDDB4;
    case 221u: goto L_002BDDC0;
    case 222u: goto L_002BDDDC;
    case 223u: goto L_002BDE00;
    case 224u: goto L_002BDE18;
    case 225u: goto L_002BDE44;
    case 226u: goto L_002BDE54;
    case 227u: goto L_002BDE80;
    case 228u: goto L_002BDE90;
    case 229u: goto L_002BDEA4;
    case 230u: goto L_002BDEB0;
    case 231u: goto L_002BDEC4;
    case 232u: goto L_002BDEE0;
    case 233u: goto L_002BDEF0;
    case 234u: goto L_002BDF00;
    case 235u: goto L_002BDF10;
    case 236u: goto L_002BDF30;
    case 237u: goto L_002BDF3C;
    case 238u: goto L_002BDF50;
    case 239u: goto L_002BDF68;
    case 240u: goto L_002BDF78;
    case 241u: goto L_002BDF88;
    case 242u: goto L_002BDFB8;
    case 243u: goto L_002BDFC8;
    case 244u: goto L_002BDFE4;
    case 245u: goto L_002BDFF8;
    case 246u: goto L_002BE008;
    case 247u: goto L_002BE01C;
    case 248u: goto L_002BE02C;
    case 249u: goto L_002BE048;
    case 250u: goto L_002BE078;
    case 251u: goto L_002BE08C;
    case 252u: goto L_002BE0A4;
    case 253u: goto L_002BE0B4;
    case 254u: goto L_002BE0C4;
    case 255u: goto L_002BE0F4;
    case 256u: goto L_002BE104;
    case 257u: goto L_002BE120;
    case 258u: goto L_002BE134;
    case 259u: goto L_002BE144;
    case 260u: goto L_002BE158;
    case 261u: goto L_002BE168;
    case 262u: goto L_002BE184;
    case 263u: goto L_002BE1D0;
    case 264u: goto L_002BE204;
    case 265u: goto L_002BE214;
    case 266u: goto L_002BE230;
    case 267u: goto L_002BE24C;
    case 268u: goto L_002BE270;
    case 269u: goto L_002BE2D4;
    case 270u: goto L_002BE2DC;
    case 271u: goto L_002BE2F4;
    case 272u: goto L_002BE304;
    case 273u: goto L_002BE318;
    case 274u: goto L_002BE328;
    case 275u: goto L_002BE334;
    case 276u: goto L_002BE374;
    case 277u: goto L_002BE380;
    case 278u: goto L_002BE394;
    case 279u: goto L_002BE3B8;
    case 280u: goto L_002BE3C0;
    case 281u: goto L_002BE3D8;
    case 282u: goto L_002BE3E4;
    case 283u: goto L_002BE418;
    case 284u: goto L_002BE43C;
    case 285u: goto L_002BE448;
    case 286u: goto L_002BE458;
    case 287u: goto L_002BE478;
    case 288u: goto L_002BE484;
    case 289u: goto L_002BE494;
    case 290u: goto L_002BE4A8;
    case 291u: goto L_002BE4BC;
    case 292u: goto L_002BE4CC;
    case 293u: goto L_002BE4EC;
    case 294u: goto L_002BE500;
    case 295u: goto L_002BE510;
    case 296u: goto L_002BE538;
    case 297u: goto L_002BE570;
    case 298u: goto L_002BE590;
    case 299u: goto L_002BE5B0;
    case 300u: goto L_002BE5D0;
    case 301u: goto L_002BE5F0;
    case 302u: goto L_002BE600;
    case 303u: goto L_002BE628;
    case 304u: goto L_002BE638;
    case 305u: goto L_002BE650;
    case 306u: goto L_002BE688;
    case 307u: goto L_002BE698;
    case 308u: goto L_002BE6B4;
    case 309u: goto L_002BE6C8;
    case 310u: goto L_002BE6D8;
    case 311u: goto L_002BE700;
    case 312u: goto L_002BE720;
    case 313u: goto L_002BE748;
    case 314u: goto L_002BE758;
    case 315u: goto L_002BE770;
    case 316u: goto L_002BE7D4;
    case 317u: goto L_002BE7DC;
    case 318u: goto L_002BE7F4;
    case 319u: goto L_002BE804;
    case 320u: goto L_002BE818;
    case 321u: goto L_002BE828;
    case 322u: goto L_002BE834;
    case 323u: goto L_002BE874;
    case 324u: goto L_002BE880;
    case 325u: goto L_002BE894;
    case 326u: goto L_002BE8B8;
    case 327u: goto L_002BE8C0;
    case 328u: goto L_002BE8D8;
    case 329u: goto L_002BE8E4;
    case 330u: goto L_002BE918;
    case 331u: goto L_002BE93C;
    case 332u: goto L_002BE948;
    case 333u: goto L_002BE958;
    case 334u: goto L_002BE978;
    case 335u: goto L_002BE984;
    case 336u: goto L_002BE994;
    case 337u: goto L_002BE9A8;
    case 338u: goto L_002BE9BC;
    case 339u: goto L_002BE9CC;
    case 340u: goto L_002BE9EC;
    case 341u: goto L_002BEA00;
    case 342u: goto L_002BEA10;
    case 343u: goto L_002BEA38;
    case 344u: goto L_002BEA70;
    case 345u: goto L_002BEA90;
    case 346u: goto L_002BEAB0;
    case 347u: goto L_002BEAD0;
    case 348u: goto L_002BEAF0;
    case 349u: goto L_002BEB00;
    case 350u: goto L_002BEB28;
    case 351u: goto L_002BEB38;
    case 352u: goto L_002BEB50;
    case 353u: goto L_002BEB88;
    case 354u: goto L_002BEB98;
    case 355u: goto L_002BEBB4;
    case 356u: goto L_002BEBC8;
    case 357u: goto L_002BEBD8;
    case 358u: goto L_002BEC00;
    case 359u: goto L_002BEC20;
    case 360u: goto L_002BEC48;
    case 361u: goto L_002BEC58;
    case 362u: goto L_002BEC70;
    case 363u: goto L_002BEC80;
    case 364u: goto L_002BEC94;
    case 365u: goto L_002BECA4;
    case 366u: goto L_002BECB0;
    case 367u: goto L_002BECD0;
    case 368u: goto L_002BECD8;
    case 369u: goto L_002BECFC;
    case 370u: goto L_002BED18;
    case 371u: goto L_002BED3C;
    case 372u: goto L_002BED70;
    case 373u: goto L_002BEDA4;
    case 374u: goto L_002BEDCC;
    case 375u: goto L_002BEDD4;
    case 376u: goto L_002BEDEC;
    case 377u: goto L_002BEDFC;
    case 378u: goto L_002BEE10;
    case 379u: goto L_002BEE20;
    case 380u: goto L_002BEE2C;
    case 381u: goto L_002BEE6C;
    case 382u: goto L_002BEE78;
    case 383u: goto L_002BEE8C;
    case 384u: goto L_002BEEB0;
    case 385u: goto L_002BEEB8;
    case 386u: goto L_002BEED0;
    case 387u: goto L_002BEEDC;
    case 388u: goto L_002BEF10;
    case 389u: goto L_002BEF20;
    case 390u: goto L_002BEF3C;
    case 391u: goto L_002BEF4C;
    case 392u: goto L_002BEF68;
    case 393u: goto L_002BEF78;
    case 394u: goto L_002BEF8C;
    case 395u: goto L_002BEFB0;
    case 396u: goto L_002BEFBC;
    case 397u: goto L_002BEFCC;
    case 398u: goto L_002BEFEC;
    case 399u: goto L_002BEFF8;
    case 400u: goto L_002BF008;
    case 401u: goto L_002BF01C;
    case 402u: goto L_002BF02C;
    case 403u: goto L_002BF03C;
    case 404u: goto L_002BF05C;
    case 405u: goto L_002BF06C;
    case 406u: goto L_002BF07C;
    case 407u: goto L_002BF0A0;
    case 408u: goto L_002BF0B4;
    case 409u: goto L_002BF0C8;
    case 410u: goto L_002BF0E8;
    case 411u: goto L_002BF100;
    case 412u: goto L_002BF114;
    case 413u: goto L_002BF138;
    case 414u: goto L_002BF144;
    case 415u: goto L_002BF154;
    case 416u: goto L_002BF174;
    case 417u: goto L_002BF180;
    case 418u: goto L_002BF190;
    case 419u: goto L_002BF1A4;
    case 420u: goto L_002BF1B4;
    case 421u: goto L_002BF1C4;
    case 422u: goto L_002BF1E4;
    case 423u: goto L_002BF1F4;
    case 424u: goto L_002BF204;
    case 425u: goto L_002BF228;
    case 426u: goto L_002BF23C;
    case 427u: goto L_002BF250;
    case 428u: goto L_002BF270;
    case 429u: goto L_002BF284;
    case 430u: goto L_002BF294;
    case 431u: goto L_002BF2B0;
    case 432u: goto L_002BF2EC;
    case 433u: goto L_002BF2F4;
    case 434u: goto L_002BF30C;
    case 435u: goto L_002BF31C;
    case 436u: goto L_002BF330;
    case 437u: goto L_002BF340;
    case 438u: goto L_002BF34C;
    case 439u: goto L_002BF38C;
    case 440u: goto L_002BF398;
    case 441u: goto L_002BF3AC;
    case 442u: goto L_002BF3D0;
    case 443u: goto L_002BF3D8;
    case 444u: goto L_002BF3F0;
    case 445u: goto L_002BF3FC;
    case 446u: goto L_002BF430;
    case 447u: goto L_002BF440;
    case 448u: goto L_002BF45C;
    case 449u: goto L_002BF46C;
    case 450u: goto L_002BF488;
    case 451u: goto L_002BF498;
    case 452u: goto L_002BF4AC;
    case 453u: goto L_002BF4D0;
    case 454u: goto L_002BF4DC;
    case 455u: goto L_002BF4EC;
    case 456u: goto L_002BF50C;
    case 457u: goto L_002BF518;
    case 458u: goto L_002BF528;
    case 459u: goto L_002BF53C;
    case 460u: goto L_002BF54C;
    case 461u: goto L_002BF55C;
    case 462u: goto L_002BF57C;
    case 463u: goto L_002BF58C;
    case 464u: goto L_002BF59C;
    case 465u: goto L_002BF5C0;
    case 466u: goto L_002BF5D4;
    case 467u: goto L_002BF5E8;
    case 468u: goto L_002BF608;
    case 469u: goto L_002BF620;
    case 470u: goto L_002BF634;
    case 471u: goto L_002BF658;
    case 472u: goto L_002BF664;
    case 473u: goto L_002BF674;
    case 474u: goto L_002BF694;
    case 475u: goto L_002BF6A0;
    case 476u: goto L_002BF6B0;
    case 477u: goto L_002BF6C4;
    case 478u: goto L_002BF6D4;
    case 479u: goto L_002BF6E4;
    case 480u: goto L_002BF704;
    case 481u: goto L_002BF714;
    case 482u: goto L_002BF724;
    case 483u: goto L_002BF748;
    case 484u: goto L_002BF75C;
    case 485u: goto L_002BF770;
    case 486u: goto L_002BF790;
    case 487u: goto L_002BF7A4;
    case 488u: goto L_002BF7B4;
    case 489u: goto L_002BF7D0;
    case 490u: goto L_002BF810;
    case 491u: goto L_002BF838;
    case 492u: goto L_002BF84C;
    case 493u: goto L_002BF860;
    case 494u: goto L_002BF880;
    case 495u: goto L_002BF8BC;
    case 496u: goto L_002BF8CC;
    case 497u: goto L_002BF8E0;
    case 498u: goto L_002BF904;
    case 499u: goto L_002BF910;
    case 500u: goto L_002BF920;
    case 501u: goto L_002BF940;
    case 502u: goto L_002BF94C;
    case 503u: goto L_002BF95C;
    case 504u: goto L_002BF970;
    case 505u: goto L_002BF984;
    case 506u: goto L_002BF994;
    case 507u: goto L_002BF9B4;
    case 508u: goto L_002BF9C8;
    case 509u: goto L_002BF9D8;
    case 510u: goto L_002BFA00;
    case 511u: goto L_002BFA14;
    case 512u: goto L_002BFA28;
    case 513u: goto L_002BFA48;
    case 514u: goto L_002BFA64;
    case 515u: goto L_002BFA74;
    case 516u: goto L_002BFA84;
    case 517u: goto L_002BFAB4;
    case 518u: goto L_002BFAC4;
    case 519u: goto L_002BFAE0;
    case 520u: goto L_002BFAF4;
    case 521u: goto L_002BFB04;
    case 522u: goto L_002BFB18;
    case 523u: goto L_002BFB28;
    case 524u: goto L_002BFB44;
    case 525u: goto L_002BFB70;
    case 526u: goto L_002BFB80;
    case 527u: goto L_002BFB94;
    case 528u: goto L_002BFBB8;
    case 529u: goto L_002BFBC4;
    case 530u: goto L_002BFBD4;
    case 531u: goto L_002BFBF4;
    case 532u: goto L_002BFC00;
    case 533u: goto L_002BFC10;
    case 534u: goto L_002BFC24;
    case 535u: goto L_002BFC38;
    case 536u: goto L_002BFC48;
    case 537u: goto L_002BFC68;
    case 538u: goto L_002BFC7C;
    case 539u: goto L_002BFC8C;
    case 540u: goto L_002BFCB4;
    case 541u: goto L_002BFCC8;
    case 542u: goto L_002BFCDC;
    case 543u: goto L_002BFCFC;
    case 544u: goto L_002BFD18;
    case 545u: goto L_002BFD28;
    case 546u: goto L_002BFD38;
    case 547u: goto L_002BFD68;
    case 548u: goto L_002BFD78;
    case 549u: goto L_002BFD94;
    case 550u: goto L_002BFDA8;
    case 551u: goto L_002BFDB8;
    case 552u: goto L_002BFDCC;
    case 553u: goto L_002BFDDC;
    case 554u: goto L_002BFDF8;
    case 555u: goto L_002BFE5C;
    case 556u: goto L_002BFEA0;
    case 557u: goto L_002BFEAC;
    case 558u: goto L_002BFEC8;
    case 559u: goto L_002BFEF0;
    case 560u: goto L_002BFF0C;
    case 561u: goto L_002BFF54;
    case 562u: goto L_002BFF74;
    case 563u: goto L_002BFFC8;
    case 564u: goto L_002BFFE8;
    default: bad_entry(c, 0x002BC000u); return;
    }
L_002BC000:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 8u));
    c.r[2].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002BC128; } }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 14u));
    set32(c.r[4], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[2].d[0] = ld16((c.r[19].w[0] + 10u));  goto L_002BC12C; }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 10u));
    c.r[1].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[16], ld32((c.r[19].w[0] + 4u)));  goto L_002BC084; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_002BC068; } }
L_002BC038:
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0]));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_002BC064; }
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = ld16((c.r[19].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[19].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 5;
L_002BC064:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_002BC068:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 10u));
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC038u | kUnwind; return; } goto L_002BC038; }
    st16((c.r[19].w[0] + 10u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[16], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 2;
L_002BC084:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; st16((c.r[19].w[0] + 8u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_002BC118; } }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 8u));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC09Cu); set32(c.r[4], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002BC09Cu) [[unlikely]] return; }
L_002BC09C:
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_002BC0C8; } }
L_002BC0A8:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[5], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[6].w[0] + 1u);
    set32(c.r[4], c.r[16].w[0] + c.r[5].w[0]);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
L_002BC0C8:
    c.r[5].d[0] = ld16((c.r[19].w[0] + 10u));
    c.r[2].d[0] = c.r[6].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[6].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC0A8u | kUnwind; return; } goto L_002BC0A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[19].w[0] + 8u));  if (t) { goto L_002BC100; } }
L_002BC0E4:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = ld16((c.r[19].w[0] + 8u));
    c.budget -= 7;
L_002BC100:
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[5].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC0E4u | kUnwind; return; } goto L_002BC0E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002BC120; } }
L_002BC118:
    st32((c.r[19].w[0] + 4u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_002BC120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC128u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002BC128u) [[unlikely]] return; }
L_002BC128:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 10u));
    c.budget -= 1;
L_002BC12C:
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[17].w[0]));  goto L_002BC15C; }
    set32(c.r[2], c.r[18].w[0] + 1u);
    st16((c.r[19].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[17].w[0]));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 4u)));  goto L_002BC1B0; }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002BC1AC; } }
L_002BC15C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 4u)));  goto L_002BC18C; }
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[18].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BC1AC; } }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002BC1AC; } }
L_002BC18C:
    set32(c.r[3], c.r[18].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BC1AC; } }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[19].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002BC1AC:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_002BC1B0:
    set32(c.r[4], c.r[18].w[0] << 1);
    c.r[5].d[0] = ld16((c.r[17].w[0]));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002BC1E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC1FCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006E(c, 426u, depth + 1u); else { c.pc = 0x002BB300u; return; } if (c.pc != 0x002BC1FCu) [[unlikely]] return; }
L_002BC1FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002BC318; } }
L_002BC204:
    c.r[4].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[16], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[4].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_002BC224; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002BC240; } }
L_002BC224:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC230u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BC230u) [[unlikely]] return; }
L_002BC230:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[3].w[0] - 17560u);
    c.r[3].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
L_002BC240:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002BC318; }
    c.r[4].d[0] = ld16((c.r[18].w[0] + 24u));
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[17], 0u - 1u);  goto L_002BC314; }
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002BC310; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[16].d[0] == 0ull) { c.r[7].d[0] = c.r[17].d[0] & 65535ull;  goto L_002BC2E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC284u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BC284u) [[unlikely]] return; }
L_002BC284:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC294u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BC294u) [[unlikely]] return; }
L_002BC294:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BC2B0; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC2B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BC2B0u) [[unlikely]] return; }
L_002BC2B0:
    c.r[7].d[0] = c.r[17].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BC2E0; } }
L_002BC2BC:
    c.r[4].d[0] = c.r[7].d[0] & 65535ull;
    set32(c.r[3], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[7].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 9;
L_002BC2E0:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 24u));
    c.r[5].d[0] = c.r[7].d[0] & 65535ull;
    set32(c.r[4], c.r[3].w[0] - 1u);
    c.r[3].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], ld32((c.r[18].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC2BCu | kUnwind; return; } goto L_002BC2BC; }
    st16((c.r[18].w[0] + 24u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[18].w[0] + 24u));
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), 0u);
    c.budget -= 6;
L_002BC310:
    set32(c.r[17], 0u - 1u);
    c.budget -= 1;
L_002BC314:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002BC318:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 24u));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC204u | kUnwind; return; } goto L_002BC204; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002BC340:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC364u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006E(c, 424u, depth + 1u); else { c.pc = 0x002BB2D0u; return; } if (c.pc != 0x002BC364u) [[unlikely]] return; }
L_002BC364:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC370u); set32(c.r[5], c.r[18].w[0] + 8u);  if (depth < kMaxDepth) unit_0081(c, 668u, depth + 1u); else { c.pc = 0x00307F40u; return; } if (c.pc != 0x002BC370u) [[unlikely]] return; }
L_002BC370:
    st32((c.r[29].w[0] + 92u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002BC3B8; } }
L_002BC37C:
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC39Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BC39Cu) [[unlikely]] return; }
L_002BC39C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[16].w[0] + 1u);  goto L_002BC3B4; }
    set32(c.r[2], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.budget -= 4;
L_002BC3B4:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_002BC3B8:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 24u));
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC37Cu | kUnwind; return; } goto L_002BC37C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC3D8u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x002BC3D8u) [[unlikely]] return; }
L_002BC3D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002BC424; } }
L_002BC3E0:
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC400u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BC400u) [[unlikely]] return; }
L_002BC400:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[16].w[0] + 1u);  goto L_002BC420; }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC41Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BC41Cu) [[unlikely]] return; }
L_002BC41C:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002BC420:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_002BC424:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 24u));
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC3E0u | kUnwind; return; } goto L_002BC3E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[18].w[0] + 12u)));  if (t) { goto L_002BC440; } }
L_002BC440:
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[17].w[0])));  goto L_002BC46C; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC460u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BC460u) [[unlikely]] return; }
L_002BC460:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[16].w[0] + 48u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC440u | kUnwind; return; } goto L_002BC440; }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_002BC46C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC47Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BC47Cu) [[unlikely]] return; }
L_002BC47C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002BC4A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC4C4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006E(c, 425u, depth + 1u); else { c.pc = 0x002BB2E0u; return; } if (c.pc != 0x002BC4C4u) [[unlikely]] return; }
L_002BC4C4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[17].w[0])));  goto L_002BC4D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BC574; } }
L_002BC4D4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC4E4u); set32(c.r[5], c.r[18].w[0] + 8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BC4E4u) [[unlikely]] return; }
L_002BC4E4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_002BC540; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BC574; } }
L_002BC4F4:
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[19].d[0] == 0ull) { set32(c.r[2], c.r[16].w[0] + 1u);  goto L_002BC53C; }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC51Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BC51Cu) [[unlikely]] return; }
L_002BC51C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BC538; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC538u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BC538u) [[unlikely]] return; }
L_002BC538:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002BC53C:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_002BC540:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 24u));
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC4F4u | kUnwind; return; } goto L_002BC4F4; }
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_002BC574; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC570u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BC570u) [[unlikely]] return; }
L_002BC570:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002BC574:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002BC590:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC5B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 427u, depth + 1u); else { c.pc = 0x002BB310u; return; } if (c.pc != 0x002BC5B4u) [[unlikely]] return; }
L_002BC5B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC5BCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 104u, depth + 1u); else { c.pc = 0x0030CAE0u; return; } if (c.pc != 0x002BC5BCu) [[unlikely]] return; }
L_002BC5BC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC5CCu); c.r[5].d[0] = c.r[17].d[0] & 65535ull;  if (depth < kMaxDepth) unit_006F(c, 147u, depth + 1u); else { c.pc = 0x002BD340u; return; } if (c.pc != 0x002BC5CCu) [[unlikely]] return; }
L_002BC5CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002BC5EC; } }
L_002BC5D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC5DCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x002BC5DCu) [[unlikely]] return; }
L_002BC5DC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC5E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 123u, depth + 1u); else { c.pc = 0x002BD090u; return; } if (c.pc != 0x002BC5E8u) [[unlikely]] return; }
L_002BC5E8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002BC5EC:
    c.r[2].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC5D4u | kUnwind; return; } goto L_002BC5D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC600u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x002BC600u) [[unlikely]] return; }
L_002BC600:
    set32(c.r[18], ld32((c.r[16].w[0] + 12u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[18].d[0] == c.r[17].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_002BC674; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0] + 12u), c.r[17].w[0]);  goto L_002BC650; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC620u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BC620u) [[unlikely]] return; }
L_002BC620:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC630u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BC630u) [[unlikely]] return; }
L_002BC630:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BC64C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC64Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BC64Cu) [[unlikely]] return; }
L_002BC64C:
    st32((c.r[16].w[0] + 12u), c.r[17].w[0]);
    c.budget -= 1;
L_002BC650:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002BC670; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC660u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BC660u) [[unlikely]] return; }
L_002BC660:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC670u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BC670u) [[unlikely]] return; }
L_002BC670:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002BC674:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002BC690:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC6ACu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 428u, depth + 1u); else { c.pc = 0x002BB320u; return; } if (c.pc != 0x002BC6ACu) [[unlikely]] return; }
L_002BC6AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x14010000u);
    c.r[1].d[0] = c.r[1].d[0] | 1ull;
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], c.r[17].w[0] + 8u);  goto L_002BC6D8; }
    set32(c.r[5], c.r[17].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC6D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 672u, depth + 1u); else { c.pc = 0x00307FD0u; return; } if (c.pc != 0x002BC6D0u) [[unlikely]] return; }
L_002BC6D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002BC6E4; } }
L_002BC6D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC6E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 20u, depth + 1u); else { c.pc = 0x00308230u; return; } if (c.pc != 0x002BC6E0u) [[unlikely]] return; }
L_002BC6E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002BC6E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC6ECu);  if (depth < kMaxDepth) unit_0083(c, 105u, depth + 1u); else { c.pc = 0x0030CB00u; return; } if (c.pc != 0x002BC6ECu) [[unlikely]] return; }
L_002BC6EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC6F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 118u, depth + 1u); else { c.pc = 0x0030CD50u; return; } if (c.pc != 0x002BC6F4u) [[unlikely]] return; }
L_002BC6F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BC710:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002BC76C; } }
L_002BC72C:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC738u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BC738u) [[unlikely]] return; }
L_002BC738:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BC750; } }
L_002BC740:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[17].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_002BC750; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002BC75C; } }
L_002BC750:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC740u | kUnwind; return; } goto L_002BC740; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BC75C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[16].w[0] + 48u)));  goto L_002BC76C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002BC778; } }
L_002BC76C:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC72Cu | kUnwind; return; } goto L_002BC72C; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BC778:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BC790:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002BCA88; } }
    set32(c.r[18], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_002BCA8C; }
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[19].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 48u)));  goto L_002BC920; }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[29].w[0] + 108u), c.r[19].w[0]);  if (t) { goto L_002BC7F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC7DCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BC7DCu) [[unlikely]] return; }
L_002BC7DC:
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC7F0u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BC7F0u) [[unlikely]] return; }
L_002BC7F0:
    set32(c.r[16], ld32((c.r[19].w[0] + 48u)));
    set32(c.r[17], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[16], ld32((c.r[19].w[0] + 48u)));  goto L_002BC864; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[20].w[0] + 12u), c.r[16].w[0]);  goto L_002BC840; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC810u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BC810u) [[unlikely]] return; }
L_002BC810:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC820u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BC820u) [[unlikely]] return; }
L_002BC820:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BC83C; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC83Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BC83Cu) [[unlikely]] return; }
L_002BC83C:
    st32((c.r[20].w[0] + 12u), c.r[16].w[0]);
    c.budget -= 1;
L_002BC840:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002BC860; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC850u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BC850u) [[unlikely]] return; }
L_002BC850:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC860u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BC860u) [[unlikely]] return; }
L_002BC860:
    set32(c.r[16], ld32((c.r[19].w[0] + 48u)));
    c.budget -= 1;
L_002BC864:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 108u)));  goto L_002BC8D0; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_002BC8AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC87Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BC87Cu) [[unlikely]] return; }
L_002BC87C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC88Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BC88Cu) [[unlikely]] return; }
L_002BC88C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BC8A8; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC8A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BC8A8u) [[unlikely]] return; }
L_002BC8A8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BC8AC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[19].w[0] + 48u), 0u);  if (t) { goto L_002BC8CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC8BCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BC8BCu) [[unlikely]] return; }
L_002BC8BC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC8CCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BC8CCu) [[unlikely]] return; }
L_002BC8CC:
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 1;
L_002BC8D0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BCA88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC8E0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BC8E0u) [[unlikely]] return; }
L_002BC8E0:
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC8F4u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BC8F4u) [[unlikely]] return; }
L_002BC8F4:
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BCA88; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC914u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BC914u) [[unlikely]] return; }
L_002BC914:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BCA88; } }
L_002BC91C:
    set32(c.r[4], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 1;
L_002BC920:
    c.r[3].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BC938; } }
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[19].d[0]) { c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC91Cu | kUnwind; return; } goto L_002BC91C; }
L_002BC938:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BCA88; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[29].w[0] + 104u), c.r[19].w[0]);  if (t) { goto L_002BC964; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC950u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BC950u) [[unlikely]] return; }
L_002BC950:
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC964u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BC964u) [[unlikely]] return; }
L_002BC964:
    set32(c.r[16], ld32((c.r[19].w[0] + 48u)));
    set32(c.r[17], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[16], ld32((c.r[19].w[0] + 48u)));  goto L_002BC9D8; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[18].w[0] + 48u), c.r[16].w[0]);  goto L_002BC9B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC984u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BC984u) [[unlikely]] return; }
L_002BC984:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC994u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BC994u) [[unlikely]] return; }
L_002BC994:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BC9B0; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC9B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BC9B0u) [[unlikely]] return; }
L_002BC9B0:
    st32((c.r[18].w[0] + 48u), c.r[16].w[0]);
    c.budget -= 1;
L_002BC9B4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002BC9D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC9C4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BC9C4u) [[unlikely]] return; }
L_002BC9C4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC9D4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BC9D4u) [[unlikely]] return; }
L_002BC9D4:
    set32(c.r[16], ld32((c.r[19].w[0] + 48u)));
    c.budget -= 1;
L_002BC9D8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_002BCA44; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_002BCA20; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC9F0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BC9F0u) [[unlikely]] return; }
L_002BC9F0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCA00u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BCA00u) [[unlikely]] return; }
L_002BCA00:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BCA1C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCA1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BCA1Cu) [[unlikely]] return; }
L_002BCA1C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BCA20:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[19].w[0] + 48u), 0u);  if (t) { goto L_002BCA40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCA30u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BCA30u) [[unlikely]] return; }
L_002BCA30:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCA40u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BCA40u) [[unlikely]] return; }
L_002BCA40:
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_002BCA44:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BCA88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCA54u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BCA54u) [[unlikely]] return; }
L_002BCA54:
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCA68u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BCA68u) [[unlikely]] return; }
L_002BCA68:
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BCA88; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCA88u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BCA88u) [[unlikely]] return; }
L_002BCA88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_002BCA8C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002BCAB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == c.r[17].d[0]; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002BCB34; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[18].w[0] + 12u), c.r[17].w[0]);  goto L_002BCB14; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCAE4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BCAE4u) [[unlikely]] return; }
L_002BCAE4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCAF4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BCAF4u) [[unlikely]] return; }
L_002BCAF4:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BCB10; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCB10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BCB10u) [[unlikely]] return; }
L_002BCB10:
    st32((c.r[18].w[0] + 12u), c.r[17].w[0]);
    c.budget -= 1;
L_002BCB14:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002BCB38; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCB24u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BCB24u) [[unlikely]] return; }
L_002BCB24:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCB34u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BCB34u) [[unlikely]] return; }
L_002BCB34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002BCB38:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002BCB50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002BCC50; } }
    set32(c.r[16], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[19], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 4;
    if (c.r[19].d[0] == c.r[16].d[0]) { set32(c.r[16], ld32((c.r[18].w[0] + 12u)));  goto L_002BCBE8; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[17].w[0] + 48u), c.r[16].w[0]);  goto L_002BCBC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCB94u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BCB94u) [[unlikely]] return; }
L_002BCB94:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCBA4u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BCBA4u) [[unlikely]] return; }
L_002BCBA4:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BCBC0; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCBC0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BCBC0u) [[unlikely]] return; }
L_002BCBC0:
    st32((c.r[17].w[0] + 48u), c.r[16].w[0]);
    c.budget -= 1;
L_002BCBC4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002BCBE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCBD4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BCBD4u) [[unlikely]] return; }
L_002BCBD4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCBE4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BCBE4u) [[unlikely]] return; }
L_002BCBE4:
    set32(c.r[16], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 1;
L_002BCBE8:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[17].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_002BCC54; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[18].w[0] + 12u), c.r[17].w[0]);  goto L_002BCC30; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCC00u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BCC00u) [[unlikely]] return; }
L_002BCC00:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCC10u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BCC10u) [[unlikely]] return; }
L_002BCC10:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BCC2C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCC2Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BCC2Cu) [[unlikely]] return; }
L_002BCC2C:
    st32((c.r[18].w[0] + 12u), c.r[17].w[0]);
    c.budget -= 1;
L_002BCC30:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002BCC50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCC40u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BCC40u) [[unlikely]] return; }
L_002BCC40:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCC50u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BCC50u) [[unlikely]] return; }
L_002BCC50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_002BCC54:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002BCC70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[18].d[0] = c.r[3].d[0] << 48;
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);  if (t) { goto L_002BCD68; } }
L_002BCCA0:
    c.r[16].d[0] = c.r[18].d[0] & 65535ull;
    c.r[1].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], c.r[18].w[0] - 1u);  goto L_002BCD60; }
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[17].d[0] == 0ull) { c.r[7].d[0] = c.r[16].d[0] & 65535ull;  goto L_002BCD2C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCCD0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BCCD0u) [[unlikely]] return; }
L_002BCCD0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCCE0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BCCE0u) [[unlikely]] return; }
L_002BCCE0:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BCCFC; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCCFCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BCCFCu) [[unlikely]] return; }
L_002BCCFC:
    c.r[7].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BCD2C; } }
L_002BCD08:
    c.r[4].d[0] = c.r[7].d[0] & 65535ull;
    set32(c.r[3], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[7].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 9;
L_002BCD2C:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 24u));
    c.r[5].d[0] = c.r[7].d[0] & 65535ull;
    set32(c.r[4], c.r[3].w[0] - 1u);
    c.r[3].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], ld32((c.r[19].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BCD08u | kUnwind; return; } goto L_002BCD08; }
    st16((c.r[19].w[0] + 24u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[19].w[0] + 24u));
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], c.r[18].w[0] - 1u);
    c.budget -= 7;
L_002BCD60:
    c.r[18].d[0] = c.r[3].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.budget -= 2;
L_002BCD68:
    c.r[3].d[0] = c.r[18].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[3].sd[0] >= 0) { c.r[3].d[0] = ld16((c.r[19].w[0] + 24u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BCCA0u | kUnwind; return; } goto L_002BCCA0; }
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[3], c.r[19].w[0] + 20u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { st32((c.r[19].w[0] + 16u), 0u);  goto L_002BCD94; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCD90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002BCD90u) [[unlikely]] return; }
L_002BCD90:
    st32((c.r[19].w[0] + 16u), 0u);
    c.budget -= 1;
L_002BCD94:
    st16((c.r[19].w[0] + 26u), static_cast<std::uint16_t>(0u));
    st16((c.r[19].w[0] + 24u), static_cast<std::uint16_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002BCDC0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].d[0] = ld16((c.r[4].w[0] + 24u));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002BCDF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BCF68; } }
L_002BCDF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[4].d[0] << 48;  goto L_002BCE10; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BCF68; } }
L_002BCE10:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);  if (t) { goto L_002BCF48; } }
L_002BCE28:
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    c.r[16].d[0] = c.r[3].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCE48u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0067(c, 84u, depth + 1u); else { c.pc = 0x0029CB10u; return; } if (c.pc != 0x002BCE48u) [[unlikely]] return; }
L_002BCE48:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BCF28; } }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 24u));
    c.r[16].d[0] = c.r[16].d[0] & 65535ull;
    c.r[1].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_002BCF68; }
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[17].d[0] == 0ull) { c.r[6].d[0] = c.r[16].d[0] & 65535ull;  goto L_002BCEEC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCE90u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BCE90u) [[unlikely]] return; }
L_002BCE90:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCEA0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BCEA0u) [[unlikely]] return; }
L_002BCEA0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BCEBC; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCEBCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BCEBCu) [[unlikely]] return; }
L_002BCEBC:
    c.r[6].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BCEEC; } }
L_002BCEC8:
    c.r[3].d[0] = c.r[6].d[0] & 65535ull;
    set32(c.r[2], c.r[6].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 9;
L_002BCEEC:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 24u));
    c.r[4].d[0] = c.r[6].d[0] & 65535ull;
    set32(c.r[3], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[20].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BCEC8u | kUnwind; return; } goto L_002BCEC8; }
    st16((c.r[20].w[0] + 24u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 24u));
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BCF68; } }
L_002BCF28:
    c.budget -= 2;
    if (c.r[2].sd[0] <= 0) { set32(c.r[2], c.r[16].w[0] - 1u);  goto L_002BCF40; }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);  if (t) { goto L_002BCF48; } }
L_002BCF40:
    c.r[17].d[0] = c.r[2].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.budget -= 2;
L_002BCF48:
    c.r[3].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BCE28u | kUnwind; return; } goto L_002BCE28; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BCF68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002BCF90:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[20].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002BCFD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BD06C; } }
L_002BCFD0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 24u)));
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);  if (t) { goto L_002BD04C; } }
L_002BCFE8:
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    c.r[17].d[0] = c.r[3].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    set32(c.r[16], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD008u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0067(c, 84u, depth + 1u); else { c.pc = 0x0029CB10u; return; } if (c.pc != 0x002BD008u) [[unlikely]] return; }
L_002BD008:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BD02C; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0])));  if (t) { goto L_002BD06C; } }
L_002BD02C:
    c.budget -= 2;
    if (c.r[2].sd[0] <= 0) { set32(c.r[2], c.r[17].w[0] - 1u);  goto L_002BD044; }
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[19].d[0] = c.r[2].d[0] << 48;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);  if (t) { goto L_002BD04C; } }
L_002BD044:
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.budget -= 2;
L_002BD04C:
    c.r[3].d[0] = c.r[18].d[0] << 48;
    c.r[2].d[0] = c.r[19].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BCFE8u | kUnwind; return; } goto L_002BCFE8; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002BD06C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002BD090:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 11;
    { const bool t = c.r[20].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002BD0C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BD25C; } }
L_002BD0C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD0CCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 84u, depth + 1u); else { c.pc = 0x0029CB10u; return; } if (c.pc != 0x002BD0CCu) [[unlikely]] return; }
L_002BD0CC:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_002BD254; }
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD0E8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BD0E8u) [[unlikely]] return; }
L_002BD0E8:
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002BD250; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD0FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x002BD0FCu) [[unlikely]] return; }
L_002BD0FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BD250; } }
    c.r[7].d[0] = ld16((c.r[21].w[0] + 24u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD11Cu); set32(c.r[6], c.r[6].w[0] + 23944u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x002BD11Cu) [[unlikely]] return; }
L_002BD11C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD12Cu); set32(c.r[5], c.r[5].w[0] + 23951u);  if (depth < kMaxDepth) unit_00AE(c, 282u, depth + 1u); else { c.pc = 0x003BAAB0u; return; } if (c.pc != 0x002BD12Cu) [[unlikely]] return; }
L_002BD12C:
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002BD13C; } }
    set32(c.r[19], c.r[2].w[0] - c.r[17].w[0]);
    c.budget -= 1;
L_002BD13C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD144u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x002BD144u) [[unlikely]] return; }
L_002BD144:
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD158u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002BD158u) [[unlikely]] return; }
L_002BD158:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[19].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_002BD180; }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[19].d[0] == c.r[2].d[0]) { set32(c.r[19], c.r[16].w[0] - 1u);  goto L_002BD17C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_002BD194; } }
L_002BD17C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002BD180:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD18Cu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x002BD18Cu) [[unlikely]] return; }
L_002BD18C:
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002BD194:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD19Cu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x002BD19Cu) [[unlikely]] return; }
L_002BD19C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD1A4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x002BD1A4u) [[unlikely]] return; }
L_002BD1A4:
    set32(c.r[3], c.r[16].w[0] - 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD1B8u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_00AE(c, 265u, depth + 1u); else { c.pc = 0x003BA510u; return; } if (c.pc != 0x002BD1B8u) [[unlikely]] return; }
L_002BD1B8:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull; st8((c.r[2].w[0] - 1u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002BD1D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002BD1D8; } }
L_002BD1D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD1D8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002BD1D8u) [[unlikely]] return; }
L_002BD1D8:
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD1E8u); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_0067(c, 78u, depth + 1u); else { c.pc = 0x0029CA40u; return; } if (c.pc != 0x002BD1E8u) [[unlikely]] return; }
L_002BD1E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002BD248; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD214u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BD214u) [[unlikely]] return; }
L_002BD214:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD224u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BD224u) [[unlikely]] return; }
L_002BD224:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BD244; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD244u); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002BD244u) [[unlikely]] return; }
L_002BD244:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002BD248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD250u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002BD250u) [[unlikely]] return; }
L_002BD250:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_002BD254:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD25Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 152u, depth + 1u); else { c.pc = 0x002BD410u; return; } if (c.pc != 0x002BD25Cu) [[unlikely]] return; }
L_002BD25C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002BD280:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[19], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[19].d[0]; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002BD2BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BD320; } }
L_002BD2BC:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002BD2CC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BD320; } }
L_002BD2CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD2D4u);  if (depth < kMaxDepth) unit_0067(c, 84u, depth + 1u); else { c.pc = 0x0029CB10u; return; } if (c.pc != 0x002BD2D4u) [[unlikely]] return; }
L_002BD2D4:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[19].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_002BD2F4; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD2ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0067(c, 78u, depth + 1u); else { c.pc = 0x0029CA40u; return; } if (c.pc != 0x002BD2ECu) [[unlikely]] return; }
L_002BD2EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002BD318; } }
L_002BD2F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD2FCu);  if (depth < kMaxDepth) unit_0067(c, 84u, depth + 1u); else { c.pc = 0x0029CB10u; return; } if (c.pc != 0x002BD2FCu) [[unlikely]] return; }
L_002BD2FC:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BD314; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BD320; } }
L_002BD314:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002BD318:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD320u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 152u, depth + 1u); else { c.pc = 0x002BD410u; return; } if (c.pc != 0x002BD320u) [[unlikely]] return; }
L_002BD320:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002BD340:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002BD364; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BD3FC; } }
L_002BD364:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 26u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[5].w[0]));  goto L_002BD3A4; }
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 26u));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[3].w[0] << 2);  goto L_002BD390; }
    set32(c.r[2], c.r[17].w[0] + 20u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_002BD39C; } }
L_002BD390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD398u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002BD398u) [[unlikely]] return; }
L_002BD398:
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 1;
L_002BD39C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 24u), static_cast<std::uint16_t>(0u));  if (t) { goto L_002BD3F8; } }
L_002BD3A4:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 26u));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD3B4u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002BD3B4u) [[unlikely]] return; }
L_002BD3B4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[17].w[0] + 24u));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 26u));
    set32(c.r[6], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[2].d[0] = c.r[2].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 16u)));  if (t) { goto L_002BD3DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD3DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x002BD3DCu) [[unlikely]] return; }
L_002BD3DC:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], c.r[17].w[0] + 20u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { st32((c.r[17].w[0] + 16u), c.r[16].w[0]);  goto L_002BD3F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD3F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002BD3F4u) [[unlikely]] return; }
L_002BD3F4:
    st32((c.r[17].w[0] + 16u), c.r[16].w[0]);
    c.budget -= 1;
L_002BD3F8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002BD3FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BD410:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[17].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_002BD440; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002BD694; } }
L_002BD440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD448u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BD448u) [[unlikely]] return; }
L_002BD448:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD458u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BD458u) [[unlikely]] return; }
L_002BD458:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 26u));
    c.budget -= 3;
    if (c.r[3].sd[0] > 0) { c.r[2].d[0] = ld16((c.r[19].w[0] + 24u));  goto L_002BD480; }
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[19].w[0] + 20u);
    st16((c.r[19].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[19].w[0] + 24u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[19].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 20u), c.r[17].w[0]);  if (t) { goto L_002BD694; } }
L_002BD480:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[3].d[0] = ld16((c.r[19].w[0] + 24u));  goto L_002BD4EC; }
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[19].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[19].w[0] + 26u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD4A4u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002BD4A4u) [[unlikely]] return; }
L_002BD4A4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[19].w[0] + 24u));
    c.r[2].d[0] = ld16((c.r[19].w[0] + 26u));
    set32(c.r[6], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[2].d[0] = c.r[2].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], ld32((c.r[19].w[0] + 16u)));  if (t) { goto L_002BD4CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD4CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x002BD4CCu) [[unlikely]] return; }
L_002BD4CC:
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], c.r[19].w[0] + 20u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { st32((c.r[19].w[0] + 16u), c.r[16].w[0]);  goto L_002BD4E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD4E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002BD4E4u) [[unlikely]] return; }
L_002BD4E4:
    st32((c.r[19].w[0] + 16u), c.r[16].w[0]);
    c.budget -= 1;
L_002BD4E8:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 24u));
    c.budget -= 1;
L_002BD4EC:
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[17].w[0]);
    c.r[2].d[0] = ld16((c.r[19].w[0] + 24u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[19].w[0] + 24u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld16((c.r[19].w[0] + 24u));  if (t) { goto L_002BD528; } }
L_002BD510:
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 6;
L_002BD528:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 26u));
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[5].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BD510u | kUnwind; return; } goto L_002BD510; }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 24u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_002BD684; } }
L_002BD54C:
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[17], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD560u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0067(c, 84u, depth + 1u); else { c.pc = 0x0029CB10u; return; } if (c.pc != 0x002BD560u) [[unlikely]] return; }
L_002BD560:
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD578u); set32(c.r[4], ld32((c.r[2].w[0] - 4u)));  if (depth < kMaxDepth) unit_0067(c, 84u, depth + 1u); else { c.pc = 0x0029CB10u; return; } if (c.pc != 0x002BD578u) [[unlikely]] return; }
L_002BD578:
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BD64C; } }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 24u));
    c.r[1].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002BD694; }
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[16].d[0] == 0ull) { c.r[6].d[0] = c.r[18].d[0] & 65535ull;  goto L_002BD610; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD5B4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BD5B4u) [[unlikely]] return; }
L_002BD5B4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD5C4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BD5C4u) [[unlikely]] return; }
L_002BD5C4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BD5E0; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD5E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BD5E0u) [[unlikely]] return; }
L_002BD5E0:
    c.r[6].d[0] = c.r[18].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BD610; } }
L_002BD5EC:
    c.r[3].d[0] = c.r[6].d[0] & 65535ull;
    set32(c.r[2], c.r[6].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 9;
L_002BD610:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 24u));
    c.r[4].d[0] = c.r[6].d[0] & 65535ull;
    set32(c.r[3], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[19].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BD5ECu | kUnwind; return; } goto L_002BD5EC; }
    st16((c.r[19].w[0] + 24u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 24u));
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BD694; } }
L_002BD64C:
    c.budget -= 2;
    if (c.r[2].sd[0] <= 0) { set32(c.r[2], 0u + 1u);  goto L_002BD694; }
    set32(c.r[5], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], c.r[18].w[0] - 1u);
    set32(c.r[3], c.r[20].w[0] << 2);
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    st32((c.r[4].w[0] - 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 12;
L_002BD684:
    c.r[20].d[0] = c.r[18].d[0] & 65535ull;
    c.budget -= 3;
    if (c.r[20].sd[0] > 0) { set32(c.r[2], ld32((c.r[19].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BD54Cu | kUnwind; return; } goto L_002BD54C; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002BD694:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002BD6C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[17].d[0]; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002BD768; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 8u)));  goto L_002BD714; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD700u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BD700u) [[unlikely]] return; }
L_002BD700:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD710u); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BD710u) [[unlikely]] return; }
L_002BD710:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_002BD714:
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[16].d[0]) { st32((c.r[19].w[0] + 8u), c.r[17].w[0]);  goto L_002BD768; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD734u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BD734u) [[unlikely]] return; }
L_002BD734:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD744u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BD744u) [[unlikely]] return; }
L_002BD744:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002BD764; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD764u); set32(c.r[5], c.r[19].w[0] + 8u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002BD764u) [[unlikely]] return; }
L_002BD764:
    st32((c.r[19].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 1;
L_002BD768:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002BD790:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD7B0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006E(c, 450u, depth + 1u); else { c.pc = 0x002BB580u; return; } if (c.pc != 0x002BD7B0u) [[unlikely]] return; }
L_002BD7B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002BD7E0; } }
L_002BD7B8:
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD7D8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BD7D8u) [[unlikely]] return; }
L_002BD7D8:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 2;
L_002BD7E0:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 24u));
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BD7B8u | kUnwind; return; } goto L_002BD7B8; }
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002BD814; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD810u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BD810u) [[unlikely]] return; }
L_002BD810:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002BD814:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002BD830:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD864u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006E(c, 446u, depth + 1u); else { c.pc = 0x002BB4A0u; return; } if (c.pc != 0x002BD864u) [[unlikely]] return; }
L_002BD864:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 2u);  goto L_002BD90C; }
    set32(c.r[17], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[17].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_002BDAEC; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 8u)));  goto L_002BD8B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD89Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BD89Cu) [[unlikely]] return; }
L_002BD89C:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD8ACu); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BD8ACu) [[unlikely]] return; }
L_002BD8AC:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_002BD8B0:
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[16].d[0]) { st32((c.r[19].w[0] + 8u), c.r[17].w[0]);  goto L_002BDA90; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD8D0u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BD8D0u) [[unlikely]] return; }
L_002BD8D0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD8E0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BD8E0u) [[unlikely]] return; }
L_002BD8E0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002BD900; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD900u); set32(c.r[5], c.r[19].w[0] + 8u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002BD900u) [[unlikely]] return; }
L_002BD900:
    st32((c.r[19].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BDA90; } }
L_002BD90C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002BDA90; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002BDA90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD928u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x002BD928u) [[unlikely]] return; }
L_002BD928:
    set32(c.r[16], c.r[2].w[0] + 2u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD938u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002BD938u) [[unlikely]] return; }
L_002BD938:
    set32(c.r[21], ld32((c.r[20].w[0] + 8u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD948u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x002BD948u) [[unlikely]] return; }
L_002BD948:
    c.r[1].d[0] = c.r[2].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[6], c.r[2].w[0] + 1u);  goto L_002BD958; }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002BD958:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD964u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x002BD964u) [[unlikely]] return; }
L_002BD964:
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    st8((c.r[3].w[0] - 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[16].w[0] + c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 20u)));
    st8((c.r[2].w[0] - 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = c.r[17].d[0] != 0ull; st8((c.r[2].w[0] - 1u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002BD98C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002BD998; } }
L_002BD98C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD994u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002BD994u) [[unlikely]] return; }
L_002BD994:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002BD998:
    st32((c.r[29].w[0] + 140u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_002BDA28; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[21], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[16].d[0] == c.r[21].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 8u)));  goto L_002BD9D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD9C0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BD9C0u) [[unlikely]] return; }
L_002BD9C0:
    set32(c.r[2], ld32((c.r[16].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD9D0u); st32((c.r[16].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BD9D0u) [[unlikely]] return; }
L_002BD9D0:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_002BD9D4:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[21].d[0]) { st32((c.r[19].w[0] + 8u), c.r[16].w[0]);  goto L_002BDA28; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[21], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD9F4u); set32(c.r[22], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BD9F4u) [[unlikely]] return; }
L_002BD9F4:
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDA04u); st32((c.r[21].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BDA04u) [[unlikely]] return; }
L_002BDA04:
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BDA24; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDA24u); set32(c.r[5], c.r[19].w[0] + 8u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002BDA24u) [[unlikely]] return; }
L_002BDA24:
    st32((c.r[19].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 1;
L_002BDA28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002BDA88; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDA54u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BDA54u) [[unlikely]] return; }
L_002BDA54:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDA64u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BDA64u) [[unlikely]] return; }
L_002BDA64:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BDA84; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDA84u); set32(c.r[5], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002BDA84u) [[unlikely]] return; }
L_002BDA84:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002BDA88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDA90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002BDA90u) [[unlikely]] return; }
L_002BDA90:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BDAEC; } }
L_002BDA9C:
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDABCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BDABCu) [[unlikely]] return; }
L_002BDABC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[16].w[0] + 1u);  goto L_002BDAE8; }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDAD8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BDAD8u) [[unlikely]] return; }
L_002BDAD8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDAE4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 123u, depth + 1u); else { c.pc = 0x002BD090u; return; } if (c.pc != 0x002BDAE4u) [[unlikely]] return; }
L_002BDAE4:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002BDAE8:
    c.r[16].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 1;
L_002BDAEC:
    c.r[3].d[0] = ld16((c.r[20].w[0] + 24u));
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BDA9Cu | kUnwind; return; } goto L_002BDA9C; }
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  goto L_002BDB90; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDB1Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BDB1Cu) [[unlikely]] return; }
L_002BDB1C:
    set32(c.r[17], ld32((c.r[19].w[0] + 12u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[16].d[0];  if (t) { goto L_002BDB8C; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[19].w[0] + 12u), c.r[16].w[0]);  goto L_002BDB6C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDB3Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BDB3Cu) [[unlikely]] return; }
L_002BDB3C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDB4Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BDB4Cu) [[unlikely]] return; }
L_002BDB4C:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BDB68; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDB68u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BDB68u) [[unlikely]] return; }
L_002BDB68:
    st32((c.r[19].w[0] + 12u), c.r[16].w[0]);
    c.budget -= 1;
L_002BDB6C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002BDB8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDB7Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BDB7Cu) [[unlikely]] return; }
L_002BDB7C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDB8Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BDB8Cu) [[unlikely]] return; }
L_002BDB8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_002BDB90:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002BDBC0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002BDDDC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 12112u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[20].d[0] = c.r[2].d[0] << 48;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);  if (t) { goto L_002BDCD0; } }
L_002BDC08:
    c.r[18].d[0] = c.r[20].d[0] & 65535ull;
    c.r[1].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[20].w[0] - 1u);  goto L_002BDCC8; }
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[19].d[0] == 0ull) { c.r[6].d[0] = c.r[18].d[0] & 65535ull;  goto L_002BDC94; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDC38u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BDC38u) [[unlikely]] return; }
L_002BDC38:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDC48u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BDC48u) [[unlikely]] return; }
L_002BDC48:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BDC64; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDC64u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BDC64u) [[unlikely]] return; }
L_002BDC64:
    c.r[6].d[0] = c.r[18].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BDC94; } }
L_002BDC70:
    c.r[3].d[0] = c.r[6].d[0] & 65535ull;
    set32(c.r[2], c.r[6].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 9;
L_002BDC94:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 24u));
    c.r[4].d[0] = c.r[6].d[0] & 65535ull;
    set32(c.r[3], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BDC70u | kUnwind; return; } goto L_002BDC70; }
    st16((c.r[17].w[0] + 24u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 24u));
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], c.r[20].w[0] - 1u);
    c.budget -= 7;
L_002BDCC8:
    c.r[20].d[0] = c.r[2].d[0] << 48;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 48);
    c.budget -= 2;
L_002BDCD0:
    c.r[2].d[0] = c.r[20].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] >= 0) { c.r[2].d[0] = ld16((c.r[17].w[0] + 24u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BDC08u | kUnwind; return; } goto L_002BDC08; }
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], c.r[17].w[0] + 20u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { st32((c.r[17].w[0] + 16u), 0u);  goto L_002BDCFC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDCF8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002BDCF8u) [[unlikely]] return; }
L_002BDCF8:
    st32((c.r[17].w[0] + 16u), 0u);
    c.budget -= 1;
L_002BDCFC:
    set32(c.r[2], c.r[17].w[0] + 12u);
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(0u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[17].w[0] + 24u), static_cast<std::uint16_t>(0u));  if (t) { goto L_002BDD4C; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 8u);  goto L_002BDD50; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDD20u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BDD20u) [[unlikely]] return; }
L_002BDD20:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDD30u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BDD30u) [[unlikely]] return; }
L_002BDD30:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BDD4C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDD4Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BDD4Cu) [[unlikely]] return; }
L_002BDD4C:
    set32(c.r[2], c.r[17].w[0] + 8u);
    c.budget -= 1;
L_002BDD50:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_002BDDB8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BDDB4; } }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDD84u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BDD84u) [[unlikely]] return; }
L_002BDD84:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDD94u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BDD94u) [[unlikely]] return; }
L_002BDD94:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BDDB4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDDB4u); set32(c.r[5], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002BDDB4u) [[unlikely]] return; }
L_002BDDB4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002BDDB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDDC0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 472u, depth + 1u); else { c.pc = 0x002BB890u; return; } if (c.pc != 0x002BDDC0u) [[unlikely]] return; }
L_002BDDC0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002BDDE0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDDDCu); set32(c.r[5], 0u + 28u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002BDDDCu) [[unlikely]] return; }
L_002BDDDC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002BDDE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002BDE00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDE18u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x002BDE18u) [[unlikely]] return; }
L_002BDE18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    set32(c.r[3], c.r[3].w[0] + 12112u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 12u), 0u);  if (t) { goto L_002BDE54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDE44u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BDE44u) [[unlikely]] return; }
L_002BDE44:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDE54u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BDE54u) [[unlikely]] return; }
L_002BDE54:
    st32((c.r[16].w[0] + 16u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 20u), 0u);
    st16((c.r[16].w[0] + 24u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BDE80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 24000u);  c.pc = t; return; }
L_002BDE90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDEA4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 24u, depth + 1u); else { c.pc = 0x00288380u; return; } if (c.pc != 0x002BDEA4u) [[unlikely]] return; }
L_002BDEA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDEB0u); set32(c.r[4], ld32((c.r[2].w[0] + 24000u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x002BDEB0u) [[unlikely]] return; }
L_002BDEB0:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDEC4u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x002BDEC4u) [[unlikely]] return; }
L_002BDEC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BDEE0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x002884F0u | kUnwind; return; } [[clang::musttail]] return unit_0062(c, 40u, depth); }
L_002BDEF0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00288620u | kUnwind; return; } [[clang::musttail]] return unit_0062(c, 42u, depth); }
L_002BDF00:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00288730u | kUnwind; return; } [[clang::musttail]] return unit_0062(c, 60u, depth); }
L_002BDF10:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDF30u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0062(c, 61u, depth + 1u); else { c.pc = 0x00288740u; return; } if (c.pc != 0x002BDF30u) [[unlikely]] return; }
L_002BDF30:
    c.r[17].d[0] = ld16((c.r[16].w[0] + 346u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002BDF54; } }
L_002BDF3C:
    set32(c.r[3], c.r[18].w[0] << 2);
    c.r[5].d[0] = ld16((c.r[16].w[0] + 346u));
    set32(c.r[4], c.r[16].w[0] + 336u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDF50u); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_006F(c, 315u, depth + 1u); else { c.pc = 0x002BE770u; return; } if (c.pc != 0x002BDF50u) [[unlikely]] return; }
L_002BDF50:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002BDF54:
    c.r[3].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 340u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BDF3Cu | kUnwind; return; } goto L_002BDF3C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002BE050; } }
L_002BDF68:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0] + 92u), 0u);  if (t) { goto L_002BDF88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDF78u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BDF78u) [[unlikely]] return; }
L_002BDF78:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDF88u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BDF88u) [[unlikely]] return; }
L_002BDF88:
    set32(c.r[4], ld32((c.r[16].w[0] + 340u)));
    c.r[3].d[0] = c.r[19].d[0] & 65535ull;
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[17], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[18], ld32((c.r[17].w[0])));
    c.budget -= 8;
    if (c.r[18].d[0] == c.r[3].d[0]) { set32(c.r[17], ld32((c.r[29].w[0] + 92u)));  goto L_002BE00C; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[29].w[0] + 92u)));  goto L_002BDFE8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDFB8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BDFB8u) [[unlikely]] return; }
L_002BDFB8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDFC8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BDFC8u) [[unlikely]] return; }
L_002BDFC8:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BDFE4; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDFE4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BDFE4u) [[unlikely]] return; }
L_002BDFE4:
    set32(c.r[18], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 1;
L_002BDFE8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0]), c.r[18].w[0]);  if (t) { goto L_002BE008; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDFF8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BDFF8u) [[unlikely]] return; }
L_002BDFF8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE008u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BE008u) [[unlikely]] return; }
L_002BE008:
    set32(c.r[17], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 1;
L_002BE00C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], c.r[19].w[0] + 1u);  goto L_002BE04C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE01Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BE01Cu) [[unlikely]] return; }
L_002BE01C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE02Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BE02Cu) [[unlikely]] return; }
L_002BE02C:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BE048; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE048u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BE048u) [[unlikely]] return; }
L_002BE048:
    set32(c.r[3], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002BE04C:
    c.r[19].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 1;
L_002BE050:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 346u));
    c.r[4].d[0] = c.r[19].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[17].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BDF68u | kUnwind; return; } goto L_002BDF68; }
    st16((c.r[16].w[0] + 346u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 348u), static_cast<std::uint16_t>(0u));
    c.r[17].d[0] = ld16((c.r[16].w[0] + 362u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002BE090; } }
L_002BE078:
    set32(c.r[3], c.r[18].w[0] << 2);
    c.r[5].d[0] = ld16((c.r[16].w[0] + 362u));
    set32(c.r[4], c.r[16].w[0] + 352u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE08Cu); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_006F(c, 268u, depth + 1u); else { c.pc = 0x002BE270u; return; } if (c.pc != 0x002BE08Cu) [[unlikely]] return; }
L_002BE08C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002BE090:
    c.r[3].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 356u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BE078u | kUnwind; return; } goto L_002BE078; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002BE18C; } }
L_002BE0A4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0] + 88u), 0u);  if (t) { goto L_002BE0C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE0B4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BE0B4u) [[unlikely]] return; }
L_002BE0B4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE0C4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BE0C4u) [[unlikely]] return; }
L_002BE0C4:
    set32(c.r[4], ld32((c.r[16].w[0] + 356u)));
    c.r[3].d[0] = c.r[19].d[0] & 65535ull;
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[17], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[18], ld32((c.r[17].w[0])));
    c.budget -= 8;
    if (c.r[18].d[0] == c.r[3].d[0]) { set32(c.r[17], ld32((c.r[29].w[0] + 88u)));  goto L_002BE148; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[29].w[0] + 88u)));  goto L_002BE124; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE0F4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BE0F4u) [[unlikely]] return; }
L_002BE0F4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE104u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BE104u) [[unlikely]] return; }
L_002BE104:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BE120; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE120u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BE120u) [[unlikely]] return; }
L_002BE120:
    set32(c.r[18], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_002BE124:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0]), c.r[18].w[0]);  if (t) { goto L_002BE144; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE134u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BE134u) [[unlikely]] return; }
L_002BE134:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE144u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BE144u) [[unlikely]] return; }
L_002BE144:
    set32(c.r[17], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_002BE148:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], c.r[19].w[0] + 1u);  goto L_002BE188; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE158u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BE158u) [[unlikely]] return; }
L_002BE158:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE168u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BE168u) [[unlikely]] return; }
L_002BE168:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BE184; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE184u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BE184u) [[unlikely]] return; }
L_002BE184:
    set32(c.r[3], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002BE188:
    c.r[19].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 1;
L_002BE18C:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 362u));
    c.r[4].d[0] = c.r[19].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[17].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BE0A4u | kUnwind; return; } goto L_002BE0A4; }
    st16((c.r[16].w[0] + 362u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 364u), static_cast<std::uint16_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002BE1D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002BE24C; } }
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] << 48;  goto L_002BE234; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE204u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BE204u) [[unlikely]] return; }
L_002BE204:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE214u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BE214u) [[unlikely]] return; }
L_002BE214:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BE230; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE230u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BE230u) [[unlikely]] return; }
L_002BE230:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.budget -= 1;
L_002BE234:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_002BE250; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE24Cu); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002BE24Cu) [[unlikely]] return; }
L_002BE24C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_002BE250:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002BE270:
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
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002BE418; } }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 14u));
    set32(c.r[17], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[3].d[0]) { c.r[2].d[0] = ld16((c.r[21].w[0] + 10u));  goto L_002BE41C; }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 10u));
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[16], ld32((c.r[21].w[0] + 4u)));  goto L_002BE364; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[17].d[0] & 65535ull;  if (t) { goto L_002BE348; } }
L_002BE2D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE2DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 312u, depth + 1u); else { c.pc = 0x002BE720u; return; } if (c.pc != 0x002BE2DCu) [[unlikely]] return; }
L_002BE2DC:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[16], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 156u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE2F4u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_006F(c, 311u, depth + 1u); else { c.pc = 0x002BE700u; return; } if (c.pc != 0x002BE2F4u) [[unlikely]] return; }
L_002BE2F4:
    c.r[22].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 156u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE304u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_005F(c, 6u, depth + 1u); else { c.pc = 0x0027C050u; return; } if (c.pc != 0x002BE304u) [[unlikely]] return; }
L_002BE304:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[2], c.r[18].w[0] + 1u);  goto L_002BE344; }
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE318u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 312u, depth + 1u); else { c.pc = 0x002BE720u; return; } if (c.pc != 0x002BE318u) [[unlikely]] return; }
L_002BE318:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[5], c.r[29].w[0] + 152u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE328u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_006F(c, 305u, depth + 1u); else { c.pc = 0x002BE650u; return; } if (c.pc != 0x002BE328u) [[unlikely]] return; }
L_002BE328:
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE334u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_005F(c, 6u, depth + 1u); else { c.pc = 0x0027C050u; return; } if (c.pc != 0x002BE334u) [[unlikely]] return; }
L_002BE334:
    c.r[2].d[0] = ld16((c.r[21].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[21].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.budget -= 4;
L_002BE344:
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_002BE348:
    c.r[2].d[0] = ld16((c.r[21].w[0] + 10u));
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 156u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BE2D4u | kUnwind; return; } goto L_002BE2D4; }
    st16((c.r[21].w[0] + 10u), static_cast<std::uint16_t>(c.r[17].w[0]));
    set32(c.r[16], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 2;
L_002BE364:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st16((c.r[21].w[0] + 8u), static_cast<std::uint16_t>(c.r[17].w[0]));  if (t) { goto L_002BE408; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE374u); c.r[4].d[0] = ld16((c.r[21].w[0] + 8u));  if (depth < kMaxDepth) unit_006F(c, 299u, depth + 1u); else { c.pc = 0x002BE5B0u; return; } if (c.pc != 0x002BE374u) [[unlikely]] return; }
L_002BE374:
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002BE39C; } }
L_002BE380:
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE394u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_006F(c, 305u, depth + 1u); else { c.pc = 0x002BE650u; return; } if (c.pc != 0x002BE394u) [[unlikely]] return; }
L_002BE394:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_002BE39C:
    c.r[18].d[0] = ld16((c.r[21].w[0] + 10u));
    c.r[2].d[0] = c.r[17].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BE380u | kUnwind; return; } goto L_002BE380; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[21].w[0] + 8u));  if (t) { goto L_002BE3F0; } }
L_002BE3B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE3C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 312u, depth + 1u); else { c.pc = 0x002BE720u; return; } if (c.pc != 0x002BE3C0u) [[unlikely]] return; }
L_002BE3C0:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 148u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE3D8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_006F(c, 305u, depth + 1u); else { c.pc = 0x002BE650u; return; } if (c.pc != 0x002BE3D8u) [[unlikely]] return; }
L_002BE3D8:
    set32(c.r[4], c.r[29].w[0] + 148u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE3E4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_005F(c, 6u, depth + 1u); else { c.pc = 0x0027C050u; return; } if (c.pc != 0x002BE3E4u) [[unlikely]] return; }
L_002BE3E4:
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = ld16((c.r[21].w[0] + 8u));
    c.budget -= 3;
L_002BE3F0:
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 148u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BE3B8u | kUnwind; return; } goto L_002BE3B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002BE410; } }
L_002BE408:
    st32((c.r[21].w[0] + 4u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_002BE410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE418u);  if (depth < kMaxDepth) unit_006F(c, 298u, depth + 1u); else { c.pc = 0x002BE590u; return; } if (c.pc != 0x002BE418u) [[unlikely]] return; }
L_002BE418:
    c.r[2].d[0] = ld16((c.r[21].w[0] + 10u));
    c.budget -= 1;
L_002BE41C:
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 140u);  goto L_002BE470; }
    set32(c.r[2], c.r[20].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    st16((c.r[21].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE43Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 312u, depth + 1u); else { c.pc = 0x002BE720u; return; } if (c.pc != 0x002BE43Cu) [[unlikely]] return; }
L_002BE43C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE448u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_006F(c, 311u, depth + 1u); else { c.pc = 0x002BE700u; return; } if (c.pc != 0x002BE448u) [[unlikely]] return; }
L_002BE448:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE458u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_005F(c, 6u, depth + 1u); else { c.pc = 0x0027C050u; return; } if (c.pc != 0x002BE458u) [[unlikely]] return; }
L_002BE458:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 4u)));  goto L_002BE528; }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002BE524; } }
L_002BE470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE478u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 312u, depth + 1u); else { c.pc = 0x002BE720u; return; } if (c.pc != 0x002BE478u) [[unlikely]] return; }
L_002BE478:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE484u); set32(c.r[5], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_006F(c, 311u, depth + 1u); else { c.pc = 0x002BE700u; return; } if (c.pc != 0x002BE484u) [[unlikely]] return; }
L_002BE484:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE494u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_005F(c, 6u, depth + 1u); else { c.pc = 0x0027C050u; return; } if (c.pc != 0x002BE494u) [[unlikely]] return; }
L_002BE494:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 132u);  goto L_002BE4E4; }
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE4A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 312u, depth + 1u); else { c.pc = 0x002BE720u; return; } if (c.pc != 0x002BE4A8u) [[unlikely]] return; }
L_002BE4A8:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 136u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE4BCu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_006F(c, 297u, depth + 1u); else { c.pc = 0x002BE570u; return; } if (c.pc != 0x002BE4BCu) [[unlikely]] return; }
L_002BE4BC:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE4CCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_005F(c, 6u, depth + 1u); else { c.pc = 0x0027C050u; return; } if (c.pc != 0x002BE4CCu) [[unlikely]] return; }
L_002BE4CC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002BE524; } }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002BE524; } }
L_002BE4E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE4ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 312u, depth + 1u); else { c.pc = 0x002BE720u; return; } if (c.pc != 0x002BE4ECu) [[unlikely]] return; }
L_002BE4EC:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 132u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE500u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_006F(c, 311u, depth + 1u); else { c.pc = 0x002BE700u; return; } if (c.pc != 0x002BE500u) [[unlikely]] return; }
L_002BE500:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 132u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE510u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_005F(c, 6u, depth + 1u); else { c.pc = 0x0027C050u; return; } if (c.pc != 0x002BE510u) [[unlikely]] return; }
L_002BE510:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002BE524; } }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[21].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002BE524:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 1;
L_002BE528:
    set32(c.r[3], c.r[20].w[0] << 2);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE538u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_006F(c, 305u, depth + 1u); else { c.pc = 0x002BE650u; return; } if (c.pc != 0x002BE538u) [[unlikely]] return; }
L_002BE538:
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
L_002BE570:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_002BE590:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00280000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] - 16304u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 6;
    { set32(c.r[7], 0u + 1u);  [[clang::musttail]] return unit_00A5(c, 164u, depth); }
L_002BE5B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE5D0u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002BE5D0u) [[unlikely]] return; }
L_002BE5D0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00280000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 6656u);
    set32(c.r[6], c.r[6].w[0] - 16304u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE5F0u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002BE5F0u) [[unlikely]] return; }
L_002BE5F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BE600:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), 0u);  if (t) { goto L_002BE638; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE628u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BE628u) [[unlikely]] return; }
L_002BE628:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE638u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BE638u) [[unlikely]] return; }
L_002BE638:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BE650:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002BE6D8; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[18].w[0])));  goto L_002BE6B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE688u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BE688u) [[unlikely]] return; }
L_002BE688:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE698u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BE698u) [[unlikely]] return; }
L_002BE698:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BE6B4; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE6B4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BE6B4u) [[unlikely]] return; }
L_002BE6B4:
    set32(c.r[17], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_002BE6B8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0]), c.r[17].w[0]);  if (t) { goto L_002BE6D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE6C8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BE6C8u) [[unlikely]] return; }
L_002BE6C8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE6D8u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BE6D8u) [[unlikely]] return; }
L_002BE6D8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002BE700:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_002BE720:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_002BE758; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE748u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BE748u) [[unlikely]] return; }
L_002BE748:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE758u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BE758u) [[unlikely]] return; }
L_002BE758:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BE770:
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
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002BE918; } }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 14u));
    set32(c.r[17], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[3].d[0]) { c.r[2].d[0] = ld16((c.r[21].w[0] + 10u));  goto L_002BE91C; }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 10u));
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[16], ld32((c.r[21].w[0] + 4u)));  goto L_002BE864; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[17].d[0] & 65535ull;  if (t) { goto L_002BE848; } }
L_002BE7D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE7DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 359u, depth + 1u); else { c.pc = 0x002BEC20u; return; } if (c.pc != 0x002BE7DCu) [[unlikely]] return; }
L_002BE7DC:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[16], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 156u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE7F4u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_006F(c, 358u, depth + 1u); else { c.pc = 0x002BEC00u; return; } if (c.pc != 0x002BE7F4u) [[unlikely]] return; }
L_002BE7F4:
    c.r[22].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 156u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE804u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_006F(c, 263u, depth + 1u); else { c.pc = 0x002BE1D0u; return; } if (c.pc != 0x002BE804u) [[unlikely]] return; }
L_002BE804:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[2], c.r[18].w[0] + 1u);  goto L_002BE844; }
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE818u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 359u, depth + 1u); else { c.pc = 0x002BEC20u; return; } if (c.pc != 0x002BE818u) [[unlikely]] return; }
L_002BE818:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[5], c.r[29].w[0] + 152u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE828u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_006F(c, 352u, depth + 1u); else { c.pc = 0x002BEB50u; return; } if (c.pc != 0x002BE828u) [[unlikely]] return; }
L_002BE828:
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE834u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_006F(c, 263u, depth + 1u); else { c.pc = 0x002BE1D0u; return; } if (c.pc != 0x002BE834u) [[unlikely]] return; }
L_002BE834:
    c.r[2].d[0] = ld16((c.r[21].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[21].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.budget -= 4;
L_002BE844:
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_002BE848:
    c.r[2].d[0] = ld16((c.r[21].w[0] + 10u));
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 156u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BE7D4u | kUnwind; return; } goto L_002BE7D4; }
    st16((c.r[21].w[0] + 10u), static_cast<std::uint16_t>(c.r[17].w[0]));
    set32(c.r[16], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 2;
L_002BE864:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st16((c.r[21].w[0] + 8u), static_cast<std::uint16_t>(c.r[17].w[0]));  if (t) { goto L_002BE908; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE874u); c.r[4].d[0] = ld16((c.r[21].w[0] + 8u));  if (depth < kMaxDepth) unit_006F(c, 346u, depth + 1u); else { c.pc = 0x002BEAB0u; return; } if (c.pc != 0x002BE874u) [[unlikely]] return; }
L_002BE874:
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002BE89C; } }
L_002BE880:
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE894u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_006F(c, 352u, depth + 1u); else { c.pc = 0x002BEB50u; return; } if (c.pc != 0x002BE894u) [[unlikely]] return; }
L_002BE894:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_002BE89C:
    c.r[18].d[0] = ld16((c.r[21].w[0] + 10u));
    c.r[2].d[0] = c.r[17].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BE880u | kUnwind; return; } goto L_002BE880; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[21].w[0] + 8u));  if (t) { goto L_002BE8F0; } }
L_002BE8B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE8C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 359u, depth + 1u); else { c.pc = 0x002BEC20u; return; } if (c.pc != 0x002BE8C0u) [[unlikely]] return; }
L_002BE8C0:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 148u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE8D8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_006F(c, 352u, depth + 1u); else { c.pc = 0x002BEB50u; return; } if (c.pc != 0x002BE8D8u) [[unlikely]] return; }
L_002BE8D8:
    set32(c.r[4], c.r[29].w[0] + 148u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE8E4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_006F(c, 263u, depth + 1u); else { c.pc = 0x002BE1D0u; return; } if (c.pc != 0x002BE8E4u) [[unlikely]] return; }
L_002BE8E4:
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = ld16((c.r[21].w[0] + 8u));
    c.budget -= 3;
L_002BE8F0:
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 148u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BE8B8u | kUnwind; return; } goto L_002BE8B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002BE910; } }
L_002BE908:
    st32((c.r[21].w[0] + 4u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_002BE910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE918u);  if (depth < kMaxDepth) unit_006F(c, 345u, depth + 1u); else { c.pc = 0x002BEA90u; return; } if (c.pc != 0x002BE918u) [[unlikely]] return; }
L_002BE918:
    c.r[2].d[0] = ld16((c.r[21].w[0] + 10u));
    c.budget -= 1;
L_002BE91C:
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 140u);  goto L_002BE970; }
    set32(c.r[2], c.r[20].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    st16((c.r[21].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE93Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 359u, depth + 1u); else { c.pc = 0x002BEC20u; return; } if (c.pc != 0x002BE93Cu) [[unlikely]] return; }
L_002BE93C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE948u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_006F(c, 358u, depth + 1u); else { c.pc = 0x002BEC00u; return; } if (c.pc != 0x002BE948u) [[unlikely]] return; }
L_002BE948:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE958u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_006F(c, 263u, depth + 1u); else { c.pc = 0x002BE1D0u; return; } if (c.pc != 0x002BE958u) [[unlikely]] return; }
L_002BE958:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 4u)));  goto L_002BEA28; }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002BEA24; } }
L_002BE970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE978u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 359u, depth + 1u); else { c.pc = 0x002BEC20u; return; } if (c.pc != 0x002BE978u) [[unlikely]] return; }
L_002BE978:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE984u); set32(c.r[5], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_006F(c, 358u, depth + 1u); else { c.pc = 0x002BEC00u; return; } if (c.pc != 0x002BE984u) [[unlikely]] return; }
L_002BE984:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE994u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_006F(c, 263u, depth + 1u); else { c.pc = 0x002BE1D0u; return; } if (c.pc != 0x002BE994u) [[unlikely]] return; }
L_002BE994:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 132u);  goto L_002BE9E4; }
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE9A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 359u, depth + 1u); else { c.pc = 0x002BEC20u; return; } if (c.pc != 0x002BE9A8u) [[unlikely]] return; }
L_002BE9A8:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 136u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE9BCu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_006F(c, 344u, depth + 1u); else { c.pc = 0x002BEA70u; return; } if (c.pc != 0x002BE9BCu) [[unlikely]] return; }
L_002BE9BC:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE9CCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_006F(c, 263u, depth + 1u); else { c.pc = 0x002BE1D0u; return; } if (c.pc != 0x002BE9CCu) [[unlikely]] return; }
L_002BE9CC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002BEA24; } }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002BEA24; } }
L_002BE9E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE9ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 359u, depth + 1u); else { c.pc = 0x002BEC20u; return; } if (c.pc != 0x002BE9ECu) [[unlikely]] return; }
L_002BE9EC:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 132u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEA00u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_006F(c, 358u, depth + 1u); else { c.pc = 0x002BEC00u; return; } if (c.pc != 0x002BEA00u) [[unlikely]] return; }
L_002BEA00:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 132u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEA10u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_006F(c, 263u, depth + 1u); else { c.pc = 0x002BE1D0u; return; } if (c.pc != 0x002BEA10u) [[unlikely]] return; }
L_002BEA10:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002BEA24; } }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[21].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002BEA24:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 1;
L_002BEA28:
    set32(c.r[3], c.r[20].w[0] << 2);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEA38u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_006F(c, 352u, depth + 1u); else { c.pc = 0x002BEB50u; return; } if (c.pc != 0x002BEA38u) [[unlikely]] return; }
L_002BEA38:
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
L_002BEA70:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_002BEA90:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] - 7728u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 6;
    { set32(c.r[7], 0u + 1u);  [[clang::musttail]] return unit_00A5(c, 164u, depth); }
L_002BEAB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEAD0u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002BEAD0u) [[unlikely]] return; }
L_002BEAD0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 5376u);
    set32(c.r[6], c.r[6].w[0] - 7728u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEAF0u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002BEAF0u) [[unlikely]] return; }
L_002BEAF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BEB00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), 0u);  if (t) { goto L_002BEB38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEB28u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BEB28u) [[unlikely]] return; }
L_002BEB28:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEB38u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BEB38u) [[unlikely]] return; }
L_002BEB38:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BEB50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002BEBD8; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[18].w[0])));  goto L_002BEBB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEB88u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BEB88u) [[unlikely]] return; }
L_002BEB88:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEB98u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BEB98u) [[unlikely]] return; }
L_002BEB98:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BEBB4; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEBB4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BEBB4u) [[unlikely]] return; }
L_002BEBB4:
    set32(c.r[17], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_002BEBB8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0]), c.r[17].w[0]);  if (t) { goto L_002BEBD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEBC8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BEBC8u) [[unlikely]] return; }
L_002BEBC8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEBD8u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BEBD8u) [[unlikely]] return; }
L_002BEBD8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002BEC00:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_002BEC20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_002BEC58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEC48u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BEC48u) [[unlikely]] return; }
L_002BEC48:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEC58u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BEC58u) [[unlikely]] return; }
L_002BEC58:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BEC70:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00288950u | kUnwind; return; } [[clang::musttail]] return unit_0062(c, 85u, depth); }
L_002BEC80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 368u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEC94u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002BEC94u) [[unlikely]] return; }
L_002BEC94:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002BECA8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BECA4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 559u, depth + 1u); else { c.pc = 0x002BFEF0u; return; } if (c.pc != 0x002BECA4u) [[unlikely]] return; }
L_002BECA4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002BECA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BECB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BECD0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0060(c, 437u, depth + 1u); else { c.pc = 0x00282BF0u; return; } if (c.pc != 0x002BECD0u) [[unlikely]] return; }
L_002BECD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002BED00; } }
L_002BECD8:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002BED00; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BECFCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BECFCu) [[unlikely]] return; }
L_002BECFC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002BED00:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 346u));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 340u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BECD8u | kUnwind; return; } goto L_002BECD8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002BED40; } }
L_002BED18:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002BED40; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BED3Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BED3Cu) [[unlikely]] return; }
L_002BED3C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002BED40:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 362u));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 356u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BED18u | kUnwind; return; } goto L_002BED18; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002BED70:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEDA4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0062(c, 106u, depth + 1u); else { c.pc = 0x00288A70u; return; } if (c.pc != 0x002BEDA4u) [[unlikely]] return; }
L_002BEDA4:
    c.r[17].d[0] = ld16((c.r[21].w[0] + 346u));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 344u));
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[3].d[0]) { c.r[3].d[0] = ld16((c.r[21].w[0] + 350u));  goto L_002BEF14; }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 346u));
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[16], ld32((c.r[20].w[0] + 340u)));  goto L_002BEE5C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[17].d[0] & 65535ull;  if (t) { goto L_002BEE40; } }
L_002BEDCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEDD4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 359u, depth + 1u); else { c.pc = 0x002BEC20u; return; } if (c.pc != 0x002BEDD4u) [[unlikely]] return; }
L_002BEDD4:
    set32(c.r[2], ld32((c.r[20].w[0] + 340u)));
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[16], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 212u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEDECu); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_006F(c, 358u, depth + 1u); else { c.pc = 0x002BEC00u; return; } if (c.pc != 0x002BEDECu) [[unlikely]] return; }
L_002BEDEC:
    c.r[22].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 212u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEDFCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_006F(c, 263u, depth + 1u); else { c.pc = 0x002BE1D0u; return; } if (c.pc != 0x002BEDFCu) [[unlikely]] return; }
L_002BEDFC:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[2], c.r[18].w[0] + 1u);  goto L_002BEE3C; }
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEE10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 359u, depth + 1u); else { c.pc = 0x002BEC20u; return; } if (c.pc != 0x002BEE10u) [[unlikely]] return; }
L_002BEE10:
    set32(c.r[2], ld32((c.r[20].w[0] + 340u)));
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEE20u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_006F(c, 352u, depth + 1u); else { c.pc = 0x002BEB50u; return; } if (c.pc != 0x002BEE20u) [[unlikely]] return; }
L_002BEE20:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEE2Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_006F(c, 263u, depth + 1u); else { c.pc = 0x002BE1D0u; return; } if (c.pc != 0x002BEE2Cu) [[unlikely]] return; }
L_002BEE2C:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 348u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[20].w[0] + 348u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.budget -= 4;
L_002BEE3C:
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_002BEE40:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 346u));
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 212u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BEDCCu | kUnwind; return; } goto L_002BEDCC; }
    st16((c.r[20].w[0] + 346u), static_cast<std::uint16_t>(c.r[17].w[0]));
    set32(c.r[16], ld32((c.r[20].w[0] + 340u)));
    c.budget -= 2;
L_002BEE5C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st16((c.r[20].w[0] + 344u), static_cast<std::uint16_t>(c.r[17].w[0]));  if (t) { goto L_002BEF00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEE6Cu); c.r[4].d[0] = ld16((c.r[20].w[0] + 344u));  if (depth < kMaxDepth) unit_006F(c, 346u, depth + 1u); else { c.pc = 0x002BEAB0u; return; } if (c.pc != 0x002BEE6Cu) [[unlikely]] return; }
L_002BEE6C:
    st32((c.r[20].w[0] + 340u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002BEE94; } }
L_002BEE78:
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEE8Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_006F(c, 352u, depth + 1u); else { c.pc = 0x002BEB50u; return; } if (c.pc != 0x002BEE8Cu) [[unlikely]] return; }
L_002BEE8C:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_002BEE94:
    c.r[18].d[0] = ld16((c.r[20].w[0] + 346u));
    c.r[2].d[0] = c.r[17].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 340u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BEE78u | kUnwind; return; } goto L_002BEE78; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[20].w[0] + 344u));  if (t) { goto L_002BEEE8; } }
L_002BEEB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEEB8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 359u, depth + 1u); else { c.pc = 0x002BEC20u; return; } if (c.pc != 0x002BEEB8u) [[unlikely]] return; }
L_002BEEB8:
    set32(c.r[2], ld32((c.r[20].w[0] + 340u)));
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 204u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEED0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_006F(c, 352u, depth + 1u); else { c.pc = 0x002BEB50u; return; } if (c.pc != 0x002BEED0u) [[unlikely]] return; }
L_002BEED0:
    set32(c.r[4], c.r[29].w[0] + 204u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEEDCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_006F(c, 263u, depth + 1u); else { c.pc = 0x002BE1D0u; return; } if (c.pc != 0x002BEEDCu) [[unlikely]] return; }
L_002BEEDC:
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = ld16((c.r[20].w[0] + 344u));
    c.budget -= 3;
L_002BEEE8:
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 204u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BEEB0u | kUnwind; return; } goto L_002BEEB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002BEF08; } }
L_002BEF00:
    st32((c.r[20].w[0] + 340u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_002BEF08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEF10u);  if (depth < kMaxDepth) unit_006F(c, 345u, depth + 1u); else { c.pc = 0x002BEA90u; return; } if (c.pc != 0x002BEF10u) [[unlikely]] return; }
L_002BEF10:
    c.r[3].d[0] = ld16((c.r[21].w[0] + 350u));
    c.budget -= 1;
L_002BEF14:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 350u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002BF2B4; } }
L_002BEF20:
    set32(c.r[18], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0] + 236u), c.r[17].w[0]);  if (t) { goto L_002BEF4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEF3Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BEF3Cu) [[unlikely]] return; }
L_002BEF3C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEF4Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BEF4Cu) [[unlikely]] return; }
L_002BEF4C:
    set32(c.r[4], ld32((c.r[29].w[0] + 236u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002BF0F0; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEF68u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BEF68u) [[unlikely]] return; }
L_002BEF68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 228u), c.r[2].w[0]);  if (t) { goto L_002BEF8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEF78u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BEF78u) [[unlikely]] return; }
L_002BEF78:
    set32(c.r[3], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEF8Cu); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BEF8Cu) [[unlikely]] return; }
L_002BEF8C:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 346u));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 196u);  goto L_002BEFE4; }
    set32(c.r[2], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 200u);
    st16((c.r[20].w[0] + 346u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEFB0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 359u, depth + 1u); else { c.pc = 0x002BEC20u; return; } if (c.pc != 0x002BEFB0u) [[unlikely]] return; }
L_002BEFB0:
    set32(c.r[4], c.r[29].w[0] + 228u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEFBCu); set32(c.r[5], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_006F(c, 358u, depth + 1u); else { c.pc = 0x002BEC00u; return; } if (c.pc != 0x002BEFBCu) [[unlikely]] return; }
L_002BEFBC:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 200u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEFCCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_006F(c, 263u, depth + 1u); else { c.pc = 0x002BE1D0u; return; } if (c.pc != 0x002BEFCCu) [[unlikely]] return; }
L_002BEFCC:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 340u)));  goto L_002BF094; }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 348u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 348u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002BF090; } }
L_002BEFE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEFECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 359u, depth + 1u); else { c.pc = 0x002BEC20u; return; } if (c.pc != 0x002BEFECu) [[unlikely]] return; }
L_002BEFEC:
    set32(c.r[4], c.r[29].w[0] + 228u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEFF8u); set32(c.r[5], c.r[29].w[0] + 196u);  if (depth < kMaxDepth) unit_006F(c, 358u, depth + 1u); else { c.pc = 0x002BEC00u; return; } if (c.pc != 0x002BEFF8u) [[unlikely]] return; }
L_002BEFF8:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 196u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF008u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_006F(c, 263u, depth + 1u); else { c.pc = 0x002BE1D0u; return; } if (c.pc != 0x002BF008u) [[unlikely]] return; }
L_002BF008:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 188u);  goto L_002BF054; }
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF01Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 359u, depth + 1u); else { c.pc = 0x002BEC20u; return; } if (c.pc != 0x002BF01Cu) [[unlikely]] return; }
L_002BF01C:
    set32(c.r[2], ld32((c.r[20].w[0] + 340u)));
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF02Cu); set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_006F(c, 344u, depth + 1u); else { c.pc = 0x002BEA70u; return; } if (c.pc != 0x002BF02Cu) [[unlikely]] return; }
L_002BF02C:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF03Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_006F(c, 263u, depth + 1u); else { c.pc = 0x002BE1D0u; return; } if (c.pc != 0x002BF03Cu) [[unlikely]] return; }
L_002BF03C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002BF090; } }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 348u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 348u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002BF090; } }
L_002BF054:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF05Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 359u, depth + 1u); else { c.pc = 0x002BEC20u; return; } if (c.pc != 0x002BF05Cu) [[unlikely]] return; }
L_002BF05C:
    set32(c.r[2], ld32((c.r[20].w[0] + 340u)));
    set32(c.r[5], c.r[29].w[0] + 188u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF06Cu); set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_006F(c, 358u, depth + 1u); else { c.pc = 0x002BEC00u; return; } if (c.pc != 0x002BF06Cu) [[unlikely]] return; }
L_002BF06C:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 188u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF07Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_006F(c, 263u, depth + 1u); else { c.pc = 0x002BE1D0u; return; } if (c.pc != 0x002BF07Cu) [[unlikely]] return; }
L_002BF07C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002BF090; } }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 348u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[20].w[0] + 348u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002BF090:
    set32(c.r[2], ld32((c.r[20].w[0] + 340u)));
    c.budget -= 1;
L_002BF094:
    set32(c.r[5], c.r[29].w[0] + 228u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF0A0u); set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_006F(c, 352u, depth + 1u); else { c.pc = 0x002BEB50u; return; } if (c.pc != 0x002BF0A0u) [[unlikely]] return; }
L_002BF0A0:
    set32(c.r[3], ld32((c.r[29].w[0] + 228u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[17], ld32((c.r[29].w[0] + 236u)));  goto L_002BF274; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF0B4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BF0B4u) [[unlikely]] return; }
L_002BF0B4:
    set32(c.r[3], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF0C8u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BF0C8u) [[unlikely]] return; }
L_002BF0C8:
    set32(c.r[4], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BF270; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF0E8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BF0E8u) [[unlikely]] return; }
L_002BF0E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BF270; } }
L_002BF0F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 224u), 0u);  if (t) { goto L_002BF114; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF100u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BF100u) [[unlikely]] return; }
L_002BF100:
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF114u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BF114u) [[unlikely]] return; }
L_002BF114:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 346u));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 180u);  goto L_002BF16C; }
    set32(c.r[2], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 184u);
    st16((c.r[20].w[0] + 346u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF138u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 359u, depth + 1u); else { c.pc = 0x002BEC20u; return; } if (c.pc != 0x002BF138u) [[unlikely]] return; }
L_002BF138:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF144u); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_006F(c, 358u, depth + 1u); else { c.pc = 0x002BEC00u; return; } if (c.pc != 0x002BF144u) [[unlikely]] return; }
L_002BF144:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF154u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_006F(c, 263u, depth + 1u); else { c.pc = 0x002BE1D0u; return; } if (c.pc != 0x002BF154u) [[unlikely]] return; }
L_002BF154:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 340u)));  goto L_002BF21C; }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 348u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 348u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002BF218; } }
L_002BF16C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF174u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 359u, depth + 1u); else { c.pc = 0x002BEC20u; return; } if (c.pc != 0x002BF174u) [[unlikely]] return; }
L_002BF174:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF180u); set32(c.r[5], c.r[29].w[0] + 180u);  if (depth < kMaxDepth) unit_006F(c, 358u, depth + 1u); else { c.pc = 0x002BEC00u; return; } if (c.pc != 0x002BF180u) [[unlikely]] return; }
L_002BF180:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 180u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF190u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_006F(c, 263u, depth + 1u); else { c.pc = 0x002BE1D0u; return; } if (c.pc != 0x002BF190u) [[unlikely]] return; }
L_002BF190:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 172u);  goto L_002BF1DC; }
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF1A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 359u, depth + 1u); else { c.pc = 0x002BEC20u; return; } if (c.pc != 0x002BF1A4u) [[unlikely]] return; }
L_002BF1A4:
    set32(c.r[2], ld32((c.r[20].w[0] + 340u)));
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF1B4u); set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_006F(c, 344u, depth + 1u); else { c.pc = 0x002BEA70u; return; } if (c.pc != 0x002BF1B4u) [[unlikely]] return; }
L_002BF1B4:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF1C4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_006F(c, 263u, depth + 1u); else { c.pc = 0x002BE1D0u; return; } if (c.pc != 0x002BF1C4u) [[unlikely]] return; }
L_002BF1C4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002BF218; } }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 348u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 348u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002BF218; } }
L_002BF1DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF1E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 359u, depth + 1u); else { c.pc = 0x002BEC20u; return; } if (c.pc != 0x002BF1E4u) [[unlikely]] return; }
L_002BF1E4:
    set32(c.r[2], ld32((c.r[20].w[0] + 340u)));
    set32(c.r[5], c.r[29].w[0] + 172u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF1F4u); set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_006F(c, 358u, depth + 1u); else { c.pc = 0x002BEC00u; return; } if (c.pc != 0x002BF1F4u) [[unlikely]] return; }
L_002BF1F4:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 172u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF204u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_006F(c, 263u, depth + 1u); else { c.pc = 0x002BE1D0u; return; } if (c.pc != 0x002BF204u) [[unlikely]] return; }
L_002BF204:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002BF218; } }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 348u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[20].w[0] + 348u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002BF218:
    set32(c.r[2], ld32((c.r[20].w[0] + 340u)));
    c.budget -= 1;
L_002BF21C:
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF228u); set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_006F(c, 352u, depth + 1u); else { c.pc = 0x002BEB50u; return; } if (c.pc != 0x002BF228u) [[unlikely]] return; }
L_002BF228:
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BF270; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF23Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BF23Cu) [[unlikely]] return; }
L_002BF23C:
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF250u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BF250u) [[unlikely]] return; }
L_002BF250:
    set32(c.r[4], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BF270; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF270u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BF270u) [[unlikely]] return; }
L_002BF270:
    set32(c.r[17], ld32((c.r[29].w[0] + 236u)));
    c.budget -= 1;
L_002BF274:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002BF2B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF284u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BF284u) [[unlikely]] return; }
L_002BF284:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF294u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BF294u) [[unlikely]] return; }
L_002BF294:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BF2B0; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF2B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BF2B0u) [[unlikely]] return; }
L_002BF2B0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002BF2B4:
    c.r[3].d[0] = ld16((c.r[21].w[0] + 346u));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 340u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BEF20u | kUnwind; return; } goto L_002BEF20; }
    c.r[17].d[0] = ld16((c.r[21].w[0] + 362u));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 360u));
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[3].d[0]) { c.r[3].d[0] = ld16((c.r[21].w[0] + 366u));  goto L_002BF434; }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 362u));
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[16], ld32((c.r[20].w[0] + 356u)));  goto L_002BF37C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[17].d[0] & 65535ull;  if (t) { goto L_002BF360; } }
L_002BF2EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF2F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 312u, depth + 1u); else { c.pc = 0x002BE720u; return; } if (c.pc != 0x002BF2F4u) [[unlikely]] return; }
L_002BF2F4:
    set32(c.r[2], ld32((c.r[20].w[0] + 356u)));
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[16], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 168u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF30Cu); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_006F(c, 311u, depth + 1u); else { c.pc = 0x002BE700u; return; } if (c.pc != 0x002BF30Cu) [[unlikely]] return; }
L_002BF30C:
    c.r[22].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF31Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_005F(c, 6u, depth + 1u); else { c.pc = 0x0027C050u; return; } if (c.pc != 0x002BF31Cu) [[unlikely]] return; }
L_002BF31C:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[2], c.r[18].w[0] + 1u);  goto L_002BF35C; }
    set32(c.r[4], c.r[29].w[0] + 164u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF330u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 312u, depth + 1u); else { c.pc = 0x002BE720u; return; } if (c.pc != 0x002BF330u) [[unlikely]] return; }
L_002BF330:
    set32(c.r[2], ld32((c.r[20].w[0] + 356u)));
    set32(c.r[5], c.r[29].w[0] + 164u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF340u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_006F(c, 305u, depth + 1u); else { c.pc = 0x002BE650u; return; } if (c.pc != 0x002BF340u) [[unlikely]] return; }
L_002BF340:
    set32(c.r[4], c.r[29].w[0] + 164u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF34Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_005F(c, 6u, depth + 1u); else { c.pc = 0x0027C050u; return; } if (c.pc != 0x002BF34Cu) [[unlikely]] return; }
L_002BF34C:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 364u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[20].w[0] + 364u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.budget -= 4;
L_002BF35C:
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_002BF360:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 362u));
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 168u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BF2ECu | kUnwind; return; } goto L_002BF2EC; }
    st16((c.r[20].w[0] + 362u), static_cast<std::uint16_t>(c.r[17].w[0]));
    set32(c.r[16], ld32((c.r[20].w[0] + 356u)));
    c.budget -= 2;
L_002BF37C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st16((c.r[20].w[0] + 360u), static_cast<std::uint16_t>(c.r[17].w[0]));  if (t) { goto L_002BF420; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF38Cu); c.r[4].d[0] = ld16((c.r[20].w[0] + 360u));  if (depth < kMaxDepth) unit_006F(c, 299u, depth + 1u); else { c.pc = 0x002BE5B0u; return; } if (c.pc != 0x002BF38Cu) [[unlikely]] return; }
L_002BF38C:
    st32((c.r[20].w[0] + 356u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002BF3B4; } }
L_002BF398:
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF3ACu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_006F(c, 305u, depth + 1u); else { c.pc = 0x002BE650u; return; } if (c.pc != 0x002BF3ACu) [[unlikely]] return; }
L_002BF3AC:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_002BF3B4:
    c.r[18].d[0] = ld16((c.r[20].w[0] + 362u));
    c.r[2].d[0] = c.r[17].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 356u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BF398u | kUnwind; return; } goto L_002BF398; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[20].w[0] + 360u));  if (t) { goto L_002BF408; } }
L_002BF3D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF3D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 312u, depth + 1u); else { c.pc = 0x002BE720u; return; } if (c.pc != 0x002BF3D8u) [[unlikely]] return; }
L_002BF3D8:
    set32(c.r[2], ld32((c.r[20].w[0] + 356u)));
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF3F0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_006F(c, 305u, depth + 1u); else { c.pc = 0x002BE650u; return; } if (c.pc != 0x002BF3F0u) [[unlikely]] return; }
L_002BF3F0:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF3FCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_005F(c, 6u, depth + 1u); else { c.pc = 0x0027C050u; return; } if (c.pc != 0x002BF3FCu) [[unlikely]] return; }
L_002BF3FC:
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = ld16((c.r[20].w[0] + 360u));
    c.budget -= 3;
L_002BF408:
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 160u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BF3D0u | kUnwind; return; } goto L_002BF3D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002BF428; } }
L_002BF420:
    st32((c.r[20].w[0] + 356u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_002BF428:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF430u);  if (depth < kMaxDepth) unit_006F(c, 298u, depth + 1u); else { c.pc = 0x002BE590u; return; } if (c.pc != 0x002BF430u) [[unlikely]] return; }
L_002BF430:
    c.r[3].d[0] = ld16((c.r[21].w[0] + 366u));
    c.budget -= 1;
L_002BF434:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 366u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002BF7D4; } }
L_002BF440:
    set32(c.r[17], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 232u), c.r[16].w[0]);  if (t) { goto L_002BF46C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF45Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BF45Cu) [[unlikely]] return; }
L_002BF45C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF46Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BF46Cu) [[unlikely]] return; }
L_002BF46C:
    set32(c.r[4], ld32((c.r[29].w[0] + 232u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_002BF610; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF488u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BF488u) [[unlikely]] return; }
L_002BF488:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 220u), c.r[2].w[0]);  if (t) { goto L_002BF4AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF498u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BF498u) [[unlikely]] return; }
L_002BF498:
    set32(c.r[3], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF4ACu); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BF4ACu) [[unlikely]] return; }
L_002BF4AC:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 362u));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 152u);  goto L_002BF504; }
    set32(c.r[2], c.r[18].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 156u);
    st16((c.r[20].w[0] + 362u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF4D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 312u, depth + 1u); else { c.pc = 0x002BE720u; return; } if (c.pc != 0x002BF4D0u) [[unlikely]] return; }
L_002BF4D0:
    set32(c.r[4], c.r[29].w[0] + 220u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF4DCu); set32(c.r[5], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_006F(c, 311u, depth + 1u); else { c.pc = 0x002BE700u; return; } if (c.pc != 0x002BF4DCu) [[unlikely]] return; }
L_002BF4DC:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 156u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF4ECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_005F(c, 6u, depth + 1u); else { c.pc = 0x0027C050u; return; } if (c.pc != 0x002BF4ECu) [[unlikely]] return; }
L_002BF4EC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 356u)));  goto L_002BF5B4; }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 364u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 364u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002BF5B0; } }
L_002BF504:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF50Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 312u, depth + 1u); else { c.pc = 0x002BE720u; return; } if (c.pc != 0x002BF50Cu) [[unlikely]] return; }
L_002BF50C:
    set32(c.r[4], c.r[29].w[0] + 220u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF518u); set32(c.r[5], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_006F(c, 311u, depth + 1u); else { c.pc = 0x002BE700u; return; } if (c.pc != 0x002BF518u) [[unlikely]] return; }
L_002BF518:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF528u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_005F(c, 6u, depth + 1u); else { c.pc = 0x0027C050u; return; } if (c.pc != 0x002BF528u) [[unlikely]] return; }
L_002BF528:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 144u);  goto L_002BF574; }
    set32(c.r[4], c.r[29].w[0] + 148u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF53Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 312u, depth + 1u); else { c.pc = 0x002BE720u; return; } if (c.pc != 0x002BF53Cu) [[unlikely]] return; }
L_002BF53C:
    set32(c.r[2], ld32((c.r[20].w[0] + 356u)));
    set32(c.r[5], c.r[29].w[0] + 148u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF54Cu); set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_006F(c, 297u, depth + 1u); else { c.pc = 0x002BE570u; return; } if (c.pc != 0x002BF54Cu) [[unlikely]] return; }
L_002BF54C:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 148u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF55Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_005F(c, 6u, depth + 1u); else { c.pc = 0x0027C050u; return; } if (c.pc != 0x002BF55Cu) [[unlikely]] return; }
L_002BF55C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002BF5B0; } }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 364u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 364u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002BF5B0; } }
L_002BF574:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF57Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 312u, depth + 1u); else { c.pc = 0x002BE720u; return; } if (c.pc != 0x002BF57Cu) [[unlikely]] return; }
L_002BF57C:
    set32(c.r[2], ld32((c.r[20].w[0] + 356u)));
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF58Cu); set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_006F(c, 311u, depth + 1u); else { c.pc = 0x002BE700u; return; } if (c.pc != 0x002BF58Cu) [[unlikely]] return; }
L_002BF58C:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF59Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_005F(c, 6u, depth + 1u); else { c.pc = 0x0027C050u; return; } if (c.pc != 0x002BF59Cu) [[unlikely]] return; }
L_002BF59C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002BF5B0; } }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 364u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[20].w[0] + 364u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002BF5B0:
    set32(c.r[2], ld32((c.r[20].w[0] + 356u)));
    c.budget -= 1;
L_002BF5B4:
    set32(c.r[5], c.r[29].w[0] + 220u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF5C0u); set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_006F(c, 305u, depth + 1u); else { c.pc = 0x002BE650u; return; } if (c.pc != 0x002BF5C0u) [[unlikely]] return; }
L_002BF5C0:
    set32(c.r[3], ld32((c.r[29].w[0] + 220u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 232u)));  goto L_002BF794; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF5D4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BF5D4u) [[unlikely]] return; }
L_002BF5D4:
    set32(c.r[3], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF5E8u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BF5E8u) [[unlikely]] return; }
L_002BF5E8:
    set32(c.r[4], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BF790; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF608u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BF608u) [[unlikely]] return; }
L_002BF608:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BF790; } }
L_002BF610:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 216u), 0u);  if (t) { goto L_002BF634; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF620u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BF620u) [[unlikely]] return; }
L_002BF620:
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF634u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BF634u) [[unlikely]] return; }
L_002BF634:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 362u));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 136u);  goto L_002BF68C; }
    set32(c.r[2], c.r[18].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 140u);
    st16((c.r[20].w[0] + 362u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF658u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 312u, depth + 1u); else { c.pc = 0x002BE720u; return; } if (c.pc != 0x002BF658u) [[unlikely]] return; }
L_002BF658:
    set32(c.r[4], c.r[29].w[0] + 216u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF664u); set32(c.r[5], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_006F(c, 311u, depth + 1u); else { c.pc = 0x002BE700u; return; } if (c.pc != 0x002BF664u) [[unlikely]] return; }
L_002BF664:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF674u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_005F(c, 6u, depth + 1u); else { c.pc = 0x0027C050u; return; } if (c.pc != 0x002BF674u) [[unlikely]] return; }
L_002BF674:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 356u)));  goto L_002BF73C; }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 364u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 364u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002BF738; } }
L_002BF68C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF694u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 312u, depth + 1u); else { c.pc = 0x002BE720u; return; } if (c.pc != 0x002BF694u) [[unlikely]] return; }
L_002BF694:
    set32(c.r[4], c.r[29].w[0] + 216u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF6A0u); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_006F(c, 311u, depth + 1u); else { c.pc = 0x002BE700u; return; } if (c.pc != 0x002BF6A0u) [[unlikely]] return; }
L_002BF6A0:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF6B0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_005F(c, 6u, depth + 1u); else { c.pc = 0x0027C050u; return; } if (c.pc != 0x002BF6B0u) [[unlikely]] return; }
L_002BF6B0:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 128u);  goto L_002BF6FC; }
    set32(c.r[4], c.r[29].w[0] + 132u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF6C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 312u, depth + 1u); else { c.pc = 0x002BE720u; return; } if (c.pc != 0x002BF6C4u) [[unlikely]] return; }
L_002BF6C4:
    set32(c.r[2], ld32((c.r[20].w[0] + 356u)));
    set32(c.r[5], c.r[29].w[0] + 132u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF6D4u); set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_006F(c, 297u, depth + 1u); else { c.pc = 0x002BE570u; return; } if (c.pc != 0x002BF6D4u) [[unlikely]] return; }
L_002BF6D4:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 132u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF6E4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_005F(c, 6u, depth + 1u); else { c.pc = 0x0027C050u; return; } if (c.pc != 0x002BF6E4u) [[unlikely]] return; }
L_002BF6E4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002BF738; } }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 364u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 364u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002BF738; } }
L_002BF6FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF704u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 312u, depth + 1u); else { c.pc = 0x002BE720u; return; } if (c.pc != 0x002BF704u) [[unlikely]] return; }
L_002BF704:
    set32(c.r[2], ld32((c.r[20].w[0] + 356u)));
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF714u); set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_006F(c, 311u, depth + 1u); else { c.pc = 0x002BE700u; return; } if (c.pc != 0x002BF714u) [[unlikely]] return; }
L_002BF714:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF724u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_005F(c, 6u, depth + 1u); else { c.pc = 0x0027C050u; return; } if (c.pc != 0x002BF724u) [[unlikely]] return; }
L_002BF724:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002BF738; } }
    c.r[2].d[0] = ld16((c.r[20].w[0] + 364u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[20].w[0] + 364u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002BF738:
    set32(c.r[2], ld32((c.r[20].w[0] + 356u)));
    c.budget -= 1;
L_002BF73C:
    set32(c.r[5], c.r[29].w[0] + 216u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF748u); set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);  if (depth < kMaxDepth) unit_006F(c, 305u, depth + 1u); else { c.pc = 0x002BE650u; return; } if (c.pc != 0x002BF748u) [[unlikely]] return; }
L_002BF748:
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BF790; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF75Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BF75Cu) [[unlikely]] return; }
L_002BF75C:
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF770u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BF770u) [[unlikely]] return; }
L_002BF770:
    set32(c.r[4], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BF790; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF790u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BF790u) [[unlikely]] return; }
L_002BF790:
    set32(c.r[16], ld32((c.r[29].w[0] + 232u)));
    c.budget -= 1;
L_002BF794:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_002BF7D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF7A4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BF7A4u) [[unlikely]] return; }
L_002BF7A4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF7B4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BF7B4u) [[unlikely]] return; }
L_002BF7B4:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BF7D0; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF7D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BF7D0u) [[unlikely]] return; }
L_002BF7D0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002BF7D4:
    c.r[3].d[0] = ld16((c.r[21].w[0] + 362u));
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 356u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BF440u | kUnwind; return; } goto L_002BF440; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_002BF810:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 368u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF838u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002BF838u) [[unlikely]] return; }
L_002BF838:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002BF854; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF84Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 559u, depth + 1u); else { c.pc = 0x002BFEF0u; return; } if (c.pc != 0x002BF84Cu) [[unlikely]] return; }
L_002BF84C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_002BF854:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF860u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 372u, depth + 1u); else { c.pc = 0x002BED70u; return; } if (c.pc != 0x002BF860u) [[unlikely]] return; }
L_002BF860:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002BF880:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002BFEC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 12224u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { goto L_002BFA4C; } }
L_002BF8BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 140u), 0u);  if (t) { goto L_002BF8E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF8CCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BF8CCu) [[unlikely]] return; }
L_002BF8CC:
    set32(c.r[3], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF8E0u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BF8E0u) [[unlikely]] return; }
L_002BF8E0:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 346u));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 120u);  goto L_002BF938; }
    set32(c.r[2], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 124u);
    st16((c.r[18].w[0] + 346u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF904u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 359u, depth + 1u); else { c.pc = 0x002BEC20u; return; } if (c.pc != 0x002BF904u) [[unlikely]] return; }
L_002BF904:
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF910u); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_006F(c, 358u, depth + 1u); else { c.pc = 0x002BEC00u; return; } if (c.pc != 0x002BF910u) [[unlikely]] return; }
L_002BF910:
    c.r[19].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 124u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF920u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_006F(c, 263u, depth + 1u); else { c.pc = 0x002BE1D0u; return; } if (c.pc != 0x002BF920u) [[unlikely]] return; }
L_002BF920:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 340u)));  goto L_002BF9F0; }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 348u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 348u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002BF9EC; } }
L_002BF938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF940u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 359u, depth + 1u); else { c.pc = 0x002BEC20u; return; } if (c.pc != 0x002BF940u) [[unlikely]] return; }
L_002BF940:
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF94Cu); set32(c.r[5], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_006F(c, 358u, depth + 1u); else { c.pc = 0x002BEC00u; return; } if (c.pc != 0x002BF94Cu) [[unlikely]] return; }
L_002BF94C:
    c.r[19].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF95Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_006F(c, 263u, depth + 1u); else { c.pc = 0x002BE1D0u; return; } if (c.pc != 0x002BF95Cu) [[unlikely]] return; }
L_002BF95C:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 112u);  goto L_002BF9AC; }
    set32(c.r[4], c.r[29].w[0] + 116u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF970u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 359u, depth + 1u); else { c.pc = 0x002BEC20u; return; } if (c.pc != 0x002BF970u) [[unlikely]] return; }
L_002BF970:
    set32(c.r[2], ld32((c.r[18].w[0] + 340u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 116u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF984u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_006F(c, 344u, depth + 1u); else { c.pc = 0x002BEA70u; return; } if (c.pc != 0x002BF984u) [[unlikely]] return; }
L_002BF984:
    c.r[19].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 116u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF994u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_006F(c, 263u, depth + 1u); else { c.pc = 0x002BE1D0u; return; } if (c.pc != 0x002BF994u) [[unlikely]] return; }
L_002BF994:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002BF9EC; } }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 348u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 348u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002BF9EC; } }
L_002BF9AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF9B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 359u, depth + 1u); else { c.pc = 0x002BEC20u; return; } if (c.pc != 0x002BF9B4u) [[unlikely]] return; }
L_002BF9B4:
    set32(c.r[2], ld32((c.r[18].w[0] + 340u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF9C8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_006F(c, 358u, depth + 1u); else { c.pc = 0x002BEC00u; return; } if (c.pc != 0x002BF9C8u) [[unlikely]] return; }
L_002BF9C8:
    c.r[19].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF9D8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_006F(c, 263u, depth + 1u); else { c.pc = 0x002BE1D0u; return; } if (c.pc != 0x002BF9D8u) [[unlikely]] return; }
L_002BF9D8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002BF9EC; } }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 348u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[18].w[0] + 348u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002BF9EC:
    set32(c.r[2], ld32((c.r[18].w[0] + 340u)));
    c.budget -= 1;
L_002BF9F0:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 140u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFA00u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_006F(c, 352u, depth + 1u); else { c.pc = 0x002BEB50u; return; } if (c.pc != 0x002BFA00u) [[unlikely]] return; }
L_002BFA00:
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002BFA4C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFA14u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BFA14u) [[unlikely]] return; }
L_002BFA14:
    set32(c.r[3], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFA28u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BFA28u) [[unlikely]] return; }
L_002BFA28:
    set32(c.r[4], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BFA48; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFA48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BFA48u) [[unlikely]] return; }
L_002BFA48:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002BFA4C:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 346u));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BF8BCu | kUnwind; return; } goto L_002BF8BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002BFB4C; } }
L_002BFA64:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[29].w[0] + 132u), 0u);  if (t) { goto L_002BFA84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFA74u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BFA74u) [[unlikely]] return; }
L_002BFA74:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFA84u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BFA84u) [[unlikely]] return; }
L_002BFA84:
    set32(c.r[3], ld32((c.r[18].w[0] + 340u)));
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[20], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[19], ld32((c.r[20].w[0])));
    c.budget -= 8;
    if (c.r[19].d[0] == c.r[2].d[0]) { set32(c.r[19], ld32((c.r[29].w[0] + 132u)));  goto L_002BFB08; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[19], ld32((c.r[29].w[0] + 132u)));  goto L_002BFAE4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFAB4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BFAB4u) [[unlikely]] return; }
L_002BFAB4:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFAC4u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BFAC4u) [[unlikely]] return; }
L_002BFAC4:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BFAE0; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFAE0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BFAE0u) [[unlikely]] return; }
L_002BFAE0:
    set32(c.r[19], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 1;
L_002BFAE4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[20].w[0]), c.r[19].w[0]);  if (t) { goto L_002BFB04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFAF4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BFAF4u) [[unlikely]] return; }
L_002BFAF4:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFB04u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BFB04u) [[unlikely]] return; }
L_002BFB04:
    set32(c.r[19], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 1;
L_002BFB08:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[2], c.r[16].w[0] + 1u);  goto L_002BFB48; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFB18u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BFB18u) [[unlikely]] return; }
L_002BFB18:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFB28u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BFB28u) [[unlikely]] return; }
L_002BFB28:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BFB44; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFB44u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BFB44u) [[unlikely]] return; }
L_002BFB44:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002BFB48:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_002BFB4C:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 346u));
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[19].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BFA64u | kUnwind; return; } goto L_002BFA64; }
    st16((c.r[18].w[0] + 346u), static_cast<std::uint16_t>(0u));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 348u), static_cast<std::uint16_t>(0u));  if (t) { goto L_002BFD00; } }
L_002BFB70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 136u), 0u);  if (t) { goto L_002BFB94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFB80u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BFB80u) [[unlikely]] return; }
L_002BFB80:
    set32(c.r[3], ld32((c.r[29].w[0] + 136u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFB94u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BFB94u) [[unlikely]] return; }
L_002BFB94:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 362u));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 104u);  goto L_002BFBEC; }
    set32(c.r[2], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 108u);
    st16((c.r[18].w[0] + 362u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFBB8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 312u, depth + 1u); else { c.pc = 0x002BE720u; return; } if (c.pc != 0x002BFBB8u) [[unlikely]] return; }
L_002BFBB8:
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFBC4u); set32(c.r[5], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_006F(c, 311u, depth + 1u); else { c.pc = 0x002BE700u; return; } if (c.pc != 0x002BFBC4u) [[unlikely]] return; }
L_002BFBC4:
    c.r[19].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 108u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFBD4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_005F(c, 6u, depth + 1u); else { c.pc = 0x0027C050u; return; } if (c.pc != 0x002BFBD4u) [[unlikely]] return; }
L_002BFBD4:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 356u)));  goto L_002BFCA4; }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 364u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 364u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002BFCA0; } }
L_002BFBEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFBF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 312u, depth + 1u); else { c.pc = 0x002BE720u; return; } if (c.pc != 0x002BFBF4u) [[unlikely]] return; }
L_002BFBF4:
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFC00u); set32(c.r[5], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_006F(c, 311u, depth + 1u); else { c.pc = 0x002BE700u; return; } if (c.pc != 0x002BFC00u) [[unlikely]] return; }
L_002BFC00:
    c.r[19].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFC10u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_005F(c, 6u, depth + 1u); else { c.pc = 0x0027C050u; return; } if (c.pc != 0x002BFC10u) [[unlikely]] return; }
L_002BFC10:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 96u);  goto L_002BFC60; }
    set32(c.r[4], c.r[29].w[0] + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFC24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 312u, depth + 1u); else { c.pc = 0x002BE720u; return; } if (c.pc != 0x002BFC24u) [[unlikely]] return; }
L_002BFC24:
    set32(c.r[2], ld32((c.r[18].w[0] + 356u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 100u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFC38u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_006F(c, 297u, depth + 1u); else { c.pc = 0x002BE570u; return; } if (c.pc != 0x002BFC38u) [[unlikely]] return; }
L_002BFC38:
    c.r[19].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 100u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFC48u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_005F(c, 6u, depth + 1u); else { c.pc = 0x0027C050u; return; } if (c.pc != 0x002BFC48u) [[unlikely]] return; }
L_002BFC48:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002BFCA0; } }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 364u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0] + 364u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002BFCA0; } }
L_002BFC60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFC68u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006F(c, 312u, depth + 1u); else { c.pc = 0x002BE720u; return; } if (c.pc != 0x002BFC68u) [[unlikely]] return; }
L_002BFC68:
    set32(c.r[2], ld32((c.r[18].w[0] + 356u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFC7Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_006F(c, 311u, depth + 1u); else { c.pc = 0x002BE700u; return; } if (c.pc != 0x002BFC7Cu) [[unlikely]] return; }
L_002BFC7C:
    c.r[19].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFC8Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_005F(c, 6u, depth + 1u); else { c.pc = 0x0027C050u; return; } if (c.pc != 0x002BFC8Cu) [[unlikely]] return; }
L_002BFC8C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002BFCA0; } }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 364u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[18].w[0] + 364u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002BFCA0:
    set32(c.r[2], ld32((c.r[18].w[0] + 356u)));
    c.budget -= 1;
L_002BFCA4:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFCB4u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_006F(c, 305u, depth + 1u); else { c.pc = 0x002BE650u; return; } if (c.pc != 0x002BFCB4u) [[unlikely]] return; }
L_002BFCB4:
    set32(c.r[2], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002BFD00; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFCC8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BFCC8u) [[unlikely]] return; }
L_002BFCC8:
    set32(c.r[3], ld32((c.r[29].w[0] + 136u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFCDCu); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BFCDCu) [[unlikely]] return; }
L_002BFCDC:
    set32(c.r[4], ld32((c.r[29].w[0] + 136u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BFCFC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFCFCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BFCFCu) [[unlikely]] return; }
L_002BFCFC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002BFD00:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 362u));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BFB70u | kUnwind; return; } goto L_002BFB70; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002BFE00; } }
L_002BFD18:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[29].w[0] + 128u), 0u);  if (t) { goto L_002BFD38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFD28u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BFD28u) [[unlikely]] return; }
L_002BFD28:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFD38u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BFD38u) [[unlikely]] return; }
L_002BFD38:
    set32(c.r[3], ld32((c.r[18].w[0] + 356u)));
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[20], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[19], ld32((c.r[20].w[0])));
    c.budget -= 8;
    if (c.r[19].d[0] == c.r[2].d[0]) { set32(c.r[19], ld32((c.r[29].w[0] + 128u)));  goto L_002BFDBC; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[19], ld32((c.r[29].w[0] + 128u)));  goto L_002BFD98; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFD68u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BFD68u) [[unlikely]] return; }
L_002BFD68:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFD78u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BFD78u) [[unlikely]] return; }
L_002BFD78:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BFD94; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFD94u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BFD94u) [[unlikely]] return; }
L_002BFD94:
    set32(c.r[19], ld32((c.r[29].w[0] + 128u)));
    c.budget -= 1;
L_002BFD98:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[20].w[0]), c.r[19].w[0]);  if (t) { goto L_002BFDB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFDA8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BFDA8u) [[unlikely]] return; }
L_002BFDA8:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFDB8u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BFDB8u) [[unlikely]] return; }
L_002BFDB8:
    set32(c.r[19], ld32((c.r[29].w[0] + 128u)));
    c.budget -= 1;
L_002BFDBC:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[2], c.r[16].w[0] + 1u);  goto L_002BFDFC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFDCCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002BFDCCu) [[unlikely]] return; }
L_002BFDCC:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFDDCu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002BFDDCu) [[unlikely]] return; }
L_002BFDDC:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BFDF8; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFDF8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BFDF8u) [[unlikely]] return; }
L_002BFDF8:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002BFDFC:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_002BFE00:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 362u));
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[19].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002BFD18u | kUnwind; return; } goto L_002BFD18; }
    st16((c.r[18].w[0] + 362u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], c.r[18].w[0] + 352u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st16((c.r[18].w[0] + 364u), static_cast<std::uint16_t>(0u));  if (t) { goto L_002BFE5C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 12448u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[18].w[0] + 352u), c.r[2].w[0]);  if (t) { goto L_002BFE5C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00280000u);
    set32(c.r[2], c.r[2].w[0] + 12432u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 16304u);
    set32(c.r[4], ld32((c.r[18].w[0] + 356u)));
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFE5Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002BFE5Cu) [[unlikely]] return; }
L_002BFE5C:
    set32(c.r[3], c.r[18].w[0] + 336u);
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002BFEA4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 12416u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[18].w[0] + 336u), c.r[2].w[0]);  if (t) { goto L_002BFEA0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    set32(c.r[2], c.r[2].w[0] + 12400u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st32((c.r[18].w[0] + 336u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 7728u);
    set32(c.r[4], ld32((c.r[18].w[0] + 340u)));
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFEA0u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002BFEA0u) [[unlikely]] return; }
L_002BFEA0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002BFEA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFEACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0062(c, 139u, depth + 1u); else { c.pc = 0x00289350u; return; } if (c.pc != 0x002BFEACu) [[unlikely]] return; }
L_002BFEAC:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_002BFECC; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFEC8u); set32(c.r[5], 0u + 368u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002BFEC8u) [[unlikely]] return; }
L_002BFEC8:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_002BFECC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002BFEF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFF0Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0062(c, 142u, depth + 1u); else { c.pc = 0x002893C0u; return; } if (c.pc != 0x002BFF0Cu) [[unlikely]] return; }
L_002BFF0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 12224u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 12400u);
    st32((c.r[18].w[0] + 336u), c.r[2].w[0]);
    set32(c.r[2], 0u + 5u);
    st16((c.r[18].w[0] + 344u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[18].w[0] + 350u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[18].w[0] + 346u), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0] + 348u), static_cast<std::uint16_t>(0u));
    c.r[16].d[0] = ld16((c.r[18].w[0] + 344u));
    c.budget -= 14;
    { const bool t = c.r[16].sd[0] <= 0; set32(c.r[17], c.r[18].w[0] + 336u);  if (t) { goto L_002BFF7C; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFF54u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002BFF54u) [[unlikely]] return; }
L_002BFF54:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 5376u);
    set32(c.r[6], c.r[6].w[0] - 7728u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFF74u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002BFF74u) [[unlikely]] return; }
L_002BFF74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_002BFF80; } }
L_002BFF7C:
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 1;
L_002BFF80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 12416u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 12432u);
    st32((c.r[18].w[0] + 352u), c.r[2].w[0]);
    set32(c.r[2], 0u + 5u);
    st16((c.r[18].w[0] + 360u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[18].w[0] + 366u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[18].w[0] + 362u), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0] + 364u), static_cast<std::uint16_t>(0u));
    c.r[17].d[0] = ld16((c.r[18].w[0] + 360u));
    c.budget -= 14;
    { const bool t = c.r[17].sd[0] <= 0; set32(c.r[16], c.r[18].w[0] + 352u);  if (t) { goto L_002BFFF0; } }
    set32(c.r[2], c.r[17].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFFC8u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002BFFC8u) [[unlikely]] return; }
L_002BFFC8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00280000u);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 6656u);
    set32(c.r[6], c.r[6].w[0] - 16304u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFFE8u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002BFFE8u) [[unlikely]] return; }
L_002BFFE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_002BFFF4; } }
L_002BFFF0:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_002BFFF4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 12448u);
    c.budget -= 3;
    [[clang::musttail]] return unit_0070(c, 1u, depth);
}

}
