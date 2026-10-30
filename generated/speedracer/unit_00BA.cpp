#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00BA[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 9, 10, 0, 0, 11, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0,
    13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0,
    20, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0,
    0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0,
    33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0,
    37, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0,
    0, 47, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0,
    0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0,
    0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0,
    0, 0, 77, 0, 0, 78, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0,
    82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 87, 0, 0, 88,
    0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0,
    0, 0, 109, 0, 0, 110, 0, 0, 111, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 115, 0, 116, 0, 0,
    0, 117, 0, 0, 118, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0,
    0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0,
    0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0,
    0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141,
    0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0,
    0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155,
    0, 0, 0, 156, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160,
    0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 166, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171,
    0, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0,
    0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    181, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 188, 0,
    0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0,
    201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 208, 0, 0, 209, 0, 0, 210, 0,
    0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0,
    0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219,
    0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0,
    0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0,
    232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0,
    0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    249, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0,
    0, 0, 0, 254, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0,
    265, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270,
    0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0,
    0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0,
    0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294,
    0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 297, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0,
    0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0,
    309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0,
    0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 317, 0, 0, 0, 0,
    0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0,
    0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0,
    0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 337, 0, 0, 0, 0,
    338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 347, 0,
    0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 353,
    0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 355, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 368, 0, 0, 0, 369, 0, 0, 370, 0, 0, 371, 0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0,
    379, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 386, 0, 0, 0,
    0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388,
    0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 393, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 397, 0, 0, 0, 0, 398, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 400, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 407, 0, 0, 0, 0, 408,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 410, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 413, 0, 0, 0, 0,
    414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0,
    0, 428, 0, 0, 429, 0, 0, 430, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0,
    438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 440, 0, 441, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0,
    446, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0,
    0, 0, 451, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453,
    0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 463, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 466, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0,
    0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 474, 0, 0, 0, 475, 0, 476, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00BA(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003E8000;
    case 2u: goto L_003E8004;
    case 3u: goto L_003E8020;
    case 4u: goto L_003E8040;
    case 5u: goto L_003E8054;
    case 6u: goto L_003E8090;
    case 7u: goto L_003E80AC;
    case 8u: goto L_003E80B8;
    case 9u: goto L_003E80C4;
    case 10u: goto L_003E80C8;
    case 11u: goto L_003E80D4;
    case 12u: goto L_003E80E0;
    case 13u: goto L_003E8100;
    case 14u: goto L_003E811C;
    case 15u: goto L_003E8170;
    case 16u: goto L_003E81A8;
    case 17u: goto L_003E81C0;
    case 18u: goto L_003E81D0;
    case 19u: goto L_003E81F4;
    case 20u: goto L_003E8200;
    case 21u: goto L_003E8210;
    case 22u: goto L_003E8220;
    case 23u: goto L_003E8284;
    case 24u: goto L_003E82A0;
    case 25u: goto L_003E82B8;
    case 26u: goto L_003E82CC;
    case 27u: goto L_003E82D8;
    case 28u: goto L_003E82F0;
    case 29u: goto L_003E8310;
    case 30u: goto L_003E833C;
    case 31u: goto L_003E8354;
    case 32u: goto L_003E8370;
    case 33u: goto L_003E8380;
    case 34u: goto L_003E83A0;
    case 35u: goto L_003E83DC;
    case 36u: goto L_003E83EC;
    case 37u: goto L_003E8400;
    case 38u: goto L_003E840C;
    case 39u: goto L_003E8424;
    case 40u: goto L_003E8434;
    case 41u: goto L_003E8448;
    case 42u: goto L_003E845C;
    case 43u: goto L_003E8468;
    case 44u: goto L_003E84C0;
    case 45u: goto L_003E84EC;
    case 46u: goto L_003E84F4;
    case 47u: goto L_003E8504;
    case 48u: goto L_003E851C;
    case 49u: goto L_003E8524;
    case 50u: goto L_003E8530;
    case 51u: goto L_003E8538;
    case 52u: goto L_003E8568;
    case 53u: goto L_003E8590;
    case 54u: goto L_003E85F4;
    case 55u: goto L_003E8610;
    case 56u: goto L_003E861C;
    case 57u: goto L_003E8628;
    case 58u: goto L_003E8630;
    case 59u: goto L_003E8654;
    case 60u: goto L_003E8684;
    case 61u: goto L_003E86A4;
    case 62u: goto L_003E86B8;
    case 63u: goto L_003E86F8;
    case 64u: goto L_003E872C;
    case 65u: goto L_003E8740;
    case 66u: goto L_003E8758;
    case 67u: goto L_003E876C;
    case 68u: goto L_003E87A4;
    case 69u: goto L_003E87C0;
    case 70u: goto L_003E87D4;
    case 71u: goto L_003E87E0;
    case 72u: goto L_003E87F4;
    case 73u: goto L_003E880C;
    case 74u: goto L_003E8820;
    case 75u: goto L_003E8858;
    case 76u: goto L_003E8874;
    case 77u: goto L_003E8888;
    case 78u: goto L_003E8894;
    case 79u: goto L_003E88A0;
    case 80u: goto L_003E88AC;
    case 81u: goto L_003E88F0;
    case 82u: goto L_003E8900;
    case 83u: goto L_003E8918;
    case 84u: goto L_003E893C;
    case 85u: goto L_003E8958;
    case 86u: goto L_003E8964;
    case 87u: goto L_003E8970;
    case 88u: goto L_003E897C;
    case 89u: goto L_003E8990;
    case 90u: goto L_003E89A4;
    case 91u: goto L_003E89C4;
    case 92u: goto L_003E89D0;
    case 93u: goto L_003E89F4;
    case 94u: goto L_003E8A2C;
    case 95u: goto L_003E8A60;
    case 96u: goto L_003E8A90;
    case 97u: goto L_003E8AC0;
    case 98u: goto L_003E8AD0;
    case 99u: goto L_003E8AE8;
    case 100u: goto L_003E8B1C;
    case 101u: goto L_003E8B38;
    case 102u: goto L_003E8B48;
    case 103u: goto L_003E8B60;
    case 104u: goto L_003E8B94;
    case 105u: goto L_003E8BB0;
    case 106u: goto L_003E8BBC;
    case 107u: goto L_003E8BC8;
    case 108u: goto L_003E8BE8;
    case 109u: goto L_003E8C08;
    case 110u: goto L_003E8C14;
    case 111u: goto L_003E8C20;
    case 112u: goto L_003E8C2C;
    case 113u: goto L_003E8C38;
    case 114u: goto L_003E8C60;
    case 115u: goto L_003E8C6C;
    case 116u: goto L_003E8C74;
    case 117u: goto L_003E8C84;
    case 118u: goto L_003E8C90;
    case 119u: goto L_003E8C9C;
    case 120u: goto L_003E8CA8;
    case 121u: goto L_003E8CE0;
    case 122u: goto L_003E8CF0;
    case 123u: goto L_003E8D10;
    case 124u: goto L_003E8D30;
    case 125u: goto L_003E8D54;
    case 126u: goto L_003E8D68;
    case 127u: goto L_003E8D88;
    case 128u: goto L_003E8D94;
    case 129u: goto L_003E8DA8;
    case 130u: goto L_003E8DBC;
    case 131u: goto L_003E8DD0;
    case 132u: goto L_003E8E00;
    case 133u: goto L_003E8E14;
    case 134u: goto L_003E8E30;
    case 135u: goto L_003E8E54;
    case 136u: goto L_003E8E74;
    case 137u: goto L_003E8E90;
    case 138u: goto L_003E8EA0;
    case 139u: goto L_003E8EC4;
    case 140u: goto L_003E8EEC;
    case 141u: goto L_003E8EFC;
    case 142u: goto L_003E8F20;
    case 143u: goto L_003E8F34;
    case 144u: goto L_003E8F44;
    case 145u: goto L_003E8F60;
    case 146u: goto L_003E8F9C;
    case 147u: goto L_003E8FA8;
    case 148u: goto L_003E8FC8;
    case 149u: goto L_003E8FEC;
    case 150u: goto L_003E9010;
    case 151u: goto L_003E9030;
    case 152u: goto L_003E9054;
    case 153u: goto L_003E909C;
    case 154u: goto L_003E90C8;
    case 155u: goto L_003E90FC;
    case 156u: goto L_003E910C;
    case 157u: goto L_003E9118;
    case 158u: goto L_003E9124;
    case 159u: goto L_003E9140;
    case 160u: goto L_003E917C;
    case 161u: goto L_003E9188;
    case 162u: goto L_003E919C;
    case 163u: goto L_003E91B0;
    case 164u: goto L_003E91CC;
    case 165u: goto L_003E91E4;
    case 166u: goto L_003E91EC;
    case 167u: goto L_003E9214;
    case 168u: goto L_003E921C;
    case 169u: goto L_003E9228;
    case 170u: goto L_003E9234;
    case 171u: goto L_003E927C;
    case 172u: goto L_003E9294;
    case 173u: goto L_003E92A0;
    case 174u: goto L_003E92E0;
    case 175u: goto L_003E9318;
    case 176u: goto L_003E932C;
    case 177u: goto L_003E9344;
    case 178u: goto L_003E9360;
    case 179u: goto L_003E9384;
    case 180u: goto L_003E93A8;
    case 181u: goto L_003E9400;
    case 182u: goto L_003E9424;
    case 183u: goto L_003E9448;
    case 184u: goto L_003E9480;
    case 185u: goto L_003E94A0;
    case 186u: goto L_003E94D8;
    case 187u: goto L_003E94E4;
    case 188u: goto L_003E94F8;
    case 189u: goto L_003E950C;
    case 190u: goto L_003E9528;
    case 191u: goto L_003E9540;
    case 192u: goto L_003E9548;
    case 193u: goto L_003E9564;
    case 194u: goto L_003E9594;
    case 195u: goto L_003E95AC;
    case 196u: goto L_003E95B8;
    case 197u: goto L_003E95F0;
    case 198u: goto L_003E9638;
    case 199u: goto L_003E964C;
    case 200u: goto L_003E9664;
    case 201u: goto L_003E9680;
    case 202u: goto L_003E971C;
    case 203u: goto L_003E9730;
    case 204u: goto L_003E9790;
    case 205u: goto L_003E97B4;
    case 206u: goto L_003E97C4;
    case 207u: goto L_003E97D0;
    case 208u: goto L_003E97E0;
    case 209u: goto L_003E97EC;
    case 210u: goto L_003E97F8;
    case 211u: goto L_003E981C;
    case 212u: goto L_003E9828;
    case 213u: goto L_003E9830;
    case 214u: goto L_003E9850;
    case 215u: goto L_003E9870;
    case 216u: goto L_003E9890;
    case 217u: goto L_003E98BC;
    case 218u: goto L_003E98DC;
    case 219u: goto L_003E98FC;
    case 220u: goto L_003E9910;
    case 221u: goto L_003E9930;
    case 222u: goto L_003E993C;
    case 223u: goto L_003E9948;
    case 224u: goto L_003E995C;
    case 225u: goto L_003E9974;
    case 226u: goto L_003E9990;
    case 227u: goto L_003E99E0;
    case 228u: goto L_003E9A0C;
    case 229u: goto L_003E9A3C;
    case 230u: goto L_003E9A48;
    case 231u: goto L_003E9A60;
    case 232u: goto L_003E9A80;
    case 233u: goto L_003E9AB0;
    case 234u: goto L_003E9AF4;
    case 235u: goto L_003E9B20;
    case 236u: goto L_003E9B50;
    case 237u: goto L_003E9B5C;
    case 238u: goto L_003E9B74;
    case 239u: goto L_003E9B98;
    case 240u: goto L_003E9BC0;
    case 241u: goto L_003E9C20;
    case 242u: goto L_003E9C44;
    case 243u: goto L_003E9C50;
    case 244u: goto L_003E9C84;
    case 245u: goto L_003E9C98;
    case 246u: goto L_003E9CA8;
    case 247u: goto L_003E9CBC;
    case 248u: goto L_003E9CD4;
    case 249u: goto L_003E9D00;
    case 250u: goto L_003E9D24;
    case 251u: goto L_003E9D3C;
    case 252u: goto L_003E9D54;
    case 253u: goto L_003E9D70;
    case 254u: goto L_003E9D8C;
    case 255u: goto L_003E9D94;
    case 256u: goto L_003E9DAC;
    case 257u: goto L_003E9DC0;
    case 258u: goto L_003E9DD0;
    case 259u: goto L_003E9DD8;
    case 260u: goto L_003E9DF4;
    case 261u: goto L_003E9E24;
    case 262u: goto L_003E9E3C;
    case 263u: goto L_003E9E48;
    case 264u: goto L_003E9E6C;
    case 265u: goto L_003E9E80;
    case 266u: goto L_003E9E88;
    case 267u: goto L_003E9EB0;
    case 268u: goto L_003E9ECC;
    case 269u: goto L_003E9EE4;
    case 270u: goto L_003E9EFC;
    case 271u: goto L_003E9F18;
    case 272u: goto L_003E9F34;
    case 273u: goto L_003E9F3C;
    case 274u: goto L_003E9F54;
    case 275u: goto L_003E9F80;
    case 276u: goto L_003E9FC8;
    case 277u: goto L_003E9FDC;
    case 278u: goto L_003E9FF4;
    case 279u: goto L_003EA010;
    case 280u: goto L_003EA05C;
    case 281u: goto L_003EA074;
    case 282u: goto L_003EA08C;
    case 283u: goto L_003EA0A8;
    case 284u: goto L_003EA0C4;
    case 285u: goto L_003EA0CC;
    case 286u: goto L_003EA0F8;
    case 287u: goto L_003EA120;
    case 288u: goto L_003EA140;
    case 289u: goto L_003EA1B0;
    case 290u: goto L_003EA1B8;
    case 291u: goto L_003EA208;
    case 292u: goto L_003EA228;
    case 293u: goto L_003EA24C;
    case 294u: goto L_003EA27C;
    case 295u: goto L_003EA29C;
    case 296u: goto L_003EA2C0;
    case 297u: goto L_003EA304;
    case 298u: goto L_003EA324;
    case 299u: goto L_003EA348;
    case 300u: goto L_003EA3B0;
    case 301u: goto L_003EA3C0;
    case 302u: goto L_003EA3EC;
    case 303u: goto L_003EA420;
    case 304u: goto L_003EA448;
    case 305u: goto L_003EA468;
    case 306u: goto L_003EA48C;
    case 307u: goto L_003EA4BC;
    case 308u: goto L_003EA4DC;
    case 309u: goto L_003EA500;
    case 310u: goto L_003EA52C;
    case 311u: goto L_003EA54C;
    case 312u: goto L_003EA570;
    case 313u: goto L_003EA5F0;
    case 314u: goto L_003EA60C;
    case 315u: goto L_003EA640;
    case 316u: goto L_003EA664;
    case 317u: goto L_003EA66C;
    case 318u: goto L_003EA690;
    case 319u: goto L_003EA6C0;
    case 320u: goto L_003EA6E4;
    case 321u: goto L_003EA6F4;
    case 322u: goto L_003EA718;
    case 323u: goto L_003EA750;
    case 324u: goto L_003EA7A0;
    case 325u: goto L_003EA7C8;
    case 326u: goto L_003EA7E8;
    case 327u: goto L_003EA80C;
    case 328u: goto L_003EA88C;
    case 329u: goto L_003EA8A8;
    case 330u: goto L_003EA8D0;
    case 331u: goto L_003EA940;
    case 332u: goto L_003EA948;
    case 333u: goto L_003EA9A0;
    case 334u: goto L_003EA9A8;
    case 335u: goto L_003EA9BC;
    case 336u: goto L_003EA9E4;
    case 337u: goto L_003EA9EC;
    case 338u: goto L_003EAA00;
    case 339u: goto L_003EAA44;
    case 340u: goto L_003EAA4C;
    case 341u: goto L_003EAA60;
    case 342u: goto L_003EAAC8;
    case 343u: goto L_003EAAD8;
    case 344u: goto L_003EAB04;
    case 345u: goto L_003EAB40;
    case 346u: goto L_003EAB70;
    case 347u: goto L_003EAB78;
    case 348u: goto L_003EAB8C;
    case 349u: goto L_003EABB4;
    case 350u: goto L_003EABBC;
    case 351u: goto L_003EABD0;
    case 352u: goto L_003EABF4;
    case 353u: goto L_003EABFC;
    case 354u: goto L_003EAC10;
    case 355u: goto L_003EAC88;
    case 356u: goto L_003EACA4;
    case 357u: goto L_003EACE0;
    case 358u: goto L_003EAD0C;
    case 359u: goto L_003EAD44;
    case 360u: goto L_003EAD60;
    case 361u: goto L_003EAD90;
    case 362u: goto L_003EADD0;
    case 363u: goto L_003EADFC;
    case 364u: goto L_003EAE40;
    case 365u: goto L_003EAE5C;
    case 366u: goto L_003EAE8C;
    case 367u: goto L_003EAED0;
    case 368u: goto L_003EAF04;
    case 369u: goto L_003EAF14;
    case 370u: goto L_003EAF20;
    case 371u: goto L_003EAF2C;
    case 372u: goto L_003EAF38;
    case 373u: goto L_003EAF4C;
    case 374u: goto L_003EAF80;
    case 375u: goto L_003EAFAC;
    case 376u: goto L_003EAFC0;
    case 377u: goto L_003EAFD0;
    case 378u: goto L_003EAFE8;
    case 379u: goto L_003EB000;
    case 380u: goto L_003EB018;
    case 381u: goto L_003EB030;
    case 382u: goto L_003EB050;
    case 383u: goto L_003EB060;
    case 384u: goto L_003EB0B8;
    case 385u: goto L_003EB0E8;
    case 386u: goto L_003EB0F0;
    case 387u: goto L_003EB104;
    case 388u: goto L_003EB17C;
    case 389u: goto L_003EB198;
    case 390u: goto L_003EB1C0;
    case 391u: goto L_003EB230;
    case 392u: goto L_003EB238;
    case 393u: goto L_003EB290;
    case 394u: goto L_003EB298;
    case 395u: goto L_003EB2AC;
    case 396u: goto L_003EB2D4;
    case 397u: goto L_003EB2DC;
    case 398u: goto L_003EB2F0;
    case 399u: goto L_003EB334;
    case 400u: goto L_003EB33C;
    case 401u: goto L_003EB350;
    case 402u: goto L_003EB3B8;
    case 403u: goto L_003EB3C8;
    case 404u: goto L_003EB3F4;
    case 405u: goto L_003EB430;
    case 406u: goto L_003EB460;
    case 407u: goto L_003EB468;
    case 408u: goto L_003EB47C;
    case 409u: goto L_003EB4A4;
    case 410u: goto L_003EB4AC;
    case 411u: goto L_003EB4C0;
    case 412u: goto L_003EB4E4;
    case 413u: goto L_003EB4EC;
    case 414u: goto L_003EB500;
    case 415u: goto L_003EB578;
    case 416u: goto L_003EB5B0;
    case 417u: goto L_003EB5DC;
    case 418u: goto L_003EB614;
    case 419u: goto L_003EB630;
    case 420u: goto L_003EB668;
    case 421u: goto L_003EB6B0;
    case 422u: goto L_003EB6DC;
    case 423u: goto L_003EB720;
    case 424u: goto L_003EB73C;
    case 425u: goto L_003EB774;
    case 426u: goto L_003EB7C0;
    case 427u: goto L_003EB7F4;
    case 428u: goto L_003EB804;
    case 429u: goto L_003EB810;
    case 430u: goto L_003EB81C;
    case 431u: goto L_003EB828;
    case 432u: goto L_003EB83C;
    case 433u: goto L_003EB870;
    case 434u: goto L_003EB89C;
    case 435u: goto L_003EB8B0;
    case 436u: goto L_003EB8C0;
    case 437u: goto L_003EB8F0;
    case 438u: goto L_003EB900;
    case 439u: goto L_003EB958;
    case 440u: goto L_003EB988;
    case 441u: goto L_003EB990;
    case 442u: goto L_003EB9A4;
    case 443u: goto L_003EBA1C;
    case 444u: goto L_003EBA40;
    case 445u: goto L_003EBA64;
    case 446u: goto L_003EBA80;
    case 447u: goto L_003EBA98;
    case 448u: goto L_003EBAB0;
    case 449u: goto L_003EBAD4;
    case 450u: goto L_003EBAF0;
    case 451u: goto L_003EBB08;
    case 452u: goto L_003EBB20;
    case 453u: goto L_003EBB7C;
    case 454u: goto L_003EBB8C;
    case 455u: goto L_003EBBB4;
    case 456u: goto L_003EBBE0;
    case 457u: goto L_003EBC50;
    case 458u: goto L_003EBCCC;
    case 459u: goto L_003EBCD4;
    case 460u: goto L_003EBCF8;
    case 461u: goto L_003EBD44;
    case 462u: goto L_003EBD54;
    case 463u: goto L_003EBD84;
    case 464u: goto L_003EBDA4;
    case 465u: goto L_003EBDC8;
    case 466u: goto L_003EBE0C;
    case 467u: goto L_003EBE20;
    case 468u: goto L_003EBE4C;
    case 469u: goto L_003EBE70;
    case 470u: goto L_003EBE88;
    case 471u: goto L_003EBEA8;
    case 472u: goto L_003EBECC;
    case 473u: goto L_003EBF20;
    case 474u: goto L_003EBF84;
    case 475u: goto L_003EBF94;
    case 476u: goto L_003EBF9C;
    case 477u: goto L_003EBFB4;
    default: bad_entry(c, 0x003E8000u); return;
    }
