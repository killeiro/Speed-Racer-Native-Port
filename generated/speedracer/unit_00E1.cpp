#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00E1[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0,
    0, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0,
    19, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0,
    0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0,
    0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0,
    0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0,
    39, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50,
    0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 55, 0, 0,
    0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0,
    0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0,
    0, 0, 70, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0,
    80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0,
    0, 85, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0,
    91, 0, 0, 92, 0, 0, 93, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0,
    103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0,
    0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0,
    0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136,
    0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0,
    0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0,
    149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0,
    0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0,
    0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168,
    0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0,
    0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0,
    0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0,
    184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0,
    191, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 209, 0, 0, 0,
    0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0,
    214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 223, 0,
    0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0,
    232, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 237,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0,
    0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0,
    0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 253, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0,
    256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263,
    0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 268, 0, 0, 269, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0,
    274, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0,
    0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284,
    0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    287, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 290, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 293, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 294, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296,
    0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 304, 0, 0, 0, 0,
    0, 0, 0, 0, 305, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0,
    0, 311, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323,
    0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 328, 0,
    0, 0, 0, 329, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0,
    343, 0, 0, 344, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0,
    0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0,
    0, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 373,
    0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 376,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0,
    381, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0,
    388, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0,
    396, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 401, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418,
    0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 421, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 424,
    0, 0, 0, 0, 0, 0, 425, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 429, 0, 0, 430, 0,
    0, 0, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0,
    439, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0, 0, 0,
    0, 0, 0, 445, 446, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 449,
    0, 0, 0, 0, 0, 450, 0, 451, 0, 452, 0, 0, 0, 0, 453, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 455, 0, 0, 456, 0, 0, 0,
    457, 0, 0, 458, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 462, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0,
    469, 0, 0, 470, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 474, 0, 0,
    0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0,
    479, 0, 0, 0, 480, 0, 0, 0, 481, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 483, 0, 0, 484, 0, 0, 0, 0, 0, 485, 0, 0,
    486, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 492,
    0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 496, 0, 0, 0, 0, 497, 0,
    0, 0, 0, 498, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0,
    0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 502, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 507, 0, 0, 0, 0, 508, 0, 0, 509,
};

void unit_00E1(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00484000;
    case 2u: goto L_00484004;
    case 3u: goto L_00484020;
    case 4u: goto L_00484038;
    case 5u: goto L_00484044;
    case 6u: goto L_00484064;
    case 7u: goto L_004840E8;
    case 8u: goto L_004840F4;
    case 9u: goto L_0048410C;
    case 10u: goto L_00484114;
    case 11u: goto L_00484130;
    case 12u: goto L_00484140;
    case 13u: goto L_0048418C;
    case 14u: goto L_004841B0;
    case 15u: goto L_004841BC;
    case 16u: goto L_004841D0;
    case 17u: goto L_004841DC;
    case 18u: goto L_004841E8;
    case 19u: goto L_00484200;
    case 20u: goto L_00484224;
    case 21u: goto L_0048423C;
    case 22u: goto L_00484260;
    case 23u: goto L_0048427C;
    case 24u: goto L_004842F4;
    case 25u: goto L_0048430C;
    case 26u: goto L_00484350;
    case 27u: goto L_00484354;
    case 28u: goto L_00484370;
    case 29u: goto L_00484394;
    case 30u: goto L_004843B0;
    case 31u: goto L_004843D4;
    case 32u: goto L_004843EC;
    case 33u: goto L_00484410;
    case 34u: goto L_00484420;
    case 35u: goto L_00484444;
    case 36u: goto L_00484450;
    case 37u: goto L_00484460;
    case 38u: goto L_00484470;
    case 39u: goto L_00484480;
    case 40u: goto L_00484490;
    case 41u: goto L_004844A0;
    case 42u: goto L_004844B0;
    case 43u: goto L_00484518;
    case 44u: goto L_00484530;
    case 45u: goto L_00484550;
    case 46u: goto L_00484590;
    case 47u: goto L_004845A0;
    case 48u: goto L_004845B0;
    case 49u: goto L_004845E4;
    case 50u: goto L_004845FC;
    case 51u: goto L_00484614;
    case 52u: goto L_00484640;
    case 53u: goto L_00484660;
    case 54u: goto L_0048466C;
    case 55u: goto L_00484674;
    case 56u: goto L_0048468C;
    case 57u: goto L_004846B8;
    case 58u: goto L_004846E4;
    case 59u: goto L_0048470C;
    case 60u: goto L_00484728;
    case 61u: goto L_00484738;
    case 62u: goto L_00484748;
    case 63u: goto L_00484758;
    case 64u: goto L_00484770;
    case 65u: goto L_00484788;
    case 66u: goto L_004847A0;
    case 67u: goto L_004847B8;
    case 68u: goto L_004847DC;
    case 69u: goto L_004847E8;
    case 70u: goto L_00484808;
    case 71u: goto L_00484818;
    case 72u: goto L_00484824;
    case 73u: goto L_00484840;
    case 74u: goto L_004848A8;
    case 75u: goto L_004848B4;
    case 76u: goto L_004848D8;
    case 77u: goto L_004848E8;
    case 78u: goto L_00484918;
    case 79u: goto L_00484968;
    case 80u: goto L_00484980;
    case 81u: goto L_00484998;
    case 82u: goto L_004849AC;
    case 83u: goto L_004849C4;
    case 84u: goto L_004849F4;
    case 85u: goto L_00484A04;
    case 86u: goto L_00484A10;
    case 87u: goto L_00484A20;
    case 88u: goto L_00484A44;
    case 89u: goto L_00484A54;
    case 90u: goto L_00484A64;
    case 91u: goto L_00484A80;
    case 92u: goto L_00484A8C;
    case 93u: goto L_00484A98;
    case 94u: goto L_00484AA4;
    case 95u: goto L_00484AB0;
    case 96u: goto L_00484AD4;
    case 97u: goto L_00484AE0;
    case 98u: goto L_00484B10;
    case 99u: goto L_00484B24;
    case 100u: goto L_00484B48;
    case 101u: goto L_00484B54;
    case 102u: goto L_00484B6C;
    case 103u: goto L_00484B80;
    case 104u: goto L_00484BC4;
    case 105u: goto L_00484BE4;
    case 106u: goto L_00484C0C;
    case 107u: goto L_00484C5C;
    case 108u: goto L_00484CB0;
    case 109u: goto L_00484CBC;
    case 110u: goto L_00484CF0;
    case 111u: goto L_00484D28;
    case 112u: goto L_00484D30;
    case 113u: goto L_00484D44;
    case 114u: goto L_00484D54;
    case 115u: goto L_00484DA0;
    case 116u: goto L_00484E00;
    case 117u: goto L_00484E18;
    case 118u: goto L_00484E30;
    case 119u: goto L_00484E48;
    case 120u: goto L_00484E8C;
    case 121u: goto L_00484ED0;
    case 122u: goto L_00484EE4;
    case 123u: goto L_00484EF8;
    case 124u: goto L_00484F0C;
    case 125u: goto L_00484F20;
    case 126u: goto L_00484F34;
    case 127u: goto L_00484F48;
    case 128u: goto L_00484F5C;
    case 129u: goto L_00484F70;
    case 130u: goto L_00484F84;
    case 131u: goto L_00484F98;
    case 132u: goto L_00484FAC;
    case 133u: goto L_00484FC0;
    case 134u: goto L_00484FD4;
    case 135u: goto L_00484FE8;
    case 136u: goto L_00484FFC;
    case 137u: goto L_00485010;
    case 138u: goto L_00485024;
    case 139u: goto L_00485038;
    case 140u: goto L_0048504C;
    case 141u: goto L_00485060;
    case 142u: goto L_00485074;
    case 143u: goto L_00485088;
    case 144u: goto L_0048509C;
    case 145u: goto L_004850B0;
    case 146u: goto L_004850C4;
    case 147u: goto L_004850D8;
    case 148u: goto L_004850EC;
    case 149u: goto L_00485100;
    case 150u: goto L_00485114;
    case 151u: goto L_00485128;
    case 152u: goto L_0048513C;
    case 153u: goto L_00485150;
    case 154u: goto L_00485164;
    case 155u: goto L_00485178;
    case 156u: goto L_0048518C;
    case 157u: goto L_004851A0;
    case 158u: goto L_004851B4;
    case 159u: goto L_004851C8;
    case 160u: goto L_004851DC;
    case 161u: goto L_004851F0;
    case 162u: goto L_00485204;
    case 163u: goto L_00485218;
    case 164u: goto L_0048522C;
    case 165u: goto L_00485240;
    case 166u: goto L_00485254;
    case 167u: goto L_00485268;
    case 168u: goto L_0048527C;
    case 169u: goto L_00485290;
    case 170u: goto L_004852A4;
    case 171u: goto L_004852B8;
    case 172u: goto L_004852CC;
    case 173u: goto L_004852E0;
    case 174u: goto L_004852F4;
    case 175u: goto L_00485308;
    case 176u: goto L_0048531C;
    case 177u: goto L_00485330;
    case 178u: goto L_00485350;
    case 179u: goto L_00485374;
    case 180u: goto L_00485390;
    case 181u: goto L_004853B4;
    case 182u: goto L_004853CC;
    case 183u: goto L_004853F0;
    case 184u: goto L_00485400;
    case 185u: goto L_00485424;
    case 186u: goto L_00485430;
    case 187u: goto L_00485440;
    case 188u: goto L_00485450;
    case 189u: goto L_00485460;
    case 190u: goto L_00485470;
    case 191u: goto L_00485480;
    case 192u: goto L_00485490;
    case 193u: goto L_004854A0;
    case 194u: goto L_004854B0;
    case 195u: goto L_004854C0;
    case 196u: goto L_004854D0;
    case 197u: goto L_004854E0;
    case 198u: goto L_00485520;
    case 199u: goto L_00485530;
    case 200u: goto L_00485598;
    case 201u: goto L_004855B0;
    case 202u: goto L_004855D0;
    case 203u: goto L_004855E0;
    case 204u: goto L_00485614;
    case 205u: goto L_00485628;
    case 206u: goto L_00485634;
    case 207u: goto L_0048564C;
    case 208u: goto L_00485668;
    case 209u: goto L_00485670;
    case 210u: goto L_00485688;
    case 211u: goto L_004856C8;
    case 212u: goto L_004856E4;
    case 213u: goto L_004856F0;
    case 214u: goto L_00485700;
    case 215u: goto L_0048571C;
    case 216u: goto L_00485728;
    case 217u: goto L_00485738;
    case 218u: goto L_00485754;
    case 219u: goto L_00485760;
    case 220u: goto L_00485790;
    case 221u: goto L_004857D0;
    case 222u: goto L_004857EC;
    case 223u: goto L_004857F8;
    case 224u: goto L_00485808;
    case 225u: goto L_00485824;
    case 226u: goto L_00485830;
    case 227u: goto L_00485840;
    case 228u: goto L_0048585C;
    case 229u: goto L_00485868;
    case 230u: goto L_00485898;
    case 231u: goto L_004858E4;
    case 232u: goto L_00485900;
    case 233u: goto L_0048590C;
    case 234u: goto L_00485918;
    case 235u: goto L_00485940;
    case 236u: goto L_00485974;
    case 237u: goto L_0048597C;
    case 238u: goto L_004859AC;
    case 239u: goto L_004859B4;
    case 240u: goto L_004859D0;
    case 241u: goto L_00485A34;
    case 242u: goto L_00485A44;
    case 243u: goto L_00485A64;
    case 244u: goto L_00485A88;
    case 245u: goto L_00485AAC;
    case 246u: goto L_00485AE4;
    case 247u: goto L_00485B34;
    case 248u: goto L_00485B4C;
    case 249u: goto L_00485B64;
    case 250u: goto L_00485B78;
    case 251u: goto L_00485B90;
    case 252u: goto L_00485BC0;
    case 253u: goto L_00485BCC;
    case 254u: goto L_00485BD8;
    case 255u: goto L_00485BEC;
    case 256u: goto L_00485C00;
    case 257u: goto L_00485C14;
    case 258u: goto L_00485C2C;
    case 259u: goto L_00485C38;
    case 260u: goto L_00485C5C;
    case 261u: goto L_00485C68;
    case 262u: goto L_00485C9C;
    case 263u: goto L_00485CFC;
    case 264u: goto L_00485D14;
    case 265u: goto L_00485D2C;
    case 266u: goto L_00485D40;
    case 267u: goto L_00485D58;
    case 268u: goto L_00485D88;
    case 269u: goto L_00485D94;
    case 270u: goto L_00485DA0;
    case 271u: goto L_00485DD0;
    case 272u: goto L_00485E3C;
    case 273u: goto L_00485E74;
    case 274u: goto L_00485E80;
    case 275u: goto L_00485EA4;
    case 276u: goto L_00485EB0;
    case 277u: goto L_00485ECC;
    case 278u: goto L_00485F1C;
    case 279u: goto L_00485F70;
    case 280u: goto L_00485F88;
    case 281u: goto L_00485FA0;
    case 282u: goto L_00485FB4;
    case 283u: goto L_00485FCC;
    case 284u: goto L_00485FFC;
    case 285u: goto L_00486018;
    case 286u: goto L_00486038;
    case 287u: goto L_00486080;
    case 288u: goto L_004860A0;
    case 289u: goto L_004860BC;
    case 290u: goto L_00486118;
    case 291u: goto L_00486120;
    case 292u: goto L_0048615C;
    case 293u: goto L_00486164;
    case 294u: goto L_00486194;
    case 295u: goto L_0048619C;
    case 296u: goto L_004861FC;
    case 297u: goto L_00486220;
    case 298u: goto L_0048623C;
    case 299u: goto L_00486254;
    case 300u: goto L_004862B0;
    case 301u: goto L_004862E0;
    case 302u: goto L_0048633C;
    case 303u: goto L_00486360;
    case 304u: goto L_0048636C;
    case 305u: goto L_00486390;
    case 306u: goto L_0048639C;
    case 307u: goto L_004863E0;
    case 308u: goto L_0048643C;
    case 309u: goto L_00486454;
    case 310u: goto L_00486470;
    case 311u: goto L_00486484;
    case 312u: goto L_0048649C;
    case 313u: goto L_004864CC;
    case 314u: goto L_004864DC;
    case 315u: goto L_00486504;
    case 316u: goto L_00486518;
    case 317u: goto L_00486564;
    case 318u: goto L_004865E0;
    case 319u: goto L_00486610;
    case 320u: goto L_0048668C;
    case 321u: goto L_004866C4;
    case 322u: goto L_004866E4;
    case 323u: goto L_004866FC;
    case 324u: goto L_0048670C;
    case 325u: goto L_0048671C;
    case 326u: goto L_00486744;
    case 327u: goto L_0048676C;
    case 328u: goto L_00486778;
    case 329u: goto L_0048678C;
    case 330u: goto L_00486798;
    case 331u: goto L_004867A4;
    case 332u: goto L_004867BC;
    case 333u: goto L_004867E0;
    case 334u: goto L_004867F4;
    case 335u: goto L_00486830;
    case 336u: goto L_00486848;
    case 337u: goto L_00486870;
    case 338u: goto L_00486898;
    case 339u: goto L_00486924;
    case 340u: goto L_0048693C;
    case 341u: goto L_00486950;
    case 342u: goto L_00486964;
    case 343u: goto L_00486980;
    case 344u: goto L_0048698C;
    case 345u: goto L_00486994;
    case 346u: goto L_004869B8;
    case 347u: goto L_004869E0;
    case 348u: goto L_00486A48;
    case 349u: goto L_00486A70;
    case 350u: goto L_00486A94;
    case 351u: goto L_00486AB0;
    case 352u: goto L_00486AD4;
    case 353u: goto L_00486AEC;
    case 354u: goto L_00486B10;
    case 355u: goto L_00486B20;
    case 356u: goto L_00486B44;
    case 357u: goto L_00486B50;
    case 358u: goto L_00486B60;
    case 359u: goto L_00486B70;
    case 360u: goto L_00486BD0;
    case 361u: goto L_00486BD8;
    case 362u: goto L_00486C24;
    case 363u: goto L_00486C64;
    case 364u: goto L_00486CB0;
    case 365u: goto L_00486D1C;
    case 366u: goto L_00486D44;
    case 367u: goto L_00486D8C;
    case 368u: goto L_00486DB8;
    case 369u: goto L_00486DD4;
    case 370u: goto L_00486E14;
    case 371u: goto L_00486E50;
    case 372u: goto L_00486EE0;
    case 373u: goto L_00486EFC;
    case 374u: goto L_00486F20;
    case 375u: goto L_00486F60;
    case 376u: goto L_00486F7C;
    case 377u: goto L_0048700C;
    case 378u: goto L_00487028;
    case 379u: goto L_00487040;
    case 380u: goto L_00487064;
    case 381u: goto L_00487080;
    case 382u: goto L_00487098;
    case 383u: goto L_004870B0;
    case 384u: goto L_004870C0;
    case 385u: goto L_004870D0;
    case 386u: goto L_004870E0;
    case 387u: goto L_004870F0;
    case 388u: goto L_00487100;
    case 389u: goto L_00487110;
    case 390u: goto L_00487120;
    case 391u: goto L_00487130;
    case 392u: goto L_00487140;
    case 393u: goto L_00487150;
    case 394u: goto L_00487160;
    case 395u: goto L_00487170;
    case 396u: goto L_00487180;
    case 397u: goto L_00487190;
    case 398u: goto L_004871B0;
    case 399u: goto L_004871D0;
    case 400u: goto L_00487240;
    case 401u: goto L_00487254;
    case 402u: goto L_00487260;
    case 403u: goto L_004872B0;
    case 404u: goto L_004872D0;
    case 405u: goto L_00487314;
    case 406u: goto L_00487328;
    case 407u: goto L_00487354;
    case 408u: goto L_00487370;
    case 409u: goto L_004873B0;
    case 410u: goto L_00487400;
    case 411u: goto L_00487430;
    case 412u: goto L_00487448;
    case 413u: goto L_00487460;
    case 414u: goto L_00487494;
    case 415u: goto L_004874A8;
    case 416u: goto L_004874F8;
    case 417u: goto L_00487520;
    case 418u: goto L_0048757C;
    case 419u: goto L_0048758C;
    case 420u: goto L_004875A8;
    case 421u: goto L_004875C4;
    case 422u: goto L_004875D0;
    case 423u: goto L_004875E0;
    case 424u: goto L_004875FC;
    case 425u: goto L_00487618;
    case 426u: goto L_00487624;
    case 427u: goto L_00487634;
    case 428u: goto L_00487650;
    case 429u: goto L_0048766C;
    case 430u: goto L_00487678;
    case 431u: goto L_00487690;
    case 432u: goto L_004876A4;
    case 433u: goto L_00487700;
    case 434u: goto L_004877A0;
    case 435u: goto L_004877B8;
    case 436u: goto L_004877D0;
    case 437u: goto L_004877E0;
    case 438u: goto L_004877F0;
    case 439u: goto L_00487800;
    case 440u: goto L_00487810;
    case 441u: goto L_00487840;
    case 442u: goto L_004878A4;
    case 443u: goto L_004878D8;
    case 444u: goto L_004878EC;
    case 445u: goto L_0048790C;
    case 446u: goto L_00487910;
    case 447u: goto L_00487930;
    case 448u: goto L_0048795C;
    case 449u: goto L_0048797C;
    case 450u: goto L_00487994;
    case 451u: goto L_0048799C;
    case 452u: goto L_004879A4;
    case 453u: goto L_004879B8;
    case 454u: goto L_004879C8;
    case 455u: goto L_004879E4;
    case 456u: goto L_004879F0;
    case 457u: goto L_00487A00;
    case 458u: goto L_00487A0C;
    case 459u: goto L_00487A20;
    case 460u: goto L_00487A40;
    case 461u: goto L_00487AA4;
    case 462u: goto L_00487AAC;
    case 463u: goto L_00487AC8;
    case 464u: goto L_00487ADC;
    case 465u: goto L_00487B0C;
    case 466u: goto L_00487B28;
    case 467u: goto L_00487B40;
    case 468u: goto L_00487B64;
    case 469u: goto L_00487B80;
    case 470u: goto L_00487B8C;
    case 471u: goto L_00487BA4;
    case 472u: goto L_00487BBC;
    case 473u: goto L_00487BE0;
    case 474u: goto L_00487BF4;
    case 475u: goto L_00487C0C;
    case 476u: goto L_00487C30;
    case 477u: goto L_00487C44;
    case 478u: goto L_00487C5C;
    case 479u: goto L_00487C80;
    case 480u: goto L_00487C90;
    case 481u: goto L_00487CA0;
    case 482u: goto L_00487CB4;
    case 483u: goto L_00487CD0;
    case 484u: goto L_00487CDC;
    case 485u: goto L_00487CF4;
    case 486u: goto L_00487D00;
    case 487u: goto L_00487D24;
    case 488u: goto L_00487D30;
    case 489u: goto L_00487D7C;
    case 490u: goto L_00487DCC;
    case 491u: goto L_00487DE4;
    case 492u: goto L_00487DFC;
    case 493u: goto L_00487E10;
    case 494u: goto L_00487E28;
    case 495u: goto L_00487E58;
    case 496u: goto L_00487E64;
    case 497u: goto L_00487E78;
    case 498u: goto L_00487E8C;
    case 499u: goto L_00487EA4;
    case 500u: goto L_00487EF8;
    case 501u: goto L_00487F1C;
    case 502u: goto L_00487F2C;
    case 503u: goto L_00487F40;
    case 504u: goto L_00487F58;
    case 505u: goto L_00487FAC;
    case 506u: goto L_00487FD0;
    case 507u: goto L_00487FDC;
    case 508u: goto L_00487FF0;
    case 509u: goto L_00487FFC;
    default: bad_entry(c, 0x00484000u); return;
    }
