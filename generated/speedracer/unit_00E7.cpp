#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00E7[4096] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0,
    0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    64, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0,
    72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0,
    0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94,
    0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0,
    0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 109,
    0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 114, 0, 115, 0, 0,
    0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0,
    0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 126,
    0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0,
    0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0,
    0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0,
    0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145,
    0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0,
    0, 0, 150, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0,
    0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158,
    0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0,
    0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0,
    0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0,
    0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0,
    0, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 186, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0,
    190, 0, 0, 191, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 197, 0, 198, 0, 0, 0,
    0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0,
    220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 227, 0, 228, 0, 0, 0, 0, 229,
    0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 232, 0, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0,
    0, 0, 237, 0, 238, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0, 244, 0, 0,
    245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0,
    249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0,
    252, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0,
    0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0,
    0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0,
    0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0,
    274, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0,
    0, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0,
    286, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 305, 0,
    0, 0, 0, 306, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0,
    0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0,
    0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0,
    0, 319, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 327, 0, 0, 0, 0,
    0, 0, 328, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0,
    0, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0,
    0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0,
    361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 366, 0,
    0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0,
    0, 0, 374, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 377, 0, 0, 0, 0, 0, 378, 0, 0,
    379, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 386,
    0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 395, 0, 396, 0, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 0,
    399, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 401, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 404, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 412, 0, 0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 417, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0,
    428, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 438,
    0, 0, 439, 0, 0, 440, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 446,
    0, 447, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0,
    0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0,
    0, 0, 0, 0, 457, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 462, 0, 0, 0,
    463, 0, 0, 0, 464, 0, 0, 0, 465, 0, 0, 0, 466, 0, 0, 0, 467, 0, 0, 0, 468, 0, 0, 0, 469, 0, 0, 0, 470, 0, 0, 0,
    471, 0, 0, 0, 472, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 480,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 482, 0, 0, 0, 0, 0, 483, 0, 0, 0,
    0, 0, 0, 484, 0, 0, 0, 0, 485, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0,
    489, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 492, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 494, 0, 0, 495, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 498, 0, 0,
    0, 0, 0, 0, 0, 0, 499, 0, 0, 500, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 503, 0, 0, 0, 0, 504, 0,
    0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 508, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0,
    0, 511, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0,
    515, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 518, 0, 0, 0, 519, 0, 0, 0, 520, 0, 0, 0, 521, 0, 0, 0,
    522, 0, 0, 0, 523, 0, 0, 0, 524, 0, 0, 0, 525, 0, 0, 0, 526, 0, 0, 0, 527, 0, 0, 0, 528, 0, 0, 0, 529, 0, 0, 0,
    530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00E7(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0049C000;
    case 2u: goto L_0049C00C;
    case 3u: goto L_0049C038;
    case 4u: goto L_0049C064;
    case 5u: goto L_0049C090;
    case 6u: goto L_0049C0BC;
    case 7u: goto L_0049C0E8;
    case 8u: goto L_0049C114;
    case 9u: goto L_0049C140;
    case 10u: goto L_0049C16C;
    case 11u: goto L_0049C198;
    case 12u: goto L_0049C1C4;
    case 13u: goto L_0049C1F0;
    case 14u: goto L_0049C21C;
    case 15u: goto L_0049C248;
    case 16u: goto L_0049C274;
    case 17u: goto L_0049C2A0;
    case 18u: goto L_0049C2CC;
    case 19u: goto L_0049C2F8;
    case 20u: goto L_0049C324;
    case 21u: goto L_0049C34C;
    case 22u: goto L_0049C378;
    case 23u: goto L_0049C3A4;
    case 24u: goto L_0049C3CC;
    case 25u: goto L_0049C3F8;
    case 26u: goto L_0049C424;
    case 27u: goto L_0049C450;
    case 28u: goto L_0049C47C;
    case 29u: goto L_0049C4A8;
    case 30u: goto L_0049C4D4;
    case 31u: goto L_0049C500;
    case 32u: goto L_0049C528;
    case 33u: goto L_0049C554;
    case 34u: goto L_0049C580;
    case 35u: goto L_0049C5AC;
    case 36u: goto L_0049C5D8;
    case 37u: goto L_0049C600;
    case 38u: goto L_0049C62C;
    case 39u: goto L_0049C658;
    case 40u: goto L_0049C684;
    case 41u: goto L_0049C6B0;
    case 42u: goto L_0049C6DC;
    case 43u: goto L_0049C708;
    case 44u: goto L_0049C734;
    case 45u: goto L_0049C760;
    case 46u: goto L_0049C78C;
    case 47u: goto L_0049C7B8;
    case 48u: goto L_0049C7E4;
    case 49u: goto L_0049C810;
    case 50u: goto L_0049C83C;
    case 51u: goto L_0049C868;
    case 52u: goto L_0049C894;
    case 53u: goto L_0049C8C0;
    case 54u: goto L_0049C8EC;
    case 55u: goto L_0049C918;
    case 56u: goto L_0049C930;
    case 57u: goto L_0049C954;
    case 58u: goto L_0049C960;
    case 59u: goto L_0049C984;
    case 60u: goto L_0049C990;
    case 61u: goto L_0049CA08;
    case 62u: goto L_0049CA20;
    case 63u: goto L_0049CA40;
    case 64u: goto L_0049CA80;
    case 65u: goto L_0049CA90;
    case 66u: goto L_0049CAA0;
    case 67u: goto L_0049CAD4;
    case 68u: goto L_0049CAEC;
    case 69u: goto L_0049CB4C;
    case 70u: goto L_0049CB58;
    case 71u: goto L_0049CB78;
    case 72u: goto L_0049CB80;
    case 73u: goto L_0049CBA0;
    case 74u: goto L_0049CBE4;
    case 75u: goto L_0049CBF0;
    case 76u: goto L_0049CC14;
    case 77u: goto L_0049CC20;
    case 78u: goto L_0049CC2C;
    case 79u: goto L_0049CC40;
    case 80u: goto L_0049CC54;
    case 81u: goto L_0049CC68;
    case 82u: goto L_0049CCBC;
    case 83u: goto L_0049CD18;
    case 84u: goto L_0049CD30;
    case 85u: goto L_0049CD48;
    case 86u: goto L_0049CD5C;
    case 87u: goto L_0049CD74;
    case 88u: goto L_0049CDA4;
    case 89u: goto L_0049CDD0;
    case 90u: goto L_0049CE00;
    case 91u: goto L_0049CE38;
    case 92u: goto L_0049CE50;
    case 93u: goto L_0049CE68;
    case 94u: goto L_0049CE7C;
    case 95u: goto L_0049CE94;
    case 96u: goto L_0049CEC4;
    case 97u: goto L_0049CEF0;
    case 98u: goto L_0049CF20;
    case 99u: goto L_0049CF58;
    case 100u: goto L_0049CF70;
    case 101u: goto L_0049CF88;
    case 102u: goto L_0049CF9C;
    case 103u: goto L_0049CFB4;
    case 104u: goto L_0049CFE4;
    case 105u: goto L_0049D010;
    case 106u: goto L_0049D030;
    case 107u: goto L_0049D044;
    case 108u: goto L_0049D074;
    case 109u: goto L_0049D07C;
    case 110u: goto L_0049D084;
    case 111u: goto L_0049D0A0;
    case 112u: goto L_0049D0B4;
    case 113u: goto L_0049D0E4;
    case 114u: goto L_0049D0EC;
    case 115u: goto L_0049D0F4;
    case 116u: goto L_0049D110;
    case 117u: goto L_0049D12C;
    case 118u: goto L_0049D148;
    case 119u: goto L_0049D154;
    case 120u: goto L_0049D178;
    case 121u: goto L_0049D184;
    case 122u: goto L_0049D1A0;
    case 123u: goto L_0049D1B8;
    case 124u: goto L_0049D1D8;
    case 125u: goto L_0049D1F0;
    case 126u: goto L_0049D1FC;
    case 127u: goto L_0049D210;
    case 128u: goto L_0049D244;
    case 129u: goto L_0049D260;
    case 130u: goto L_0049D26C;
    case 131u: goto L_0049D290;
    case 132u: goto L_0049D29C;
    case 133u: goto L_0049D2D4;
    case 134u: goto L_0049D2F8;
    case 135u: goto L_0049D330;
    case 136u: goto L_0049D348;
    case 137u: goto L_0049D360;
    case 138u: goto L_0049D374;
    case 139u: goto L_0049D38C;
    case 140u: goto L_0049D3BC;
    case 141u: goto L_0049D3F0;
    case 142u: goto L_0049D414;
    case 143u: goto L_0049D44C;
    case 144u: goto L_0049D464;
    case 145u: goto L_0049D47C;
    case 146u: goto L_0049D490;
    case 147u: goto L_0049D4A8;
    case 148u: goto L_0049D4D8;
    case 149u: goto L_0049D4F0;
    case 150u: goto L_0049D508;
    case 151u: goto L_0049D514;
    case 152u: goto L_0049D540;
    case 153u: goto L_0049D570;
    case 154u: goto L_0049D58C;
    case 155u: goto L_0049D598;
    case 156u: goto L_0049D5BC;
    case 157u: goto L_0049D5C8;
    case 158u: goto L_0049D5FC;
    case 159u: goto L_0049D620;
    case 160u: goto L_0049D658;
    case 161u: goto L_0049D670;
    case 162u: goto L_0049D688;
    case 163u: goto L_0049D69C;
    case 164u: goto L_0049D6B4;
    case 165u: goto L_0049D6E4;
    case 166u: goto L_0049D710;
    case 167u: goto L_0049D734;
    case 168u: goto L_0049D76C;
    case 169u: goto L_0049D784;
    case 170u: goto L_0049D79C;
    case 171u: goto L_0049D7B0;
    case 172u: goto L_0049D7C8;
    case 173u: goto L_0049D7F8;
    case 174u: goto L_0049D804;
    case 175u: goto L_0049D81C;
    case 176u: goto L_0049D828;
    case 177u: goto L_0049D850;
    case 178u: goto L_0049D898;
    case 179u: goto L_0049D8A4;
    case 180u: goto L_0049D8C8;
    case 181u: goto L_0049D8D4;
    case 182u: goto L_0049D8F0;
    case 183u: goto L_0049D90C;
    case 184u: goto L_0049D918;
    case 185u: goto L_0049D930;
    case 186u: goto L_0049D938;
    case 187u: goto L_0049D940;
    case 188u: goto L_0049D954;
    case 189u: goto L_0049D964;
    case 190u: goto L_0049D980;
    case 191u: goto L_0049D98C;
    case 192u: goto L_0049D99C;
    case 193u: goto L_0049D9A8;
    case 194u: goto L_0049D9BC;
    case 195u: goto L_0049D9C8;
    case 196u: goto L_0049D9E0;
    case 197u: goto L_0049D9E8;
    case 198u: goto L_0049D9F0;
    case 199u: goto L_0049DA04;
    case 200u: goto L_0049DA14;
    case 201u: goto L_0049DA30;
    case 202u: goto L_0049DA3C;
    case 203u: goto L_0049DA4C;
    case 204u: goto L_0049DA58;
    case 205u: goto L_0049DA6C;
    case 206u: goto L_0049DAB4;
    case 207u: goto L_0049DAD8;
    case 208u: goto L_0049DB10;
    case 209u: goto L_0049DB28;
    case 210u: goto L_0049DB40;
    case 211u: goto L_0049DB54;
    case 212u: goto L_0049DB6C;
    case 213u: goto L_0049DB9C;
    case 214u: goto L_0049DBC8;
    case 215u: goto L_0049DBEC;
    case 216u: goto L_0049DC24;
    case 217u: goto L_0049DC3C;
    case 218u: goto L_0049DC54;
    case 219u: goto L_0049DC68;
    case 220u: goto L_0049DC80;
    case 221u: goto L_0049DCB0;
    case 222u: goto L_0049DCE0;
    case 223u: goto L_0049DD18;
    case 224u: goto L_0049DD34;
    case 225u: goto L_0049DD40;
    case 226u: goto L_0049DD58;
    case 227u: goto L_0049DD60;
    case 228u: goto L_0049DD68;
    case 229u: goto L_0049DD7C;
    case 230u: goto L_0049DD8C;
    case 231u: goto L_0049DDA8;
    case 232u: goto L_0049DDB4;
    case 233u: goto L_0049DDC4;
    case 234u: goto L_0049DDD0;
    case 235u: goto L_0049DDE4;
    case 236u: goto L_0049DDF0;
    case 237u: goto L_0049DE08;
    case 238u: goto L_0049DE10;
    case 239u: goto L_0049DE18;
    case 240u: goto L_0049DE2C;
    case 241u: goto L_0049DE3C;
    case 242u: goto L_0049DE58;
    case 243u: goto L_0049DE64;
    case 244u: goto L_0049DE74;
    case 245u: goto L_0049DE80;
    case 246u: goto L_0049DE94;
    case 247u: goto L_0049DEC0;
    case 248u: goto L_0049DEE0;
    case 249u: goto L_0049DF00;
    case 250u: goto L_0049DF30;
    case 251u: goto L_0049DF68;
    case 252u: goto L_0049DF80;
    case 253u: goto L_0049DF94;
    case 254u: goto L_0049DFA4;
    case 255u: goto L_0049DFF0;
    case 256u: goto L_0049E014;
    case 257u: goto L_0049E030;
    case 258u: goto L_0049E03C;
    case 259u: goto L_0049E050;
    case 260u: goto L_0049E06C;
    case 261u: goto L_0049E078;
    case 262u: goto L_0049E090;
    case 263u: goto L_0049E108;
    case 264u: goto L_0049E11C;
    case 265u: goto L_0049E130;
    case 266u: goto L_0049E154;
    case 267u: goto L_0049E16C;
    case 268u: goto L_0049E190;
    case 269u: goto L_0049E1AC;
    case 270u: goto L_0049E20C;
    case 271u: goto L_0049E218;
    case 272u: goto L_0049E240;
    case 273u: goto L_0049E264;
    case 274u: goto L_0049E280;
    case 275u: goto L_0049E2A4;
    case 276u: goto L_0049E2BC;
    case 277u: goto L_0049E2E0;
    case 278u: goto L_0049E2F0;
    case 279u: goto L_0049E314;
    case 280u: goto L_0049E320;
    case 281u: goto L_0049E330;
    case 282u: goto L_0049E340;
    case 283u: goto L_0049E350;
    case 284u: goto L_0049E360;
    case 285u: goto L_0049E370;
    case 286u: goto L_0049E380;
    case 287u: goto L_0049E390;
    case 288u: goto L_0049E3A0;
    case 289u: goto L_0049E3B0;
    case 290u: goto L_0049E3C0;
    case 291u: goto L_0049E3D0;
    case 292u: goto L_0049E3E0;
    case 293u: goto L_0049E3F0;
    case 294u: goto L_0049E430;
    case 295u: goto L_0049E440;
    case 296u: goto L_0049E450;
    case 297u: goto L_0049E484;
    case 298u: goto L_0049E498;
    case 299u: goto L_0049E500;
    case 300u: goto L_0049E518;
    case 301u: goto L_0049E530;
    case 302u: goto L_0049E540;
    case 303u: goto L_0049E554;
    case 304u: goto L_0049E56C;
    case 305u: goto L_0049E578;
    case 306u: goto L_0049E58C;
    case 307u: goto L_0049E598;
    case 308u: goto L_0049E5C0;
    case 309u: goto L_0049E5F0;
    case 310u: goto L_0049E608;
    case 311u: goto L_0049E620;
    case 312u: goto L_0049E634;
    case 313u: goto L_0049E660;
    case 314u: goto L_0049E684;
    case 315u: goto L_0049E6A0;
    case 316u: goto L_0049E6BC;
    case 317u: goto L_0049E6C8;
    case 318u: goto L_0049E6E0;
    case 319u: goto L_0049E704;
    case 320u: goto L_0049E720;
    case 321u: goto L_0049E73C;
    case 322u: goto L_0049E748;
    case 323u: goto L_0049E760;
    case 324u: goto L_0049E7B0;
    case 325u: goto L_0049E7BC;
    case 326u: goto L_0049E7E0;
    case 327u: goto L_0049E7EC;
    case 328u: goto L_0049E808;
    case 329u: goto L_0049E814;
    case 330u: goto L_0049E838;
    case 331u: goto L_0049E844;
    case 332u: goto L_0049E894;
    case 333u: goto L_0049E8B8;
    case 334u: goto L_0049E8F0;
    case 335u: goto L_0049E908;
    case 336u: goto L_0049E920;
    case 337u: goto L_0049E934;
    case 338u: goto L_0049E94C;
    case 339u: goto L_0049E97C;
    case 340u: goto L_0049E9A8;
    case 341u: goto L_0049E9CC;
    case 342u: goto L_0049EA04;
    case 343u: goto L_0049EA1C;
    case 344u: goto L_0049EA34;
    case 345u: goto L_0049EA48;
    case 346u: goto L_0049EA60;
    case 347u: goto L_0049EA90;
    case 348u: goto L_0049EABC;
    case 349u: goto L_0049EAE0;
    case 350u: goto L_0049EB18;
    case 351u: goto L_0049EB30;
    case 352u: goto L_0049EB48;
    case 353u: goto L_0049EB5C;
    case 354u: goto L_0049EB74;
    case 355u: goto L_0049EBA4;
    case 356u: goto L_0049EBE0;
    case 357u: goto L_0049EC04;
    case 358u: goto L_0049EC3C;
    case 359u: goto L_0049EC54;
    case 360u: goto L_0049EC6C;
    case 361u: goto L_0049EC80;
    case 362u: goto L_0049EC98;
    case 363u: goto L_0049ECC8;
    case 364u: goto L_0049ECD4;
    case 365u: goto L_0049ECEC;
    case 366u: goto L_0049ECF8;
    case 367u: goto L_0049ED1C;
    case 368u: goto L_0049ED28;
    case 369u: goto L_0049ED60;
    case 370u: goto L_0049ED8C;
    case 371u: goto L_0049EDC4;
    case 372u: goto L_0049EDDC;
    case 373u: goto L_0049EDF4;
    case 374u: goto L_0049EE08;
    case 375u: goto L_0049EE20;
    case 376u: goto L_0049EE50;
    case 377u: goto L_0049EE5C;
    case 378u: goto L_0049EE74;
    case 379u: goto L_0049EE80;
    case 380u: goto L_0049EEA4;
    case 381u: goto L_0049EEB0;
    case 382u: goto L_0049EEE8;
    case 383u: goto L_0049EF14;
    case 384u: goto L_0049EF4C;
    case 385u: goto L_0049EF64;
    case 386u: goto L_0049EF7C;
    case 387u: goto L_0049EF90;
    case 388u: goto L_0049EFA8;
    case 389u: goto L_0049EFD8;
    case 390u: goto L_0049F010;
    case 391u: goto L_0049F02C;
    case 392u: goto L_0049F040;
    case 393u: goto L_0049F060;
    case 394u: goto L_0049F0A4;
    case 395u: goto L_0049F0C0;
    case 396u: goto L_0049F0C8;
    case 397u: goto L_0049F0D8;
    case 398u: goto L_0049F0F0;
    case 399u: goto L_0049F100;
    case 400u: goto L_0049F120;
    case 401u: goto L_0049F138;
    case 402u: goto L_0049F144;
    case 403u: goto L_0049F168;
    case 404u: goto L_0049F174;
    case 405u: goto L_0049F1AC;
    case 406u: goto L_0049F1D4;
    case 407u: goto L_0049F20C;
    case 408u: goto L_0049F224;
    case 409u: goto L_0049F23C;
    case 410u: goto L_0049F250;
    case 411u: goto L_0049F268;
    case 412u: goto L_0049F298;
    case 413u: goto L_0049F2A4;
    case 414u: goto L_0049F2BC;
    case 415u: goto L_0049F2C8;
    case 416u: goto L_0049F2EC;
    case 417u: goto L_0049F2F8;
    case 418u: goto L_0049F330;
    case 419u: goto L_0049F358;
    case 420u: goto L_0049F390;
    case 421u: goto L_0049F3A8;
    case 422u: goto L_0049F3C0;
    case 423u: goto L_0049F3D4;
    case 424u: goto L_0049F3EC;
    case 425u: goto L_0049F41C;
    case 426u: goto L_0049F428;
    case 427u: goto L_0049F460;
    case 428u: goto L_0049F480;
    case 429u: goto L_0049F490;
    case 430u: goto L_0049F4A0;
    case 431u: goto L_0049F4B8;
    case 432u: goto L_0049F4D0;
    case 433u: goto L_0049F4E8;
    case 434u: goto L_0049F4F8;
    case 435u: goto L_0049F530;
    case 436u: goto L_0049F540;
    case 437u: goto L_0049F570;
    case 438u: goto L_0049F57C;
    case 439u: goto L_0049F588;
    case 440u: goto L_0049F594;
    case 441u: goto L_0049F5A8;
    case 442u: goto L_0049F5E8;
    case 443u: goto L_0049F610;
    case 444u: goto L_0049F638;
    case 445u: goto L_0049F65C;
    case 446u: goto L_0049F67C;
    case 447u: goto L_0049F684;
    case 448u: goto L_0049F6A0;
    case 449u: goto L_0049F718;
    case 450u: goto L_0049F73C;
    case 451u: goto L_0049F754;
    case 452u: goto L_0049F770;
    case 453u: goto L_0049F794;
    case 454u: goto L_0049F7B0;
    case 455u: goto L_0049F7D4;
    case 456u: goto L_0049F7EC;
    case 457u: goto L_0049F810;
    case 458u: goto L_0049F820;
    case 459u: goto L_0049F844;
    case 460u: goto L_0049F850;
    case 461u: goto L_0049F860;
    case 462u: goto L_0049F870;
    case 463u: goto L_0049F880;
    case 464u: goto L_0049F890;
    case 465u: goto L_0049F8A0;
    case 466u: goto L_0049F8B0;
    case 467u: goto L_0049F8C0;
    case 468u: goto L_0049F8D0;
    case 469u: goto L_0049F8E0;
    case 470u: goto L_0049F8F0;
    case 471u: goto L_0049F900;
    case 472u: goto L_0049F910;
    case 473u: goto L_0049F920;
    case 474u: goto L_0049F9A8;
    case 475u: goto L_0049F9C0;
    case 476u: goto L_0049F9E0;
    case 477u: goto L_0049FA20;
    case 478u: goto L_0049FA30;
    case 479u: goto L_0049FA64;
    case 480u: goto L_0049FA7C;
    case 481u: goto L_0049FACC;
    case 482u: goto L_0049FAD8;
    case 483u: goto L_0049FAF0;
    case 484u: goto L_0049FB0C;
    case 485u: goto L_0049FB20;
    case 486u: goto L_0049FB2C;
    case 487u: goto L_0049FB50;
    case 488u: goto L_0049FB64;
    case 489u: goto L_0049FB80;
    case 490u: goto L_0049FBA0;
    case 491u: goto L_0049FBC8;
    case 492u: goto L_0049FBD4;
    case 493u: goto L_0049FBF0;
    case 494u: goto L_0049FC18;
    case 495u: goto L_0049FC24;
    case 496u: goto L_0049FC40;
    case 497u: goto L_0049FC6C;
    case 498u: goto L_0049FC74;
    case 499u: goto L_0049FC98;
    case 500u: goto L_0049FCA4;
    case 501u: goto L_0049FCB4;
    case 502u: goto L_0049FCD8;
    case 503u: goto L_0049FCE4;
    case 504u: goto L_0049FCF8;
    case 505u: goto L_0049FD08;
    case 506u: goto L_0049FD30;
    case 507u: goto L_0049FDA4;
    case 508u: goto L_0049FDB0;
    case 509u: goto L_0049FDC8;
    case 510u: goto L_0049FDE0;
    case 511u: goto L_0049FE04;
    case 512u: goto L_0049FE20;
    case 513u: goto L_0049FE44;
    case 514u: goto L_0049FE5C;
    case 515u: goto L_0049FE80;
    case 516u: goto L_0049FE90;
    case 517u: goto L_0049FEB4;
    case 518u: goto L_0049FEC0;
    case 519u: goto L_0049FED0;
    case 520u: goto L_0049FEE0;
    case 521u: goto L_0049FEF0;
    case 522u: goto L_0049FF00;
    case 523u: goto L_0049FF10;
    case 524u: goto L_0049FF20;
    case 525u: goto L_0049FF30;
    case 526u: goto L_0049FF40;
    case 527u: goto L_0049FF50;
    case 528u: goto L_0049FF60;
    case 529u: goto L_0049FF70;
    case 530u: goto L_0049FF80;
    case 531u: goto L_0049FFB0;
    case 532u: goto L_0049FFC8;
    case 533u: goto L_0049FFE0;
    default: bad_entry(c, 0x0049C000u); return;
    }