L_003E8000:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003E8004:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;  goto L_003E8028; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8020u); set32(c.r[5], c.r[5].w[0] - 9359u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003E8020u) [[unlikely]] return; }
L_003E8020:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0])));  if (t) { goto L_003E8058; } }
L_003E8028:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_003E8048; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8040u); set32(c.r[5], c.r[5].w[0] - 9347u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003E8040u) [[unlikely]] return; }
L_003E8040:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E8054; } }
L_003E8048:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8054u); set32(c.r[5], c.r[5].w[0] - 9336u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003E8054u) [[unlikely]] return; }
L_003E8054:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003E8058:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[8], c.r[16].w[0] + 1u);  goto L_003E8068; }
    set32(c.r[8], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_003E8068:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[29].w[0] + 81u);  goto L_003E807C; }
    set32(c.r[7], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_003E807C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8090u); set32(c.r[6], c.r[6].w[0] - 9322u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x003E8090u) [[unlikely]] return; }
L_003E8090:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 65u);  goto L_003E80A4; }
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_003E80A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E80ACu); set32(c.r[4], ld32((c.r[28].w[0] - 25072u)));  if (depth < kMaxDepth) unit_00CD(c, 500u, depth + 1u); else { c.pc = 0x00437EE0u; return; } if (c.pc != 0x003E80ACu) [[unlikely]] return; }
L_003E80AC:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E80B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003E80B8u) [[unlikely]] return; }
L_003E80B8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E80C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003E80C4u) [[unlikely]] return; }
L_003E80C4:
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.budget -= 1;
L_003E80C8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E80D4u); set32(c.r[5], c.r[5].w[0] - 9317u);  if (depth < kMaxDepth) unit_00FC(c, 539u, depth + 1u); else { c.pc = 0x004F3EA0u; return; } if (c.pc != 0x003E80D4u) [[unlikely]] return; }
L_003E80D4:
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E80E0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FD(c, 21u, depth + 1u); else { c.pc = 0x004F4220u; return; } if (c.pc != 0x003E80E0u) [[unlikely]] return; }
L_003E80E0:
    st8((c.r[18].w[0] + 28u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003E8100:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 9292u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E811Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 406u, depth + 1u); else { c.pc = 0x003BF370u; return; } if (c.pc != 0x003E811Cu) [[unlikely]] return; }
L_003E811C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 22912u);
    set32(c.r[3], c.r[3].w[0] + 22848u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 22876u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 29u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 30u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E8170:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003E81AC; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 22912u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_003E81A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E81A8u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003E81A8u) [[unlikely]] return; }
L_003E81A8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003E81AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E81C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003E81D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003E81E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003E81F4; } }
L_003E81E4:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E81F4u); set32(c.r[5], ld32((c.r[28].w[0] - 30300u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E81F4u) [[unlikely]] return; }
L_003E81F4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E8200:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 24u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E7DA0u | kUnwind; return; } [[clang::musttail]] return unit_00B9(c, 438u, depth); }
L_003E8210:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 24u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E7D10u | kUnwind; return; } [[clang::musttail]] return unit_00B9(c, 435u, depth); }
L_003E8220:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E82F0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[17].w[0] + 160u);
    set32(c.r[3], c.r[3].w[0] + 22944u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_003E8284; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 136u);  goto L_003E8288; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E8284; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E8284; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E8284; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E8284; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8284u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003E8284u) [[unlikely]] return; }
L_003E8284:
    set32(c.r[4], c.r[17].w[0] + 136u);
    c.budget -= 1;
L_003E8288:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E82A0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E82A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E82A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003E82A0u) [[unlikely]] return; }
L_003E82A0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    set32(c.r[4], c.r[17].w[0] + 64u);
    set32(c.r[5], c.r[5].w[0] - 31984u);
    set32(c.r[6], 0u + 24u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E82B8u); set32(c.r[7], 0u + 3u);  if (depth < kMaxDepth) unit_00A5(c, 157u, depth + 1u); else { c.pc = 0x00397E80u; return; } if (c.pc != 0x003E82B8u) [[unlikely]] return; }
L_003E82B8:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003E82D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E82CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003E82CCu) [[unlikely]] return; }
L_003E82CC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003E82D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E82D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 545u, depth + 1u); else { c.pc = 0x00433BC0u; return; } if (c.pc != 0x003E82D8u) [[unlikely]] return; }
L_003E82D8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003E82F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E82F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003E82F0u) [[unlikely]] return; }
L_003E82F0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003E82F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E8310:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E8354; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_003E8340; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E833Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003E833Cu) [[unlikely]] return; }
L_003E833C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_003E8340:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003E8358; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8354u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003E8354u) [[unlikely]] return; }
L_003E8354:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003E8358:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E8370:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 136u);  c.pc = t; return; }
L_003E8380:
    set32(c.r[3], c.r[5].w[0] - 1u);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 64u);  c.pc = t; return; }
L_003E83A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003E83D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 56u)));  if (t) { goto L_003E83D4; } }
L_003E83D0:
    set32(c.r[4], c.r[17].w[0] + 49u);
    c.budget -= 1;
L_003E83D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E83DCu);  if (depth < kMaxDepth) unit_00D1(c, 167u, depth + 1u); else { c.pc = 0x004450C0u; return; } if (c.pc != 0x003E83DCu) [[unlikely]] return; }
L_003E83DC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E83ECu); set32(c.r[5], c.r[5].w[0] - 9216u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003E83ECu) [[unlikely]] return; }
L_003E83EC:
    set32(c.r[4], ld32((c.r[17].w[0] + 152u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], 0u + 2u);  goto L_003E8408; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8400u);  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x003E8400u) [[unlikely]] return; }
L_003E8400:
    st32((c.r[17].w[0] + 152u), 0u);
    set32(c.r[16], 0u + 2u);
    c.budget -= 2;
L_003E8408:
    set32(c.r[2], c.r[16].w[0] << 1);
    c.budget -= 1;
L_003E840C:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[19], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 84u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8424u); set32(c.r[18], c.r[19].w[0] + 84u);  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x003E8424u) [[unlikely]] return; }
L_003E8424:
    st32((c.r[18].w[0]), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 80u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8434u); set32(c.r[18], c.r[19].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x003E8434u) [[unlikely]] return; }
L_003E8434:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[19].w[0] + 64u);
    set32(c.r[5], c.r[5].w[0] - 9216u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8448u); st32((c.r[18].w[0]), 0u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003E8448u) [[unlikely]] return; }
L_003E8448:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    if (c.r[16].sd[0] >= 0) { set32(c.r[2], c.r[16].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E840Cu | kUnwind; return; } goto L_003E840C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 172u)));  if (t) { goto L_003E8474; } }
L_003E845C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8468u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x003E8468u) [[unlikely]] return; }
L_003E8468:
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[16], c.r[3].w[0] + 4u);
    c.budget -= 3;
L_003E8474:
    set32(c.r[5], ld32((c.r[17].w[0] + 168u)));
    c.r[3].d[0] = c.r[16].d[0] << 32;
    set32(c.r[4], ld32((c.r[17].w[0] + 172u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E845Cu | kUnwind; return; } goto L_003E845C; }
    st32((c.r[17].w[0] + 168u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003E84C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003E84EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E84ECu);  if (depth < kMaxDepth) unit_00B4(c, 390u, depth + 1u); else { c.pc = 0x003D3F60u; return; } if (c.pc != 0x003E84ECu) [[unlikely]] return; }
L_003E84EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E84F4u); set32(c.r[4], ld32((c.r[28].w[0] - 26896u)));  if (depth < kMaxDepth) unit_00B4(c, 386u, depth + 1u); else { c.pc = 0x003D3F00u; return; } if (c.pc != 0x003E84F4u) [[unlikely]] return; }
L_003E84F4:
    set32(c.r[2], ld32((c.r[28].w[0] - 26156u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8504u); set32(c.r[5], ld32((c.r[4].w[0])));  if (depth < kMaxDepth) unit_00C7(c, 370u, depth + 1u); else { c.pc = 0x0041F5C0u; return; } if (c.pc != 0x003E8504u) [[unlikely]] return; }
L_003E8504:
    set32(c.r[4], ld32((c.r[28].w[0] - 26896u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 9215u);
    set32(c.r[6], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E851Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00B4(c, 358u, depth + 1u); else { c.pc = 0x003D3A10u; return; } if (c.pc != 0x003E851Cu) [[unlikely]] return; }
L_003E851C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8524u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 491u, depth + 1u); else { c.pc = 0x00433620u; return; } if (c.pc != 0x003E8524u) [[unlikely]] return; }
L_003E8524:
    set32(c.r[17], ld32((c.r[28].w[0] - 26060u)));
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[16].w[0] + 1u);
    c.budget -= 3;
L_003E8530:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8538u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 375u, depth + 1u); else { c.pc = 0x0040E830u; return; } if (c.pc != 0x003E8538u) [[unlikely]] return; }
L_003E8538:
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[4], c.r[16].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);  if (t) { goto L_003E855C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_003E8560; } }
L_003E855C:
    set32(c.r[5], c.r[2].w[0] + 9u);
    c.budget -= 1;
L_003E8560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8568u); set32(c.r[4], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003E8568u) [[unlikely]] return; }
L_003E8568:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[16].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E8530u | kUnwind; return; } goto L_003E8530; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E8590:
    set32(c.r[29], c.r[29].w[0] - 528u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_003E8C9C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26060u)));
    set32(c.r[3], c.r[2].w[0] + 156u);
    set32(c.r[2], ld32((c.r[2].w[0] + 156u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[3].w[0] + 1u);  goto L_003E85EC; }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_003E85EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E85F4u); set32(c.r[4], c.r[18].w[0] + 136u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003E85F4u) [[unlikely]] return; }
L_003E85F4:
    set32(c.r[2], ld32((c.r[18].w[0] + 136u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[18].w[0] + 137u);  goto L_003E8608; }
    set32(c.r[5], ld32((c.r[18].w[0] + 144u)));
    c.budget -= 1;
L_003E8608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8610u); set32(c.r[4], ld32((c.r[28].w[0] - 22676u)));  if (depth < kMaxDepth) unit_00F9(c, 217u, depth + 1u); else { c.pc = 0x004E5F30u; return; } if (c.pc != 0x003E8610u) [[unlikely]] return; }
L_003E8610:
    set32(c.r[5], c.r[2].w[0] + 132u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E861Cu); set32(c.r[4], c.r[29].w[0] + 496u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003E861Cu) [[unlikely]] return; }
L_003E861C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8628u); c.r[21].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 392u, depth + 1u); else { c.pc = 0x003F7660u; return; } if (c.pc != 0x003E8628u) [[unlikely]] return; }
L_003E8628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8630u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 390u, depth + 1u); else { c.pc = 0x003F7600u; return; } if (c.pc != 0x003E8630u) [[unlikely]] return; }
L_003E8630:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[17].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_003E8648; }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 9203u);  if (t) { goto L_003E864C; } }
L_003E8648:
    set32(c.r[17], c.r[17].w[0] - 9198u);
    c.budget -= 1;
