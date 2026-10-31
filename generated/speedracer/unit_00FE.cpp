#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00FE[4096] = {
    1, 0, 0, 2, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 8,
    0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0,
    0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0,
    0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0,
    0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34,
    0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0,
    0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0,
    0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56,
    0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 62, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67,
    0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78,
    0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0,
    96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0,
    0, 0, 101, 0, 0, 102, 0, 0, 103, 0, 0, 104, 0, 105, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119,
    0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 125, 0, 126, 0, 0, 0, 127, 0, 0, 0,
    0, 0, 128, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0,
    133, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 137, 0, 0, 138, 0, 139, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142,
    0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0,
    0, 0, 0, 148, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0,
    159, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0,
    171, 0, 0, 172, 0, 173, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0,
    0, 182, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0,
    0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205,
    0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0,
    211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 219, 0,
    0, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 225, 0, 226, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 229, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0,
    0, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0,
    0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262,
    0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 267, 0, 268, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 271, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0,
    0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 282, 0, 283, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0,
    0, 289, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 292, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294,
    0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 298, 0, 0, 299, 0, 0,
    0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0,
    0, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311,
    0, 0, 0, 312, 0, 0, 313, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0,
    0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 324, 0, 0, 325, 0, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 333, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 335, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0,
    0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0,
    0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0,
    0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 360,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 366, 0,
    0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 370, 0, 0, 371,
    0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375,
    0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    378, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0,
    0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0,
    0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0,
    0, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 397, 0, 0, 0, 0, 398, 0, 0,
    0, 0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 402, 0, 403, 0, 404, 0, 405, 0, 406, 0, 0,
    0, 0, 0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 416, 0, 0, 0, 0,
    0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 420, 0, 421, 0, 422, 0, 423, 0, 424, 0, 0, 0, 0, 0, 0, 425, 0,
    0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 430,
    0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 435, 0, 0, 436, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 441, 0, 442, 0, 0, 0,
    0, 0, 0, 0, 0, 443, 0, 0, 444, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0,
    0, 0, 447, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 449, 0, 0, 450, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 452, 0,
    0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 455, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0,
    0, 0, 457, 0, 0, 458, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 461, 0, 0, 0, 462, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 465, 0, 0, 466, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 470, 0, 0, 471, 0, 0, 0, 0, 472, 0, 0, 473, 0, 0, 474, 0, 0, 0, 0, 0, 0, 475,
    0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 479, 0, 0, 0,
    0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00FE(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_004F8000;
    case 2u: goto L_004F800C;
    case 3u: goto L_004F8010;
    case 4u: goto L_004F8028;
    case 5u: goto L_004F803C;
    case 6u: goto L_004F8058;
    case 7u: goto L_004F806C;
    case 8u: goto L_004F807C;
    case 9u: goto L_004F8090;
    case 10u: goto L_004F80A0;
    case 11u: goto L_004F80B0;
    case 12u: goto L_004F80C8;
    case 13u: goto L_004F80F0;
    case 14u: goto L_004F8124;
    case 15u: goto L_004F8144;
    case 16u: goto L_004F8164;
    case 17u: goto L_004F8184;
    case 18u: goto L_004F81A4;
    case 19u: goto L_004F81C4;
    case 20u: goto L_004F81E4;
    case 21u: goto L_004F8204;
    case 22u: goto L_004F8224;
    case 23u: goto L_004F8244;
    case 24u: goto L_004F8264;
    case 25u: goto L_004F8284;
    case 26u: goto L_004F8298;
    case 27u: goto L_004F82AC;
    case 28u: goto L_004F82CC;
    case 29u: goto L_004F82E0;
    case 30u: goto L_004F8310;
    case 31u: goto L_004F8330;
    case 32u: goto L_004F8340;
    case 33u: goto L_004F835C;
    case 34u: goto L_004F837C;
    case 35u: goto L_004F838C;
    case 36u: goto L_004F83A8;
    case 37u: goto L_004F83C0;
    case 38u: goto L_004F83E0;
    case 39u: goto L_004F8444;
    case 40u: goto L_004F8454;
    case 41u: goto L_004F8468;
    case 42u: goto L_004F8478;
    case 43u: goto L_004F849C;
    case 44u: goto L_004F84C0;
    case 45u: goto L_004F84D0;
    case 46u: goto L_004F85B0;
    case 47u: goto L_004F8650;
    case 48u: goto L_004F8680;
    case 49u: goto L_004F86A0;
    case 50u: goto L_004F86B0;
    case 51u: goto L_004F86E0;
    case 52u: goto L_004F86F8;
    case 53u: goto L_004F8710;
    case 54u: goto L_004F8738;
    case 55u: goto L_004F874C;
    case 56u: goto L_004F877C;
    case 57u: goto L_004F8794;
    case 58u: goto L_004F87B0;
    case 59u: goto L_004F87D0;
    case 60u: goto L_004F8810;
    case 61u: goto L_004F8824;
    case 62u: goto L_004F8828;
    case 63u: goto L_004F8834;
    case 64u: goto L_004F8874;
    case 65u: goto L_004F88B0;
    case 66u: goto L_004F88E8;
    case 67u: goto L_004F88FC;
    case 68u: goto L_004F8914;
    case 69u: goto L_004F892C;
    case 70u: goto L_004F8960;
    case 71u: goto L_004F8990;
    case 72u: goto L_004F89BC;
    case 73u: goto L_004F89D0;
    case 74u: goto L_004F89EC;
    case 75u: goto L_004F8A44;
    case 76u: goto L_004F8A54;
    case 77u: goto L_004F8A60;
    case 78u: goto L_004F8A7C;
    case 79u: goto L_004F8AA0;
    case 80u: goto L_004F8AE0;
    case 81u: goto L_004F8B20;
    case 82u: goto L_004F8B5C;
    case 83u: goto L_004F8B78;
    case 84u: goto L_004F8BB8;
    case 85u: goto L_004F8BC8;
    case 86u: goto L_004F8BD4;
    case 87u: goto L_004F8C04;
    case 88u: goto L_004F8C3C;
    case 89u: goto L_004F8C50;
    case 90u: goto L_004F8C80;
    case 91u: goto L_004F8CB0;
    case 92u: goto L_004F8CC8;
    case 93u: goto L_004F8CD4;
    case 94u: goto L_004F8CE8;
    case 95u: goto L_004F8CF4;
    case 96u: goto L_004F8D00;
    case 97u: goto L_004F8D20;
    case 98u: goto L_004F8D50;
    case 99u: goto L_004F8D68;
    case 100u: goto L_004F8D74;
    case 101u: goto L_004F8D88;
    case 102u: goto L_004F8D94;
    case 103u: goto L_004F8DA0;
    case 104u: goto L_004F8DAC;
    case 105u: goto L_004F8DB4;
    case 106u: goto L_004F8DBC;
    case 107u: goto L_004F8DCC;
    case 108u: goto L_004F8DE4;
    case 109u: goto L_004F8DF0;
    case 110u: goto L_004F8E68;
    case 111u: goto L_004F8E98;
    case 112u: goto L_004F8EB0;
    case 113u: goto L_004F8EBC;
    case 114u: goto L_004F8ED0;
    case 115u: goto L_004F8EDC;
    case 116u: goto L_004F8EE8;
    case 117u: goto L_004F8F34;
    case 118u: goto L_004F8F64;
    case 119u: goto L_004F8F7C;
    case 120u: goto L_004F8F88;
    case 121u: goto L_004F8F9C;
    case 122u: goto L_004F8FA8;
    case 123u: goto L_004F8FB4;
    case 124u: goto L_004F8FD0;
    case 125u: goto L_004F8FD8;
    case 126u: goto L_004F8FE0;
    case 127u: goto L_004F8FF0;
    case 128u: goto L_004F9008;
    case 129u: goto L_004F9014;
    case 130u: goto L_004F9024;
    case 131u: goto L_004F9038;
    case 132u: goto L_004F9068;
    case 133u: goto L_004F9080;
    case 134u: goto L_004F908C;
    case 135u: goto L_004F90A0;
    case 136u: goto L_004F90AC;
    case 137u: goto L_004F90B8;
    case 138u: goto L_004F90C4;
    case 139u: goto L_004F90CC;
    case 140u: goto L_004F90D4;
    case 141u: goto L_004F90E4;
    case 142u: goto L_004F90FC;
    case 143u: goto L_004F9108;
    case 144u: goto L_004F9124;
    case 145u: goto L_004F9154;
    case 146u: goto L_004F916C;
    case 147u: goto L_004F9178;
    case 148u: goto L_004F918C;
    case 149u: goto L_004F9198;
    case 150u: goto L_004F91A4;
    case 151u: goto L_004F91DC;
    case 152u: goto L_004F920C;
    case 153u: goto L_004F9224;
    case 154u: goto L_004F9230;
    case 155u: goto L_004F9244;
    case 156u: goto L_004F9250;
    case 157u: goto L_004F925C;
    case 158u: goto L_004F9278;
    case 159u: goto L_004F9280;
    case 160u: goto L_004F9288;
    case 161u: goto L_004F9298;
    case 162u: goto L_004F92B0;
    case 163u: goto L_004F92BC;
    case 164u: goto L_004F92CC;
    case 165u: goto L_004F9300;
    case 166u: goto L_004F9330;
    case 167u: goto L_004F9348;
    case 168u: goto L_004F9354;
    case 169u: goto L_004F9368;
    case 170u: goto L_004F9374;
    case 171u: goto L_004F9380;
    case 172u: goto L_004F938C;
    case 173u: goto L_004F9394;
    case 174u: goto L_004F939C;
    case 175u: goto L_004F93AC;
    case 176u: goto L_004F93C4;
    case 177u: goto L_004F93D0;
    case 178u: goto L_004F941C;
    case 179u: goto L_004F944C;
    case 180u: goto L_004F9464;
    case 181u: goto L_004F9470;
    case 182u: goto L_004F9484;
    case 183u: goto L_004F9490;
    case 184u: goto L_004F949C;
    case 185u: goto L_004F9500;
    case 186u: goto L_004F9510;
    case 187u: goto L_004F9534;
    case 188u: goto L_004F9550;
    case 189u: goto L_004F95A0;
    case 190u: goto L_004F95DC;
    case 191u: goto L_004F9608;
    case 192u: goto L_004F9620;
    case 193u: goto L_004F9634;
    case 194u: goto L_004F9678;
    case 195u: goto L_004F968C;
    case 196u: goto L_004F96A0;
    case 197u: goto L_004F96C0;
    case 198u: goto L_004F96CC;
    case 199u: goto L_004F96E4;
    case 200u: goto L_004F96F4;
    case 201u: goto L_004F9758;
    case 202u: goto L_004F9790;
    case 203u: goto L_004F97A8;
    case 204u: goto L_004F97B4;
    case 205u: goto L_004F97FC;
    case 206u: goto L_004F980C;
    case 207u: goto L_004F9824;
    case 208u: goto L_004F9870;
    case 209u: goto L_004F98CC;
    case 210u: goto L_004F98F0;
    case 211u: goto L_004F9900;
    case 212u: goto L_004F9924;
    case 213u: goto L_004F9930;
    case 214u: goto L_004F9980;
    case 215u: goto L_004F99A0;
    case 216u: goto L_004F99A8;
    case 217u: goto L_004F99D8;
    case 218u: goto L_004F99F0;
    case 219u: goto L_004F99F8;
    case 220u: goto L_004F9A0C;
    case 221u: goto L_004F9A18;
    case 222u: goto L_004F9A34;
    case 223u: goto L_004F9A40;
    case 224u: goto L_004F9A58;
    case 225u: goto L_004F9A64;
    case 226u: goto L_004F9A6C;
    case 227u: goto L_004F9AA0;
    case 228u: goto L_004F9AEC;
    case 229u: goto L_004F9AF8;
    case 230u: goto L_004F9B4C;
    case 231u: goto L_004F9B5C;
    case 232u: goto L_004F9BA0;
    case 233u: goto L_004F9BAC;
    case 234u: goto L_004F9BB8;
    case 235u: goto L_004F9BD4;
    case 236u: goto L_004F9BE0;
    case 237u: goto L_004F9C0C;
    case 238u: goto L_004F9C24;
    case 239u: goto L_004F9C70;
    case 240u: goto L_004F9C90;
    case 241u: goto L_004F9CA4;
    case 242u: goto L_004F9CBC;
    case 243u: goto L_004F9CC4;
    case 244u: goto L_004F9CDC;
    case 245u: goto L_004F9CF8;
    case 246u: goto L_004F9D38;
    case 247u: goto L_004F9D44;
    case 248u: goto L_004F9D60;
    case 249u: goto L_004F9DC0;
    case 250u: goto L_004F9DD8;
    case 251u: goto L_004F9DEC;
    case 252u: goto L_004F9E30;
    case 253u: goto L_004F9E44;
    case 254u: goto L_004F9E58;
    case 255u: goto L_004F9E78;
    case 256u: goto L_004F9E84;
    case 257u: goto L_004F9E9C;
    case 258u: goto L_004F9EAC;
    case 259u: goto L_004F9F18;
    case 260u: goto L_004F9F3C;
    case 261u: goto L_004F9F48;
    case 262u: goto L_004F9F7C;
    case 263u: goto L_004F9F8C;
    case 264u: goto L_004F9FA4;
    case 265u: goto L_004F9FF0;
    case 266u: goto L_004FA038;
    case 267u: goto L_004FA044;
    case 268u: goto L_004FA04C;
    case 269u: goto L_004FA054;
    case 270u: goto L_004FA064;
    case 271u: goto L_004FA08C;
    case 272u: goto L_004FA098;
    case 273u: goto L_004FA0E0;
    case 274u: goto L_004FA0F0;
    case 275u: goto L_004FA108;
    case 276u: goto L_004FA154;
    case 277u: goto L_004FA1B0;
    case 278u: goto L_004FA1D4;
    case 279u: goto L_004FA1E0;
    case 280u: goto L_004FA1EC;
    case 281u: goto L_004FA23C;
    case 282u: goto L_004FA25C;
    case 283u: goto L_004FA264;
    case 284u: goto L_004FA294;
    case 285u: goto L_004FA2AC;
    case 286u: goto L_004FA2C4;
    case 287u: goto L_004FA2DC;
    case 288u: goto L_004FA2F8;
    case 289u: goto L_004FA304;
    case 290u: goto L_004FA30C;
    case 291u: goto L_004FA340;
    case 292u: goto L_004FA38C;
    case 293u: goto L_004FA398;
    case 294u: goto L_004FA3FC;
    case 295u: goto L_004FA408;
    case 296u: goto L_004FA418;
    case 297u: goto L_004FA45C;
    case 298u: goto L_004FA468;
    case 299u: goto L_004FA474;
    case 300u: goto L_004FA490;
    case 301u: goto L_004FA4D0;
    case 302u: goto L_004FA510;
    case 303u: goto L_004FA528;
    case 304u: goto L_004FA534;
    case 305u: goto L_004FA574;
    case 306u: goto L_004FA5B0;
    case 307u: goto L_004FA5E4;
    case 308u: goto L_004FA5F4;
    case 309u: goto L_004FA608;
    case 310u: goto L_004FA624;
    case 311u: goto L_004FA67C;
    case 312u: goto L_004FA68C;
    case 313u: goto L_004FA698;
    case 314u: goto L_004FA6B4;
    case 315u: goto L_004FA6D0;
    case 316u: goto L_004FA710;
    case 317u: goto L_004FA750;
    case 318u: goto L_004FA770;
    case 319u: goto L_004FA788;
    case 320u: goto L_004FA798;
    case 321u: goto L_004FA7B8;
    case 322u: goto L_004FA7C8;
    case 323u: goto L_004FA7F0;
    case 324u: goto L_004FA818;
    case 325u: goto L_004FA824;
    case 326u: goto L_004FA830;
    case 327u: goto L_004FA848;
    case 328u: goto L_004FA854;
    case 329u: goto L_004FA894;
    case 330u: goto L_004FA8D0;
    case 331u: goto L_004FA910;
    case 332u: goto L_004FA920;
    case 333u: goto L_004FA928;
    case 334u: goto L_004FA934;
    case 335u: goto L_004FA984;
    case 336u: goto L_004FA990;
    case 337u: goto L_004FA9B4;
    case 338u: goto L_004FA9D4;
    case 339u: goto L_004FA9F4;
    case 340u: goto L_004FAA18;
    case 341u: goto L_004FAA34;
    case 342u: goto L_004FAA48;
    case 343u: goto L_004FAA80;
    case 344u: goto L_004FAABC;
    case 345u: goto L_004FAACC;
    case 346u: goto L_004FAAD4;
    case 347u: goto L_004FAAFC;
    case 348u: goto L_004FAB48;
    case 349u: goto L_004FAB54;
    case 350u: goto L_004FAB74;
    case 351u: goto L_004FAB94;
    case 352u: goto L_004FABB4;
    case 353u: goto L_004FABD4;
    case 354u: goto L_004FABF4;
    case 355u: goto L_004FAC08;
    case 356u: goto L_004FAC40;
    case 357u: goto L_004FAC54;
    case 358u: goto L_004FACA0;
    case 359u: goto L_004FACE8;
    case 360u: goto L_004FACFC;
    case 361u: goto L_004FAD50;
    case 362u: goto L_004FAD64;
    case 363u: goto L_004FADB8;
    case 364u: goto L_004FADC8;
    case 365u: goto L_004FADD8;
    case 366u: goto L_004FADF8;
    case 367u: goto L_004FAE08;
    case 368u: goto L_004FAE40;
    case 369u: goto L_004FAE68;
    case 370u: goto L_004FAE70;
    case 371u: goto L_004FAE7C;
    case 372u: goto L_004FAE98;
    case 373u: goto L_004FAEB0;
    case 374u: goto L_004FAEC8;
    case 375u: goto L_004FAEFC;
    case 376u: goto L_004FAF10;
    case 377u: goto L_004FAF40;
    case 378u: goto L_004FAF80;
    case 379u: goto L_004FAF9C;
    case 380u: goto L_004FAFB0;
    case 381u: goto L_004FAFD8;
    case 382u: goto L_004FAFEC;
    case 383u: goto L_004FB050;
    case 384u: goto L_004FB078;
    case 385u: goto L_004FB08C;
    case 386u: goto L_004FB0EC;
    case 387u: goto L_004FB104;
    case 388u: goto L_004FB11C;
    case 389u: goto L_004FB150;
    case 390u: goto L_004FB198;
    case 391u: goto L_004FB1C0;
    case 392u: goto L_004FB1F4;
    case 393u: goto L_004FB210;
    case 394u: goto L_004FB220;
    case 395u: goto L_004FB248;
    case 396u: goto L_004FB258;
    case 397u: goto L_004FB260;
    case 398u: goto L_004FB274;
    case 399u: goto L_004FB294;
    case 400u: goto L_004FB2A4;
    case 401u: goto L_004FB2CC;
    case 402u: goto L_004FB2D4;
    case 403u: goto L_004FB2DC;
    case 404u: goto L_004FB2E4;
    case 405u: goto L_004FB2EC;
    case 406u: goto L_004FB2F4;
    case 407u: goto L_004FB310;
    case 408u: goto L_004FB320;
    case 409u: goto L_004FB348;
    case 410u: goto L_004FB358;
    case 411u: goto L_004FB384;
    case 412u: goto L_004FB394;
    case 413u: goto L_004FB3B0;
    case 414u: goto L_004FB3C0;
    case 415u: goto L_004FB3E4;
    case 416u: goto L_004FB3EC;
    case 417u: goto L_004FB410;
    case 418u: goto L_004FB428;
    case 419u: goto L_004FB4B4;
    case 420u: goto L_004FB4BC;
    case 421u: goto L_004FB4C4;
    case 422u: goto L_004FB4CC;
    case 423u: goto L_004FB4D4;
    case 424u: goto L_004FB4DC;
    case 425u: goto L_004FB4F8;
    case 426u: goto L_004FB508;
    case 427u: goto L_004FB530;
    case 428u: goto L_004FB540;
    case 429u: goto L_004FB56C;
    case 430u: goto L_004FB57C;
    case 431u: goto L_004FB598;
    case 432u: goto L_004FB5A8;
    case 433u: goto L_004FB654;
    case 434u: goto L_004FB664;
    case 435u: goto L_004FB698;
    case 436u: goto L_004FB6A4;
    case 437u: goto L_004FB6BC;
    case 438u: goto L_004FB6DC;
    case 439u: goto L_004FB710;
    case 440u: goto L_004FB75C;
    case 441u: goto L_004FB768;
    case 442u: goto L_004FB770;
    case 443u: goto L_004FB794;
    case 444u: goto L_004FB7A0;
    case 445u: goto L_004FB7BC;
    case 446u: goto L_004FB7EC;
    case 447u: goto L_004FB808;
    case 448u: goto L_004FB824;
    case 449u: goto L_004FB840;
    case 450u: goto L_004FB84C;
    case 451u: goto L_004FB860;
    case 452u: goto L_004FB878;
    case 453u: goto L_004FB898;
    case 454u: goto L_004FB8C0;
    case 455u: goto L_004FB8D0;
    case 456u: goto L_004FB8E8;
    case 457u: goto L_004FB908;
    case 458u: goto L_004FB914;
    case 459u: goto L_004FB920;
    case 460u: goto L_004FB960;
    case 461u: goto L_004FB988;
    case 462u: goto L_004FB998;
    case 463u: goto L_004FB9AC;
    case 464u: goto L_004FBA18;
    case 465u: goto L_004FBA28;
    case 466u: goto L_004FBA34;
    case 467u: goto L_004FBA44;
    case 468u: goto L_004FBAEC;
    case 469u: goto L_004FBB14;
    case 470u: goto L_004FBB28;
    case 471u: goto L_004FBB34;
    case 472u: goto L_004FBB48;
    case 473u: goto L_004FBB54;
    case 474u: goto L_004FBB60;
    case 475u: goto L_004FBB7C;
    case 476u: goto L_004FBB8C;
    case 477u: goto L_004FBBAC;
    case 478u: goto L_004FBBD8;
    case 479u: goto L_004FBBF0;
    case 480u: goto L_004FBC10;
    case 481u: goto L_004FBC50;
    case 482u: goto L_004FBCB4;
    case 483u: goto L_004FBDAC;
    case 484u: goto L_004FBDB8;
    case 485u: goto L_004FBF9C;
    default: bad_entry(c, 0x004F8000u); return;
    }