L_0049C000:
    set32(c.r[7], c.r[7].w[0] - 19152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C00Cu); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C00Cu) [[unlikely]] return; }
L_0049C00C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10125u);
    set32(c.r[5], c.r[5].w[0] - 10107u);
    set32(c.r[6], c.r[6].w[0] - 10097u);
    set32(c.r[7], c.r[7].w[0] - 19296u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C038u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C038u) [[unlikely]] return; }
L_0049C038:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10086u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 10060u);
    set32(c.r[7], c.r[7].w[0] - 19728u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C064u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C064u) [[unlikely]] return; }
L_0049C064:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10042u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 10060u);
    set32(c.r[7], c.r[7].w[0] - 21072u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C090u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C090u) [[unlikely]] return; }
L_0049C090:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 10015u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 9998u);
    set32(c.r[7], c.r[7].w[0] - 20896u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C0BCu); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C0BCu) [[unlikely]] return; }
L_0049C0BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 9980u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 9954u);
    set32(c.r[7], c.r[7].w[0] - 21088u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C0E8u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C0E8u) [[unlikely]] return; }
L_0049C0E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 9935u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 9998u);
    set32(c.r[7], c.r[7].w[0] - 24688u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C114u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C114u) [[unlikely]] return; }
L_0049C114:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 9919u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 10569u);
    set32(c.r[7], c.r[7].w[0] - 24704u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C140u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C140u) [[unlikely]] return; }
L_0049C140:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 9894u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 10222u);
    set32(c.r[7], c.r[7].w[0] - 19760u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C16Cu); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C16Cu) [[unlikely]] return; }
L_0049C16C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 9877u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 10178u);
    set32(c.r[7], c.r[7].w[0] - 17600u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C198u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C198u) [[unlikely]] return; }
L_0049C198:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 9843u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 9821u);
    set32(c.r[7], c.r[7].w[0] - 27136u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C1C4u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C1C4u) [[unlikely]] return; }
L_0049C1C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 9802u);
    set32(c.r[5], c.r[5].w[0] - 10294u);
    set32(c.r[6], c.r[6].w[0] - 10794u);
    set32(c.r[7], c.r[7].w[0] - 27264u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C1F0u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C1F0u) [[unlikely]] return; }
L_0049C1F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 9768u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 10569u);
    set32(c.r[7], c.r[7].w[0] - 27680u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C21Cu); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C21Cu) [[unlikely]] return; }
L_0049C21C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 9742u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 9726u);
    set32(c.r[7], c.r[7].w[0] - 27792u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C248u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C248u) [[unlikely]] return; }
L_0049C248:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 9707u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 9685u);
    set32(c.r[7], c.r[7].w[0] - 27280u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C274u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C274u) [[unlikely]] return; }
L_0049C274:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 9651u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 9685u);
    set32(c.r[7], c.r[7].w[0] - 27296u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C2A0u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C2A0u) [[unlikely]] return; }
L_0049C2A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 9628u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 9612u);
    set32(c.r[7], c.r[7].w[0] - 27312u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C2CCu); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C2CCu) [[unlikely]] return; }
L_0049C2CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 9584u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 9612u);
    set32(c.r[7], c.r[7].w[0] - 27328u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C2F8u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C2F8u) [[unlikely]] return; }
L_0049C2F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 9569u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 10794u);
    set32(c.r[7], c.r[7].w[0] - 27344u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C324u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C324u) [[unlikely]] return; }
L_0049C324:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], c.r[6].w[0] - 10921u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[4], c.r[4].w[0] - 9544u);
    set32(c.r[5], c.r[5].w[0] - 10794u);
    set32(c.r[7], c.r[7].w[0] - 22416u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C34Cu); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C34Cu) [[unlikely]] return; }
L_0049C34C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 9525u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 10788u);
    set32(c.r[7], c.r[7].w[0] - 22384u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C378u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C378u) [[unlikely]] return; }
L_0049C378:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 9506u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 10788u);
    set32(c.r[7], c.r[7].w[0] - 22480u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C3A4u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C3A4u) [[unlikely]] return; }
L_0049C3A4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 9493u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] - 22496u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C3CCu); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C3CCu) [[unlikely]] return; }
L_0049C3CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 9481u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 10788u);
    set32(c.r[7], c.r[7].w[0] - 22560u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C3F8u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C3F8u) [[unlikely]] return; }
L_0049C3F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 9458u);
    set32(c.r[5], c.r[5].w[0] - 10706u);
    set32(c.r[6], c.r[6].w[0] - 10569u);
    set32(c.r[7], c.r[7].w[0] - 23040u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C424u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C424u) [[unlikely]] return; }
L_0049C424:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 9443u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 10569u);
    set32(c.r[7], c.r[7].w[0] - 23616u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C450u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C450u) [[unlikely]] return; }
L_0049C450:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 9428u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 9408u);
    set32(c.r[7], c.r[7].w[0] - 21856u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C47Cu); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C47Cu) [[unlikely]] return; }
L_0049C47C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 9395u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 9373u);
    set32(c.r[7], c.r[7].w[0] - 21840u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C4A8u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C4A8u) [[unlikely]] return; }
L_0049C4A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 9360u);
    set32(c.r[5], c.r[5].w[0] - 9332u);
    set32(c.r[6], c.r[6].w[0] - 9328u);
    set32(c.r[7], c.r[7].w[0] - 22320u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C4D4u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C4D4u) [[unlikely]] return; }
L_0049C4D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 9317u);
    set32(c.r[5], c.r[5].w[0] - 9332u);
    set32(c.r[6], c.r[6].w[0] - 10794u);
    set32(c.r[7], c.r[7].w[0] - 23136u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C500u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C500u) [[unlikely]] return; }
L_0049C500:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[5].w[0] - 10794u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 9293u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] - 23200u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C528u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C528u) [[unlikely]] return; }
L_0049C528:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 9266u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 10794u);
    set32(c.r[7], c.r[7].w[0] - 23280u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C554u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C554u) [[unlikely]] return; }
L_0049C554:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 9246u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 10794u);
    set32(c.r[7], c.r[7].w[0] - 23360u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C580u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C580u) [[unlikely]] return; }
L_0049C580:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 9222u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 10788u);
    set32(c.r[7], c.r[7].w[0] - 22768u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C5ACu); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C5ACu) [[unlikely]] return; }
L_0049C5AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 9197u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 10788u);
    set32(c.r[7], c.r[7].w[0] - 22976u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C5D8u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C5D8u) [[unlikely]] return; }