L_003E864C:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 1);
    c.budget -= 2;
L_003E8654:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[20], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[22], c.r[20].w[0] + 64u);  if (t) { goto L_003E8678; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[20].w[0] + 72u)));  if (t) { goto L_003E867C; } }
L_003E8678:
    set32(c.r[5], c.r[20].w[0] + 65u);
    c.budget -= 1;
L_003E867C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8684u); set32(c.r[4], ld32((c.r[28].w[0] - 22676u)));  if (depth < kMaxDepth) unit_00F9(c, 217u, depth + 1u); else { c.pc = 0x004E5F30u; return; } if (c.pc != 0x003E8684u) [[unlikely]] return; }
L_003E8684:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[22].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[20].w[0] + 65u);  goto L_003E869C; }
    set32(c.r[5], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 1;
L_003E869C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E86A4u); set32(c.r[4], ld32((c.r[28].w[0] - 22676u)));  if (depth < kMaxDepth) unit_00F9(c, 213u, depth + 1u); else { c.pc = 0x004E5EB0u; return; } if (c.pc != 0x003E86A4u) [[unlikely]] return; }
L_003E86A4:
    c.budget -= 2;
    if (c.r[21].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 132u)));  goto L_003E86C8; }
    set32(c.r[4], c.r[18].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E86B8u); set32(c.r[5], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x003E86B8u) [[unlikely]] return; }
L_003E86B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E86C4; } }
    c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003E86C4:
    set32(c.r[2], ld32((c.r[19].w[0] + 132u)));
    c.budget -= 1;
L_003E86C8:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[19].w[0] + 132u);  if (t) { goto L_003E86DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_003E86E0; } }
L_003E86DC:
    set32(c.r[8], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_003E86E0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 480u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[6].w[0] - 9194u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E86F8u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x003E86F8u) [[unlikely]] return; }
L_003E86F8:
    set32(c.r[2], ld32((c.r[19].w[0] + 132u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[19].w[0] + 132u);  if (t) { goto L_003E8710; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_003E8714; } }
L_003E8710:
    set32(c.r[8], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_003E8714:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 464u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[6].w[0] - 9157u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E872Cu); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x003E872Cu) [[unlikely]] return; }
L_003E872C:
    set32(c.r[4], 0u + 68u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8740u); c.r[23].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003E8740u) [[unlikely]] return; }
L_003E8740:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { st32((c.r[20].w[0] + 80u), c.r[19].w[0]);  goto L_003E87AC; }
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8758u); set32(c.r[5], c.r[29].w[0] + 480u);  if (depth < kMaxDepth) unit_000A(c, 393u, depth + 1u); else { c.pc = 0x0012B280u; return; } if (c.pc != 0x003E8758u) [[unlikely]] return; }
L_003E8758:
    set32(c.r[5], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[22], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E876Cu); set32(c.r[30], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_00BA(c, 122u, depth + 1u); else { c.pc = 0x003E8CF0u; return; } if (c.pc != 0x003E876Cu) [[unlikely]] return; }
L_003E876C:
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.r[23].d[0] = c.r[22].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[29].w[0] + 320u);  if (t) { goto L_003E8788; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 328u)));  if (t) { goto L_003E878C; } }
L_003E8788:
    set32(c.r[6], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_003E878C:
    set32(c.r[8], 0u + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[30].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E87A4u); c.r[9].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 311u, depth + 1u); else { c.pc = 0x00152FA0u; return; } if (c.pc != 0x003E87A4u) [[unlikely]] return; }
L_003E87A4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[20].w[0] + 80u), c.r[19].w[0]);
    c.budget -= 2;
L_003E87AC:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull; set32(c.r[19], c.r[20].w[0] + 80u);  if (t) { goto L_003E87C0; } }
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E87C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003E87C0u) [[unlikely]] return; }
L_003E87C0:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0])));  goto L_003E87D8; }
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E87D4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x003E87D4u) [[unlikely]] return; }
L_003E87D4:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_003E87D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E87E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 67u, depth + 1u); else { c.pc = 0x00138E10u; return; } if (c.pc != 0x003E87E0u) [[unlikely]] return; }
L_003E87E0:
    set32(c.r[4], 0u + 68u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E87F4u); c.r[23].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003E87F4u) [[unlikely]] return; }
L_003E87F4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { st32((c.r[20].w[0] + 84u), c.r[19].w[0]);  goto L_003E8860; }
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E880Cu); set32(c.r[5], c.r[29].w[0] + 464u);  if (depth < kMaxDepth) unit_000A(c, 393u, depth + 1u); else { c.pc = 0x0012B280u; return; } if (c.pc != 0x003E880Cu) [[unlikely]] return; }
L_003E880C:
    set32(c.r[5], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[22], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8820u); set32(c.r[30], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_00BA(c, 123u, depth + 1u); else { c.pc = 0x003E8D10u; return; } if (c.pc != 0x003E8820u) [[unlikely]] return; }
L_003E8820:
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    c.r[23].d[0] = c.r[22].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[29].w[0] + 272u);  if (t) { goto L_003E883C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 280u)));  if (t) { goto L_003E8840; } }
L_003E883C:
    set32(c.r[6], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_003E8840:
    set32(c.r[8], 0u + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[30].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8858u); c.r[9].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 311u, depth + 1u); else { c.pc = 0x00152FA0u; return; } if (c.pc != 0x003E8858u) [[unlikely]] return; }
L_003E8858:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[20].w[0] + 84u), c.r[19].w[0]);
    c.budget -= 2;
L_003E8860:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull; set32(c.r[19], c.r[20].w[0] + 84u);  if (t) { goto L_003E8874; } }
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8874u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003E8874u) [[unlikely]] return; }
L_003E8874:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0])));  goto L_003E888C; }
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8888u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x003E8888u) [[unlikely]] return; }
L_003E8888:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_003E888C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8894u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 67u, depth + 1u); else { c.pc = 0x00138E10u; return; } if (c.pc != 0x003E8894u) [[unlikely]] return; }
L_003E8894:
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E88A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003E88A0u) [[unlikely]] return; }
L_003E88A0:
    set32(c.r[4], c.r[29].w[0] + 480u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E88ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003E88ACu) [[unlikely]] return; }
L_003E88AC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E8654u | kUnwind; return; } goto L_003E8654; }
    c.budget -= 2;
    if (c.r[21].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 432u);  goto L_003E8974; }
    set32(c.r[2], ld32((c.r[29].w[0] + 496u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[8], c.r[29].w[0] + 497u);  goto L_003E88D8; }
    set32(c.r[8], ld32((c.r[29].w[0] + 504u)));
    c.budget -= 1;
L_003E88D8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 448u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[6].w[0] - 9194u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E88F0u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x003E88F0u) [[unlikely]] return; }
L_003E88F0:
    set32(c.r[4], 0u + 68u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8900u); c.r[19].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003E8900u) [[unlikely]] return; }
L_003E8900:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { st32((c.r[18].w[0] + 152u), c.r[16].w[0]);  goto L_003E8944; }
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8918u); set32(c.r[5], c.r[29].w[0] + 448u);  if (depth < kMaxDepth) unit_000A(c, 393u, depth + 1u); else { c.pc = 0x0012B280u; return; } if (c.pc != 0x003E8918u) [[unlikely]] return; }
L_003E8918:
    set32(c.r[19], 0u + 1u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 9121u);
    set32(c.r[7], c.r[29].w[0] + 240u);
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E893Cu); c.r[9].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 311u, depth + 1u); else { c.pc = 0x00152FA0u; return; } if (c.pc != 0x003E893Cu) [[unlikely]] return; }
L_003E893C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[18].w[0] + 152u), c.r[16].w[0]);
    c.budget -= 2;
L_003E8944:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 152u)));  goto L_003E895C; }
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8958u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x003E8958u) [[unlikely]] return; }
L_003E8958:
    set32(c.r[4], ld32((c.r[18].w[0] + 152u)));
    c.budget -= 1;
L_003E895C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8964u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 67u, depth + 1u); else { c.pc = 0x00138E10u; return; } if (c.pc != 0x003E8964u) [[unlikely]] return; }
L_003E8964:
    set32(c.r[4], c.r[29].w[0] + 448u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8970u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003E8970u) [[unlikely]] return; }
L_003E8970:
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 1;
L_003E8974:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E897Cu);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x003E897Cu) [[unlikely]] return; }
L_003E897C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_003E8994; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8990u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x003E8990u) [[unlikely]] return; }
L_003E8990:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_003E8994:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[29].w[0] + 432u), c.r[2].w[0]);  goto L_003E89A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E89A4u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x003E89A4u) [[unlikely]] return; }
L_003E89A4:
    st32((c.r[29].w[0] + 432u), c.r[2].w[0]);
    c.budget -= 1;
L_003E89A8:
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 436u), 0u);
    set32(c.r[6], c.r[29].w[0] + 432u);
    st32((c.r[29].w[0] + 440u), 0u);
    set32(c.r[4], ld32((c.r[28].w[0] - 27036u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E89C4u); st32((c.r[29].w[0] + 444u), 0u);  if (depth < kMaxDepth) unit_00B1(c, 181u, depth + 1u); else { c.pc = 0x003C5C90u; return; } if (c.pc != 0x003E89C4u) [[unlikely]] return; }
L_003E89C4:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003E8C3C; } }
L_003E89D0:
    set32(c.r[20], c.r[16].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[3].w[0] + 1u);  goto L_003E89EC; }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_003E89EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E89F4u); set32(c.r[4], ld32((c.r[28].w[0] - 22676u)));  if (depth < kMaxDepth) unit_00F9(c, 217u, depth + 1u); else { c.pc = 0x004E5F30u; return; } if (c.pc != 0x003E89F4u) [[unlikely]] return; }
L_003E89F4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 132u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[19].w[0] + 132u);  if (t) { goto L_003E8A10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_003E8A14; } }
L_003E8A10:
    set32(c.r[8], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_003E8A14:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 416u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[6].w[0] - 9194u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8A2Cu); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x003E8A2Cu) [[unlikely]] return; }
L_003E8A2C:
    set32(c.r[2], ld32((c.r[19].w[0] + 132u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[19].w[0] + 132u);  if (t) { goto L_003E8A44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_003E8A48; } }
L_003E8A44:
    set32(c.r[8], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_003E8A48:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 400u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], c.r[6].w[0] - 9097u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8A60u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x003E8A60u) [[unlikely]] return; }
L_003E8A60:
    set32(c.r[2], ld32((c.r[29].w[0] + 444u)));
    set32(c.r[3], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[3].w[0] + 1u);  goto L_003E8A7C; }
    set32(c.r[7], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_003E8A7C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 384u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8A90u); set32(c.r[6], c.r[6].w[0] - 9060u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x003E8A90u) [[unlikely]] return; }
L_003E8A90:
    set32(c.r[2], ld32((c.r[29].w[0] + 444u)));
    set32(c.r[3], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[3].w[0] + 1u);  goto L_003E8AAC; }
    set32(c.r[7], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_003E8AAC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 368u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8AC0u); set32(c.r[6], c.r[6].w[0] - 9045u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x003E8AC0u) [[unlikely]] return; }
L_003E8AC0:
    set32(c.r[4], 0u + 68u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8AD0u); c.r[20].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003E8AD0u) [[unlikely]] return; }
L_003E8AD0:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { st32((c.r[29].w[0] + 524u), c.r[19].w[0]);  goto L_003E8B24; }
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8AE8u); set32(c.r[5], c.r[29].w[0] + 416u);  if (depth < kMaxDepth) unit_000A(c, 393u, depth + 1u); else { c.pc = 0x0012B280u; return; } if (c.pc != 0x003E8AE8u) [[unlikely]] return; }
L_003E8AE8:
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    set32(c.r[20], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[7], c.r[29].w[0] + 208u);  if (t) { goto L_003E8B04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 392u)));  if (t) { goto L_003E8B08; } }
L_003E8B04:
    set32(c.r[6], c.r[29].w[0] + 385u);
    c.budget -= 1;
L_003E8B08:
    set32(c.r[8], 0u + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8B1Cu); c.r[9].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 311u, depth + 1u); else { c.pc = 0x00152FA0u; return; } if (c.pc != 0x003E8B1Cu) [[unlikely]] return; }
L_003E8B1C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 524u), c.r[19].w[0]);
    c.budget -= 2;
L_003E8B24:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[4], 0u + 68u);  goto L_003E8B3C; }
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8B38u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x003E8B38u) [[unlikely]] return; }
L_003E8B38:
    set32(c.r[4], 0u + 68u);
    c.budget -= 1;
L_003E8B3C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8B48u); c.r[20].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003E8B48u) [[unlikely]] return; }
L_003E8B48:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { st32((c.r[29].w[0] + 520u), c.r[19].w[0]);  goto L_003E8B9C; }
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8B60u); set32(c.r[5], c.r[29].w[0] + 400u);  if (depth < kMaxDepth) unit_000A(c, 393u, depth + 1u); else { c.pc = 0x0012B280u; return; } if (c.pc != 0x003E8B60u) [[unlikely]] return; }
L_003E8B60:
    set32(c.r[2], ld32((c.r[29].w[0] + 368u)));
    set32(c.r[20], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[7], c.r[29].w[0] + 176u);  if (t) { goto L_003E8B7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 376u)));  if (t) { goto L_003E8B80; } }
L_003E8B7C:
    set32(c.r[6], c.r[29].w[0] + 369u);
    c.budget -= 1;
L_003E8B80:
    set32(c.r[8], 0u + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8B94u); c.r[9].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 311u, depth + 1u); else { c.pc = 0x00152FA0u; return; } if (c.pc != 0x003E8B94u) [[unlikely]] return; }
L_003E8B94:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 520u), c.r[19].w[0]);
    c.budget -= 2;
L_003E8B9C:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 524u)));  goto L_003E8BB4; }
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8BB0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x003E8BB0u) [[unlikely]] return; }
L_003E8BB0:
    set32(c.r[4], ld32((c.r[29].w[0] + 524u)));
    c.budget -= 1;
L_003E8BB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8BBCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 67u, depth + 1u); else { c.pc = 0x00138E10u; return; } if (c.pc != 0x003E8BBCu) [[unlikely]] return; }
L_003E8BBC:
    set32(c.r[4], ld32((c.r[29].w[0] + 520u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8BC8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 67u, depth + 1u); else { c.pc = 0x00138E10u; return; } if (c.pc != 0x003E8BC8u) [[unlikely]] return; }
L_003E8BC8:
    set32(c.r[3], ld32((c.r[18].w[0] + 168u)));
    set32(c.r[4], c.r[18].w[0] + 160u);
    set32(c.r[2], ld32((c.r[18].w[0] + 172u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 524u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8BE8u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x003E8BE8u) [[unlikely]] return; }
L_003E8BE8:
    set32(c.r[3], ld32((c.r[18].w[0] + 168u)));
    set32(c.r[4], c.r[18].w[0] + 160u);
    set32(c.r[2], ld32((c.r[18].w[0] + 172u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 520u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8C08u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x003E8C08u) [[unlikely]] return; }
L_003E8C08:
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8C14u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003E8C14u) [[unlikely]] return; }
L_003E8C14:
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8C20u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003E8C20u) [[unlikely]] return; }
L_003E8C20:
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8C2Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003E8C2Cu) [[unlikely]] return; }
L_003E8C2C:
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8C38u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003E8C38u) [[unlikely]] return; }
L_003E8C38:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_003E8C3C:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 444u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E89D0u | kUnwind; return; } goto L_003E89D0; }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 2u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8C60u); set32(c.r[7], c.r[7].w[0] - 9026u);  if (depth < kMaxDepth) unit_00D1(c, 174u, depth + 1u); else { c.pc = 0x00445230u; return; } if (c.pc != 0x003E8C60u) [[unlikely]] return; }
L_003E8C60:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8C6Cu); set32(c.r[4], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003E8C6Cu) [[unlikely]] return; }
L_003E8C6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8C74u);  if (depth < kMaxDepth) unit_00B4(c, 393u, depth + 1u); else { c.pc = 0x003D3FC0u; return; } if (c.pc != 0x003E8C74u) [[unlikely]] return; }
L_003E8C74:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8C84u); set32(c.r[5], c.r[5].w[0] - 8985u);  if (depth < kMaxDepth) unit_00AF(c, 318u, depth + 1u); else { c.pc = 0x003BE9A0u; return; } if (c.pc != 0x003E8C84u) [[unlikely]] return; }
L_003E8C84:
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8C90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 292u, depth + 1u); else { c.pc = 0x0011EEB0u; return; } if (c.pc != 0x003E8C90u) [[unlikely]] return; }
L_003E8C90:
    set32(c.r[4], c.r[29].w[0] + 496u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8C9Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003E8C9Cu) [[unlikely]] return; }