L_00484000:
    st8((c.r[16].w[0] + 174u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00484004:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00484020:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484038u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x00484038u) [[unlikely]] return; }
L_00484038:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484044u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00484044u) [[unlikely]] return; }
L_00484044:
    set32(c.r[16], ld32((c.r[28].w[0] - 27612u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 18088u);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 96u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00484064u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00484064u) [[unlikely]] return; }
L_00484064:
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00484084; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_00484084:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00484098; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 4ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_00484098:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[16].w[0] + 96u));  goto L_004840A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_004840C8; } }
L_004840A8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_004840C8; }
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_004840C8; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_004840C8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 148u)));  goto L_004840EC; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 344u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004840E8u); set32(c.r[6], 0u + 6u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004840E8u) [[unlikely]] return; }
L_004840E8:
    set32(c.r[5], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 1;
L_004840EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004840F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0072(c, 350u, depth + 1u); else { c.pc = 0x002CAF50u; return; } if (c.pc != 0x004840F4u) [[unlikely]] return; }
L_004840F4:
    set32(c.r[2], ld32((c.r[17].w[0] + 140u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 148u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 26156u)));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048410Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 225u, depth + 1u); else { c.pc = 0x00403490u; return; } if (c.pc != 0x0048410Cu) [[unlikely]] return; }
L_0048410C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484114u); set32(c.r[4], ld32((c.r[29].w[0] + 56u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00484114u) [[unlikely]] return; }
L_00484114:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00484130:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00484140:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0048423C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 32240u);
    set32(c.r[3], c.r[3].w[0] - 32216u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 32128u);
    st32((c.r[17].w[0] + 132u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048418Cu); set32(c.r[4], ld32((c.r[17].w[0] + 144u)));  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x0048418Cu) [[unlikely]] return; }
L_0048418C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00484198; } }
    set32(c.r[2], c.r[17].w[0] + 132u);
    c.budget -= 1;
L_00484198:
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 84u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[18], c.r[2].w[0] + 28u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004841B0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B5(c, 165u, depth + 1u); else { c.pc = 0x003D5B00u; return; } if (c.pc != 0x004841B0u) [[unlikely]] return; }
L_004841B0:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004841BCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 2u, depth + 1u); else { c.pc = 0x00418010u; return; } if (c.pc != 0x004841BCu) [[unlikely]] return; }
L_004841BC:
    set32(c.r[5], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[4], c.r[29].w[0] + 88u);
    set32(c.r[6], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004841D0u); set32(c.r[7], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_00C5(c, 601u, depth + 1u); else { c.pc = 0x00417FC0u; return; } if (c.pc != 0x004841D0u) [[unlikely]] return; }
L_004841D0:
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004841DCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 2u, depth + 1u); else { c.pc = 0x00418010u; return; } if (c.pc != 0x004841DCu) [[unlikely]] return; }
L_004841DC:
    set32(c.r[4], c.r[29].w[0] + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004841E8u); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_00C5(c, 600u, depth + 1u); else { c.pc = 0x00417FA0u; return; } if (c.pc != 0x004841E8u) [[unlikely]] return; }
L_004841E8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 132u);  goto L_00484204; }
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484200u); set32(c.r[4], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_00C5(c, 598u, depth + 1u); else { c.pc = 0x00417F70u; return; } if (c.pc != 0x00484200u) [[unlikely]] return; }
L_00484200:
    set32(c.r[2], c.r[17].w[0] + 132u);
    c.budget -= 1;
L_00484204:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0048421C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 25616u);
    st32((c.r[17].w[0] + 132u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
L_0048421C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484224u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 208u, depth + 1u); else { c.pc = 0x001B3480u; return; } if (c.pc != 0x00484224u) [[unlikely]] return; }
L_00484224:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00484240; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048423Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0048423Cu) [[unlikely]] return; }
L_0048423C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00484240:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00484260:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048427Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 222u, depth + 1u); else { c.pc = 0x001B3670u; return; } if (c.pc != 0x0048427Cu) [[unlikely]] return; }
L_0048427C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 25616u);
    set32(c.r[3], c.r[3].w[0] - 32240u);
    st32((c.r[17].w[0] + 132u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 32216u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 32128u);
    st32((c.r[17].w[0] + 132u), c.r[3].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 136u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 140u), 0u);
    st32((c.r[17].w[0] + 144u), 0u);
    st32((c.r[17].w[0] + 148u), 0u);
    st32((c.r[17].w[0] + 152u), 0u);
    st32((c.r[17].w[0] + 156u), 0u);
    st32((c.r[17].w[0] + 168u), 0u);
    st8((c.r[17].w[0] + 172u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 173u), static_cast<std::uint8_t>(0u));
    c.budget -= 25;
    { const bool t = c.r[17].d[0] == 0ull; st8((c.r[17].w[0] + 174u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004842E4; } }
    set32(c.r[5], c.r[17].w[0] + 60u);
    c.budget -= 1;
L_004842E4:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004842F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004842F4u) [[unlikely]] return; }
L_004842F4:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0048430Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0048430Cu) [[unlikely]] return; }
L_0048430C:
    st32((c.r[17].w[0] + 160u), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 164u), 0u);
    st32((c.r[17].w[0] + 136u), c.r[16].w[0]);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull; st8((c.r[17].w[0] + 175u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00484328; } }
    set32(c.r[2], c.r[17].w[0] + 132u);
    c.budget -= 1;
L_00484328:
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[7], c.r[29].w[0] + 60u);
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[2].w[0] + 28u);
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484350u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x00484350u) [[unlikely]] return; }
L_00484350:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00484354:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00484370:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29844u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0048438C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0048439C; } }
L_0048438C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484394u);  if (depth < kMaxDepth) unit_002C(c, 227u, depth + 1u); else { c.pc = 0x001B3760u; return; } if (c.pc != 0x00484394u) [[unlikely]] return; }
L_00484394:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0048439C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004843B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004843D4u); set32(c.r[4], c.r[4].w[0] - 21152u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x004843D4u) [[unlikely]] return; }
L_004843D4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004843E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004843F4; } }
L_004843E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004843ECu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002C(c, 228u, depth + 1u); else { c.pc = 0x001B37A0u; return; } if (c.pc != 0x004843ECu) [[unlikely]] return; }
L_004843EC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_004843F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00484410:
    set32(c.r[2], ld32((c.r[28].w[0] - 30836u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_00484420:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29844u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0048443C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00484444; } }
L_0048443C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484444u);  if (depth < kMaxDepth) unit_002C(c, 231u, depth + 1u); else { c.pc = 0x001B3810u; return; } if (c.pc != 0x00484444u) [[unlikely]] return; }
L_00484444:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00484450:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29844u)));  c.pc = t; return; }
L_00484460:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 21136u);  c.pc = t; return; }
L_00484470:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 60u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00483DD0u | kUnwind; return; } [[clang::musttail]] return unit_00E0(c, 505u, depth); }
L_00484480:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 60u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00484140u | kUnwind; return; } goto L_00484140; }
L_00484490:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 132u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00484140u | kUnwind; return; } goto L_00484140; }
L_004844A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 132u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00483F40u | kUnwind; return; } [[clang::musttail]] return unit_00E0(c, 521u, depth); }
L_004844B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00484530; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 32096u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00484518; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 17744u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00484518; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 21552u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00484518; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00484518; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484518u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00484518u) [[unlikely]] return; }
L_00484518:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00484534; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484530u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00484530u) [[unlikely]] return; }
L_00484530:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00484534:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00484550:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_00484578; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 5u);  goto L_00484570; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_00484570:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0048457C; } }
L_00484578:
    set32(c.r[2], c.r[2].w[0] - 20808u);
    c.budget -= 1;
L_0048457C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00484590:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 20800u);  c.pc = t; return; }
L_004845A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004845B0:
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
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00484600; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004845E4u); set32(c.r[4], 0u + 3016u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004845E4u) [[unlikely]] return; }
L_004845E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = c.r[2].d[0] + 0ull;  goto L_00484600; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004845FCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E1(c, 118u, depth + 1u); else { c.pc = 0x00484E30u; return; } if (c.pc != 0x004845FCu) [[unlikely]] return; }
L_004845FC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00484600:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484614u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 229u, depth + 1u); else { c.pc = 0x00193520u; return; } if (c.pc != 0x00484614u) [[unlikely]] return; }
L_00484614:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00484640:
    set32(c.r[29], c.r[29].w[0] - 208u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484660u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000F(c, 243u, depth + 1u); else { c.pc = 0x0013E740u; return; } if (c.pc != 0x00484660u) [[unlikely]] return; }
L_00484660:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048466Cu); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_000A(c, 313u, depth + 1u); else { c.pc = 0x0012A9B0u; return; } if (c.pc != 0x0048466Cu) [[unlikely]] return; }
L_0048466C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004847F4; } }
L_00484674:
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], 0u + 32u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[7], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[7].w[0] + 294u);
    c.budget -= 6;
L_0048468C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0048468Cu | kUnwind; return; } goto L_0048468C; } }
    set32(c.r[6], c.r[7].w[0] + 358u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[4], 0u + 32u);
    c.budget -= 3;
L_004846B8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004846B8u | kUnwind; return; } goto L_004846B8; } }
    set32(c.r[6], c.r[7].w[0] + 422u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
L_004846E4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004846E4u | kUnwind; return; } goto L_004846E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048470Cu); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0048470Cu) [[unlikely]] return; }
L_0048470C:
    set32(c.r[3], 0u + 7u);
    mmi::pminw(c.r[6], c.r[2], c.r[3]);
    c.budget -= 4;
    if (c.r[6].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_004847F4; }
    set32(c.r[4], c.r[17].w[0] + 280u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484728u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_00AE(c, 270u, depth + 1u); else { c.pc = 0x003BA6C0u; return; } if (c.pc != 0x00484728u) [[unlikely]] return; }