L_0049C5D8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], c.r[6].w[0] - 10921u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[4], c.r[4].w[0] - 9174u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[7], c.r[7].w[0] - 26144u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C600u); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C600u) [[unlikely]] return; }
L_0049C600:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 9147u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 9408u);
    set32(c.r[7], c.r[7].w[0] - 21872u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C62Cu); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C62Cu) [[unlikely]] return; }
L_0049C62C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 9129u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 9111u);
    set32(c.r[7], c.r[7].w[0] - 26400u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C658u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C658u) [[unlikely]] return; }
L_0049C658:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 9094u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 9111u);
    set32(c.r[7], c.r[7].w[0] - 26656u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C684u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C684u) [[unlikely]] return; }
L_0049C684:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 9075u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 10788u);
    set32(c.r[7], c.r[7].w[0] - 27600u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C6B0u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C6B0u) [[unlikely]] return; }
L_0049C6B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 9053u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 10788u);
    set32(c.r[7], c.r[7].w[0] - 28032u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C6DCu); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C6DCu) [[unlikely]] return; }
L_0049C6DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 9022u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 10706u);
    set32(c.r[7], c.r[7].w[0] - 28288u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C708u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C708u) [[unlikely]] return; }
L_0049C708:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 9007u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 8996u);
    set32(c.r[7], c.r[7].w[0] - 24816u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C734u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C734u) [[unlikely]] return; }
L_0049C734:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 8976u);
    set32(c.r[5], c.r[5].w[0] - 8965u);
    set32(c.r[6], c.r[6].w[0] - 10788u);
    set32(c.r[7], c.r[7].w[0] - 24832u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C760u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C760u) [[unlikely]] return; }
L_0049C760:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 8959u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 10788u);
    set32(c.r[7], c.r[7].w[0] - 24848u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C78Cu); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C78Cu) [[unlikely]] return; }
L_0049C78C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 8946u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 10788u);
    set32(c.r[7], c.r[7].w[0] - 24864u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C7B8u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C7B8u) [[unlikely]] return; }
L_0049C7B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 8932u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 10788u);
    set32(c.r[7], c.r[7].w[0] - 27616u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C7E4u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C7E4u) [[unlikely]] return; }
L_0049C7E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 8915u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 10788u);
    set32(c.r[7], c.r[7].w[0] - 27632u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C810u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C810u) [[unlikely]] return; }
L_0049C810:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 8899u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 9332u);
    set32(c.r[7], c.r[7].w[0] - 25008u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C83Cu); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C83Cu) [[unlikely]] return; }
L_0049C83C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 8875u);
    set32(c.r[5], c.r[5].w[0] - 10706u);
    set32(c.r[6], c.r[6].w[0] - 10788u);
    set32(c.r[7], c.r[7].w[0] - 25024u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C868u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C868u) [[unlikely]] return; }
L_0049C868:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 8862u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 9332u);
    set32(c.r[7], c.r[7].w[0] - 27648u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C894u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C894u) [[unlikely]] return; }
L_0049C894:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 8835u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 9332u);
    set32(c.r[7], c.r[7].w[0] - 27664u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C8C0u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C8C0u) [[unlikely]] return; }
L_0049C8C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 8805u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 10788u);
    set32(c.r[7], c.r[7].w[0] - 28432u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C8ECu); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C8ECu) [[unlikely]] return; }
L_0049C8EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 8787u);
    set32(c.r[5], c.r[5].w[0] - 10763u);
    set32(c.r[6], c.r[6].w[0] - 10794u);
    set32(c.r[7], c.r[7].w[0] - 28448u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C918u); set32(c.r[8], c.r[8].w[0] - 10921u);  if (depth < kMaxDepth) unit_0017(c, 96u, depth + 1u); else { c.pc = 0x0015CC60u; return; } if (c.pc != 0x0049C918u) [[unlikely]] return; }
L_0049C918:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0049C930:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0049C944; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0049C954; } }
L_0049C944:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C954u); set32(c.r[5], ld32((c.r[28].w[0] - 29836u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049C954u) [[unlikely]] return; }
L_0049C954:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0049C960:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0049C974; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0049C984; } }
L_0049C974:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049C984u); set32(c.r[5], ld32((c.r[28].w[0] - 30864u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049C984u) [[unlikely]] return; }
L_0049C984:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0049C990:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0049CA20; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 29296u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0049CA08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 21296u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0049CA08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 17744u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0049CA08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 21552u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0049CA08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0049CA08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049CA08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049CA08u) [[unlikely]] return; }
L_0049CA08:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0049CA24; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049CA20u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0049CA20u) [[unlikely]] return; }
L_0049CA20:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0049CA24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0049CA40:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_0049CA68; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 5u);  goto L_0049CA60; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_0049CA60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0049CA6C; } }
L_0049CA68:
    set32(c.r[2], c.r[2].w[0] - 8592u);
    c.budget -= 1;
L_0049CA6C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0049CA80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 8584u);  c.pc = t; return; }
L_0049CA90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0049CAA0:
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
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0049CB64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049CAD4u); set32(c.r[4], 0u + 324u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0049CAD4u) [[unlikely]] return; }
L_0049CAD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0049CB64; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049CAECu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_001C(c, 272u, depth + 1u); else { c.pc = 0x00173240u; return; } if (c.pc != 0x0049CAECu) [[unlikely]] return; }
L_0049CAEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 22912u);
    set32(c.r[3], c.r[3].w[0] - 29248u);
    st32((c.r[16].w[0] + 284u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 292u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 29224u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 29192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 29180u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 29156u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[16].w[0] + 132u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 29016u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049CB4Cu); st32((c.r[16].w[0] + 284u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 243u, depth + 1u); else { c.pc = 0x0013E740u; return; } if (c.pc != 0x0049CB4Cu) [[unlikely]] return; }
L_0049CB4C:
    set32(c.r[4], c.r[16].w[0] + 308u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049CB58u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 243u, depth + 1u); else { c.pc = 0x0013E740u; return; } if (c.pc != 0x0049CB58u) [[unlikely]] return; }
L_0049CB58:
    st8((c.r[16].w[0] + 288u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 289u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 290u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_0049CB64:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049CB78u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 86u, depth + 1u); else { c.pc = 0x00171280u; return; } if (c.pc != 0x0049CB78u) [[unlikely]] return; }
L_0049CB78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049CB80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E7(c, 73u, depth + 1u); else { c.pc = 0x0049CBA0u; return; } if (c.pc != 0x0049CB80u) [[unlikely]] return; }
L_0049CB80:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0049CBA0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 124u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049CBE4u); set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x0049CBE4u) [[unlikely]] return; }
L_0049CBE4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049CBF0u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x0049CBF0u) [[unlikely]] return; }
L_0049CBF0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 224u);  goto L_0049CC18; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049CC14; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049CC14u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x0049CC14u) [[unlikely]] return; }
L_0049CC14:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 1;
L_0049CC18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049CC20u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x0049CC20u) [[unlikely]] return; }
L_0049CC20:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049CC2Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0049CC2Cu) [[unlikely]] return; }
L_0049CC2C:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049CC40u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049CC40u) [[unlikely]] return; }
L_0049CC40:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.f[20] = c.f[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049CC54u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049CC54u) [[unlikely]] return; }
L_0049CC54:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.f[21] = fp::mul(c.f[20], c.f[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049CC68u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049CC68u) [[unlikely]] return; }
L_0049CC68:
    c.f[1] = fp::mul(c.f[20], c.f[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 180u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], 0u + 16u);
    st16((c.r[29].w[0] + 200u), static_cast<std::uint16_t>(0u));
    c.f[0] = c.r[5].w[0];
    st16((c.r[29].w[0] + 202u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[21]);
    st32((c.r[29].w[0] + 196u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 224u), c.f[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 19;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st32((c.r[29].w[0] + 228u), c.f[0]);  if (t) { goto L_0049CCC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049CCBCu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049CCBCu) [[unlikely]] return; }
L_0049CCBC:
    set32(c.r[2], c.r[29].w[0] + 180u);
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    c.budget -= 2;
L_0049CCC4:
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    c.f[0] = ld32((c.r[29].w[0] + 224u));
    set32(c.r[5], c.r[29].w[0] + 180u);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 228u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 232u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    set32(c.r[19], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[18], ld32((c.r[16].w[0] + 88u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 202u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[4], c.r[18].w[0] << 5);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 18;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[20], ld32((c.r[29].w[0] + 180u)));  goto L_0049CD3C; }
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049CD18u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0049CD18u) [[unlikely]] return; }
L_0049CD18:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[17].w[0] + 4u);  goto L_0049CD34; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049CD30u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049CD30u) [[unlikely]] return; }
L_0049CD30:
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_0049CD34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0049CD60; } }
L_0049CD3C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049CD48u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0049CD48u) [[unlikely]] return; }
L_0049CD48:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049CD5Cu); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0049CD5Cu) [[unlikely]] return; }
L_0049CD5C:
    st32((c.r[17].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 1;
L_0049CD60:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049CD74u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049CD74u) [[unlikely]] return; }
L_0049CD74:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 202u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 176u), c.r[3].w[0]);  if (t) { goto L_0049CDA4; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 196u)));
    set32(c.r[2], c.r[29].w[0] + 180u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0049CDA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049CDA4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049CDA4u) [[unlikely]] return; }
L_0049CDA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 148u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 168u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[2], 0u + 16u);
    st32((c.r[29].w[0] + 164u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 170u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0049CDD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049CDD0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049CDD0u) [[unlikely]] return; }
L_0049CDD0:
    set32(c.r[2], c.r[29].w[0] + 148u);
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 2;
L_0049CDD8:
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    c.f[0] = ld32((c.r[29].w[0] + 224u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 228u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 232u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049CE00u); st32((c.r[2].w[0] + 8u), c.f[0]);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0049CE00u) [[unlikely]] return; }
L_0049CE00:
    set32(c.r[19], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[5], c.r[29].w[0] + 148u);
    set32(c.r[18], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 170u)));
    set32(c.r[4], c.r[18].w[0] << 5);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 11;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[20], ld32((c.r[29].w[0] + 148u)));  goto L_0049CE5C; }
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049CE38u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0049CE38u) [[unlikely]] return; }
L_0049CE38:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[17].w[0] + 4u);  goto L_0049CE54; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049CE50u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049CE50u) [[unlikely]] return; }
L_0049CE50:
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_0049CE54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0049CE80; } }
L_0049CE5C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049CE68u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0049CE68u) [[unlikely]] return; }
L_0049CE68:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049CE7Cu); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0049CE7Cu) [[unlikely]] return; }
L_0049CE7C:
    st32((c.r[17].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 1;
L_0049CE80:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049CE94u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049CE94u) [[unlikely]] return; }
L_0049CE94:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 170u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 144u), c.r[3].w[0]);  if (t) { goto L_0049CEC4; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[2], c.r[29].w[0] + 148u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0049CEC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049CEC4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049CEC4u) [[unlikely]] return; }
L_0049CEC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 116u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 136u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[2], 0u + 16u);
    st32((c.r[29].w[0] + 132u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 138u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0049CEF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049CEF0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049CEF0u) [[unlikely]] return; }
L_0049CEF0:
    set32(c.r[2], c.r[29].w[0] + 116u);
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    c.budget -= 2;
L_0049CEF8:
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    c.f[0] = ld32((c.r[29].w[0] + 224u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 228u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 232u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049CF20u); st32((c.r[2].w[0] + 8u), c.f[0]);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0049CF20u) [[unlikely]] return; }
L_0049CF20:
    set32(c.r[18], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[5], c.r[29].w[0] + 116u);
    set32(c.r[17], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    set32(c.r[4], c.r[17].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 11;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[19], ld32((c.r[29].w[0] + 116u)));  goto L_0049CF7C; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049CF58u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0049CF58u) [[unlikely]] return; }
L_0049CF58:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_0049CF74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049CF70u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049CF70u) [[unlikely]] return; }
L_0049CF70:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_0049CF74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0049CFA0; } }
L_0049CF7C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049CF88u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0049CF88u) [[unlikely]] return; }
L_0049CF88:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049CF9Cu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0049CF9Cu) [[unlikely]] return; }
L_0049CF9C:
    st32((c.r[16].w[0] + 4u), c.r[19].w[0]);
    c.budget -= 1;
L_0049CFA0:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049CFB4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049CFB4u) [[unlikely]] return; }
L_0049CFB4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 26768u);
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 112u), c.r[4].w[0]);  if (t) { goto L_0049CFE4; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[3], c.r[29].w[0] + 116u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_0049CFE8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049CFE4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049CFE4u) [[unlikely]] return; }
L_0049CFE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0049CFE8:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_0049D010:
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 288u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 289u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { st8((c.r[4].w[0] + 290u), static_cast<std::uint8_t>(0u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0049CBA0u | kUnwind; return; } goto L_0049CBA0; }
L_0049D030:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D044u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E7(c, 177u, depth + 1u); else { c.pc = 0x0049D850u; return; } if (c.pc != 0x0049D044u) [[unlikely]] return; }
L_0049D044:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0049D050; } }
    set32(c.r[7], c.r[16].w[0] + 284u);
    c.budget -= 1;
L_0049D050:
    set32(c.r[2], ld32((c.r[16].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[16].w[0] + 293u);  goto L_0049D064; }
    set32(c.r[5], ld32((c.r[16].w[0] + 300u)));
    c.budget -= 1;
L_0049D064:
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.f[12] = ld32((c.r[28].w[0] - 32020u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D074u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00FC(c, 522u, depth + 1u); else { c.pc = 0x004F3D40u; return; } if (c.pc != 0x0049D074u) [[unlikely]] return; }
L_0049D074:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D07Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E7(c, 152u, depth + 1u); else { c.pc = 0x0049D540u; return; } if (c.pc != 0x0049D07Cu) [[unlikely]] return; }
L_0049D07C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D084u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E7(c, 116u, depth + 1u); else { c.pc = 0x0049D110u; return; } if (c.pc != 0x0049D084u) [[unlikely]] return; }
L_0049D084:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0049D0A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D0B4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E7(c, 177u, depth + 1u); else { c.pc = 0x0049D850u; return; } if (c.pc != 0x0049D0B4u) [[unlikely]] return; }
L_0049D0B4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0049D0C0; } }
    set32(c.r[7], c.r[16].w[0] + 284u);
    c.budget -= 1;
L_0049D0C0:
    set32(c.r[2], ld32((c.r[16].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[16].w[0] + 293u);  goto L_0049D0D4; }
    set32(c.r[5], ld32((c.r[16].w[0] + 300u)));
    c.budget -= 1;
L_0049D0D4:
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.f[12] = ld32((c.r[28].w[0] - 32020u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D0E4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00FC(c, 522u, depth + 1u); else { c.pc = 0x004F3D40u; return; } if (c.pc != 0x0049D0E4u) [[unlikely]] return; }
L_0049D0E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D0ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E7(c, 127u, depth + 1u); else { c.pc = 0x0049D210u; return; } if (c.pc != 0x0049D0ECu) [[unlikely]] return; }
L_0049D0EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D0F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E7(c, 116u, depth + 1u); else { c.pc = 0x0049D110u; return; } if (c.pc != 0x0049D0F4u) [[unlikely]] return; }
L_0049D0F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0049D110:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D12Cu); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0049D12Cu) [[unlikely]] return; }
L_0049D12C:
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D148u); set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x0049D148u) [[unlikely]] return; }
L_0049D148:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D154u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x0049D154u) [[unlikely]] return; }
L_0049D154:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 112u);  goto L_0049D17C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049D178; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D178u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x0049D178u) [[unlikely]] return; }
L_0049D178:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_0049D17C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D184u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x0049D184u) [[unlikely]] return; }
L_0049D184:
    c.f[0] = ld32((c.r[29].w[0] + 112u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 104u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D1A0u); st32((c.r[29].w[0] + 96u), c.f[0]);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0049D1A0u) [[unlikely]] return; }