L_003E8C9C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8CA8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00CC(c, 479u, depth + 1u); else { c.pc = 0x00433520u; return; } if (c.pc != 0x003E8CA8u) [[unlikely]] return; }
L_003E8CA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 528u);  c.pc = t; return; }
L_003E8CE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 9121u);  c.pc = t; return; }
L_003E8CF0:
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
    { set32(c.r[6], c.r[6].w[0] - 8966u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013E9F0u | kUnwind; return; } [[clang::musttail]] return unit_000F(c, 268u, depth); }
L_003E8D10:
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
    { set32(c.r[6], c.r[6].w[0] - 8944u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013E9F0u | kUnwind; return; } [[clang::musttail]] return unit_000F(c, 268u, depth); }
L_003E8D30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 8921u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8D54u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00CC(c, 548u, depth + 1u); else { c.pc = 0x00433C20u; return; } if (c.pc != 0x003E8D54u) [[unlikely]] return; }
L_003E8D54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[18].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + 22944u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8D68u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003E8D68u) [[unlikely]] return; }
L_003E8D68:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    set32(c.r[4], c.r[18].w[0] + 64u);
    set32(c.r[5], c.r[5].w[0] - 29184u);
    set32(c.r[6], c.r[6].w[0] - 31984u);
    set32(c.r[7], 0u + 24u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8D88u); set32(c.r[8], 0u + 3u);  if (depth < kMaxDepth) unit_00A5(c, 152u, depth + 1u); else { c.pc = 0x00397DB0u; return; } if (c.pc != 0x003E8D88u) [[unlikely]] return; }
L_003E8D88:
    set32(c.r[17], c.r[18].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8D94u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003E8D94u) [[unlikely]] return; }
L_003E8D94:
    set32(c.r[16], c.r[18].w[0] + 160u);
    st32((c.r[17].w[0] + 16u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8DA8u); st32((c.r[17].w[0] + 20u), 0u);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x003E8DA8u) [[unlikely]] return; }
L_003E8DA8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_003E8DC0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8DBCu);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x003E8DBCu) [[unlikely]] return; }
L_003E8DBC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_003E8DC0:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_003E8DD4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8DD0u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x003E8DD0u) [[unlikely]] return; }
L_003E8DD0:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003E8DD4:
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E8E00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8E14u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003E8E14u) [[unlikely]] return; }
L_003E8E14:
    st32((c.r[16].w[0] + 16u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 20u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E8E30:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8E54u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x003E8E54u) [[unlikely]] return; }
L_003E8E54:
    set32(c.r[8], ld32((c.r[17].w[0] + 40u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[16], c.r[2].w[0] + 212u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8E74u); set32(c.r[6], c.r[6].w[0] - 8240u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x003E8E74u) [[unlikely]] return; }
L_003E8E74:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 65u);  goto L_003E8E88; }
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_003E8E88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8E90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x003E8E90u) [[unlikely]] return; }
L_003E8E90:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 92u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8EA0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 241u, depth + 1u); else { c.pc = 0x00112E00u; return; } if (c.pc != 0x003E8EA0u) [[unlikely]] return; }
L_003E8EA0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 92u)));  goto L_003E8EC8; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 26u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003E8EC4; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8EC4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 239u, depth + 1u); else { c.pc = 0x00112DA0u; return; } if (c.pc != 0x003E8EC4u) [[unlikely]] return; }
L_003E8EC4:
    set32(c.r[2], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 1;
L_003E8EC8:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[4], c.r[29].w[0] + 64u);  goto L_003E8F3C; }
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 65u);  goto L_003E8EE4; }
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_003E8EE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8EECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x003E8EECu) [[unlikely]] return; }
L_003E8EEC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 88u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8EFCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 241u, depth + 1u); else { c.pc = 0x00112E00u; return; } if (c.pc != 0x003E8EFCu) [[unlikely]] return; }
L_003E8EFC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 88u)));  goto L_003E8F24; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003E8F20; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8F20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 239u, depth + 1u); else { c.pc = 0x00112DA0u; return; } if (c.pc != 0x003E8F20u) [[unlikely]] return; }
L_003E8F20:
    set32(c.r[2], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_003E8F24:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8F34u); st32((c.r[17].w[0] + 36u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003E8F34u) [[unlikely]] return; }
L_003E8F34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003E8F48; } }
L_003E8F3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8F44u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003E8F44u) [[unlikely]] return; }
L_003E8F44:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003E8F48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003E8F60:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[6], c.r[6].w[0] - 8240u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], 0u + 6u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[8], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8F9Cu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x003E8F9Cu) [[unlikely]] return; }
L_003E8F9C:
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8FA8u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x003E8FA8u) [[unlikely]] return; }
L_003E8FA8:
    set32(c.r[4], c.r[2].w[0] + 212u);
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 113u);  goto L_003E8FC0; }
    set32(c.r[5], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 1;
L_003E8FC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8FC8u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x003E8FC8u) [[unlikely]] return; }
L_003E8FC8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = 0ull < c.r[16].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003E8FE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003E9060; } }
L_003E8FE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8FECu); set32(c.r[5], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_0004(c, 241u, depth + 1u); else { c.pc = 0x00112E00u; return; } if (c.pc != 0x003E8FECu) [[unlikely]] return; }
L_003E8FEC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 36u)));  goto L_003E9014; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003E9010; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 140u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9010u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 239u, depth + 1u); else { c.pc = 0x00112DA0u; return; } if (c.pc != 0x003E9010u) [[unlikely]] return; }
L_003E9010:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 1;
L_003E9014:
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[2].d[0] & 255ull;  goto L_003E9060; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9030u); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_0004(c, 241u, depth + 1u); else { c.pc = 0x00112E00u; return; } if (c.pc != 0x003E9030u) [[unlikely]] return; }
L_003E9030:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 136u)));  goto L_003E9058; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003E9054; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9054u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 239u, depth + 1u); else { c.pc = 0x00112DA0u; return; } if (c.pc != 0x003E9054u) [[unlikely]] return; }
L_003E9054:
    set32(c.r[2], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_003E9058:
    c.r[2].d[0] = c.r[2].sd[0] < 1ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 2;
L_003E9060:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 112u)));  goto L_003E9074; }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 112u);  goto L_003E911C; }
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 1;
L_003E9074:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 36u)));  if (t) { goto L_003E9088; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 120u)));  if (t) { goto L_003E908C; } }
L_003E9088:
    set32(c.r[17], c.r[29].w[0] + 113u);
    c.budget -= 1;
L_003E908C:
    set32(c.r[18], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E909Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x003E909Cu) [[unlikely]] return; }
L_003E909C:
    st16((c.r[29].w[0] + 104u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[29].w[0] + 84u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[29].w[0] + 100u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], 0u + 4u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[3].d[0]; st16((c.r[29].w[0] + 106u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003E90D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E90C8u); set32(c.r[4], ld32((c.r[18].w[0] + 20u)));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x003E90C8u) [[unlikely]] return; }
L_003E90C8:
    set32(c.r[2], c.r[18].w[0] + 4u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_003E90D0:
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[3].w[0]), c.r[16].w[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E90FCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E90FCu) [[unlikely]] return; }
L_003E90FC:
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E910Cu); set32(c.r[6], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_00CF(c, 349u, depth + 1u); else { c.pc = 0x0043EBC0u; return; } if (c.pc != 0x003E910Cu) [[unlikely]] return; }
L_003E910C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9118u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x003E9118u) [[unlikely]] return; }
L_003E9118:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_003E911C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9124u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003E9124u) [[unlikely]] return; }
L_003E9124:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003E9140:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 23024u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E917Cu); set32(c.r[4], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003E917Cu) [[unlikely]] return; }
L_003E917C:
    set32(c.r[17], c.r[19].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9188u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x003E9188u) [[unlikely]] return; }
L_003E9188:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_003E91A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E919Cu);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x003E919Cu) [[unlikely]] return; }
L_003E919C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_003E91A0:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[17].w[0]), c.r[2].w[0]);  goto L_003E91B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E91B0u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x003E91B0u) [[unlikely]] return; }
L_003E91B0:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003E91B4:
    set32(c.r[4], c.r[19].w[0] + 4u);
    st32((c.r[17].w[0] + 4u), 0u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[17].w[0] + 8u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E91CCu); st32((c.r[17].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003E91CCu) [[unlikely]] return; }
L_003E91CC:
    set32(c.r[2], 0u - 1u);
    st32((c.r[19].w[0] + 36u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 40u), c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E91E4u); set32(c.r[4], c.r[19].w[0] + 20u);  if (depth < kMaxDepth) unit_00BA(c, 323u, depth + 1u); else { c.pc = 0x003EA750u; return; } if (c.pc != 0x003E91E4u) [[unlikely]] return; }
L_003E91E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003E92A4; } }
L_003E91EC:
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[20], c.r[29].w[0] + 96u);
    set32(c.r[4], c.r[2].w[0] << 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 23040u);
    set32(c.r[4], c.r[29].w[0] + 100u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9214u); st32((c.r[29].w[0] + 96u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003E9214u) [[unlikely]] return; }
L_003E9214:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E921Cu); set32(c.r[4], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003E921Cu) [[unlikely]] return; }
L_003E921C:
    set32(c.r[4], c.r[20].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9228u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003E9228u) [[unlikely]] return; }
L_003E9228:
    set32(c.r[4], c.r[20].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9234u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003E9234u) [[unlikely]] return; }
L_003E9234:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 42u));
    set32(c.r[2], c.r[17].w[0] + 1u);
    set32(c.r[4], c.r[19].w[0] + 20u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    st8((c.r[29].w[0] + 116u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 43u));
    st8((c.r[29].w[0] + 117u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    st32((c.r[29].w[0] + 120u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E927Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00BA(c, 288u, depth + 1u); else { c.pc = 0x003EA140u; return; } if (c.pc != 0x003E927Cu) [[unlikely]] return; }
L_003E927C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 124u);
    set32(c.r[2], c.r[2].w[0] + 23040u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9294u); st32((c.r[29].w[0] + 96u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003E9294u) [[unlikely]] return; }
L_003E9294:
    set32(c.r[4], c.r[29].w[0] + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E92A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003E92A0u) [[unlikely]] return; }
L_003E92A0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_003E92A4:
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E91ECu | kUnwind; return; } goto L_003E91EC; }
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003E92E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E9344; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 28u);
    set32(c.r[2], c.r[2].w[0] + 23040u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003E9318; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9318u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003E9318u) [[unlikely]] return; }
L_003E9318:
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_003E9330; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E932Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003E932Cu) [[unlikely]] return; }
L_003E932C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_003E9330:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003E9348; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9344u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003E9344u) [[unlikely]] return; }
L_003E9344:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003E9348:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E9360:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003E93D0; } }
L_003E9384:
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[6], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E93A8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00BA(c, 134u, depth + 1u); else { c.pc = 0x003E8E30u; return; } if (c.pc != 0x003E93A8u) [[unlikely]] return; }
L_003E93A8:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_003E93D0; }
    st8((c.r[18].w[0] + 36u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_003E93CC; } }
    st32((c.r[4].w[0] + 36u), 0u);
    c.budget -= 1;
L_003E93CC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_003E93D0:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9384u | kUnwind; return; } goto L_003E9384; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E9400:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003E944C; } }
L_003E9424:
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[6], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9448u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00BA(c, 145u, depth + 1u); else { c.pc = 0x003E8F60u; return; } if (c.pc != 0x003E9448u) [[unlikely]] return; }
L_003E9448:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_003E944C:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9424u | kUnwind; return; } goto L_003E9424; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E9480:
    st8((c.r[4].w[0] + 36u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_003E9498; } }
    st32((c.r[4].w[0] + 36u), 0u);
    c.budget -= 1;
L_003E9498:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003E94A0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 23008u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E94D8u); set32(c.r[4], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003E94D8u) [[unlikely]] return; }
L_003E94D8:
    set32(c.r[19], c.r[18].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E94E4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x003E94E4u) [[unlikely]] return; }
L_003E94E4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_003E94FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E94F8u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x003E94F8u) [[unlikely]] return; }
L_003E94F8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_003E94FC:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[19].w[0]), c.r[2].w[0]);  goto L_003E9510; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E950Cu);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x003E950Cu) [[unlikely]] return; }
L_003E950C:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003E9510:
    set32(c.r[4], c.r[18].w[0] + 4u);
    st32((c.r[19].w[0] + 4u), 0u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[19].w[0] + 8u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9528u); st32((c.r[19].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003E9528u) [[unlikely]] return; }
L_003E9528:
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[18].w[0] + 40u), c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9540u); set32(c.r[4], c.r[18].w[0] + 20u);  if (depth < kMaxDepth) unit_00BA(c, 383u, depth + 1u); else { c.pc = 0x003EB060u; return; } if (c.pc != 0x003E9540u) [[unlikely]] return; }
L_003E9540:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003E95BC; } }
L_003E9548:
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[6], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9564u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00BA(c, 159u, depth + 1u); else { c.pc = 0x003E9140u; return; } if (c.pc != 0x003E9564u) [[unlikely]] return; }
L_003E9564:
    set32(c.r[5], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[4], c.r[18].w[0] + 20u);
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 80u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9594u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00BA(c, 330u, depth + 1u); else { c.pc = 0x003EA8D0u; return; } if (c.pc != 0x003E9594u) [[unlikely]] return; }
L_003E9594:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 100u);
    set32(c.r[2], c.r[2].w[0] + 23024u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E95ACu); st32((c.r[29].w[0] + 80u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BA(c, 444u, depth + 1u); else { c.pc = 0x003EBA40u; return; } if (c.pc != 0x003E95ACu) [[unlikely]] return; }
L_003E95AC:
    set32(c.r[4], c.r[29].w[0] + 84u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E95B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003E95B8u) [[unlikely]] return; }
L_003E95B8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_003E95BC:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9548u | kUnwind; return; } goto L_003E9548; }
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003E95F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E9664; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 20u);
    set32(c.r[2], c.r[2].w[0] + 23024u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003E9638; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 4u);  goto L_003E963C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E9638; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9638u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 444u, depth + 1u); else { c.pc = 0x003EBA40u; return; } if (c.pc != 0x003E9638u) [[unlikely]] return; }