L_00484728:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004847F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484738u);  if (depth < kMaxDepth) unit_00E9(c, 93u, depth + 1u); else { c.pc = 0x004A4D00u; return; } if (c.pc != 0x00484738u) [[unlikely]] return; }
L_00484738:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484748u); set32(c.r[5], c.r[5].w[0] - 19602u);  if (depth < kMaxDepth) unit_00E8(c, 553u, depth + 1u); else { c.pc = 0x004A3FC0u; return; } if (c.pc != 0x00484748u) [[unlikely]] return; }
L_00484748:
    set32(c.r[4], ld32((c.r[28].w[0] - 27036u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484758u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_00B1(c, 101u, depth + 1u); else { c.pc = 0x003C5350u; return; } if (c.pc != 0x00484758u) [[unlikely]] return; }
L_00484758:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004847A8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484770u); set32(c.r[4], c.r[4].w[0] - 19584u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00484770u) [[unlikely]] return; }
L_00484770:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_00484790; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484788u); set32(c.r[5], c.r[5].w[0] - 19569u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x00484788u) [[unlikely]] return; }
L_00484788:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 192u)));  if (t) { goto L_004847BC; } }
L_00484790:
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[5].w[0] - 19544u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004847A0u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x004847A0u) [[unlikely]] return; }
L_004847A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004847B8; } }
L_004847A8:
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[5].w[0] - 19497u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004847B8u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x004847B8u) [[unlikely]] return; }
L_004847B8:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 1;
L_004847BC:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 193u);  goto L_004847CC; }
    set32(c.r[5], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 1;
L_004847CC:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 152u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004847DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004847DCu) [[unlikely]] return; }
L_004847DC:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004847E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004847E8u) [[unlikely]] return; }
L_004847E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00484828; } }
L_004847F0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_004847F4:
    c.r[2].d[0] = c.r[16].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] << 4);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00484674u | kUnwind; return; } goto L_00484674; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484808u);  if (depth < kMaxDepth) unit_00E9(c, 93u, depth + 1u); else { c.pc = 0x004A4D00u; return; } if (c.pc != 0x00484808u) [[unlikely]] return; }
L_00484808:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484818u); set32(c.r[5], c.r[5].w[0] - 19602u);  if (depth < kMaxDepth) unit_00E8(c, 553u, depth + 1u); else { c.pc = 0x004A3FC0u; return; } if (c.pc != 0x00484818u) [[unlikely]] return; }
L_00484818:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484824u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00484824u) [[unlikely]] return; }
L_00484824:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00484828:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_00484840:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[2] = ld32((c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 288u)));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[29].w[0] + 224u), c.f[2]);
    c.r[1].d[0] = c.r[3].sd[0] < 7ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 228u), c.f[1]);
    c.budget -= 18;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[29].w[0] + 232u), c.f[0]);  if (t) { goto L_00484AE0; } }
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 228u)));
    st8((c.r[2].w[0] + 280u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 288u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004848A8u); st32((c.r[16].w[0] + 288u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x004848A8u) [[unlikely]] return; }
L_004848A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004848B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x004848B4u) [[unlikely]] return; }
L_004848B4:
    set32(c.r[3], ld32((c.r[16].w[0] + 288u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[25], ld32((c.r[19].w[0])));  goto L_004849F8; }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 124u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004848D8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004848D8u) [[unlikely]] return; }
L_004848D8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 229u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004848E8u); set32(c.r[6], 0u + 18u);  if (depth < kMaxDepth) unit_0013(c, 80u, depth + 1u); else { c.pc = 0x0014CA80u; return; } if (c.pc != 0x004848E8u) [[unlikely]] return; }
L_004848E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 196u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 216u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.f[20] = c.f[0];
    set32(c.r[2], 0u + 16u);
    st32((c.r[29].w[0] + 212u), c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 218u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00484920; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484918u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00484918u) [[unlikely]] return; }
L_00484918:
    set32(c.r[2], c.r[29].w[0] + 196u);
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    c.budget -= 2;
L_00484920:
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[5], c.r[29].w[0] + 196u);
    st32((c.r[2].w[0]), c.f[20]);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[18], ld32((c.r[19].w[0] + 52u)));
    set32(c.r[17], ld32((c.r[19].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 218u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[4], c.r[17].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 15;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[20], ld32((c.r[29].w[0] + 196u)));  goto L_0048498C; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484968u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00484968u) [[unlikely]] return; }
L_00484968:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_00484984; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484980u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00484980u) [[unlikely]] return; }
L_00484980:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_00484984:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_004849B0; } }
L_0048498C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484998u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x00484998u) [[unlikely]] return; }
L_00484998:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004849ACu); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004849ACu) [[unlikely]] return; }
L_004849AC:
    st32((c.r[16].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 1;
L_004849B0:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004849C4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004849C4u) [[unlikely]] return; }
L_004849C4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 218u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 192u), c.r[3].w[0]);  if (t) { goto L_004849F4; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[2], c.r[29].w[0] + 196u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_004849F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004849F4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004849F4u) [[unlikely]] return; }
L_004849F4:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_004849F8:
    set32(c.r[25], ld32((c.r[25].w[0] + 116u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00484A04u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00484A04u) [[unlikely]] return; }
L_00484A04:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484A10u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00484A10u) [[unlikely]] return; }
L_00484A10:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484A20u); set32(c.r[5], c.r[5].w[0] - 19476u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00484A20u) [[unlikely]] return; }
L_00484A20:
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] + 31968u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484A44u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104500u; return; } if (c.pc != 0x00484A44u) [[unlikely]] return; }
L_00484A44:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484A54u); set32(c.r[5], c.r[5].w[0] - 19460u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00484A54u) [[unlikely]] return; }
L_00484A54:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484A64u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000A(c, 138u, depth + 1u); else { c.pc = 0x00129250u; return; } if (c.pc != 0x00484A64u) [[unlikely]] return; }
L_00484A64:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 113u);  goto L_00484A78; }
    set32(c.r[5], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 1;
L_00484A78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484A80u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x00484A80u) [[unlikely]] return; }
L_00484A80:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484A8Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00484A8Cu) [[unlikely]] return; }
L_00484A8C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484A98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00484A98u) [[unlikely]] return; }
L_00484A98:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484AA4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00484AA4u) [[unlikely]] return; }
L_00484AA4:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484AB0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00484AB0u) [[unlikely]] return; }
L_00484AB0:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 177u);  goto L_00484AC4; }
    set32(c.r[5], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 1;
L_00484AC4:
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00484AD4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00484AD4u) [[unlikely]] return; }
L_00484AD4:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484AE0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00484AE0u) [[unlikely]] return; }
L_00484AE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_00484B10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484B24u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 108u, depth + 1u); else { c.pc = 0x001A1C50u; return; } if (c.pc != 0x00484B24u) [[unlikely]] return; }
L_00484B24:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 293u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00484B74; }
    st32((c.r[16].w[0] + 288u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 287u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484B48u); st8((c.r[16].w[0] + 292u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x00484B48u) [[unlikely]] return; }
L_00484B48:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484B54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x00484B54u) [[unlikely]] return; }
L_00484B54:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00484B6Cu); set32(c.r[5], c.r[5].w[0] - 19457u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00484B6Cu) [[unlikely]] return; }
L_00484B6C:
    st8((c.r[16].w[0] + 293u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_00484B74:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00484B80:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 292u));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00484BCC; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 288u)));
    set32(c.r[3], 0u + 7u);
    c.budget -= 4;
    if (c.r[5].d[0] != c.r[3].d[0]) { c.r[3].d[0] = ld8((c.r[20].w[0] + 292u));  goto L_00484BD0; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484BC4u); st8((c.r[20].w[0] + 292u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00E1(c, 52u, depth + 1u); else { c.pc = 0x00484640u; return; } if (c.pc != 0x00484BC4u) [[unlikely]] return; }
L_00484BC4:
    set32(c.r[3], 0u + 1u);
    st8((c.r[20].w[0] + 293u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00484BCC:
    c.r[3].d[0] = ld8((c.r[20].w[0] + 292u));
    c.budget -= 1;
L_00484BD0:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_00484CD0; }
    set32(c.r[19], ld32((c.r[28].w[0] - 28960u)));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[18].w[0] << 1);
    c.budget -= 3;
L_00484BE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] - 20960u);
    set32(c.r[16], c.r[3].w[0] << 2);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484C0Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0014(c, 362u, depth + 1u); else { c.pc = 0x001537D0u; return; } if (c.pc != 0x00484C0Cu) [[unlikely]] return; }
L_00484C0C:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_00484C1C; } }
    set32(c.r[4], 0u - c.r[4].w[0]);
    c.budget -= 1;
L_00484C1C:
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.r[4].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00484C44; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00484C3C; } }
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 1;
L_00484C3C:
    c.r[4].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] ^ 1ull;
    c.budget -= 2;
L_00484C44:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00484C9C; } }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484C5Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0014(c, 362u, depth + 1u); else { c.pc = 0x001537D0u; return; } if (c.pc != 0x00484C5Cu) [[unlikely]] return; }
L_00484C5C:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00484C6C; } }
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 1;
L_00484C6C:
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00484C94; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00484C8C; } }
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 1;
L_00484C8C:
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 2;
L_00484C94:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_00484CC0; }
L_00484C9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 20960u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484CB0u); set32(c.r[5], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_00E1(c, 73u, depth + 1u); else { c.pc = 0x00484840u; return; } if (c.pc != 0x00484CB0u) [[unlikely]] return; }
L_00484CB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484CBCu); set32(c.r[4], c.r[4].w[0] - 19456u);  if (depth < kMaxDepth) unit_00B6(c, 410u, depth + 1u); else { c.pc = 0x003DADD0u; return; } if (c.pc != 0x00484CBCu) [[unlikely]] return; }
L_00484CBC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00484CC0:
    c.r[3].d[0] = c.r[18].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00484BE4u | kUnwind; return; } goto L_00484BE4; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_00484CD0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00484CF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 192u));
    set32(c.r[17], ld32((c.r[4].w[0] + 272u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00484D78; } }
    c.budget -= 2;
    if (c.r[17].sd[0] <= 0) { set32(c.r[2], 0u + 1u);  goto L_00484D7C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00484D6C; } }
L_00484D28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484D30u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x00484D30u) [[unlikely]] return; }
L_00484D30:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_00484D6C; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484D44u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x00484D44u) [[unlikely]] return; }
L_00484D44:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00484D54u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00484D54u) [[unlikely]] return; }
L_00484D54:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00484D68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00484D7C; } }
L_00484D68:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00484D6C:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00484D28u | kUnwind; return; } goto L_00484D28; }
L_00484D78:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00484D7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00484DA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00484E18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 32048u);
    set32(c.r[3], c.r[3].w[0] - 32024u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 31992u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 31980u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 31956u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484E00u); st32((c.r[17].w[0] + 132u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0028(c, 138u, depth + 1u); else { c.pc = 0x001A2330u; return; } if (c.pc != 0x00484E00u) [[unlikely]] return; }
L_00484E00:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00484E1C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484E18u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00484E18u) [[unlikely]] return; }
L_00484E18:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00484E1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00484E30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[7], 0u + 8u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484E48u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 169u, depth + 1u); else { c.pc = 0x001A2AC0u; return; } if (c.pc != 0x00484E48u) [[unlikely]] return; }
L_00484E48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 32048u);
    set32(c.r[3], c.r[3].w[0] - 32024u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 294u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[16].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 31992u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 31980u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[16].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 31956u);
    set32(c.r[3], c.r[16].w[0] + 3014u);
    st32((c.r[16].w[0] + 132u), c.r[2].w[0]);
    c.budget -= 17;
L_00484E8C:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 64u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 128u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 136u);
    c.r[2].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00484E8Cu | kUnwind; return; } goto L_00484E8C; } }
    st32((c.r[16].w[0] + 288u), 0u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st8((c.r[16].w[0] + 287u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 292u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[16].w[0] + 294u);
    set32(c.r[5], 0u + 64u);
    st8((c.r[16].w[0] + 293u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484ED0u); set32(c.r[6], c.r[6].w[0] - 19439u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x00484ED0u) [[unlikely]] return; }
L_00484ED0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 358u);
    set32(c.r[5], 0u + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484EE4u); set32(c.r[6], c.r[6].w[0] - 19420u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x00484EE4u) [[unlikely]] return; }
L_00484EE4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 422u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484EF8u); set32(c.r[6], c.r[6].w[0] - 19403u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x00484EF8u) [[unlikely]] return; }
L_00484EF8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 430u);
    set32(c.r[5], 0u + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484F0Cu); set32(c.r[6], c.r[6].w[0] - 19395u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x00484F0Cu) [[unlikely]] return; }
L_00484F0C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 494u);
    set32(c.r[5], 0u + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484F20u); set32(c.r[6], c.r[6].w[0] - 19376u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x00484F20u) [[unlikely]] return; }
L_00484F20:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 558u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484F34u); set32(c.r[6], c.r[6].w[0] - 19357u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x00484F34u) [[unlikely]] return; }
L_00484F34:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 566u);
    set32(c.r[5], 0u + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484F48u); set32(c.r[6], c.r[6].w[0] - 19349u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x00484F48u) [[unlikely]] return; }
L_00484F48:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 630u);
    set32(c.r[5], 0u + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484F5Cu); set32(c.r[6], c.r[6].w[0] - 19330u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x00484F5Cu) [[unlikely]] return; }
L_00484F5C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 694u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484F70u); set32(c.r[6], c.r[6].w[0] - 19315u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x00484F70u) [[unlikely]] return; }
L_00484F70:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 702u);
    set32(c.r[5], 0u + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484F84u); set32(c.r[6], c.r[6].w[0] - 19307u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x00484F84u) [[unlikely]] return; }
L_00484F84:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 766u);
    set32(c.r[5], 0u + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484F98u); set32(c.r[6], c.r[6].w[0] - 19288u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x00484F98u) [[unlikely]] return; }
L_00484F98:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 830u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484FACu); set32(c.r[6], c.r[6].w[0] - 19267u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x00484FACu) [[unlikely]] return; }
L_00484FAC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 838u);
    set32(c.r[5], 0u + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484FC0u); set32(c.r[6], c.r[6].w[0] - 19259u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x00484FC0u) [[unlikely]] return; }
L_00484FC0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 902u);
    set32(c.r[5], 0u + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484FD4u); set32(c.r[6], c.r[6].w[0] - 19240u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x00484FD4u) [[unlikely]] return; }
L_00484FD4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 966u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484FE8u); set32(c.r[6], c.r[6].w[0] - 19222u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x00484FE8u) [[unlikely]] return; }
L_00484FE8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 974u);
    set32(c.r[5], 0u + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00484FFCu); set32(c.r[6], c.r[6].w[0] - 19214u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x00484FFCu) [[unlikely]] return; }
L_00484FFC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 1038u);
    set32(c.r[5], 0u + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485010u); set32(c.r[6], c.r[6].w[0] - 19194u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x00485010u) [[unlikely]] return; }
L_00485010:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 1102u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485024u); set32(c.r[6], c.r[6].w[0] - 19181u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x00485024u) [[unlikely]] return; }
L_00485024:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 1110u);
    set32(c.r[5], 0u + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485038u); set32(c.r[6], c.r[6].w[0] - 19173u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x00485038u) [[unlikely]] return; }
L_00485038:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 1174u);
    set32(c.r[5], 0u + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048504Cu); set32(c.r[6], c.r[6].w[0] - 19153u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x0048504Cu) [[unlikely]] return; }
L_0048504C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 1238u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485060u); set32(c.r[6], c.r[6].w[0] - 19133u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x00485060u) [[unlikely]] return; }
L_00485060:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 1246u);
    set32(c.r[5], 0u + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485074u); set32(c.r[6], c.r[6].w[0] - 19125u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x00485074u) [[unlikely]] return; }
L_00485074:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 1310u);
    set32(c.r[5], 0u + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485088u); set32(c.r[6], c.r[6].w[0] - 19105u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x00485088u) [[unlikely]] return; }