L_0049D1A0:
    c.f[12] = ld32((c.r[28].w[0] - 32020u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D1B8u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_00E2(c, 216u, depth + 1u); else { c.pc = 0x00489E00u; return; } if (c.pc != 0x0049D1B8u) [[unlikely]] return; }
L_0049D1B8:
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    set32(c.r[5], 0u + 2u);
    st32((c.r[29].w[0] + 80u), 0u);
    st32((c.r[29].w[0] + 84u), c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D1D8u); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0049D1D8u) [[unlikely]] return; }
L_0049D1D8:
    c.f[12] = ld32((c.r[28].w[0] - 32020u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D1F0u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_00E2(c, 202u, depth + 1u); else { c.pc = 0x00489CC0u; return; } if (c.pc != 0x0049D1F0u) [[unlikely]] return; }
L_0049D1F0:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D1FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049D1FCu) [[unlikely]] return; }
L_0049D1FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0049D210:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D244u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0049D244u) [[unlikely]] return; }
L_0049D244:
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D260u); set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x0049D260u) [[unlikely]] return; }
L_0049D260:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D26Cu); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x0049D26Cu) [[unlikely]] return; }
L_0049D26C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 224u);  goto L_0049D294; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049D290; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D290u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x0049D290u) [[unlikely]] return; }
L_0049D290:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 1;
L_0049D294:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D29Cu); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x0049D29Cu) [[unlikely]] return; }
L_0049D29C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 148u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 168u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    c.f[20] = ld32((c.r[29].w[0] + 224u));
    set32(c.r[2], 0u + 16u);
    st32((c.r[29].w[0] + 164u), c.r[4].w[0]);
    c.f[21] = ld32((c.r[29].w[0] + 228u));
    c.f[22] = ld32((c.r[29].w[0] + 232u));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 170u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0049D2DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D2D4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049D2D4u) [[unlikely]] return; }
L_0049D2D4:
    set32(c.r[2], c.r[29].w[0] + 148u);
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 2;
L_0049D2DC:
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0]), c.f[20]);
    st32((c.r[2].w[0] + 4u), c.f[21]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D2F8u); st32((c.r[2].w[0] + 8u), c.f[22]);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0049D2F8u) [[unlikely]] return; }
L_0049D2F8:
    set32(c.r[19], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[5], c.r[29].w[0] + 148u);
    set32(c.r[18], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 170u)));
    set32(c.r[4], c.r[18].w[0] << 5);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 11;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[20], ld32((c.r[29].w[0] + 148u)));  goto L_0049D354; }
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D330u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0049D330u) [[unlikely]] return; }
L_0049D330:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[17].w[0] + 4u);  goto L_0049D34C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D348u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049D348u) [[unlikely]] return; }
L_0049D348:
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_0049D34C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0049D378; } }
L_0049D354:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D360u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0049D360u) [[unlikely]] return; }
L_0049D360:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D374u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0049D374u) [[unlikely]] return; }
L_0049D374:
    st32((c.r[17].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 1;
L_0049D378:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D38Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049D38Cu) [[unlikely]] return; }
L_0049D38C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 170u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 144u), c.r[3].w[0]);  if (t) { goto L_0049D3BC; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[2], c.r[29].w[0] + 148u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0049D3BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D3BCu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049D3BCu) [[unlikely]] return; }
L_0049D3BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 116u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 136u), static_cast<std::uint16_t>(0u));
    c.f[0] = ld32((c.r[29].w[0] + 224u));
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[2], 0u + 16u);
    st32((c.r[29].w[0] + 132u), c.r[4].w[0]);
    st16((c.r[29].w[0] + 138u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; c.f[20] = c.f[0] ^ fp::kSign;  if (t) { goto L_0049D3F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D3F0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049D3F0u) [[unlikely]] return; }
L_0049D3F0:
    set32(c.r[2], c.r[29].w[0] + 116u);
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    c.budget -= 2;
L_0049D3F8:
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0]), c.f[20]);
    st32((c.r[2].w[0] + 4u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D414u); st32((c.r[2].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0049D414u) [[unlikely]] return; }
L_0049D414:
    set32(c.r[19], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[5], c.r[29].w[0] + 116u);
    set32(c.r[18], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    set32(c.r[4], c.r[18].w[0] << 5);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 11;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[20], ld32((c.r[29].w[0] + 116u)));  goto L_0049D470; }
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D44Cu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0049D44Cu) [[unlikely]] return; }
L_0049D44C:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[17].w[0] + 4u);  goto L_0049D468; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D464u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049D464u) [[unlikely]] return; }
L_0049D464:
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_0049D468:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0049D494; } }
L_0049D470:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D47Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0049D47Cu) [[unlikely]] return; }
L_0049D47C:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D490u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0049D490u) [[unlikely]] return; }
L_0049D490:
    st32((c.r[17].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 1;
L_0049D494:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D4A8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049D4A8u) [[unlikely]] return; }
L_0049D4A8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 112u), c.r[3].w[0]);  if (t) { goto L_0049D4D8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[2], c.r[29].w[0] + 116u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0049D4DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D4D8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049D4D8u) [[unlikely]] return; }
L_0049D4D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0049D4DC:
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 208u), 0u);
    st32((c.r[29].w[0] + 212u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D4F0u); st32((c.r[29].w[0] + 216u), 0u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0049D4F0u) [[unlikely]] return; }
L_0049D4F0:
    c.f[12] = ld32((c.r[28].w[0] - 32020u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.f[13] = 0u;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D508u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 216u, depth + 1u); else { c.pc = 0x00489E00u; return; } if (c.pc != 0x0049D508u) [[unlikely]] return; }
L_0049D508:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D514u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049D514u) [[unlikely]] return; }
L_0049D514:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_0049D540:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D570u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0049D570u) [[unlikely]] return; }
L_0049D570:
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D58Cu); set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x0049D58Cu) [[unlikely]] return; }
L_0049D58C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D598u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x0049D598u) [[unlikely]] return; }
L_0049D598:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 208u);  goto L_0049D5C0; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049D5BC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D5BCu); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x0049D5BCu) [[unlikely]] return; }
L_0049D5BC:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 1;
L_0049D5C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D5C8u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x0049D5C8u) [[unlikely]] return; }
L_0049D5C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 148u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 168u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    c.f[20] = ld32((c.r[29].w[0] + 212u));
    set32(c.r[2], 0u + 16u);
    st32((c.r[29].w[0] + 164u), c.r[4].w[0]);
    c.f[21] = ld32((c.r[29].w[0] + 216u));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 170u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0049D604; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D5FCu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049D5FCu) [[unlikely]] return; }
L_0049D5FC:
    set32(c.r[2], c.r[29].w[0] + 148u);
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 2;
L_0049D604:
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), c.f[20]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D620u); st32((c.r[2].w[0] + 8u), c.f[21]);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0049D620u) [[unlikely]] return; }
L_0049D620:
    set32(c.r[19], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[5], c.r[29].w[0] + 148u);
    set32(c.r[18], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 170u)));
    set32(c.r[4], c.r[18].w[0] << 5);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 11;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[20], ld32((c.r[29].w[0] + 148u)));  goto L_0049D67C; }
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D658u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0049D658u) [[unlikely]] return; }
L_0049D658:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[17].w[0] + 4u);  goto L_0049D674; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D670u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049D670u) [[unlikely]] return; }
L_0049D670:
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_0049D674:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0049D6A0; } }
L_0049D67C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D688u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0049D688u) [[unlikely]] return; }
L_0049D688:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D69Cu); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0049D69Cu) [[unlikely]] return; }
L_0049D69C:
    st32((c.r[17].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 1;
L_0049D6A0:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D6B4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049D6B4u) [[unlikely]] return; }
L_0049D6B4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 170u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 144u), c.r[3].w[0]);  if (t) { goto L_0049D6E4; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[2], c.r[29].w[0] + 148u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0049D6E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D6E4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049D6E4u) [[unlikely]] return; }
L_0049D6E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 116u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 136u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[2], 0u + 16u);
    st32((c.r[29].w[0] + 132u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 138u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0049D718; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D710u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049D710u) [[unlikely]] return; }
L_0049D710:
    set32(c.r[2], c.r[29].w[0] + 116u);
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    c.budget -= 2;
L_0049D718:
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D734u); st32((c.r[2].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0049D734u) [[unlikely]] return; }
L_0049D734:
    set32(c.r[19], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[5], c.r[29].w[0] + 116u);
    set32(c.r[18], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    set32(c.r[4], c.r[18].w[0] << 5);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 11;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[20], ld32((c.r[29].w[0] + 116u)));  goto L_0049D790; }
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D76Cu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0049D76Cu) [[unlikely]] return; }
L_0049D76C:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[17].w[0] + 4u);  goto L_0049D788; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D784u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049D784u) [[unlikely]] return; }
L_0049D784:
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_0049D788:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0049D7B4; } }
L_0049D790:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D79Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0049D79Cu) [[unlikely]] return; }
L_0049D79C:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D7B0u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0049D7B0u) [[unlikely]] return; }
L_0049D7B0:
    st32((c.r[17].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 1;
L_0049D7B4:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D7C8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049D7C8u) [[unlikely]] return; }
L_0049D7C8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 112u), c.r[3].w[0]);  if (t) { goto L_0049D7F8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[2], c.r[29].w[0] + 116u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0049D7FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D7F8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049D7F8u) [[unlikely]] return; }
L_0049D7F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0049D7FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D804u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0049D804u) [[unlikely]] return; }
L_0049D804:
    c.f[12] = ld32((c.r[28].w[0] - 32020u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.f[13] = 0u;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D81Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 202u, depth + 1u); else { c.pc = 0x00489CC0u; return; } if (c.pc != 0x0049D81Cu) [[unlikely]] return; }
L_0049D81C:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D828u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049D828u) [[unlikely]] return; }
L_0049D828:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_0049D850:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 124u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D898u); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x0049D898u) [[unlikely]] return; }
L_0049D898:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D8A4u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x0049D8A4u) [[unlikely]] return; }
L_0049D8A4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 224u);  goto L_0049D8CC; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049D8C8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D8C8u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x0049D8C8u) [[unlikely]] return; }
L_0049D8C8:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 1;
L_0049D8CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D8D4u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x0049D8D4u) [[unlikely]] return; }
L_0049D8D4:
    set32(c.r[2], ld32((c.r[19].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[19].w[0] + 293u);  goto L_0049D8E8; }
    set32(c.r[5], ld32((c.r[19].w[0] + 300u)));
    c.budget -= 1;
L_0049D8E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D8F0u); set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  if (depth < kMaxDepth) unit_00FC(c, 512u, depth + 1u); else { c.pc = 0x004F3C60u; return; } if (c.pc != 0x0049D8F0u) [[unlikely]] return; }
L_0049D8F0:
    set32(c.r[2], ld32((c.r[19].w[0] + 308u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[19].w[0] + 309u);  goto L_0049D904; }
    set32(c.r[5], ld32((c.r[19].w[0] + 316u)));
    c.budget -= 1;
L_0049D904:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D90Cu); set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  if (depth < kMaxDepth) unit_00FC(c, 512u, depth + 1u); else { c.pc = 0x004F3C60u; return; } if (c.pc != 0x0049D90Cu) [[unlikely]] return; }
L_0049D90C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D918u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0049D918u) [[unlikely]] return; }
L_0049D918:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[2], ld32((c.r[28].w[0] - 28808u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D930u); set32(c.r[5], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0011(c, 200u, depth + 1u); else { c.pc = 0x00145AB0u; return; } if (c.pc != 0x0049D930u) [[unlikely]] return; }
L_0049D930:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 128u);  if (t) { goto L_0049D9A0; } }
L_0049D938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D940u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0028(c, 168u, depth + 1u); else { c.pc = 0x001A2AA0u; return; } if (c.pc != 0x0049D940u) [[unlikely]] return; }
L_0049D940:
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D954u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049D954u) [[unlikely]] return; }
L_0049D954:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 128u);  goto L_0049D994; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D964u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0028(c, 168u, depth + 1u); else { c.pc = 0x001A2AA0u; return; } if (c.pc != 0x0049D964u) [[unlikely]] return; }
L_0049D964:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 4u);  goto L_0049D984; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D980u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049D980u) [[unlikely]] return; }
L_0049D980:
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_0049D984:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D98Cu); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0028(c, 167u, depth + 1u); else { c.pc = 0x001A29C0u; return; } if (c.pc != 0x0049D98Cu) [[unlikely]] return; }
L_0049D98C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0049D99C; } }
L_0049D994:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D99Cu);  if (depth < kMaxDepth) unit_0028(c, 166u, depth + 1u); else { c.pc = 0x001A2920u; return; } if (c.pc != 0x0049D99Cu) [[unlikely]] return; }
L_0049D99C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_0049D9A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D9A8u);  if (depth < kMaxDepth) unit_0028(c, 165u, depth + 1u); else { c.pc = 0x001A2900u; return; } if (c.pc != 0x0049D9A8u) [[unlikely]] return; }
L_0049D9A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049D938u | kUnwind; return; } goto L_0049D938; } }
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D9BCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0011(c, 198u, depth + 1u); else { c.pc = 0x00145A60u; return; } if (c.pc != 0x0049D9BCu) [[unlikely]] return; }
L_0049D9BC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D9C8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0049D9C8u) [[unlikely]] return; }
L_0049D9C8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], ld32((c.r[28].w[0] - 28808u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D9E0u); set32(c.r[5], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0011(c, 200u, depth + 1u); else { c.pc = 0x00145AB0u; return; } if (c.pc != 0x0049D9E0u) [[unlikely]] return; }
L_0049D9E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 112u);  if (t) { goto L_0049DA50; } }
L_0049D9E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049D9F0u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0028(c, 168u, depth + 1u); else { c.pc = 0x001A2AA0u; return; } if (c.pc != 0x0049D9F0u) [[unlikely]] return; }
L_0049D9F0:
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DA04u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049DA04u) [[unlikely]] return; }
L_0049DA04:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 112u);  goto L_0049DA44; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DA14u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0028(c, 168u, depth + 1u); else { c.pc = 0x001A2AA0u; return; } if (c.pc != 0x0049DA14u) [[unlikely]] return; }
L_0049DA14:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 4u);  goto L_0049DA34; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DA30u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049DA30u) [[unlikely]] return; }
L_0049DA30:
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_0049DA34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DA3Cu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0028(c, 167u, depth + 1u); else { c.pc = 0x001A29C0u; return; } if (c.pc != 0x0049DA3Cu) [[unlikely]] return; }
L_0049DA3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0049DA4C; } }
L_0049DA44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DA4Cu);  if (depth < kMaxDepth) unit_0028(c, 166u, depth + 1u); else { c.pc = 0x001A2920u; return; } if (c.pc != 0x0049DA4Cu) [[unlikely]] return; }
L_0049DA4C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_0049DA50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DA58u);  if (depth < kMaxDepth) unit_0028(c, 165u, depth + 1u); else { c.pc = 0x001A2900u; return; } if (c.pc != 0x0049DA58u) [[unlikely]] return; }
L_0049DA58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049D9E8u | kUnwind; return; } goto L_0049D9E8; } }
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DA6Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0011(c, 198u, depth + 1u); else { c.pc = 0x00145A60u; return; } if (c.pc != 0x0049DA6Cu) [[unlikely]] return; }
L_0049DA6C:
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[19].w[0] + 288u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] - 26768u);
    st8((c.r[19].w[0] + 289u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[29].w[0] + 180u);
    st8((c.r[19].w[0] + 290u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 16u);
    c.f[20] = ld32((c.r[29].w[0] + 224u));
    st32((c.r[29].w[0] + 176u), c.r[3].w[0]);
    c.f[21] = ld32((c.r[29].w[0] + 228u));
    st16((c.r[29].w[0] + 202u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[22] = ld32((c.r[29].w[0] + 232u));
    st16((c.r[29].w[0] + 200u), static_cast<std::uint16_t>(0u));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st32((c.r[29].w[0] + 196u), c.r[4].w[0]);  if (t) { goto L_0049DABC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DAB4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049DAB4u) [[unlikely]] return; }
L_0049DAB4:
    set32(c.r[2], c.r[29].w[0] + 180u);
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    c.budget -= 2;
L_0049DABC:
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    st32((c.r[2].w[0]), c.f[20]);
    st32((c.r[2].w[0] + 4u), c.f[21]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DAD8u); st32((c.r[2].w[0] + 8u), c.f[22]);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0049DAD8u) [[unlikely]] return; }
L_0049DAD8:
    set32(c.r[18], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[5], c.r[29].w[0] + 180u);
    set32(c.r[17], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 202u)));
    set32(c.r[4], c.r[17].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 11;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[20], ld32((c.r[29].w[0] + 180u)));  goto L_0049DB34; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DB10u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0049DB10u) [[unlikely]] return; }