L_003E9638:
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_003E963C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_003E9650; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E964Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003E964Cu) [[unlikely]] return; }
L_003E964C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_003E9650:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003E9668; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9664u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003E9664u) [[unlikely]] return; }
L_003E9664:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003E9668:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E9680:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[5].w[0] << 2);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[1].d[0] = c.r[8].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_003E971C; } }
    set32(c.r[5], c.r[16].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 32u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 36u), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 28u)));
    c.budget -= 12;
    if (c.r[16].d[0] == c.r[2].d[0]) { c.r[5].d[0] = 0ull + 0ull;  goto L_003E9714; }
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 32u)));
    set32(c.r[5], c.r[16].w[0] - 1u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 36u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 11;
L_003E9714:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E971Cu);  if (depth < kMaxDepth) unit_00BA(c, 216u, depth + 1u); else { c.pc = 0x003E9890u; return; } if (c.pc != 0x003E971Cu) [[unlikely]] return; }
L_003E971C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E9730:
    set32(c.r[8], c.r[5].w[0] - 1u);
    set32(c.r[3], c.r[6].w[0] - 1u);
    set32(c.r[5], c.r[8].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 19;
    { const bool t = c.r[7].d[0] == c.r[2].d[0];  if (t) { goto L_003E9780; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_003E9780:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[7].d[0] + 0ull;  c.pc = t; return; }
L_003E9790:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E97B4u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x003E97B4u) [[unlikely]] return; }
L_003E97B4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[2].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E97C4u); set32(c.r[5], c.r[5].w[0] - 8222u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x003E97C4u) [[unlikely]] return; }
L_003E97C4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E97D0u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x003E97D0u) [[unlikely]] return; }
L_003E97D0:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E97E0u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 238u, depth + 1u); else { c.pc = 0x0013E6A0u; return; } if (c.pc != 0x003E97E0u) [[unlikely]] return; }
L_003E97E0:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E97ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003E97ECu) [[unlikely]] return; }
L_003E97EC:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E97F8u); set32(c.r[5], c.r[18].w[0] + 24u);  if (depth < kMaxDepth) unit_000A(c, 6u, depth + 1u); else { c.pc = 0x001280C0u; return; } if (c.pc != 0x003E97F8u) [[unlikely]] return; }
L_003E97F8:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_003E9854; }
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 8196u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E981Cu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003E981Cu) [[unlikely]] return; }
L_003E981C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9828u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003E9828u) [[unlikely]] return; }
L_003E9828:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003E9874; } }
L_003E9830:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9850u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00BA(c, 178u, depth + 1u); else { c.pc = 0x003E9360u; return; } if (c.pc != 0x003E9850u) [[unlikely]] return; }
L_003E9850:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_003E9854:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9830u | kUnwind; return; } goto L_003E9830; }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9870u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003E9870u) [[unlikely]] return; }
L_003E9870:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003E9874:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003E9890:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[28].w[0] - 24928u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003E98E0; } }
L_003E98BC:
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E98DCu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00BA(c, 181u, depth + 1u); else { c.pc = 0x003E9400u; return; } if (c.pc != 0x003E98DCu) [[unlikely]] return; }
L_003E98DC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_003E98E0:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E98BCu | kUnwind; return; } goto L_003E98BC; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E98FCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x003E98FCu) [[unlikely]] return; }
L_003E98FC:
    set32(c.r[17], c.r[2].w[0] + 28u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 8222u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9910u); set32(c.r[4], c.r[17].w[0] + 36u);  if (depth < kMaxDepth) unit_0008(c, 148u, depth + 1u); else { c.pc = 0x00121220u; return; } if (c.pc != 0x003E9910u) [[unlikely]] return; }
L_003E9910:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003E9950; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[19].w[0] + 24u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[5].w[0] - 8222u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9930u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_00BA(c, 232u, depth + 1u); else { c.pc = 0x003E9A80u; return; } if (c.pc != 0x003E9930u) [[unlikely]] return; }
L_003E9930:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E993Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x003E993Cu) [[unlikely]] return; }
L_003E993C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9948u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x003E9948u) [[unlikely]] return; }
L_003E9948:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E995C; } }
L_003E9950:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E995Cu); set32(c.r[6], c.r[19].w[0] + 24u);  if (depth < kMaxDepth) unit_00BA(c, 226u, depth + 1u); else { c.pc = 0x003E9990u; return; } if (c.pc != 0x003E995Cu) [[unlikely]] return; }
L_003E995C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 8040u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9974u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 434u, depth + 1u); else { c.pc = 0x0043F8D0u; return; } if (c.pc != 0x003E9974u) [[unlikely]] return; }
L_003E9974:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003E9990:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[5], c.r[5].w[0] << 5);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], 0u + 256u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[17], c.r[3].w[0] + c.r[5].w[0]);
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 15;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[6].w[0] + 1u);  goto L_003E99D0; }
    set32(c.r[18], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 1;
L_003E99D0:
    set32(c.r[2], 0u + 512u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E99E0u); st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x003E99E0u) [[unlikely]] return; }
L_003E99E0:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[19], 0u + 16u);  if (t) { goto L_003E9A14; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[19], ld32((c.r[17].w[0] + 4u)));  goto L_003E9A14; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9A0Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x003E9A0Cu) [[unlikely]] return; }
L_003E9A0C:
    set32(c.r[2], c.r[17].w[0] + 4u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_003E9A14:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_003E9A58; }
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));  goto L_003E9A40; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9A3Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x003E9A3Cu) [[unlikely]] return; }
L_003E9A3C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_003E9A40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9A48u); set32(c.r[4], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x003E9A48u) [[unlikely]] return; }
L_003E9A48:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 1u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 4;
L_003E9A58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9A60u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x003E9A60u) [[unlikely]] return; }
L_003E9A60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003E9A80:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9AB0u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x003E9AB0u) [[unlikely]] return; }
L_003E9AB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[20].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    st16((c.r[20].w[0] + 24u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 256u);
    st32((c.r[20].w[0] + 20u), c.r[4].w[0]);
    st16((c.r[20].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 12;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[16].w[0] + 1u);  goto L_003E9AE4; }
    set32(c.r[17], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_003E9AE4:
    set32(c.r[2], 0u + 512u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9AF4u); st16((c.r[20].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x003E9AF4u) [[unlikely]] return; }
L_003E9AF4:
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[20].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[18], 0u + 16u);  if (t) { goto L_003E9B28; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[18], ld32((c.r[20].w[0] + 4u)));  goto L_003E9B28; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9B20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x003E9B20u) [[unlikely]] return; }
L_003E9B20:
    set32(c.r[2], c.r[20].w[0] + 4u);
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_003E9B28:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 20u)));  goto L_003E9B6C; }
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[2], c.r[20].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 24u)));  goto L_003E9B54; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9B50u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x003E9B50u) [[unlikely]] return; }
L_003E9B50:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 24u)));
    c.budget -= 1;
L_003E9B54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9B5Cu); set32(c.r[4], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x003E9B5Cu) [[unlikely]] return; }
L_003E9B5C:
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 1u);
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 4;
L_003E9B6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9B74u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x003E9B74u) [[unlikely]] return; }
L_003E9B74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 25680u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    st32((c.r[20].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9B98u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E9B98u) [[unlikely]] return; }
L_003E9B98:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003E9BC0:
    set32(c.r[8], c.r[5].w[0] - 1u);
    set32(c.r[3], c.r[7].w[0] - 1u);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], c.r[8].w[0] << 2);
    set32(c.r[4], c.r[6].w[0] - 1u);
    set32(c.r[6], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_003E9C20:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9C44u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000A(c, 391u, depth + 1u); else { c.pc = 0x0012B240u; return; } if (c.pc != 0x003E9C44u) [[unlikely]] return; }
L_003E9C44:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9C50u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x00102E20u; return; } if (c.pc != 0x003E9C50u) [[unlikely]] return; }
L_003E9C50:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 96u));  goto L_003E9C68; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 100u)));  if (t) { goto L_003E9C70; } }
L_003E9C68:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_003E9C70:
    c.r[16].d[0] = c.r[2].d[0] ^ 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9C84u); c.r[16].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003E9C84u) [[unlikely]] return; }
L_003E9C84:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003E9CC4; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9C98u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x00102E20u; return; } if (c.pc != 0x003E9C98u) [[unlikely]] return; }
L_003E9C98:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9CA8u); set32(c.r[5], c.r[5].w[0] - 7950u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x003E9CA8u) [[unlikely]] return; }
L_003E9CA8:
    c.r[16].d[0] = c.r[2].d[0] ^ 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9CBCu); c.r[16].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003E9CBCu) [[unlikely]] return; }
L_003E9CBC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003E9CD4; } }
L_003E9CC4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9CD4u); set32(c.r[5], c.r[5].w[0] - 7946u);  if (depth < kMaxDepth) unit_000A(c, 328u, depth + 1u); else { c.pc = 0x0012AC80u; return; } if (c.pc != 0x003E9CD4u) [[unlikely]] return; }
L_003E9CD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] + 22992u);
    set32(c.r[4], 0u + 6u);
    st32((c.r[29].w[0] + 200u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[6], c.r[6].w[0] - 8784u);
    set32(c.r[7], c.r[29].w[0] + 200u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9D00u); st32((c.r[29].w[0] + 204u), 0u);  if (depth < kMaxDepth) unit_0000(c, 231u, depth + 1u); else { c.pc = 0x00102E60u; return; } if (c.pc != 0x003E9D00u) [[unlikely]] return; }
L_003E9D00:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 204u)));  goto L_003E9DB4; }
    set32(c.r[17], ld32((c.r[29].w[0] + 204u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 22992u);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0] + 200u), c.r[2].w[0]);  if (t) { goto L_003E9D94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003E9D74; } }
L_003E9D24:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_003E9D58; } }
L_003E9D3C:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9D54u); set32(c.r[4], ld32((c.r[2].w[0] + 36u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003E9D54u) [[unlikely]] return; }
L_003E9D54:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_003E9D58:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9D3Cu | kUnwind; return; } goto L_003E9D3C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9D70u); set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003E9D70u) [[unlikely]] return; }
L_003E9D70:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_003E9D74:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9D24u | kUnwind; return; } goto L_003E9D24; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9D8Cu); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003E9D8Cu) [[unlikely]] return; }
L_003E9D8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9D94u); set32(c.r[4], ld32((c.r[29].w[0] + 204u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003E9D94u) [[unlikely]] return; }
L_003E9D94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[2], c.r[2].w[0] - 27888u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9DACu); st32((c.r[29].w[0] + 200u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x003E9DACu) [[unlikely]] return; }
L_003E9DAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003E9F58; } }
L_003E9DB4:
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9DC0u); set32(c.r[5], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003E9DC0u) [[unlikely]] return; }
L_003E9DC0:
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9DD0u); set32(c.r[4], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_00BA(c, 438u, depth + 1u); else { c.pc = 0x003EB900u; return; } if (c.pc != 0x003E9DD0u) [[unlikely]] return; }
L_003E9DD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003E9E4C; } }
L_003E9DD8:
    set32(c.r[6], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9DF4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00BA(c, 185u, depth + 1u); else { c.pc = 0x003E94A0u; return; } if (c.pc != 0x003E9DF4u) [[unlikely]] return; }
L_003E9DF4:
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 112u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9E24u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00BA(c, 390u, depth + 1u); else { c.pc = 0x003EB1C0u; return; } if (c.pc != 0x003E9E24u) [[unlikely]] return; }
L_003E9E24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 132u);
    set32(c.r[2], c.r[2].w[0] + 23008u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9E3Cu); st32((c.r[29].w[0] + 112u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BA(c, 448u, depth + 1u); else { c.pc = 0x003EBAB0u; return; } if (c.pc != 0x003E9E3Cu) [[unlikely]] return; }
L_003E9E3C:
    set32(c.r[4], c.r[29].w[0] + 116u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9E48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003E9E48u) [[unlikely]] return; }
L_003E9E48:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_003E9E4C:
    set32(c.r[3], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9DD8u | kUnwind; return; } goto L_003E9DD8; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9E6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 204u, depth + 1u); else { c.pc = 0x003E9790u; return; } if (c.pc != 0x003E9E6Cu) [[unlikely]] return; }
L_003E9E6C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], ld32((c.r[29].w[0] + 204u)));  goto L_003E9EB4; }
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9E80u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x003E9E80u) [[unlikely]] return; }
L_003E9E80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9E88u); set32(c.r[4], c.r[2].w[0] + 212u);  if (depth < kMaxDepth) unit_000C(c, 347u, depth + 1u); else { c.pc = 0x00133590u; return; } if (c.pc != 0x003E9E88u) [[unlikely]] return; }
L_003E9E88:
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    st8((c.r[2].w[0] + 36u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    if (c.r[2].sd[0] >= 0) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003E9EA8; }
    st32((c.r[3].w[0] + 36u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_003E9EA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9EB0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 216u, depth + 1u); else { c.pc = 0x003E9890u; return; } if (c.pc != 0x003E9EB0u) [[unlikely]] return; }
L_003E9EB0:
    set32(c.r[17], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 1;
L_003E9EB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 22992u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0] + 200u), c.r[2].w[0]);  if (t) { goto L_003E9F3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003E9F1C; } }
L_003E9ECC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_003E9F00; } }
L_003E9EE4:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9EFCu); set32(c.r[4], ld32((c.r[2].w[0] + 36u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003E9EFCu) [[unlikely]] return; }
L_003E9EFC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_003E9F00:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9EE4u | kUnwind; return; } goto L_003E9EE4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9F18u); set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003E9F18u) [[unlikely]] return; }
L_003E9F18:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_003E9F1C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E9ECCu | kUnwind; return; } goto L_003E9ECC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9F34u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003E9F34u) [[unlikely]] return; }
L_003E9F34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9F3Cu); set32(c.r[4], ld32((c.r[29].w[0] + 204u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003E9F3Cu) [[unlikely]] return; }
L_003E9F3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[2], c.r[2].w[0] - 27888u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9F54u); st32((c.r[29].w[0] + 200u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x003E9F54u) [[unlikely]] return; }
L_003E9F54:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003E9F58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_003E9F80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E9FF4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 20u);
    set32(c.r[2], c.r[2].w[0] + 23008u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003E9FC8; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 4u);  goto L_003E9FCC; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003E9FC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9FC8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 448u, depth + 1u); else { c.pc = 0x003EBAB0u; return; } if (c.pc != 0x003E9FC8u) [[unlikely]] return; }
L_003E9FC8:
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_003E9FCC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_003E9FE0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9FDCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003E9FDCu) [[unlikely]] return; }
L_003E9FDC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_003E9FE0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003E9FF8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E9FF4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003E9FF4u) [[unlikely]] return; }
L_003E9FF4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003E9FF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003EA010:
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
    { const bool t = c.r[21].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_003EA0F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 22992u);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003EA0CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003EA0AC; } }
L_003EA05C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_003EA090; } }
L_003EA074:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA08Cu); set32(c.r[4], ld32((c.r[2].w[0] + 36u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003EA08Cu) [[unlikely]] return; }
L_003EA08C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_003EA090:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EA074u | kUnwind; return; } goto L_003EA074; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA0A8u); set32(c.r[4], ld32((c.r[16].w[0] + 36u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003EA0A8u) [[unlikely]] return; }
L_003EA0A8:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_003EA0AC:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EA05Cu | kUnwind; return; } goto L_003EA05C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA0C4u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003EA0C4u) [[unlikely]] return; }
L_003EA0C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA0CCu); set32(c.r[4], ld32((c.r[21].w[0] + 4u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003EA0CCu) [[unlikely]] return; }
L_003EA0CC:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { c.r[2].d[0] = c.r[20].d[0] << 48;  goto L_003EA0E4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27888u);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[20].d[0] << 48;
    c.budget -= 4;
L_003EA0E4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[21].d[0] + 0ull;  goto L_003EA0FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA0F8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003EA0F8u) [[unlikely]] return; }
L_003EA0F8:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_003EA0FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003EA120:
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[3], 0u + 268u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_003EA134; } }
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 1;
L_003EA134:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003EA140:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 16;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003EA60C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 8u)));  goto L_003EA1BC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA1B0u); set32(c.r[5], c.r[5].w[0] - 7862u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x003EA1B0u) [[unlikely]] return; }
L_003EA1B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA1B8u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x003EA1B8u) [[unlikely]] return; }
L_003EA1B8:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 1;
L_003EA1BC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + c.r[17].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0])));  goto L_003EA3C8; }
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[2], 0u + 48u);
    set32(c.r[19], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[19].w[0] - c.r[22].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[23].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[23].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] << 1);  goto L_003EA2F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003EA268; } }
L_003EA208:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 8u)));  goto L_003EA258; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[21].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + 23040u);
    set32(c.r[5], c.r[16].w[0] + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA228u); st32((c.r[21].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003EA228u) [[unlikely]] return; }
L_003EA228:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 20u));
    set32(c.r[4], c.r[21].w[0] + 28u);
    set32(c.r[5], c.r[16].w[0] + 28u);
    st8((c.r[21].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 21u));
    st8((c.r[21].w[0] + 21u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA24Cu); st32((c.r[21].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003EA24Cu) [[unlikely]] return; }
L_003EA24C:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    st32((c.r[21].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
L_003EA258:
    set32(c.r[21], c.r[21].w[0] + 48u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
L_003EA268:
    c.r[1].d[0] = c.r[23].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EA208u | kUnwind; return; } goto L_003EA208; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_003EA2DC; } }
L_003EA27C:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 8u)));  goto L_003EA2CC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[21].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + 23040u);
    set32(c.r[5], c.r[20].w[0] + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA29Cu); st32((c.r[21].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003EA29Cu) [[unlikely]] return; }