L_004F8000:
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F800Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FA(c, 3u, depth + 1u); else { c.pc = 0x004E8020u; return; } if (c.pc != 0x004F800Cu) [[unlikely]] return; }
L_004F800C:
    st32((c.r[17].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 1;
L_004F8010:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 60u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0] + 60u));  goto L_004F8044; }
    set32(c.r[4], 0u + 44u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8028u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F8028u) [[unlikely]] return; }
L_004F8028:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 40u), c.r[2].w[0]);  goto L_004F8040; }
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F803Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FC(c, 223u, depth + 1u); else { c.pc = 0x004F17D0u; return; } if (c.pc != 0x004F803Cu) [[unlikely]] return; }
L_004F803C:
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 1;
L_004F8040:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 60u));
    c.budget -= 1;
L_004F8044:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_004F8098; }
    set32(c.r[4], 0u + 84u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8058u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F8058u) [[unlikely]] return; }
L_004F8058:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  goto L_004F8070; }
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F806Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 79u, depth + 1u); else { c.pc = 0x003F4D60u; return; } if (c.pc != 0x004F806Cu) [[unlikely]] return; }
L_004F806C:
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 1;
L_004F8070:
    set32(c.r[4], 0u + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F807Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F807Cu) [[unlikely]] return; }
L_004F807C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 32u), c.r[2].w[0]);  goto L_004F8094; }
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8090u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 360u, depth + 1u); else { c.pc = 0x003DF340u; return; } if (c.pc != 0x004F8090u) [[unlikely]] return; }
L_004F8090:
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 1;
L_004F8094:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004F8098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F80A0u); set32(c.r[4], 0u + 172u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F80A0u) [[unlikely]] return; }
L_004F80A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[17].w[0] + 44u), c.r[2].w[0]);  goto L_004F80B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F80B0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F3(c, 504u, depth + 1u); else { c.pc = 0x004CFD20u; return; } if (c.pc != 0x004F80B0u) [[unlikely]] return; }
L_004F80B0:
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 1;
L_004F80B4:
    set32(c.r[4], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 48u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F80C8u); st8((c.r[17].w[0] + 61u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004F80C8u) [[unlikely]] return; }
L_004F80C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004F80F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[4].w[0] + 61u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 9;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 4u), 0u);  goto L_004F8128; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8124u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F8124u) [[unlikely]] return; }
L_004F8124:
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 1;
L_004F8128:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 8u), 0u);  goto L_004F8148; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8144u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F8144u) [[unlikely]] return; }
L_004F8144:
    st32((c.r[17].w[0] + 8u), 0u);
    c.budget -= 1;
L_004F8148:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 12u), 0u);  goto L_004F8168; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8164u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F8164u) [[unlikely]] return; }
L_004F8164:
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 1;
L_004F8168:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 16u), 0u);  goto L_004F8188; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8184u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F8184u) [[unlikely]] return; }
L_004F8184:
    st32((c.r[17].w[0] + 16u), 0u);
    c.budget -= 1;
L_004F8188:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 20u), 0u);  goto L_004F81A8; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F81A4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F81A4u) [[unlikely]] return; }
L_004F81A4:
    st32((c.r[17].w[0] + 20u), 0u);
    c.budget -= 1;
L_004F81A8:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 24u), 0u);  goto L_004F81C8; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F81C4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F81C4u) [[unlikely]] return; }
L_004F81C4:
    st32((c.r[17].w[0] + 24u), 0u);
    c.budget -= 1;
L_004F81C8:
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 28u), 0u);  goto L_004F81E8; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F81E4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F81E4u) [[unlikely]] return; }
L_004F81E4:
    st32((c.r[17].w[0] + 28u), 0u);
    c.budget -= 1;
L_004F81E8:
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 32u), 0u);  goto L_004F8208; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8204u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F8204u) [[unlikely]] return; }
L_004F8204:
    st32((c.r[17].w[0] + 32u), 0u);
    c.budget -= 1;
L_004F8208:
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 36u), 0u);  goto L_004F8228; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8224u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F8224u) [[unlikely]] return; }
L_004F8224:
    st32((c.r[17].w[0] + 36u), 0u);
    c.budget -= 1;
L_004F8228:
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[17].w[0] + 40u), 0u);  goto L_004F8248; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8244u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F8244u) [[unlikely]] return; }
L_004F8244:
    st32((c.r[17].w[0] + 40u), 0u);
    c.budget -= 1;
L_004F8248:
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 44u);  if (t) { goto L_004F8264; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8264u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F8264u) [[unlikely]] return; }
L_004F8264:
    st32((c.r[16].w[0]), 0u);
    st8((c.r[17].w[0] + 48u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8284u); set32(c.r[4], c.r[29].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F8284u) [[unlikely]] return; }
L_004F8284:
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_004F82D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8298u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004F8298u) [[unlikely]] return; }
L_004F8298:
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F82ACu); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004F82ACu) [[unlikely]] return; }
L_004F82AC:
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004F82CC; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F82CCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F82CCu) [[unlikely]] return; }
L_004F82CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004F82D0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004F82E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004F83C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 23112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8310u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00FE(c, 13u, depth + 1u); else { c.pc = 0x004F80F0u; return; } if (c.pc != 0x004F8310u) [[unlikely]] return; }
L_004F8310:
    set32(c.r[2], c.r[17].w[0] + 56u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 52u);  goto L_004F8360; }
    set32(c.r[18], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004F835C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8330u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004F8330u) [[unlikely]] return; }
L_004F8330:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8340u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004F8340u) [[unlikely]] return; }
L_004F8340:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004F835C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F835Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F835Cu) [[unlikely]] return; }
L_004F835C:
    set32(c.r[2], c.r[17].w[0] + 52u);
    c.budget -= 1;
L_004F8360:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_004F83AC; }
    set32(c.r[18], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004F83A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F837Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004F837Cu) [[unlikely]] return; }
L_004F837C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F838Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004F838Cu) [[unlikely]] return; }
L_004F838C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004F83A8; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F83A8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F83A8u) [[unlikely]] return; }
L_004F83A8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_004F83AC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004F83C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F83C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004F83C0u) [[unlikely]] return; }
L_004F83C0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004F83C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004F83E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 23112u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    c.budget -= 23;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[4].w[0] + 52u), 0u);  if (t) { goto L_004F8454; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8444u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004F8444u) [[unlikely]] return; }
L_004F8444:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8454u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004F8454u) [[unlikely]] return; }
L_004F8454:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 56u), 0u);  if (t) { goto L_004F8478; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8468u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004F8468u) [[unlikely]] return; }
L_004F8468:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8478u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004F8478u) [[unlikely]] return; }
L_004F8478:
    st8((c.r[17].w[0] + 60u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 61u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[17].w[0] + 62u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 44u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F849Cu); st8((c.r[17].w[0] + 48u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00FD(c, 596u, depth + 1u); else { c.pc = 0x004F7D00u; return; } if (c.pc != 0x004F849Cu) [[unlikely]] return; }
L_004F849C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004F84C0:
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_004F84D0:
    set32(c.r[6], ld32((c.r[5].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[8] = c.r[3].w[0];
    c.f[0] = ld32((c.r[28].w[0] - 31536u));
    c.r[3].d[0] = c.r[6].d[0] | 2ull;
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.f[1] = ld32((c.r[28].w[0] - 32620u));
    c.f[3] = ld32((c.r[4].w[0] + 4u));
    c.f[2] = ld32((c.r[5].w[0] + 24u));
    c.f[7] = ld32((c.r[28].w[0] - 32076u));
    c.f[3] = fp::mul(c.f[0], c.f[3]);
    c.f[5] = fp::mul(c.f[3], c.f[1]);
    c.f[6] = fp::mul(c.f[3], c.f[8]);
    c.f[1] = fp::add(c.f[2], c.f[6]);
    st32((c.r[5].w[0] + 24u), c.f[1]);
    c.f[4] = fp::mul(c.f[3], c.f[7]);
    c.f[3] = ld32((c.r[5].w[0] + 28u));
    c.f[2] = ld32((c.r[28].w[0] - 31936u));
    c.f[1] = 0u;
    c.f[3] = fp::add(c.f[3], c.f[5]);
    st32((c.r[5].w[0] + 28u), c.f[3]);
    c.f[3] = ld32((c.r[5].w[0] + 32u));
    c.f[3] = fp::add(c.f[3], c.f[4]);
    st32((c.r[5].w[0] + 32u), c.f[3]);
    c.f[3] = ld32((c.r[5].w[0] + 36u));
    c.f[3] = fp::add(c.f[3], c.f[6]);
    st32((c.r[5].w[0] + 36u), c.f[3]);
    c.f[4] = ld32((c.r[4].w[0] + 4u));
    c.f[3] = ld32((c.r[5].w[0] + 40u));
    c.f[6] = fp::mul(c.f[0], c.f[4]);
    c.f[5] = fp::mul(c.f[6], c.f[8]);
    c.f[3] = fp::add(c.f[3], c.f[5]);
    st32((c.r[5].w[0] + 40u), c.f[3]);
    c.f[4] = fp::mul(c.f[6], c.f[2]);
    c.f[2] = ld32((c.r[5].w[0] + 44u));
    c.f[3] = fp::mul(c.f[6], c.f[7]);
    c.f[2] = fp::add(c.f[2], c.f[4]);
    st32((c.r[5].w[0] + 44u), c.f[2]);
    c.f[2] = ld32((c.r[5].w[0] + 48u));
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[5].w[0] + 48u), c.f[2]);
    c.f[2] = ld32((c.r[5].w[0] + 52u));
    c.f[2] = fp::add(c.f[2], c.f[5]);
    st32((c.r[5].w[0] + 52u), c.f[2]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.f[2] = ld32((c.r[5].w[0] + 116u));
    c.f[3] = ld32((c.r[4].w[0] + 4u));
    c.facc = fp::add(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[3]));
    c.budget -= 53;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 116u), c.f[0]);  c.pc = t; return; }
L_004F85B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_004F85CC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004F85CC:
    c.r[6].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[6].d[0] == 0ull) { c.f[1] = ld32((c.r[4].w[0] + 4u));  goto L_004F8624; }
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.f[2] = ld32((c.r[4].w[0] + 4u));  goto L_004F85F0; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_004F8644; } }
L_004F85F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[1] = 0u;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[3] = c.r[5].w[0];
    c.facc = fp::add(c.f[1], c.f[2]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[3], c.f[13]));
    c.f[0] = c.r[3].w[0];
    st32((c.r[4].w[0] + 4u), c.f[1]);
    c.f[0] = fp::max(c.f[1], c.f[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.f[0]);  if (t) { goto L_004F8644; } }
L_004F8624:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = 0u;
    c.f[2] = c.r[3].w[0];
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[2], c.f[13]));
    st32((c.r[4].w[0] + 4u), c.f[1]);
    c.f[0] = fp::max(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.budget -= 8;
L_004F8644:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));  c.pc = t; return; }
L_004F8650:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_004F8684; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_004F8680; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8680u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004F8680u) [[unlikely]] return; }
L_004F8680:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004F8684:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004F86A0:
    st32((c.r[4].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_004F86B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004F86F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 23088u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F86E0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 121u, depth + 1u); else { c.pc = 0x0013D730u; return; } if (c.pc != 0x004F86E0u) [[unlikely]] return; }
L_004F86E0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004F86FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F86F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004F86F8u) [[unlikely]] return; }
L_004F86F8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004F86FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004F8710:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8738u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 86u, depth + 1u); else { c.pc = 0x0013CF10u; return; } if (c.pc != 0x004F8738u) [[unlikely]] return; }
L_004F8738:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F874Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F874Cu) [[unlikely]] return; }
L_004F874C:
    set32(c.r[16], c.r[16].w[0] - c.r[2].w[0]);
    c.r[1].d[0] = c.r[16].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_004F87A4; }
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[17].d[0] = c.r[16].d[0] + 0ull;  goto L_004F87A0; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F877Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F877Cu) [[unlikely]] return; }
L_004F877C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F879C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8794u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 113u, depth + 1u); else { c.pc = 0x0013D500u; return; } if (c.pc != 0x004F8794u) [[unlikely]] return; }
L_004F8794:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_004F87B4; } }
L_004F879C:
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004F87A0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_004F87A4:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F87B0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 113u, depth + 1u); else { c.pc = 0x0013D500u; return; } if (c.pc != 0x004F87B0u) [[unlikely]] return; }
L_004F87B0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_004F87B4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004F87D0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[21].w[0] + 88u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8810u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0009(c, 119u, depth + 1u); else { c.pc = 0x001250C0u; return; } if (c.pc != 0x004F8810u) [[unlikely]] return; }
L_004F8810:
    set32(c.r[22], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[23], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[17], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[18], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 176u)));  if (t) { goto L_004F8864; } }
    goto L_004F8828;
L_004F8824:
    set32(c.r[16], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 1;
L_004F8828:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8834u); set32(c.r[4], c.r[19].w[0] + 8u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004F8834u) [[unlikely]] return; }
L_004F8834:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 4u);  goto L_004F8844; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_004F8884; } }
L_004F8844:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[18].d[0]) { set32(c.r[6], ld32((c.r[21].w[0] + 116u)));  goto L_004F8868; }
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[23].d[0]) { set32(c.r[17], ld32((c.r[16].w[0])));  goto L_004F8860; }
    c.r[16].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_004F8860:
    set32(c.r[18], c.r[17].w[0] + 512u);
    c.budget -= 1;
L_004F8864:
    set32(c.r[6], ld32((c.r[21].w[0] + 116u)));
    c.budget -= 1;
L_004F8868:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8874u); set32(c.r[5], c.r[21].w[0] + 88u);  if (depth < kMaxDepth) unit_0009(c, 119u, depth + 1u); else { c.pc = 0x001250C0u; return; } if (c.pc != 0x004F8874u) [[unlikely]] return; }
L_004F8874:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[19], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004F8828u | kUnwind; return; } goto L_004F8828; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004F8884:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_004F88B0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[21].w[0] + 116u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F88E8u); set32(c.r[5], c.r[21].w[0] + 88u);  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x004F88E8u) [[unlikely]] return; }
L_004F88E8:
    set32(c.r[16], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[21].w[0] + 88u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F88FCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x004F88FCu) [[unlikely]] return; }
L_004F88FC:
    set32(c.r[17], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[22], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[19], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[20], ld32((c.r[29].w[0] + 148u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[29].w[0] + 128u)));  if (t) { goto L_004F8950; } }
L_004F8914:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 4u);  goto L_004F8930; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F892Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F892Cu) [[unlikely]] return; }
L_004F892C:
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.budget -= 1;
L_004F8930:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[20].d[0];  if (t) { goto L_004F8950; } }
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 3;
    if (c.r[18].d[0] != c.r[22].d[0]) { set32(c.r[19], ld32((c.r[18].w[0])));  goto L_004F894C; }
    c.r[18].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[18].w[0])));
    c.budget -= 2;
L_004F894C:
    set32(c.r[20], c.r[19].w[0] + 512u);
    c.budget -= 1;
L_004F8950:
    c.budget -= 2;
    if (c.r[19].d[0] != c.r[16].d[0]) { set32(c.r[4], ld32((c.r[19].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004F8914u | kUnwind; return; } goto L_004F8914; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8960u); set32(c.r[4], c.r[21].w[0] + 88u);  if (depth < kMaxDepth) unit_0009(c, 148u, depth + 1u); else { c.pc = 0x001258C0u; return; } if (c.pc != 0x004F8960u) [[unlikely]] return; }
L_004F8960:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_004F8990:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 116u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F89BCu); set32(c.r[5], c.r[17].w[0] + 88u);  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x004F89BCu) [[unlikely]] return; }
L_004F89BC:
    set32(c.r[18], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[17].w[0] + 88u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F89D0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x004F89D0u) [[unlikely]] return; }
L_004F89D0:
    set32(c.r[5], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 136u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 148u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 128u)));  if (t) { goto L_004F8A0C; } }
L_004F89EC:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[8].d[0];  if (t) { goto L_004F8A0C; } }
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[7], ld32((c.r[4].w[0])));  goto L_004F8A08; }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[4].w[0])));
    c.budget -= 2;
L_004F8A08:
    set32(c.r[8], c.r[7].w[0] + 512u);
    c.budget -= 1;
L_004F8A0C:
    c.budget -= 2;
    if (c.r[7].d[0] == c.r[18].d[0]) { st32((c.r[29].w[0] + 192u), c.r[4].w[0]);  goto L_004F8A24; }
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[16].d[0]) { set32(c.r[7], c.r[7].w[0] + 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004F89ECu | kUnwind; return; } goto L_004F89EC; }
    st32((c.r[29].w[0] + 192u), c.r[4].w[0]);
    c.budget -= 1;
L_004F8A24:
    st32((c.r[29].w[0] + 196u), c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    st32((c.r[29].w[0] + 200u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 204u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 208u), c.r[7].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8A44u); st32((c.r[29].w[0] + 212u), c.r[8].w[0]);  if (depth < kMaxDepth) unit_00FE(c, 80u, depth + 1u); else { c.pc = 0x004F8AE0u; return; } if (c.pc != 0x004F8A44u) [[unlikely]] return; }
L_004F8A44:
    set32(c.r[5], c.r[17].w[0] + 88u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8A54u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_00DA(c, 143u, depth + 1u); else { c.pc = 0x00469B30u; return; } if (c.pc != 0x004F8A54u) [[unlikely]] return; }
L_004F8A54:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8A60u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_00FE(c, 79u, depth + 1u); else { c.pc = 0x004F8AA0u; return; } if (c.pc != 0x004F8A60u) [[unlikely]] return; }
L_004F8A60:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_004F8A80; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8A7Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F8A7Cu) [[unlikely]] return; }
L_004F8A7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_004F8A80:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_004F8AA0:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 20u), c.r[3].w[0]);  c.pc = t; return; }
L_004F8AE0:
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 20u), c.r[3].w[0]);  c.pc = t; return; }
L_004F8B20:
    set32(c.r[29], c.r[29].w[0] - 1168u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[29].w[0] + 560u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[20].w[0] + 88u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8B5Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x004F8B5Cu) [[unlikely]] return; }
L_004F8B5C:
    set32(c.r[22], ld32((c.r[29].w[0] + 564u)));
    set32(c.r[23], ld32((c.r[29].w[0] + 568u)));
    set32(c.r[21], ld32((c.r[29].w[0] + 572u)));
    set32(c.r[17], ld32((c.r[29].w[0] + 576u)));
    set32(c.r[18], ld32((c.r[29].w[0] + 580u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 560u)));  if (t) { goto L_004F8C2C; } }
L_004F8B78:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[19].w[0] + 60u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 464u);  goto L_004F8B98; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[17], c.r[17].w[0] + 4u);  goto L_004F8C0C; }
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.budget -= 1;
L_004F8B98:
    set32(c.r[5], c.r[29].w[0] + 912u);
    st32((c.r[29].w[0] + 912u), c.r[16].w[0]);
    st32((c.r[29].w[0] + 916u), c.r[22].w[0]);
    st32((c.r[29].w[0] + 920u), c.r[23].w[0]);
    st32((c.r[29].w[0] + 924u), c.r[21].w[0]);
    st32((c.r[29].w[0] + 928u), c.r[17].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8BB8u); st32((c.r[29].w[0] + 932u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_00FE(c, 80u, depth + 1u); else { c.pc = 0x004F8AE0u; return; } if (c.pc != 0x004F8BB8u) [[unlikely]] return; }
L_004F8BB8:
    set32(c.r[4], c.r[29].w[0] + 496u);
    set32(c.r[5], c.r[20].w[0] + 88u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8BC8u); set32(c.r[6], c.r[29].w[0] + 464u);  if (depth < kMaxDepth) unit_00DA(c, 143u, depth + 1u); else { c.pc = 0x00469B30u; return; } if (c.pc != 0x004F8BC8u) [[unlikely]] return; }
L_004F8BC8:
    set32(c.r[4], c.r[29].w[0] + 944u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8BD4u); set32(c.r[5], c.r[29].w[0] + 496u);  if (depth < kMaxDepth) unit_00FE(c, 79u, depth + 1u); else { c.pc = 0x004F8AA0u; return; } if (c.pc != 0x004F8BD4u) [[unlikely]] return; }
L_004F8BD4:
    set32(c.r[22], ld32((c.r[29].w[0] + 948u)));
    set32(c.r[23], ld32((c.r[29].w[0] + 952u)));
    set32(c.r[21], ld32((c.r[29].w[0] + 956u)));
    set32(c.r[17], ld32((c.r[29].w[0] + 960u)));
    set32(c.r[18], ld32((c.r[29].w[0] + 964u)));
    c.budget -= 7;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 944u)));  if (t) { goto L_004F8C2C; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8C04u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004F8C04u) [[unlikely]] return; }