L_00485088:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 1374u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048509Cu); set32(c.r[6], c.r[6].w[0] - 19092u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x0048509Cu) [[unlikely]] return; }
L_0048509C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 1382u);
    set32(c.r[5], 0u + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004850B0u); set32(c.r[6], c.r[6].w[0] - 19084u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x004850B0u) [[unlikely]] return; }
L_004850B0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 1446u);
    set32(c.r[5], 0u + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004850C4u); set32(c.r[6], c.r[6].w[0] - 19064u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x004850C4u) [[unlikely]] return; }
L_004850C4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 1510u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004850D8u); set32(c.r[6], c.r[6].w[0] - 19049u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x004850D8u) [[unlikely]] return; }
L_004850D8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 1518u);
    set32(c.r[5], 0u + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004850ECu); set32(c.r[6], c.r[6].w[0] - 19041u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x004850ECu) [[unlikely]] return; }
L_004850EC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 1582u);
    set32(c.r[5], 0u + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485100u); set32(c.r[6], c.r[6].w[0] - 19021u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x00485100u) [[unlikely]] return; }
L_00485100:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 1646u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485114u); set32(c.r[6], c.r[6].w[0] - 19001u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x00485114u) [[unlikely]] return; }
L_00485114:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 1654u);
    set32(c.r[5], 0u + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485128u); set32(c.r[6], c.r[6].w[0] - 18993u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x00485128u) [[unlikely]] return; }
L_00485128:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 1718u);
    set32(c.r[5], 0u + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048513Cu); set32(c.r[6], c.r[6].w[0] - 18973u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x0048513Cu) [[unlikely]] return; }
L_0048513C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 1782u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485150u); set32(c.r[6], c.r[6].w[0] - 18960u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x00485150u) [[unlikely]] return; }
L_00485150:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 1790u);
    set32(c.r[5], 0u + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485164u); set32(c.r[6], c.r[6].w[0] - 18952u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x00485164u) [[unlikely]] return; }
L_00485164:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 1854u);
    set32(c.r[5], 0u + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485178u); set32(c.r[6], c.r[6].w[0] - 18932u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x00485178u) [[unlikely]] return; }
L_00485178:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 1918u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048518Cu); set32(c.r[6], c.r[6].w[0] - 18916u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x0048518Cu) [[unlikely]] return; }
L_0048518C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 1926u);
    set32(c.r[5], 0u + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004851A0u); set32(c.r[6], c.r[6].w[0] - 18908u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x004851A0u) [[unlikely]] return; }
L_004851A0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 1990u);
    set32(c.r[5], 0u + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004851B4u); set32(c.r[6], c.r[6].w[0] - 18888u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x004851B4u) [[unlikely]] return; }
L_004851B4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 2054u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004851C8u); set32(c.r[6], c.r[6].w[0] - 18874u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x004851C8u) [[unlikely]] return; }
L_004851C8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 2062u);
    set32(c.r[5], 0u + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004851DCu); set32(c.r[6], c.r[6].w[0] - 18866u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x004851DCu) [[unlikely]] return; }
L_004851DC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 2126u);
    set32(c.r[5], 0u + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004851F0u); set32(c.r[6], c.r[6].w[0] - 18846u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x004851F0u) [[unlikely]] return; }
L_004851F0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 2190u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485204u); set32(c.r[6], c.r[6].w[0] - 18827u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x00485204u) [[unlikely]] return; }
L_00485204:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 2198u);
    set32(c.r[5], 0u + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485218u); set32(c.r[6], c.r[6].w[0] - 18819u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x00485218u) [[unlikely]] return; }
L_00485218:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 2262u);
    set32(c.r[5], 0u + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048522Cu); set32(c.r[6], c.r[6].w[0] - 18799u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x0048522Cu) [[unlikely]] return; }
L_0048522C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 2326u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485240u); set32(c.r[6], c.r[6].w[0] - 18781u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x00485240u) [[unlikely]] return; }
L_00485240:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 2334u);
    set32(c.r[5], 0u + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485254u); set32(c.r[6], c.r[6].w[0] - 18773u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x00485254u) [[unlikely]] return; }
L_00485254:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 2398u);
    set32(c.r[5], 0u + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485268u); set32(c.r[6], c.r[6].w[0] - 18753u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x00485268u) [[unlikely]] return; }
L_00485268:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 2462u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048527Cu); set32(c.r[6], c.r[6].w[0] - 18730u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x0048527Cu) [[unlikely]] return; }
L_0048527C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 2470u);
    set32(c.r[5], 0u + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485290u); set32(c.r[6], c.r[6].w[0] - 18722u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x00485290u) [[unlikely]] return; }
L_00485290:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 2534u);
    set32(c.r[5], 0u + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004852A4u); set32(c.r[6], c.r[6].w[0] - 18702u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x004852A4u) [[unlikely]] return; }
L_004852A4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 2598u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004852B8u); set32(c.r[6], c.r[6].w[0] - 18684u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x004852B8u) [[unlikely]] return; }
L_004852B8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 2606u);
    set32(c.r[5], 0u + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004852CCu); set32(c.r[6], c.r[6].w[0] - 18676u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x004852CCu) [[unlikely]] return; }
L_004852CC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 2670u);
    set32(c.r[5], 0u + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004852E0u); set32(c.r[6], c.r[6].w[0] - 18656u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x004852E0u) [[unlikely]] return; }
L_004852E0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 2734u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004852F4u); set32(c.r[6], c.r[6].w[0] - 18642u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x004852F4u) [[unlikely]] return; }
L_004852F4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 2742u);
    set32(c.r[5], 0u + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485308u); set32(c.r[6], c.r[6].w[0] - 18634u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x00485308u) [[unlikely]] return; }
L_00485308:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 2806u);
    set32(c.r[5], 0u + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048531Cu); set32(c.r[6], c.r[6].w[0] - 19584u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x0048531Cu) [[unlikely]] return; }
L_0048531C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[16].w[0] + 2870u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485330u); set32(c.r[6], c.r[6].w[0] - 18614u);  if (depth < kMaxDepth) unit_000F(c, 402u, depth + 1u); else { c.pc = 0x0013FD70u; return; } if (c.pc != 0x00485330u) [[unlikely]] return; }
L_00485330:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00485350:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29840u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0048536C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0048537C; } }
L_0048536C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485374u);  if (depth < kMaxDepth) unit_0028(c, 186u, depth + 1u); else { c.pc = 0x001A2F10u; return; } if (c.pc != 0x00485374u) [[unlikely]] return; }
L_00485374:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0048537C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00485390:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004853B4u); set32(c.r[4], c.r[4].w[0] - 20840u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x004853B4u) [[unlikely]] return; }
L_004853B4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004853C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004853D4; } }
L_004853C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004853CCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 187u, depth + 1u); else { c.pc = 0x001A2F50u; return; } if (c.pc != 0x004853CCu) [[unlikely]] return; }
L_004853CC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_004853D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004853F0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30864u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_00485400:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29840u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0048541C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00485424; } }
L_0048541C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485424u);  if (depth < kMaxDepth) unit_0028(c, 190u, depth + 1u); else { c.pc = 0x001A2FC0u; return; } if (c.pc != 0x00485424u) [[unlikely]] return; }
L_00485424:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00485430:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29840u)));  c.pc = t; return; }
L_00485440:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 20824u);  c.pc = t; return; }
L_00485450:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00485390u | kUnwind; return; } goto L_00485390; }
L_00485460:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00485350u | kUnwind; return; } goto L_00485350; }
L_00485470:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004853F0u | kUnwind; return; } goto L_004853F0; }
L_00485480:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00485400u | kUnwind; return; } goto L_00485400; }
L_00485490:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00485430u | kUnwind; return; } goto L_00485430; }
L_004854A0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00484DA0u | kUnwind; return; } goto L_00484DA0; }
L_004854B0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00484DA0u | kUnwind; return; } goto L_00484DA0; }
L_004854C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 72u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00484DA0u | kUnwind; return; } goto L_00484DA0; }
L_004854D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 132u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00484DA0u | kUnwind; return; } goto L_00484DA0; }
L_004854E0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_00485508; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 5u);  goto L_00485500; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_00485500:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0048550C; } }
L_00485508:
    set32(c.r[2], c.r[2].w[0] - 18120u);
    c.budget -= 1;
L_0048550C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00485520:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 18112u);  c.pc = t; return; }
L_00485530:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004855B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 31824u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00485598; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 17744u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00485598; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 21552u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00485598; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00485598; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485598u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00485598u) [[unlikely]] return; }
L_00485598:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_004855B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004855B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004855B0u) [[unlikely]] return; }
L_004855B0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004855B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004855D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004855E0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0048562C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485614u); set32(c.r[4], 0u + 384u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x00485614u) [[unlikely]] return; }
L_00485614:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = c.r[2].d[0] + 0ull;  goto L_0048562C; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485628u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E1(c, 337u, depth + 1u); else { c.pc = 0x00486870u; return; } if (c.pc != 0x00485628u) [[unlikely]] return; }
L_00485628:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0048562C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485634u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x00485634u) [[unlikely]] return; }
L_00485634:
    set32(c.r[4], ld32((c.r[17].w[0] + 196u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 192u)));
    set32(c.r[6], c.r[6].w[0] - 18080u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048564Cu); set32(c.r[7], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x0048564Cu) [[unlikely]] return; }
L_0048564C:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 193u);  goto L_00485660; }
    set32(c.r[5], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 1;
L_00485660:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485668u); set32(c.r[4], c.r[16].w[0] + 328u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00485668u) [[unlikely]] return; }
L_00485668:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485670u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x00485670u) [[unlikely]] return; }
L_00485670:
    set32(c.r[4], ld32((c.r[17].w[0] + 196u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 192u)));
    set32(c.r[6], c.r[6].w[0] - 18066u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485688u); set32(c.r[7], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x00485688u) [[unlikely]] return; }
L_00485688:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 196u)));  goto L_0048577C; }
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 176u));  goto L_004856A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 180u)));  if (t) { goto L_004856B0; } }
L_004856A8:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_004856B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00485778; } }
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004856C8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 33u, depth + 1u); else { c.pc = 0x00140350u; return; } if (c.pc != 0x004856C8u) [[unlikely]] return; }
L_004856C8:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 161u);  goto L_004856DC; }
    set32(c.r[4], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_004856DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004856E4u); set32(c.r[5], c.r[29].w[0] + 236u);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x004856E4u) [[unlikely]] return; }
L_004856E4:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004856F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004856F0u) [[unlikely]] return; }
L_004856F0:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485700u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0010(c, 33u, depth + 1u); else { c.pc = 0x00140350u; return; } if (c.pc != 0x00485700u) [[unlikely]] return; }
L_00485700:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 145u);  goto L_00485714; }
    set32(c.r[4], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 1;
L_00485714:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048571Cu); set32(c.r[5], c.r[29].w[0] + 232u);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x0048571Cu) [[unlikely]] return; }
L_0048571C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485728u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00485728u) [[unlikely]] return; }
L_00485728:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485738u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0010(c, 33u, depth + 1u); else { c.pc = 0x00140350u; return; } if (c.pc != 0x00485738u) [[unlikely]] return; }
L_00485738:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 129u);  goto L_0048574C; }
    set32(c.r[4], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_0048574C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485754u); set32(c.r[5], c.r[29].w[0] + 228u);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x00485754u) [[unlikely]] return; }
L_00485754:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485760u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00485760u) [[unlikely]] return; }
L_00485760:
    c.f[2] = ld32((c.r[29].w[0] + 232u));
    c.f[1] = ld32((c.r[29].w[0] + 228u));
    c.f[0] = ld32((c.r[29].w[0] + 236u));
    st32((c.r[16].w[0] + 292u), c.f[0]);
    st32((c.r[16].w[0] + 296u), c.f[2]);
    st32((c.r[16].w[0] + 300u), c.f[1]);
    c.budget -= 6;
L_00485778:
    set32(c.r[4], ld32((c.r[17].w[0] + 196u)));
    c.budget -= 1;
L_0048577C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 192u)));
    set32(c.r[6], c.r[6].w[0] - 18048u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485790u); set32(c.r[7], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x00485790u) [[unlikely]] return; }
L_00485790:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 196u)));  goto L_00485884; }
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 176u));  goto L_004857B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 180u)));  if (t) { goto L_004857B8; } }
L_004857B0:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_004857B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00485880; } }
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004857D0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 33u, depth + 1u); else { c.pc = 0x00140350u; return; } if (c.pc != 0x004857D0u) [[unlikely]] return; }
L_004857D0:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 113u);  goto L_004857E4; }
    set32(c.r[4], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 1;
L_004857E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004857ECu); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x004857ECu) [[unlikely]] return; }
L_004857EC:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004857F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004857F8u) [[unlikely]] return; }
L_004857F8:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485808u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0010(c, 33u, depth + 1u); else { c.pc = 0x00140350u; return; } if (c.pc != 0x00485808u) [[unlikely]] return; }
L_00485808:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 97u);  goto L_0048581C; }
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_0048581C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485824u); set32(c.r[5], c.r[29].w[0] + 220u);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x00485824u) [[unlikely]] return; }
L_00485824:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485830u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00485830u) [[unlikely]] return; }
L_00485830:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485840u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0010(c, 33u, depth + 1u); else { c.pc = 0x00140350u; return; } if (c.pc != 0x00485840u) [[unlikely]] return; }
L_00485840:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 81u);  goto L_00485854; }
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_00485854:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048585Cu); set32(c.r[5], c.r[29].w[0] + 216u);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x0048585Cu) [[unlikely]] return; }
L_0048585C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485868u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00485868u) [[unlikely]] return; }
L_00485868:
    c.f[2] = ld32((c.r[29].w[0] + 220u));
    c.f[1] = ld32((c.r[29].w[0] + 216u));
    c.f[0] = ld32((c.r[29].w[0] + 224u));
    st32((c.r[16].w[0] + 304u), c.f[0]);
    st32((c.r[16].w[0] + 308u), c.f[2]);
    st32((c.r[16].w[0] + 312u), c.f[1]);
    c.budget -= 6;
L_00485880:
    set32(c.r[4], ld32((c.r[17].w[0] + 196u)));
    c.budget -= 1;
L_00485884:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 192u)));
    set32(c.r[6], c.r[6].w[0] - 18033u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485898u); set32(c.r[7], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x00485898u) [[unlikely]] return; }
L_00485898:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_004858F0; }
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 180u)));  goto L_004858C8; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 176u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_004858C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_004858EC; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 184u)));  goto L_004858DC; }
    set32(c.r[4], c.r[29].w[0] + 177u);
    c.budget -= 1;
L_004858DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004858E4u); set32(c.r[5], c.r[29].w[0] + 212u);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x004858E4u) [[unlikely]] return; }
L_004858E4:
    c.f[0] = ld32((c.r[29].w[0] + 212u));
    st32((c.r[16].w[0] + 288u), c.f[0]);
    c.budget -= 2;
L_004858EC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_004858F0:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485900u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 229u, depth + 1u); else { c.pc = 0x00193520u; return; } if (c.pc != 0x00485900u) [[unlikely]] return; }
L_00485900:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048590Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0048590Cu) [[unlikely]] return; }
L_0048590C:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485918u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00485918u) [[unlikely]] return; }
L_00485918:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_00485940:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 328u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00485968; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 336u)));  if (t) { goto L_0048596C; } }
L_00485968:
    set32(c.r[4], c.r[17].w[0] + 329u);
    c.budget -= 1;
L_0048596C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485974u);  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x00485974u) [[unlikely]] return; }
L_00485974:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048597Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 103u, depth + 1u); else { c.pc = 0x0047CD10u; return; } if (c.pc != 0x0048597Cu) [[unlikely]] return; }
L_0048597C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 29244u)));
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[28].w[0] - 29244u), 0u);  if (t) { goto L_00485998; } }
    set32(c.r[7], c.r[17].w[0] + 280u);
    c.budget -= 1;