L_0049DB10:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_0049DB2C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DB28u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049DB28u) [[unlikely]] return; }
L_0049DB28:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_0049DB2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0049DB58; } }
L_0049DB34:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DB40u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0049DB40u) [[unlikely]] return; }
L_0049DB40:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DB54u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0049DB54u) [[unlikely]] return; }
L_0049DB54:
    st32((c.r[16].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 1;
L_0049DB58:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DB6Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049DB6Cu) [[unlikely]] return; }
L_0049DB6C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 202u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 176u), c.r[3].w[0]);  if (t) { goto L_0049DB9C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 196u)));
    set32(c.r[2], c.r[29].w[0] + 180u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0049DB9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DB9Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049DB9Cu) [[unlikely]] return; }
L_0049DB9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 148u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 168u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[2], 0u + 16u);
    st32((c.r[29].w[0] + 164u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 170u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0049DBD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DBC8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049DBC8u) [[unlikely]] return; }
L_0049DBC8:
    set32(c.r[2], c.r[29].w[0] + 148u);
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 2;
L_0049DBD0:
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DBECu); st32((c.r[2].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0049DBECu) [[unlikely]] return; }
L_0049DBEC:
    set32(c.r[18], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[5], c.r[29].w[0] + 148u);
    set32(c.r[17], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 170u)));
    set32(c.r[4], c.r[17].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 11;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[19], ld32((c.r[29].w[0] + 148u)));  goto L_0049DC48; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DC24u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0049DC24u) [[unlikely]] return; }
L_0049DC24:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_0049DC40; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DC3Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049DC3Cu) [[unlikely]] return; }
L_0049DC3C:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_0049DC40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0049DC6C; } }
L_0049DC48:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DC54u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0049DC54u) [[unlikely]] return; }
L_0049DC54:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DC68u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0049DC68u) [[unlikely]] return; }
L_0049DC68:
    st32((c.r[16].w[0] + 4u), c.r[19].w[0]);
    c.budget -= 1;
L_0049DC6C:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DC80u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049DC80u) [[unlikely]] return; }
L_0049DC80:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 170u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 26768u);
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 144u), c.r[4].w[0]);  if (t) { goto L_0049DCB0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[3], c.r[29].w[0] + 148u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_0049DCB4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DCB0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049DCB0u) [[unlikely]] return; }
L_0049DCB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0049DCB4:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_0049DCE0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 292u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0049DD0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 300u)));  if (t) { goto L_0049DD10; } }
L_0049DD0C:
    set32(c.r[5], c.r[16].w[0] + 293u);
    c.budget -= 1;
L_0049DD10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DD18u); set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  if (depth < kMaxDepth) unit_00FC(c, 512u, depth + 1u); else { c.pc = 0x004F3C60u; return; } if (c.pc != 0x0049DD18u) [[unlikely]] return; }
L_0049DD18:
    set32(c.r[2], ld32((c.r[16].w[0] + 308u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[16].w[0] + 309u);  goto L_0049DD2C; }
    set32(c.r[5], ld32((c.r[16].w[0] + 316u)));
    c.budget -= 1;
L_0049DD2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DD34u); set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  if (depth < kMaxDepth) unit_00FC(c, 512u, depth + 1u); else { c.pc = 0x004F3C60u; return; } if (c.pc != 0x0049DD34u) [[unlikely]] return; }
L_0049DD34:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DD40u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0049DD40u) [[unlikely]] return; }
L_0049DD40:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[2], ld32((c.r[28].w[0] - 28808u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DD58u); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0011(c, 200u, depth + 1u); else { c.pc = 0x00145AB0u; return; } if (c.pc != 0x0049DD58u) [[unlikely]] return; }
L_0049DD58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 80u);  if (t) { goto L_0049DDC8; } }
L_0049DD60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DD68u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0028(c, 168u, depth + 1u); else { c.pc = 0x001A2AA0u; return; } if (c.pc != 0x0049DD68u) [[unlikely]] return; }
L_0049DD68:
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DD7Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049DD7Cu) [[unlikely]] return; }
L_0049DD7C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_0049DDBC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DD8Cu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0028(c, 168u, depth + 1u); else { c.pc = 0x001A2AA0u; return; } if (c.pc != 0x0049DD8Cu) [[unlikely]] return; }
L_0049DD8C:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 4u);  goto L_0049DDAC; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DDA8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049DDA8u) [[unlikely]] return; }
L_0049DDA8:
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_0049DDAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DDB4u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0028(c, 167u, depth + 1u); else { c.pc = 0x001A29C0u; return; } if (c.pc != 0x0049DDB4u) [[unlikely]] return; }
L_0049DDB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0049DDC4; } }
L_0049DDBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DDC4u);  if (depth < kMaxDepth) unit_0028(c, 166u, depth + 1u); else { c.pc = 0x001A2920u; return; } if (c.pc != 0x0049DDC4u) [[unlikely]] return; }
L_0049DDC4:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_0049DDC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DDD0u);  if (depth < kMaxDepth) unit_0028(c, 165u, depth + 1u); else { c.pc = 0x001A2900u; return; } if (c.pc != 0x0049DDD0u) [[unlikely]] return; }
L_0049DDD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049DD60u | kUnwind; return; } goto L_0049DD60; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DDE4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0011(c, 198u, depth + 1u); else { c.pc = 0x00145A60u; return; } if (c.pc != 0x0049DDE4u) [[unlikely]] return; }
L_0049DDE4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DDF0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0049DDF0u) [[unlikely]] return; }
L_0049DDF0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[2], ld32((c.r[28].w[0] - 28808u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DE08u); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_0011(c, 200u, depth + 1u); else { c.pc = 0x00145AB0u; return; } if (c.pc != 0x0049DE08u) [[unlikely]] return; }
L_0049DE08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 64u);  if (t) { goto L_0049DE78; } }
L_0049DE10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DE18u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0028(c, 168u, depth + 1u); else { c.pc = 0x001A2AA0u; return; } if (c.pc != 0x0049DE18u) [[unlikely]] return; }
L_0049DE18:
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DE2Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049DE2Cu) [[unlikely]] return; }
L_0049DE2C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 64u);  goto L_0049DE6C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DE3Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0028(c, 168u, depth + 1u); else { c.pc = 0x001A2AA0u; return; } if (c.pc != 0x0049DE3Cu) [[unlikely]] return; }
L_0049DE3C:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 4u);  goto L_0049DE5C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DE58u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049DE58u) [[unlikely]] return; }
L_0049DE58:
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_0049DE5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DE64u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0028(c, 167u, depth + 1u); else { c.pc = 0x001A29C0u; return; } if (c.pc != 0x0049DE64u) [[unlikely]] return; }
L_0049DE64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0049DE74; } }
L_0049DE6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DE74u);  if (depth < kMaxDepth) unit_0028(c, 166u, depth + 1u); else { c.pc = 0x001A2920u; return; } if (c.pc != 0x0049DE74u) [[unlikely]] return; }
L_0049DE74:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 1;
L_0049DE78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DE80u);  if (depth < kMaxDepth) unit_0028(c, 165u, depth + 1u); else { c.pc = 0x001A2900u; return; } if (c.pc != 0x0049DE80u) [[unlikely]] return; }
L_0049DE80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0049DE10u | kUnwind; return; } goto L_0049DE10; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DE94u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0011(c, 198u, depth + 1u); else { c.pc = 0x00145A60u; return; } if (c.pc != 0x0049DE94u) [[unlikely]] return; }
L_0049DE94:
    st8((c.r[16].w[0] + 288u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 289u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 290u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0049DEC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DEE0u); set32(c.r[4], c.r[17].w[0] + 292u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0049DEE0u) [[unlikely]] return; }
L_0049DEE0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_0049DEF8; }
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 289u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 290u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0049DF10; } }
L_0049DEF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DF00u); set32(c.r[4], c.r[17].w[0] + 308u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0049DF00u) [[unlikely]] return; }
L_0049DF00:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0049DF14; }
    st8((c.r[17].w[0] + 289u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 290u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0049DF10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0049DF14:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0049DF30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 192u));
    set32(c.r[16], ld32((c.r[4].w[0] + 272u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0049DFC8; } }
    c.budget -= 2;
    if (c.r[16].sd[0] <= 0) { set32(c.r[2], 0u + 1u);  goto L_0049DFCC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0049DFBC; } }
L_0049DF68:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 288u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0049DFBC; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DF80u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0049DF80u) [[unlikely]] return; }
L_0049DF80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0049DFB8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DF94u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0049DF94u) [[unlikely]] return; }
L_0049DF94:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049DFA4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049DFA4u) [[unlikely]] return; }
L_0049DFA4:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0049DFB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0049DFCC; } }
L_0049DFB8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0049DFBC:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[18].w[0] + c.r[17].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0049DF68u | kUnwind; return; } goto L_0049DF68; }
L_0049DFC8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0049DFCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0049DFF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] - 8560u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E014u); set32(c.r[5], c.r[16].w[0] + 56u);  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104500u; return; } if (c.pc != 0x0049E014u) [[unlikely]] return; }
L_0049E014:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 49u);  goto L_0049E028; }
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_0049E028:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E030u); set32(c.r[4], c.r[16].w[0] + 292u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0049E030u) [[unlikely]] return; }
L_0049E030:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E03Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049E03Cu) [[unlikely]] return; }
L_0049E03C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[16].w[0] + 56u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E050u); set32(c.r[6], c.r[6].w[0] - 8546u);  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104500u; return; } if (c.pc != 0x0049E050u) [[unlikely]] return; }
L_0049E050:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 33u);  goto L_0049E064; }
    set32(c.r[5], ld32((c.r[29].w[0] + 40u)));
    c.budget -= 1;
L_0049E064:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E06Cu); set32(c.r[4], c.r[16].w[0] + 308u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0049E06Cu) [[unlikely]] return; }
L_0049E06C:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E078u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049E078u) [[unlikely]] return; }
L_0049E078:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0049E090:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0049E16C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 29248u);
    set32(c.r[2], c.r[2].w[0] - 29224u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 29192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 29180u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 29156u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 29016u);
    st32((c.r[17].w[0] + 132u), c.r[3].w[0]);
    c.budget -= 20;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 284u), c.r[2].w[0]);  if (t) { goto L_0049E100; } }
    set32(c.r[5], c.r[5].w[0] + 284u);
    c.budget -= 1;
L_0049E100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E108u); set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  if (depth < kMaxDepth) unit_00FC(c, 507u, depth + 1u); else { c.pc = 0x004F3BE0u; return; } if (c.pc != 0x0049E108u) [[unlikely]] return; }
L_0049E108:
    set32(c.r[4], c.r[17].w[0] + 308u);
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 292u);  goto L_0049E120; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E11Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049E11Cu) [[unlikely]] return; }
L_0049E11C:
    set32(c.r[4], c.r[17].w[0] + 292u);
    c.budget -= 1;
L_0049E120:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 284u);  goto L_0049E134; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E130u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049E130u) [[unlikely]] return; }
L_0049E130:
    set32(c.r[2], c.r[17].w[0] + 284u);
    c.budget -= 1;
L_0049E134:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0049E14C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 22912u);
    st32((c.r[17].w[0] + 284u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
L_0049E14C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E154u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_001C(c, 269u, depth + 1u); else { c.pc = 0x00173190u; return; } if (c.pc != 0x0049E154u) [[unlikely]] return; }
L_0049E154:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0049E170; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E16Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0049E16Cu) [[unlikely]] return; }
L_0049E16C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0049E170:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0049E190:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E1ACu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 272u, depth + 1u); else { c.pc = 0x00173240u; return; } if (c.pc != 0x0049E1ACu) [[unlikely]] return; }
L_0049E1AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 22912u);
    set32(c.r[3], c.r[3].w[0] - 29248u);
    st32((c.r[17].w[0] + 284u), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 292u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 29224u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 29192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 29180u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 29156u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 132u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 29016u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E20Cu); st32((c.r[17].w[0] + 284u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 243u, depth + 1u); else { c.pc = 0x0013E740u; return; } if (c.pc != 0x0049E20Cu) [[unlikely]] return; }
L_0049E20C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E218u); set32(c.r[4], c.r[17].w[0] + 308u);  if (depth < kMaxDepth) unit_000F(c, 243u, depth + 1u); else { c.pc = 0x0013E740u; return; } if (c.pc != 0x0049E218u) [[unlikely]] return; }
L_0049E218:
    st8((c.r[17].w[0] + 288u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[17].w[0] + 289u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 290u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0049E240:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29656u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0049E25C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0049E26C; } }
L_0049E25C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E264u);  if (depth < kMaxDepth) unit_001C(c, 274u, depth + 1u); else { c.pc = 0x001732E0u; return; } if (c.pc != 0x0049E264u) [[unlikely]] return; }
L_0049E264:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0049E26C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0049E280:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E2A4u); set32(c.r[4], c.r[4].w[0] - 8624u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0049E2A4u) [[unlikely]] return; }
L_0049E2A4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0049E2B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0049E2C4; } }
L_0049E2B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E2BCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 276u, depth + 1u); else { c.pc = 0x00173340u; return; } if (c.pc != 0x0049E2BCu) [[unlikely]] return; }
L_0049E2BC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0049E2C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0049E2E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30984u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0049E2F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29656u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0049E30C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0049E314; } }
L_0049E30C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E314u);  if (depth < kMaxDepth) unit_001C(c, 280u, depth + 1u); else { c.pc = 0x001733E0u; return; } if (c.pc != 0x0049E314u) [[unlikely]] return; }
L_0049E314:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0049E320:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29656u)));  c.pc = t; return; }
L_0049E330:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 8608u);  c.pc = t; return; }
L_0049E340:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0049E280u | kUnwind; return; } goto L_0049E280; }
L_0049E350:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0049E240u | kUnwind; return; } goto L_0049E240; }
L_0049E360:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0049E2E0u | kUnwind; return; } goto L_0049E2E0; }
L_0049E370:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0049E2F0u | kUnwind; return; } goto L_0049E2F0; }
L_0049E380:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0049E320u | kUnwind; return; } goto L_0049E320; }
L_0049E390:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0049E090u | kUnwind; return; } goto L_0049E090; }
L_0049E3A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0049E090u | kUnwind; return; } goto L_0049E090; }
L_0049E3B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 72u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0049E090u | kUnwind; return; } goto L_0049E090; }
L_0049E3C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 132u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0049E090u | kUnwind; return; } goto L_0049E090; }
L_0049E3D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 284u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0049DEC0u | kUnwind; return; } goto L_0049DEC0; }
L_0049E3E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 284u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0049E090u | kUnwind; return; } goto L_0049E090; }
L_0049E3F0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_0049E418; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 5u);  goto L_0049E410; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_0049E410:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0049E41C; } }
L_0049E418:
    set32(c.r[2], c.r[2].w[0] - 8392u);
    c.budget -= 1;