L_004F8C04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[20].w[0] + 116u)));  if (t) { goto L_004F8C30; } }
L_004F8C0C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[18].d[0];  if (t) { goto L_004F8C2C; } }
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[21].d[0]) { set32(c.r[17], ld32((c.r[16].w[0])));  goto L_004F8C28; }
    c.r[16].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_004F8C28:
    set32(c.r[18], c.r[17].w[0] + 512u);
    c.budget -= 1;
L_004F8C2C:
    set32(c.r[6], ld32((c.r[20].w[0] + 116u)));
    c.budget -= 1;
L_004F8C30:
    set32(c.r[4], c.r[29].w[0] + 528u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8C3Cu); set32(c.r[5], c.r[20].w[0] + 88u);  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x004F8C3Cu) [[unlikely]] return; }
L_004F8C3C:
    set32(c.r[3], ld32((c.r[29].w[0] + 544u)));
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[3].d[0]) { set32(c.r[19], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004F8B78u | kUnwind; return; } goto L_004F8B78; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[20].w[0] + 12u)));  if (t) { goto L_004F94A8; } }
L_004F8C50:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 306u));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 28u)));  goto L_004F8DF8; }
    set32(c.r[4], 0u + 208u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 1104u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 1108u), 0u);
    st32((c.r[29].w[0] + 1112u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8C80u); st32((c.r[29].w[0] + 1152u), 0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F8C80u) [[unlikely]] return; }
L_004F8C80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F8CB0; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 19680u);
    set32(c.r[7], c.r[29].w[0] + 1104u);
    set32(c.r[8], 0u + 4u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8CB0u); set32(c.r[10], c.r[10].w[0] - 7040u);  if (depth < kMaxDepth) unit_00D7(c, 24u, depth + 1u); else { c.pc = 0x0045C460u; return; } if (c.pc != 0x004F8CB0u) [[unlikely]] return; }
L_004F8CB0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 1152u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8CC8u); set32(c.r[6], c.r[6].w[0] + 19681u);  if (depth < kMaxDepth) unit_00D8(c, 144u, depth + 1u); else { c.pc = 0x004616D0u; return; } if (c.pc != 0x004F8CC8u) [[unlikely]] return; }
L_004F8CC8:
    set32(c.r[5], ld32((c.r[29].w[0] + 1152u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8CD4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D7(c, 178u, depth + 1u); else { c.pc = 0x0045DF10u; return; } if (c.pc != 0x004F8CD4u) [[unlikely]] return; }
L_004F8CD4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[20].w[0] + 88u);  goto L_004F8CEC; }
    set32(c.r[4], ld32((c.r[29].w[0] + 1152u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8CE8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D7(c, 7u, depth + 1u); else { c.pc = 0x0045C250u; return; } if (c.pc != 0x004F8CE8u) [[unlikely]] return; }
L_004F8CE8:
    set32(c.r[4], c.r[20].w[0] + 88u);
    c.budget -= 1;
L_004F8CEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8CF4u); set32(c.r[5], c.r[29].w[0] + 1152u);  if (depth < kMaxDepth) unit_0009(c, 107u, depth + 1u); else { c.pc = 0x00124E90u; return; } if (c.pc != 0x004F8CF4u) [[unlikely]] return; }
L_004F8CF4:
    set32(c.r[5], ld32((c.r[20].w[0] + 140u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8D00u); set32(c.r[4], ld32((c.r[29].w[0] + 1152u)));  if (depth < kMaxDepth) unit_00D6(c, 464u, depth + 1u); else { c.pc = 0x0045B9D0u; return; } if (c.pc != 0x004F8D00u) [[unlikely]] return; }
L_004F8D00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], 0u + 208u);
    st32((c.r[29].w[0] + 1096u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 1088u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 1092u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8D20u); st32((c.r[29].w[0] + 1148u), 0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F8D20u) [[unlikely]] return; }
L_004F8D20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F8D50; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 19680u);
    set32(c.r[7], c.r[29].w[0] + 1088u);
    set32(c.r[8], 0u + 4u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8D50u); set32(c.r[10], c.r[10].w[0] - 7040u);  if (depth < kMaxDepth) unit_00D7(c, 24u, depth + 1u); else { c.pc = 0x0045C460u; return; } if (c.pc != 0x004F8D50u) [[unlikely]] return; }
L_004F8D50:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 1148u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8D68u); set32(c.r[6], c.r[6].w[0] + 19681u);  if (depth < kMaxDepth) unit_00D8(c, 144u, depth + 1u); else { c.pc = 0x004616D0u; return; } if (c.pc != 0x004F8D68u) [[unlikely]] return; }
L_004F8D68:
    set32(c.r[5], ld32((c.r[29].w[0] + 1148u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8D74u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D7(c, 178u, depth + 1u); else { c.pc = 0x0045DF10u; return; } if (c.pc != 0x004F8D74u) [[unlikely]] return; }
L_004F8D74:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[20].w[0] + 88u);  goto L_004F8D8C; }
    set32(c.r[4], ld32((c.r[29].w[0] + 1148u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8D88u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D7(c, 7u, depth + 1u); else { c.pc = 0x0045C250u; return; } if (c.pc != 0x004F8D88u) [[unlikely]] return; }
L_004F8D88:
    set32(c.r[4], c.r[20].w[0] + 88u);
    c.budget -= 1;
L_004F8D8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8D94u); set32(c.r[5], c.r[29].w[0] + 1148u);  if (depth < kMaxDepth) unit_0009(c, 107u, depth + 1u); else { c.pc = 0x00124E90u; return; } if (c.pc != 0x004F8D94u) [[unlikely]] return; }
L_004F8D94:
    set32(c.r[5], ld32((c.r[20].w[0] + 140u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8DA0u); set32(c.r[4], ld32((c.r[29].w[0] + 1148u)));  if (depth < kMaxDepth) unit_00D6(c, 464u, depth + 1u); else { c.pc = 0x0045B9D0u; return; } if (c.pc != 0x004F8DA0u) [[unlikely]] return; }
L_004F8DA0:
    set32(c.r[16], ld32((c.r[29].w[0] + 1148u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8DACu); set32(c.r[4], c.r[29].w[0] + 400u);  if (depth < kMaxDepth) unit_0009(c, 318u, depth + 1u); else { c.pc = 0x001275E0u; return; } if (c.pc != 0x004F8DACu) [[unlikely]] return; }
L_004F8DAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8DB4u); set32(c.r[4], c.r[29].w[0] + 400u);  if (depth < kMaxDepth) unit_0009(c, 317u, depth + 1u); else { c.pc = 0x00127590u; return; } if (c.pc != 0x004F8DB4u) [[unlikely]] return; }
L_004F8DB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8DBCu); c.f[12] = ld32((c.r[28].w[0] - 31836u));  if (depth < kMaxDepth) unit_0009(c, 316u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x004F8DBCu) [[unlikely]] return; }
L_004F8DBC:
    c.f[12] = ld32((c.r[28].w[0] - 31836u));
    st32((c.r[29].w[0] + 440u), c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8DCCu); st32((c.r[29].w[0] + 400u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 315u, depth + 1u); else { c.pc = 0x00127570u; return; } if (c.pc != 0x004F8DCCu) [[unlikely]] return; }
L_004F8DCC:
    st32((c.r[29].w[0] + 432u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 848u);
    c.f[0] = c.f[0] ^ fp::kSign;
    set32(c.r[5], c.r[29].w[0] + 400u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8DE4u); st32((c.r[29].w[0] + 408u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 313u, depth + 1u); else { c.pc = 0x001274E0u; return; } if (c.pc != 0x004F8DE4u) [[unlikely]] return; }
L_004F8DE4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8DF0u); set32(c.r[5], c.r[29].w[0] + 848u);  if (depth < kMaxDepth) unit_00D7(c, 6u, depth + 1u); else { c.pc = 0x0045C1C0u; return; } if (c.pc != 0x004F8DF0u) [[unlikely]] return; }
L_004F8DF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_004F92C0; } }
L_004F8DF8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004F92BC; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 412u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004F92BC; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 364u)));
    c.r[2].d[0] = c.r[3].d[0] ^ 2ull;
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_004F8E2C; } }
    c.r[2].d[0] = c.r[4].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_004F901C; }
L_004F8E2C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004F8EF0; } }
    st32((c.r[29].w[0] + 1072u), c.r[18].w[0]);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 1076u), 0u);  if (t) { goto L_004F8E4C; } }
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1080u), c.f[0]);  if (t) { goto L_004F8E58; } }
L_004F8E4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 1080u), c.f[0]);
    c.budget -= 3;
L_004F8E58:
    set32(c.r[4], 0u + 208u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8E68u); st32((c.r[29].w[0] + 1144u), 0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F8E68u) [[unlikely]] return; }
L_004F8E68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F8E98; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 19680u);
    set32(c.r[7], c.r[29].w[0] + 1072u);
    set32(c.r[8], 0u + 4u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8E98u); set32(c.r[10], c.r[10].w[0] - 7040u);  if (depth < kMaxDepth) unit_00D7(c, 24u, depth + 1u); else { c.pc = 0x0045C460u; return; } if (c.pc != 0x004F8E98u) [[unlikely]] return; }
L_004F8E98:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 1144u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8EB0u); set32(c.r[6], c.r[6].w[0] + 19681u);  if (depth < kMaxDepth) unit_00D8(c, 144u, depth + 1u); else { c.pc = 0x004616D0u; return; } if (c.pc != 0x004F8EB0u) [[unlikely]] return; }
L_004F8EB0:
    set32(c.r[5], ld32((c.r[29].w[0] + 1144u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8EBCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D7(c, 178u, depth + 1u); else { c.pc = 0x0045DF10u; return; } if (c.pc != 0x004F8EBCu) [[unlikely]] return; }
L_004F8EBC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[20].w[0] + 88u);  goto L_004F8ED4; }
    set32(c.r[4], ld32((c.r[29].w[0] + 1144u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8ED0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D7(c, 7u, depth + 1u); else { c.pc = 0x0045C250u; return; } if (c.pc != 0x004F8ED0u) [[unlikely]] return; }
L_004F8ED0:
    set32(c.r[4], c.r[20].w[0] + 88u);
    c.budget -= 1;
L_004F8ED4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8EDCu); set32(c.r[5], c.r[29].w[0] + 1144u);  if (depth < kMaxDepth) unit_0009(c, 107u, depth + 1u); else { c.pc = 0x00124E90u; return; } if (c.pc != 0x004F8EDCu) [[unlikely]] return; }
L_004F8EDC:
    set32(c.r[5], ld32((c.r[20].w[0] + 140u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8EE8u); set32(c.r[4], ld32((c.r[29].w[0] + 1144u)));  if (depth < kMaxDepth) unit_00D6(c, 464u, depth + 1u); else { c.pc = 0x0045B9D0u; return; } if (c.pc != 0x004F8EE8u) [[unlikely]] return; }
L_004F8EE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 1144u)));  if (t) { goto L_004F8FB8; } }
L_004F8EF0:
    c.r[2].d[0] = c.r[4].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004F8FB8; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 1056u), c.r[18].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 1060u), c.r[2].w[0]);  if (t) { goto L_004F8F18; } }
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1064u), c.f[0]);  if (t) { goto L_004F8F24; } }
L_004F8F18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 1064u), c.f[0]);
    c.budget -= 3;
L_004F8F24:
    set32(c.r[4], 0u + 208u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8F34u); st32((c.r[29].w[0] + 1140u), 0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F8F34u) [[unlikely]] return; }
L_004F8F34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F8F64; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 19680u);
    set32(c.r[7], c.r[29].w[0] + 1056u);
    set32(c.r[8], 0u + 4u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8F64u); set32(c.r[10], c.r[10].w[0] - 7040u);  if (depth < kMaxDepth) unit_00D7(c, 24u, depth + 1u); else { c.pc = 0x0045C460u; return; } if (c.pc != 0x004F8F64u) [[unlikely]] return; }
L_004F8F64:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 1140u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8F7Cu); set32(c.r[6], c.r[6].w[0] + 19681u);  if (depth < kMaxDepth) unit_00D8(c, 144u, depth + 1u); else { c.pc = 0x004616D0u; return; } if (c.pc != 0x004F8F7Cu) [[unlikely]] return; }
L_004F8F7C:
    set32(c.r[5], ld32((c.r[29].w[0] + 1140u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8F88u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D7(c, 178u, depth + 1u); else { c.pc = 0x0045DF10u; return; } if (c.pc != 0x004F8F88u) [[unlikely]] return; }
L_004F8F88:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[20].w[0] + 88u);  goto L_004F8FA0; }
    set32(c.r[4], ld32((c.r[29].w[0] + 1140u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8F9Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D7(c, 7u, depth + 1u); else { c.pc = 0x0045C250u; return; } if (c.pc != 0x004F8F9Cu) [[unlikely]] return; }
L_004F8F9C:
    set32(c.r[4], c.r[20].w[0] + 88u);
    c.budget -= 1;
L_004F8FA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8FA8u); set32(c.r[5], c.r[29].w[0] + 1140u);  if (depth < kMaxDepth) unit_0009(c, 107u, depth + 1u); else { c.pc = 0x00124E90u; return; } if (c.pc != 0x004F8FA8u) [[unlikely]] return; }
L_004F8FA8:
    set32(c.r[5], ld32((c.r[20].w[0] + 140u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8FB4u); set32(c.r[4], ld32((c.r[29].w[0] + 1140u)));  if (depth < kMaxDepth) unit_00D6(c, 464u, depth + 1u); else { c.pc = 0x0045B9D0u; return; } if (c.pc != 0x004F8FB4u) [[unlikely]] return; }
L_004F8FB4:
    set32(c.r[17], ld32((c.r[29].w[0] + 1140u)));
    c.budget -= 1;
L_004F8FB8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004F92BC; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004F92BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8FD0u); set32(c.r[4], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0009(c, 318u, depth + 1u); else { c.pc = 0x001275E0u; return; } if (c.pc != 0x004F8FD0u) [[unlikely]] return; }
L_004F8FD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8FD8u); set32(c.r[4], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0009(c, 317u, depth + 1u); else { c.pc = 0x00127590u; return; } if (c.pc != 0x004F8FD8u) [[unlikely]] return; }
L_004F8FD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8FE0u); c.f[12] = ld32((c.r[28].w[0] - 31836u));  if (depth < kMaxDepth) unit_0009(c, 316u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x004F8FE0u) [[unlikely]] return; }
L_004F8FE0:
    c.f[12] = ld32((c.r[28].w[0] - 31836u));
    st32((c.r[29].w[0] + 376u), c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F8FF0u); st32((c.r[29].w[0] + 336u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 315u, depth + 1u); else { c.pc = 0x00127570u; return; } if (c.pc != 0x004F8FF0u) [[unlikely]] return; }
L_004F8FF0:
    st32((c.r[29].w[0] + 368u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 784u);
    c.f[0] = c.f[0] ^ fp::kSign;
    set32(c.r[5], c.r[29].w[0] + 336u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9008u); st32((c.r[29].w[0] + 344u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 313u, depth + 1u); else { c.pc = 0x001274E0u; return; } if (c.pc != 0x004F9008u) [[unlikely]] return; }
L_004F9008:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9014u); set32(c.r[5], c.r[29].w[0] + 784u);  if (depth < kMaxDepth) unit_00D7(c, 6u, depth + 1u); else { c.pc = 0x0045C1C0u; return; } if (c.pc != 0x004F9014u) [[unlikely]] return; }
L_004F9014:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F92BC; } }
L_004F901C:
    set32(c.r[4], 0u + 208u);
    st32((c.r[29].w[0] + 1048u), c.r[2].w[0]);
    c.budget -= 2;
L_004F9024:
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 1040u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 1044u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9038u); st32((c.r[29].w[0] + 1136u), 0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F9038u) [[unlikely]] return; }
L_004F9038:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F9068; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 19680u);
    set32(c.r[7], c.r[29].w[0] + 1040u);
    set32(c.r[8], 0u + 4u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9068u); set32(c.r[10], c.r[10].w[0] - 7040u);  if (depth < kMaxDepth) unit_00D7(c, 24u, depth + 1u); else { c.pc = 0x0045C460u; return; } if (c.pc != 0x004F9068u) [[unlikely]] return; }
L_004F9068:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 1136u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9080u); set32(c.r[6], c.r[6].w[0] + 19681u);  if (depth < kMaxDepth) unit_00D8(c, 144u, depth + 1u); else { c.pc = 0x004616D0u; return; } if (c.pc != 0x004F9080u) [[unlikely]] return; }
L_004F9080:
    set32(c.r[5], ld32((c.r[29].w[0] + 1136u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F908Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D7(c, 178u, depth + 1u); else { c.pc = 0x0045DF10u; return; } if (c.pc != 0x004F908Cu) [[unlikely]] return; }
L_004F908C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[20].w[0] + 88u);  goto L_004F90A4; }
    set32(c.r[4], ld32((c.r[29].w[0] + 1136u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F90A0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D7(c, 7u, depth + 1u); else { c.pc = 0x0045C250u; return; } if (c.pc != 0x004F90A0u) [[unlikely]] return; }
L_004F90A0:
    set32(c.r[4], c.r[20].w[0] + 88u);
    c.budget -= 1;
L_004F90A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F90ACu); set32(c.r[5], c.r[29].w[0] + 1136u);  if (depth < kMaxDepth) unit_0009(c, 107u, depth + 1u); else { c.pc = 0x00124E90u; return; } if (c.pc != 0x004F90ACu) [[unlikely]] return; }
L_004F90AC:
    set32(c.r[5], ld32((c.r[20].w[0] + 140u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F90B8u); set32(c.r[4], ld32((c.r[29].w[0] + 1136u)));  if (depth < kMaxDepth) unit_00D6(c, 464u, depth + 1u); else { c.pc = 0x0045B9D0u; return; } if (c.pc != 0x004F90B8u) [[unlikely]] return; }
L_004F90B8:
    set32(c.r[17], ld32((c.r[29].w[0] + 1136u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F90C4u); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0009(c, 318u, depth + 1u); else { c.pc = 0x001275E0u; return; } if (c.pc != 0x004F90C4u) [[unlikely]] return; }
L_004F90C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F90CCu); set32(c.r[4], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_0009(c, 317u, depth + 1u); else { c.pc = 0x00127590u; return; } if (c.pc != 0x004F90CCu) [[unlikely]] return; }
L_004F90CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F90D4u); c.f[12] = ld32((c.r[28].w[0] - 31836u));  if (depth < kMaxDepth) unit_0009(c, 316u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x004F90D4u) [[unlikely]] return; }
L_004F90D4:
    c.f[12] = ld32((c.r[28].w[0] - 31836u));
    st32((c.r[29].w[0] + 312u), c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F90E4u); st32((c.r[29].w[0] + 272u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 315u, depth + 1u); else { c.pc = 0x00127570u; return; } if (c.pc != 0x004F90E4u) [[unlikely]] return; }
L_004F90E4:
    st32((c.r[29].w[0] + 304u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 720u);
    c.f[0] = c.f[0] ^ fp::kSign;
    set32(c.r[5], c.r[29].w[0] + 272u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F90FCu); st32((c.r[29].w[0] + 280u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 313u, depth + 1u); else { c.pc = 0x001274E0u; return; } if (c.pc != 0x004F90FCu) [[unlikely]] return; }
L_004F90FC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9108u); set32(c.r[5], c.r[29].w[0] + 720u);  if (depth < kMaxDepth) unit_00D7(c, 6u, depth + 1u); else { c.pc = 0x0045C1C0u; return; } if (c.pc != 0x004F9108u) [[unlikely]] return; }
L_004F9108:
    set32(c.r[4], 0u + 208u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 1024u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 1028u), 0u);
    st32((c.r[29].w[0] + 1032u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9124u); st32((c.r[29].w[0] + 1132u), 0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F9124u) [[unlikely]] return; }
L_004F9124:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F9154; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 19680u);
    set32(c.r[7], c.r[29].w[0] + 1024u);
    set32(c.r[8], 0u + 4u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9154u); set32(c.r[10], c.r[10].w[0] - 7040u);  if (depth < kMaxDepth) unit_00D7(c, 24u, depth + 1u); else { c.pc = 0x0045C460u; return; } if (c.pc != 0x004F9154u) [[unlikely]] return; }
L_004F9154:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 1132u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F916Cu); set32(c.r[6], c.r[6].w[0] + 19681u);  if (depth < kMaxDepth) unit_00D8(c, 144u, depth + 1u); else { c.pc = 0x004616D0u; return; } if (c.pc != 0x004F916Cu) [[unlikely]] return; }
L_004F916C:
    set32(c.r[5], ld32((c.r[29].w[0] + 1132u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9178u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D7(c, 178u, depth + 1u); else { c.pc = 0x0045DF10u; return; } if (c.pc != 0x004F9178u) [[unlikely]] return; }
L_004F9178:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[20].w[0] + 88u);  goto L_004F9190; }
    set32(c.r[4], ld32((c.r[29].w[0] + 1132u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F918Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D7(c, 7u, depth + 1u); else { c.pc = 0x0045C250u; return; } if (c.pc != 0x004F918Cu) [[unlikely]] return; }
L_004F918C:
    set32(c.r[4], c.r[20].w[0] + 88u);
    c.budget -= 1;
L_004F9190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9198u); set32(c.r[5], c.r[29].w[0] + 1132u);  if (depth < kMaxDepth) unit_0009(c, 107u, depth + 1u); else { c.pc = 0x00124E90u; return; } if (c.pc != 0x004F9198u) [[unlikely]] return; }
L_004F9198:
    set32(c.r[5], ld32((c.r[20].w[0] + 140u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F91A4u); set32(c.r[4], ld32((c.r[29].w[0] + 1132u)));  if (depth < kMaxDepth) unit_00D6(c, 464u, depth + 1u); else { c.pc = 0x0045B9D0u; return; } if (c.pc != 0x004F91A4u) [[unlikely]] return; }
L_004F91A4:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 1008u), c.r[18].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 1012u), c.r[2].w[0]);  if (t) { goto L_004F91C0; } }
    c.f[0] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 1016u), c.f[0]);  if (t) { goto L_004F91CC; } }