L_003EA29C:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 20u));
    set32(c.r[4], c.r[21].w[0] + 28u);
    set32(c.r[5], c.r[20].w[0] + 28u);
    st8((c.r[21].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[20].w[0] + 21u));
    st8((c.r[21].w[0] + 21u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA2C0u); st32((c.r[21].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003EA2C0u) [[unlikely]] return; }
L_003EA2C0:
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    st32((c.r[21].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
L_003EA2CC:
    set32(c.r[20], c.r[20].w[0] + 48u);
    set32(c.r[21], c.r[21].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
L_003EA2DC:
    c.r[2].d[0] = c.r[20].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EA27Cu | kUnwind; return; } goto L_003EA27C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_003EA3B4; } }
L_003EA2F0:
    c.r[20].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[30], c.r[2].w[0] << 4);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[19].w[0] - c.r[30].w[0]);  if (t) { goto L_003EA364; } }
L_003EA304:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 8u)));  goto L_003EA354; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[20].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + 23040u);
    set32(c.r[5], c.r[21].w[0] + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA324u); st32((c.r[20].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003EA324u) [[unlikely]] return; }
L_003EA324:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 20u));
    set32(c.r[4], c.r[20].w[0] + 28u);
    set32(c.r[5], c.r[21].w[0] + 28u);
    st8((c.r[20].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 21u));
    st8((c.r[20].w[0] + 21u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[21].w[0] + 24u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA348u); st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003EA348u) [[unlikely]] return; }
L_003EA348:
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    st32((c.r[20].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
L_003EA354:
    set32(c.r[21], c.r[21].w[0] + 48u);
    set32(c.r[20], c.r[20].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
L_003EA364:
    c.r[2].d[0] = c.r[21].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EA304u | kUnwind; return; } goto L_003EA304; } }
    set32(c.r[3], c.r[23].w[0] - c.r[17].w[0]);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] - c.r[3].w[0]);
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[1].d[0] != 0ull) { set32(c.r[5], c.r[22].w[0] + c.r[3].w[0]);  goto L_003EA3A4; }
    c.r[1].d[0] = c.r[16].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003EA3A0; } }
    set32(c.r[16], c.r[16].w[0] + c.r[30].w[0]);
    c.budget -= 1;
L_003EA3A0:
    set32(c.r[5], c.r[22].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_003EA3A4:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA3B0u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 319u, depth + 1u); else { c.pc = 0x003EA6C0u; return; } if (c.pc != 0x003EA3B0u) [[unlikely]] return; }
L_003EA3B0:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_003EA3B4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA3C0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 315u, depth + 1u); else { c.pc = 0x003EA640u; return; } if (c.pc != 0x003EA3C0u) [[unlikely]] return; }
L_003EA3C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_003EA610; } }
L_003EA3C8:
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 164u), 0u);
    st32((c.r[29].w[0] + 168u), 0u);
    st32((c.r[29].w[0] + 172u), 0u);
    set32(c.r[19], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 7;
    if (c.r[19].d[0] == 0ull) { set32(c.r[19], 0u + 1u);  goto L_003EA3E4; }
L_003EA3E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003EA400; } }
L_003EA3EC:
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[19].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[19].d[0] = c.r[2].d[0] + 0ull;  goto L_003EA400; }
    set32(c.r[19], c.r[19].w[0] << 1);
    c.budget -= 1;
L_003EA400:
    c.r[1].d[0] = c.r[19].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EA3ECu | kUnwind; return; } goto L_003EA3EC; }
    set32(c.r[2], c.r[19].w[0] << 1);
    set32(c.r[5], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA420u); set32(c.r[4], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x003EA420u) [[unlikely]] return; }
L_003EA420:
    st32((c.r[29].w[0] + 164u), c.r[19].w[0]);
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[19], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[19].w[0] + c.r[2].w[0]);  if (t) { goto L_003EA4A8; } }
L_003EA448:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 168u)));  goto L_003EA498; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[20].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + 23040u);
    set32(c.r[5], c.r[19].w[0] + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA468u); st32((c.r[20].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003EA468u) [[unlikely]] return; }
L_003EA468:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 20u));
    set32(c.r[4], c.r[20].w[0] + 28u);
    set32(c.r[5], c.r[19].w[0] + 28u);
    st8((c.r[20].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 21u));
    st8((c.r[20].w[0] + 21u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA48Cu); st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003EA48Cu) [[unlikely]] return; }
L_003EA48C:
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    st32((c.r[20].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 3;
L_003EA498:
    set32(c.r[19], c.r[19].w[0] + 48u);
    set32(c.r[20], c.r[20].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 4;
L_003EA4A8:
    c.r[2].d[0] = c.r[19].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EA448u | kUnwind; return; } goto L_003EA448; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EA51C; } }
L_003EA4BC:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 168u)));  goto L_003EA50C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[20].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + 23040u);
    set32(c.r[5], c.r[16].w[0] + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA4DCu); st32((c.r[20].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003EA4DCu) [[unlikely]] return; }
L_003EA4DC:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 20u));
    set32(c.r[4], c.r[20].w[0] + 28u);
    set32(c.r[5], c.r[16].w[0] + 28u);
    st8((c.r[20].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 21u));
    st8((c.r[20].w[0] + 21u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA500u); st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003EA500u) [[unlikely]] return; }
L_003EA500:
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    st32((c.r[20].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 3;
L_003EA50C:
    set32(c.r[20], c.r[20].w[0] + 48u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 4;
L_003EA51C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EA4BCu | kUnwind; return; } goto L_003EA4BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] < c.r[21].d[0] ? 1ull : 0ull;  if (t) { goto L_003EA590; } }
L_003EA52C:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 168u)));  goto L_003EA57C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[20].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + 23040u);
    set32(c.r[5], c.r[19].w[0] + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA54Cu); st32((c.r[20].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003EA54Cu) [[unlikely]] return; }
L_003EA54C:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 20u));
    set32(c.r[4], c.r[20].w[0] + 28u);
    set32(c.r[5], c.r[19].w[0] + 28u);
    st8((c.r[20].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[19].w[0] + 21u));
    st8((c.r[20].w[0] + 21u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA570u); st32((c.r[20].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003EA570u) [[unlikely]] return; }
L_003EA570:
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    st32((c.r[20].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 3;
L_003EA57C:
    set32(c.r[19], c.r[19].w[0] + 48u);
    set32(c.r[20], c.r[20].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[19].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_003EA590:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EA52Cu | kUnwind; return; } goto L_003EA52C; } }
    set32(c.r[2], c.r[29].w[0] + 160u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[18].d[0]) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_003EA5E8; }
    set32(c.r[3], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 17;
L_003EA5E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA5F0u);  if (depth < kMaxDepth) unit_00BB(c, 19u, depth + 1u); else { c.pc = 0x003EC310u; return; } if (c.pc != 0x003EA5F0u) [[unlikely]] return; }
L_003EA5F0:
    set32(c.r[4], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003EA60C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003EA60C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA60Cu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003EA60Cu) [[unlikely]] return; }
L_003EA60C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_003EA610:
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
L_003EA640:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003EA6A0; } }
L_003EA664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA66Cu); set32(c.r[5], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0011(c, 396u, depth + 1u); else { c.pc = 0x00147760u; return; } if (c.pc != 0x003EA66Cu) [[unlikely]] return; }
L_003EA66C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 20u));
    set32(c.r[4], c.r[18].w[0] + 28u);
    set32(c.r[5], c.r[16].w[0] + 28u);
    st8((c.r[18].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 21u));
    st8((c.r[18].w[0] + 21u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA690u); st32((c.r[18].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0011(c, 396u, depth + 1u); else { c.pc = 0x00147760u; return; } if (c.pc != 0x003EA690u) [[unlikely]] return; }
L_003EA690:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[17], c.r[17].w[0] - 1u);
    st32((c.r[18].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[18], c.r[18].w[0] + 48u);
    c.budget -= 4;
L_003EA6A0:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], c.r[18].w[0] + 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EA664u | kUnwind; return; } goto L_003EA664; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003EA6C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003EA720; } }
L_003EA6E4:
    set32(c.r[16], c.r[16].w[0] - 48u);
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA6F4u); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0011(c, 396u, depth + 1u); else { c.pc = 0x00147760u; return; } if (c.pc != 0x003EA6F4u) [[unlikely]] return; }
L_003EA6F4:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 20u));
    set32(c.r[4], c.r[16].w[0] + 28u);
    set32(c.r[5], c.r[17].w[0] + 28u);
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 21u));
    st8((c.r[16].w[0] + 21u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA718u); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0011(c, 396u, depth + 1u); else { c.pc = 0x00147760u; return; } if (c.pc != 0x003EA718u) [[unlikely]] return; }
L_003EA718:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 2;
L_003EA720:
    c.r[1].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EA6E4u | kUnwind; return; } goto L_003EA6E4; }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003EA750:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[1].d[0] = c.r[3].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003EA8A8; } }
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[2].w[0] << 4);
    st32((c.r[29].w[0] + 80u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 84u), 0u);
    st32((c.r[29].w[0] + 88u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA7A0u); st32((c.r[29].w[0] + 92u), 0u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x003EA7A0u) [[unlikely]] return; }
L_003EA7A0:
    st32((c.r[29].w[0] + 84u), c.r[16].w[0]);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[17], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[17].w[0] + c.r[2].w[0]);  if (t) { goto L_003EA828; } }
L_003EA7C8:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 88u)));  goto L_003EA818; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[18].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + 23040u);
    set32(c.r[5], c.r[17].w[0] + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA7E8u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003EA7E8u) [[unlikely]] return; }
L_003EA7E8:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 20u));
    set32(c.r[4], c.r[18].w[0] + 28u);
    set32(c.r[5], c.r[17].w[0] + 28u);
    st8((c.r[18].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 21u));
    st8((c.r[18].w[0] + 21u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA80Cu); st32((c.r[18].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003EA80Cu) [[unlikely]] return; }
L_003EA80C:
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    st32((c.r[18].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 3;
L_003EA818:
    set32(c.r[17], c.r[17].w[0] + 48u);
    set32(c.r[18], c.r[18].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 4;
L_003EA828:
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EA7C8u | kUnwind; return; } goto L_003EA7C8; } }
    set32(c.r[2], c.r[29].w[0] + 80u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[19].d[0]) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_003EA884; }
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 17;
L_003EA884:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA88Cu);  if (depth < kMaxDepth) unit_00BB(c, 19u, depth + 1u); else { c.pc = 0x003EC310u; return; } if (c.pc != 0x003EA88Cu) [[unlikely]] return; }
L_003EA88C:
    set32(c.r[4], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003EA8AC; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003EA8A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA8A8u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003EA8A8u) [[unlikely]] return; }
L_003EA8A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003EA8AC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003EA8D0:
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
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_003EACA4; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] - c.r[19].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[21].w[0] + 8u)));  goto L_003EA94C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA940u); set32(c.r[5], c.r[5].w[0] - 7862u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x003EA940u) [[unlikely]] return; }
L_003EA940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA948u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x003EA948u) [[unlikely]] return; }
L_003EA948:
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_003EA94C:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], c.r[5].w[0] + c.r[19].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0])));  goto L_003EAAE0; }
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[4], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[2], 0u + 44u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[16].w[0] - c.r[20].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[23].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[23].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 14;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] << 2);  goto L_003EAA28; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003EA9D0; } }
L_003EA9A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA9A8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 252u, depth + 1u); else { c.pc = 0x0011E550u; return; } if (c.pc != 0x003EA9A8u) [[unlikely]] return; }
L_003EA9A8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 8u)));  goto L_003EA9C0; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA9BCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 367u, depth + 1u); else { c.pc = 0x003EAED0u; return; } if (c.pc != 0x003EA9BCu) [[unlikely]] return; }
L_003EA9BC:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_003EA9C0:
    set32(c.r[17], c.r[17].w[0] + 44u);
    set32(c.r[19], c.r[19].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
L_003EA9D0:
    c.r[1].d[0] = c.r[23].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], 0u + 44u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EA9A0u | kUnwind; return; } goto L_003EA9A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003EAA14; } }
L_003EA9E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EA9ECu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 252u, depth + 1u); else { c.pc = 0x0011E550u; return; } if (c.pc != 0x003EA9ECu) [[unlikely]] return; }
L_003EA9EC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 8u)));  goto L_003EAA04; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAA00u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 367u, depth + 1u); else { c.pc = 0x003EAED0u; return; } if (c.pc != 0x003EAA00u) [[unlikely]] return; }
L_003EAA00:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_003EAA04:
    set32(c.r[22], c.r[22].w[0] + 44u);
    set32(c.r[17], c.r[17].w[0] + 44u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
L_003EAA14:
    c.r[2].d[0] = c.r[22].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 44u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EA9E4u | kUnwind; return; } goto L_003EA9E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003EAACC; } }
L_003EAA28:
    c.r[22].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[30], c.r[2].w[0] << 2);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[16].w[0] - c.r[30].w[0]);  if (t) { goto L_003EAA74; } }
L_003EAA44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAA4Cu); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 252u, depth + 1u); else { c.pc = 0x0011E550u; return; } if (c.pc != 0x003EAA4Cu) [[unlikely]] return; }
L_003EAA4C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 8u)));  goto L_003EAA64; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAA60u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 367u, depth + 1u); else { c.pc = 0x003EAED0u; return; } if (c.pc != 0x003EAA60u) [[unlikely]] return; }
L_003EAA60:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_003EAA64:
    set32(c.r[17], c.r[17].w[0] + 44u);
    set32(c.r[22], c.r[22].w[0] + 44u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
L_003EAA74:
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 44u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EAA44u | kUnwind; return; } goto L_003EAA44; }
    set32(c.r[3], c.r[23].w[0] - c.r[19].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] - c.r[3].w[0]);
    c.r[1].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[1].d[0] != 0ull) { set32(c.r[5], c.r[20].w[0] + c.r[3].w[0]);  goto L_003EAABC; }
    c.r[1].d[0] = c.r[18].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003EAAB8; } }
    set32(c.r[18], c.r[18].w[0] + c.r[30].w[0]);
    c.budget -= 1;
L_003EAAB8:
    set32(c.r[5], c.r[20].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_003EAABC:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAAC8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 362u, depth + 1u); else { c.pc = 0x003EADD0u; return; } if (c.pc != 0x003EAAC8u) [[unlikely]] return; }
L_003EAAC8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_003EAACC:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAAD8u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 357u, depth + 1u); else { c.pc = 0x003EACE0u; return; } if (c.pc != 0x003EAAD8u) [[unlikely]] return; }
L_003EAAD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_003EACA8; } }
L_003EAAE0:
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 164u), 0u);
    st32((c.r[29].w[0] + 168u), 0u);
    st32((c.r[29].w[0] + 172u), 0u);
    set32(c.r[16], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 7;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], 0u + 1u);  goto L_003EAAFC; }
L_003EAAFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003EAB18; } }
L_003EAB04:
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[16].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[16].d[0] = c.r[2].d[0] + 0ull;  goto L_003EAB18; }
    set32(c.r[16], c.r[16].w[0] << 1);
    c.budget -= 1;
L_003EAB18:
    c.r[1].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EAB04u | kUnwind; return; } goto L_003EAB04; }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[5], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAB40u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x003EAB40u) [[unlikely]] return; }
L_003EAB40:
    st32((c.r[29].w[0] + 164u), c.r[16].w[0]);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[16].w[0] + c.r[2].w[0]);  if (t) { goto L_003EABA0; } }
L_003EAB70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAB78u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 252u, depth + 1u); else { c.pc = 0x0011E550u; return; } if (c.pc != 0x003EAB78u) [[unlikely]] return; }
L_003EAB78:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 168u)));  goto L_003EAB90; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAB8Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 367u, depth + 1u); else { c.pc = 0x003EAED0u; return; } if (c.pc != 0x003EAB8Cu) [[unlikely]] return; }
L_003EAB8C:
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_003EAB90:
    set32(c.r[16], c.r[16].w[0] + 44u);
    set32(c.r[17], c.r[17].w[0] + 44u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 4;
L_003EABA0:
    c.r[2].d[0] = c.r[16].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 44u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EAB70u | kUnwind; return; } goto L_003EAB70; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EABE4; } }