L_0049E41C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0049E430:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 8384u);  c.pc = t; return; }
L_0049E440:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_00EC(c, 398u, depth); }
L_0049E450:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0049E4F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E484u); set32(c.r[4], 0u + 420u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0049E484u) [[unlikely]] return; }
L_0049E484:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0049E4F8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E498u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00ED(c, 73u, depth + 1u); else { c.pc = 0x004B47A0u; return; } if (c.pc != 0x0049E498u) [[unlikely]] return; }
L_0049E498:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] + 22912u);
    set32(c.r[2], c.r[2].w[0] - 28928u);
    st32((c.r[16].w[0] + 412u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 28904u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 28872u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 28860u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 28836u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 28620u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 412u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 416u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 417u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 24;
L_0049E4F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E500u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0049E500u) [[unlikely]] return; }
L_0049E500:
    set32(c.r[4], ld32((c.r[17].w[0] + 196u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 192u)));
    set32(c.r[6], c.r[6].w[0] - 8352u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E518u); set32(c.r[7], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x0049E518u) [[unlikely]] return; }
L_0049E518:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_0049E57C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E530u); set32(c.r[5], c.r[5].w[0] - 8341u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0049E530u) [[unlikely]] return; }
L_0049E530:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E540u); set32(c.r[5], c.r[5].w[0] - 8328u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0049E540u) [[unlikely]] return; }
L_0049E540:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E554u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 19u, depth + 1u); else { c.pc = 0x00140140u; return; } if (c.pc != 0x0049E554u) [[unlikely]] return; }
L_0049E554:
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E56Cu); st8((c.r[16].w[0] + 417u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049E56Cu) [[unlikely]] return; }
L_0049E56C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E578u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049E578u) [[unlikely]] return; }
L_0049E578:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0049E57C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E58Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EC(c, 399u, depth + 1u); else { c.pc = 0x004B32D0u; return; } if (c.pc != 0x0049E58Cu) [[unlikely]] return; }
L_0049E58C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E598u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049E598u) [[unlikely]] return; }
L_0049E598:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0049E5C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0049E608; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 28976u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E5F0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00EC(c, 415u, depth + 1u); else { c.pc = 0x004B3470u; return; } if (c.pc != 0x0049E5F0u) [[unlikely]] return; }
L_0049E5F0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0049E60C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E608u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0049E608u) [[unlikely]] return; }
L_0049E608:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0049E60C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0049E620:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E634u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00EC(c, 418u, depth + 1u); else { c.pc = 0x004B34D0u; return; } if (c.pc != 0x0049E634u) [[unlikely]] return; }
L_0049E634:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 28976u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0049E660:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 416u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0049E68C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E684u);  if (depth < kMaxDepth) unit_001D(c, 196u, depth + 1u); else { c.pc = 0x00176660u; return; } if (c.pc != 0x0049E684u) [[unlikely]] return; }
L_0049E684:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0049E6D0; } }
L_0049E68C:
    set32(c.r[25], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E6A0u); c.r[5].d[0] = c.r[3].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049E6A0u) [[unlikely]] return; }
L_0049E6A0:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 33u);  goto L_0049E6B4; }
    set32(c.r[5], ld32((c.r[29].w[0] + 40u)));
    c.budget -= 1;
L_0049E6B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E6BCu); set32(c.r[4], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0049E6BCu) [[unlikely]] return; }
L_0049E6BC:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E6C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049E6C8u) [[unlikely]] return; }
L_0049E6C8:
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_0049E6D0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0049E6E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 416u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0049E70C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E704u);  if (depth < kMaxDepth) unit_001D(c, 203u, depth + 1u); else { c.pc = 0x00176780u; return; } if (c.pc != 0x0049E704u) [[unlikely]] return; }
L_0049E704:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0049E750; } }
L_0049E70C:
    set32(c.r[25], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E720u); c.r[5].d[0] = c.r[3].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049E720u) [[unlikely]] return; }
L_0049E720:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 33u);  goto L_0049E734; }
    set32(c.r[5], ld32((c.r[29].w[0] + 40u)));
    c.budget -= 1;
L_0049E734:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E73Cu); set32(c.r[4], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0049E73Cu) [[unlikely]] return; }
L_0049E73C:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E748u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049E748u) [[unlikely]] return; }
L_0049E748:
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_0049E750:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0049E760:
    set32(c.r[29], c.r[29].w[0] - 432u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    set32(c.r[4], c.r[29].w[0] + 384u);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[5].w[0] + 124u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E7B0u); set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x0049E7B0u) [[unlikely]] return; }
L_0049E7B0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E7BCu); set32(c.r[5], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x0049E7BCu) [[unlikely]] return; }
L_0049E7BC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 416u);  goto L_0049E7E4; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 26u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049E7E0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E7E0u); set32(c.r[5], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x0049E7E0u) [[unlikely]] return; }
L_0049E7E0:
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.budget -= 1;
L_0049E7E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E7ECu); set32(c.r[5], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x0049E7ECu) [[unlikely]] return; }
L_0049E7EC:
    set32(c.r[2], ld32((c.r[17].w[0] + 124u)));
    set32(c.r[4], c.r[29].w[0] + 368u);
    set32(c.r[3], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E808u); set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x0049E808u) [[unlikely]] return; }
L_0049E808:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E814u); set32(c.r[5], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x0049E814u) [[unlikely]] return; }
L_0049E814:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 400u);  goto L_0049E83C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049E838; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E838u); set32(c.r[5], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x0049E838u) [[unlikely]] return; }
L_0049E838:
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.budget -= 1;
L_0049E83C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E844u); set32(c.r[5], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x0049E844u) [[unlikely]] return; }
L_0049E844:
    c.f[2] = ld32((c.r[29].w[0] + 400u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[29].w[0] + 416u));
    set32(c.r[4], c.r[29].w[0] + 340u);
    c.f[0] = c.r[2].w[0];
    st16((c.r[29].w[0] + 360u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[29].w[0] + 356u), c.r[4].w[0]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 336u), c.r[2].w[0]);
    set32(c.r[2], 0u + 16u);
    st16((c.r[29].w[0] + 362u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[23] = ld32((c.r[29].w[0] + 404u));
    c.f[21] = ld32((c.r[29].w[0] + 408u));
    c.f[20] = ld32((c.r[29].w[0] + 420u));
    c.budget -= 18;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; c.f[22] = fp::add(c.f[0], c.f[1]);  if (t) { goto L_0049E89C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E894u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049E894u) [[unlikely]] return; }
L_0049E894:
    set32(c.r[2], c.r[29].w[0] + 340u);
    st32((c.r[29].w[0] + 356u), c.r[2].w[0]);
    c.budget -= 2;
L_0049E89C:
    set32(c.r[2], ld32((c.r[29].w[0] + 356u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0]), c.f[20]);
    st32((c.r[2].w[0] + 4u), c.f[20]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E8B8u); st32((c.r[2].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0049E8B8u) [[unlikely]] return; }
L_0049E8B8:
    set32(c.r[19], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[5], c.r[29].w[0] + 340u);
    set32(c.r[18], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 362u)));
    set32(c.r[4], c.r[18].w[0] << 5);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 356u)));
    c.budget -= 11;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[20], ld32((c.r[29].w[0] + 340u)));  goto L_0049E914; }
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E8F0u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0049E8F0u) [[unlikely]] return; }
L_0049E8F0:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[17].w[0] + 4u);  goto L_0049E90C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E908u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049E908u) [[unlikely]] return; }
L_0049E908:
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_0049E90C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0049E938; } }
L_0049E914:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E920u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0049E920u) [[unlikely]] return; }
L_0049E920:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 356u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E934u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0049E934u) [[unlikely]] return; }
L_0049E934:
    st32((c.r[17].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 1;
L_0049E938:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E94Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049E94Cu) [[unlikely]] return; }
L_0049E94C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 362u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 336u), c.r[3].w[0]);  if (t) { goto L_0049E97C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 356u)));
    set32(c.r[2], c.r[29].w[0] + 340u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0049E97C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E97Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049E97Cu) [[unlikely]] return; }
L_0049E97C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 308u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 328u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 304u), c.r[2].w[0]);
    set32(c.r[2], 0u + 16u);
    st32((c.r[29].w[0] + 324u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 330u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0049E9B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E9A8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049E9A8u) [[unlikely]] return; }
L_0049E9A8:
    set32(c.r[2], c.r[29].w[0] + 308u);
    st32((c.r[29].w[0] + 324u), c.r[2].w[0]);
    c.budget -= 2;
L_0049E9B0:
    set32(c.r[2], ld32((c.r[29].w[0] + 324u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    st32((c.r[2].w[0]), c.f[20]);
    st32((c.r[2].w[0] + 4u), c.f[20]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049E9CCu); st32((c.r[2].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0049E9CCu) [[unlikely]] return; }
L_0049E9CC:
    set32(c.r[19], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[5], c.r[29].w[0] + 308u);
    set32(c.r[18], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 330u)));
    set32(c.r[4], c.r[18].w[0] << 5);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 324u)));
    c.budget -= 11;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[20], ld32((c.r[29].w[0] + 308u)));  goto L_0049EA28; }
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EA04u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0049EA04u) [[unlikely]] return; }
L_0049EA04:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[17].w[0] + 4u);  goto L_0049EA20; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EA1Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049EA1Cu) [[unlikely]] return; }
L_0049EA1C:
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_0049EA20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0049EA4C; } }
L_0049EA28:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EA34u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0049EA34u) [[unlikely]] return; }
L_0049EA34:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 324u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EA48u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0049EA48u) [[unlikely]] return; }
L_0049EA48:
    st32((c.r[17].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 1;
L_0049EA4C:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EA60u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049EA60u) [[unlikely]] return; }
L_0049EA60:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 330u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 304u), c.r[3].w[0]);  if (t) { goto L_0049EA90; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 324u)));
    set32(c.r[2], c.r[29].w[0] + 308u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0049EA90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EA90u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049EA90u) [[unlikely]] return; }
L_0049EA90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 276u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 296u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    set32(c.r[2], 0u + 16u);
    st32((c.r[29].w[0] + 292u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 298u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0049EAC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EABCu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049EABCu) [[unlikely]] return; }
L_0049EABC:
    set32(c.r[2], c.r[29].w[0] + 276u);
    st32((c.r[29].w[0] + 292u), c.r[2].w[0]);
    c.budget -= 2;
L_0049EAC4:
    set32(c.r[2], ld32((c.r[29].w[0] + 292u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0]), c.f[22]);
    st32((c.r[2].w[0] + 4u), c.f[23]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EAE0u); st32((c.r[2].w[0] + 8u), c.f[21]);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0049EAE0u) [[unlikely]] return; }
L_0049EAE0:
    set32(c.r[19], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[5], c.r[29].w[0] + 276u);
    set32(c.r[18], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 298u)));
    set32(c.r[4], c.r[18].w[0] << 5);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 292u)));
    c.budget -= 11;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[20], ld32((c.r[29].w[0] + 276u)));  goto L_0049EB3C; }
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EB18u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0049EB18u) [[unlikely]] return; }
L_0049EB18:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[17].w[0] + 4u);  goto L_0049EB34; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EB30u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049EB30u) [[unlikely]] return; }
L_0049EB30:
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_0049EB34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0049EB60; } }
L_0049EB3C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EB48u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0049EB48u) [[unlikely]] return; }
L_0049EB48:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 292u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EB5Cu); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0049EB5Cu) [[unlikely]] return; }
L_0049EB5C:
    st32((c.r[17].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 1;
L_0049EB60:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EB74u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049EB74u) [[unlikely]] return; }
L_0049EB74:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 298u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 272u), c.r[3].w[0]);  if (t) { goto L_0049EBA4; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 292u)));
    set32(c.r[2], c.r[29].w[0] + 276u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0049EBA8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EBA4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049EBA4u) [[unlikely]] return; }
L_0049EBA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_0049EBA8:
    set32(c.r[4], c.r[29].w[0] + 244u);
    c.f[0] = c.r[2].w[0];
    st16((c.r[29].w[0] + 264u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[29].w[0] + 260u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    c.f[22] = fp::add(c.f[22], c.f[0]);
    set32(c.r[2], 0u + 16u);
    st16((c.r[29].w[0] + 266u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; c.f[23] = fp::add(c.f[23], c.f[0]);  if (t) { goto L_0049EBE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EBE0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049EBE0u) [[unlikely]] return; }
L_0049EBE0:
    set32(c.r[2], c.r[29].w[0] + 244u);
    st32((c.r[29].w[0] + 260u), c.r[2].w[0]);
    c.budget -= 2;
L_0049EBE8:
    set32(c.r[2], ld32((c.r[29].w[0] + 260u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    st32((c.r[2].w[0]), c.f[22]);
    st32((c.r[2].w[0] + 4u), c.f[23]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EC04u); st32((c.r[2].w[0] + 8u), c.f[21]);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0049EC04u) [[unlikely]] return; }
L_0049EC04:
    set32(c.r[19], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[5], c.r[29].w[0] + 244u);
    set32(c.r[18], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 266u)));
    set32(c.r[4], c.r[18].w[0] << 5);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 260u)));
    c.budget -= 11;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[20], ld32((c.r[29].w[0] + 244u)));  goto L_0049EC60; }
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EC3Cu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0049EC3Cu) [[unlikely]] return; }
L_0049EC3C:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[17].w[0] + 4u);  goto L_0049EC58; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EC54u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049EC54u) [[unlikely]] return; }
L_0049EC54:
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_0049EC58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0049EC84; } }
L_0049EC60:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EC6Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0049EC6Cu) [[unlikely]] return; }
L_0049EC6C:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 260u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EC80u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0049EC80u) [[unlikely]] return; }
L_0049EC80:
    st32((c.r[17].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 1;
L_0049EC84:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EC98u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049EC98u) [[unlikely]] return; }
L_0049EC98:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 266u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 240u), c.r[3].w[0]);  if (t) { goto L_0049ECC8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 260u)));
    set32(c.r[2], c.r[29].w[0] + 244u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0049ECCC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049ECC8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049ECC8u) [[unlikely]] return; }
L_0049ECC8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0049ECCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049ECD4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0049ECD4u) [[unlikely]] return; }
L_0049ECD4:
    set32(c.r[3], ld32((c.r[2].w[0] + 120u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[2], ld32((c.r[2].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049ECECu); set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0013(c, 344u, depth + 1u); else { c.pc = 0x0014EB90u; return; } if (c.pc != 0x0049ECECu) [[unlikely]] return; }
L_0049ECEC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049ECF8u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0021(c, 30u, depth + 1u); else { c.pc = 0x00184600u; return; } if (c.pc != 0x0049ECF8u) [[unlikely]] return; }
L_0049ECF8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_0049ED20; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[2], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049ED1C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049ED1Cu); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0021(c, 26u, depth + 1u); else { c.pc = 0x001844E0u; return; } if (c.pc != 0x0049ED1Cu) [[unlikely]] return; }
L_0049ED1C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_0049ED20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049ED28u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0013(c, 342u, depth + 1u); else { c.pc = 0x0014EB30u; return; } if (c.pc != 0x0049ED28u) [[unlikely]] return; }
L_0049ED28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 212u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 232u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    c.f[20] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[2], 0u + 64u);
    st32((c.r[29].w[0] + 228u), c.r[4].w[0]);
    c.f[21] = ld32((c.r[29].w[0] + 164u));
    c.f[22] = ld32((c.r[29].w[0] + 168u));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 234u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0049ED68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049ED60u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049ED60u) [[unlikely]] return; }