L_004F91C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 1016u), c.f[0]);
    c.budget -= 3;
L_004F91CC:
    set32(c.r[4], 0u + 208u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F91DCu); st32((c.r[29].w[0] + 1128u), 0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F91DCu) [[unlikely]] return; }
L_004F91DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F920C; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 19680u);
    set32(c.r[7], c.r[29].w[0] + 1008u);
    set32(c.r[8], 0u + 4u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F920Cu); set32(c.r[10], c.r[10].w[0] - 7040u);  if (depth < kMaxDepth) unit_00D7(c, 24u, depth + 1u); else { c.pc = 0x0045C460u; return; } if (c.pc != 0x004F920Cu) [[unlikely]] return; }
L_004F920C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 1128u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9224u); set32(c.r[6], c.r[6].w[0] + 19681u);  if (depth < kMaxDepth) unit_00D8(c, 144u, depth + 1u); else { c.pc = 0x004616D0u; return; } if (c.pc != 0x004F9224u) [[unlikely]] return; }
L_004F9224:
    set32(c.r[5], ld32((c.r[29].w[0] + 1128u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9230u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D7(c, 178u, depth + 1u); else { c.pc = 0x0045DF10u; return; } if (c.pc != 0x004F9230u) [[unlikely]] return; }
L_004F9230:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[20].w[0] + 88u);  goto L_004F9248; }
    set32(c.r[4], ld32((c.r[29].w[0] + 1128u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9244u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D7(c, 7u, depth + 1u); else { c.pc = 0x0045C250u; return; } if (c.pc != 0x004F9244u) [[unlikely]] return; }
L_004F9244:
    set32(c.r[4], c.r[20].w[0] + 88u);
    c.budget -= 1;
L_004F9248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9250u); set32(c.r[5], c.r[29].w[0] + 1128u);  if (depth < kMaxDepth) unit_0009(c, 107u, depth + 1u); else { c.pc = 0x00124E90u; return; } if (c.pc != 0x004F9250u) [[unlikely]] return; }
L_004F9250:
    set32(c.r[5], ld32((c.r[20].w[0] + 140u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F925Cu); set32(c.r[4], ld32((c.r[29].w[0] + 1128u)));  if (depth < kMaxDepth) unit_00D6(c, 464u, depth + 1u); else { c.pc = 0x0045B9D0u; return; } if (c.pc != 0x004F925Cu) [[unlikely]] return; }
L_004F925C:
    set32(c.r[17], ld32((c.r[29].w[0] + 1128u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004F92BC; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_004F92BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9278u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0009(c, 318u, depth + 1u); else { c.pc = 0x001275E0u; return; } if (c.pc != 0x004F9278u) [[unlikely]] return; }
L_004F9278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9280u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0009(c, 317u, depth + 1u); else { c.pc = 0x00127590u; return; } if (c.pc != 0x004F9280u) [[unlikely]] return; }
L_004F9280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9288u); c.f[12] = ld32((c.r[28].w[0] - 31836u));  if (depth < kMaxDepth) unit_0009(c, 316u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x004F9288u) [[unlikely]] return; }
L_004F9288:
    c.f[12] = ld32((c.r[28].w[0] - 31836u));
    st32((c.r[29].w[0] + 248u), c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9298u); st32((c.r[29].w[0] + 208u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 315u, depth + 1u); else { c.pc = 0x00127570u; return; } if (c.pc != 0x004F9298u) [[unlikely]] return; }
L_004F9298:
    st32((c.r[29].w[0] + 240u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 656u);
    c.f[0] = c.f[0] ^ fp::kSign;
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F92B0u); st32((c.r[29].w[0] + 216u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 313u, depth + 1u); else { c.pc = 0x001274E0u; return; } if (c.pc != 0x004F92B0u) [[unlikely]] return; }
L_004F92B0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F92BCu); set32(c.r[5], c.r[29].w[0] + 656u);  if (depth < kMaxDepth) unit_00D7(c, 6u, depth + 1u); else { c.pc = 0x0045C1C0u; return; } if (c.pc != 0x004F92BCu) [[unlikely]] return; }
L_004F92BC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_004F92C0:
    set32(c.r[5], c.r[29].w[0] + 1160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F92CCu); set32(c.r[6], c.r[29].w[0] + 1156u);  if (depth < kMaxDepth) unit_00D9(c, 95u, depth + 1u); else { c.pc = 0x00464CE0u; return; } if (c.pc != 0x004F92CCu) [[unlikely]] return; }
L_004F92CC:
    c.f[1] = ld32((c.r[29].w[0] + 1160u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[29].w[0] + 1156u));  goto L_004F93D4; }
    st32((c.r[29].w[0] + 1000u), c.f[1]);
    set32(c.r[4], 0u + 208u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 992u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 996u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9300u); st32((c.r[29].w[0] + 1124u), 0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F9300u) [[unlikely]] return; }
L_004F9300:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F9330; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 19680u);
    set32(c.r[7], c.r[29].w[0] + 992u);
    set32(c.r[8], 0u + 4u);
    set32(c.r[9], 0u + 2u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9330u); set32(c.r[10], c.r[10].w[0] - 7040u);  if (depth < kMaxDepth) unit_00D7(c, 24u, depth + 1u); else { c.pc = 0x0045C460u; return; } if (c.pc != 0x004F9330u) [[unlikely]] return; }
L_004F9330:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 1124u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9348u); set32(c.r[6], c.r[6].w[0] + 19694u);  if (depth < kMaxDepth) unit_00D8(c, 144u, depth + 1u); else { c.pc = 0x004616D0u; return; } if (c.pc != 0x004F9348u) [[unlikely]] return; }
L_004F9348:
    set32(c.r[5], ld32((c.r[29].w[0] + 1124u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9354u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D7(c, 178u, depth + 1u); else { c.pc = 0x0045DF10u; return; } if (c.pc != 0x004F9354u) [[unlikely]] return; }
L_004F9354:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[20].w[0] + 88u);  goto L_004F936C; }
    set32(c.r[4], ld32((c.r[29].w[0] + 1124u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9368u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D7(c, 7u, depth + 1u); else { c.pc = 0x0045C250u; return; } if (c.pc != 0x004F9368u) [[unlikely]] return; }
L_004F9368:
    set32(c.r[4], c.r[20].w[0] + 88u);
    c.budget -= 1;
L_004F936C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9374u); set32(c.r[5], c.r[29].w[0] + 1124u);  if (depth < kMaxDepth) unit_0009(c, 107u, depth + 1u); else { c.pc = 0x00124E90u; return; } if (c.pc != 0x004F9374u) [[unlikely]] return; }
L_004F9374:
    set32(c.r[5], ld32((c.r[20].w[0] + 140u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9380u); set32(c.r[4], ld32((c.r[29].w[0] + 1124u)));  if (depth < kMaxDepth) unit_00D6(c, 464u, depth + 1u); else { c.pc = 0x0045B9D0u; return; } if (c.pc != 0x004F9380u) [[unlikely]] return; }
L_004F9380:
    set32(c.r[16], ld32((c.r[29].w[0] + 1124u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F938Cu); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 318u, depth + 1u); else { c.pc = 0x001275E0u; return; } if (c.pc != 0x004F938Cu) [[unlikely]] return; }
L_004F938C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9394u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0009(c, 317u, depth + 1u); else { c.pc = 0x00127590u; return; } if (c.pc != 0x004F9394u) [[unlikely]] return; }
L_004F9394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F939Cu); c.f[12] = ld32((c.r[28].w[0] - 31836u));  if (depth < kMaxDepth) unit_0009(c, 316u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x004F939Cu) [[unlikely]] return; }
L_004F939C:
    c.f[12] = ld32((c.r[28].w[0] - 31836u));
    st32((c.r[29].w[0] + 184u), c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F93ACu); st32((c.r[29].w[0] + 144u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 315u, depth + 1u); else { c.pc = 0x00127570u; return; } if (c.pc != 0x004F93ACu) [[unlikely]] return; }
L_004F93AC:
    st32((c.r[29].w[0] + 176u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 592u);
    c.f[0] = c.f[0] ^ fp::kSign;
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F93C4u); st32((c.r[29].w[0] + 152u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 313u, depth + 1u); else { c.pc = 0x001274E0u; return; } if (c.pc != 0x004F93C4u) [[unlikely]] return; }
L_004F93C4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F93D0u); set32(c.r[5], c.r[29].w[0] + 592u);  if (depth < kMaxDepth) unit_00D7(c, 6u, depth + 1u); else { c.pc = 0x0045C1C0u; return; } if (c.pc != 0x004F93D0u) [[unlikely]] return; }
L_004F93D0:
    c.f[1] = ld32((c.r[29].w[0] + 1156u));
    c.budget -= 1;
L_004F93D4:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[3].d[0] = c.r[19].d[0] << 32;  goto L_004F94A0; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004F949C; } }
    set32(c.r[4], 0u + 208u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 984u), c.f[1]);
    st32((c.r[29].w[0] + 976u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 980u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F941Cu); st32((c.r[29].w[0] + 1120u), 0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004F941Cu) [[unlikely]] return; }
L_004F941C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004F944C; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 19680u);
    set32(c.r[7], c.r[29].w[0] + 976u);
    set32(c.r[8], 0u + 4u);
    set32(c.r[9], 0u + 2u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F944Cu); set32(c.r[10], c.r[10].w[0] - 7040u);  if (depth < kMaxDepth) unit_00D7(c, 24u, depth + 1u); else { c.pc = 0x0045C460u; return; } if (c.pc != 0x004F944Cu) [[unlikely]] return; }
L_004F944C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[29].w[0] + 1120u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9464u); set32(c.r[6], c.r[6].w[0] + 19694u);  if (depth < kMaxDepth) unit_00D8(c, 144u, depth + 1u); else { c.pc = 0x004616D0u; return; } if (c.pc != 0x004F9464u) [[unlikely]] return; }
L_004F9464:
    set32(c.r[5], ld32((c.r[29].w[0] + 1120u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9470u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D7(c, 178u, depth + 1u); else { c.pc = 0x0045DF10u; return; } if (c.pc != 0x004F9470u) [[unlikely]] return; }
L_004F9470:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[20].w[0] + 88u);  goto L_004F9488; }
    set32(c.r[4], ld32((c.r[29].w[0] + 1120u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9484u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D7(c, 7u, depth + 1u); else { c.pc = 0x0045C250u; return; } if (c.pc != 0x004F9484u) [[unlikely]] return; }
L_004F9484:
    set32(c.r[4], c.r[20].w[0] + 88u);
    c.budget -= 1;
L_004F9488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9490u); set32(c.r[5], c.r[29].w[0] + 1120u);  if (depth < kMaxDepth) unit_0009(c, 107u, depth + 1u); else { c.pc = 0x00124E90u; return; } if (c.pc != 0x004F9490u) [[unlikely]] return; }
L_004F9490:
    set32(c.r[5], ld32((c.r[20].w[0] + 140u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F949Cu); set32(c.r[4], ld32((c.r[29].w[0] + 1120u)));  if (depth < kMaxDepth) unit_00D6(c, 464u, depth + 1u); else { c.pc = 0x0045B9D0u; return; } if (c.pc != 0x004F949Cu) [[unlikely]] return; }
L_004F949C:
    c.r[3].d[0] = c.r[19].d[0] << 32;
    c.budget -= 1;
L_004F94A0:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[19], c.r[3].w[0] + 4u);
    c.budget -= 2;
L_004F94A8:
    set32(c.r[5], ld32((c.r[20].w[0] + 8u)));
    c.r[3].d[0] = c.r[19].d[0] << 32;
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = c.r[19].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004F8C50u | kUnwind; return; } goto L_004F8C50; }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1168u);  c.pc = t; return; }
L_004F9500:
    c.budget -= 2;
    { c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0045EC40u | kUnwind; return; } [[clang::musttail]] return unit_00D7(c, 272u, depth); }
L_004F9510:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004F9588; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[16].w[0] + 12u)));  if (t) { goto L_004F955C; } }
L_004F9534:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 364u)));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[17].d[0] << 32;  goto L_004F9554; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9550u);  if (depth < kMaxDepth) unit_00D9(c, 61u, depth + 1u); else { c.pc = 0x00464690u; return; } if (c.pc != 0x004F9550u) [[unlikely]] return; }
L_004F9550:
    c.r[3].d[0] = c.r[17].d[0] << 32;
    c.budget -= 1;
L_004F9554:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[17], c.r[3].w[0] + 4u);
    c.budget -= 2;
L_004F955C:
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.r[3].d[0] = c.r[17].d[0] << 32;
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[17].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004F9534u | kUnwind; return; } goto L_004F9534; }
L_004F9588:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004F95A0:
    set32(c.r[29], c.r[29].w[0] - 400u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F95DCu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_00FE(c, 301u, depth + 1u); else { c.pc = 0x004FA4D0u; return; } if (c.pc != 0x004F95DCu) [[unlikely]] return; }
L_004F95DC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[20].w[0] + 80u), c.r[18].w[0]);
    st32((c.r[20].w[0] + 84u), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 80u)));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 240u);  goto L_004F95FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_004F9C3C; } }
L_004F95FC:
    set32(c.r[5], c.r[20].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9608u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x004F9608u) [[unlikely]] return; }
L_004F9608:
    set32(c.r[23], ld32((c.r[29].w[0] + 244u)));
    set32(c.r[30], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[17], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[22], ld32((c.r[29].w[0] + 260u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 240u)));  if (t) { goto L_004F9668; } }
L_004F9620:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[21], ld32((c.r[17].w[0])));  if (t) { goto L_004F963C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9634u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D8(c, 254u, depth + 1u); else { c.pc = 0x00462FC0u; return; } if (c.pc != 0x004F9634u) [[unlikely]] return; }
L_004F9634:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004F9644; } }
L_004F963C:
    set32(c.r[2], 0u + 1u);
    st8((c.r[21].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_004F9644:
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[22].d[0]; st32((c.r[21].w[0] + 32u), c.r[19].w[0]);  if (t) { goto L_004F9668; } }
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[30].d[0]) { set32(c.r[17], ld32((c.r[16].w[0])));  goto L_004F9664; }
    c.r[16].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_004F9664:
    set32(c.r[22], c.r[17].w[0] + 512u);
    c.budget -= 1;
L_004F9668:
    set32(c.r[6], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9678u); set32(c.r[5], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x004F9678u) [[unlikely]] return; }
L_004F9678:
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F9620u | kUnwind; return; } goto L_004F9620; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], ld32((c.r[20].w[0] + 12u)));  if (t) { goto L_004F9714; } }
L_004F968C:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F96A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 187u, depth + 1u); else { c.pc = 0x0046A6F0u; return; } if (c.pc != 0x004F96A0u) [[unlikely]] return; }
L_004F96A0:
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; c.r[23].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004F96C4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F96C0u); c.r[22].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_00D8(c, 256u, depth + 1u); else { c.pc = 0x00463020u; return; } if (c.pc != 0x004F96C0u) [[unlikely]] return; }
L_004F96C0:
    c.r[23].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_004F96C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004F96F8; } }
L_004F96CC:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { c.r[2].d[0] = c.r[23].d[0] + 0ull;  goto L_004F96E4; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F96E4u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D8(c, 233u, depth + 1u); else { c.pc = 0x00462920u; return; } if (c.pc != 0x004F96E4u) [[unlikely]] return; }
L_004F96E4:
    c.r[6].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F96F4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 190u, depth + 1u); else { c.pc = 0x0046A780u; return; } if (c.pc != 0x004F96F4u) [[unlikely]] return; }
L_004F96F4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_004F96F8:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F96CCu | kUnwind; return; } goto L_004F96CC; } }
    c.r[2].d[0] = c.r[21].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[21], c.r[2].w[0] + 4u);
    c.budget -= 3;
L_004F9714:
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.r[2].d[0] = c.r[21].d[0] << 32;
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[21].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004F968Cu | kUnwind; return; } goto L_004F968C; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 80u)));  goto L_004F99AC; }
    c.r[2].d[0] = c.r[19].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9758u); c.r[21].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_00D8(c, 251u, depth + 1u); else { c.pc = 0x00462ED0u; return; } if (c.pc != 0x004F9758u) [[unlikely]] return; }
L_004F9758:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[23].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 204u), c.r[17].w[0]);
    c.budget -= 5;
    { const bool t = c.r[21].d[0] == 0ull; c.r[30].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_004F9774; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[28].w[0] - 32564u));  if (t) { goto L_004F9778; } }
L_004F9774:
    c.f[20] = ld32((c.r[28].w[0] - 31936u));
    c.budget -= 1;
L_004F9778:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9790u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 180u, depth + 1u); else { c.pc = 0x0046A500u; return; } if (c.pc != 0x004F9790u) [[unlikely]] return; }
L_004F9790:
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[20] = c.f[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F97A8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 180u, depth + 1u); else { c.pc = 0x0046A500u; return; } if (c.pc != 0x004F97A8u) [[unlikely]] return; }
L_004F97A8:
    c.f[20] = fp::sub(c.f[20], c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 176u), 0u);  if (t) { goto L_004F989C; } }
L_004F97B4:
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[22], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[22].w[0] + 28u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_004F97E0; } }
    set32(c.r[2], ld32((c.r[22].w[0] + 24u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 2;
L_004F97E0:
    c.budget -= 2;
    if (c.r[21].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004F97F4; }
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[17].d[0]) { set32(c.r[3], ld32((c.r[22].w[0] + 24u)));  goto L_004F983C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004F97F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F97FCu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00D9(c, 54u, depth + 1u); else { c.pc = 0x00464580u; return; } if (c.pc != 0x004F97FCu) [[unlikely]] return; }
L_004F97FC:
    set32(c.r[6], ld32((c.r[16].w[0] + 40u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_004F982C; } }
L_004F980C:
    set32(c.r[3], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_004F982C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9824u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 76u, depth + 1u); else { c.pc = 0x00464830u; return; } if (c.pc != 0x004F9824u) [[unlikely]] return; }
L_004F9824:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = fp::add(c.f[20], c.f[0]);  if (t) { goto L_004F9838; } }
L_004F982C:
    c.r[2].d[0] = c.r[5].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 364u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004F980Cu | kUnwind; return; } goto L_004F980C; }
L_004F9838:
    set32(c.r[3], ld32((c.r[22].w[0] + 24u)));
    c.budget -= 1;
L_004F983C:
    set32(c.r[2], ld32((c.r[22].w[0] + 28u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 20u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004F9864; }
    c.budget -= 2;
    if (c.r[30].d[0] != 0ull) { c.r[30].d[0] = 0ull + 0ull;  goto L_004F9860; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[30], 0u + 1u);  if (t) { goto L_004F9860; } }
L_004F9860:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004F9864:
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9870u); st32((c.r[22].w[0] + 32u), c.r[23].w[0]);  if (depth < kMaxDepth) unit_00DA(c, 187u, depth + 1u); else { c.pc = 0x0046A6F0u; return; } if (c.pc != 0x004F9870u) [[unlikely]] return; }
L_004F9870:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 324u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 176u)));  goto L_004F9890; }
    c.budget -= 2;
    if (c.r[23].d[0] != 0ull) { c.r[23].d[0] = 0ull + 0ull;  goto L_004F988C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[23], 0u + 1u);  if (t) { goto L_004F988C; } }
L_004F988C:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 1;
L_004F9890:
    st32((c.r[29].w[0] + 204u), c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 3;
L_004F989C:
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 176u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004F97B4u | kUnwind; return; } goto L_004F97B4; }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { c.f[12] = ld32((c.r[28].w[0] - 31936u));  goto L_004F98BC; }
    c.f[12] = ld32((c.r[28].w[0] - 32564u));
    c.budget -= 1;
L_004F98BC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F98CCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 180u, depth + 1u); else { c.pc = 0x0046A500u; return; } if (c.pc != 0x004F98CCu) [[unlikely]] return; }
L_004F98CC:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull; c.f[20] = fp::add(c.f[20], c.f[0]);  if (t) { goto L_004F9924; } }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { c.f[12] = ld32((c.r[28].w[0] - 31936u));  goto L_004F98E0; }
    c.f[12] = ld32((c.r[28].w[0] - 32564u));
    c.budget -= 1;
L_004F98E0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F98F0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 180u, depth + 1u); else { c.pc = 0x0046A500u; return; } if (c.pc != 0x004F98F0u) [[unlikely]] return; }
L_004F98F0:
    c.f[12] = c.f[0] ^ fp::kSign;
    c.f[0] = 0u;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[28].w[0] - 31592u));  if (t) { goto L_004F9904; } }
L_004F9900:
    c.f[12] = fp::add(c.f[12], c.f[1]);
    c.budget -= 1;