L_00485998:
    set32(c.r[4], ld32((c.r[17].w[0] + 200u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[16].w[0] + 60u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004859ACu); set32(c.r[6], c.r[6].w[0] - 18512u);  if (depth < kMaxDepth) unit_0000(c, 217u, depth + 1u); else { c.pc = 0x00102D10u; return; } if (c.pc != 0x004859ACu) [[unlikely]] return; }
L_004859AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004859B4u); set32(c.r[4], c.r[16].w[0] + 60u);  if (depth < kMaxDepth) unit_000F(c, 108u, depth + 1u); else { c.pc = 0x0013D410u; return; } if (c.pc != 0x004859B4u) [[unlikely]] return; }
L_004859B4:
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    st32((c.r[28].w[0] - 29244u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004859D0:
    set32(c.r[29], c.r[29].w[0] - 272u);
    set32(c.r[2], c.r[6].w[0] << 1);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[5], 0u + 3u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 368u)));
    set32(c.r[4], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], 0u + 6u);
    set32(c.r[4], c.r[4].w[0] << 3);
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 244u), 0u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    st32((c.r[29].w[0] + 248u), 0u);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485A34u); st32((c.r[29].w[0] + 252u), 0u);  if (depth < kMaxDepth) unit_00C4(c, 450u, depth + 1u); else { c.pc = 0x00413B30u; return; } if (c.pc != 0x00485A34u) [[unlikely]] return; }
L_00485A34:
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485A44u); set32(c.r[6], 0u + 44u);  if (depth < kMaxDepth) unit_000F(c, 408u, depth + 1u); else { c.pc = 0x0013FEF0u; return; } if (c.pc != 0x00485A44u) [[unlikely]] return; }
L_00485A44:
    set32(c.r[3], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[3].w[0] + 1u);  goto L_00485A5C; }
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_00485A5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485A64u); set32(c.r[5], c.r[29].w[0] + 268u);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x00485A64u) [[unlikely]] return; }
L_00485A64:
    set32(c.r[2], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[3], c.r[2].w[0] + 16u);
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[3].w[0] + 1u);  goto L_00485A80; }
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_00485A80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485A88u); set32(c.r[5], c.r[29].w[0] + 264u);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x00485A88u) [[unlikely]] return; }
L_00485A88:
    set32(c.r[2], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[3], c.r[2].w[0] + 32u);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[3].w[0] + 1u);  goto L_00485AA4; }
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_00485AA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485AACu); set32(c.r[5], c.r[29].w[0] + 260u);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x00485AACu) [[unlikely]] return; }
L_00485AAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 212u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 232u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    c.f[20] = ld32((c.r[29].w[0] + 268u));
    set32(c.r[2], 0u + 16u);
    st32((c.r[29].w[0] + 228u), c.r[4].w[0]);
    c.f[21] = ld32((c.r[29].w[0] + 264u));
    c.f[22] = ld32((c.r[29].w[0] + 260u));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 234u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00485AEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485AE4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00485AE4u) [[unlikely]] return; }
L_00485AE4:
    set32(c.r[2], c.r[29].w[0] + 212u);
    st32((c.r[29].w[0] + 228u), c.r[2].w[0]);
    c.budget -= 2;
L_00485AEC:
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[5], c.r[29].w[0] + 212u);
    st32((c.r[2].w[0]), c.f[20]);
    st32((c.r[2].w[0] + 4u), c.f[21]);
    st32((c.r[2].w[0] + 8u), c.f[22]);
    set32(c.r[19], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[21], ld32((c.r[20].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 234u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[4], c.r[21].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    c.budget -= 15;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[18], ld32((c.r[29].w[0] + 212u)));  goto L_00485B58; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485B34u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00485B34u) [[unlikely]] return; }
L_00485B34:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_00485B50; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485B4Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00485B4Cu) [[unlikely]] return; }
L_00485B4C:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_00485B50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00485B7C; } }
L_00485B58:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485B64u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x00485B64u) [[unlikely]] return; }
L_00485B64:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 228u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485B78u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00485B78u) [[unlikely]] return; }
L_00485B78:
    st32((c.r[16].w[0] + 4u), c.r[18].w[0]);
    c.budget -= 1;
L_00485B7C:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00485B90u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00485B90u) [[unlikely]] return; }
L_00485B90:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 234u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 208u), c.r[3].w[0]);  if (t) { goto L_00485BC0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[2], c.r[29].w[0] + 212u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[5], ld32((c.r[17].w[0] + 4u)));  goto L_00485BC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485BC0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00485BC0u) [[unlikely]] return; }
L_00485BC0:
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_00485BC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485BCCu); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00485BCCu) [[unlikely]] return; }
L_00485BCC:
    set32(c.r[4], ld32((c.r[28].w[0] - 28968u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485BD8u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0013(c, 120u, depth + 1u); else { c.pc = 0x0014D0F0u; return; } if (c.pc != 0x00485BD8u) [[unlikely]] return; }
L_00485BD8:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00485BECu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00485BECu) [[unlikely]] return; }
L_00485BEC:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.f[12] = ld32((c.r[17].w[0] + 8u));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00485C00u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00485C00u) [[unlikely]] return; }
L_00485C00:
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00485C14u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00485C14u) [[unlikely]] return; }
L_00485C14:
    set32(c.r[3], ld32((c.r[20].w[0] + 120u)));
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485C2Cu); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0013(c, 344u, depth + 1u); else { c.pc = 0x0014EB90u; return; } if (c.pc != 0x00485C2Cu) [[unlikely]] return; }
L_00485C2C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485C38u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0021(c, 30u, depth + 1u); else { c.pc = 0x00184600u; return; } if (c.pc != 0x00485C38u) [[unlikely]] return; }
L_00485C38:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 176u);  goto L_00485C60; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00485C5C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485C5Cu); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0021(c, 26u, depth + 1u); else { c.pc = 0x001844E0u; return; } if (c.pc != 0x00485C5Cu) [[unlikely]] return; }
L_00485C5C:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 1;
L_00485C60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485C68u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0013(c, 342u, depth + 1u); else { c.pc = 0x0014EB30u; return; } if (c.pc != 0x00485C68u) [[unlikely]] return; }
L_00485C68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 148u);
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st16((c.r[29].w[0] + 168u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 164u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[2], 0u + 64u);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 170u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00485CA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485C9Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00485C9Cu) [[unlikely]] return; }
L_00485C9C:
    set32(c.r[2], c.r[29].w[0] + 148u);
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 2;
L_00485CA4:
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    set32(c.r[5], c.r[29].w[0] + 148u);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 180u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 188u));
    st32((c.r[2].w[0] + 12u), c.f[0]);
    set32(c.r[17], ld32((c.r[20].w[0] + 120u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 170u)));
    set32(c.r[4], c.r[17].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 19;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[18], ld32((c.r[29].w[0] + 148u)));  goto L_00485D20; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485CFCu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00485CFCu) [[unlikely]] return; }
L_00485CFC:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_00485D18; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485D14u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00485D14u) [[unlikely]] return; }
L_00485D14:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_00485D18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00485D44; } }
L_00485D20:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485D2Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x00485D2Cu) [[unlikely]] return; }
L_00485D2C:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485D40u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00485D40u) [[unlikely]] return; }
L_00485D40:
    st32((c.r[16].w[0] + 4u), c.r[18].w[0]);
    c.budget -= 1;
L_00485D44:
    set32(c.r[25], ld32((c.r[20].w[0] + 60u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00485D58u); set32(c.r[4], c.r[20].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00485D58u) [[unlikely]] return; }
L_00485D58:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 170u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 144u), c.r[3].w[0]);  if (t) { goto L_00485D88; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[2], c.r[29].w[0] + 148u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 192u);  goto L_00485D8C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485D88u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00485D88u) [[unlikely]] return; }
L_00485D88:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 1;
L_00485D8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485D94u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00485D94u) [[unlikely]] return; }
L_00485D94:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485DA0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 292u, depth + 1u); else { c.pc = 0x0011EEB0u; return; } if (c.pc != 0x00485DA0u) [[unlikely]] return; }
L_00485DA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_00485DD0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    set32(c.r[2], 0u + 30u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
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
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 344u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 364u)));
    set32(c.r[7], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + 1u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[4].w[0] + 344u), c.r[2].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485E3Cu); st32((c.r[29].w[0] + 188u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_00E1(c, 240u, depth + 1u); else { c.pc = 0x004859D0u; return; } if (c.pc != 0x00485E3Cu) [[unlikely]] return; }
L_00485E3C:
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[2], ld32((c.r[20].w[0] + 368u)));
    set32(c.r[4], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 324u)));
    set32(c.r[4], c.r[4].w[0] << 3);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], c.r[2].w[0] + c.r[4].w[0]);  if (t) { goto L_00485EDC; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485E74u); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x00485E74u) [[unlikely]] return; }
L_00485E74:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485E80u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x00485E80u) [[unlikely]] return; }
L_00485E80:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 176u);  goto L_00485EA8; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00485EA4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485EA4u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x00485EA4u) [[unlikely]] return; }
L_00485EA4:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 1;
L_00485EA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485EB0u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x00485EB0u) [[unlikely]] return; }
L_00485EB0:
    set32(c.r[4], ld32((c.r[20].w[0] + 324u)));
    c.f[22] = ld32((c.r[29].w[0] + 180u));
    c.f[21] = ld32((c.r[29].w[0] + 184u));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00485ECCu); c.f[20] = ld32((c.r[29].w[0] + 176u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00485ECCu) [[unlikely]] return; }
L_00485ECC:
    c.f[1] = fp::add(c.f[22], c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 320u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[22] = fp::add(c.f[1], c.f[0]);  if (t) { goto L_00485EE8; } }
L_00485EDC:
    c.f[20] = ld32((c.r[20].w[0] + 292u));
    c.f[22] = ld32((c.r[20].w[0] + 296u));
    c.f[21] = ld32((c.r[20].w[0] + 300u));
    c.budget -= 3;
L_00485EE8:
    c.f[0] = ld32((c.r[17].w[0] + 16u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    set32(c.r[4], c.r[29].w[0] + 132u);
    set32(c.r[2], 0u + 16u);
    c.f[22] = fp::add(c.f[22], c.f[0]);
    st32((c.r[29].w[0] + 128u), c.r[3].w[0]);
    st16((c.r[29].w[0] + 154u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[29].w[0] + 152u), static_cast<std::uint16_t>(0u));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st32((c.r[29].w[0] + 148u), c.r[4].w[0]);  if (t) { goto L_00485F24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485F1Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00485F1Cu) [[unlikely]] return; }
L_00485F1C:
    set32(c.r[2], c.r[29].w[0] + 132u);
    st32((c.r[29].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 2;
L_00485F24:
    set32(c.r[2], ld32((c.r[29].w[0] + 148u)));
    set32(c.r[5], c.r[29].w[0] + 132u);
    st32((c.r[2].w[0]), c.f[20]);
    st32((c.r[2].w[0] + 4u), c.f[22]);
    st32((c.r[2].w[0] + 8u), c.f[21]);
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 154u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[19], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[18].w[0] << 5);
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 148u)));
    c.budget -= 16;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[21], ld32((c.r[29].w[0] + 132u)));  goto L_00485F94; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485F70u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00485F70u) [[unlikely]] return; }
L_00485F70:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_00485F8C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485F88u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00485F88u) [[unlikely]] return; }
L_00485F88:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_00485F8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00485FB8; } }
L_00485F94:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485FA0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x00485FA0u) [[unlikely]] return; }
L_00485FA0:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 148u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485FB4u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00485FB4u) [[unlikely]] return; }
L_00485FB4:
    st32((c.r[16].w[0] + 4u), c.r[21].w[0]);
    c.budget -= 1;
L_00485FB8:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00485FCCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00485FCCu) [[unlikely]] return; }
L_00485FCC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 154u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 128u), c.r[3].w[0]);  if (t) { goto L_00485FFC; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 148u)));
    set32(c.r[2], c.r[29].w[0] + 132u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[5].d[0] = c.r[20].d[0] + 0ull;  goto L_00486000; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00485FFCu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00485FFCu) [[unlikely]] return; }
L_00485FFC:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_00486000:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 188u)));  goto L_00486010; }
    set32(c.r[5], c.r[20].w[0] + 72u);
    set32(c.r[4], ld32((c.r[29].w[0] + 188u)));
    c.budget -= 2;
L_00486010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00486018u);  if (depth < kMaxDepth) unit_0029(c, 246u, depth + 1u); else { c.pc = 0x001A7D10u; return; } if (c.pc != 0x00486018u) [[unlikely]] return; }
L_00486018:
    set32(c.r[3], ld32((c.r[20].w[0] + 272u)));
    set32(c.r[4], c.r[20].w[0] + 264u);
    set32(c.r[2], ld32((c.r[20].w[0] + 276u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 188u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00486038u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x00486038u) [[unlikely]] return; }
L_00486038:
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[20].w[0] + 324u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    st32((c.r[20].w[0] + 320u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00486080:
    set32(c.r[29], c.r[29].w[0] - 416u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004860F0; } }
L_004860A0:
    set32(c.r[2], ld32((c.r[17].w[0] + 276u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 360u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] - 4u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_004860D8; } }
L_004860BC:
    set32(c.r[4], c.r[7].w[0] << 3);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[2].d[0] != c.r[6].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_004860D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004860E4; } }
L_004860D8:
    c.r[2].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 364u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004860BCu | kUnwind; return; } goto L_004860BC; }
L_004860E4:
    set32(c.r[2], ld32((c.r[17].w[0] + 272u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 272u), c.r[2].w[0]);
    c.budget -= 3;
L_004860F0:
    set32(c.r[2], ld32((c.r[17].w[0] + 272u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 272u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004860A0u | kUnwind; return; } goto L_004860A0; }
    st32((c.r[17].w[0] + 348u), 0u);
    set32(c.r[2], 0u + 30u);
    st32((c.r[17].w[0] + 324u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 372u)));
    mmi::pminw(c.r[16], c.r[3], c.r[2]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00486130; } }
L_00486118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00486120u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E1(c, 271u, depth + 1u); else { c.pc = 0x00485DD0u; return; } if (c.pc != 0x00486120u) [[unlikely]] return; }
L_00486120:
    set32(c.r[2], ld32((c.r[17].w[0] + 348u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 348u), c.r[2].w[0]);
    c.budget -= 4;
L_00486130:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00486118u | kUnwind; return; } goto L_00486118; }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], 0u + 6u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] - 18020u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048615Cu); st32((c.r[17].w[0] + 376u), 0u);  if (depth < kMaxDepth) unit_002C(c, 63u, depth + 1u); else { c.pc = 0x001B1370u; return; } if (c.pc != 0x0048615Cu) [[unlikely]] return; }
L_0048615C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_004861BC; } }
L_00486164:
    set32(c.r[2], ld32((c.r[17].w[0] + 368u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[5], c.r[29].w[0] + 64u);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = ld32((c.r[18].w[0] + 16u));
    c.f[0] = ld32((c.r[17].w[0] + 376u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00486194u); st32((c.r[17].w[0] + 376u), c.f[0]);  if (depth < kMaxDepth) unit_00E1(c, 240u, depth + 1u); else { c.pc = 0x004859D0u; return; } if (c.pc != 0x00486194u) [[unlikely]] return; }
L_00486194:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048619Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_002B(c, 233u, depth + 1u); else { c.pc = 0x001AF910u; return; } if (c.pc != 0x0048619Cu) [[unlikely]] return; }
L_0048619C:
    c.f[1] = ld32((c.r[17].w[0] + 376u));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 376u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 20u));
    c.f[0] = ld32((c.r[17].w[0] + 376u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 376u), c.f[0]);
    c.budget -= 8;