L_003EABB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EABBCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 252u, depth + 1u); else { c.pc = 0x0011E550u; return; } if (c.pc != 0x003EABBCu) [[unlikely]] return; }
L_003EABBC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 168u)));  goto L_003EABD4; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EABD0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 367u, depth + 1u); else { c.pc = 0x003EAED0u; return; } if (c.pc != 0x003EABD0u) [[unlikely]] return; }
L_003EABD0:
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_003EABD4:
    set32(c.r[17], c.r[17].w[0] + 44u);
    set32(c.r[19], c.r[19].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 4;
L_003EABE4:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[4], 0u + 44u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EABB4u | kUnwind; return; } goto L_003EABB4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] < c.r[22].d[0] ? 1ull : 0ull;  if (t) { goto L_003EAC28; } }
L_003EABF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EABFCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 252u, depth + 1u); else { c.pc = 0x0011E550u; return; } if (c.pc != 0x003EABFCu) [[unlikely]] return; }
L_003EABFC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 168u)));  goto L_003EAC14; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAC10u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 367u, depth + 1u); else { c.pc = 0x003EAED0u; return; } if (c.pc != 0x003EAC10u) [[unlikely]] return; }
L_003EAC10:
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_003EAC14:
    set32(c.r[16], c.r[16].w[0] + 44u);
    set32(c.r[17], c.r[17].w[0] + 44u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_003EAC28:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 44u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EABF4u | kUnwind; return; } goto L_003EABF4; }
    set32(c.r[2], c.r[29].w[0] + 160u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[21].d[0]) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_003EAC80; }
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
L_003EAC80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAC88u);  if (depth < kMaxDepth) unit_00BB(c, 22u, depth + 1u); else { c.pc = 0x003EC380u; return; } if (c.pc != 0x003EAC88u) [[unlikely]] return; }
L_003EAC88:
    set32(c.r[4], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003EACA4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003EACA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EACA4u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003EACA4u) [[unlikely]] return; }
L_003EACA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_003EACA8:
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
L_003EACE0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003EADA8; } }
L_003EAD0C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[17].w[0] + 5u);  goto L_003EAD1C; }
    set32(c.r[16], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_003EAD1C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[19].w[0] + 4u));  goto L_003EAD34; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[19].w[0] + 8u)));  if (t) { goto L_003EAD3C; } }
L_003EAD34:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[20].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_003EAD3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAD44u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x003EAD44u) [[unlikely]] return; }
L_003EAD44:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 104u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[8], c.r[16].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAD60u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x001052E0u; return; } if (c.pc != 0x003EAD60u) [[unlikely]] return; }
L_003EAD60:
    set32(c.r[4], c.r[19].w[0] + 20u);
    set32(c.r[3], c.r[17].w[0] + 20u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 36u)));  goto L_003EAD94; }
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 32u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 108u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAD90u); set32(c.r[6], c.r[5].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BA(c, 457u, depth + 1u); else { c.pc = 0x003EBC50u; return; } if (c.pc != 0x003EAD90u) [[unlikely]] return; }
L_003EAD90:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 1;
L_003EAD94:
    set32(c.r[18], c.r[18].w[0] - 1u);
    st32((c.r[19].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    st32((c.r[19].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[19], c.r[19].w[0] + 44u);
    c.budget -= 5;
L_003EADA8:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EAD0Cu | kUnwind; return; } goto L_003EAD0C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003EADD0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003EAE9C; } }
L_003EADFC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] - 44u);  if (t) { goto L_003EAE14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[18].w[0] + 12u)));  if (t) { goto L_003EAE18; } }
L_003EAE14:
    set32(c.r[16], c.r[18].w[0] + 5u);
    c.budget -= 1;
L_003EAE18:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0] + 4u));  goto L_003EAE30; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[17].w[0] + 8u)));  if (t) { goto L_003EAE38; } }
L_003EAE30:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[20].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_003EAE38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAE40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x003EAE40u) [[unlikely]] return; }
L_003EAE40:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 104u)));
    set32(c.r[8], c.r[16].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAE5Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x001052E0u; return; } if (c.pc != 0x003EAE5Cu) [[unlikely]] return; }
L_003EAE5C:
    set32(c.r[4], c.r[17].w[0] + 20u);
    set32(c.r[2], c.r[18].w[0] + 20u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[18].w[0] + 36u)));  goto L_003EAE90; }
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 32u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 108u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAE8Cu); set32(c.r[6], c.r[5].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BA(c, 457u, depth + 1u); else { c.pc = 0x003EBC50u; return; } if (c.pc != 0x003EAE8Cu) [[unlikely]] return; }
L_003EAE8C:
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 1;
L_003EAE90:
    st32((c.r[17].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 3;
L_003EAE9C:
    c.r[1].d[0] = c.r[19].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[18], c.r[18].w[0] - 44u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EADFCu | kUnwind; return; } goto L_003EADFC; }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003EAED0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 23024u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[17].w[0] + 4u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAF04u); set32(c.r[4], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003EAF04u) [[unlikely]] return; }
L_003EAF04:
    set32(c.r[4], c.r[29].w[0] + 76u);
    set32(c.r[5], c.r[17].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAF14u); set32(c.r[16], c.r[18].w[0] + 20u);  if (depth < kMaxDepth) unit_00BA(c, 382u, depth + 1u); else { c.pc = 0x003EB050u; return; } if (c.pc != 0x003EAF14u) [[unlikely]] return; }
L_003EAF14:
    set32(c.r[4], c.r[29].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAF20u); set32(c.r[5], c.r[17].w[0] + 20u);  if (depth < kMaxDepth) unit_00BA(c, 381u, depth + 1u); else { c.pc = 0x003EB030u; return; } if (c.pc != 0x003EAF20u) [[unlikely]] return; }
L_003EAF20:
    set32(c.r[4], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAF2Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 377u, depth + 1u); else { c.pc = 0x003EAFD0u; return; } if (c.pc != 0x003EAF2Cu) [[unlikely]] return; }
L_003EAF2C:
    set32(c.r[4], c.r[29].w[0] + 68u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAF38u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 376u, depth + 1u); else { c.pc = 0x003EAFC0u; return; } if (c.pc != 0x003EAF38u) [[unlikely]] return; }
L_003EAF38:
    set32(c.r[5], ld32((c.r[29].w[0] + 76u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAF4Cu); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 374u, depth + 1u); else { c.pc = 0x003EAF80u; return; } if (c.pc != 0x003EAF4Cu) [[unlikely]] return; }
L_003EAF4C:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    st32((c.r[18].w[0] + 40u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003EAF80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 40u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAFACu); st32((c.r[4].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_00BA(c, 452u, depth + 1u); else { c.pc = 0x003EBB20u; return; } if (c.pc != 0x003EAFACu) [[unlikely]] return; }
L_003EAFAC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003EAFC0:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003EAFD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003EB01C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EAFE8u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x003EAFE8u) [[unlikely]] return; }
L_003EAFE8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_003EB008; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB000u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x003EB000u) [[unlikely]] return; }
L_003EB000:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_003EB008:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003EB020; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB018u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x003EB018u) [[unlikely]] return; }
L_003EB018:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003EB01C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003EB020:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EB030:
    set32(c.r[6], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[5], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003EB050:
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003EB060:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[1].d[0] = c.r[3].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003EB198; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[29].w[0] + 80u), c.r[5].w[0]);
    set32(c.r[4], c.r[2].w[0] << 2);
    st32((c.r[29].w[0] + 84u), 0u);
    st32((c.r[29].w[0] + 88u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB0B8u); st32((c.r[29].w[0] + 92u), 0u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x003EB0B8u) [[unlikely]] return; }
L_003EB0B8:
    st32((c.r[29].w[0] + 84u), c.r[16].w[0]);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[17], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[17].w[0] + c.r[2].w[0]);  if (t) { goto L_003EB118; } }
L_003EB0E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB0F0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 252u, depth + 1u); else { c.pc = 0x0011E550u; return; } if (c.pc != 0x003EB0F0u) [[unlikely]] return; }
L_003EB0F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 88u)));  goto L_003EB108; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB104u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 367u, depth + 1u); else { c.pc = 0x003EAED0u; return; } if (c.pc != 0x003EB104u) [[unlikely]] return; }
L_003EB104:
    set32(c.r[2], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_003EB108:
    set32(c.r[17], c.r[17].w[0] + 44u);
    set32(c.r[18], c.r[18].w[0] + 44u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 4;
L_003EB118:
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 44u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EB0E8u | kUnwind; return; } goto L_003EB0E8; }
    set32(c.r[2], c.r[29].w[0] + 80u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[19].d[0]) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_003EB174; }
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 17;
L_003EB174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB17Cu);  if (depth < kMaxDepth) unit_00BB(c, 22u, depth + 1u); else { c.pc = 0x003EC380u; return; } if (c.pc != 0x003EB17Cu) [[unlikely]] return; }
L_003EB17C:
    set32(c.r[4], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003EB19C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003EB198; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB198u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003EB198u) [[unlikely]] return; }
L_003EB198:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003EB19C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003EB1C0:
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
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_003EB578; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] - c.r[19].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[21].w[0] + 8u)));  goto L_003EB23C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB230u); set32(c.r[5], c.r[5].w[0] - 7862u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x003EB230u) [[unlikely]] return; }
L_003EB230:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB238u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x003EB238u) [[unlikely]] return; }
L_003EB238:
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_003EB23C:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], c.r[5].w[0] + c.r[19].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0])));  goto L_003EB3D0; }
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[3], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[4], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[2], 0u + 44u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[16].w[0] - c.r[20].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[23].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[23].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 14;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] << 2);  goto L_003EB318; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003EB2C0; } }
L_003EB290:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB298u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 252u, depth + 1u); else { c.pc = 0x0011E550u; return; } if (c.pc != 0x003EB298u) [[unlikely]] return; }
L_003EB298:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 8u)));  goto L_003EB2B0; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB2ACu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 426u, depth + 1u); else { c.pc = 0x003EB7C0u; return; } if (c.pc != 0x003EB2ACu) [[unlikely]] return; }
L_003EB2AC:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_003EB2B0:
    set32(c.r[17], c.r[17].w[0] + 44u);
    set32(c.r[19], c.r[19].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
L_003EB2C0:
    c.r[1].d[0] = c.r[23].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], 0u + 44u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EB290u | kUnwind; return; } goto L_003EB290; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003EB304; } }
L_003EB2D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB2DCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 252u, depth + 1u); else { c.pc = 0x0011E550u; return; } if (c.pc != 0x003EB2DCu) [[unlikely]] return; }
L_003EB2DC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 8u)));  goto L_003EB2F4; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB2F0u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 426u, depth + 1u); else { c.pc = 0x003EB7C0u; return; } if (c.pc != 0x003EB2F0u) [[unlikely]] return; }
L_003EB2F0:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_003EB2F4:
    set32(c.r[22], c.r[22].w[0] + 44u);
    set32(c.r[17], c.r[17].w[0] + 44u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
L_003EB304:
    c.r[2].d[0] = c.r[22].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 44u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EB2D4u | kUnwind; return; } goto L_003EB2D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003EB3BC; } }
L_003EB318:
    c.r[22].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[30], c.r[2].w[0] << 2);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[16].w[0] - c.r[30].w[0]);  if (t) { goto L_003EB364; } }
L_003EB334:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB33Cu); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 252u, depth + 1u); else { c.pc = 0x0011E550u; return; } if (c.pc != 0x003EB33Cu) [[unlikely]] return; }
L_003EB33C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 8u)));  goto L_003EB354; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB350u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 426u, depth + 1u); else { c.pc = 0x003EB7C0u; return; } if (c.pc != 0x003EB350u) [[unlikely]] return; }
L_003EB350:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 1;
L_003EB354:
    set32(c.r[17], c.r[17].w[0] + 44u);
    set32(c.r[22], c.r[22].w[0] + 44u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
L_003EB364:
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 44u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EB334u | kUnwind; return; } goto L_003EB334; }
    set32(c.r[3], c.r[23].w[0] - c.r[19].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] - c.r[3].w[0]);
    c.r[1].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[1].d[0] != 0ull) { set32(c.r[5], c.r[20].w[0] + c.r[3].w[0]);  goto L_003EB3AC; }
    c.r[1].d[0] = c.r[18].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003EB3A8; } }
    set32(c.r[18], c.r[18].w[0] + c.r[30].w[0]);
    c.budget -= 1;
L_003EB3A8:
    set32(c.r[5], c.r[20].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_003EB3AC:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB3B8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 421u, depth + 1u); else { c.pc = 0x003EB6B0u; return; } if (c.pc != 0x003EB3B8u) [[unlikely]] return; }
L_003EB3B8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_003EB3BC:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB3C8u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 416u, depth + 1u); else { c.pc = 0x003EB5B0u; return; } if (c.pc != 0x003EB3C8u) [[unlikely]] return; }
L_003EB3C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  if (t) { goto L_003EB57C; } }
L_003EB3D0:
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 164u), 0u);
    st32((c.r[29].w[0] + 168u), 0u);
    st32((c.r[29].w[0] + 172u), 0u);
    set32(c.r[16], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 7;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], 0u + 1u);  goto L_003EB3EC; }
L_003EB3EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_003EB408; } }
L_003EB3F4:
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[16].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[16].d[0] = c.r[2].d[0] + 0ull;  goto L_003EB408; }
    set32(c.r[16], c.r[16].w[0] << 1);
    c.budget -= 1;
L_003EB408:
    c.r[1].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EB3F4u | kUnwind; return; } goto L_003EB3F4; }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[5], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB430u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x003EB430u) [[unlikely]] return; }
L_003EB430:
    st32((c.r[29].w[0] + 164u), c.r[16].w[0]);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[21].w[0] + 12u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[16].w[0] + c.r[2].w[0]);  if (t) { goto L_003EB490; } }
L_003EB460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB468u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 252u, depth + 1u); else { c.pc = 0x0011E550u; return; } if (c.pc != 0x003EB468u) [[unlikely]] return; }
L_003EB468:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 168u)));  goto L_003EB480; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB47Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 426u, depth + 1u); else { c.pc = 0x003EB7C0u; return; } if (c.pc != 0x003EB47Cu) [[unlikely]] return; }
L_003EB47C:
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_003EB480:
    set32(c.r[16], c.r[16].w[0] + 44u);
    set32(c.r[17], c.r[17].w[0] + 44u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 4;
L_003EB490:
    c.r[2].d[0] = c.r[16].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 44u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EB460u | kUnwind; return; } goto L_003EB460; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EB4D4; } }
L_003EB4A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB4ACu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 252u, depth + 1u); else { c.pc = 0x0011E550u; return; } if (c.pc != 0x003EB4ACu) [[unlikely]] return; }
L_003EB4AC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 168u)));  goto L_003EB4C4; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB4C0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 426u, depth + 1u); else { c.pc = 0x003EB7C0u; return; } if (c.pc != 0x003EB4C0u) [[unlikely]] return; }
L_003EB4C0:
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_003EB4C4:
    set32(c.r[17], c.r[17].w[0] + 44u);
    set32(c.r[19], c.r[19].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 4;
L_003EB4D4:
    c.budget -= 2;
    if (c.r[19].d[0] != 0ull) { set32(c.r[4], 0u + 44u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EB4A4u | kUnwind; return; } goto L_003EB4A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] < c.r[22].d[0] ? 1ull : 0ull;  if (t) { goto L_003EB518; } }
L_003EB4E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB4ECu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 252u, depth + 1u); else { c.pc = 0x0011E550u; return; } if (c.pc != 0x003EB4ECu) [[unlikely]] return; }
L_003EB4EC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 168u)));  goto L_003EB504; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB500u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 426u, depth + 1u); else { c.pc = 0x003EB7C0u; return; } if (c.pc != 0x003EB500u) [[unlikely]] return; }
L_003EB500:
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_003EB504:
    set32(c.r[16], c.r[16].w[0] + 44u);
    set32(c.r[17], c.r[17].w[0] + 44u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_003EB518:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 44u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EB4E4u | kUnwind; return; } goto L_003EB4E4; }
    set32(c.r[2], c.r[29].w[0] + 160u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[21].d[0]) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_003EB570; }
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
L_003EB570:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB578u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00BB(c, 25u, depth + 1u); else { c.pc = 0x003EC400u; return; } if (c.pc != 0x003EB578u) [[unlikely]] return; }
L_003EB578:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_003EB57C:
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
L_003EB5B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003EB680; } }
L_003EB5DC:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[17].w[0] + 5u);  goto L_003EB5EC; }
    set32(c.r[16], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_003EB5EC:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[19].w[0] + 4u));  goto L_003EB604; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[19].w[0] + 8u)));  if (t) { goto L_003EB60C; } }