L_004F9904:
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F9900u | kUnwind; return; } goto L_004F9900; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9924u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 54u, depth + 1u); else { c.pc = 0x00464580u; return; } if (c.pc != 0x004F9924u) [[unlikely]] return; }
L_004F9924:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_004F9988; } }
L_004F9930:
    set32(c.r[3], c.r[22].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != c.r[4].d[0];  if (t) { goto L_004F9954; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 2;
L_004F9954:
    c.budget -= 2;
    if (c.r[21].d[0] != 0ull) { c.f[12] = ld32((c.r[16].w[0] + 376u));  goto L_004F9968; }
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[17].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004F9984; }
    c.f[12] = ld32((c.r[16].w[0] + 376u));
    c.budget -= 1;
L_004F9968:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004F9978; }
    c.f[12] = fp::sub(c.f[20], c.f[12]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_004F9978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9980u);  if (depth < kMaxDepth) unit_00D9(c, 54u, depth + 1u); else { c.pc = 0x00464580u; return; } if (c.pc != 0x004F9980u) [[unlikely]] return; }
L_004F9980:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004F9984:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_004F9988:
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    c.r[2].d[0] = c.r[22].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 36u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004F9930u | kUnwind; return; } goto L_004F9930; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F99A0u); set32(c.r[4], ld32((c.r[20].w[0] + 80u)));  if (depth < kMaxDepth) unit_00D8(c, 217u, depth + 1u); else { c.pc = 0x00462600u; return; } if (c.pc != 0x004F99A0u) [[unlikely]] return; }
L_004F99A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F99A8u); set32(c.r[4], ld32((c.r[20].w[0] + 80u)));  if (depth < kMaxDepth) unit_00D8(c, 210u, depth + 1u); else { c.pc = 0x004623F0u; return; } if (c.pc != 0x004F99A8u) [[unlikely]] return; }
L_004F99A8:
    set32(c.r[2], ld32((c.r[20].w[0] + 80u)));
    c.budget -= 1;
L_004F99AC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 8u)));  goto L_004F9BD8; }
    set32(c.r[2], 0u + 6u);
    set32(c.r[4], c.r[29].w[0] + 392u);
    st32((c.r[29].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 356u), 0u);
    st32((c.r[29].w[0] + 360u), 0u);
    st32((c.r[29].w[0] + 364u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 140u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F99D8u); set32(c.r[5], c.r[2].w[0] + 20u);  if (depth < kMaxDepth) unit_00C8(c, 68u, depth + 1u); else { c.pc = 0x00420E60u; return; } if (c.pc != 0x004F99D8u) [[unlikely]] return; }
L_004F99D8:
    c.r[5].d[0] = c.r[19].d[0] ^ 0ull;
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.r[5].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F99F0u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_0102(c, 283u, depth + 1u); else { c.pc = 0x00509EE0u; return; } if (c.pc != 0x004F99F0u) [[unlikely]] return; }
L_004F99F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F99F8u); set32(c.r[4], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0102(c, 238u, depth + 1u); else { c.pc = 0x005099A0u; return; } if (c.pc != 0x004F99F8u) [[unlikely]] return; }
L_004F99F8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], ld32((c.r[20].w[0] + 12u)));  goto L_004F9B18; }
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9A0Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0102(c, 279u, depth + 1u); else { c.pc = 0x00509E50u; return; } if (c.pc != 0x004F9A0Cu) [[unlikely]] return; }
L_004F9A0C:
    set32(c.r[4], c.r[29].w[0] + 392u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9A18u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00C8(c, 49u, depth + 1u); else { c.pc = 0x00420C00u; return; } if (c.pc != 0x004F9A18u) [[unlikely]] return; }
L_004F9A18:
    set32(c.r[4], ld32((c.r[29].w[0] + 364u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_004F9C3C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004F9A34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9A34u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004F9A34u) [[unlikely]] return; }
L_004F9A34:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F9C3C; } }
L_004F9A40:
    set32(c.r[5], c.r[29].w[0] + 392u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[6], c.r[29].w[0] + 320u);
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9A58u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 155u, depth + 1u); else { c.pc = 0x00465D10u; return; } if (c.pc != 0x004F9A58u) [[unlikely]] return; }
L_004F9A58:
    set32(c.r[5], ld32((c.r[20].w[0] + 140u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9A64u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 172u, depth + 1u); else { c.pc = 0x0046A2C0u; return; } if (c.pc != 0x004F9A64u) [[unlikely]] return; }
L_004F9A64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004F9AFC; } }
L_004F9A6C:
    set32(c.r[5], c.r[17].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 280u);
    set32(c.r[2], c.r[2].w[0] + 29920u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    set32(c.r[16], c.r[3].w[0] + 24u);
    st32((c.r[29].w[0] + 384u), c.r[3].w[0]);
    set32(c.r[5], c.r[16].w[0] + 8u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9AA0u); st32((c.r[29].w[0] + 276u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004F9AA0u) [[unlikely]] return; }
L_004F9AA0:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 296u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    st32((c.r[29].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[3], c.r[6].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    st32((c.r[29].w[0] + 304u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 364u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 12;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 272u);  goto L_004F9AF0; }
    set32(c.r[3], ld32((c.r[29].w[0] + 360u)));
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[2], ld32((c.r[29].w[0] + 364u)));
    set32(c.r[7], c.r[29].w[0] + 384u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9AECu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x004F9AECu) [[unlikely]] return; }
L_004F9AEC:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 1;
L_004F9AF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9AF8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00D8(c, 198u, depth + 1u); else { c.pc = 0x004620B0u; return; } if (c.pc != 0x004F9AF8u) [[unlikely]] return; }
L_004F9AF8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_004F9AFC:
    set32(c.r[2], ld32((c.r[18].w[0] + 404u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 408u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004F9A6Cu | kUnwind; return; } goto L_004F9A6C; }
    c.r[2].d[0] = c.r[19].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[19], c.r[2].w[0] + 4u);
    c.budget -= 3;
L_004F9B18:
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.r[2].d[0] = c.r[19].d[0] << 32;
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[19].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004F9A40u | kUnwind; return; } goto L_004F9A40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 364u)));  if (t) { goto L_004F9B68; } }
L_004F9B4C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9B5Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FE(c, 71u, depth + 1u); else { c.pc = 0x004F8990u; return; } if (c.pc != 0x004F9B5Cu) [[unlikely]] return; }
L_004F9B5C:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[16], c.r[2].w[0] + 4u);
    c.budget -= 3;
L_004F9B68:
    set32(c.r[4], ld32((c.r[29].w[0] + 360u)));
    c.r[2].d[0] = c.r[16].d[0] << 32;
    set32(c.r[3], ld32((c.r[29].w[0] + 364u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004F9B4Cu | kUnwind; return; } goto L_004F9B4C; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9BA0u); st32((c.r[29].w[0] + 360u), 0u);  if (depth < kMaxDepth) unit_00FE(c, 81u, depth + 1u); else { c.pc = 0x004F8B20u; return; } if (c.pc != 0x004F9BA0u) [[unlikely]] return; }
L_004F9BA0:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9BACu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0102(c, 279u, depth + 1u); else { c.pc = 0x00509E50u; return; } if (c.pc != 0x004F9BACu) [[unlikely]] return; }
L_004F9BAC:
    set32(c.r[4], c.r[29].w[0] + 392u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9BB8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00C8(c, 49u, depth + 1u); else { c.pc = 0x00420C00u; return; } if (c.pc != 0x004F9BB8u) [[unlikely]] return; }
L_004F9BB8:
    set32(c.r[4], ld32((c.r[29].w[0] + 364u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004F9BD4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004F9BD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9BD4u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004F9BD4u) [[unlikely]] return; }
L_004F9BD4:
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 1;
L_004F9BD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_004F9C2C; } }
L_004F9BE0:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 305u));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_004F9C2C; }
    set32(c.r[4], ld32((c.r[20].w[0] + 144u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[20].w[0] + 144u), c.r[16].w[0]);  goto L_004F9C10; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9C0Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 154u, depth + 1u); else { c.pc = 0x00465D00u; return; } if (c.pc != 0x004F9C0Cu) [[unlikely]] return; }
L_004F9C0C:
    st32((c.r[20].w[0] + 144u), c.r[16].w[0]);
    c.budget -= 1;
L_004F9C10:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_004F9C3C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9C24u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00D9(c, 154u, depth + 1u); else { c.pc = 0x00465D00u; return; } if (c.pc != 0x004F9C24u) [[unlikely]] return; }
L_004F9C24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004F9C38; } }
L_004F9C2C:
    c.r[2].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004F9BE0u | kUnwind; return; } goto L_004F9BE0; }
L_004F9C38:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_004F9C3C:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 400u);  c.pc = t; return; }
L_004F9C70:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9C90u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FE(c, 301u, depth + 1u); else { c.pc = 0x004FA4D0u; return; } if (c.pc != 0x004F9C90u) [[unlikely]] return; }
L_004F9C90:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9CA4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00FE(c, 248u, depth + 1u); else { c.pc = 0x004F9D60u; return; } if (c.pc != 0x004F9CA4u) [[unlikely]] return; }
L_004F9CA4:
    c.r[5].d[0] = c.r[17].d[0] ^ 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9CBCu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0102(c, 283u, depth + 1u); else { c.pc = 0x00509EE0u; return; } if (c.pc != 0x004F9CBCu) [[unlikely]] return; }
L_004F9CBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[16].w[0] + 12u)));  if (t) { goto L_004F9D04; } }
L_004F9CC4:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[18], ld32((c.r[2].w[0])));  if (t) { goto L_004F9CE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9CDCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D8(c, 256u, depth + 1u); else { c.pc = 0x00463020u; return; } if (c.pc != 0x004F9CDCu) [[unlikely]] return; }
L_004F9CDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_004F9CEC; } }
L_004F9CE4:
    set32(c.r[2], 0u + 1u);
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 2;
L_004F9CEC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9CF8u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_00D9(c, 219u, depth + 1u); else { c.pc = 0x00466560u; return; } if (c.pc != 0x004F9CF8u) [[unlikely]] return; }
L_004F9CF8:
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[17], c.r[2].w[0] + 4u);
    c.budget -= 3;
L_004F9D04:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[17].d[0] << 32;
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[17].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004F9CC4u | kUnwind; return; } goto L_004F9CC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9D38u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0102(c, 251u, depth + 1u); else { c.pc = 0x00509AD0u; return; } if (c.pc != 0x004F9D38u) [[unlikely]] return; }
L_004F9D38:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9D44u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0102(c, 279u, depth + 1u); else { c.pc = 0x00509E50u; return; } if (c.pc != 0x004F9D44u) [[unlikely]] return; }
L_004F9D44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004F9D60:
    set32(c.r[29], c.r[29].w[0] - 400u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    st32((c.r[4].w[0] + 80u), c.r[19].w[0]);
    st32((c.r[4].w[0] + 84u), c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 20;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 204u), c.r[7].w[0]);  if (t) { goto L_004FA490; } }
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[20].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9DC0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x004F9DC0u) [[unlikely]] return; }
L_004F9DC0:
    set32(c.r[23], ld32((c.r[29].w[0] + 244u)));
    set32(c.r[30], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[17], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[22], ld32((c.r[29].w[0] + 260u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 240u)));  if (t) { goto L_004F9E20; } }
L_004F9DD8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[21], ld32((c.r[17].w[0])));  if (t) { goto L_004F9DF4; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9DECu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D8(c, 254u, depth + 1u); else { c.pc = 0x00462FC0u; return; } if (c.pc != 0x004F9DECu) [[unlikely]] return; }
L_004F9DEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004F9DFC; } }
L_004F9DF4:
    set32(c.r[2], 0u + 1u);
    st8((c.r[21].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_004F9DFC:
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[22].d[0]; st32((c.r[21].w[0] + 32u), c.r[18].w[0]);  if (t) { goto L_004F9E20; } }
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[30].d[0]) { set32(c.r[17], ld32((c.r[16].w[0])));  goto L_004F9E1C; }
    c.r[16].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_004F9E1C:
    set32(c.r[22], c.r[17].w[0] + 512u);
    c.budget -= 1;
L_004F9E20:
    set32(c.r[6], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9E30u); set32(c.r[5], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x004F9E30u) [[unlikely]] return; }
L_004F9E30:
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F9DD8u | kUnwind; return; } goto L_004F9DD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], ld32((c.r[20].w[0] + 12u)));  if (t) { goto L_004F9ECC; } }
L_004F9E44:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9E58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 187u, depth + 1u); else { c.pc = 0x0046A6F0u; return; } if (c.pc != 0x004F9E58u) [[unlikely]] return; }
L_004F9E58:
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull; c.r[23].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_004F9E7C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9E78u); c.r[22].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_00D8(c, 256u, depth + 1u); else { c.pc = 0x00463020u; return; } if (c.pc != 0x004F9E78u) [[unlikely]] return; }
L_004F9E78:
    c.r[23].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_004F9E7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004F9EB0; } }
L_004F9E84:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { c.r[2].d[0] = c.r[23].d[0] + 0ull;  goto L_004F9E9C; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9E9Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D8(c, 233u, depth + 1u); else { c.pc = 0x00462920u; return; } if (c.pc != 0x004F9E9Cu) [[unlikely]] return; }
L_004F9E9C:
    c.r[6].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9EACu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 190u, depth + 1u); else { c.pc = 0x0046A780u; return; } if (c.pc != 0x004F9EACu) [[unlikely]] return; }
L_004F9EAC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_004F9EB0:
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004F9E84u | kUnwind; return; } goto L_004F9E84; } }
    c.r[3].d[0] = c.r[21].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[21], c.r[3].w[0] + 4u);
    c.budget -= 3;
L_004F9ECC:
    set32(c.r[5], ld32((c.r[20].w[0] + 8u)));
    c.r[3].d[0] = c.r[21].d[0] << 32;
    set32(c.r[4], ld32((c.r[20].w[0] + 12u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = c.r[21].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004F9E44u | kUnwind; return; } goto L_004F9E44; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 80u)));  goto L_004FA268; }
    c.r[2].d[0] = c.r[18].d[0] ^ 1ull;
    c.r[21].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[21].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_004FA05C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9F18u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D8(c, 251u, depth + 1u); else { c.pc = 0x00462ED0u; return; } if (c.pc != 0x004F9F18u) [[unlikely]] return; }
L_004F9F18:
    c.f[12] = ld32((c.r[28].w[0] - 32564u));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[22].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 200u), c.r[21].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9F3Cu); c.r[23].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 180u, depth + 1u); else { c.pc = 0x0046A500u; return; } if (c.pc != 0x004F9F3Cu) [[unlikely]] return; }
L_004F9F3C:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[30].d[0] = 0ull + 0ull;  if (t) { goto L_004FA014; } }
L_004F9F48:
    set32(c.r[3], c.r[30].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 8;
    if (c.r[17].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004F9F74; }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
L_004F9F74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9F7Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00D9(c, 54u, depth + 1u); else { c.pc = 0x00464580u; return; } if (c.pc != 0x004F9F7Cu) [[unlikely]] return; }
L_004F9F7C:
    set32(c.r[6], ld32((c.r[17].w[0] + 40u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_004F9FAC; } }
L_004F9F8C:
    set32(c.r[3], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_004F9FAC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9FA4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 76u, depth + 1u); else { c.pc = 0x00464830u; return; } if (c.pc != 0x004F9FA4u) [[unlikely]] return; }
L_004F9FA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = fp::add(c.f[20], c.f[0]);  if (t) { goto L_004F9FB8; } }
L_004F9FAC:
    c.r[2].d[0] = c.r[5].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 364u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004F9F8Cu | kUnwind; return; } goto L_004F9F8C; }
L_004F9FB8:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 20u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004F9FE4; }
    c.budget -= 2;
    if (c.r[23].d[0] != 0ull) { c.r[23].d[0] = 0ull + 0ull;  goto L_004F9FE0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[23], 0u + 1u);  if (t) { goto L_004F9FE0; } }
L_004F9FE0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004F9FE4:
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004F9FF0u); st32((c.r[16].w[0] + 32u), c.r[22].w[0]);  if (depth < kMaxDepth) unit_00DA(c, 187u, depth + 1u); else { c.pc = 0x0046A6F0u; return; } if (c.pc != 0x004F9FF0u) [[unlikely]] return; }
L_004F9FF0:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 324u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[29].w[0] + 200u), c.r[17].w[0]);  goto L_004FA010; }
    c.budget -= 2;
    if (c.r[22].d[0] != 0ull) { c.r[22].d[0] = 0ull + 0ull;  goto L_004FA00C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[22], 0u + 1u);  if (t) { goto L_004FA00C; } }
L_004FA00C:
    st32((c.r[29].w[0] + 200u), c.r[17].w[0]);
    c.budget -= 1;
L_004FA010:
    set32(c.r[30], c.r[30].w[0] + 1u);
    c.budget -= 1;
L_004FA014:
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    c.r[2].d[0] = c.r[30].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 36u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004F9F48u | kUnwind; return; } goto L_004F9F48; }
    c.f[12] = ld32((c.r[28].w[0] - 31936u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA038u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 180u, depth + 1u); else { c.pc = 0x0046A500u; return; } if (c.pc != 0x004FA038u) [[unlikely]] return; }
L_004FA038:
    c.f[12] = c.f[0] ^ fp::kSign;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA044u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 54u, depth + 1u); else { c.pc = 0x00464580u; return; } if (c.pc != 0x004FA044u) [[unlikely]] return; }
L_004FA044:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA04Cu); set32(c.r[4], ld32((c.r[20].w[0] + 80u)));  if (depth < kMaxDepth) unit_00D8(c, 217u, depth + 1u); else { c.pc = 0x00462600u; return; } if (c.pc != 0x004FA04Cu) [[unlikely]] return; }
L_004FA04C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA054u); set32(c.r[4], ld32((c.r[20].w[0] + 80u)));  if (depth < kMaxDepth) unit_00D8(c, 210u, depth + 1u); else { c.pc = 0x004623F0u; return; } if (c.pc != 0x004FA054u) [[unlikely]] return; }
L_004FA054:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004FA264; } }
L_004FA05C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA064u);  if (depth < kMaxDepth) unit_00D8(c, 251u, depth + 1u); else { c.pc = 0x00462ED0u; return; } if (c.pc != 0x004FA064u) [[unlikely]] return; }
L_004FA064:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.r[6].d[0] = 0ull + 0ull;
    c.r[23].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 196u), c.r[17].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA08Cu); c.r[30].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 180u, depth + 1u); else { c.pc = 0x0046A500u; return; } if (c.pc != 0x004FA08Cu) [[unlikely]] return; }
L_004FA08C:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 176u), 0u);  if (t) { goto L_004FA180; } }
L_004FA098:
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[22], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[22].w[0] + 28u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_004FA0C4; } }
    set32(c.r[2], ld32((c.r[22].w[0] + 24u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 2;
L_004FA0C4:
    c.budget -= 2;
    if (c.r[21].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004FA0D8; }
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[17].d[0]) { set32(c.r[3], ld32((c.r[22].w[0] + 24u)));  goto L_004FA120; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004FA0D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA0E0u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00D9(c, 54u, depth + 1u); else { c.pc = 0x00464580u; return; } if (c.pc != 0x004FA0E0u) [[unlikely]] return; }
L_004FA0E0:
    set32(c.r[6], ld32((c.r[16].w[0] + 40u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_004FA110; } }
L_004FA0F0:
    set32(c.r[3], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_004FA110; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA108u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 76u, depth + 1u); else { c.pc = 0x00464830u; return; } if (c.pc != 0x004FA108u) [[unlikely]] return; }
L_004FA108:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = fp::add(c.f[20], c.f[0]);  if (t) { goto L_004FA11C; } }
L_004FA110:
    c.r[2].d[0] = c.r[5].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 364u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FA0F0u | kUnwind; return; } goto L_004FA0F0; }
L_004FA11C:
    set32(c.r[3], ld32((c.r[22].w[0] + 24u)));
    c.budget -= 1;
L_004FA120:
    set32(c.r[2], ld32((c.r[22].w[0] + 28u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 20u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004FA148; }
    c.budget -= 2;
    if (c.r[30].d[0] != 0ull) { c.r[30].d[0] = 0ull + 0ull;  goto L_004FA144; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[30], 0u + 1u);  if (t) { goto L_004FA144; } }
L_004FA144:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004FA148:
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA154u); st32((c.r[22].w[0] + 32u), c.r[23].w[0]);  if (depth < kMaxDepth) unit_00DA(c, 187u, depth + 1u); else { c.pc = 0x0046A6F0u; return; } if (c.pc != 0x004FA154u) [[unlikely]] return; }
L_004FA154:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 324u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 176u)));  goto L_004FA174; }
    c.budget -= 2;
    if (c.r[23].d[0] != 0ull) { c.r[23].d[0] = 0ull + 0ull;  goto L_004FA170; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[23], 0u + 1u);  if (t) { goto L_004FA170; } }
L_004FA170:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 1;
L_004FA174:
    st32((c.r[29].w[0] + 196u), c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.budget -= 3;
L_004FA180:
    set32(c.r[3], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 176u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FA098u | kUnwind; return; } goto L_004FA098; }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { c.f[12] = ld32((c.r[28].w[0] - 31936u));  goto L_004FA1A0; }
    c.f[12] = ld32((c.r[28].w[0] - 32564u));
    c.budget -= 1;
L_004FA1A0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA1B0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 180u, depth + 1u); else { c.pc = 0x0046A500u; return; } if (c.pc != 0x004FA1B0u) [[unlikely]] return; }
L_004FA1B0:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull; c.f[20] = fp::add(c.f[20], c.f[0]);  if (t) { goto L_004FA1E0; } }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { c.f[12] = ld32((c.r[28].w[0] - 31936u));  goto L_004FA1C4; }
    c.f[12] = ld32((c.r[28].w[0] - 32564u));
    c.budget -= 1;