L_004861BC:
    set32(c.r[2], ld32((c.r[17].w[0] + 372u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00486164u | kUnwind; return; } goto L_00486164; }
    c.f[2] = ld32((c.r[17].w[0] + 376u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43F00000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[0] = ld32((c.r[17].w[0] + 288u));
    set32(c.r[5], 0u - 1u);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004861FCu); st32((c.r[17].w[0] + 316u), c.f[0]);  if (depth < kMaxDepth) unit_002C(c, 55u, depth + 1u); else { c.pc = 0x001B1160u; return; } if (c.pc != 0x004861FCu) [[unlikely]] return; }
L_004861FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 416u);  c.pc = t; return; }
L_00486220:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 276u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00486260; } }
L_0048623C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 64u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00486254u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00486254u) [[unlikely]] return; }
L_00486254:
    c.r[2].d[0] = c.r[17].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[17], c.r[2].w[0] + 4u);
    c.budget -= 3;
L_00486260:
    set32(c.r[4], ld32((c.r[16].w[0] + 272u)));
    c.r[2].d[0] = c.r[17].d[0] << 32;
    set32(c.r[3], ld32((c.r[16].w[0] + 276u)));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[17].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0048623Cu | kUnwind; return; } goto L_0048623C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004862B0:
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_004862C8; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 380u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004862D4; } }
L_004862C8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_004862D4; } }
    st8((c.r[4].w[0] + 380u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_004862D4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004862E0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 381u));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_004865AC; } }
    c.r[3].d[0] = ld8((c.r[21].w[0] + 380u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[16], ld32((c.r[21].w[0] + 276u)));  goto L_00486580; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_004865B0; } }
    set32(c.r[16], ld32((c.r[21].w[0] + 276u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00486580; } }
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.budget -= 1;
L_0048633C:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[20], ld32((c.r[2].w[0])));
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00486360u); set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x00486360u) [[unlikely]] return; }
L_00486360:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048636Cu); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x0048636Cu) [[unlikely]] return; }
L_0048636C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 192u);  goto L_00486394; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00486390; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00486390u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x00486390u) [[unlikely]] return; }
L_00486390:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 1;
L_00486394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048639Cu); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x0048639Cu) [[unlikely]] return; }
L_0048639C:
    c.f[1] = ld32((c.r[29].w[0] + 196u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.f[2] = ld32((c.r[21].w[0] + 316u));
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.f[0] = 0u;
    set32(c.r[4], c.r[29].w[0] + 148u);
    c.facc = fp::add(c.f[0], c.f[1]);
    set32(c.r[2], 0u + 16u);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[20], c.f[2]));
    st32((c.r[29].w[0] + 144u), c.r[3].w[0]);
    st16((c.r[29].w[0] + 170u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 196u), c.f[0]);
    st16((c.r[29].w[0] + 168u), static_cast<std::uint16_t>(0u));
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st32((c.r[29].w[0] + 164u), c.r[4].w[0]);  if (t) { goto L_004863E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004863E0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004863E0u) [[unlikely]] return; }
L_004863E0:
    set32(c.r[2], c.r[29].w[0] + 148u);
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 2;
L_004863E8:
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[5], c.r[29].w[0] + 148u);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 196u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 200u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    set32(c.r[19], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[22], ld32((c.r[20].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 170u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[4], c.r[22].w[0] << 5);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 18;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[18], ld32((c.r[29].w[0] + 148u)));  goto L_00486464; }
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048643Cu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0048643Cu) [[unlikely]] return; }
L_0048643C:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[17].w[0] + 4u);  goto L_00486458; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00486454u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00486454u) [[unlikely]] return; }
L_00486454:
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_00486458:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00486488; } }
    set32(c.r[18], ld32((c.r[29].w[0] + 148u)));
    c.budget -= 1;
L_00486464:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00486470u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x00486470u) [[unlikely]] return; }
L_00486470:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00486484u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00486484u) [[unlikely]] return; }
L_00486484:
    st32((c.r[17].w[0] + 4u), c.r[18].w[0]);
    c.budget -= 1;
L_00486488:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0048649Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0048649Cu) [[unlikely]] return; }
L_0048649C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 170u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 144u), c.r[3].w[0]);  if (t) { goto L_004864CC; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[2], c.r[29].w[0] + 148u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[25], ld32((c.r[20].w[0])));  goto L_004864D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004864CCu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004864CCu) [[unlikely]] return; }
L_004864CC:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_004864D0:
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004864DCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004864DCu) [[unlikely]] return; }
L_004864DC:
    c.f[2] = ld32((c.r[29].w[0] + 196u));
    c.f[1] = ld32((c.r[21].w[0] + 308u));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].d[0] = c.r[16].d[0] << 32;  goto L_00486578; }
    c.r[5].d[0] = c.r[16].d[0] << 32;
    set32(c.r[4], c.r[21].w[0] + 264u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00486504u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (depth < kMaxDepth) unit_0009(c, 310u, depth + 1u); else { c.pc = 0x00127460u; return; } if (c.pc != 0x00486504u) [[unlikely]] return; }
L_00486504:
    set32(c.r[5], ld32((c.r[21].w[0] + 360u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0048653C; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 364u)));
    c.budget -= 1;
L_00486518:
    set32(c.r[4], c.r[6].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[20].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_0048653C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00486548; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0048653C:
    c.r[3].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 364u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00486518u | kUnwind; return; } goto L_00486518; }
L_00486548:
    set32(c.r[5], ld32((c.r[21].w[0] + 348u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 372u)));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00486580; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00486564u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E1(c, 271u, depth + 1u); else { c.pc = 0x00485DD0u; return; } if (c.pc != 0x00486564u) [[unlikely]] return; }
L_00486564:
    set32(c.r[3], ld32((c.r[21].w[0] + 348u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 348u), c.r[3].w[0]);  if (t) { goto L_00486580; } }
    c.r[3].d[0] = c.r[16].d[0] << 32;
    c.budget -= 1;
L_00486578:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[16], c.r[3].w[0] + 4u);
    c.budget -= 2;
L_00486580:
    set32(c.r[5], ld32((c.r[21].w[0] + 272u)));
    c.r[3].d[0] = c.r[16].d[0] << 32;
    set32(c.r[4], ld32((c.r[21].w[0] + 276u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 11;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = c.r[16].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0048633Cu | kUnwind; return; } goto L_0048633C; }
L_004865AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_004865B0:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_004865E0:
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[3], 0u + 263u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00486604; } }
    set32(c.r[3], 0u + 24u);
    st32((c.r[4].w[0] + 368u), c.r[6].w[0]);
    mmi::divu(c, 0, c.r[7].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[4].w[0] + 372u), c.r[3].w[0]);
    c.budget -= 5;
L_00486604:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00486610:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00486848; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 31776u);
    set32(c.r[3], c.r[3].w[0] - 31752u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[19].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 31720u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[19].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 31708u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[19].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 31684u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[19].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 31556u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[19].w[0] + 280u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 31540u);
    c.budget -= 22;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 284u), c.r[2].w[0]);  if (t) { goto L_004866D0; } }
L_0048668C:
    set32(c.r[2], ld32((c.r[19].w[0] + 364u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] - 8u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 8u));
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 360u)));  goto L_004866C8; }
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004866C4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004866C4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004866C4u) [[unlikely]] return; }
L_004866C4:
    set32(c.r[2], ld32((c.r[19].w[0] + 360u)));
    c.budget -= 1;
L_004866C8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[19].w[0] + 360u), c.r[2].w[0]);
    c.budget -= 2;
L_004866D0:
    set32(c.r[2], ld32((c.r[19].w[0] + 360u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 360u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0048668Cu | kUnwind; return; } goto L_0048668C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00486720; } }
L_004866E4:
    set32(c.r[2], ld32((c.r[19].w[0] + 368u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[16], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004866FCu); set32(c.r[4], ld32((c.r[2].w[0] + 12u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004866FCu) [[unlikely]] return; }
L_004866FC:
    set32(c.r[2], ld32((c.r[19].w[0] + 368u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048670Cu); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0048670Cu) [[unlikely]] return; }
L_0048670C:
    set32(c.r[2], ld32((c.r[19].w[0] + 368u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048671Cu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0048671Cu) [[unlikely]] return; }
L_0048671C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00486720:
    set32(c.r[2], ld32((c.r[19].w[0] + 372u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004866E4u | kUnwind; return; } goto L_004866E4; }
    set32(c.r[4], ld32((c.r[19].w[0] + 368u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_00486748; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00486744u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00486744u) [[unlikely]] return; }
L_00486744:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00486748:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[29].w[0] + 108u), c.r[2].w[0]);  goto L_00486758; }
    set32(c.r[2], c.r[19].w[0] + 284u);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 2;
L_00486758:
    set32(c.r[4], c.r[29].w[0] + 100u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[16], c.r[2].w[0] + 28u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048676Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B5(c, 165u, depth + 1u); else { c.pc = 0x003D5B00u; return; } if (c.pc != 0x0048676Cu) [[unlikely]] return; }
L_0048676C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00486778u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 2u, depth + 1u); else { c.pc = 0x00418010u; return; } if (c.pc != 0x00486778u) [[unlikely]] return; }
L_00486778:
    set32(c.r[5], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[4], c.r[29].w[0] + 104u);
    set32(c.r[6], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048678Cu); set32(c.r[7], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_00C5(c, 601u, depth + 1u); else { c.pc = 0x00417FC0u; return; } if (c.pc != 0x0048678Cu) [[unlikely]] return; }
L_0048678C:
    set32(c.r[4], c.r[29].w[0] + 92u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00486798u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 2u, depth + 1u); else { c.pc = 0x00418010u; return; } if (c.pc != 0x00486798u) [[unlikely]] return; }
L_00486798:
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004867A4u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_00C5(c, 600u, depth + 1u); else { c.pc = 0x00417FA0u; return; } if (c.pc != 0x004867A4u) [[unlikely]] return; }
L_004867A4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[19].w[0] + 352u);  goto L_004867C0; }
    set32(c.r[6], ld32((c.r[29].w[0] + 104u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004867BCu); set32(c.r[4], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_00C5(c, 598u, depth + 1u); else { c.pc = 0x00417F70u; return; } if (c.pc != 0x004867BCu) [[unlikely]] return; }
L_004867BC:
    set32(c.r[4], c.r[19].w[0] + 352u);
    c.budget -= 1;
L_004867C0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[19].w[0] + 328u);  goto L_004867E4; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004867E0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004867E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004867E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E1(c, 379u, depth + 1u); else { c.pc = 0x00487040u; return; } if (c.pc != 0x004867E0u) [[unlikely]] return; }
L_004867E0:
    set32(c.r[4], c.r[19].w[0] + 328u);
    c.budget -= 1;
L_004867E4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] + 284u);  goto L_004867F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004867F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004867F4u) [[unlikely]] return; }
L_004867F4:
    set32(c.r[2], c.r[19].w[0] + 284u);
    c.budget -= 1;
L_004867F8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] + 280u);  goto L_00486810; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 25616u);
    st32((c.r[19].w[0] + 284u), c.r[2].w[0]);
    set32(c.r[2], c.r[19].w[0] + 280u);
    c.budget -= 4;
L_00486810:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00486828; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27888u);
    st32((c.r[19].w[0] + 280u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
L_00486828:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00486830u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 138u, depth + 1u); else { c.pc = 0x001A2330u; return; } if (c.pc != 0x00486830u) [[unlikely]] return; }
L_00486830:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[19].d[0] + 0ull;  goto L_0048684C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00486848u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00486848u) [[unlikely]] return; }
L_00486848:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0048684C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00486870:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[7], 0u + 8u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00486898u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0028(c, 169u, depth + 1u); else { c.pc = 0x001A2AC0u; return; } if (c.pc != 0x00486898u) [[unlikely]] return; }
L_00486898:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27888u);
    set32(c.r[3], c.r[3].w[0] + 25616u);
    st32((c.r[18].w[0] + 280u), c.r[2].w[0]);
    set32(c.r[4], c.r[18].w[0] + 328u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[18].w[0] + 284u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 31776u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 31752u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[18].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 31720u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[18].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 31708u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[18].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 31684u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[18].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 31556u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[18].w[0] + 280u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 31540u);
    st32((c.r[18].w[0] + 284u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 292u), 0u);
    st32((c.r[18].w[0] + 296u), 0u);
    st32((c.r[18].w[0] + 300u), 0u);
    st32((c.r[18].w[0] + 304u), 0u);
    st32((c.r[18].w[0] + 308u), 0u);
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00486924u); st32((c.r[18].w[0] + 312u), 0u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x00486924u) [[unlikely]] return; }
L_00486924:
    set32(c.r[3], 0u - 1u);
    set32(c.r[16], c.r[18].w[0] + 352u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00486964; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048693Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0048693Cu) [[unlikely]] return; }
L_0048693C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_00486954; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00486950u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x00486950u) [[unlikely]] return; }
L_00486950:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_00486954:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_00486968; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00486964u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x00486964u) [[unlikely]] return; }
L_00486964:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00486968:
    set32(c.r[4], c.r[18].w[0] + 352u);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[5], 0u + 30u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00486980u); st32((c.r[16].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_00E1(c, 374u, depth + 1u); else { c.pc = 0x00486F20u; return; } if (c.pc != 0x00486980u) [[unlikely]] return; }
L_00486980:
    st32((c.r[18].w[0] + 344u), 0u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 352u);
    c.budget -= 3;
L_0048698C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00486994u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x00486994u) [[unlikely]] return; }
L_00486994:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], 0u + 1u);  goto L_004869BC; }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] - 18020u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004869B8u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002C(c, 63u, depth + 1u); else { c.pc = 0x001B1370u; return; } if (c.pc != 0x004869B8u) [[unlikely]] return; }
L_004869B8:
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_004869BC:
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    st8((c.r[29].w[0] + 64u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[4], c.r[18].w[0] + 352u);
    set32(c.r[3], ld32((c.r[18].w[0] + 360u)));
    set32(c.r[7], c.r[29].w[0] + 64u);
    set32(c.r[2], ld32((c.r[18].w[0] + 364u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004869E0u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00E1(c, 359u, depth + 1u); else { c.pc = 0x00486B70u; return; } if (c.pc != 0x004869E0u) [[unlikely]] return; }
L_004869E0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 352u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0048698Cu | kUnwind; return; } goto L_0048698C; }
    st32((c.r[18].w[0] + 292u), 0u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 296u), 0u);
    st32((c.r[18].w[0] + 300u), 0u);
    st32((c.r[18].w[0] + 348u), 0u);
    st32((c.r[18].w[0] + 368u), 0u);
    st32((c.r[18].w[0] + 372u), 0u);
    st32((c.r[18].w[0] + 324u), 0u);
    st8((c.r[18].w[0] + 381u), static_cast<std::uint8_t>(0u));
    c.budget -= 11;
    { const bool t = c.r[18].d[0] == 0ull; st8((c.r[18].w[0] + 380u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00486A20; } }
    set32(c.r[2], c.r[18].w[0] + 284u);
    c.budget -= 1;
L_00486A20:
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[7], c.r[29].w[0] + 76u);
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[2].w[0] + 28u);
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00486A48u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x00486A48u) [[unlikely]] return; }
L_00486A48:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00486A70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29836u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_00486A8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00486A9C; } }
L_00486A8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00486A94u);  if (depth < kMaxDepth) unit_0028(c, 186u, depth + 1u); else { c.pc = 0x001A2F10u; return; } if (c.pc != 0x00486A94u) [[unlikely]] return; }
L_00486A94:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_00486A9C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00486AB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00486AD4u); set32(c.r[4], c.r[4].w[0] - 18176u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00486AD4u) [[unlikely]] return; }
L_00486AD4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00486AE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00486AF4; } }
L_00486AE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00486AECu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 187u, depth + 1u); else { c.pc = 0x001A2F50u; return; } if (c.pc != 0x00486AECu) [[unlikely]] return; }
L_00486AEC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00486AF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00486B10:
    set32(c.r[2], ld32((c.r[28].w[0] - 30864u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_00486B20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29836u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00486B3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00486B44; } }
L_00486B3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00486B44u);  if (depth < kMaxDepth) unit_0028(c, 190u, depth + 1u); else { c.pc = 0x001A2FC0u; return; } if (c.pc != 0x00486B44u) [[unlikely]] return; }
L_00486B44:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00486B50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29836u)));  c.pc = t; return; }
L_00486B60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 18144u);  c.pc = t; return; }
L_00486B70:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00486EFC; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[20].w[0] + 8u)));  goto L_00486BDC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00486BD0u); set32(c.r[5], c.r[5].w[0] - 17965u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x00486BD0u) [[unlikely]] return; }
L_00486BD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00486BD8u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x00486BD8u) [[unlikely]] return; }
L_00486BD8:
    set32(c.r[5], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 1;
L_00486BDC:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[4], c.r[5].w[0] + c.r[18].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0])));  goto L_00486D68; }
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[6].w[0] - c.r[19].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));  if (t) { goto L_00486C10; } }
    set32(c.r[3], c.r[3].w[0] + 7u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    c.budget -= 2;
L_00486C10:
    c.r[1].d[0] = c.r[4].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], c.r[18].w[0] << 3);  goto L_00486CA4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00486C50; } }