L_003EB604:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[20].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_003EB60C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB614u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x003EB614u) [[unlikely]] return; }
L_003EB614:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 104u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[8], c.r[16].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB630u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x001052E0u; return; } if (c.pc != 0x003EB630u) [[unlikely]] return; }
L_003EB630:
    set32(c.r[4], c.r[19].w[0] + 20u);
    set32(c.r[3], c.r[17].w[0] + 20u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[3].d[0] = ld8((c.r[17].w[0] + 36u));  goto L_003EB66C; }
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 32u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 108u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB668u); set32(c.r[6], c.r[5].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 2u, depth + 1u); else { c.pc = 0x003EC010u; return; } if (c.pc != 0x003EB668u) [[unlikely]] return; }
L_003EB668:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 36u));
    c.budget -= 1;
L_003EB66C:
    set32(c.r[18], c.r[18].w[0] - 1u);
    st8((c.r[19].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    st32((c.r[19].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[19], c.r[19].w[0] + 44u);
    c.budget -= 5;
L_003EB680:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EB5DCu | kUnwind; return; } goto L_003EB5DC; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003EB6B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003EB784; } }
L_003EB6DC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] - 44u);  if (t) { goto L_003EB6F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[18].w[0] + 12u)));  if (t) { goto L_003EB6F8; } }
L_003EB6F4:
    set32(c.r[16], c.r[18].w[0] + 5u);
    c.budget -= 1;
L_003EB6F8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0] + 4u));  goto L_003EB710; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[17].w[0] + 8u)));  if (t) { goto L_003EB718; } }
L_003EB710:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[20].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_003EB718:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB720u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x003EB720u) [[unlikely]] return; }
L_003EB720:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 104u)));
    set32(c.r[8], c.r[16].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB73Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x001052E0u; return; } if (c.pc != 0x003EB73Cu) [[unlikely]] return; }
L_003EB73C:
    set32(c.r[4], c.r[17].w[0] + 20u);
    set32(c.r[2], c.r[18].w[0] + 20u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[2].d[0] = ld8((c.r[18].w[0] + 36u));  goto L_003EB778; }
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 32u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 108u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB774u); set32(c.r[6], c.r[5].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 2u, depth + 1u); else { c.pc = 0x003EC010u; return; } if (c.pc != 0x003EB774u) [[unlikely]] return; }
L_003EB774:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 36u));
    c.budget -= 1;
L_003EB778:
    st8((c.r[17].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 3;
L_003EB784:
    c.r[1].d[0] = c.r[19].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[18], c.r[18].w[0] - 44u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EB6DCu | kUnwind; return; } goto L_003EB6DC; }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003EB7C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 23008u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[17].w[0] + 4u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB7F4u); set32(c.r[4], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003EB7F4u) [[unlikely]] return; }
L_003EB7F4:
    set32(c.r[4], c.r[29].w[0] + 76u);
    set32(c.r[5], c.r[17].w[0] + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB804u); set32(c.r[16], c.r[18].w[0] + 20u);  if (depth < kMaxDepth) unit_00BA(c, 437u, depth + 1u); else { c.pc = 0x003EB8F0u; return; } if (c.pc != 0x003EB804u) [[unlikely]] return; }
L_003EB804:
    set32(c.r[4], c.r[29].w[0] + 72u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB810u); set32(c.r[5], c.r[17].w[0] + 20u);  if (depth < kMaxDepth) unit_00BA(c, 436u, depth + 1u); else { c.pc = 0x003EB8C0u; return; } if (c.pc != 0x003EB810u) [[unlikely]] return; }
L_003EB810:
    set32(c.r[4], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB81Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 377u, depth + 1u); else { c.pc = 0x003EAFD0u; return; } if (c.pc != 0x003EB81Cu) [[unlikely]] return; }
L_003EB81C:
    set32(c.r[4], c.r[29].w[0] + 68u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB828u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 435u, depth + 1u); else { c.pc = 0x003EB8B0u; return; } if (c.pc != 0x003EB828u) [[unlikely]] return; }
L_003EB828:
    set32(c.r[5], ld32((c.r[29].w[0] + 76u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB83Cu); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 433u, depth + 1u); else { c.pc = 0x003EB870u; return; } if (c.pc != 0x003EB83Cu) [[unlikely]] return; }
L_003EB83C:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 36u));
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[18].w[0] + 36u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    st32((c.r[18].w[0] + 40u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003EB870:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 40u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB89Cu); st32((c.r[4].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_00BA(c, 473u, depth + 1u); else { c.pc = 0x003EBF20u; return; } if (c.pc != 0x003EB89Cu) [[unlikely]] return; }
L_003EB89C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003EB8B0:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003EB8C0:
    set32(c.r[6], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003EB8F0:
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003EB900:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[1].d[0] = c.r[3].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003EBA1C; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[29].w[0] + 80u), c.r[5].w[0]);
    set32(c.r[4], c.r[2].w[0] << 2);
    st32((c.r[29].w[0] + 84u), 0u);
    st32((c.r[29].w[0] + 88u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB958u); st32((c.r[29].w[0] + 92u), 0u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x003EB958u) [[unlikely]] return; }
L_003EB958:
    st32((c.r[29].w[0] + 84u), c.r[16].w[0]);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[17], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[17].w[0] + c.r[2].w[0]);  if (t) { goto L_003EB9B8; } }
L_003EB988:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB990u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 252u, depth + 1u); else { c.pc = 0x0011E550u; return; } if (c.pc != 0x003EB990u) [[unlikely]] return; }
L_003EB990:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 88u)));  goto L_003EB9A8; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EB9A4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 426u, depth + 1u); else { c.pc = 0x003EB7C0u; return; } if (c.pc != 0x003EB9A4u) [[unlikely]] return; }
L_003EB9A4:
    set32(c.r[2], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_003EB9A8:
    set32(c.r[17], c.r[17].w[0] + 44u);
    set32(c.r[18], c.r[18].w[0] + 44u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 4;
L_003EB9B8:
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 44u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EB988u | kUnwind; return; } goto L_003EB988; }
    set32(c.r[2], c.r[29].w[0] + 80u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[19].d[0]) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_003EBA14; }
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 17;
L_003EBA14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBA1Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00BB(c, 25u, depth + 1u); else { c.pc = 0x003EC400u; return; } if (c.pc != 0x003EBA1Cu) [[unlikely]] return; }
L_003EBA1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003EBA40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003EBA98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBA64u);  if (depth < kMaxDepth) unit_00BB(c, 19u, depth + 1u); else { c.pc = 0x003EC310u; return; } if (c.pc != 0x003EBA64u) [[unlikely]] return; }
L_003EBA64:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_003EBA84; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003EBA80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBA80u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003EBA80u) [[unlikely]] return; }
L_003EBA80:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_003EBA84:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003EBA9C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBA98u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003EBA98u) [[unlikely]] return; }
L_003EBA98:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003EBA9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003EBAB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003EBB08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBAD4u);  if (depth < kMaxDepth) unit_00BB(c, 22u, depth + 1u); else { c.pc = 0x003EC380u; return; } if (c.pc != 0x003EBAD4u) [[unlikely]] return; }
L_003EBAD4:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_003EBAF4; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003EBAF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBAF0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003EBAF0u) [[unlikely]] return; }
L_003EBAF0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_003EBAF4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003EBB0C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBB08u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003EBB08u) [[unlikely]] return; }
L_003EBB08:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003EBB0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003EBB20:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u + 48u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st32((c.r[29].w[0] + 108u), c.r[5].w[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 104u), c.f[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[4], c.r[6].w[0] - c.r[4].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.budget -= 18;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003EBC30; } }
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBB7Cu); set32(c.r[4], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x003EBB7Cu) [[unlikely]] return; }
L_003EBB7C:
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 12u)));  if (t) { goto L_003EBC0C; } }
L_003EBB8C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[3].d[0] = c.r[18].d[0] << 32;  goto L_003EBBF4; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = c.r[18].d[0] << 32;
    set32(c.r[3], c.r[3].w[0] + 23040u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[5], c.r[2].w[0] + 4u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBBB4u); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003EBBB4u) [[unlikely]] return; }
L_003EBBB4:
    c.r[3].d[0] = c.r[18].d[0] << 32;
    set32(c.r[4], c.r[16].w[0] + 28u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 20u));
    set32(c.r[5], c.r[3].w[0] + 28u);
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 21u));
    st8((c.r[16].w[0] + 21u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBBE0u); st32((c.r[16].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003EBBE0u) [[unlikely]] return; }
L_003EBBE0:
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[3], ld32((c.r[3].w[0] + 44u)));
    st32((c.r[16].w[0] + 44u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.budget -= 5;
L_003EBBF4:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[16], c.r[16].w[0] + 48u);
    set32(c.r[18], c.r[3].w[0] + 48u);
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 6;
L_003EBC0C:
    c.r[4].d[0] = c.r[18].d[0] << 32;
    c.r[3].d[0] = c.r[19].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EBB8Cu | kUnwind; return; } goto L_003EBB8C; } }
L_003EBC30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003EBC50:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] - c.r[17].w[0]);
    set32(c.r[4], 0u + 48u);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[20].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[3].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 19;
    if (c.r[1].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 8u)));  goto L_003EBDF4; }
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], c.r[29].w[0] + 124u);  goto L_003EBCB0; }
    set32(c.r[3], c.r[18].w[0] + 8u);
    c.budget -= 1;
L_003EBCB0:
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[21], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[21].w[0] + c.r[3].w[0]);  if (t) { goto L_003EBD08; } }
L_003EBCCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBCD4u); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0011(c, 396u, depth + 1u); else { c.pc = 0x00147760u; return; } if (c.pc != 0x003EBCD4u) [[unlikely]] return; }
L_003EBCD4:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 20u));
    set32(c.r[4], c.r[21].w[0] + 28u);
    set32(c.r[5], c.r[17].w[0] + 28u);
    st8((c.r[21].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 21u));
    st8((c.r[21].w[0] + 21u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBCF8u); st32((c.r[21].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0011(c, 396u, depth + 1u); else { c.pc = 0x00147760u; return; } if (c.pc != 0x003EBCF8u) [[unlikely]] return; }
L_003EBCF8:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    st32((c.r[21].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[17], c.r[17].w[0] + 48u);
    set32(c.r[21], c.r[21].w[0] + 48u);
    c.budget -= 4;
L_003EBD08:
    c.r[3].d[0] = c.r[21].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[21].w[0] + 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EBCCCu | kUnwind; return; } goto L_003EBCCC; }
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    c.r[3].d[0] = c.r[20].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[1].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;  goto L_003EBD74; }
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 4);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_003EBD58; } }
L_003EBD44:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBD54u); set32(c.r[5], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EBD54u) [[unlikely]] return; }
L_003EBD54:
    set32(c.r[21], c.r[21].w[0] + 48u);
    c.budget -= 1;
L_003EBD58:
    c.r[3].d[0] = c.r[21].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[25], ld32((c.r[21].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EBD44u | kUnwind; return; } goto L_003EBD44; }
    c.r[3].d[0] = c.r[20].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_003EBEF0; } }
L_003EBD74:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_003EBEF4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EBDE4; } }
L_003EBD84:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 8u)));  goto L_003EBDD4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[21].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + 23040u);
    set32(c.r[5], c.r[17].w[0] + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBDA4u); st32((c.r[21].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003EBDA4u) [[unlikely]] return; }
L_003EBDA4:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 20u));
    set32(c.r[4], c.r[21].w[0] + 28u);
    set32(c.r[5], c.r[17].w[0] + 28u);
    st8((c.r[21].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 21u));
    st8((c.r[21].w[0] + 21u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBDC8u); st32((c.r[21].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003EBDC8u) [[unlikely]] return; }
L_003EBDC8:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    st32((c.r[21].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
L_003EBDD4:
    set32(c.r[17], c.r[17].w[0] + 48u);
    set32(c.r[21], c.r[21].w[0] + 48u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_003EBDE4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EBD84u | kUnwind; return; } goto L_003EBD84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EBEF0; } }
L_003EBDF4:
    set32(c.r[19], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[19].w[0] + c.r[2].w[0]);  if (t) { goto L_003EBE20; } }
L_003EBE0C:
    set32(c.r[5], 0u - 1u);
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBE20u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003EBE20u) [[unlikely]] return; }
L_003EBE20:
    c.r[1].d[0] = c.r[19].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[21], c.r[21].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EBE0Cu | kUnwind; return; } goto L_003EBE0C; }
    st32((c.r[18].w[0] + 8u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = c.r[20].d[0] << 32;  goto L_003EBE58; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[18].w[0] + 12u), 0u);  goto L_003EBE50; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBE4Cu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003EBE4Cu) [[unlikely]] return; }
L_003EBE4C:
    st32((c.r[18].w[0] + 12u), 0u);
    c.budget -= 1;
L_003EBE50:
    st32((c.r[18].w[0] + 4u), 0u);
    c.r[3].d[0] = c.r[20].d[0] << 32;
    c.budget -= 2;
L_003EBE58:
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBE70u); set32(c.r[4], c.r[2].w[0] << 4);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x003EBE70u) [[unlikely]] return; }
L_003EBE70:
    c.r[3].d[0] = c.r[20].d[0] << 32;
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[18].w[0] + 12u)));  if (t) { goto L_003EBEE8; } }
L_003EBE88:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 8u)));  goto L_003EBED8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[19].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + 23040u);
    set32(c.r[5], c.r[17].w[0] + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBEA8u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003EBEA8u) [[unlikely]] return; }
L_003EBEA8:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 20u));
    set32(c.r[4], c.r[19].w[0] + 28u);
    set32(c.r[5], c.r[17].w[0] + 28u);
    st8((c.r[19].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 21u));
    st8((c.r[19].w[0] + 21u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBECCu); st32((c.r[19].w[0] + 24u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003EBECCu) [[unlikely]] return; }
L_003EBECC:
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    st32((c.r[19].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
L_003EBED8:
    set32(c.r[17], c.r[17].w[0] + 48u);
    set32(c.r[19], c.r[19].w[0] + 48u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_003EBEE8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EBE88u | kUnwind; return; } goto L_003EBE88; } }
L_003EBEF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_003EBEF4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003EBF20:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u + 44u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st32((c.r[29].w[0] + 108u), c.r[5].w[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 108u));
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 104u), c.f[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[4], c.r[6].w[0] - c.r[4].w[0]);
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.budget -= 18;
    { const bool t = c.r[16].d[0] == 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003EBFF4; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBF84u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x003EBF84u) [[unlikely]] return; }
L_003EBF84:
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 12u)));  if (t) { goto L_003EBFD0; } }
L_003EBF94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBF9Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 252u, depth + 1u); else { c.pc = 0x0011E550u; return; } if (c.pc != 0x003EBF9Cu) [[unlikely]] return; }
L_003EBF9C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[3].d[0] = c.r[18].d[0] << 32;  goto L_003EBFB8; }
    c.r[5].d[0] = c.r[18].d[0] << 32;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EBFB4u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (depth < kMaxDepth) unit_00BA(c, 367u, depth + 1u); else { c.pc = 0x003EAED0u; return; } if (c.pc != 0x003EBFB4u) [[unlikely]] return; }
L_003EBFB4:
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.budget -= 1;
L_003EBFB8:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[16], c.r[16].w[0] + 44u);
    set32(c.r[18], c.r[3].w[0] + 44u);
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 6;
L_003EBFD0:
    c.r[4].d[0] = c.r[18].d[0] << 32;
    c.r[3].d[0] = c.r[19].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 9;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], 0u + 44u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EBF94u | kUnwind; return; } goto L_003EBF94; }
L_003EBFF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.budget -= 3;
    [[clang::musttail]] return unit_00BB(c, 1u, depth);
}

}