L_004FA1C4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA1D4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 180u, depth + 1u); else { c.pc = 0x0046A500u; return; } if (c.pc != 0x004FA1D4u) [[unlikely]] return; }
L_004FA1D4:
    c.f[12] = c.f[0] ^ fp::kSign;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA1E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 54u, depth + 1u); else { c.pc = 0x00464580u; return; } if (c.pc != 0x004FA1E0u) [[unlikely]] return; }
L_004FA1E0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_004FA244; } }
L_004FA1EC:
    set32(c.r[3], c.r[22].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != c.r[4].d[0];  if (t) { goto L_004FA210; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 2;
L_004FA210:
    c.budget -= 2;
    if (c.r[21].d[0] != 0ull) { c.f[12] = ld32((c.r[16].w[0] + 376u));  goto L_004FA224; }
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[17].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004FA240; }
    c.f[12] = ld32((c.r[16].w[0] + 376u));
    c.budget -= 1;
L_004FA224:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004FA234; }
    c.f[12] = fp::sub(c.f[20], c.f[12]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_004FA234:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA23Cu);  if (depth < kMaxDepth) unit_00D9(c, 54u, depth + 1u); else { c.pc = 0x00464580u; return; } if (c.pc != 0x004FA23Cu) [[unlikely]] return; }
L_004FA23C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004FA240:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_004FA244:
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    c.r[2].d[0] = c.r[22].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 36u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FA1ECu | kUnwind; return; } goto L_004FA1EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA25Cu); set32(c.r[4], ld32((c.r[20].w[0] + 80u)));  if (depth < kMaxDepth) unit_00D8(c, 217u, depth + 1u); else { c.pc = 0x00462600u; return; } if (c.pc != 0x004FA25Cu) [[unlikely]] return; }
L_004FA25C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA264u); set32(c.r[4], ld32((c.r[20].w[0] + 80u)));  if (depth < kMaxDepth) unit_00D8(c, 210u, depth + 1u); else { c.pc = 0x004623F0u; return; } if (c.pc != 0x004FA264u) [[unlikely]] return; }
L_004FA264:
    set32(c.r[3], ld32((c.r[20].w[0] + 80u)));
    c.budget -= 1;
L_004FA268:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));  goto L_004FA494; }
    set32(c.r[2], 0u + 6u);
    set32(c.r[4], c.r[29].w[0] + 392u);
    st32((c.r[29].w[0] + 352u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 356u), 0u);
    st32((c.r[29].w[0] + 360u), 0u);
    st32((c.r[29].w[0] + 364u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 140u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA294u); set32(c.r[5], c.r[2].w[0] + 20u);  if (depth < kMaxDepth) unit_00C8(c, 68u, depth + 1u); else { c.pc = 0x00420E60u; return; } if (c.pc != 0x004FA294u) [[unlikely]] return; }
L_004FA294:
    set32(c.r[7], ld32((c.r[29].w[0] + 204u)));
    c.r[5].d[0] = c.r[18].d[0] ^ 0ull;
    c.r[5].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA2ACu); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0102(c, 283u, depth + 1u); else { c.pc = 0x00509EE0u; return; } if (c.pc != 0x004FA2ACu) [[unlikely]] return; }
L_004FA2AC:
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[19], ld32((c.r[20].w[0] + 12u)));  goto L_004FA3B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA2C4u); set32(c.r[4], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0102(c, 238u, depth + 1u); else { c.pc = 0x005099A0u; return; } if (c.pc != 0x004FA2C4u) [[unlikely]] return; }
L_004FA2C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004FA2D0; } }
    st32((c.r[29].w[0] + 204u), 0u);
    c.budget -= 1;
L_004FA2D0:
    set32(c.r[19], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004FA3B8; } }
L_004FA2DC:
    set32(c.r[5], c.r[29].w[0] + 392u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[6], 0u + 1u);
    set32(c.r[18], ld32((c.r[2].w[0])));
    set32(c.r[7], c.r[29].w[0] + 320u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA2F8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 247u, depth + 1u); else { c.pc = 0x004668E0u; return; } if (c.pc != 0x004FA2F8u) [[unlikely]] return; }
L_004FA2F8:
    set32(c.r[5], ld32((c.r[20].w[0] + 140u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA304u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 172u, depth + 1u); else { c.pc = 0x0046A2C0u; return; } if (c.pc != 0x004FA304u) [[unlikely]] return; }
L_004FA304:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004FA39C; } }
L_004FA30C:
    set32(c.r[5], c.r[17].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 280u);
    set32(c.r[2], c.r[2].w[0] + 29920u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    set32(c.r[16], c.r[3].w[0] + 24u);
    st32((c.r[29].w[0] + 384u), c.r[3].w[0]);
    set32(c.r[5], c.r[16].w[0] + 8u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA340u); st32((c.r[29].w[0] + 276u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004FA340u) [[unlikely]] return; }
L_004FA340:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 296u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    st32((c.r[29].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[3], c.r[6].w[0] << (c.r[2].w[0] & 31u));
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    st32((c.r[29].w[0] + 304u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 364u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 12;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 272u);  goto L_004FA390; }
    set32(c.r[3], ld32((c.r[29].w[0] + 360u)));
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[2], ld32((c.r[29].w[0] + 364u)));
    set32(c.r[7], c.r[29].w[0] + 384u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA38Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x004FA38Cu) [[unlikely]] return; }
L_004FA38C:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 1;
L_004FA390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA398u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00D8(c, 198u, depth + 1u); else { c.pc = 0x004620B0u; return; } if (c.pc != 0x004FA398u) [[unlikely]] return; }
L_004FA398:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_004FA39C:
    set32(c.r[2], ld32((c.r[18].w[0] + 404u)));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 408u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FA30Cu | kUnwind; return; } goto L_004FA30C; }
    c.r[2].d[0] = c.r[19].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[19], c.r[2].w[0] + 4u);
    c.budget -= 3;
L_004FA3B8:
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.r[2].d[0] = c.r[19].d[0] << 32;
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[19].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FA2DCu | kUnwind; return; } goto L_004FA2DC; }
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[16], ld32((c.r[29].w[0] + 364u)));  goto L_004FA424; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA3FCu); set32(c.r[4], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0102(c, 251u, depth + 1u); else { c.pc = 0x00509AD0u; return; } if (c.pc != 0x004FA3FCu) [[unlikely]] return; }
L_004FA3FC:
    set32(c.r[16], ld32((c.r[29].w[0] + 364u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004FA424; } }
L_004FA408:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA418u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FE(c, 71u, depth + 1u); else { c.pc = 0x004F8990u; return; } if (c.pc != 0x004FA418u) [[unlikely]] return; }
L_004FA418:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[16], c.r[2].w[0] + 4u);
    c.budget -= 3;
L_004FA424:
    set32(c.r[4], ld32((c.r[29].w[0] + 360u)));
    c.r[2].d[0] = c.r[16].d[0] << 32;
    set32(c.r[3], ld32((c.r[29].w[0] + 364u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FA408u | kUnwind; return; } goto L_004FA408; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA45Cu); st32((c.r[29].w[0] + 360u), 0u);  if (depth < kMaxDepth) unit_00FE(c, 81u, depth + 1u); else { c.pc = 0x004F8B20u; return; } if (c.pc != 0x004FA45Cu) [[unlikely]] return; }
L_004FA45C:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA468u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0102(c, 279u, depth + 1u); else { c.pc = 0x00509E50u; return; } if (c.pc != 0x004FA468u) [[unlikely]] return; }
L_004FA468:
    set32(c.r[4], c.r[29].w[0] + 392u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA474u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00C8(c, 49u, depth + 1u); else { c.pc = 0x00420C00u; return; } if (c.pc != 0x004FA474u) [[unlikely]] return; }
L_004FA474:
    set32(c.r[4], ld32((c.r[29].w[0] + 364u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FA490; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004FA490; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA490u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004FA490u) [[unlikely]] return; }
L_004FA490:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.budget -= 1;
L_004FA494:
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
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 400u);  c.pc = t; return; }
L_004FA4D0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[21].w[0] + 48u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA510u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0009(c, 119u, depth + 1u); else { c.pc = 0x001250C0u; return; } if (c.pc != 0x004FA510u) [[unlikely]] return; }
L_004FA510:
    set32(c.r[22], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[23], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[17], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[18], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 176u)));  if (t) { goto L_004FA564; } }
L_004FA528:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA534u); set32(c.r[4], c.r[19].w[0] + 8u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004FA534u) [[unlikely]] return; }
L_004FA534:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 4u);  goto L_004FA544; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_004FA584; } }
L_004FA544:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[18].d[0]) { set32(c.r[6], ld32((c.r[21].w[0] + 76u)));  goto L_004FA568; }
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[23].d[0]) { set32(c.r[17], ld32((c.r[16].w[0])));  goto L_004FA560; }
    c.r[16].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_004FA560:
    set32(c.r[18], c.r[17].w[0] + 512u);
    c.budget -= 1;
L_004FA564:
    set32(c.r[6], ld32((c.r[21].w[0] + 76u)));
    c.budget -= 1;
L_004FA568:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA574u); set32(c.r[5], c.r[21].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 119u, depth + 1u); else { c.pc = 0x001250C0u; return; } if (c.pc != 0x004FA574u) [[unlikely]] return; }
L_004FA574:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[19], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FA528u | kUnwind; return; } goto L_004FA528; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004FA584:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_004FA5B0:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != c.r[16].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004FA5E4; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA5E4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00FE(c, 248u, depth + 1u); else { c.pc = 0x004F9D60u; return; } if (c.pc != 0x004FA5E4u) [[unlikely]] return; }
L_004FA5E4:
    set32(c.r[6], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA5F4u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x004FA5F4u) [[unlikely]] return; }
L_004FA5F4:
    set32(c.r[18], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA608u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x004FA608u) [[unlikely]] return; }
L_004FA608:
    set32(c.r[5], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 136u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 148u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 128u)));  if (t) { goto L_004FA644; } }
L_004FA624:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[8].d[0];  if (t) { goto L_004FA644; } }
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[7], ld32((c.r[4].w[0])));  goto L_004FA640; }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[4].w[0])));
    c.budget -= 2;
L_004FA640:
    set32(c.r[8], c.r[7].w[0] + 512u);
    c.budget -= 1;
L_004FA644:
    c.budget -= 2;
    if (c.r[7].d[0] == c.r[18].d[0]) { st32((c.r[29].w[0] + 192u), c.r[4].w[0]);  goto L_004FA65C; }
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[16].d[0]) { set32(c.r[7], c.r[7].w[0] + 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FA624u | kUnwind; return; } goto L_004FA624; }
    st32((c.r[29].w[0] + 192u), c.r[4].w[0]);
    c.budget -= 1;
L_004FA65C:
    st32((c.r[29].w[0] + 196u), c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    st32((c.r[29].w[0] + 200u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 204u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 208u), c.r[7].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA67Cu); st32((c.r[29].w[0] + 212u), c.r[8].w[0]);  if (depth < kMaxDepth) unit_00FE(c, 316u, depth + 1u); else { c.pc = 0x004FA710u; return; } if (c.pc != 0x004FA67Cu) [[unlikely]] return; }
L_004FA67C:
    set32(c.r[5], c.r[17].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA68Cu); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_00DA(c, 143u, depth + 1u); else { c.pc = 0x00469B30u; return; } if (c.pc != 0x004FA68Cu) [[unlikely]] return; }
L_004FA68C:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA698u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_00FE(c, 315u, depth + 1u); else { c.pc = 0x004FA6D0u; return; } if (c.pc != 0x004FA698u) [[unlikely]] return; }
L_004FA698:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_004FA6B8; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA6B4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FA6B4u) [[unlikely]] return; }
L_004FA6B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_004FA6B8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_004FA6D0:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 20u), c.r[3].w[0]);  c.pc = t; return; }
L_004FA710:
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 20u), c.r[3].w[0]);  c.pc = t; return; }
L_004FA750:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA770u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00FE(c, 301u, depth + 1u); else { c.pc = 0x004FA4D0u; return; } if (c.pc != 0x004FA770u) [[unlikely]] return; }
L_004FA770:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (t) { goto L_004FA780; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004FA7CC; } }
L_004FA780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA788u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x004FA788u) [[unlikely]] return; }
L_004FA788:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA798u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004FA798u) [[unlikely]] return; }
L_004FA798:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  goto L_004FA7BC; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA7B8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D8(c, 266u, depth + 1u); else { c.pc = 0x00463190u; return; } if (c.pc != 0x004FA7B8u) [[unlikely]] return; }
L_004FA7B8:
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 1;
L_004FA7BC:
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA7C8u); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_0009(c, 107u, depth + 1u); else { c.pc = 0x00124E90u; return; } if (c.pc != 0x004FA7C8u) [[unlikely]] return; }
L_004FA7C8:
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 1;
L_004FA7CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004FA7F0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
L_004FA818:
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 3;
L_004FA824:
    set32(c.r[5], c.r[21].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA830u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0009(c, 119u, depth + 1u); else { c.pc = 0x001250C0u; return; } if (c.pc != 0x004FA830u) [[unlikely]] return; }
L_004FA830:
    set32(c.r[22], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[23], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[17], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[18], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 176u)));  if (t) { goto L_004FA884; } }
L_004FA848:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA854u); set32(c.r[4], c.r[19].w[0] + 8u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004FA854u) [[unlikely]] return; }
L_004FA854:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 4u);  goto L_004FA864; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_004FA8A4; } }
L_004FA864:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[18].d[0]) { set32(c.r[6], ld32((c.r[21].w[0] + 44u)));  goto L_004FA888; }
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[23].d[0]) { set32(c.r[17], ld32((c.r[16].w[0])));  goto L_004FA880; }
    c.r[16].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_004FA880:
    set32(c.r[18], c.r[17].w[0] + 512u);
    c.budget -= 1;
L_004FA884:
    set32(c.r[6], ld32((c.r[21].w[0] + 44u)));
    c.budget -= 1;
L_004FA888:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA894u); set32(c.r[5], c.r[21].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 119u, depth + 1u); else { c.pc = 0x001250C0u; return; } if (c.pc != 0x004FA894u) [[unlikely]] return; }
L_004FA894:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[19], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FA848u | kUnwind; return; } goto L_004FA848; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004FA8A4:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_004FA8D0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_004FA918; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA910u);  if (depth < kMaxDepth) unit_00D8(c, 237u, depth + 1u); else { c.pc = 0x00462A70u; return; } if (c.pc != 0x004FA910u) [[unlikely]] return; }
L_004FA910:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_004FAA58; } }
L_004FA918:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004FAA40; } }
L_004FA920:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA928u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 131u, depth + 1u); else { c.pc = 0x00465760u; return; } if (c.pc != 0x004FA928u) [[unlikely]] return; }
L_004FA928:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA934u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0102(c, 290u, depth + 1u); else { c.pc = 0x00509FA0u; return; } if (c.pc != 0x004FA934u) [[unlikely]] return; }
L_004FA934:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_004FAA40; }
    set32(c.r[3], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_004FA950; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004FA950:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_004FAA3C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004FAA3C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], ld32((c.r[3].w[0] + 28u)));  goto L_004FA978; }
    set32(c.r[17], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 1;
L_004FA978:
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA984u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0102(c, 288u, depth + 1u); else { c.pc = 0x00509F60u; return; } if (c.pc != 0x004FA984u) [[unlikely]] return; }
L_004FA984:
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA990u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0102(c, 289u, depth + 1u); else { c.pc = 0x00509F70u; return; } if (c.pc != 0x004FA990u) [[unlikely]] return; }
L_004FA990:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004FA9BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[13] = c.f[20];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA9B4u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 85u, depth + 1u); else { c.pc = 0x00464AA0u; return; } if (c.pc != 0x004FA9B4u) [[unlikely]] return; }
L_004FA9B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 28u)));  if (t) { goto L_004FA9D8; } }
L_004FA9BC:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA9D4u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_00D9(c, 90u, depth + 1u); else { c.pc = 0x00464BB0u; return; } if (c.pc != 0x004FA9D4u) [[unlikely]] return; }
L_004FA9D4:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 1;
L_004FA9D8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004FAA54; } }
    c.r[18].d[0] = c.r[18].d[0] ^ 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FA9F4u); c.r[18].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0102(c, 289u, depth + 1u); else { c.pc = 0x00509F70u; return; } if (c.pc != 0x004FA9F4u) [[unlikely]] return; }
L_004FA9F4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004FAA20; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FAA18u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_00D9(c, 85u, depth + 1u); else { c.pc = 0x00464AA0u; return; } if (c.pc != 0x004FAA18u) [[unlikely]] return; }
L_004FAA18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004FAA54; } }
L_004FAA20:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[13] = c.f[20];
    c.f[12] = 0u;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FAA34u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 90u, depth + 1u); else { c.pc = 0x00464BB0u; return; } if (c.pc != 0x004FAA34u) [[unlikely]] return; }
L_004FAA34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004FAA54; } }
L_004FAA3C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_004FAA40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FAA48u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 130u, depth + 1u); else { c.pc = 0x00465750u; return; } if (c.pc != 0x004FAA48u) [[unlikely]] return; }
L_004FAA48:
    c.r[3].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FA920u | kUnwind; return; } goto L_004FA920; }
L_004FAA54:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_004FAA58:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004FAA80:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_004FAAC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FAABCu);  if (depth < kMaxDepth) unit_00D8(c, 244u, depth + 1u); else { c.pc = 0x00462CB0u; return; } if (c.pc != 0x004FAABCu) [[unlikely]] return; }
L_004FAABC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_004FAC18; } }
L_004FAAC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004FAC00; } }
L_004FAACC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FAAD4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 132u, depth + 1u); else { c.pc = 0x004657A0u; return; } if (c.pc != 0x004FAAD4u) [[unlikely]] return; }
L_004FAAD4:
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004FAAE8; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004FAAE8:
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[6].d[0] != c.r[5].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_004FAC00; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FAAFCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 132u, depth + 1u); else { c.pc = 0x004657A0u; return; } if (c.pc != 0x004FAAFCu) [[unlikely]] return; }
L_004FAAFC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 24u)));  goto L_004FAB0C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_004FAB24; } }
L_004FAB0C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_004FAB24; }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 36u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004FAB24; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004FAB24:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004FABFC; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], ld32((c.r[3].w[0] + 24u)));  goto L_004FAB3C; }
    set32(c.r[17], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 1;
L_004FAB3C:
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FAB48u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0102(c, 288u, depth + 1u); else { c.pc = 0x00509F60u; return; } if (c.pc != 0x004FAB48u) [[unlikely]] return; }
L_004FAB48:
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FAB54u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0102(c, 289u, depth + 1u); else { c.pc = 0x00509F70u; return; } if (c.pc != 0x004FAB54u) [[unlikely]] return; }
L_004FAB54:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_004FAB7C; }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FAB74u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_00D9(c, 90u, depth + 1u); else { c.pc = 0x00464BB0u; return; } if (c.pc != 0x004FAB74u) [[unlikely]] return; }
L_004FAB74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 28u)));  if (t) { goto L_004FAB98; } }
L_004FAB7C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[13] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FAB94u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 85u, depth + 1u); else { c.pc = 0x00464AA0u; return; } if (c.pc != 0x004FAB94u) [[unlikely]] return; }
L_004FAB94:
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 1;
L_004FAB98:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_004FAC14; } }
    c.r[18].d[0] = c.r[18].d[0] ^ 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FABB4u); c.r[18].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0102(c, 289u, depth + 1u); else { c.pc = 0x00509F70u; return; } if (c.pc != 0x004FABB4u) [[unlikely]] return; }
L_004FABB4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_004FABDC; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[13] = c.f[20];
    c.f[12] = 0u;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FABD4u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 90u, depth + 1u); else { c.pc = 0x00464BB0u; return; } if (c.pc != 0x004FABD4u) [[unlikely]] return; }
L_004FABD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004FAC14; } }
L_004FABDC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FABF4u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_00D9(c, 85u, depth + 1u); else { c.pc = 0x00464AA0u; return; } if (c.pc != 0x004FABF4u) [[unlikely]] return; }
L_004FABF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004FAC14; } }
L_004FABFC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_004FAC00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FAC08u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 138u, depth + 1u); else { c.pc = 0x00465A00u; return; } if (c.pc != 0x004FAC08u) [[unlikely]] return; }
L_004FAC08:
    c.r[3].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FAACCu | kUnwind; return; } goto L_004FAACC; }
L_004FAC14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_004FAC18:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004FAC40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FAC54u); c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 132u, depth + 1u); else { c.pc = 0x004657A0u; return; } if (c.pc != 0x004FAC54u) [[unlikely]] return; }
L_004FAC54:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[2].w[0] + 24u)));  goto L_004FAC64; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004FAC88; } }
L_004FAC64:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 36u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 32u)));  goto L_004FAC78; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004FAC88; } }
L_004FAC78:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 24u)));  goto L_004FAC84; }
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 1;
L_004FAC84:
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 1;
L_004FAC88:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004FACA0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[20], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 18;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_004FAD14; } }
L_004FACE8:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FACFCu); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004FACFCu) [[unlikely]] return; }
L_004FACFC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[20].d[0] << 32;  goto L_004FAD0C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[19].w[0] + 12u)));  if (t) { goto L_004FAD48; } }
L_004FAD0C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[20], c.r[2].w[0] + 4u);
    c.budget -= 2;