L_0049ED60:
    set32(c.r[2], c.r[29].w[0] + 212u);
    st32((c.r[29].w[0] + 228u), c.r[2].w[0]);
    c.budget -= 2;
L_0049ED68:
    set32(c.r[3], ld32((c.r[29].w[0] + 228u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0]), c.f[20]);
    st32((c.r[3].w[0] + 4u), c.f[21]);
    st32((c.r[3].w[0] + 8u), c.f[22]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049ED8Cu); st32((c.r[3].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0049ED8Cu) [[unlikely]] return; }
L_0049ED8C:
    set32(c.r[19], ld32((c.r[2].w[0] + 120u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 76u)));
    set32(c.r[5], c.r[29].w[0] + 212u);
    set32(c.r[4], c.r[19].w[0] << 5);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 234u)));
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    c.budget -= 11;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[20], ld32((c.r[29].w[0] + 212u)));  goto L_0049EDE8; }
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EDC4u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0049EDC4u) [[unlikely]] return; }
L_0049EDC4:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[17].w[0] + 4u);  goto L_0049EDE0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EDDCu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049EDDCu) [[unlikely]] return; }
L_0049EDDC:
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_0049EDE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0049EE0C; } }
L_0049EDE8:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EDF4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0049EDF4u) [[unlikely]] return; }
L_0049EDF4:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 228u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EE08u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0049EE08u) [[unlikely]] return; }
L_0049EE08:
    st32((c.r[17].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 1;
L_0049EE0C:
    set32(c.r[25], ld32((c.r[18].w[0] + 60u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EE20u); set32(c.r[4], c.r[18].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049EE20u) [[unlikely]] return; }
L_0049EE20:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 234u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 208u), c.r[3].w[0]);  if (t) { goto L_0049EE50; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[2], c.r[29].w[0] + 212u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0049EE54; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EE50u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049EE50u) [[unlikely]] return; }
L_0049EE50:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0049EE54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EE5Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0049EE5Cu) [[unlikely]] return; }
L_0049EE5C:
    set32(c.r[3], ld32((c.r[2].w[0] + 120u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], ld32((c.r[2].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EE74u); set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0013(c, 344u, depth + 1u); else { c.pc = 0x0014EB90u; return; } if (c.pc != 0x0049EE74u) [[unlikely]] return; }
L_0049EE74:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EE80u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0021(c, 30u, depth + 1u); else { c.pc = 0x00184600u; return; } if (c.pc != 0x0049EE80u) [[unlikely]] return; }
L_0049EE80:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 144u);  goto L_0049EEA8; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[2], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049EEA4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EEA4u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0021(c, 26u, depth + 1u); else { c.pc = 0x001844E0u; return; } if (c.pc != 0x0049EEA4u) [[unlikely]] return; }
L_0049EEA4:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 1;
L_0049EEA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EEB0u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0013(c, 342u, depth + 1u); else { c.pc = 0x0014EB30u; return; } if (c.pc != 0x0049EEB0u) [[unlikely]] return; }
L_0049EEB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 180u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 200u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.f[20] = ld32((c.r[29].w[0] + 144u));
    set32(c.r[2], 0u + 64u);
    st32((c.r[29].w[0] + 196u), c.r[4].w[0]);
    c.f[21] = ld32((c.r[29].w[0] + 148u));
    c.f[22] = ld32((c.r[29].w[0] + 152u));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 202u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0049EEF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EEE8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049EEE8u) [[unlikely]] return; }
L_0049EEE8:
    set32(c.r[2], c.r[29].w[0] + 180u);
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    c.budget -= 2;
L_0049EEF0:
    set32(c.r[3], ld32((c.r[29].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    st32((c.r[3].w[0]), c.f[20]);
    st32((c.r[3].w[0] + 4u), c.f[21]);
    st32((c.r[3].w[0] + 8u), c.f[22]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EF14u); st32((c.r[3].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0049EF14u) [[unlikely]] return; }
L_0049EF14:
    set32(c.r[18], ld32((c.r[2].w[0] + 120u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 76u)));
    set32(c.r[5], c.r[29].w[0] + 180u);
    set32(c.r[4], c.r[18].w[0] << 5);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 202u)));
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 11;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[19], ld32((c.r[29].w[0] + 180u)));  goto L_0049EF70; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EF4Cu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0049EF4Cu) [[unlikely]] return; }
L_0049EF4C:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_0049EF68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EF64u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049EF64u) [[unlikely]] return; }
L_0049EF64:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_0049EF68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0049EF94; } }
L_0049EF70:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EF7Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0049EF7Cu) [[unlikely]] return; }
L_0049EF7C:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EF90u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0049EF90u) [[unlikely]] return; }
L_0049EF90:
    st32((c.r[16].w[0] + 4u), c.r[19].w[0]);
    c.budget -= 1;
L_0049EF94:
    set32(c.r[25], ld32((c.r[17].w[0] + 60u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EFA8u); set32(c.r[4], c.r[17].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049EFA8u) [[unlikely]] return; }
L_0049EFA8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 202u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 26768u);
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 176u), c.r[4].w[0]);  if (t) { goto L_0049EFD8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 196u)));
    set32(c.r[3], c.r[29].w[0] + 180u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_0049EFDC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049EFD8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049EFD8u) [[unlikely]] return; }
L_0049EFD8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0049EFDC:
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 432u);  c.pc = t; return; }
L_0049F010:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F02Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_001D(c, 278u, depth + 1u); else { c.pc = 0x00177830u; return; } if (c.pc != 0x0049F02Cu) [[unlikely]] return; }
L_0049F02C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0049F044; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F040u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E7(c, 323u, depth + 1u); else { c.pc = 0x0049E760u; return; } if (c.pc != 0x0049F040u) [[unlikely]] return; }
L_0049F040:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0049F044:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0049F060:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 417u));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0049F0AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F0A4u);  if (depth < kMaxDepth) unit_0028(c, 98u, depth + 1u); else { c.pc = 0x001A1A00u; return; } if (c.pc != 0x0049F0A4u) [[unlikely]] return; }
L_0049F0A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_0049F42C; } }
L_0049F0AC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0049F0B8; } }
    set32(c.r[5], c.r[5].w[0] + 412u);
    c.budget -= 1;
L_0049F0B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F0C0u); set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  if (depth < kMaxDepth) unit_00FC(c, 507u, depth + 1u); else { c.pc = 0x004F3BE0u; return; } if (c.pc != 0x0049F0C0u) [[unlikely]] return; }
L_0049F0C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0049F104; } }
L_0049F0C8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 300u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F0D8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049F0D8u) [[unlikely]] return; }
L_0049F0D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_0049F0E8; }
    set32(c.r[2], c.r[2].w[0] + 48u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0049F0E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F0F0u);  if (depth < kMaxDepth) unit_00E0(c, 472u, depth + 1u); else { c.pc = 0x004838E0u; return; } if (c.pc != 0x0049F0F0u) [[unlikely]] return; }
L_0049F0F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0049F104; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F100u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E7(c, 222u, depth + 1u); else { c.pc = 0x0049DCE0u; return; } if (c.pc != 0x0049F100u) [[unlikely]] return; }
L_0049F100:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0049F104:
    set32(c.r[2], ld32((c.r[17].w[0] + 396u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0049F0C8u | kUnwind; return; } goto L_0049F0C8; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F120u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0049F120u) [[unlikely]] return; }
L_0049F120:
    set32(c.r[3], ld32((c.r[2].w[0] + 120u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[2], ld32((c.r[2].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F138u); set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0013(c, 344u, depth + 1u); else { c.pc = 0x0014EB90u; return; } if (c.pc != 0x0049F138u) [[unlikely]] return; }
L_0049F138:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F144u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0021(c, 30u, depth + 1u); else { c.pc = 0x00184600u; return; } if (c.pc != 0x0049F144u) [[unlikely]] return; }
L_0049F144:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 176u);  goto L_0049F16C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 26u)));
    set32(c.r[2], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049F168; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F168u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0021(c, 26u, depth + 1u); else { c.pc = 0x001844E0u; return; } if (c.pc != 0x0049F168u) [[unlikely]] return; }
L_0049F168:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 1;
L_0049F16C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F174u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0013(c, 342u, depth + 1u); else { c.pc = 0x0014EB30u; return; } if (c.pc != 0x0049F174u) [[unlikely]] return; }
L_0049F174:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 228u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 248u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    c.f[20] = ld32((c.r[29].w[0] + 176u));
    set32(c.r[2], 0u + 64u);
    st32((c.r[29].w[0] + 244u), c.r[4].w[0]);
    c.f[21] = ld32((c.r[29].w[0] + 180u));
    c.f[22] = ld32((c.r[29].w[0] + 184u));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 250u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0049F1B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F1ACu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049F1ACu) [[unlikely]] return; }
L_0049F1AC:
    set32(c.r[2], c.r[29].w[0] + 228u);
    st32((c.r[29].w[0] + 244u), c.r[2].w[0]);
    c.budget -= 2;
L_0049F1B4:
    set32(c.r[2], ld32((c.r[29].w[0] + 244u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0]), c.f[20]);
    st32((c.r[2].w[0] + 4u), c.f[21]);
    st32((c.r[2].w[0] + 8u), c.f[22]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F1D4u); st32((c.r[2].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0049F1D4u) [[unlikely]] return; }
L_0049F1D4:
    set32(c.r[20], ld32((c.r[2].w[0] + 120u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 76u)));
    set32(c.r[5], c.r[29].w[0] + 228u);
    set32(c.r[4], c.r[20].w[0] << 5);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 250u)));
    set32(c.r[18], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[18].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 244u)));
    c.budget -= 11;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[21], ld32((c.r[29].w[0] + 228u)));  goto L_0049F230; }
    set32(c.r[4], c.r[18].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F20Cu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0049F20Cu) [[unlikely]] return; }
L_0049F20C:
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], c.r[18].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[18].w[0] + 4u);  goto L_0049F228; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F224u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049F224u) [[unlikely]] return; }
L_0049F224:
    set32(c.r[2], c.r[18].w[0] + 4u);
    c.budget -= 1;
L_0049F228:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0049F254; } }
L_0049F230:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F23Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0049F23Cu) [[unlikely]] return; }
L_0049F23C:
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 244u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F250u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0049F250u) [[unlikely]] return; }
L_0049F250:
    st32((c.r[18].w[0] + 4u), c.r[21].w[0]);
    c.budget -= 1;
L_0049F254:
    set32(c.r[25], ld32((c.r[19].w[0] + 60u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F268u); set32(c.r[4], c.r[19].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049F268u) [[unlikely]] return; }
L_0049F268:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 250u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 224u), c.r[3].w[0]);  if (t) { goto L_0049F298; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 244u)));
    set32(c.r[2], c.r[29].w[0] + 228u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0049F29C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F298u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049F298u) [[unlikely]] return; }
L_0049F298:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0049F29C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F2A4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0049F2A4u) [[unlikely]] return; }
L_0049F2A4:
    set32(c.r[3], ld32((c.r[2].w[0] + 120u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[2], ld32((c.r[2].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F2BCu); set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0013(c, 344u, depth + 1u); else { c.pc = 0x0014EB90u; return; } if (c.pc != 0x0049F2BCu) [[unlikely]] return; }
L_0049F2BC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F2C8u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0021(c, 30u, depth + 1u); else { c.pc = 0x00184600u; return; } if (c.pc != 0x0049F2C8u) [[unlikely]] return; }
L_0049F2C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_0049F2F0; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 26u)));
    set32(c.r[2], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0049F2EC; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F2ECu); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0021(c, 26u, depth + 1u); else { c.pc = 0x001844E0u; return; } if (c.pc != 0x0049F2ECu) [[unlikely]] return; }
L_0049F2EC:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_0049F2F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F2F8u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0013(c, 342u, depth + 1u); else { c.pc = 0x0014EB30u; return; } if (c.pc != 0x0049F2F8u) [[unlikely]] return; }
L_0049F2F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 196u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 216u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.f[20] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[2], 0u + 64u);
    st32((c.r[29].w[0] + 212u), c.r[4].w[0]);
    c.f[21] = ld32((c.r[29].w[0] + 164u));
    c.f[22] = ld32((c.r[29].w[0] + 168u));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 218u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0049F338; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F330u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049F330u) [[unlikely]] return; }
L_0049F330:
    set32(c.r[2], c.r[29].w[0] + 196u);
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    c.budget -= 2;
L_0049F338:
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    st32((c.r[2].w[0]), c.f[20]);
    st32((c.r[2].w[0] + 4u), c.f[21]);
    st32((c.r[2].w[0] + 8u), c.f[22]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F358u); st32((c.r[2].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0049F358u) [[unlikely]] return; }
L_0049F358:
    set32(c.r[20], ld32((c.r[2].w[0] + 120u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 76u)));
    set32(c.r[5], c.r[29].w[0] + 196u);
    set32(c.r[4], c.r[20].w[0] << 5);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 218u)));
    set32(c.r[18], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[18].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 11;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[21], ld32((c.r[29].w[0] + 196u)));  goto L_0049F3B4; }
    set32(c.r[4], c.r[18].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F390u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0049F390u) [[unlikely]] return; }
L_0049F390:
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], c.r[18].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[18].w[0] + 4u);  goto L_0049F3AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F3A8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049F3A8u) [[unlikely]] return; }
L_0049F3A8:
    set32(c.r[2], c.r[18].w[0] + 4u);
    c.budget -= 1;
L_0049F3AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0049F3D8; } }
L_0049F3B4:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F3C0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0049F3C0u) [[unlikely]] return; }
L_0049F3C0:
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F3D4u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0049F3D4u) [[unlikely]] return; }
L_0049F3D4:
    st32((c.r[18].w[0] + 4u), c.r[21].w[0]);
    c.budget -= 1;
L_0049F3D8:
    set32(c.r[25], ld32((c.r[19].w[0] + 60u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F3ECu); set32(c.r[4], c.r[19].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049F3ECu) [[unlikely]] return; }
L_0049F3EC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 218u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 192u), c.r[3].w[0]);  if (t) { goto L_0049F41C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[2], c.r[29].w[0] + 196u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0049F420; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F41Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049F41Cu) [[unlikely]] return; }
L_0049F41C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0049F420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F428u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 98u, depth + 1u); else { c.pc = 0x001A1A00u; return; } if (c.pc != 0x0049F428u) [[unlikely]] return; }
L_0049F428:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_0049F42C:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_0049F460:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F480u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_00ED(c, 60u, depth + 1u); else { c.pc = 0x004B4610u; return; } if (c.pc != 0x0049F480u) [[unlikely]] return; }
L_0049F480:
    set32(c.r[2], 0u + 1u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 416u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0049F5AC; } }
L_0049F490:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 300u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F4A0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049F4A0u) [[unlikely]] return; }
L_0049F4A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_0049F4B0; }
    set32(c.r[2], c.r[2].w[0] + 48u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0049F4B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F4B8u);  if (depth < kMaxDepth) unit_00E0(c, 472u, depth + 1u); else { c.pc = 0x004838E0u; return; } if (c.pc != 0x0049F4B8u) [[unlikely]] return; }