L_00486C24:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  goto L_00486C40; }
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[5].w[0]), c.f[1]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 5;
L_00486C40:
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_00486C50:
    c.r[1].d[0] = c.r[4].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00486C24u | kUnwind; return; } goto L_00486C24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00486C90; } }
L_00486C64:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  goto L_00486C80; }
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[5].w[0]), c.f[1]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 5;
L_00486C80:
    set32(c.r[4], c.r[4].w[0] + 8u);
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_00486C90:
    c.r[3].d[0] = c.r[4].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00486C64u | kUnwind; return; } goto L_00486C64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00486D3C; } }
L_00486CA4:
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[6].w[0] - c.r[5].w[0]);  if (t) { goto L_00486CDC; } }
L_00486CB0:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  goto L_00486CCC; }
    c.f[1] = ld32((c.r[8].w[0]));
    c.f[0] = ld32((c.r[8].w[0] + 4u));
    st32((c.r[7].w[0]), c.f[1]);
    st32((c.r[7].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 5;
L_00486CCC:
    set32(c.r[8], c.r[8].w[0] + 8u);
    set32(c.r[7], c.r[7].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_00486CDC:
    c.r[3].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00486CB0u | kUnwind; return; } goto L_00486CB0; } }
    set32(c.r[3], c.r[4].w[0] - c.r[18].w[0]);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[1].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);  goto L_00486D30; }
    c.r[1].d[0] = c.r[17].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00486D10; } }
    set32(c.r[17], c.r[17].w[0] + c.r[5].w[0]);
    c.budget -= 1;
L_00486D10:
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00486D30; } }
L_00486D1C:
    set32(c.r[6], c.r[6].w[0] - 8u);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[6].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 5;
L_00486D30:
    c.r[1].d[0] = c.r[19].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00486D1Cu | kUnwind; return; } goto L_00486D1C; }
L_00486D3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00486D58; } }
L_00486D44:
    set32(c.r[18], c.r[18].w[0] - 1u);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.budget -= 5;
L_00486D58:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[17].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00486D44u | kUnwind; return; } goto L_00486D44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_00486F00; } }
L_00486D68:
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 104u), 0u);
    st32((c.r[29].w[0] + 108u), 0u);
    set32(c.r[16], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 7;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], 0u + 1u);  goto L_00486D84; }
L_00486D84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00486DA0; } }
L_00486D8C:
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[16].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[16].d[0] = c.r[2].d[0] + 0ull;  goto L_00486DA0; }
    set32(c.r[16], c.r[16].w[0] << 1);
    c.budget -= 1;
L_00486DA0:
    c.r[1].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00486D8Cu | kUnwind; return; } goto L_00486D8C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00486DB8u); set32(c.r[4], c.r[16].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x00486DB8u) [[unlikely]] return; }
L_00486DB8:
    st32((c.r[29].w[0] + 100u), c.r[16].w[0]);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_00486E00; } }
L_00486DD4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_00486DF0; }
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[2].w[0]), c.f[1]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 5;
L_00486DF0:
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 4;
L_00486E00:
    c.r[3].d[0] = c.r[5].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00486DD4u | kUnwind; return; } goto L_00486DD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00486E40; } }
L_00486E14:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_00486E30; }
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[2].w[0]), c.f[1]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 5;
L_00486E30:
    set32(c.r[2], c.r[2].w[0] + 8u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 4;
L_00486E40:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00486E14u | kUnwind; return; } goto L_00486E14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_00486E80; } }
L_00486E50:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_00486E6C; }
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[2].w[0]), c.f[1]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 5;
L_00486E6C:
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_00486E80:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00486E50u | kUnwind; return; } goto L_00486E50; } }
    set32(c.r[2], c.r[29].w[0] + 96u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[20].d[0]) { set32(c.r[4], c.r[29].w[0] + 96u);  goto L_00486ED8; }
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[20].w[0])));
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 17;
L_00486ED8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00486EE0u);  if (depth < kMaxDepth) unit_00E1(c, 383u, depth + 1u); else { c.pc = 0x004870B0u; return; } if (c.pc != 0x00486EE0u) [[unlikely]] return; }
L_00486EE0:
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00486EFC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00486EFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00486EFCu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00486EFCu) [[unlikely]] return; }
L_00486EFC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_00486F00:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00486F20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00487028; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[17].w[0] << 3);
    st32((c.r[29].w[0] + 48u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 56u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00486F60u); st32((c.r[29].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x00486F60u) [[unlikely]] return; }
L_00486F60:
    st32((c.r[29].w[0] + 52u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_00486FA8; } }
L_00486F7C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 56u)));  goto L_00486F98; }
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[2].w[0]), c.f[1]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 5;
L_00486F98:
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 4;
L_00486FA8:
    c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00486F7Cu | kUnwind; return; } goto L_00486F7C; } }
    set32(c.r[2], c.r[29].w[0] + 48u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[16].d[0]) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_00487004; }
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 17;
L_00487004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048700Cu);  if (depth < kMaxDepth) unit_00E1(c, 383u, depth + 1u); else { c.pc = 0x004870B0u; return; } if (c.pc != 0x0048700Cu) [[unlikely]] return; }
L_0048700C:
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0048702C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00487028; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487028u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00487028u) [[unlikely]] return; }
L_00487028:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0048702C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00487040:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00487098; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487064u);  if (depth < kMaxDepth) unit_00E1(c, 383u, depth + 1u); else { c.pc = 0x004870B0u; return; } if (c.pc != 0x00487064u) [[unlikely]] return; }
L_00487064:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00487084; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00487080; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487080u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00487080u) [[unlikely]] return; }
L_00487080:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00487084:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0048709C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487098u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00487098u) [[unlikely]] return; }
L_00487098:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0048709C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004870B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), 0u);  c.pc = t; return; }
L_004870C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00486AB0u | kUnwind; return; } goto L_00486AB0; }
L_004870D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00486A70u | kUnwind; return; } goto L_00486A70; }
L_004870E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00486B10u | kUnwind; return; } goto L_00486B10; }
L_004870F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00486B20u | kUnwind; return; } goto L_00486B20; }
L_00487100:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00486B50u | kUnwind; return; } goto L_00486B50; }
L_00487110:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00486610u | kUnwind; return; } goto L_00486610; }
L_00487120:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00486610u | kUnwind; return; } goto L_00486610; }
L_00487130:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 72u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00486610u | kUnwind; return; } goto L_00486610; }
L_00487140:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 132u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00486610u | kUnwind; return; } goto L_00486610; }
L_00487150:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 280u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004865E0u | kUnwind; return; } goto L_004865E0; }
L_00487160:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 280u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00486610u | kUnwind; return; } goto L_00486610; }
L_00487170:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 284u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00486610u | kUnwind; return; } goto L_00486610; }
L_00487180:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 284u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004862B0u | kUnwind; return; } goto L_004862B0; }
L_00487190:
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00484000u < 16384u) { entry = entries_00E1[(t - 0x00484000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_004871B0:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_004871C4; }
    set32(c.r[5], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 1;
L_004871C4:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00105240u | kUnwind; return; } [[clang::musttail]] return unit_0001(c, 129u, depth); }
L_004871D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[4].w[0] + 4u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_004872B8; } }
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.f[1] = fp::add(c.f[0], c.f[20]);
    st32((c.r[16].w[0] + 12u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].d[0] = 0ull + 0ull;  goto L_004872BC; }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[16].w[0] + 20u));  goto L_00487224; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 24u)));  if (t) { goto L_0048722C; } }
L_00487224:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_0048722C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  goto L_004872A0; }
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487240u); set32(c.r[5], c.r[16].w[0] + 20u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00487240u) [[unlikely]] return; }
L_00487240:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00487254u); set32(c.r[5], c.r[29].w[0] + 48u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00487254u) [[unlikely]] return; }
L_00487254:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487260u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00487260u) [[unlikely]] return; }
L_00487260:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 28u)));  goto L_00487294; }
    st8((c.r[16].w[0] + 21u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = 0ull & 127ull;
    c.r[4].d[0] = ld8((c.r[16].w[0] + 20u));
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 255u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0048729C; } }
L_00487294:
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 24u), 0u);
    c.budget -= 2;
L_0048729C:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_004872A0:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004872B0u); c.f[12] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004872B0u) [[unlikely]] return; }
L_004872B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_004872C0; } }
L_004872B8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004872BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004872C0:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004872D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00487354; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 31504u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 20u);  goto L_00487318; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00487314u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00487314u) [[unlikely]] return; }
L_00487314:
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 1;
L_00487318:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0] + 16u), 0u);  if (t) { goto L_00487328; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487328u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00487328u) [[unlikely]] return; }
L_00487328:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00487340; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 24576u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 4;
L_00487340:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00487358; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487354u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00487354u) [[unlikely]] return; }
L_00487354:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00487358:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00487370:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] - 24576u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 31504u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 8u), c.f[12]);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), c.r[5].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004873B0u); set32(c.r[4], c.r[16].w[0] + 20u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004873B0u) [[unlikely]] return; }
L_004873B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 28u)));  goto L_004873E4; }
    st8((c.r[16].w[0] + 21u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = 0ull & 127ull;
    c.r[4].d[0] = ld8((c.r[16].w[0] + 20u));
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 255u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_004873EC; } }
L_004873E4:
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 24u), 0u);
    c.budget -= 2;
L_004873EC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00487400:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00487448; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 31472u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487430u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0021(c, 280u, depth + 1u); else { c.pc = 0x00187E00u; return; } if (c.pc != 0x00487430u) [[unlikely]] return; }
L_00487430:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0048744C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487448u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00487448u) [[unlikely]] return; }
L_00487448:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0048744C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00487460:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[17].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_004874E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487494u); set32(c.r[4], 0u + 320u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x00487494u) [[unlikely]] return; }
L_00487494:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004874E4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004874A8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 35u, depth + 1u); else { c.pc = 0x001886D0u; return; } if (c.pc != 0x004874A8u) [[unlikely]] return; }
L_004874A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 31424u);
    set32(c.r[3], c.r[3].w[0] - 31400u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 31368u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 31356u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 31332u);
    st32((c.r[17].w[0] + 132u), c.r[2].w[0]);
    c.budget -= 15;
L_004874E4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004874F8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0021(c, 276u, depth + 1u); else { c.pc = 0x00187D00u; return; } if (c.pc != 0x004874F8u) [[unlikely]] return; }
L_004874F8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00487520:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[6].w[0] + 52u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0048754C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 56u)));  if (t) { goto L_00487558; } }
L_0048754C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 52u));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 57;
    c.budget -= 3;
L_00487558:
    c.r[3].d[0] = c.r[3].d[0] ^ 0ull;
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0048767C; }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0048757Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0048757Cu) [[unlikely]] return; }
L_0048757C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00487678; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048758Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 231u, depth + 1u); else { c.pc = 0x001A38C0u; return; } if (c.pc != 0x0048758Cu) [[unlikely]] return; }
L_0048758C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004875D8; }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004875A8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004875A8u) [[unlikely]] return; }
L_004875A8:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 81u);  goto L_004875BC; }
    set32(c.r[5], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_004875BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004875C4u); set32(c.r[4], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004875C4u) [[unlikely]] return; }
L_004875C4:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004875D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004875D0u) [[unlikely]] return; }
L_004875D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00487678; } }
L_004875D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004875E0u);  if (depth < kMaxDepth) unit_001B(c, 201u, depth + 1u); else { c.pc = 0x0016DCF0u; return; } if (c.pc != 0x004875E0u) [[unlikely]] return; }
L_004875E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0048762C; }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004875FCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004875FCu) [[unlikely]] return; }
L_004875FC:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 65u);  goto L_00487610; }
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_00487610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487618u); set32(c.r[4], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00487618u) [[unlikely]] return; }
L_00487618:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487624u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00487624u) [[unlikely]] return; }
L_00487624:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00487678; } }
L_0048762C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487634u);  if (depth < kMaxDepth) unit_0026(c, 215u, depth + 1u); else { c.pc = 0x0019A6B0u; return; } if (c.pc != 0x00487634u) [[unlikely]] return; }
L_00487634:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00487678; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00487650u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00487650u) [[unlikely]] return; }
L_00487650:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 49u);  goto L_00487664; }
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_00487664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0048766Cu); set32(c.r[4], c.r[16].w[0] + 52u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0048766Cu) [[unlikely]] return; }
L_0048766C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487678u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00487678u) [[unlikely]] return; }
L_00487678:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0048767C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00487690:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004876A4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 35u, depth + 1u); else { c.pc = 0x001886D0u; return; } if (c.pc != 0x004876A4u) [[unlikely]] return; }
L_004876A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] - 31424u);
    set32(c.r[2], c.r[2].w[0] - 31400u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 31368u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 31356u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 31332u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 132u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00487700:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004877B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 31424u);
    set32(c.r[3], c.r[3].w[0] - 31400u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 31368u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 31356u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 31332u);
    c.budget -= 16;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 132u), c.r[2].w[0]);  if (t) { goto L_004877A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 18480u);
    set32(c.r[3], c.r[3].w[0] - 18456u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[17].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 18424u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 18412u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[17].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 18388u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004877A0u); st32((c.r[17].w[0] + 132u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0023(c, 57u, depth + 1u); else { c.pc = 0x0018D0C0u; return; } if (c.pc != 0x004877A0u) [[unlikely]] return; }
L_004877A0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004877BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004877B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004877B8u) [[unlikely]] return; }
L_004877B8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004877BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004877D0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00487700u | kUnwind; return; } goto L_00487700; }
L_004877E0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00487700u | kUnwind; return; } goto L_00487700; }
L_004877F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 72u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00487700u | kUnwind; return; } goto L_00487700; }
L_00487800:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 132u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00487700u | kUnwind; return; } goto L_00487700; }
L_00487810:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 60u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00487840u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00487840u) [[unlikely]] return; }
L_00487840:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00487914; }
    set32(c.r[5], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 10;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[4].w[0]));  goto L_0048787C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  if (t) { goto L_00487884; } }
L_0048787C:
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 57;
    c.budget -= 2;
L_00487884:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00487910; } }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[16], ld32((c.r[28].w[0] - 25180u)));
    set32(c.r[5], c.r[5].w[0] - 17936u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004878A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CD(c, 114u, depth + 1u); else { c.pc = 0x00434B60u; return; } if (c.pc != 0x004878A4u) [[unlikely]] return; }
L_004878A4:
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 10;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[3].w[0] + 1u);  goto L_004878D0; }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_004878D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004878D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CD(c, 136u, depth + 1u); else { c.pc = 0x00434E20u; return; } if (c.pc != 0x004878D8u) [[unlikely]] return; }
L_004878D8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 17936u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004878ECu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CD(c, 114u, depth + 1u); else { c.pc = 0x00434B60u; return; } if (c.pc != 0x004878ECu) [[unlikely]] return; }
L_004878EC:
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[5], c.r[5].w[0] - 17924u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487910u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00487910u) [[unlikely]] return; }
    goto L_00487910;