L_004FAD14:
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.r[2].d[0] = c.r[20].d[0] << 32;
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[20].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FACE8u | kUnwind; return; } goto L_004FACE8; }
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[20], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 2;
L_004FAD48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[19].w[0] + 8u)));  if (t) { goto L_004FAD80; } }
L_004FAD50:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[21], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FAD64u); set32(c.r[4], c.r[21].w[0] + 8u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004FAD64u) [[unlikely]] return; }
L_004FAD64:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[20].d[0] << 32;  goto L_004FAD74; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004FADB0; } }
L_004FAD74:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[20], c.r[2].w[0] + 4u);
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
L_004FAD80:
    c.r[2].d[0] = c.r[20].d[0] << 32;
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 10;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[20].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FAD50u | kUnwind; return; } goto L_004FAD50; }
    c.r[21].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_004FADB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FADB8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 132u, depth + 1u); else { c.pc = 0x004657A0u; return; } if (c.pc != 0x004FADB8u) [[unlikely]] return; }
L_004FADB8:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FADC8u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 135u, depth + 1u); else { c.pc = 0x004658D0u; return; } if (c.pc != 0x004FADC8u) [[unlikely]] return; }
L_004FADC8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 40u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FADD8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004FADD8u) [[unlikely]] return; }
L_004FADD8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[29].w[0] + 148u), c.r[2].w[0]);  goto L_004FADFC; }
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FADF8u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 42u, depth + 1u); else { c.pc = 0x004643E0u; return; } if (c.pc != 0x004FADF8u) [[unlikely]] return; }
L_004FADF8:
    st32((c.r[29].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 1;
L_004FADFC:
    set32(c.r[4], c.r[19].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FAE08u); set32(c.r[5], c.r[29].w[0] + 148u);  if (depth < kMaxDepth) unit_0009(c, 107u, depth + 1u); else { c.pc = 0x00124E90u; return; } if (c.pc != 0x004FAE08u) [[unlikely]] return; }
L_004FAE08:
    set32(c.r[2], ld32((c.r[29].w[0] + 148u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_004FAE40:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_004FAE7C; } }
L_004FAE68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FAE70u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00FE(c, 377u, depth + 1u); else { c.pc = 0x004FAF40u; return; } if (c.pc != 0x004FAE70u) [[unlikely]] return; }
L_004FAE70:
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FAE7Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FE(c, 306u, depth + 1u); else { c.pc = 0x004FA5B0u; return; } if (c.pc != 0x004FAE7Cu) [[unlikely]] return; }
L_004FAE7C:
    set32(c.r[2], ld32((c.r[21].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[21].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FAE68u | kUnwind; return; } goto L_004FAE68; }
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[21].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FAE98u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x004FAE98u) [[unlikely]] return; }
L_004FAE98:
    set32(c.r[17], ld32((c.r[29].w[0] + 148u)));
    set32(c.r[16], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[19], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[20], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[29].w[0] + 144u)));  if (t) { goto L_004FAEEC; } }
L_004FAEB0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 4u);  goto L_004FAECC; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004FAEC8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004FAEC8u) [[unlikely]] return; }
L_004FAEC8:
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.budget -= 1;
L_004FAECC:
    c.budget -= 2;
    if (c.r[19].d[0] != c.r[20].d[0]) { set32(c.r[6], ld32((c.r[21].w[0] + 44u)));  goto L_004FAEF0; }
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 3;
    if (c.r[18].d[0] != c.r[16].d[0]) { set32(c.r[19], ld32((c.r[18].w[0])));  goto L_004FAEE8; }
    c.r[18].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[18].w[0])));
    c.budget -= 2;
L_004FAEE8:
    set32(c.r[20], c.r[19].w[0] + 512u);
    c.budget -= 1;
L_004FAEEC:
    set32(c.r[6], ld32((c.r[21].w[0] + 44u)));
    c.budget -= 1;
L_004FAEF0:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FAEFCu); set32(c.r[5], c.r[21].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 153u, depth + 1u); else { c.pc = 0x00125950u; return; } if (c.pc != 0x004FAEFCu) [[unlikely]] return; }
L_004FAEFC:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.budget -= 3;
    if (c.r[19].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[19].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FAEB0u | kUnwind; return; } goto L_004FAEB0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FAF10u); set32(c.r[4], c.r[21].w[0] + 16u);  if (depth < kMaxDepth) unit_0009(c, 148u, depth + 1u); else { c.pc = 0x001258C0u; return; } if (c.pc != 0x004FAF10u) [[unlikely]] return; }
L_004FAF10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_004FAF40:
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[2].w[0] >> 7);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    mmi::divu(c, 0, c.r[5].w[0], c.r[6].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_004FAF80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 144u)));  goto L_004FAF9C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FAF9Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D8(c, 251u, depth + 1u); else { c.pc = 0x00462ED0u; return; } if (c.pc != 0x004FAF9Cu) [[unlikely]] return; }
L_004FAF9C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004FAFB0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004FB004; } }
L_004FAFD8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FAFECu); set32(c.r[4], c.r[19].w[0] + 8u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004FAFECu) [[unlikely]] return; }
L_004FAFEC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[18].d[0] << 32;  goto L_004FAFFC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_004FB034; } }
L_004FAFFC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[18], c.r[2].w[0] + 4u);
    c.budget -= 2;
L_004FB004:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[18].d[0] << 32;
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[18].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FAFD8u | kUnwind; return; } goto L_004FAFD8; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004FB034:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004FB050:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004FB0A4; } }
L_004FB078:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB08Cu); set32(c.r[4], c.r[19].w[0] + 8u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004FB08Cu) [[unlikely]] return; }
L_004FB08C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[18].d[0] << 32;  goto L_004FB09C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004FB0D4; } }
L_004FB09C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[18], c.r[2].w[0] + 4u);
    c.budget -= 2;
L_004FB0A4:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[18].d[0] << 32;
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[18].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FB078u | kUnwind; return; } goto L_004FB078; }
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004FB0D4:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004FB0E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_004FB12C; } }
L_004FB0E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB0ECu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FE(c, 323u, depth + 1u); else { c.pc = 0x004FA7F0u; return; } if (c.pc != 0x004FB0ECu) [[unlikely]] return; }
L_004FB0EC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004FB0FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_004FB130; } }
L_004FB0FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB104u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FE(c, 301u, depth + 1u); else { c.pc = 0x004FA4D0u; return; } if (c.pc != 0x004FB104u) [[unlikely]] return; }
L_004FB104:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004FB114; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004FB12C; } }
L_004FB114:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB11Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FE(c, 59u, depth + 1u); else { c.pc = 0x004F87D0u; return; } if (c.pc != 0x004FB11Cu) [[unlikely]] return; }
L_004FB11C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_004FB12C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004FB12C; } }
L_004FB12C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_004FB130:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_004FB150:
    set32(c.r[29], c.r[29].w[0] - 768u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[5].w[0] + 48u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004FB190; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004FB6E0; } }
L_004FB190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB198u); set32(c.r[4], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_00DA(c, 303u, depth + 1u); else { c.pc = 0x0046BCC0u; return; } if (c.pc != 0x004FB198u) [[unlikely]] return; }
L_004FB198:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_004FB1C8; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[7], c.r[19].w[0] + 32u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB1C0u); set32(c.r[6], c.r[6].w[0] + 19710u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x004FB1C0u) [[unlikely]] return; }
L_004FB1C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004FB6E0; } }
L_004FB1C8:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], 0u + 36u);  goto L_004FB1EC; }
    set32(c.r[2], ld32((c.r[19].w[0] + 48u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_004FB1E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004FB6E0; } }
L_004FB1E8:
    set32(c.r[4], 0u + 36u);
    c.budget -= 1;
L_004FB1EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB1F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004FB1F4u) [[unlikely]] return; }
L_004FB1F4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], 0u + 476u);  goto L_004FB218; }
    set32(c.r[5], ld32((c.r[19].w[0] + 52u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB210u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0005(c, 104u, depth + 1u); else { c.pc = 0x00115200u; return; } if (c.pc != 0x004FB210u) [[unlikely]] return; }
L_004FB210:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 476u);
    c.budget -= 2;
L_004FB218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB220u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004FB220u) [[unlikely]] return; }
L_004FB220:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_004FB24C; }
    c.r[9].d[0] = ld8((c.r[19].w[0] + 82u));
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[10].d[0] = ld8((c.r[19].w[0] + 83u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB248u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 251u, depth + 1u); else { c.pc = 0x0046B410u; return; } if (c.pc != 0x004FB248u) [[unlikely]] return; }
L_004FB248:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004FB24C:
    st32((c.r[29].w[0] + 764u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB258u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 218u, depth + 1u); else { c.pc = 0x0046AF10u; return; } if (c.pc != 0x004FB258u) [[unlikely]] return; }
L_004FB258:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_004FB2A8; } }
L_004FB260:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004FB294; } }
    set32(c.r[4], 0u + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB274u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004FB274u) [[unlikely]] return; }
L_004FB274:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004FB294; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 52u)));
    set32(c.r[5], c.r[16].w[0] << 3);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB294u); set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_0005(c, 104u, depth + 1u); else { c.pc = 0x00115200u; return; } if (c.pc != 0x004FB294u) [[unlikely]] return; }
L_004FB294:
    set32(c.r[4], ld32((c.r[29].w[0] + 764u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB2A4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 191u, depth + 1u); else { c.pc = 0x0046A7C0u; return; } if (c.pc != 0x004FB2A4u) [[unlikely]] return; }
L_004FB2A4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_004FB2A8:
    set32(c.r[3], ld32((c.r[19].w[0] + 48u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[1].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FB260u | kUnwind; return; } goto L_004FB260; }
    c.f[20] = ld32((c.r[19].w[0] + 76u));
    c.f[21] = ld32((c.r[19].w[0] + 72u));
    c.f[22] = ld32((c.r[19].w[0] + 68u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB2CCu); set32(c.r[4], c.r[29].w[0] + 560u);  if (depth < kMaxDepth) unit_0009(c, 318u, depth + 1u); else { c.pc = 0x001275E0u; return; } if (c.pc != 0x004FB2CCu) [[unlikely]] return; }
L_004FB2CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB2D4u); set32(c.r[4], c.r[29].w[0] + 496u);  if (depth < kMaxDepth) unit_0009(c, 318u, depth + 1u); else { c.pc = 0x001275E0u; return; } if (c.pc != 0x004FB2D4u) [[unlikely]] return; }
L_004FB2D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB2DCu); set32(c.r[4], c.r[29].w[0] + 432u);  if (depth < kMaxDepth) unit_0009(c, 318u, depth + 1u); else { c.pc = 0x001275E0u; return; } if (c.pc != 0x004FB2DCu) [[unlikely]] return; }
L_004FB2DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB2E4u); set32(c.r[4], c.r[29].w[0] + 560u);  if (depth < kMaxDepth) unit_0009(c, 317u, depth + 1u); else { c.pc = 0x00127590u; return; } if (c.pc != 0x004FB2E4u) [[unlikely]] return; }
L_004FB2E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB2ECu); set32(c.r[4], c.r[29].w[0] + 496u);  if (depth < kMaxDepth) unit_0009(c, 317u, depth + 1u); else { c.pc = 0x00127590u; return; } if (c.pc != 0x004FB2ECu) [[unlikely]] return; }
L_004FB2EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB2F4u); set32(c.r[4], c.r[29].w[0] + 432u);  if (depth < kMaxDepth) unit_0009(c, 317u, depth + 1u); else { c.pc = 0x00127590u; return; } if (c.pc != 0x004FB2F4u) [[unlikely]] return; }
L_004FB2F4:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[22]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004FB32C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB310u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_0009(c, 316u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x004FB310u) [[unlikely]] return; }
L_004FB310:
    c.f[12] = c.f[22];
    st32((c.r[29].w[0] + 600u), c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB320u); st32((c.r[29].w[0] + 580u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 315u, depth + 1u); else { c.pc = 0x00127570u; return; } if (c.pc != 0x004FB320u) [[unlikely]] return; }
L_004FB320:
    st32((c.r[29].w[0] + 584u), c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 596u), c.f[0]);
    c.budget -= 3;
L_004FB32C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[21]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004FB368; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB348u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0009(c, 316u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x004FB348u) [[unlikely]] return; }
L_004FB348:
    c.f[12] = c.f[21];
    st32((c.r[29].w[0] + 536u), c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB358u); st32((c.r[29].w[0] + 496u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 315u, depth + 1u); else { c.pc = 0x00127570u; return; } if (c.pc != 0x004FB358u) [[unlikely]] return; }
L_004FB358:
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 504u), c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 528u), c.f[0]);
    c.budget -= 4;
L_004FB368:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], c.r[29].w[0] + 368u);  goto L_004FB3A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB384u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 316u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x004FB384u) [[unlikely]] return; }
L_004FB384:
    c.f[12] = c.f[20];
    st32((c.r[29].w[0] + 452u), c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB394u); st32((c.r[29].w[0] + 432u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 315u, depth + 1u); else { c.pc = 0x00127570u; return; } if (c.pc != 0x004FB394u) [[unlikely]] return; }
L_004FB394:
    st32((c.r[29].w[0] + 436u), c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 448u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.budget -= 4;
L_004FB3A4:
    set32(c.r[5], c.r[29].w[0] + 560u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB3B0u); set32(c.r[6], c.r[29].w[0] + 496u);  if (depth < kMaxDepth) unit_0009(c, 356u, depth + 1u); else { c.pc = 0x00127C50u; return; } if (c.pc != 0x004FB3B0u) [[unlikely]] return; }
L_004FB3B0:
    set32(c.r[4], c.r[29].w[0] + 688u);
    set32(c.r[5], c.r[29].w[0] + 368u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB3C0u); set32(c.r[6], c.r[29].w[0] + 432u);  if (depth < kMaxDepth) unit_0009(c, 356u, depth + 1u); else { c.pc = 0x00127C50u; return; } if (c.pc != 0x004FB3C0u) [[unlikely]] return; }
L_004FB3C0:
    c.f[0] = ld32((c.r[19].w[0] + 56u));
    set32(c.r[4], ld32((c.r[29].w[0] + 764u)));
    set32(c.r[5], c.r[29].w[0] + 688u);
    st32((c.r[29].w[0] + 736u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 60u));
    st32((c.r[29].w[0] + 740u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 64u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB3E4u); st32((c.r[29].w[0] + 744u), c.f[0]);  if (depth < kMaxDepth) unit_00DA(c, 175u, depth + 1u); else { c.pc = 0x0046A320u; return; } if (c.pc != 0x004FB3E4u) [[unlikely]] return; }
L_004FB3E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_004FB668; } }
L_004FB3EC:
    set32(c.r[2], ld32((c.r[19].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[4], 0u + 88u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB410u); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004FB410u) [[unlikely]] return; }
L_004FB410:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[16].w[0] + 76u));  goto L_004FB490; }
    c.f[20] = ld32((c.r[16].w[0] + 72u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB428u); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_00D2(c, 47u, depth + 1u); else { c.pc = 0x00448AC0u; return; } if (c.pc != 0x004FB428u) [[unlikely]] return; }
L_004FB428:
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0]), c.r[4].w[0]);
    st32((c.r[17].w[0] + 4u), c.f[0]);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 12u), 0u);
    st32((c.r[17].w[0] + 16u), c.f[20]);
    st8((c.r[17].w[0] + 84u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 24u), 0u);
    st32((c.r[17].w[0] + 28u), 0u);
    st32((c.r[17].w[0] + 32u), 0u);
    st32((c.r[17].w[0] + 36u), 0u);
    st32((c.r[17].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 44u), 0u);
    st32((c.r[17].w[0] + 48u), 0u);
    st32((c.r[17].w[0] + 52u), 0u);
    st32((c.r[17].w[0] + 56u), 0u);
    st32((c.r[17].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 64u), 0u);
    st32((c.r[17].w[0] + 68u), 0u);
    st32((c.r[17].w[0] + 72u), 0u);
    st32((c.r[17].w[0] + 76u), 0u);
    st32((c.r[17].w[0] + 80u), c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 76u));
    c.budget -= 26;
L_004FB490:
    st8((c.r[17].w[0] + 84u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 84u));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 40u)));  goto L_004FB644; }
    c.f[20] = ld32((c.r[16].w[0] + 88u));
    c.f[21] = ld32((c.r[16].w[0] + 84u));
    c.f[22] = ld32((c.r[16].w[0] + 80u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB4B4u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0009(c, 318u, depth + 1u); else { c.pc = 0x001275E0u; return; } if (c.pc != 0x004FB4B4u) [[unlikely]] return; }
L_004FB4B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB4BCu); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 318u, depth + 1u); else { c.pc = 0x001275E0u; return; } if (c.pc != 0x004FB4BCu) [[unlikely]] return; }
L_004FB4BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB4C4u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 318u, depth + 1u); else { c.pc = 0x001275E0u; return; } if (c.pc != 0x004FB4C4u) [[unlikely]] return; }
L_004FB4C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB4CCu); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0009(c, 317u, depth + 1u); else { c.pc = 0x00127590u; return; } if (c.pc != 0x004FB4CCu) [[unlikely]] return; }
L_004FB4CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB4D4u); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 317u, depth + 1u); else { c.pc = 0x00127590u; return; } if (c.pc != 0x004FB4D4u) [[unlikely]] return; }
L_004FB4D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB4DCu); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 317u, depth + 1u); else { c.pc = 0x00127590u; return; } if (c.pc != 0x004FB4DCu) [[unlikely]] return; }
L_004FB4DC:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[22]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004FB514; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB4F8u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_0009(c, 316u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x004FB4F8u) [[unlikely]] return; }
L_004FB4F8:
    c.f[12] = c.f[22];
    st32((c.r[29].w[0] + 344u), c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB508u); st32((c.r[29].w[0] + 324u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 315u, depth + 1u); else { c.pc = 0x00127570u; return; } if (c.pc != 0x004FB508u) [[unlikely]] return; }
L_004FB508:
    st32((c.r[29].w[0] + 328u), c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 340u), c.f[0]);
    c.budget -= 3;
L_004FB514:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[21]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004FB550; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB530u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_0009(c, 316u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x004FB530u) [[unlikely]] return; }
L_004FB530:
    c.f[12] = c.f[21];
    st32((c.r[29].w[0] + 280u), c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB540u); st32((c.r[29].w[0] + 240u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 315u, depth + 1u); else { c.pc = 0x00127570u; return; } if (c.pc != 0x004FB540u) [[unlikely]] return; }
L_004FB540:
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 248u), c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 272u), c.f[0]);
    c.budget -= 4;
L_004FB550:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], c.r[29].w[0] + 112u);  goto L_004FB58C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB56Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0009(c, 316u, depth + 1u); else { c.pc = 0x00127580u; return; } if (c.pc != 0x004FB56Cu) [[unlikely]] return; }
L_004FB56C:
    c.f[12] = c.f[20];
    st32((c.r[29].w[0] + 196u), c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB57Cu); st32((c.r[29].w[0] + 176u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 315u, depth + 1u); else { c.pc = 0x00127570u; return; } if (c.pc != 0x004FB57Cu) [[unlikely]] return; }
L_004FB57C:
    st32((c.r[29].w[0] + 180u), c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 192u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
L_004FB58C:
    set32(c.r[5], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB598u); set32(c.r[6], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 356u, depth + 1u); else { c.pc = 0x00127C50u; return; } if (c.pc != 0x004FB598u) [[unlikely]] return; }
L_004FB598:
    set32(c.r[4], c.r[29].w[0] + 624u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB5A8u); set32(c.r[6], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 356u, depth + 1u); else { c.pc = 0x00127C50u; return; } if (c.pc != 0x004FB5A8u) [[unlikely]] return; }
L_004FB5A8:
    c.f[1] = ld32((c.r[16].w[0] + 92u));
    c.f[0] = ld32((c.r[29].w[0] + 624u));
    st32((c.r[29].w[0] + 672u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 96u));
    st32((c.r[29].w[0] + 676u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 100u));
    st32((c.r[29].w[0] + 680u), c.f[1]);
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 628u));
    st32((c.r[17].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 632u));
    st32((c.r[17].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 636u));
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 640u));
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 644u));
    st32((c.r[17].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 648u));
    st32((c.r[17].w[0] + 44u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 652u));
    st32((c.r[17].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 656u));
    st32((c.r[17].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 660u));
    st32((c.r[17].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 664u));
    st32((c.r[17].w[0] + 60u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 668u));
    st32((c.r[17].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 672u));
    st32((c.r[17].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 676u));
    st32((c.r[17].w[0] + 72u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 680u));
    st32((c.r[17].w[0] + 76u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 684u));
    st32((c.r[17].w[0] + 80u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 40u)));
    c.budget -= 39;
L_004FB644:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 764u)));  goto L_004FB65C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB654u); set32(c.r[4], c.r[16].w[0] + 40u);  if (depth < kMaxDepth) unit_00D2(c, 47u, depth + 1u); else { c.pc = 0x00448AC0u; return; } if (c.pc != 0x004FB654u) [[unlikely]] return; }
L_004FB654:
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 764u)));
    c.budget -= 2;
L_004FB65C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB664u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 145u, depth + 1u); else { c.pc = 0x00469BC0u; return; } if (c.pc != 0x004FB664u) [[unlikely]] return; }
L_004FB664:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_004FB668:
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FB3ECu | kUnwind; return; } goto L_004FB3EC; }
    set32(c.r[2], ld32((c.r[19].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 764u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 756u)));
    set32(c.r[4], c.r[3].w[0] + 288u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB698u); set32(c.r[6], c.r[5].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00FF(c, 109u, depth + 1u); else { c.pc = 0x004FCDC0u; return; } if (c.pc != 0x004FB698u) [[unlikely]] return; }