L_0049F4B8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[18].w[0] + 417u));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 404u)));  goto L_0049F4D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F4D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E7(c, 105u, depth + 1u); else { c.pc = 0x0049D010u; return; } if (c.pc != 0x0049F4D0u) [[unlikely]] return; }
L_0049F4D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0049F58C; } }
L_0049F4D8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0049F4F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F4E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E7(c, 111u, depth + 1u); else { c.pc = 0x0049D0A0u; return; } if (c.pc != 0x0049F4E8u) [[unlikely]] return; }
L_0049F4E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0049F588; } }
L_0049F4F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F4F8u);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x0049F4F8u) [[unlikely]] return; }
L_0049F4F8:
    c.f[0] = c.r[2].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[18].w[0] + 56u);
    set32(c.r[6], c.r[6].w[0] - 8326u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[28].w[0] - 32564u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F530u); c.f[20] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104500u; return; } if (c.pc != 0x0049F530u) [[unlikely]] return; }
L_0049F530:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F540u); set32(c.r[6], c.r[17].w[0] + 56u);  if (depth < kMaxDepth) unit_000A(c, 138u, depth + 1u); else { c.pc = 0x00129250u; return; } if (c.pc != 0x0049F540u) [[unlikely]] return; }
L_0049F540:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0049F54C; } }
    set32(c.r[7], c.r[18].w[0] + 412u);
    c.budget -= 1;
L_0049F54C:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 81u);  goto L_0049F560; }
    set32(c.r[5], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_0049F560:
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F570u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00FC(c, 522u, depth + 1u); else { c.pc = 0x004F3D40u; return; } if (c.pc != 0x0049F570u) [[unlikely]] return; }
L_0049F570:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F57Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049F57Cu) [[unlikely]] return; }
L_0049F57C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F588u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049F588u) [[unlikely]] return; }
L_0049F588:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0049F58C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F594u);  if (depth < kMaxDepth) unit_0023(c, 16u, depth + 1u); else { c.pc = 0x0018C2E0u; return; } if (c.pc != 0x0049F594u) [[unlikely]] return; }
L_0049F594:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[17].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0049F5AC; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F5A8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E7(c, 323u, depth + 1u); else { c.pc = 0x0049E760u; return; } if (c.pc != 0x0049F5A8u) [[unlikely]] return; }
L_0049F5A8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0049F5AC:
    set32(c.r[2], ld32((c.r[18].w[0] + 396u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[18].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0049F490u | kUnwind; return; } goto L_0049F490; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  goto L_0049F5CC; }
    set32(c.r[18], c.r[18].w[0] + 412u);
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.budget -= 2;
L_0049F5CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[5].w[0] - 8324u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F5E8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00FC(c, 522u, depth + 1u); else { c.pc = 0x004F3D40u; return; } if (c.pc != 0x0049F5E8u) [[unlikely]] return; }
L_0049F5E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0049F610:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F638u); set32(c.r[5], c.r[5].w[0] - 8324u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0049F638u) [[unlikely]] return; }
L_0049F638:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[17].w[0])));  goto L_0049F64C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 416u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0049F684; } }
L_0049F64C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 180u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F65Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049F65Cu) [[unlikely]] return; }
L_0049F65C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0049F688; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0049F674; } }
    set32(c.r[4], c.r[4].w[0] + 48u);
    c.budget -= 1;
L_0049F674:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F67Cu);  if (depth < kMaxDepth) unit_00E0(c, 472u, depth + 1u); else { c.pc = 0x004838E0u; return; } if (c.pc != 0x0049F67Cu) [[unlikely]] return; }
L_0049F67C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F684u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E7(c, 106u, depth + 1u); else { c.pc = 0x0049D030u; return; } if (c.pc != 0x0049F684u) [[unlikely]] return; }
L_0049F684:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0049F688:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0049F6A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0049F754; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 28928u);
    set32(c.r[2], c.r[2].w[0] - 28904u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 28872u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 28860u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 28836u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 28620u);
    st32((c.r[17].w[0] + 132u), c.r[3].w[0]);
    c.budget -= 20;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 412u), c.r[2].w[0]);  if (t) { goto L_0049F710; } }
    set32(c.r[5], c.r[5].w[0] + 412u);
    c.budget -= 1;
L_0049F710:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F718u); set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  if (depth < kMaxDepth) unit_00FC(c, 507u, depth + 1u); else { c.pc = 0x004F3BE0u; return; } if (c.pc != 0x0049F718u) [[unlikely]] return; }
L_0049F718:
    set32(c.r[2], c.r[17].w[0] + 412u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0049F734; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 22912u);
    st32((c.r[17].w[0] + 412u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
L_0049F734:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F73Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00ED(c, 69u, depth + 1u); else { c.pc = 0x004B46C0u; return; } if (c.pc != 0x0049F73Cu) [[unlikely]] return; }
L_0049F73C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0049F758; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F754u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0049F754u) [[unlikely]] return; }
L_0049F754:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0049F758:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0049F770:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29652u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0049F78C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0049F79C; } }
L_0049F78C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F794u);  if (depth < kMaxDepth) unit_00ED(c, 81u, depth + 1u); else { c.pc = 0x004B48B0u; return; } if (c.pc != 0x0049F794u) [[unlikely]] return; }
L_0049F794:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0049F79C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0049F7B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F7D4u); set32(c.r[4], c.r[4].w[0] - 8448u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0049F7D4u) [[unlikely]] return; }
L_0049F7D4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0049F7E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0049F7F4; } }
L_0049F7E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F7ECu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00ED(c, 83u, depth + 1u); else { c.pc = 0x004B48F0u; return; } if (c.pc != 0x0049F7ECu) [[unlikely]] return; }
L_0049F7EC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0049F7F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0049F810:
    set32(c.r[2], ld32((c.r[28].w[0] - 29572u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0049F820:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29652u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0049F83C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0049F844; } }
L_0049F83C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F844u);  if (depth < kMaxDepth) unit_00ED(c, 87u, depth + 1u); else { c.pc = 0x004B4960u; return; } if (c.pc != 0x0049F844u) [[unlikely]] return; }
L_0049F844:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0049F850:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29652u)));  c.pc = t; return; }
L_0049F860:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 8416u);  c.pc = t; return; }
L_0049F870:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0049F7B0u | kUnwind; return; } goto L_0049F7B0; }
L_0049F880:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0049F770u | kUnwind; return; } goto L_0049F770; }
L_0049F890:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0049F810u | kUnwind; return; } goto L_0049F810; }
L_0049F8A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0049F820u | kUnwind; return; } goto L_0049F820; }
L_0049F8B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0049F850u | kUnwind; return; } goto L_0049F850; }
L_0049F8C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0049F6A0u | kUnwind; return; } goto L_0049F6A0; }
L_0049F8D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0049F6A0u | kUnwind; return; } goto L_0049F6A0; }
L_0049F8E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 72u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0049F6A0u | kUnwind; return; } goto L_0049F6A0; }
L_0049F8F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 132u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0049F6A0u | kUnwind; return; } goto L_0049F6A0; }
L_0049F900:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 412u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0049F610u | kUnwind; return; } goto L_0049F610; }
L_0049F910:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 412u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0049F6A0u | kUnwind; return; } goto L_0049F6A0; }
L_0049F920:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0049F9C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 28592u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0049F9A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 29296u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0049F9A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 21296u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0049F9A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 17744u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0049F9A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 21552u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0049F9A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0049F9A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F9A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049F9A8u) [[unlikely]] return; }
L_0049F9A8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0049F9C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049F9C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0049F9C0u) [[unlikely]] return; }
L_0049F9C0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0049F9C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0049F9E0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_0049FA08; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 5u);  goto L_0049FA00; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_0049FA00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0049FA0C; } }
L_0049FA08:
    set32(c.r[2], c.r[2].w[0] - 8184u);
    c.budget -= 1;
L_0049FA0C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0049FA20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 8176u);  c.pc = t; return; }
L_0049FA30:
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
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0049FAD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049FA64u); set32(c.r[4], 0u + 344u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0049FA64u) [[unlikely]] return; }
L_0049FA64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0049FAD0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049FA7Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00E7(c, 268u, depth + 1u); else { c.pc = 0x0049E190u; return; } if (c.pc != 0x0049FA7Cu) [[unlikely]] return; }
L_0049FA7C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 28544u);
    set32(c.r[2], c.r[2].w[0] - 28520u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 328u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 28488u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 28476u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 28452u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 28312u);
    st32((c.r[16].w[0] + 132u), c.r[3].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049FACCu); st32((c.r[16].w[0] + 284u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0049FACCu) [[unlikely]] return; }
L_0049FACC:
    st32((c.r[16].w[0] + 324u), 0u);
    c.budget -= 1;
L_0049FAD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049FAD8u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0049FAD8u) [[unlikely]] return; }
L_0049FAD8:
    set32(c.r[4], ld32((c.r[17].w[0] + 196u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 192u)));
    set32(c.r[6], c.r[6].w[0] - 8144u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049FAF0u); set32(c.r[7], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x0049FAF0u) [[unlikely]] return; }
L_0049FAF0:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 81u);  goto L_0049FB04; }
    set32(c.r[5], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_0049FB04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049FB0Cu); set32(c.r[4], c.r[16].w[0] + 328u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0049FB0Cu) [[unlikely]] return; }
L_0049FB0C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049FB20u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E7(c, 66u, depth + 1u); else { c.pc = 0x0049CAA0u; return; } if (c.pc != 0x0049FB20u) [[unlikely]] return; }
L_0049FB20:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049FB2Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049FB2Cu) [[unlikely]] return; }
L_0049FB2C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0049FB50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049FB64u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E7(c, 255u, depth + 1u); else { c.pc = 0x0049DFF0u; return; } if (c.pc != 0x0049FB64u) [[unlikely]] return; }
L_0049FB64:
    set32(c.r[2], ld32((c.r[16].w[0] + 328u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[16].w[0] + 329u);  goto L_0049FB78; }
    set32(c.r[5], ld32((c.r[16].w[0] + 336u)));
    c.budget -= 1;
L_0049FB78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049FB80u); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x0049FB80u) [[unlikely]] return; }
L_0049FB80:
    st32((c.r[16].w[0] + 324u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0049FBA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 324u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0049FBC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049FBC8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x0049FBC8u) [[unlikely]] return; }
L_0049FBC8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049FBD4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 224u, depth + 1u); else { c.pc = 0x00172910u; return; } if (c.pc != 0x0049FBD4u) [[unlikely]] return; }
L_0049FBD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0049FBF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 324u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0049FC18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049FC18u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x0049FC18u) [[unlikely]] return; }
L_0049FC18:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049FC24u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 237u, depth + 1u); else { c.pc = 0x00172B80u; return; } if (c.pc != 0x0049FC24u) [[unlikely]] return; }
L_0049FC24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0049FC40:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049FC6Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001B(c, 212u, depth + 1u); else { c.pc = 0x0016DE90u; return; } if (c.pc != 0x0049FC6Cu) [[unlikely]] return; }
L_0049FC6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049FC74u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_001B(c, 203u, depth + 1u); else { c.pc = 0x0016DD50u; return; } if (c.pc != 0x0049FC74u) [[unlikely]] return; }
L_0049FC74:
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 64u);  goto L_0049FCAC; }
    set32(c.r[4], ld32((c.r[18].w[0] + 324u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 244u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049FC98u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049FC98u) [[unlikely]] return; }
L_0049FC98:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049FCA4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_001B(c, 209u, depth + 1u); else { c.pc = 0x0016DE10u; return; } if (c.pc != 0x0049FCA4u) [[unlikely]] return; }
L_0049FCA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0049FD0C; } }
L_0049FCAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049FCB4u);  if (depth < kMaxDepth) unit_001B(c, 203u, depth + 1u); else { c.pc = 0x0016DD50u; return; } if (c.pc != 0x0049FCB4u) [[unlikely]] return; }
L_0049FCB4:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0049FCEC; }
    set32(c.r[4], ld32((c.r[18].w[0] + 324u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 240u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049FCD8u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049FCD8u) [[unlikely]] return; }
L_0049FCD8:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049FCE4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_001B(c, 209u, depth + 1u); else { c.pc = 0x0016DE10u; return; } if (c.pc != 0x0049FCE4u) [[unlikely]] return; }
L_0049FCE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0049FD0C; } }
L_0049FCEC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049FCF8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_001C(c, 165u, depth + 1u); else { c.pc = 0x00171F20u; return; } if (c.pc != 0x0049FCF8u) [[unlikely]] return; }
L_0049FCF8:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049FD08u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_001B(c, 209u, depth + 1u); else { c.pc = 0x0016DE10u; return; } if (c.pc != 0x0049FD08u) [[unlikely]] return; }
L_0049FD08:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0049FD0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0049FD30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0049FDC8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 28544u);
    set32(c.r[2], c.r[2].w[0] - 28520u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 328u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 28488u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 28476u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 28452u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 28312u);
    st32((c.r[17].w[0] + 132u), c.r[3].w[0]);
    c.budget -= 20;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0] + 284u), c.r[2].w[0]);  if (t) { goto L_0049FDA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049FDA4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049FDA4u) [[unlikely]] return; }
L_0049FDA4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049FDB0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E7(c, 262u, depth + 1u); else { c.pc = 0x0049E090u; return; } if (c.pc != 0x0049FDB0u) [[unlikely]] return; }
L_0049FDB0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0049FDCC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049FDC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0049FDC8u) [[unlikely]] return; }
L_0049FDC8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0049FDCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0049FDE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29648u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0049FDFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0049FE0C; } }
L_0049FDFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049FE04u);  if (depth < kMaxDepth) unit_00E7(c, 272u, depth + 1u); else { c.pc = 0x0049E240u; return; } if (c.pc != 0x0049FE04u) [[unlikely]] return; }
L_0049FE04:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0049FE0C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0049FE20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049FE44u); set32(c.r[4], c.r[4].w[0] - 8240u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0049FE44u) [[unlikely]] return; }
L_0049FE44:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0049FE54; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0049FE64; } }
L_0049FE54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049FE5Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E7(c, 274u, depth + 1u); else { c.pc = 0x0049E280u; return; } if (c.pc != 0x0049FE5Cu) [[unlikely]] return; }
L_0049FE5C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0049FE64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0049FE80:
    set32(c.r[2], ld32((c.r[28].w[0] - 29656u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0049FE90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29648u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0049FEAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0049FEB4; } }
L_0049FEAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049FEB4u);  if (depth < kMaxDepth) unit_00E7(c, 278u, depth + 1u); else { c.pc = 0x0049E2F0u; return; } if (c.pc != 0x0049FEB4u) [[unlikely]] return; }
L_0049FEB4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0049FEC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29648u)));  c.pc = t; return; }
L_0049FED0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 8208u);  c.pc = t; return; }
L_0049FEE0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0049FE20u | kUnwind; return; } goto L_0049FE20; }
L_0049FEF0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0049FDE0u | kUnwind; return; } goto L_0049FDE0; }
L_0049FF00:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0049FE80u | kUnwind; return; } goto L_0049FE80; }
L_0049FF10:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0049FE90u | kUnwind; return; } goto L_0049FE90; }
L_0049FF20:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0049FEC0u | kUnwind; return; } goto L_0049FEC0; }
L_0049FF30:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0049FD30u | kUnwind; return; } goto L_0049FD30; }
L_0049FF40:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0049FD30u | kUnwind; return; } goto L_0049FD30; }
L_0049FF50:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 72u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0049FD30u | kUnwind; return; } goto L_0049FD30; }
L_0049FF60:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 132u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0049FD30u | kUnwind; return; } goto L_0049FD30; }
L_0049FF70:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 284u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0049FD30u | kUnwind; return; } goto L_0049FD30; }
L_0049FF80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0049FFC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 28272u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049FFB0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0022(c, 94u, depth + 1u); else { c.pc = 0x00188FF0u; return; } if (c.pc != 0x0049FFB0u) [[unlikely]] return; }
L_0049FFB0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0049FFCC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049FFC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0049FFC8u) [[unlikely]] return; }
L_0049FFC8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0049FFCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0049FFE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    [[clang::musttail]] return unit_00E8(c, 1u, depth);
}

}