L_0048790C:
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_00487910:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00487914:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00487930:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0048795Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0048795Cu) [[unlikely]] return; }
L_0048795C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[18].w[0])));  goto L_0048796C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00487A24; } }
L_0048796C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0048797Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0048797Cu) [[unlikely]] return; }
L_0048797C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[2], ld32((c.r[28].w[0] - 28808u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487994u); set32(c.r[5], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0011(c, 200u, depth + 1u); else { c.pc = 0x00145AB0u; return; } if (c.pc != 0x00487994u) [[unlikely]] return; }
L_00487994:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 64u);  if (t) { goto L_00487A04; } }
L_0048799C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004879A4u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0028(c, 168u, depth + 1u); else { c.pc = 0x001A2AA0u; return; } if (c.pc != 0x004879A4u) [[unlikely]] return; }
L_004879A4:
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004879B8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004879B8u) [[unlikely]] return; }
L_004879B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 64u);  goto L_004879F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004879C8u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0028(c, 168u, depth + 1u); else { c.pc = 0x001A2AA0u; return; } if (c.pc != 0x004879C8u) [[unlikely]] return; }
L_004879C8:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 4u);  goto L_004879E8; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004879E4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004879E4u) [[unlikely]] return; }
L_004879E4:
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_004879E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004879F0u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0028(c, 167u, depth + 1u); else { c.pc = 0x001A29C0u; return; } if (c.pc != 0x004879F0u) [[unlikely]] return; }
L_004879F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00487A00; } }
L_004879F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487A00u);  if (depth < kMaxDepth) unit_0028(c, 166u, depth + 1u); else { c.pc = 0x001A2920u; return; } if (c.pc != 0x00487A00u) [[unlikely]] return; }
L_00487A00:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 1;
L_00487A04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487A0Cu);  if (depth < kMaxDepth) unit_0028(c, 165u, depth + 1u); else { c.pc = 0x001A2900u; return; } if (c.pc != 0x00487A0Cu) [[unlikely]] return; }
L_00487A0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0048799Cu | kUnwind; return; } goto L_0048799C; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487A20u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0011(c, 198u, depth + 1u); else { c.pc = 0x00145A60u; return; } if (c.pc != 0x00487A20u) [[unlikely]] return; }
L_00487A20:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00487A24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00487A40:
    set32(c.r[29], c.r[29].w[0] - 432u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    set32(c.r[19], 0u - 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 216u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 220u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[5].w[0] + 272u)));
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);  if (t) { [[clang::musttail]] return unit_00E2(c, 7u, depth); } }
L_00487AA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487AACu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x00487AACu) [[unlikely]] return; }
L_00487AAC:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00487AC8u); set32(c.r[6], c.r[29].w[0] + 424u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00487AC8u) [[unlikely]] return; }
L_00487AC8:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00487ADCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00487ADCu) [[unlikely]] return; }
L_00487ADC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[19].d[0] != c.r[2].d[0]) { set32(c.r[5], ld32((c.r[29].w[0] + 216u)));  goto L_00487AF4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));  if (t) { [[clang::musttail]] return unit_00E2(c, 9u, depth); } }
L_00487AF4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[6], c.r[6].w[0] - 17923u);
    set32(c.r[7], 0u + 10u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487B0Cu); set32(c.r[8], 0u + 6u);  if (depth < kMaxDepth) unit_000C(c, 430u, depth + 1u); else { c.pc = 0x00133EC0u; return; } if (c.pc != 0x00487B0Cu) [[unlikely]] return; }
L_00487B0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.f[24] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 352u);
    set32(c.r[5], c.r[5].w[0] - 17921u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487B28u); c.r[30].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00487B28u) [[unlikely]] return; }
L_00487B28:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[25], ld32((c.r[20].w[0])));  goto L_00487B70; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487B40u); set32(c.r[5], c.r[29].w[0] + 420u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x00487B40u) [[unlikely]] return; }
L_00487B40:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[21] = ld32((c.r[29].w[0] + 420u));  goto L_00487B94; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00487B64; } }
    c.f[12] = ld32((c.r[29].w[0] + 420u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487B64u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x00487B64u) [[unlikely]] return; }
L_00487B64:
    c.f[21] = ld32((c.r[29].w[0] + 420u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00487B94; } }
L_00487B70:
    set32(c.r[5], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00487B80u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00487B80u) [[unlikely]] return; }
L_00487B80:
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487B8Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x00487B8Cu) [[unlikely]] return; }
L_00487B8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { [[clang::musttail]] return unit_00E2(c, 8u, depth); } }
L_00487B94:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487BA4u); set32(c.r[5], c.r[5].w[0] - 17908u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00487BA4u) [[unlikely]] return; }
L_00487BA4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00487BE4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487BBCu); set32(c.r[5], c.r[29].w[0] + 416u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x00487BBCu) [[unlikely]] return; }
L_00487BBC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[24] = ld32((c.r[29].w[0] + 416u));  goto L_00487BE4; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00487BE0; } }
    c.f[12] = ld32((c.r[29].w[0] + 416u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487BE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x00487BE0u) [[unlikely]] return; }
L_00487BE0:
    c.f[24] = ld32((c.r[29].w[0] + 416u));
    c.budget -= 1;
L_00487BE4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487BF4u); set32(c.r[5], c.r[5].w[0] - 17894u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00487BF4u) [[unlikely]] return; }
L_00487BF4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.f[25] = ld32((c.r[28].w[0] - 32564u));  goto L_00487C34; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487C0Cu); set32(c.r[5], c.r[29].w[0] + 412u);  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x00487C0Cu) [[unlikely]] return; }
L_00487C0C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[25] = ld32((c.r[29].w[0] + 412u));  goto L_00487C34; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00487C30; } }
    c.f[12] = ld32((c.r[29].w[0] + 412u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487C30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x00487C30u) [[unlikely]] return; }
L_00487C30:
    c.f[25] = ld32((c.r[29].w[0] + 412u));
    c.budget -= 1;
L_00487C34:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487C44u); set32(c.r[5], c.r[5].w[0] - 17885u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00487C44u) [[unlikely]] return; }
L_00487C44:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 336u);  goto L_00487C88; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487C5Cu); set32(c.r[5], c.r[29].w[0] + 431u);  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x00487C5Cu) [[unlikely]] return; }
L_00487C5C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[30].d[0] = ld8((c.r[29].w[0] + 431u));  goto L_00487C84; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00487C80; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 431u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487C80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x00487C80u) [[unlikely]] return; }
L_00487C80:
    c.r[30].d[0] = ld8((c.r[29].w[0] + 431u));
    c.budget -= 1;
L_00487C84:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 1;
L_00487C88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487C90u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x00487C90u) [[unlikely]] return; }
L_00487C90:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487CA0u); set32(c.r[5], c.r[5].w[0] - 17875u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00487CA0u) [[unlikely]] return; }
L_00487CA0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[22], ld32((c.r[17].w[0] + 120u)));  goto L_00487CE0; }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487CB4u); set32(c.r[4], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x00487CB4u) [[unlikely]] return; }
L_00487CB4:
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 257u);  goto L_00487CC8; }
    set32(c.r[5], ld32((c.r[29].w[0] + 264u)));
    c.budget -= 1;
L_00487CC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487CD0u); set32(c.r[4], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00487CD0u) [[unlikely]] return; }
L_00487CD0:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487CDCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00487CDCu) [[unlikely]] return; }
L_00487CDC:
    set32(c.r[22], ld32((c.r[17].w[0] + 120u)));
    c.budget -= 1;
L_00487CE0:
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[3], c.r[22].w[0] << 5);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487CF4u); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0013(c, 344u, depth + 1u); else { c.pc = 0x0014EB90u; return; } if (c.pc != 0x00487CF4u) [[unlikely]] return; }
L_00487CF4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487D00u); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0021(c, 30u, depth + 1u); else { c.pc = 0x00184600u; return; } if (c.pc != 0x00487D00u) [[unlikely]] return; }
L_00487D00:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 320u);  goto L_00487D28; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00487D24; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487D24u); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0021(c, 26u, depth + 1u); else { c.pc = 0x001844E0u; return; } if (c.pc != 0x00487D24u) [[unlikely]] return; }
L_00487D24:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 1;
L_00487D28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487D30u); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0013(c, 342u, depth + 1u); else { c.pc = 0x0014EB30u; return; } if (c.pc != 0x00487D30u) [[unlikely]] return; }
L_00487D30:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[24]) < fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], c.r[29].w[0] + 272u);  goto L_00487E5C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 292u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 312u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 288u), c.r[2].w[0]);
    c.f[22] = ld32((c.r[29].w[0] + 328u));
    set32(c.r[2], 0u + 64u);
    st32((c.r[29].w[0] + 308u), c.r[4].w[0]);
    c.f[23] = ld32((c.r[29].w[0] + 324u));
    c.f[20] = ld32((c.r[29].w[0] + 320u));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 314u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00487D84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487D7Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00487D7Cu) [[unlikely]] return; }
L_00487D7C:
    set32(c.r[2], c.r[29].w[0] + 292u);
    st32((c.r[29].w[0] + 308u), c.r[2].w[0]);
    c.budget -= 2;
L_00487D84:
    set32(c.r[2], ld32((c.r[29].w[0] + 308u)));
    set32(c.r[5], c.r[29].w[0] + 292u);
    st32((c.r[2].w[0]), c.f[20]);
    st32((c.r[2].w[0] + 4u), c.f[23]);
    st32((c.r[2].w[0] + 8u), c.f[22]);
    st32((c.r[2].w[0] + 12u), c.f[24]);
    set32(c.r[23], ld32((c.r[17].w[0] + 120u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 314u)));
    set32(c.r[4], c.r[23].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 308u)));
    c.budget -= 15;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[21], ld32((c.r[29].w[0] + 292u)));  goto L_00487DF0; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487DCCu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00487DCCu) [[unlikely]] return; }
L_00487DCC:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_00487DE8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487DE4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00487DE4u) [[unlikely]] return; }
L_00487DE4:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_00487DE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00487E14; } }
L_00487DF0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487DFCu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x00487DFCu) [[unlikely]] return; }
L_00487DFC:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 308u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487E10u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00487E10u) [[unlikely]] return; }
L_00487E10:
    st32((c.r[16].w[0] + 4u), c.r[21].w[0]);
    c.budget -= 1;
L_00487E14:
    set32(c.r[25], ld32((c.r[17].w[0] + 60u)));
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00487E28u); set32(c.r[4], c.r[17].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00487E28u) [[unlikely]] return; }
L_00487E28:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 314u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 288u), c.r[3].w[0]);  if (t) { goto L_00487E58; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 308u)));
    set32(c.r[2], c.r[29].w[0] + 292u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00487E58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487E58u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00487E58u) [[unlikely]] return; }
L_00487E58:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 1;
L_00487E5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487E64u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x00487E64u) [[unlikely]] return; }
L_00487E64:
    c.budget -= 2;
    if (c.r[30].d[0] == 0ull) { set32(c.r[5], ld32((c.r[20].w[0] + 20u)));  goto L_00487F24; }
    set32(c.r[5], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487E78u); set32(c.r[4], 0u + 108u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x00487E78u) [[unlikely]] return; }
L_00487E78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00487EAC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487E8Cu); set32(c.r[5], c.r[16].w[0] + 80u);  if (depth < kMaxDepth) unit_00E2(c, 18u, depth + 1u); else { c.pc = 0x004882B0u; return; } if (c.pc != 0x00487E8Cu) [[unlikely]] return; }
L_00487E8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[16].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] - 30944u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487EA4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00E2(c, 17u, depth + 1u); else { c.pc = 0x00488280u; return; } if (c.pc != 0x00487EA4u) [[unlikely]] return; }
L_00487EA4:
    st32((c.r[16].w[0] + 76u), c.r[22].w[0]);
    st32((c.r[16].w[0] + 72u), c.r[17].w[0]);
    c.budget -= 2;
L_00487EAC:
    c.f[3] = ld32((c.r[29].w[0] + 320u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[2] = ld32((c.r[29].w[0] + 324u));
    c.f[4] = c.r[2].w[0];
    c.f[1] = ld32((c.r[29].w[0] + 328u));
    c.f[0] = fp::mul(c.f[4], c.f[21]);
    c.f[3] = fp::mul(c.f[4], c.f[3]);
    c.f[2] = fp::mul(c.f[4], c.f[2]);
    c.f[1] = fp::mul(c.f[4], c.f[1]);
    c.f[3] = fp::cvt_w_s(c.f[3]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[3]);
    set32(c.r[21], c.f[2]);
    set32(c.r[22], c.f[1]);
    set32(c.r[23], c.f[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487EF8u); c.f[12] = c.f[25];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x00487EF8u) [[unlikely]] return; }
L_00487EF8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    c.r[9].d[0] = c.r[23].d[0] + 0ull;
    c.r[10].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487F1Cu); set32(c.r[5], c.r[5].w[0] - 17864u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x00487F1Cu) [[unlikely]] return; }
L_00487F1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 240u);  if (t) { goto L_00487FD4; } }
L_00487F24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487F2Cu); set32(c.r[4], 0u + 116u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x00487F2Cu) [[unlikely]] return; }
L_00487F2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00487F60; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487F40u); set32(c.r[5], c.r[16].w[0] + 88u);  if (depth < kMaxDepth) unit_00E2(c, 14u, depth + 1u); else { c.pc = 0x004881B0u; return; } if (c.pc != 0x00487F40u) [[unlikely]] return; }
L_00487F40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[16].w[0] + 88u);
    set32(c.r[2], c.r[2].w[0] - 30976u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487F58u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00E2(c, 17u, depth + 1u); else { c.pc = 0x00488280u; return; } if (c.pc != 0x00487F58u) [[unlikely]] return; }
L_00487F58:
    st32((c.r[16].w[0] + 84u), c.r[22].w[0]);
    st32((c.r[16].w[0] + 80u), c.r[17].w[0]);
    c.budget -= 2;
L_00487F60:
    c.f[3] = ld32((c.r[29].w[0] + 320u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[2] = ld32((c.r[29].w[0] + 324u));
    c.f[4] = c.r[2].w[0];
    c.f[1] = ld32((c.r[29].w[0] + 328u));
    c.f[0] = fp::mul(c.f[4], c.f[21]);
    c.f[3] = fp::mul(c.f[4], c.f[3]);
    c.f[2] = fp::mul(c.f[4], c.f[2]);
    c.f[1] = fp::mul(c.f[4], c.f[1]);
    c.f[3] = fp::cvt_w_s(c.f[3]);
    c.f[2] = fp::cvt_w_s(c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[1]);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[3]);
    set32(c.r[21], c.f[2]);
    set32(c.r[22], c.f[1]);
    set32(c.r[23], c.f[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487FACu); c.f[12] = c.f[25];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x00487FACu) [[unlikely]] return; }
L_00487FAC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    c.r[9].d[0] = c.r[23].d[0] + 0ull;
    c.r[10].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487FD0u); set32(c.r[5], c.r[5].w[0] - 17864u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x00487FD0u) [[unlikely]] return; }
L_00487FD0:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 1;
L_00487FD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487FDCu); set32(c.r[5], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00487FDCu) [[unlikely]] return; }
L_00487FDC:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00487FF0u); set32(c.r[5], c.r[29].w[0] + 240u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00487FF0u) [[unlikely]] return; }
L_00487FF0:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00487FFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00487FFCu) [[unlikely]] return; }
L_00487FFC:
    set32(c.r[2], ld32((c.r[28].w[0] - 28808u)));
    c.budget -= 1;
    [[clang::musttail]] return unit_00E2(c, 1u, depth);
}

}