L_004FB698:
    c.r[5].d[0] = ld8((c.r[19].w[0] + 80u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB6A4u); set32(c.r[4], ld32((c.r[29].w[0] + 764u)));  if (depth < kMaxDepth) unit_00D9(c, 154u, depth + 1u); else { c.pc = 0x00465D00u; return; } if (c.pc != 0x004FB6A4u) [[unlikely]] return; }
L_004FB6A4:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 81u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  goto L_004FB6C0; }
    set32(c.r[4], ld32((c.r[29].w[0] + 764u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB6BCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00D9(c, 144u, depth + 1u); else { c.pc = 0x00465B80u; return; } if (c.pc != 0x004FB6BCu) [[unlikely]] return; }
L_004FB6BC:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 1;
L_004FB6C0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 764u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB6DCu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x004FB6DCu) [[unlikely]] return; }
L_004FB6DC:
    set32(c.r[2], ld32((c.r[29].w[0] + 764u)));
    c.budget -= 1;
L_004FB6E0:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 768u);  c.pc = t; return; }
L_004FB710:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 140u)));
    set32(c.r[5], c.r[2].w[0] + 20u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB75Cu); set32(c.r[4], c.r[29].w[0] + 332u);  if (depth < kMaxDepth) unit_00C8(c, 68u, depth + 1u); else { c.pc = 0x00420E60u; return; } if (c.pc != 0x004FB75Cu) [[unlikely]] return; }
L_004FB75C:
    set32(c.r[5], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB768u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x004FB768u) [[unlikely]] return; }
L_004FB768:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004FB7A4; } }
L_004FB770:
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[5], c.r[3].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[29].w[0] + 332u);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB794u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00FE(c, 389u, depth + 1u); else { c.pc = 0x004FB150u; return; } if (c.pc != 0x004FB794u) [[unlikely]] return; }
L_004FB794:
    set32(c.r[5], ld32((c.r[21].w[0] + 148u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB7A0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 161u, depth + 1u); else { c.pc = 0x00469FF0u; return; } if (c.pc != 0x004FB7A0u) [[unlikely]] return; }
L_004FB7A0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_004FB7A4:
    set32(c.r[2], ld32((c.r[20].w[0] + 72u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FB770u | kUnwind; return; } goto L_004FB770; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004FB7F0; } }
L_004FB7BC:
    set32(c.r[2], ld32((c.r[20].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[9], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[9].w[0] + 64u)));
    set32(c.r[5], c.r[9].w[0] + 32u);
    set32(c.r[8], ld32((c.r[9].w[0] + 100u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB7ECu); set32(c.r[7], c.r[9].w[0] + 68u);  if (depth < kMaxDepth) unit_00FE(c, 358u, depth + 1u); else { c.pc = 0x004FACA0u; return; } if (c.pc != 0x004FB7ECu) [[unlikely]] return; }
L_004FB7EC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_004FB7F0:
    set32(c.r[2], ld32((c.r[20].w[0] + 80u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FB7BCu | kUnwind; return; } goto L_004FB7BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_004FB89C; } }
L_004FB808:
    set32(c.r[2], ld32((c.r[20].w[0] + 92u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB824u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004FB824u) [[unlikely]] return; }
L_004FB824:
    set32(c.r[2], ld32((c.r[29].w[0] + 288u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 289u);  goto L_004FB838; }
    set32(c.r[5], ld32((c.r[29].w[0] + 296u)));
    c.budget -= 1;
L_004FB838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB840u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FE(c, 317u, depth + 1u); else { c.pc = 0x004FA750u; return; } if (c.pc != 0x004FB840u) [[unlikely]] return; }
L_004FB840:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_004FB87C; } }
L_004FB84C:
    set32(c.r[3], c.r[17].w[0] << 5);
    set32(c.r[22], c.r[3].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB860u); set32(c.r[5], c.r[2].w[0] + c.r[22].w[0]);  if (depth < kMaxDepth) unit_00FE(c, 323u, depth + 1u); else { c.pc = 0x004FA7F0u; return; } if (c.pc != 0x004FB860u) [[unlikely]] return; }
L_004FB860:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + c.r[22].w[0]);
    c.r[6].d[0] = ld8((c.r[2].w[0] + 32u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB878u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D8(c, 252u, depth + 1u); else { c.pc = 0x00462F10u; return; } if (c.pc != 0x004FB878u) [[unlikely]] return; }
L_004FB878:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_004FB87C:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FB84Cu | kUnwind; return; } goto L_004FB84C; }
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB898u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004FB898u) [[unlikely]] return; }
L_004FB898:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_004FB89C:
    set32(c.r[2], ld32((c.r[20].w[0] + 88u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FB808u | kUnwind; return; } goto L_004FB808; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_004FB8C0; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB8C0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FE(c, 301u, depth + 1u); else { c.pc = 0x004FA4D0u; return; } if (c.pc != 0x004FB8C0u) [[unlikely]] return; }
L_004FB8C0:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004FB958; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[21].w[0] + 12u)));  if (t) { goto L_004FB92C; } }
L_004FB8D0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[18], ld32((c.r[2].w[0])));  if (t) { goto L_004FB8F0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB8E8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D8(c, 256u, depth + 1u); else { c.pc = 0x00463020u; return; } if (c.pc != 0x004FB8E8u) [[unlikely]] return; }
L_004FB8E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_004FB8F8; } }
L_004FB8F0:
    set32(c.r[2], 0u + 1u);
    c.r[6].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 2;
L_004FB8F8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 332u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB908u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 247u, depth + 1u); else { c.pc = 0x004668E0u; return; } if (c.pc != 0x004FB908u) [[unlikely]] return; }
L_004FB908:
    set32(c.r[5], ld32((c.r[21].w[0] + 140u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB914u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 172u, depth + 1u); else { c.pc = 0x0046A2C0u; return; } if (c.pc != 0x004FB914u) [[unlikely]] return; }
L_004FB914:
    set32(c.r[5], ld32((c.r[21].w[0] + 148u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB920u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DA(c, 161u, depth + 1u); else { c.pc = 0x00469FF0u; return; } if (c.pc != 0x004FB920u) [[unlikely]] return; }
L_004FB920:
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[17], c.r[2].w[0] + 4u);
    c.budget -= 3;
L_004FB92C:
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    c.r[2].d[0] = c.r[17].d[0] << 32;
    set32(c.r[3], ld32((c.r[21].w[0] + 12u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[17].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FB8D0u | kUnwind; return; } goto L_004FB8D0; }
L_004FB958:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_004FBB90; } }
L_004FB960:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 100u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 19680u);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB988u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x004FB988u) [[unlikely]] return; }
L_004FB988:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_004FBB90; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[21].w[0] + 12u)));  if (t) { goto L_004FB9C4; } }
L_004FB998:
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FB9ACu); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x004FB9ACu) [[unlikely]] return; }
L_004FB9AC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[19].d[0] << 32;  goto L_004FB9BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[17].w[0] + 68u));  if (t) { goto L_004FB9F8; } }
L_004FB9BC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[19], c.r[2].w[0] + 4u);
    c.budget -= 2;
L_004FB9C4:
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    c.r[2].d[0] = c.r[19].d[0] << 32;
    set32(c.r[3], ld32((c.r[21].w[0] + 12u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[19].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FB998u | kUnwind; return; } goto L_004FB998; }
    c.r[16].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[17].w[0] + 68u));
    c.budget -= 2;
L_004FB9F8:
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[17].w[0] + 72u);
    set32(c.r[5], c.r[5].w[0] + 19763u);
    st32((c.r[29].w[0] + 308u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 312u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FBA18u); st32((c.r[29].w[0] + 304u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x004FBA18u) [[unlikely]] return; }
L_004FBA18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004FBB8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FBA28u); set32(c.r[4], c.r[17].w[0] + 72u);  if (depth < kMaxDepth) unit_00D7(c, 40u, depth + 1u); else { c.pc = 0x0045C7B0u; return; } if (c.pc != 0x004FBA28u) [[unlikely]] return; }
L_004FBA28:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FBA34u); set32(c.r[4], c.r[17].w[0] + 136u);  if (depth < kMaxDepth) unit_00DB(c, 193u, depth + 1u); else { c.pc = 0x0046F3B0u; return; } if (c.pc != 0x004FBA34u) [[unlikely]] return; }
L_004FBA34:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 180u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FBA44u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000E(c, 27u, depth + 1u); else { c.pc = 0x00138670u; return; } if (c.pc != 0x004FBA44u) [[unlikely]] return; }
L_004FBA44:
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    set32(c.r[4], 0u + 208u);
    c.f[2] = ld32((c.r[29].w[0] + 160u));
    c.r[5].d[0] = 0ull + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 164u));
    st32((c.r[29].w[0] + 232u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 180u));
    st32((c.r[29].w[0] + 224u), c.f[2]);
    st32((c.r[29].w[0] + 228u), c.f[1]);
    st32((c.r[29].w[0] + 244u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 172u));
    c.f[1] = ld32((c.r[29].w[0] + 176u));
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    st32((c.r[29].w[0] + 236u), c.f[2]);
    st32((c.r[29].w[0] + 240u), c.f[1]);
    st32((c.r[29].w[0] + 256u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 184u));
    c.f[1] = ld32((c.r[29].w[0] + 188u));
    c.f[0] = ld32((c.r[29].w[0] + 204u));
    st32((c.r[29].w[0] + 248u), c.f[2]);
    st32((c.r[29].w[0] + 252u), c.f[1]);
    st32((c.r[29].w[0] + 268u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 196u));
    c.f[1] = ld32((c.r[29].w[0] + 200u));
    c.f[0] = ld32((c.r[29].w[0] + 216u));
    st32((c.r[29].w[0] + 260u), c.f[2]);
    st32((c.r[29].w[0] + 264u), c.f[1]);
    st32((c.r[29].w[0] + 280u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 208u));
    c.f[1] = ld32((c.r[29].w[0] + 212u));
    c.f[0] = ld32((c.r[29].w[0] + 220u));
    st32((c.r[29].w[0] + 272u), c.f[2]);
    st32((c.r[29].w[0] + 276u), c.f[1]);
    st32((c.r[29].w[0] + 284u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 168u));
    st32((c.r[29].w[0] + 272u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 172u));
    st32((c.r[29].w[0] + 276u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 176u));
    st32((c.r[29].w[0] + 280u), c.f[0]);
    c.budget -= 42;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FBAECu); st32((c.r[29].w[0] + 320u), 0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004FBAECu) [[unlikely]] return; }
L_004FBAEC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[29].w[0] + 320u), c.r[2].w[0]);  goto L_004FBB18; }
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[9].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 304u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FBB14u); set32(c.r[10], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_00D7(c, 24u, depth + 1u); else { c.pc = 0x0045C460u; return; } if (c.pc != 0x004FBB14u) [[unlikely]] return; }
L_004FBB14:
    st32((c.r[29].w[0] + 320u), c.r[2].w[0]);
    c.budget -= 1;
L_004FBB18:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FBB28u); set32(c.r[6], c.r[17].w[0] + 104u);  if (depth < kMaxDepth) unit_00D8(c, 144u, depth + 1u); else { c.pc = 0x004616D0u; return; } if (c.pc != 0x004FBB28u) [[unlikely]] return; }
L_004FBB28:
    set32(c.r[5], ld32((c.r[29].w[0] + 320u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FBB34u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D7(c, 178u, depth + 1u); else { c.pc = 0x0045DF10u; return; } if (c.pc != 0x004FBB34u) [[unlikely]] return; }
L_004FBB34:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[21].w[0] + 88u);  goto L_004FBB4C; }
    set32(c.r[4], ld32((c.r[29].w[0] + 320u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FBB48u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D7(c, 7u, depth + 1u); else { c.pc = 0x0045C250u; return; } if (c.pc != 0x004FBB48u) [[unlikely]] return; }
L_004FBB48:
    set32(c.r[4], c.r[21].w[0] + 88u);
    c.budget -= 1;
L_004FBB4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FBB54u); set32(c.r[5], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0009(c, 107u, depth + 1u); else { c.pc = 0x00124E90u; return; } if (c.pc != 0x004FBB54u) [[unlikely]] return; }
L_004FBB54:
    set32(c.r[5], ld32((c.r[21].w[0] + 140u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FBB60u); set32(c.r[4], ld32((c.r[29].w[0] + 320u)));  if (depth < kMaxDepth) unit_00D6(c, 464u, depth + 1u); else { c.pc = 0x0045B9D0u; return; } if (c.pc != 0x004FBB60u) [[unlikely]] return; }
L_004FBB60:
    set32(c.r[4], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[2], 0u + 7u);
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004FBB8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FBB7Cu); set32(c.r[4], ld32((c.r[4].w[0] + 196u)));  if (depth < kMaxDepth) unit_00FF(c, 107u, depth + 1u); else { c.pc = 0x004FCD90u; return; } if (c.pc != 0x004FBB7Cu) [[unlikely]] return; }
L_004FBB7C:
    c.r[6].d[0] = ld16((c.r[17].w[0] + 196u));
    set32(c.r[5], ld32((c.r[17].w[0] + 200u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FBB8Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D7(c, 268u, depth + 1u); else { c.pc = 0x0045EB40u; return; } if (c.pc != 0x004FBB8Cu) [[unlikely]] return; }
L_004FBB8C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_004FBB90:
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FB960u | kUnwind; return; } goto L_004FB960; }
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_004FBBF8; } }
L_004FBBAC:
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 305u));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_004FBBF8; }
    set32(c.r[4], ld32((c.r[21].w[0] + 144u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[21].w[0] + 144u), c.r[16].w[0]);  goto L_004FBBDC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FBBD8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D9(c, 154u, depth + 1u); else { c.pc = 0x00465D00u; return; } if (c.pc != 0x004FBBD8u) [[unlikely]] return; }
L_004FBBD8:
    st32((c.r[21].w[0] + 144u), c.r[16].w[0]);
    c.budget -= 1;
L_004FBBDC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 332u);  goto L_004FBC08; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FBBF0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00D9(c, 154u, depth + 1u); else { c.pc = 0x00465D00u; return; } if (c.pc != 0x004FBBF0u) [[unlikely]] return; }
L_004FBBF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004FBC04; } }
L_004FBBF8:
    c.r[2].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004FBBACu | kUnwind; return; } goto L_004FBBAC; }
L_004FBC04:
    set32(c.r[4], c.r[29].w[0] + 332u);
    c.budget -= 1;
L_004FBC08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FBC10u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00C8(c, 49u, depth + 1u); else { c.pc = 0x00420C00u; return; } if (c.pc != 0x004FBC10u) [[unlikely]] return; }
L_004FBC10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_004FBC50:
    set32(c.r[29], c.r[29].w[0] - 448u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 108u), c.f[31]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 104u), c.f[30]);
    st32((c.r[29].w[0] + 100u), c.f[29]);
    st32((c.r[29].w[0] + 96u), c.f[28]);
    st32((c.r[29].w[0] + 92u), c.f[27]);
    st32((c.r[29].w[0] + 88u), c.f[26]);
    st32((c.r[29].w[0] + 84u), c.f[25]);
    st32((c.r[29].w[0] + 80u), c.f[24]);
    st32((c.r[29].w[0] + 76u), c.f[23]);
    st32((c.r[29].w[0] + 72u), c.f[22]);
    st32((c.r[29].w[0] + 68u), c.f[21]);
    st32((c.r[29].w[0] + 64u), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 152u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 320u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 23;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] - c.r[6].w[0]);  if (t) { goto L_004FBCBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FBCB4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D8(c, 251u, depth + 1u); else { c.pc = 0x00462ED0u; return; } if (c.pc != 0x004FBCB4u) [[unlikely]] return; }
L_004FBCB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004FBCC0; } }
L_004FBCBC:
    set32(c.r[2], ld32((c.r[4].w[0] + 144u)));
    c.budget -= 1;
L_004FBCC0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], 0u + 5u);  goto L_004FBCD4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_00FF(c, 4u, depth); } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 1;
L_004FBCD4:
    mmi::div(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].d[0] = c.r[5].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] << 1);  if (t) { goto L_004FBCF4; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_004FBCF4:
    c.f[0] = 0u;
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; st32((c.r[29].w[0] + 188u), c.f[0]);  if (t) { goto L_004FBD68; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0xC0400000u);  goto L_004FBD5C; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);  goto L_004FBD4C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0xC0C00000u);  goto L_004FBD3C; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_004FBD78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004FBD78; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0C00000u);
    c.budget -= 1;
L_004FBD3C:
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 188u), c.f[0]);  if (t) { goto L_004FBD78; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.budget -= 1;
L_004FBD4C:
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 188u), c.f[0]);  if (t) { goto L_004FBD78; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC0400000u);
    c.budget -= 1;
L_004FBD5C:
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 188u), c.f[0]);  if (t) { goto L_004FBD78; } }
L_004FBD68:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 188u), c.f[0]);
    c.budget -= 4;
L_004FBD78:
    c.f[0] = c.r[4].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.f[1] = ld32((c.r[28].w[0] - 31584u));
    c.f[0] = 0u;
    c.f[3] = ld32((c.r[28].w[0] - 32564u));
    c.facc = fp::add(c.f[0], c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FBDACu); c.f[12] = fp::sub(c.facc, fp::mul(c.f[3], c.f[2]));  if (depth < kMaxDepth) unit_00DA(c, 129u, depth + 1u); else { c.pc = 0x004693D0u; return; } if (c.pc != 0x004FBDACu) [[unlikely]] return; }
L_004FBDAC:
    c.f[12] = ld32((c.r[28].w[0] - 31660u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FBDB8u); set32(c.r[4], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_00BF(c, 25u, depth + 1u); else { c.pc = 0x003FC300u; return; } if (c.pc != 0x004FBDB8u) [[unlikely]] return; }
L_004FBDB8:
    c.f[1] = ld32((c.r[29].w[0] + 352u));
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.f[4] = ld32((c.r[16].w[0] + 16u));
    c.f[18] = ld32((c.r[29].w[0] + 324u));
    st32((c.r[29].w[0] + 184u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 360u));
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[17] = ld32((c.r[29].w[0] + 320u));
    st32((c.r[29].w[0] + 180u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 364u));
    c.facc = fp::mul(c.f[18], c.f[4]);
    c.f[2] = ld32((c.r[16].w[0] + 32u));
    st32((c.r[29].w[0] + 176u), c.f[1]);
    c.f[16] = ld32((c.r[29].w[0] + 328u));
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[3]));
    c.f[15] = ld32((c.r[29].w[0] + 332u));
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
    c.f[31] = ld32((c.r[29].w[0] + 340u));
    c.f[15] = fp::add(c.facc, fp::mul(c.f[15], c.f[22]));
    c.f[30] = ld32((c.r[29].w[0] + 336u));
    c.facc = fp::mul(c.f[31], c.f[4]);
    c.f[29] = ld32((c.r[29].w[0] + 344u));
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[3]));
    c.f[19] = ld32((c.r[29].w[0] + 348u));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[2]));
    c.f[0] = ld32((c.r[29].w[0] + 356u));
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
    c.f[29] = ld32((c.r[29].w[0] + 184u));
    c.facc = fp::mul(c.f[0], c.f[4]);
    c.f[27] = ld32((c.r[29].w[0] + 372u));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[3]));
    c.f[29] = ld32((c.r[29].w[0] + 180u));
    c.f[25] = ld32((c.r[29].w[0] + 368u));
    c.f[23] = ld32((c.r[29].w[0] + 376u));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[2]));
    c.f[29] = ld32((c.r[29].w[0] + 176u));
    c.f[21] = ld32((c.r[29].w[0] + 380u));
    c.f[29] = fp::add(c.facc, fp::mul(c.f[29], c.f[1]));
    st32((c.r[29].w[0]), c.f[29]);
    c.f[29] = ld32((c.r[29].w[0] + 184u));
    c.facc = fp::mul(c.f[0], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[7]));
    c.f[29] = ld32((c.r[29].w[0] + 180u));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[6]));
    c.f[29] = ld32((c.r[29].w[0] + 176u));
    c.f[29] = fp::add(c.facc, fp::mul(c.f[29], c.f[5]));
    st32((c.r[29].w[0] + 8u), c.f[29]);
    c.f[29] = ld32((c.r[29].w[0] + 184u));
    c.facc = fp::mul(c.f[0], c.f[20]);
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[11]));
    c.f[29] = ld32((c.r[29].w[0] + 180u));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[10]));
    c.f[29] = ld32((c.r[29].w[0] + 176u));
    c.f[29] = fp::add(c.facc, fp::mul(c.f[29], c.f[9]));
    c.facc = fp::mul(c.f[0], c.f[28]);
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    st32((c.r[29].w[0] + 16u), c.f[29]);
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[26]));
    c.f[0] = ld32((c.r[29].w[0] + 180u));
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[24]));
    c.f[0] = ld32((c.r[29].w[0] + 176u));
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004FBF9Cu); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_0013(c, 290u, depth + 1u); else { c.pc = 0x0014E3B0u; return; } if (c.pc != 0x004FBF9Cu) [[unlikely]] return; }
L_004FBF9C:
    c.f[0] = ld32((c.r[29].w[0] + 384u));
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.f[13] = 0u;
    c.f[12] = ld32((c.r[29].w[0] + 188u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 388u));
    c.f[14] = c.f[13];
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 392u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 396u));
    st32((c.r[16].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 400u));
    st32((c.r[16].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 404u));
    st32((c.r[16].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 408u));
    st32((c.r[16].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 412u));
    st32((c.r[16].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 416u));
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 420u));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 424u));
    c.budget -= 25;
    [[clang::musttail]] return unit_00FF(c, 1u, depth);
}

}
