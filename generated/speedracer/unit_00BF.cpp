#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00BF[4096] = {
    1, 2, 3, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0,
    0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17,
    0, 18, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 21, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0,
    0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37,
    0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57,
    0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0,
    0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77,
    0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 82,
    0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0,
    0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0,
    91, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0,
    101, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0,
    0, 0, 117, 0, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0,
    0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0,
    0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 142, 0, 143, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 147,
    0, 0, 0, 0, 0, 148, 0, 149, 0, 150, 0, 151, 0, 0, 152, 0, 0, 153, 154, 0, 0, 0, 155, 0, 0, 156, 0, 0, 0, 0, 0, 0,
    157, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0,
    0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    173, 0, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 182, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0,
    0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 0, 193, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0,
    196, 0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0,
    202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 208, 0,
    0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0,
    215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0,
    0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 222, 0, 0,
    0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0,
    0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 235, 0, 236, 0, 0, 0, 0,
    0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240,
    0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 247, 0, 248, 0, 0, 0, 0,
    0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252,
    0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0,
    259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0,
    0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 286, 0, 0, 287, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0,
    291, 0, 0, 292, 0, 0, 293, 0, 294, 0, 0, 0, 295, 0, 0, 296, 0, 0, 297, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 302, 0, 0, 303, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0,
    0, 307, 0, 0, 308, 0, 0, 309, 0, 310, 0, 0, 0, 311, 0, 0, 312, 0, 0, 313, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 320, 0, 0, 0,
    321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0,
    325, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 329, 0, 0, 330, 0, 0, 331, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 334,
    0, 0, 0, 0, 335, 0, 0, 336, 0, 0, 337, 0, 338, 0, 0, 0, 339, 0, 0, 340, 0, 0, 341, 0, 342, 0, 0, 0, 343, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 345, 0, 0, 346, 0, 0, 347, 0, 348, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0,
    350, 0, 0, 0, 0, 351, 0, 0, 352, 0, 0, 353, 0, 354, 0, 0, 0, 355, 0, 0, 356, 0, 0, 357, 0, 358, 0, 0, 0, 359, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0,
    364, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0,
    0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 373, 0, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 379, 0, 0, 380, 0, 0, 0, 0, 0, 0, 381,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0,
    388, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 399,
    0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 402, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 404, 0, 0, 405, 0, 0, 0, 0, 0, 406, 0, 0, 0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 409, 0, 0, 410, 0, 0, 0,
    0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 0, 413, 0, 0, 414, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 416, 0, 0, 417, 0, 0, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 0, 0, 420, 0, 0, 421, 0, 0, 422, 0,
    0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 430, 0, 0, 0, 0, 431, 0, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 437, 0, 0, 0,
    0, 438, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 442, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0,
    0, 0, 0, 0, 0, 447, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 0, 450, 0, 451, 0, 0, 452, 0, 0, 453, 0, 0, 0, 454, 0, 0,
    455, 0, 0, 0, 456, 0, 0, 0, 0, 0, 457, 0, 0, 458, 0, 0, 459, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0,
    0, 0, 469, 0, 470, 0, 0, 0, 471, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 474, 0, 0,
    0, 475, 0, 0, 476, 0, 477, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0,
    0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0,
    0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 492, 0, 0, 0,
    493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 495, 0, 0, 496, 0, 0, 0, 0,
    0, 497, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 501, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 505, 0, 0, 506, 0, 0, 507, 0, 508, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 510,
    0, 0, 0, 0, 511, 0, 0, 512, 0, 0, 513, 0, 514, 0, 0, 0, 515, 0, 0, 516, 0, 0, 517, 0, 518, 0, 0, 0, 519, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 521, 0, 0, 522, 0, 0, 523, 0, 524, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0,
    526, 0, 0, 0, 0, 527, 0, 0, 528, 0, 0, 529, 0, 530, 0, 0, 0, 531, 0, 0, 532, 0, 0, 533, 0, 534, 0, 0, 0, 535, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 539, 0, 0,
    540, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 543, 0, 0, 0, 544, 0, 0, 0,
    0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0,
    0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550,
    0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 553,
};

void unit_00BF(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003FC000;
    case 2u: goto L_003FC004;
    case 3u: goto L_003FC008;
    case 4u: goto L_003FC018;
    case 5u: goto L_003FC028;
    case 6u: goto L_003FC034;
    case 7u: goto L_003FC054;
    case 8u: goto L_003FC064;
    case 9u: goto L_003FC070;
    case 10u: goto L_003FC090;
    case 11u: goto L_003FC0A0;
    case 12u: goto L_003FC0AC;
    case 13u: goto L_003FC104;
    case 14u: goto L_003FC124;
    case 15u: goto L_003FC154;
    case 16u: goto L_003FC168;
    case 17u: goto L_003FC17C;
    case 18u: goto L_003FC184;
    case 19u: goto L_003FC18C;
    case 20u: goto L_003FC1A8;
    case 21u: goto L_003FC1B0;
    case 22u: goto L_003FC1B4;
    case 23u: goto L_003FC220;
    case 24u: goto L_003FC2A0;
    case 25u: goto L_003FC300;
    case 26u: goto L_003FC344;
    case 27u: goto L_003FC354;
    case 28u: goto L_003FC3C0;
    case 29u: goto L_003FC404;
    case 30u: goto L_003FC414;
    case 31u: goto L_003FC480;
    case 32u: goto L_003FC4D0;
    case 33u: goto L_003FC4F0;
    case 34u: goto L_003FC504;
    case 35u: goto L_003FC51C;
    case 36u: goto L_003FC548;
    case 37u: goto L_003FC57C;
    case 38u: goto L_003FC594;
    case 39u: goto L_003FC5C0;
    case 40u: goto L_003FC5E8;
    case 41u: goto L_003FC610;
    case 42u: goto L_003FC638;
    case 43u: goto L_003FC660;
    case 44u: goto L_003FC688;
    case 45u: goto L_003FC6B0;
    case 46u: goto L_003FC6E4;
    case 47u: goto L_003FC6FC;
    case 48u: goto L_003FC728;
    case 49u: goto L_003FC750;
    case 50u: goto L_003FC778;
    case 51u: goto L_003FC7A0;
    case 52u: goto L_003FC7D4;
    case 53u: goto L_003FC7F0;
    case 54u: goto L_003FC820;
    case 55u: goto L_003FC854;
    case 56u: goto L_003FC864;
    case 57u: goto L_003FC87C;
    case 58u: goto L_003FC890;
    case 59u: goto L_003FC900;
    case 60u: goto L_003FC940;
    case 61u: goto L_003FC980;
    case 62u: goto L_003FC9C0;
    case 63u: goto L_003FC9CC;
    case 64u: goto L_003FC9F0;
    case 65u: goto L_003FCA08;
    case 66u: goto L_003FCA20;
    case 67u: goto L_003FCA70;
    case 68u: goto L_003FCA9C;
    case 69u: goto L_003FCAB4;
    case 70u: goto L_003FCAC8;
    case 71u: goto L_003FCADC;
    case 72u: goto L_003FCB04;
    case 73u: goto L_003FCB18;
    case 74u: goto L_003FCB2C;
    case 75u: goto L_003FCB54;
    case 76u: goto L_003FCB68;
    case 77u: goto L_003FCB7C;
    case 78u: goto L_003FCBA0;
    case 79u: goto L_003FCBB8;
    case 80u: goto L_003FCBD0;
    case 81u: goto L_003FCBF0;
    case 82u: goto L_003FCBFC;
    case 83u: goto L_003FCC20;
    case 84u: goto L_003FCC44;
    case 85u: goto L_003FCC60;
    case 86u: goto L_003FCC84;
    case 87u: goto L_003FCC9C;
    case 88u: goto L_003FCCC0;
    case 89u: goto L_003FCCD0;
    case 90u: goto L_003FCCF4;
    case 91u: goto L_003FCD00;
    case 92u: goto L_003FCD10;
    case 93u: goto L_003FCD20;
    case 94u: goto L_003FCD30;
    case 95u: goto L_003FCD40;
    case 96u: goto L_003FCD88;
    case 97u: goto L_003FCD98;
    case 98u: goto L_003FCDD0;
    case 99u: goto L_003FCDDC;
    case 100u: goto L_003FCDF0;
    case 101u: goto L_003FCE00;
    case 102u: goto L_003FCE0C;
    case 103u: goto L_003FCE40;
    case 104u: goto L_003FCE4C;
    case 105u: goto L_003FCE60;
    case 106u: goto L_003FCE88;
    case 107u: goto L_003FCEA4;
    case 108u: goto L_003FCEC0;
    case 109u: goto L_003FCECC;
    case 110u: goto L_003FCF08;
    case 111u: goto L_003FCF34;
    case 112u: goto L_003FCF60;
    case 113u: goto L_003FCFA0;
    case 114u: goto L_003FCFB0;
    case 115u: goto L_003FCFE8;
    case 116u: goto L_003FCFF4;
    case 117u: goto L_003FD008;
    case 118u: goto L_003FD018;
    case 119u: goto L_003FD024;
    case 120u: goto L_003FD058;
    case 121u: goto L_003FD064;
    case 122u: goto L_003FD0A8;
    case 123u: goto L_003FD0C4;
    case 124u: goto L_003FD0E0;
    case 125u: goto L_003FD0EC;
    case 126u: goto L_003FD128;
    case 127u: goto L_003FD16C;
    case 128u: goto L_003FD190;
    case 129u: goto L_003FD1B4;
    case 130u: goto L_003FD1C0;
    case 131u: goto L_003FD1E4;
    case 132u: goto L_003FD1FC;
    case 133u: goto L_003FD244;
    case 134u: goto L_003FD258;
    case 135u: goto L_003FD270;
    case 136u: goto L_003FD290;
    case 137u: goto L_003FD2C4;
    case 138u: goto L_003FD2D4;
    case 139u: goto L_003FD304;
    case 140u: goto L_003FD31C;
    case 141u: goto L_003FD32C;
    case 142u: goto L_003FD334;
    case 143u: goto L_003FD33C;
    case 144u: goto L_003FD34C;
    case 145u: goto L_003FD358;
    case 146u: goto L_003FD370;
    case 147u: goto L_003FD37C;
    case 148u: goto L_003FD394;
    case 149u: goto L_003FD39C;
    case 150u: goto L_003FD3A4;
    case 151u: goto L_003FD3AC;
    case 152u: goto L_003FD3B8;
    case 153u: goto L_003FD3C4;
    case 154u: goto L_003FD3C8;
    case 155u: goto L_003FD3D8;
    case 156u: goto L_003FD3E4;
    case 157u: goto L_003FD400;
    case 158u: goto L_003FD40C;
    case 159u: goto L_003FD424;
    case 160u: goto L_003FD43C;
    case 161u: goto L_003FD474;
    case 162u: goto L_003FD4A4;
    case 163u: goto L_003FD4C8;
    case 164u: goto L_003FD4DC;
    case 165u: goto L_003FD4F0;
    case 166u: goto L_003FD504;
    case 167u: goto L_003FD524;
    case 168u: goto L_003FD530;
    case 169u: goto L_003FD578;
    case 170u: goto L_003FD5B4;
    case 171u: goto L_003FD5C0;
    case 172u: goto L_003FD5D0;
    case 173u: goto L_003FD600;
    case 174u: goto L_003FD610;
    case 175u: goto L_003FD61C;
    case 176u: goto L_003FD688;
    case 177u: goto L_003FD6C4;
    case 178u: goto L_003FD6D0;
    case 179u: goto L_003FD6E0;
    case 180u: goto L_003FD70C;
    case 181u: goto L_003FD71C;
    case 182u: goto L_003FD728;
    case 183u: goto L_003FD734;
    case 184u: goto L_003FD760;
    case 185u: goto L_003FD790;
    case 186u: goto L_003FD7A4;
    case 187u: goto L_003FD7B8;
    case 188u: goto L_003FD7D4;
    case 189u: goto L_003FD7E0;
    case 190u: goto L_003FD7F4;
    case 191u: goto L_003FD810;
    case 192u: goto L_003FD81C;
    case 193u: goto L_003FD830;
    case 194u: goto L_003FD838;
    case 195u: goto L_003FD864;
    case 196u: goto L_003FD880;
    case 197u: goto L_003FD88C;
    case 198u: goto L_003FD8A8;
    case 199u: goto L_003FD8CC;
    case 200u: goto L_003FD958;
    case 201u: goto L_003FD974;
    case 202u: goto L_003FD980;
    case 203u: goto L_003FD99C;
    case 204u: goto L_003FD9B8;
    case 205u: goto L_003FD9C4;
    case 206u: goto L_003FD9DC;
    case 207u: goto L_003FD9E8;
    case 208u: goto L_003FD9F8;
    case 209u: goto L_003FDA04;
    case 210u: goto L_003FDA20;
    case 211u: goto L_003FDA30;
    case 212u: goto L_003FDA4C;
    case 213u: goto L_003FDA5C;
    case 214u: goto L_003FDA6C;
    case 215u: goto L_003FDA80;
    case 216u: goto L_003FDAD4;
    case 217u: goto L_003FDAEC;
    case 218u: goto L_003FDB10;
    case 219u: goto L_003FDB34;
    case 220u: goto L_003FDB58;
    case 221u: goto L_003FDB68;
    case 222u: goto L_003FDB74;
    case 223u: goto L_003FDB98;
    case 224u: goto L_003FDBA8;
    case 225u: goto L_003FDBB4;
    case 226u: goto L_003FDBE0;
    case 227u: goto L_003FDBF4;
    case 228u: goto L_003FDC08;
    case 229u: goto L_003FDC28;
    case 230u: goto L_003FDC38;
    case 231u: goto L_003FDC60;
    case 232u: goto L_003FDC98;
    case 233u: goto L_003FDCB0;
    case 234u: goto L_003FDCD8;
    case 235u: goto L_003FDCE4;
    case 236u: goto L_003FDCEC;
    case 237u: goto L_003FDD10;
    case 238u: goto L_003FDD30;
    case 239u: goto L_003FDD64;
    case 240u: goto L_003FDD7C;
    case 241u: goto L_003FDD98;
    case 242u: goto L_003FDE34;
    case 243u: goto L_003FDE60;
    case 244u: goto L_003FDE98;
    case 245u: goto L_003FDEB0;
    case 246u: goto L_003FDED8;
    case 247u: goto L_003FDEE4;
    case 248u: goto L_003FDEEC;
    case 249u: goto L_003FDF10;
    case 250u: goto L_003FDF30;
    case 251u: goto L_003FDF64;
    case 252u: goto L_003FDF7C;
    case 253u: goto L_003FDF98;
    case 254u: goto L_003FE034;
    case 255u: goto L_003FE060;
    case 256u: goto L_003FE0A4;
    case 257u: goto L_003FE0B0;
    case 258u: goto L_003FE0EC;
    case 259u: goto L_003FE100;
    case 260u: goto L_003FE11C;
    case 261u: goto L_003FE144;
    case 262u: goto L_003FE170;
    case 263u: goto L_003FE1C0;
    case 264u: goto L_003FE1D8;
    case 265u: goto L_003FE1F0;
    case 266u: goto L_003FE224;
    case 267u: goto L_003FE22C;
    case 268u: goto L_003FE25C;
    case 269u: goto L_003FE290;
    case 270u: goto L_003FE2D4;
    case 271u: goto L_003FE2E0;
    case 272u: goto L_003FE31C;
    case 273u: goto L_003FE330;
    case 274u: goto L_003FE34C;
    case 275u: goto L_003FE374;
    case 276u: goto L_003FE3A0;
    case 277u: goto L_003FE3F0;
    case 278u: goto L_003FE408;
    case 279u: goto L_003FE420;
    case 280u: goto L_003FE454;
    case 281u: goto L_003FE45C;
    case 282u: goto L_003FE48C;
    case 283u: goto L_003FE4C0;
    case 284u: goto L_003FE508;
    case 285u: goto L_003FE51C;
    case 286u: goto L_003FE528;
    case 287u: goto L_003FE534;
    case 288u: goto L_003FE53C;
    case 289u: goto L_003FE54C;
    case 290u: goto L_003FE56C;
    case 291u: goto L_003FE580;
    case 292u: goto L_003FE58C;
    case 293u: goto L_003FE598;
    case 294u: goto L_003FE5A0;
    case 295u: goto L_003FE5B0;
    case 296u: goto L_003FE5BC;
    case 297u: goto L_003FE5C8;
    case 298u: goto L_003FE5D0;
    case 299u: goto L_003FE5E0;
    case 300u: goto L_003FE60C;
    case 301u: goto L_003FE620;
    case 302u: goto L_003FE62C;
    case 303u: goto L_003FE638;
    case 304u: goto L_003FE640;
    case 305u: goto L_003FE650;
    case 306u: goto L_003FE670;
    case 307u: goto L_003FE684;
    case 308u: goto L_003FE690;
    case 309u: goto L_003FE69C;
    case 310u: goto L_003FE6A4;
    case 311u: goto L_003FE6B4;
    case 312u: goto L_003FE6C0;
    case 313u: goto L_003FE6CC;
    case 314u: goto L_003FE6D4;
    case 315u: goto L_003FE6E4;
    case 316u: goto L_003FE724;
    case 317u: goto L_003FE734;
    case 318u: goto L_003FE750;
    case 319u: goto L_003FE764;
    case 320u: goto L_003FE770;
    case 321u: goto L_003FE780;
    case 322u: goto L_003FE7C0;
    case 323u: goto L_003FE7D0;
    case 324u: goto L_003FE7E0;
    case 325u: goto L_003FE800;
    case 326u: goto L_003FE820;
    case 327u: goto L_003FE850;
    case 328u: goto L_003FE898;
    case 329u: goto L_003FE8AC;
    case 330u: goto L_003FE8B8;
    case 331u: goto L_003FE8C4;
    case 332u: goto L_003FE8CC;
    case 333u: goto L_003FE8DC;
    case 334u: goto L_003FE8FC;
    case 335u: goto L_003FE910;
    case 336u: goto L_003FE91C;
    case 337u: goto L_003FE928;
    case 338u: goto L_003FE930;
    case 339u: goto L_003FE940;
    case 340u: goto L_003FE94C;
    case 341u: goto L_003FE958;
    case 342u: goto L_003FE960;
    case 343u: goto L_003FE970;
    case 344u: goto L_003FE99C;
    case 345u: goto L_003FE9B0;
    case 346u: goto L_003FE9BC;
    case 347u: goto L_003FE9C8;
    case 348u: goto L_003FE9D0;
    case 349u: goto L_003FE9E0;
    case 350u: goto L_003FEA00;
    case 351u: goto L_003FEA14;
    case 352u: goto L_003FEA20;
    case 353u: goto L_003FEA2C;
    case 354u: goto L_003FEA34;
    case 355u: goto L_003FEA44;
    case 356u: goto L_003FEA50;
    case 357u: goto L_003FEA5C;
    case 358u: goto L_003FEA64;
    case 359u: goto L_003FEA74;
    case 360u: goto L_003FEAB4;
    case 361u: goto L_003FEAC4;
    case 362u: goto L_003FEAE0;
    case 363u: goto L_003FEAF4;
    case 364u: goto L_003FEB00;
    case 365u: goto L_003FEB10;
    case 366u: goto L_003FEB50;
    case 367u: goto L_003FEB60;
    case 368u: goto L_003FEB70;
    case 369u: goto L_003FEB90;
    case 370u: goto L_003FEBB0;
    case 371u: goto L_003FEBE0;
    case 372u: goto L_003FEC3C;
    case 373u: goto L_003FEC44;
    case 374u: goto L_003FEC50;
    case 375u: goto L_003FEC6C;
    case 376u: goto L_003FECB4;
    case 377u: goto L_003FECF0;
    case 378u: goto L_003FED4C;
    case 379u: goto L_003FED54;
    case 380u: goto L_003FED60;
    case 381u: goto L_003FED7C;
    case 382u: goto L_003FEDC4;
    case 383u: goto L_003FEE00;
    case 384u: goto L_003FEE30;
    case 385u: goto L_003FEE48;
    case 386u: goto L_003FEE60;
    case 387u: goto L_003FEE70;
    case 388u: goto L_003FEE80;
    case 389u: goto L_003FEE90;
    case 390u: goto L_003FEEAC;
    case 391u: goto L_003FEED0;
    case 392u: goto L_003FEF28;
    case 393u: goto L_003FEF40;
    case 394u: goto L_003FEF60;
    case 395u: goto L_003FEFA0;
    case 396u: goto L_003FEFB0;
    case 397u: goto L_003FEFD8;
    case 398u: goto L_003FEFE8;
    case 399u: goto L_003FEFFC;
    case 400u: goto L_003FF010;
    case 401u: goto L_003FF030;
    case 402u: goto L_003FF03C;
    case 403u: goto L_003FF044;
    case 404u: goto L_003FF08C;
    case 405u: goto L_003FF098;
    case 406u: goto L_003FF0B0;
    case 407u: goto L_003FF0C0;
    case 408u: goto L_003FF0D8;
    case 409u: goto L_003FF0E4;
    case 410u: goto L_003FF0F0;
    case 411u: goto L_003FF110;
    case 412u: goto L_003FF120;
    case 413u: goto L_003FF138;
    case 414u: goto L_003FF144;
    case 415u: goto L_003FF14C;
    case 416u: goto L_003FF194;
    case 417u: goto L_003FF1A0;
    case 418u: goto L_003FF1B8;
    case 419u: goto L_003FF1C8;
    case 420u: goto L_003FF1E0;
    case 421u: goto L_003FF1EC;
    case 422u: goto L_003FF1F8;
    case 423u: goto L_003FF218;
    case 424u: goto L_003FF228;
    case 425u: goto L_003FF24C;
    case 426u: goto L_003FF270;
    case 427u: goto L_003FF29C;
    case 428u: goto L_003FF2B4;
    case 429u: goto L_003FF2D0;
    case 430u: goto L_003FF308;
    case 431u: goto L_003FF31C;
    case 432u: goto L_003FF328;
    case 433u: goto L_003FF340;
    case 434u: goto L_003FF360;
    case 435u: goto L_003FF388;
    case 436u: goto L_003FF3E4;
    case 437u: goto L_003FF3F0;
    case 438u: goto L_003FF404;
    case 439u: goto L_003FF424;
    case 440u: goto L_003FF438;
    case 441u: goto L_003FF450;
    case 442u: goto L_003FF488;
    case 443u: goto L_003FF498;
    case 444u: goto L_003FF4A8;
    case 445u: goto L_003FF4B4;
    case 446u: goto L_003FF4F8;
    case 447u: goto L_003FF514;
    case 448u: goto L_003FF520;
    case 449u: goto L_003FF530;
    case 450u: goto L_003FF544;
    case 451u: goto L_003FF54C;
    case 452u: goto L_003FF558;
    case 453u: goto L_003FF564;
    case 454u: goto L_003FF574;
    case 455u: goto L_003FF580;
    case 456u: goto L_003FF590;
    case 457u: goto L_003FF5A8;
    case 458u: goto L_003FF5B4;
    case 459u: goto L_003FF5C0;
    case 460u: goto L_003FF5CC;
    case 461u: goto L_003FF5F0;
    case 462u: goto L_003FF628;
    case 463u: goto L_003FF684;
    case 464u: goto L_003FF6A8;
    case 465u: goto L_003FF6B8;
    case 466u: goto L_003FF6E0;
    case 467u: goto L_003FF740;
    case 468u: goto L_003FF774;
    case 469u: goto L_003FF788;
    case 470u: goto L_003FF790;
    case 471u: goto L_003FF7A0;
    case 472u: goto L_003FF7B0;
    case 473u: goto L_003FF7E0;
    case 474u: goto L_003FF7F4;
    case 475u: goto L_003FF804;
    case 476u: goto L_003FF810;
    case 477u: goto L_003FF818;
    case 478u: goto L_003FF820;
    case 479u: goto L_003FF850;
    case 480u: goto L_003FF878;
    case 481u: goto L_003FF8A4;
    case 482u: goto L_003FF8CC;
    case 483u: goto L_003FF8F4;
    case 484u: goto L_003FF910;
    case 485u: goto L_003FF934;
    case 486u: goto L_003FF950;
    case 487u: goto L_003FF974;
    case 488u: goto L_003FF98C;
    case 489u: goto L_003FF9B0;
    case 490u: goto L_003FF9C0;
    case 491u: goto L_003FF9E4;
    case 492u: goto L_003FF9F0;
    case 493u: goto L_003FFA00;
    case 494u: goto L_003FFA4C;
    case 495u: goto L_003FFA60;
    case 496u: goto L_003FFA6C;
    case 497u: goto L_003FFA84;
    case 498u: goto L_003FFAA0;
    case 499u: goto L_003FFAB0;
    case 500u: goto L_003FFAE4;
    case 501u: goto L_003FFAEC;
    case 502u: goto L_003FFB1C;
    case 503u: goto L_003FFB50;
    case 504u: goto L_003FFB98;
    case 505u: goto L_003FFBAC;
    case 506u: goto L_003FFBB8;
    case 507u: goto L_003FFBC4;
    case 508u: goto L_003FFBCC;
    case 509u: goto L_003FFBDC;
    case 510u: goto L_003FFBFC;
    case 511u: goto L_003FFC10;
    case 512u: goto L_003FFC1C;
    case 513u: goto L_003FFC28;
    case 514u: goto L_003FFC30;
    case 515u: goto L_003FFC40;
    case 516u: goto L_003FFC4C;
    case 517u: goto L_003FFC58;
    case 518u: goto L_003FFC60;
    case 519u: goto L_003FFC70;
    case 520u: goto L_003FFC9C;
    case 521u: goto L_003FFCB0;
    case 522u: goto L_003FFCBC;
    case 523u: goto L_003FFCC8;
    case 524u: goto L_003FFCD0;
    case 525u: goto L_003FFCE0;
    case 526u: goto L_003FFD00;
    case 527u: goto L_003FFD14;
    case 528u: goto L_003FFD20;
    case 529u: goto L_003FFD2C;
    case 530u: goto L_003FFD34;
    case 531u: goto L_003FFD44;
    case 532u: goto L_003FFD50;
    case 533u: goto L_003FFD5C;
    case 534u: goto L_003FFD64;
    case 535u: goto L_003FFD74;
    case 536u: goto L_003FFDB4;
    case 537u: goto L_003FFDC4;
    case 538u: goto L_003FFDE0;
    case 539u: goto L_003FFDF4;
    case 540u: goto L_003FFE00;
    case 541u: goto L_003FFE10;
    case 542u: goto L_003FFE50;
    case 543u: goto L_003FFE60;
    case 544u: goto L_003FFE70;
    case 545u: goto L_003FFE90;
    case 546u: goto L_003FFEB0;
    case 547u: goto L_003FFEE4;
    case 548u: goto L_003FFF08;
    case 549u: goto L_003FFF3C;
    case 550u: goto L_003FFF7C;
    case 551u: goto L_003FFF8C;
    case 552u: goto L_003FFFB0;
    case 553u: goto L_003FFFFC;
    default: bad_entry(c, 0x003FC000u); return;
    }
L_003FC000:
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 1;
L_003FC004:
    set32(c.r[2], ld32((c.r[29].w[0] + 1052u)));
    c.budget -= 1;
L_003FC008:
    set32(c.r[3], 0u + 2u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC018u); st64((c.r[2].w[0] + 72u), c.r[3].d[0]);  if (depth < kMaxDepth) unit_000E(c, 59u, depth + 1u); else { c.pc = 0x00138D10u; return; } if (c.pc != 0x003FC018u) [[unlikely]] return; }
L_003FC018:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC028u); set32(c.r[5], c.r[5].w[0] - 3935u);  if (depth < kMaxDepth) unit_00AE(c, 282u, depth + 1u); else { c.pc = 0x003BAAB0u; return; } if (c.pc != 0x003FC028u) [[unlikely]] return; }
L_003FC028:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC034u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 59u, depth + 1u); else { c.pc = 0x00138D10u; return; } if (c.pc != 0x003FC034u) [[unlikely]] return; }
L_003FC034:
    c.budget -= 2;
    if (c.r[20].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_003FC04C; }
    set32(c.r[3], ld32((c.r[29].w[0] + 1052u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st64((c.r[3].w[0] + 64u), c.r[2].d[0]);  if (t) { goto L_003FC0D0; } }
L_003FC04C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC054u);  if (depth < kMaxDepth) unit_000E(c, 59u, depth + 1u); else { c.pc = 0x00138D10u; return; } if (c.pc != 0x003FC054u) [[unlikely]] return; }
L_003FC054:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC064u); set32(c.r[5], c.r[5].w[0] - 3929u);  if (depth < kMaxDepth) unit_00AE(c, 282u, depth + 1u); else { c.pc = 0x003BAAB0u; return; } if (c.pc != 0x003FC064u) [[unlikely]] return; }
L_003FC064:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC070u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 59u, depth + 1u); else { c.pc = 0x00138D10u; return; } if (c.pc != 0x003FC070u) [[unlikely]] return; }
L_003FC070:
    c.budget -= 2;
    if (c.r[20].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_003FC088; }
    set32(c.r[3], ld32((c.r[29].w[0] + 1052u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st64((c.r[3].w[0] + 64u), c.r[2].d[0]);  if (t) { goto L_003FC0D0; } }
L_003FC088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC090u);  if (depth < kMaxDepth) unit_000E(c, 59u, depth + 1u); else { c.pc = 0x00138D10u; return; } if (c.pc != 0x003FC090u) [[unlikely]] return; }
L_003FC090:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC0A0u); set32(c.r[5], c.r[5].w[0] - 3920u);  if (depth < kMaxDepth) unit_00AE(c, 282u, depth + 1u); else { c.pc = 0x003BAAB0u; return; } if (c.pc != 0x003FC0A0u) [[unlikely]] return; }
L_003FC0A0:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC0ACu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 59u, depth + 1u); else { c.pc = 0x00138D10u; return; } if (c.pc != 0x003FC0ACu) [[unlikely]] return; }
L_003FC0AC:
    c.budget -= 2;
    if (c.r[20].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 1052u)));  goto L_003FC0C8; }
    set32(c.r[3], ld32((c.r[29].w[0] + 1052u)));
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[2].d[0] = c.r[2].d[0] << 16;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st64((c.r[3].w[0] + 64u), c.r[2].d[0]);  if (t) { goto L_003FC0D0; } }
L_003FC0C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st64((c.r[3].w[0] + 64u), c.r[2].d[0]);
    c.budget -= 2;
L_003FC0D0:
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[20], ld32((c.r[29].w[0] + 1052u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 72u)));  goto L_003FC138; }
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[20].w[0] + 80u)));  goto L_003FC118; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC104u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0089(c, 223u, depth + 1u); else { c.pc = 0x003279D0u; return; } if (c.pc != 0x003FC104u) [[unlikely]] return; }
L_003FC104:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[20].w[0] + 80u)));
    c.budget -= 5;
L_003FC118:
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC124u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FC124u) [[unlikely]] return; }
L_003FC124:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], 0u - 5u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 72u)));
    c.budget -= 5;
L_003FC138:
    set32(c.r[4], c.r[19].w[0] + 64u);
    set32(c.r[2], ld32((c.r[19].w[0] + 76u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 1052u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC154u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x003FC154u) [[unlikely]] return; }
L_003FC154:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_003FC1B4; }
    c.r[4].d[0] = ld8((c.r[19].w[0] + 8u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC168u); st32((c.r[29].w[0] + 1028u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003FC168u) [[unlikely]] return; }
L_003FC168:
    st32((c.r[29].w[0] + 1024u), c.r[2].w[0]);
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC17Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0060(c, 582u, depth + 1u); else { c.pc = 0x00283C30u; return; } if (c.pc != 0x003FC17Cu) [[unlikely]] return; }
L_003FC17C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC184u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 529u, depth + 1u); else { c.pc = 0x002836E0u; return; } if (c.pc != 0x003FC184u) [[unlikely]] return; }
L_003FC184:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC18Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 474u, depth + 1u); else { c.pc = 0x00283090u; return; } if (c.pc != 0x003FC18Cu) [[unlikely]] return; }
L_003FC18C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 260u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC1A8u); set32(c.r[6], c.r[6].w[0] - 3913u);  if (depth < kMaxDepth) unit_00C9(c, 83u, depth + 1u); else { c.pc = 0x00424A30u; return; } if (c.pc != 0x003FC1A8u) [[unlikely]] return; }
L_003FC1A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC1B0u); set32(c.r[4], ld32((c.r[29].w[0] + 1024u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x003FC1B0u) [[unlikely]] return; }
L_003FC1B0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_003FC1B4:
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FB730u | kUnwind; return; } [[clang::musttail]] return unit_00BE(c, 359u, depth); }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 208u));
    c.f[31] = ld32((c.r[29].w[0] + 108u));
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[21]);
    c.f[30] = ld32((c.r[29].w[0] + 104u));
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[20]);
    c.f[29] = ld32((c.r[29].w[0] + 100u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    c.f[28] = ld32((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    c.f[27] = ld32((c.r[29].w[0] + 92u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.f[26] = ld32((c.r[29].w[0] + 88u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.f[25] = ld32((c.r[29].w[0] + 84u));
    c.f[24] = ld32((c.r[29].w[0] + 80u));
    c.f[23] = ld32((c.r[29].w[0] + 76u));
    c.f[22] = ld32((c.r[29].w[0] + 72u));
    c.f[21] = ld32((c.r[29].w[0] + 68u));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1056u);  c.pc = t; return; }
L_003FC220:
    c.f[2] = ld32((c.r[4].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[5].w[0]), c.f[0]);
    st32((c.r[5].w[0] + 4u), c.f[1]);
    st32((c.r[5].w[0] + 8u), c.f[2]);
    st32((c.r[5].w[0] + 12u), 0u);
    c.f[2] = ld32((c.r[4].w[0] + 24u));
    c.f[1] = ld32((c.r[4].w[0] + 20u));
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    st32((c.r[5].w[0] + 16u), c.f[0]);
    st32((c.r[5].w[0] + 20u), c.f[1]);
    st32((c.r[5].w[0] + 24u), c.f[2]);
    st32((c.r[5].w[0] + 28u), 0u);
    c.f[2] = ld32((c.r[4].w[0] + 40u));
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    st32((c.r[5].w[0] + 32u), c.f[0]);
    st32((c.r[5].w[0] + 36u), c.f[1]);
    st32((c.r[5].w[0] + 40u), c.f[2]);
    st32((c.r[5].w[0] + 44u), 0u);
    c.f[0] = ld32((c.r[4].w[0] + 48u));
    st32((c.r[5].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    st32((c.r[5].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 56u));
    st32((c.r[5].w[0] + 56u), c.f[0]);
    c.budget -= 30;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 60u), c.r[3].w[0]);  c.pc = t; return; }
L_003FC2A0:
    c.f[2] = ld32((c.r[5].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 48u), c.f[2]);
    st32((c.r[4].w[0] + 52u), c.f[1]);
    st32((c.r[4].w[0] + 56u), c.f[0]);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 60u), c.r[3].w[0]);  c.pc = t; return; }
L_003FC300:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[1] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[0] = c.f[1];
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[22] = c.f[12];
    st32((c.r[29].w[0] + 4u), c.f[21]);
    fpu_compare(c, fp::key(c.f[22]) == fp::key(c.f[1]));
    st32((c.r[29].w[0]), c.f[20]);
    c.f[21] = c.r[3].w[0];
    c.budget -= 15;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[20] = c.f[21];  if (t) { goto L_003FC358; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC344u);  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x003FC344u) [[unlikely]] return; }
L_003FC344:
    c.f[12] = c.f[22];
    c.f[20] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC354u); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 406u, depth + 1u); else { c.pc = 0x003AF510u; return; } if (c.pc != 0x003FC354u) [[unlikely]] return; }
L_003FC354:
    c.f[1] = c.f[0] ^ fp::kSign;
    c.budget -= 1;
L_003FC358:
    st32((c.r[16].w[0]), c.f[21]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), c.f[1]);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 40u), c.f[20]);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FC3C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[1] = c.f[0];
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[22] = c.f[12];
    st32((c.r[29].w[0] + 4u), c.f[21]);
    fpu_compare(c, fp::key(c.f[22]) == fp::key(c.f[0]));
    st32((c.r[29].w[0]), c.f[20]);
    c.f[21] = c.r[3].w[0];
    c.budget -= 15;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[20] = c.f[21];  if (t) { goto L_003FC418; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC404u);  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x003FC404u) [[unlikely]] return; }
L_003FC404:
    c.f[12] = c.f[22];
    c.f[20] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC414u); c.f[21] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 406u, depth + 1u); else { c.pc = 0x003AF510u; return; } if (c.pc != 0x003FC414u) [[unlikely]] return; }
L_003FC414:
    c.f[1] = c.f[0] ^ fp::kSign;
    c.budget -= 1;
L_003FC418:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 20u), c.f[21]);
    st32((c.r[16].w[0] + 24u), c.f[0]);
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), c.f[1]);
    st32((c.r[16].w[0] + 40u), c.f[20]);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FC480:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[3], 0u + 292u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[4].d[0] = c.r[5].d[0] & 65535ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 14;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_003FC7F0; } }
    set32(c.r[2], 0u + 52u);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    mmi::divu(c, 0, c.r[7].w[0], c.r[2].w[0]);
    c.r[23].d[0] = c.lo.d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003FC7DC; } }
L_003FC4D0:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[16], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC4F0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 358u, depth + 1u); else { c.pc = 0x003FB6C0u; return; } if (c.pc != 0x003FC4F0u) [[unlikely]] return; }
L_003FC4F0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 8u)));  goto L_003FC50C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC504u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003FC504u) [[unlikely]] return; }
L_003FC504:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 2;
L_003FC50C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[20], c.r[16].w[0] + 8u);  if (t) { goto L_003FC580; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_003FC558; } }
L_003FC51C:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    set32(c.r[19], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 9;
    if (c.r[4].d[0] == 0ull) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_003FC558; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC548u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003FC548u) [[unlikely]] return; }
L_003FC548:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 4;
L_003FC558:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[21].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[21].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC51Cu | kUnwind; return; } goto L_003FC51C; }
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 16u)));  goto L_003FC584; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC57Cu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003FC57Cu) [[unlikely]] return; }
L_003FC57C:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_003FC580:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_003FC584:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[20], c.r[16].w[0] + 16u);  if (t) { goto L_003FC6E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_003FC6C0; } }
L_003FC594:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[4], c.r[3].w[0] + c.r[21].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[19], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 9;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 16u)));  goto L_003FC5D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC5C0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003FC5C0u) [[unlikely]] return; }
L_003FC5C0:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 4;
L_003FC5D0:
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 16u)));  goto L_003FC5F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC5E8u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003FC5E8u) [[unlikely]] return; }
L_003FC5E8:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 4;
L_003FC5F8:
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 16u)));  goto L_003FC620; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC610u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003FC610u) [[unlikely]] return; }
L_003FC610:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 20u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 4;
L_003FC620:
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 16u)));  goto L_003FC648; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC638u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003FC638u) [[unlikely]] return; }
L_003FC638:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 4;
L_003FC648:
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 16u)));  goto L_003FC670; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC660u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003FC660u) [[unlikely]] return; }
L_003FC660:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 36u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 4;
L_003FC670:
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 16u)));  goto L_003FC698; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC688u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003FC688u) [[unlikely]] return; }
L_003FC688:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 52u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 4;
L_003FC698:
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_003FC6C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC6B0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003FC6B0u) [[unlikely]] return; }
L_003FC6B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 44u), 0u);
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 4;
L_003FC6C0:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[2].d[0] = c.r[21].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[21].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC594u | kUnwind; return; } goto L_003FC594; }
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 24u)));  goto L_003FC6EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC6E4u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003FC6E4u) [[unlikely]] return; }
L_003FC6E4:
    st32((c.r[16].w[0] + 16u), 0u);
    c.budget -= 1;
L_003FC6E8:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 1;
L_003FC6EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[20], c.r[16].w[0] + 24u);  if (t) { goto L_003FC7D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_003FC7B0; } }
L_003FC6FC:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    set32(c.r[19], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 9;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 24u)));  goto L_003FC738; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC728u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003FC728u) [[unlikely]] return; }
L_003FC728:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 4;
L_003FC738:
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 24u)));  goto L_003FC760; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC750u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003FC750u) [[unlikely]] return; }
L_003FC750:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 4;
L_003FC760:
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 24u)));  goto L_003FC788; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC778u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003FC778u) [[unlikely]] return; }
L_003FC778:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 4;
L_003FC788:
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_003FC7B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC7A0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003FC7A0u) [[unlikely]] return; }
L_003FC7A0:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 4;
L_003FC7B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = c.r[21].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[21].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC6FCu | kUnwind; return; } goto L_003FC6FC; }
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_003FC7DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC7D4u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003FC7D4u) [[unlikely]] return; }
L_003FC7D4:
    st32((c.r[16].w[0] + 24u), 0u);
    c.budget -= 1;
L_003FC7D8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_003FC7DC:
    c.r[2].d[0] = c.r[17].d[0] < c.r[23].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC4D0u | kUnwind; return; } goto L_003FC4D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC7F0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003FC7F0u) [[unlikely]] return; }
L_003FC7F0:
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
L_003FC820:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FC83C; } }
    set32(c.r[7], c.r[7].w[0] + 32u);
    c.budget -= 1;
L_003FC83C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[16].w[0] + 36u);
    set32(c.r[6], c.r[6].w[0] - 6112u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC854u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 231u, depth + 1u); else { c.pc = 0x00102E60u; return; } if (c.pc != 0x003FC854u) [[unlikely]] return; }
L_003FC854:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_003FC880; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC864u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 59u, depth + 1u); else { c.pc = 0x00138D10u; return; } if (c.pc != 0x003FC864u) [[unlikely]] return; }
L_003FC864:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC87Cu); set32(c.r[6], c.r[6].w[0] - 3898u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003FC87Cu) [[unlikely]] return; }
L_003FC87C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FC880:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FC890:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FCA08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 23792u);
    set32(c.r[3], c.r[3].w[0] + 23864u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[17].w[0] + 112u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 32u), c.r[3].w[0]);  if (t) { goto L_003FC900; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 96u);  goto L_003FC904; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FC900; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FC900; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FC900; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FC900; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC900u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003FC900u) [[unlikely]] return; }
L_003FC900:
    set32(c.r[2], c.r[17].w[0] + 96u);
    c.budget -= 1;
L_003FC904:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 80u);  goto L_003FC944; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FC940; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FC940; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FC940; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FC940; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FC940; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC940u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003FC940u) [[unlikely]] return; }
L_003FC940:
    set32(c.r[2], c.r[17].w[0] + 80u);
    c.budget -= 1;
L_003FC944:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 64u);  goto L_003FC984; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FC980; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FC980; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FC980; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FC980; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FC980; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC980u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003FC980u) [[unlikely]] return; }
L_003FC980:
    set32(c.r[2], c.r[17].w[0] + 64u);
    c.budget -= 1;
L_003FC984:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 36u);  goto L_003FC9C4; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FC9C0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FC9C0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FC9C0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FC9C0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FC9C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC9C0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003FC9C0u) [[unlikely]] return; }
L_003FC9C0:
    set32(c.r[4], c.r[17].w[0] + 36u);
    c.budget -= 1;
L_003FC9C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC9CCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x003FC9CCu) [[unlikely]] return; }
L_003FC9CC:
    set32(c.r[2], c.r[17].w[0] + 32u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003FC9E8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27888u);
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
L_003FC9E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC9F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 69u, depth + 1u); else { c.pc = 0x00138E80u; return; } if (c.pc != 0x003FC9F0u) [[unlikely]] return; }
L_003FC9F0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003FCA0C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCA08u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003FCA08u) [[unlikely]] return; }
L_003FCA08:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FCA0C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FCA20:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003FCA5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[6].w[0] + 8u)));  if (t) { goto L_003FCA60; } }
L_003FCA5C:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_003FCA60:
    c.r[7].d[0] = c.r[8].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCA70u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 74u, depth + 1u); else { c.pc = 0x00138F30u; return; } if (c.pc != 0x003FCA70u) [[unlikely]] return; }
L_003FCA70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27888u);
    set32(c.r[3], c.r[3].w[0] + 23792u);
    st32((c.r[18].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[4], c.r[18].w[0] + 36u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 23864u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCA9Cu); st32((c.r[18].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000A(c, 395u, depth + 1u); else { c.pc = 0x0012B2D0u; return; } if (c.pc != 0x003FCA9Cu) [[unlikely]] return; }
L_003FCA9C:
    set32(c.r[3], 0u - 1u);
    set32(c.r[20], c.r[18].w[0] + 64u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003FCADC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCAB4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x003FCAB4u) [[unlikely]] return; }
L_003FCAB4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_003FCACC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCAC8u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x003FCAC8u) [[unlikely]] return; }
L_003FCAC8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_003FCACC:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[20].w[0]), c.r[2].w[0]);  goto L_003FCAE0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCADCu);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x003FCADCu) [[unlikely]] return; }
L_003FCADC:
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003FCAE0:
    set32(c.r[3], 0u - 1u);
    st32((c.r[20].w[0] + 4u), 0u);
    set32(c.r[19], c.r[18].w[0] + 80u);
    st32((c.r[20].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; st32((c.r[20].w[0] + 12u), 0u);  if (t) { goto L_003FCB2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCB04u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x003FCB04u) [[unlikely]] return; }
L_003FCB04:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_003FCB1C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCB18u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x003FCB18u) [[unlikely]] return; }
L_003FCB18:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_003FCB1C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[19].w[0]), c.r[2].w[0]);  goto L_003FCB30; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCB2Cu);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x003FCB2Cu) [[unlikely]] return; }
L_003FCB2C:
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003FCB30:
    set32(c.r[3], 0u - 1u);
    st32((c.r[19].w[0] + 4u), 0u);
    set32(c.r[20], c.r[18].w[0] + 96u);
    st32((c.r[19].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; st32((c.r[19].w[0] + 12u), 0u);  if (t) { goto L_003FCB7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCB54u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x003FCB54u) [[unlikely]] return; }
L_003FCB54:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_003FCB6C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCB68u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x003FCB68u) [[unlikely]] return; }
L_003FCB68:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_003FCB6C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[20].w[0]), c.r[2].w[0]);  goto L_003FCB80; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCB7Cu);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x003FCB7Cu) [[unlikely]] return; }
L_003FCB7C:
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003FCB80:
    set32(c.r[19], c.r[18].w[0] + 112u);
    st32((c.r[20].w[0] + 4u), 0u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[20].w[0] + 8u), 0u);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; st32((c.r[20].w[0] + 12u), 0u);  if (t) { goto L_003FCBD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCBA0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x003FCBA0u) [[unlikely]] return; }
L_003FCBA0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_003FCBC0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCBB8u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x003FCBB8u) [[unlikely]] return; }
L_003FCBB8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_003FCBC0:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[2].d[0]) { st32((c.r[19].w[0]), c.r[17].w[0]);  goto L_003FCBD8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCBD0u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x003FCBD0u) [[unlikely]] return; }
L_003FCBD0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003FCBD4:
    st32((c.r[19].w[0]), c.r[17].w[0]);
    c.budget -= 1;
L_003FCBD8:
    set32(c.r[4], c.r[18].w[0] + 64u);
    st32((c.r[19].w[0] + 4u), 0u);
    set32(c.r[5], 0u + 8u);
    st32((c.r[19].w[0] + 8u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCBF0u); st32((c.r[19].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x003FCBF0u) [[unlikely]] return; }
L_003FCBF0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCBFCu); set32(c.r[4], c.r[18].w[0] + 36u);  if (depth < kMaxDepth) unit_000A(c, 320u, depth + 1u); else { c.pc = 0x0012ABA0u; return; } if (c.pc != 0x003FCBFCu) [[unlikely]] return; }
L_003FCBFC:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003FCC20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30356u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_003FCC3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003FCC4C; } }
L_003FCC3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCC44u);  if (depth < kMaxDepth) unit_000E(c, 80u, depth + 1u); else { c.pc = 0x00138FF0u; return; } if (c.pc != 0x003FCC44u) [[unlikely]] return; }
L_003FCC44:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003FCC4C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FCC60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCC84u); set32(c.r[4], c.r[4].w[0] - 4144u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x003FCC84u) [[unlikely]] return; }
L_003FCC84:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003FCC94; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003FCCA4; } }
L_003FCC94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCC9Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 82u, depth + 1u); else { c.pc = 0x00139030u; return; } if (c.pc != 0x003FCC9Cu) [[unlikely]] return; }
L_003FCC9C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_003FCCA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FCCC0:
    set32(c.r[2], ld32((c.r[28].w[0] - 31208u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_003FCCD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30356u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_003FCCEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003FCCF4; } }
L_003FCCEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCCF4u);  if (depth < kMaxDepth) unit_000E(c, 89u, depth + 1u); else { c.pc = 0x001390A0u; return; } if (c.pc != 0x003FCCF4u) [[unlikely]] return; }
L_003FCCF4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FCD00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30356u)));  c.pc = t; return; }
L_003FCD10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 4112u);  c.pc = t; return; }
L_003FCD20:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC480u | kUnwind; return; } goto L_003FC480; }
L_003FCD30:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC890u | kUnwind; return; } goto L_003FC890; }
L_003FCD40:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[9].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[10].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCD88u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x003FCD88u) [[unlikely]] return; }
L_003FCD88:
    set32(c.r[4], c.r[29].w[0] + 172u);
    set32(c.r[5], c.r[16].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCD98u); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_00BF(c, 265u, depth + 1u); else { c.pc = 0x003FE1F0u; return; } if (c.pc != 0x003FCD98u) [[unlikely]] return; }
L_003FCD98:
    set32(c.r[3], ld32((c.r[29].w[0] + 172u)));
    set32(c.r[2], c.r[16].w[0] + 16u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[16], ld32((c.r[3].w[0] + 28u)));  goto L_003FCDE4; }
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[29].w[0] + 145u);  goto L_003FCDBC; }
    set32(c.r[7], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 1;
L_003FCDBC:
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 3633u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCDD0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003FCDD0u) [[unlikely]] return; }
L_003FCDD0:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCDDCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003FCDDCu) [[unlikely]] return; }
L_003FCDDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FCF38; } }
L_003FCDE4:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCDF0u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003FCDF0u) [[unlikely]] return; }
L_003FCDF0:
    set32(c.r[4], c.r[29].w[0] + 168u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCE00u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_00BF(c, 279u, depth + 1u); else { c.pc = 0x003FE420u; return; } if (c.pc != 0x003FCE00u) [[unlikely]] return; }
L_003FCE00:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCE0Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003FCE0Cu) [[unlikely]] return; }
L_003FCE0C:
    set32(c.r[3], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[2], c.r[16].w[0] + 12u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[16], ld32((c.r[3].w[0] + 28u)));  goto L_003FCE20; }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FCE20:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003FCE54; } }
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCE40u); set32(c.r[6], c.r[6].w[0] - 3580u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003FCE40u) [[unlikely]] return; }
L_003FCE40:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCE4Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003FCE4Cu) [[unlikely]] return; }
L_003FCE4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FCF38; } }
L_003FCE54:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003FCECC; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.budget -= 1;
L_003FCE60:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 145u);  goto L_003FCE70; }
    set32(c.r[6], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 1;
L_003FCE70:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3530u);
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCE88u); c.r[8].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x003FCE88u) [[unlikely]] return; }
L_003FCE88:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[19].w[0] + 1u);  goto L_003FCE9C; }
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_003FCE9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCEA4u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 331u, depth + 1u); else { c.pc = 0x0013F2A0u; return; } if (c.pc != 0x003FCEA4u) [[unlikely]] return; }
L_003FCEA4:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 129u);  goto L_003FCEB8; }
    set32(c.r[5], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_003FCEB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCEC0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003FCEC0u) [[unlikely]] return; }
L_003FCEC0:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCECCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003FCECCu) [[unlikely]] return; }
L_003FCECC:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 144u);  goto L_003FCF2C; }
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 8u)));  if (t) { goto L_003FCEEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 152u)));  if (t) { goto L_003FCEF0; } }
L_003FCEEC:
    set32(c.r[6], c.r[29].w[0] + 145u);
    c.budget -= 1;
L_003FCEF0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[8], c.r[20].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCF08u); set32(c.r[5], c.r[5].w[0] - 3514u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x003FCF08u) [[unlikely]] return; }
L_003FCF08:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003FCF28; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 6;
L_003FCF28:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 1;
L_003FCF2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCF34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003FCF34u) [[unlikely]] return; }
L_003FCF34:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003FCF38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003FCF60:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCFA0u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x003FCFA0u) [[unlikely]] return; }
L_003FCFA0:
    set32(c.r[4], c.r[29].w[0] + 156u);
    set32(c.r[5], c.r[16].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCFB0u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_00BF(c, 265u, depth + 1u); else { c.pc = 0x003FE1F0u; return; } if (c.pc != 0x003FCFB0u) [[unlikely]] return; }
L_003FCFB0:
    set32(c.r[3], ld32((c.r[29].w[0] + 156u)));
    set32(c.r[2], c.r[16].w[0] + 16u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[16], ld32((c.r[3].w[0] + 28u)));  goto L_003FCFFC; }
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[29].w[0] + 129u);  goto L_003FCFD4; }
    set32(c.r[7], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_003FCFD4:
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 3633u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCFE8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003FCFE8u) [[unlikely]] return; }
L_003FCFE8:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCFF4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003FCFF4u) [[unlikely]] return; }
L_003FCFF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FD170; } }
L_003FCFFC:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD008u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003FD008u) [[unlikely]] return; }
L_003FD008:
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD018u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_00BF(c, 279u, depth + 1u); else { c.pc = 0x003FE420u; return; } if (c.pc != 0x003FD018u) [[unlikely]] return; }
L_003FD018:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD024u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003FD024u) [[unlikely]] return; }
L_003FD024:
    set32(c.r[3], ld32((c.r[29].w[0] + 152u)));
    set32(c.r[2], c.r[16].w[0] + 12u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[16], ld32((c.r[3].w[0] + 28u)));  goto L_003FD038; }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FD038:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003FD06C; } }
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD058u); set32(c.r[6], c.r[6].w[0] - 3580u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003FD058u) [[unlikely]] return; }
L_003FD058:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD064u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003FD064u) [[unlikely]] return; }
L_003FD064:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FD170; } }
L_003FD06C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003FD0EC; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  if (t) { goto L_003FD08C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 136u)));  if (t) { goto L_003FD090; } }
L_003FD08C:
    set32(c.r[6], c.r[29].w[0] + 129u);
    c.budget -= 1;
L_003FD090:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[8], c.r[3].w[0] + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 3530u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD0A8u); c.r[7].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x003FD0A8u) [[unlikely]] return; }
L_003FD0A8:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[19].w[0] + 1u);  goto L_003FD0BC; }
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_003FD0BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD0C4u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 331u, depth + 1u); else { c.pc = 0x0013F2A0u; return; } if (c.pc != 0x003FD0C4u) [[unlikely]] return; }
L_003FD0C4:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 113u);  goto L_003FD0D8; }
    set32(c.r[5], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 1;
L_003FD0D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD0E0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003FD0E0u) [[unlikely]] return; }
L_003FD0E0:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD0ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003FD0ECu) [[unlikely]] return; }
L_003FD0EC:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  goto L_003FD144; }
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  if (t) { goto L_003FD10C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 136u)));  if (t) { goto L_003FD110; } }
L_003FD10C:
    set32(c.r[6], c.r[29].w[0] + 129u);
    c.budget -= 1;
L_003FD110:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[8], c.r[3].w[0] + 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD128u); set32(c.r[5], c.r[5].w[0] - 3514u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x003FD128u) [[unlikely]] return; }
L_003FD128:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003FD140; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_003FD140:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_003FD144:
    set32(c.r[3], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 128u);  goto L_003FD164; }
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 2;
L_003FD164:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD16Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003FD16Cu) [[unlikely]] return; }
L_003FD16C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003FD170:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003FD190:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 76u), c.r[2].w[0]);  if (t) { goto L_003FD258; } }
L_003FD1B4:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_003FD1E4; } }
L_003FD1C0:
    set32(c.r[4], c.r[29].w[0] + 72u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26324u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD1E4u); st32((c.r[3].w[0] + 4u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_0005(c, 13u, depth + 1u); else { c.pc = 0x00114160u; return; } if (c.pc != 0x003FD1E4u) [[unlikely]] return; }
L_003FD1E4:
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[2], c.r[16].w[0] + 12u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[5], ld32((c.r[3].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FD1C0u | kUnwind; return; } goto L_003FD1C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD1FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 368u, depth + 1u); else { c.pc = 0x003FEB70u; return; } if (c.pc != 0x003FD1FCu) [[unlikely]] return; }
L_003FD1FC:
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[16], ld32((c.r[28].w[0] - 26328u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_003FD244; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  goto L_003FD248; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003FD244; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003FD244; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003FD244; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD244u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 327u, depth + 1u); else { c.pc = 0x003FE850u; return; } if (c.pc != 0x003FD244u) [[unlikely]] return; }
L_003FD244:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_003FD248:
    set32(c.r[4], c.r[29].w[0] + 76u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD258u); st32((c.r[16].w[0] + 4u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0005(c, 13u, depth + 1u); else { c.pc = 0x00114160u; return; } if (c.pc != 0x003FD258u) [[unlikely]] return; }
L_003FD258:
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[2], c.r[17].w[0] + 16u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[16], ld32((c.r[3].w[0] + 28u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FD1B4u | kUnwind; return; } goto L_003FD1B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD270u); set32(c.r[4], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_00BF(c, 324u, depth + 1u); else { c.pc = 0x003FE7E0u; return; } if (c.pc != 0x003FD270u) [[unlikely]] return; }
L_003FD270:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003FD290:
    set32(c.r[29], c.r[29].w[0] - 304u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 3507u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[29].w[0] + 240u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD2C4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003FD2C4u) [[unlikely]] return; }
L_003FD2C4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD2D4u); set32(c.r[5], c.r[5].w[0] - 3507u);  if (depth < kMaxDepth) unit_000A(c, 398u, depth + 1u); else { c.pc = 0x0012B320u; return; } if (c.pc != 0x003FD2D4u) [[unlikely]] return; }
L_003FD2D4:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[29].w[0] + 161u);  goto L_003FD2E8; }
    set32(c.r[16], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_003FD2E8:
    set32(c.r[2], ld32((c.r[28].w[0] - 26860u)));
    st32((c.r[29].w[0] + 272u), 0u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD304u); set32(c.r[5], c.r[29].w[0] + 272u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FD304u) [[unlikely]] return; }
L_003FD304:
    set32(c.r[4], ld32((c.r[29].w[0] + 272u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 8232u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD31Cu); set32(c.r[8], c.r[29].w[0] + 300u);  if (depth < kMaxDepth) unit_010E(c, 42u, depth + 1u); else { c.pc = 0x00538480u; return; } if (c.pc != 0x003FD31Cu) [[unlikely]] return; }
L_003FD31C:
    st32((c.r[28].w[0] - 26336u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD32Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003FD32Cu) [[unlikely]] return; }
L_003FD32C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD334u); set32(c.r[4], ld32((c.r[28].w[0] - 26336u)));  if (depth < kMaxDepth) unit_00B6(c, 312u, depth + 1u); else { c.pc = 0x003DA8C0u; return; } if (c.pc != 0x003FD334u) [[unlikely]] return; }
L_003FD334:
    st32((c.r[29].w[0] + 296u), 0u);
    set32(c.r[4], ld32((c.r[29].w[0] + 300u)));
    c.budget -= 2;
L_003FD33C:
    set32(c.r[5], c.r[29].w[0] + 292u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD34Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 239u, depth + 1u); else { c.pc = 0x0052F510u; return; } if (c.pc != 0x003FD34Cu) [[unlikely]] return; }
L_003FD34C:
    st32((c.r[28].w[0] - 26336u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD358u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 312u, depth + 1u); else { c.pc = 0x003DA8C0u; return; } if (c.pc != 0x003FD358u) [[unlikely]] return; }
L_003FD358:
    set32(c.r[2], ld32((c.r[29].w[0] + 292u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 300u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FD33Cu | kUnwind; return; } goto L_003FD33C; }
    set32(c.r[4], ld32((c.r[29].w[0] + 300u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD370u); set32(c.r[5], c.r[29].w[0] + 296u);  if (depth < kMaxDepth) unit_010B(c, 242u, depth + 1u); else { c.pc = 0x0052F580u; return; } if (c.pc != 0x003FD370u) [[unlikely]] return; }
L_003FD370:
    st32((c.r[28].w[0] - 26336u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD37Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 312u, depth + 1u); else { c.pc = 0x003DA8C0u; return; } if (c.pc != 0x003FD37Cu) [[unlikely]] return; }
L_003FD37C:
    set32(c.r[7], ld32((c.r[29].w[0] + 296u)));
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD394u); set32(c.r[6], c.r[6].w[0] - 3489u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003FD394u) [[unlikely]] return; }
L_003FD394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD39Cu); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003FD39Cu) [[unlikely]] return; }
L_003FD39C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD3A4u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003FD3A4u) [[unlikely]] return; }
L_003FD3A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003FD6F4; } }
L_003FD3AC:
    set32(c.r[4], ld32((c.r[29].w[0] + 300u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD3B8u); set32(c.r[6], c.r[29].w[0] + 284u);  if (depth < kMaxDepth) unit_010B(c, 251u, depth + 1u); else { c.pc = 0x0052F6C0u; return; } if (c.pc != 0x003FD3B8u) [[unlikely]] return; }
L_003FD3B8:
    st32((c.r[28].w[0] - 26336u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD3C4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 312u, depth + 1u); else { c.pc = 0x003DA8C0u; return; } if (c.pc != 0x003FD3C4u) [[unlikely]] return; }
L_003FD3C4:
    set32(c.r[4], ld32((c.r[29].w[0] + 284u)));
    c.budget -= 1;
L_003FD3C8:
    set32(c.r[5], c.r[29].w[0] + 292u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD3D8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 239u, depth + 1u); else { c.pc = 0x0052F510u; return; } if (c.pc != 0x003FD3D8u) [[unlikely]] return; }
L_003FD3D8:
    st32((c.r[28].w[0] - 26336u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD3E4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 312u, depth + 1u); else { c.pc = 0x003DA8C0u; return; } if (c.pc != 0x003FD3E4u) [[unlikely]] return; }
L_003FD3E4:
    set32(c.r[2], ld32((c.r[29].w[0] + 292u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 284u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FD3C8u | kUnwind; return; } goto L_003FD3C8; }
    set32(c.r[4], ld32((c.r[29].w[0] + 284u)));
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD400u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_010B(c, 248u, depth + 1u); else { c.pc = 0x0052F650u; return; } if (c.pc != 0x003FD400u) [[unlikely]] return; }
L_003FD400:
    st32((c.r[28].w[0] - 26336u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD40Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 312u, depth + 1u); else { c.pc = 0x003DA8C0u; return; } if (c.pc != 0x003FD40Cu) [[unlikely]] return; }
L_003FD40C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 208u);
    set32(c.r[6], c.r[29].w[0] + 192u);
    set32(c.r[7], c.r[29].w[0] + 176u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD424u); set32(c.r[8], c.r[29].w[0] + 280u);  if (depth < kMaxDepth) unit_00BF(c, 184u, depth + 1u); else { c.pc = 0x003FD760u; return; } if (c.pc != 0x003FD424u) [[unlikely]] return; }
L_003FD424:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_003FD6F4; }
    set32(c.r[4], c.r[29].w[0] + 276u);
    set32(c.r[5], c.r[20].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD43Cu); set32(c.r[6], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_00BF(c, 265u, depth + 1u); else { c.pc = 0x003FE1F0u; return; } if (c.pc != 0x003FD43Cu) [[unlikely]] return; }
L_003FD43C:
    set32(c.r[3], ld32((c.r[29].w[0] + 276u)));
    set32(c.r[2], c.r[20].w[0] + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], ld32((c.r[29].w[0] + 276u)));  if (t) { goto L_003FD5D8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[29].w[0] + 193u);  goto L_003FD460; }
    set32(c.r[7], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 1;
L_003FD460:
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 3414u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD474u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003FD474u) [[unlikely]] return; }
L_003FD474:
    set32(c.r[16], ld32((c.r[28].w[0] - 26328u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 20u)));  goto L_003FD4A8; }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 24u)));  goto L_003FD498; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003FD524; } }
L_003FD498:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD4A4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00BF(c, 250u, depth + 1u); else { c.pc = 0x003FDF30u; return; } if (c.pc != 0x003FD4A4u) [[unlikely]] return; }
L_003FD4A4:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_003FD4A8:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 6;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_003FD524; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD4C8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x003FD4C8u) [[unlikely]] return; }
L_003FD4C8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[29].w[0] + 260u), c.r[2].w[0]);  goto L_003FD508; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD4DCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x003FD4DCu) [[unlikely]] return; }
L_003FD4DC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_003FD4F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD4F0u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x003FD4F0u) [[unlikely]] return; }
L_003FD4F0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_003FD4F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003FD504; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD504u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x003FD504u) [[unlikely]] return; }
L_003FD504:
    st32((c.r[29].w[0] + 260u), c.r[2].w[0]);
    c.budget -= 1;
L_003FD508:
    set32(c.r[5], c.r[29].w[0] + 256u);
    set32(c.r[2], c.r[29].w[0] + 264u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[6], c.r[29].w[0] + 260u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD524u); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00BF(c, 370u, depth + 1u); else { c.pc = 0x003FEBB0u; return; } if (c.pc != 0x003FD524u) [[unlikely]] return; }
L_003FD524:
    set32(c.r[4], c.r[20].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD530u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_00BF(c, 255u, depth + 1u); else { c.pc = 0x003FE060u; return; } if (c.pc != 0x003FD530u) [[unlikely]] return; }
L_003FD530:
    st32((c.r[2].w[0] + 16u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[21], c.r[29].w[0] + 177u);  goto L_003FD548; }
    set32(c.r[21], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 1;
L_003FD548:
    set32(c.r[16], ld32((c.r[28].w[0] - 26324u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 20u)));  goto L_003FD57C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 24u)));  goto L_003FD56C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003FD59C; } }
L_003FD56C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD578u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00BF(c, 238u, depth + 1u); else { c.pc = 0x003FDD30u; return; } if (c.pc != 0x003FD578u) [[unlikely]] return; }
L_003FD578:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_003FD57C:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_003FD59C; } }
    st32((c.r[17].w[0]), 0u);
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 2;
L_003FD59C:
    set32(c.r[2], 0u + 1u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD5B4u); st32((c.r[17].w[0] + 8u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003FD5B4u) [[unlikely]] return; }
L_003FD5B4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD5C0u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_00BF(c, 269u, depth + 1u); else { c.pc = 0x003FE290u; return; } if (c.pc != 0x003FD5C0u) [[unlikely]] return; }
L_003FD5C0:
    st32((c.r[2].w[0] + 16u), c.r[17].w[0]);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD5D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003FD5D0u) [[unlikely]] return; }
L_003FD5D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FD6F0; } }
L_003FD5D8:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + 12u);  if (t) { goto L_003FD5F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 184u)));  if (t) { goto L_003FD5F4; } }
L_003FD5F0:
    set32(c.r[5], c.r[29].w[0] + 177u);
    c.budget -= 1;
L_003FD5F4:
    set32(c.r[17], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD600u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003FD600u) [[unlikely]] return; }
L_003FD600:
    set32(c.r[4], c.r[29].w[0] + 268u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD610u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_00BF(c, 279u, depth + 1u); else { c.pc = 0x003FE420u; return; } if (c.pc != 0x003FD610u) [[unlikely]] return; }
L_003FD610:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD61Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003FD61Cu) [[unlikely]] return; }
L_003FD61C:
    set32(c.r[3], ld32((c.r[29].w[0] + 268u)));
    set32(c.r[2], c.r[17].w[0] + 12u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[3].w[0] + 28u)));  goto L_003FD630; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FD630:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0])));  goto L_003FD6E8; }
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[29].w[0] + 177u);  goto L_003FD64C; }
    set32(c.r[17], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 1;
L_003FD64C:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[16], ld32((c.r[28].w[0] - 26324u)));
    set32(c.r[21], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 20u)));  goto L_003FD68C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 24u)));  goto L_003FD67C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003FD6AC; } }
L_003FD67C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD688u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00BF(c, 238u, depth + 1u); else { c.pc = 0x003FDD30u; return; } if (c.pc != 0x003FD688u) [[unlikely]] return; }
L_003FD688:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_003FD68C:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 6;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_003FD6AC; } }
    st32((c.r[18].w[0]), 0u);
    st32((c.r[18].w[0] + 4u), 0u);
    c.budget -= 2;
L_003FD6AC:
    set32(c.r[2], 0u + 1u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD6C4u); st32((c.r[18].w[0] + 8u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003FD6C4u) [[unlikely]] return; }
L_003FD6C4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD6D0u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_00BF(c, 269u, depth + 1u); else { c.pc = 0x003FE290u; return; } if (c.pc != 0x003FD6D0u) [[unlikely]] return; }
L_003FD6D0:
    st32((c.r[2].w[0] + 16u), c.r[18].w[0]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD6E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003FD6E0u) [[unlikely]] return; }
L_003FD6E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FD6F0; } }
L_003FD6E8:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_003FD6F0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_003FD6F4:
    set32(c.r[2], ld32((c.r[29].w[0] + 296u)));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FD3ACu | kUnwind; return; } goto L_003FD3AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD70Cu); set32(c.r[4], ld32((c.r[29].w[0] + 300u)));  if (depth < kMaxDepth) unit_010B(c, 263u, depth + 1u); else { c.pc = 0x0052F8C0u; return; } if (c.pc != 0x003FD70Cu) [[unlikely]] return; }
L_003FD70C:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD71Cu); st32((c.r[29].w[0] + 300u), 0u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003FD71Cu) [[unlikely]] return; }
L_003FD71C:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD728u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003FD728u) [[unlikely]] return; }
L_003FD728:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD734u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003FD734u) [[unlikely]] return; }
L_003FD734:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_003FD760:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 160u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD790u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x003FD790u) [[unlikely]] return; }
L_003FD790:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[5].w[0] - 3341u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD7A4u); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_0017(c, 328u, depth + 1u); else { c.pc = 0x0015F040u; return; } if (c.pc != 0x003FD7A4u) [[unlikely]] return; }
L_003FD7A4:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD7B8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 295u, depth + 1u); else { c.pc = 0x0012A6E0u; return; } if (c.pc != 0x003FD7B8u) [[unlikely]] return; }
L_003FD7B8:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 129u);  goto L_003FD7CC; }
    set32(c.r[5], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_003FD7CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD7D4u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003FD7D4u) [[unlikely]] return; }
L_003FD7D4:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD7E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003FD7E0u) [[unlikely]] return; }
L_003FD7E0:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD7F4u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_000A(c, 295u, depth + 1u); else { c.pc = 0x0012A6E0u; return; } if (c.pc != 0x003FD7F4u) [[unlikely]] return; }
L_003FD7F4:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 113u);  goto L_003FD808; }
    set32(c.r[5], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 1;
L_003FD808:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD810u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003FD810u) [[unlikely]] return; }
L_003FD810:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD81Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003FD81Cu) [[unlikely]] return; }
L_003FD81C:
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD830u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_000F(c, 243u, depth + 1u); else { c.pc = 0x0013E740u; return; } if (c.pc != 0x003FD830u) [[unlikely]] return; }
L_003FD830:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u + 1u);  if (t) { goto L_003FD8D0; } }
L_003FD838:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 160u));  goto L_003FD848; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 164u)));  if (t) { goto L_003FD850; } }
L_003FD848:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_003FD850:
    set32(c.r[6], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD864u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 295u, depth + 1u); else { c.pc = 0x0012A6E0u; return; } if (c.pc != 0x003FD864u) [[unlikely]] return; }
L_003FD864:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 97u);  goto L_003FD878; }
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_003FD878:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD880u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003FD880u) [[unlikely]] return; }
L_003FD880:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD88Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003FD88Cu) [[unlikely]] return; }
L_003FD88C:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 145u);  goto L_003FD8A0; }
    set32(c.r[4], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 1;
L_003FD8A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD8A8u);  if (depth < kMaxDepth) unit_000F(c, 339u, depth + 1u); else { c.pc = 0x0013F390u; return; } if (c.pc != 0x003FD8A8u) [[unlikely]] return; }
L_003FD8A8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 144u)));  goto L_003FD904; }
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 145u);  goto L_003FD8C4; }
    set32(c.r[4], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 1;
L_003FD8C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD8CCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 313u, depth + 1u); else { c.pc = 0x0013F0D0u; return; } if (c.pc != 0x003FD8CCu) [[unlikely]] return; }
L_003FD8CC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_003FD8D0:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 160u));  goto L_003FD8EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 164u)));  if (t) { goto L_003FD8F4; } }
L_003FD8EC:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_003FD8F4:
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FD838u | kUnwind; return; } goto L_003FD838; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.budget -= 1;
L_003FD904:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 144u));  goto L_003FD918; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 148u)));  if (t) { goto L_003FD920; } }
L_003FD918:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[4].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_003FD920:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 160u));  goto L_003FD938; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 164u)));  if (t) { goto L_003FD940; } }
L_003FD938:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_003FD940:
    set32(c.r[2], c.r[4].w[0] + 1u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[7], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD958u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_000A(c, 295u, depth + 1u); else { c.pc = 0x0012A6E0u; return; } if (c.pc != 0x003FD958u) [[unlikely]] return; }
L_003FD958:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 81u);  goto L_003FD96C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_003FD96C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD974u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003FD974u) [[unlikely]] return; }
L_003FD974:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD980u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003FD980u) [[unlikely]] return; }
L_003FD980:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[18].w[0] + 1u);  goto L_003FD994; }
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 1;
L_003FD994:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD99Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 331u, depth + 1u); else { c.pc = 0x0013F2A0u; return; } if (c.pc != 0x003FD99Cu) [[unlikely]] return; }
L_003FD99C:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 65u);  goto L_003FD9B0; }
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_003FD9B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD9B8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003FD9B8u) [[unlikely]] return; }
L_003FD9B8:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD9C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003FD9C4u) [[unlikely]] return; }
L_003FD9C4:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[2].sd[0] >= 0) { set32(c.r[4], c.r[29].w[0] + 144u);  goto L_003FD9F0; }
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD9DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003FD9DCu) [[unlikely]] return; }
L_003FD9DC:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD9E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003FD9E8u) [[unlikely]] return; }
L_003FD9E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FDA08; } }
L_003FD9F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD9F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003FD9F8u) [[unlikely]] return; }
L_003FD9F8:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDA04u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003FDA04u) [[unlikely]] return; }
L_003FDA04:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003FDA08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003FDA20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDA30u); set32(c.r[4], ld32((c.r[28].w[0] - 26332u)));  if (depth < kMaxDepth) unit_00BF(c, 128u, depth + 1u); else { c.pc = 0x003FD190u; return; } if (c.pc != 0x003FDA30u) [[unlikely]] return; }
L_003FDA30:
    set32(c.r[4], ld32((c.r[28].w[0] - 26332u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 26324u)));  goto L_003FDA50; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDA4Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FDA4Cu) [[unlikely]] return; }
L_003FDA4C:
    set32(c.r[4], ld32((c.r[28].w[0] - 26324u)));
    c.budget -= 1;
L_003FDA50:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDA5Cu); st32((c.r[28].w[0] - 26332u), 0u);  if (depth < kMaxDepth) unit_00BF(c, 233u, depth + 1u); else { c.pc = 0x003FDCB0u; return; } if (c.pc != 0x003FDA5Cu) [[unlikely]] return; }
L_003FDA5C:
    set32(c.r[4], ld32((c.r[28].w[0] - 26328u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDA6Cu); st32((c.r[28].w[0] - 26324u), 0u);  if (depth < kMaxDepth) unit_00BF(c, 245u, depth + 1u); else { c.pc = 0x003FDEB0u; return; } if (c.pc != 0x003FDA6Cu) [[unlikely]] return; }
L_003FDA6C:
    st32((c.r[28].w[0] - 26328u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FDA80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FDAEC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + 23888u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003FDAD4; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_003FDAD8; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FDAD4; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003FDAD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDAD4u);  if (depth < kMaxDepth) unit_00BF(c, 283u, depth + 1u); else { c.pc = 0x003FE4C0u; return; } if (c.pc != 0x003FDAD4u) [[unlikely]] return; }
L_003FDAD4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_003FDAD8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003FDAF0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDAECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003FDAECu) [[unlikely]] return; }
L_003FDAEC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FDAF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FDB10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 28u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDB34u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003FDB34u) [[unlikely]] return; }
L_003FDB34:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[28].w[0] - 26328u), c.r[2].w[0]);  goto L_003FDB5C; }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] - 3339u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDB58u); c.r[8].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 243u, depth + 1u); else { c.pc = 0x003FDE60u; return; } if (c.pc != 0x003FDB58u) [[unlikely]] return; }
L_003FDB58:
    st32((c.r[28].w[0] - 26328u), c.r[2].w[0]);
    c.budget -= 1;
L_003FDB5C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDB68u); set32(c.r[5], 0u + 24u);  if (depth < kMaxDepth) unit_00BF(c, 250u, depth + 1u); else { c.pc = 0x003FDF30u; return; } if (c.pc != 0x003FDB68u) [[unlikely]] return; }
L_003FDB68:
    set32(c.r[4], 0u + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDB74u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003FDB74u) [[unlikely]] return; }
L_003FDB74:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[28].w[0] - 26324u), c.r[2].w[0]);  goto L_003FDB9C; }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[7].w[0] - 3672u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDB98u); c.r[8].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 231u, depth + 1u); else { c.pc = 0x003FDC60u; return; } if (c.pc != 0x003FDB98u) [[unlikely]] return; }
L_003FDB98:
    st32((c.r[28].w[0] - 26324u), c.r[2].w[0]);
    c.budget -= 1;
L_003FDB9C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDBA8u); set32(c.r[5], 0u + 346u);  if (depth < kMaxDepth) unit_00BF(c, 238u, depth + 1u); else { c.pc = 0x003FDD30u; return; } if (c.pc != 0x003FDBA8u) [[unlikely]] return; }
L_003FDBA8:
    set32(c.r[4], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDBB4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003FDBB4u) [[unlikely]] return; }
L_003FDBB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003FDC2C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + 23888u);
    set32(c.r[16], c.r[17].w[0] + 4u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[18].d[0] != c.r[3].d[0]; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003FDC08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDBE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x003FDBE0u) [[unlikely]] return; }
L_003FDBE0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_003FDBF8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDBF4u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x003FDBF4u) [[unlikely]] return; }
L_003FDBF4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_003FDBF8:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[29].w[0] + 72u), c.r[2].w[0]);  goto L_003FDC0C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDC08u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x003FDC08u) [[unlikely]] return; }
L_003FDC08:
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 1;
L_003FDC0C:
    set32(c.r[5], c.r[29].w[0] + 68u);
    set32(c.r[2], c.r[29].w[0] + 76u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[6], c.r[29].w[0] + 72u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDC28u); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00BF(c, 326u, depth + 1u); else { c.pc = 0x003FE820u; return; } if (c.pc != 0x003FDC28u) [[unlikely]] return; }
L_003FDC28:
    st32((c.r[17].w[0] + 28u), c.r[18].w[0]);
    c.budget -= 1;
L_003FDC2C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDC38u); st32((c.r[28].w[0] - 26332u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_00BF(c, 136u, depth + 1u); else { c.pc = 0x003FD290u; return; } if (c.pc != 0x003FDC38u) [[unlikely]] return; }
L_003FDC38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003FDC60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 12u), c.r[6].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0]), 0u);
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 4u), 0u);  if (t) { goto L_003FDC98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDC98u);  if (depth < kMaxDepth) unit_00BF(c, 238u, depth + 1u); else { c.pc = 0x003FDD30u; return; } if (c.pc != 0x003FDC98u) [[unlikely]] return; }
L_003FDC98:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FDCB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FDD10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[18].w[0])));  if (t) { goto L_003FDCF0; } }
L_003FDCD8:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDCE4u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x001002F0u; return; } if (c.pc != 0x003FDCE4u) [[unlikely]] return; }
L_003FDCE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDCECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003FDCECu) [[unlikely]] return; }
L_003FDCEC:
    set32(c.r[16], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_003FDCF0:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FDCD8u | kUnwind; return; } goto L_003FDCD8; }
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_003FDD14; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDD10u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003FDD10u) [[unlikely]] return; }
L_003FDD10:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003FDD14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003FDD30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003FDE40; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDD64u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003FDD64u) [[unlikely]] return; }
L_003FDD64:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDD7Cu); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x003FDD7Cu) [[unlikely]] return; }
L_003FDD7C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[17].w[0] - 1u);
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[16].w[0]);  if (t) { goto L_003FDDF4; } }
L_003FDD98:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[7], c.r[4].w[0] + 1u);  goto L_003FDDC4; }
    set32(c.r[5], c.r[4].w[0] << 1);
    set32(c.r[7], ld32((c.r[18].w[0])));
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[8], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[6], c.r[5].w[0] << 2);
    set32(c.r[5], ld32((c.r[7].w[0])));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[8].w[0]);  if (t) { goto L_003FDDF0; } }
L_003FDDC4:
    set32(c.r[8], ld32((c.r[18].w[0])));
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[5], c.r[4].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[7], ld32((c.r[8].w[0])));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    st32((c.r[5].w[0]), c.r[6].w[0]);
    c.budget -= 11;
L_003FDDF0:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_003FDDF4:
    c.r[5].d[0] = c.r[4].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FDD98u | kUnwind; return; } goto L_003FDD98; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 24u)));  goto L_003FDE38; }
    set32(c.r[7], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[4], 0u + 4u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[8], c.r[3].w[0] + c.r[17].w[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDE34u); set32(c.r[6], c.r[6].w[0] - 3319u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003FDE34u) [[unlikely]] return; }
L_003FDE34:
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 1;
L_003FDE38:
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[18].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 2;
L_003FDE40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003FDE60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 12u), c.r[6].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0]), 0u);
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 4u), 0u);  if (t) { goto L_003FDE98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDE98u);  if (depth < kMaxDepth) unit_00BF(c, 250u, depth + 1u); else { c.pc = 0x003FDF30u; return; } if (c.pc != 0x003FDE98u) [[unlikely]] return; }
L_003FDE98:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FDEB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FDF10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[18].w[0])));  if (t) { goto L_003FDEF0; } }
L_003FDED8:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDEE4u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x001002F0u; return; } if (c.pc != 0x003FDEE4u) [[unlikely]] return; }
L_003FDEE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDEECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003FDEECu) [[unlikely]] return; }
L_003FDEEC:
    set32(c.r[16], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_003FDEF0:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FDED8u | kUnwind; return; } goto L_003FDED8; }
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_003FDF14; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDF10u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003FDF10u) [[unlikely]] return; }
L_003FDF10:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003FDF14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003FDF30:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003FE040; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDF64u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003FDF64u) [[unlikely]] return; }
L_003FDF64:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDF7Cu); set32(c.r[4], c.r[2].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x003FDF7Cu) [[unlikely]] return; }
L_003FDF7C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[17].w[0] - 1u);
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[16].w[0]);  if (t) { goto L_003FDFF4; } }
L_003FDF98:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[7], c.r[4].w[0] + 1u);  goto L_003FDFC4; }
    set32(c.r[5], c.r[4].w[0] << 1);
    set32(c.r[7], ld32((c.r[18].w[0])));
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[8], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[6], c.r[5].w[0] << 3);
    set32(c.r[5], ld32((c.r[7].w[0])));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[8].w[0]);  if (t) { goto L_003FDFF0; } }
L_003FDFC4:
    set32(c.r[8], ld32((c.r[18].w[0])));
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[5], c.r[4].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[7], ld32((c.r[8].w[0])));
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[7].w[0] + c.r[5].w[0]);
    st32((c.r[5].w[0]), c.r[6].w[0]);
    c.budget -= 11;
L_003FDFF0:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_003FDFF4:
    c.r[5].d[0] = c.r[4].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FDF98u | kUnwind; return; } goto L_003FDF98; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 24u)));  goto L_003FE038; }
    set32(c.r[7], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[4], 0u + 4u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[8], c.r[3].w[0] + c.r[17].w[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE034u); set32(c.r[6], c.r[6].w[0] - 3319u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003FE034u) [[unlikely]] return; }
L_003FE034:
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 1;
L_003FE038:
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[18].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 2;
L_003FE040:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003FE060:
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
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FE0D0; } }
L_003FE0A4:
    set32(c.r[5], c.r[17].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE0B0u); c.r[18].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x003FE0B0u) [[unlikely]] return; }
L_003FE0B0:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[19].d[0] = c.r[17].d[0] + 0ull;  goto L_003FE0C4; }
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003FE0D0; } }
L_003FE0C4:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], ld32((c.r[17].w[0] + 4u)));
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003FE0D0:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FE0A4u | kUnwind; return; } goto L_003FE0A4; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[5].d[0] = c.r[20].d[0] + 0ull;  goto L_003FE0F8; }
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE0ECu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x003FE0ECu) [[unlikely]] return; }
L_003FE0EC:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], c.r[19].w[0] + 12u);  goto L_003FE148; }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_003FE0F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE100u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003FE100u) [[unlikely]] return; }
L_003FE100:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[8], c.r[29].w[0] + 128u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE11Cu); st32((c.r[29].w[0] + 144u), 0u);  if (depth < kMaxDepth) unit_00BF(c, 371u, depth + 1u); else { c.pc = 0x003FEBE0u; return; } if (c.pc != 0x003FE11Cu) [[unlikely]] return; }
L_003FE11C:
    set32(c.r[16], c.r[2].w[0] + 12u);
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003FE148; }
    set32(c.r[4], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FE144; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE144u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003FE144u) [[unlikely]] return; }
L_003FE144:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003FE148:
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
L_003FE170:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FE1D8; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_003FE1C4; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003FE1C0; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FE1C0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FE1C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE1C0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003FE1C0u) [[unlikely]] return; }
L_003FE1C0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_003FE1C4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003FE1DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE1D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003FE1D8u) [[unlikely]] return; }
L_003FE1D8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FE1DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FE1F0:
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
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[19].w[0] + 12u);  if (t) { goto L_003FE23C; } }
L_003FE224:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE22Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x003FE22Cu) [[unlikely]] return; }
L_003FE22C:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[17], ld32((c.r[17].w[0] + 4u)));  goto L_003FE23C; }
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 2;
L_003FE23C:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], c.r[17].w[0] + 12u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FE224u | kUnwind; return; } goto L_003FE224; }
    set32(c.r[3], c.r[19].w[0] + 12u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[3], c.r[19].w[0] + 12u);  goto L_003FE268; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE25Cu); set32(c.r[5], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x003FE25Cu) [[unlikely]] return; }
L_003FE25C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { st32((c.r[20].w[0]), c.r[16].w[0]);  goto L_003FE26C; }
    set32(c.r[3], c.r[19].w[0] + 12u);
    c.budget -= 1;
L_003FE268:
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_003FE26C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003FE290:
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
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FE300; } }
L_003FE2D4:
    set32(c.r[5], c.r[17].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE2E0u); c.r[18].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x003FE2E0u) [[unlikely]] return; }
L_003FE2E0:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[19].d[0] = c.r[17].d[0] + 0ull;  goto L_003FE2F4; }
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003FE300; } }
L_003FE2F4:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], ld32((c.r[17].w[0] + 4u)));
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003FE300:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FE2D4u | kUnwind; return; } goto L_003FE2D4; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[5].d[0] = c.r[20].d[0] + 0ull;  goto L_003FE328; }
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE31Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x003FE31Cu) [[unlikely]] return; }
L_003FE31C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], c.r[19].w[0] + 12u);  goto L_003FE378; }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_003FE328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE330u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003FE330u) [[unlikely]] return; }
L_003FE330:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[8], c.r[29].w[0] + 128u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE34Cu); st32((c.r[29].w[0] + 144u), 0u);  if (depth < kMaxDepth) unit_00BF(c, 377u, depth + 1u); else { c.pc = 0x003FECF0u; return; } if (c.pc != 0x003FE34Cu) [[unlikely]] return; }
L_003FE34C:
    set32(c.r[16], c.r[2].w[0] + 12u);
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003FE378; }
    set32(c.r[4], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FE374; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE374u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003FE374u) [[unlikely]] return; }
L_003FE374:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003FE378:
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
L_003FE3A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FE408; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_003FE3F4; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003FE3F0; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FE3F0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FE3F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE3F0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003FE3F0u) [[unlikely]] return; }
L_003FE3F0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_003FE3F4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003FE40C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE408u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003FE408u) [[unlikely]] return; }
L_003FE408:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FE40C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FE420:
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
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[19].w[0] + 12u);  if (t) { goto L_003FE46C; } }
L_003FE454:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE45Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x003FE45Cu) [[unlikely]] return; }
L_003FE45C:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[17], ld32((c.r[17].w[0] + 4u)));  goto L_003FE46C; }
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 2;
L_003FE46C:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], c.r[17].w[0] + 12u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FE454u | kUnwind; return; } goto L_003FE454; }
    set32(c.r[3], c.r[19].w[0] + 12u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[3], c.r[19].w[0] + 12u);  goto L_003FE498; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE48Cu); set32(c.r[5], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x003FE48Cu) [[unlikely]] return; }
L_003FE48C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { st32((c.r[20].w[0]), c.r[16].w[0]);  goto L_003FE49C; }
    set32(c.r[3], c.r[19].w[0] + 12u);
    c.budget -= 1;
L_003FE498:
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_003FE49C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003FE4C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FE5E0; } }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_003FE550; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_003FE50C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE508u);  if (depth < kMaxDepth) unit_00BF(c, 283u, depth + 1u); else { c.pc = 0x003FE4C0u; return; } if (c.pc != 0x003FE508u) [[unlikely]] return; }
L_003FE508:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_003FE50C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003FE520; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE51Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 283u, depth + 1u); else { c.pc = 0x003FE4C0u; return; } if (c.pc != 0x003FE51Cu) [[unlikely]] return; }
L_003FE51C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FE520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE528u);  if (depth < kMaxDepth) unit_00BF(c, 323u, depth + 1u); else { c.pc = 0x003FE7D0u; return; } if (c.pc != 0x003FE528u) [[unlikely]] return; }
L_003FE528:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE534u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00BF(c, 321u, depth + 1u); else { c.pc = 0x003FE780u; return; } if (c.pc != 0x003FE534u) [[unlikely]] return; }
L_003FE534:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE53Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 320u, depth + 1u); else { c.pc = 0x003FE770u; return; } if (c.pc != 0x003FE53Cu) [[unlikely]] return; }
L_003FE53C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE54Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00BF(c, 318u, depth + 1u); else { c.pc = 0x003FE750u; return; } if (c.pc != 0x003FE54Cu) [[unlikely]] return; }
L_003FE54C:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_003FE550:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003FE5B4; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_003FE570; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE56Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 283u, depth + 1u); else { c.pc = 0x003FE4C0u; return; } if (c.pc != 0x003FE56Cu) [[unlikely]] return; }
L_003FE56C:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_003FE570:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003FE584; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE580u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 283u, depth + 1u); else { c.pc = 0x003FE4C0u; return; } if (c.pc != 0x003FE580u) [[unlikely]] return; }
L_003FE580:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FE584:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE58Cu);  if (depth < kMaxDepth) unit_00BF(c, 323u, depth + 1u); else { c.pc = 0x003FE7D0u; return; } if (c.pc != 0x003FE58Cu) [[unlikely]] return; }
L_003FE58C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE598u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00BF(c, 321u, depth + 1u); else { c.pc = 0x003FE780u; return; } if (c.pc != 0x003FE598u) [[unlikely]] return; }
L_003FE598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE5A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 320u, depth + 1u); else { c.pc = 0x003FE770u; return; } if (c.pc != 0x003FE5A0u) [[unlikely]] return; }
L_003FE5A0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE5B0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00BF(c, 318u, depth + 1u); else { c.pc = 0x003FE750u; return; } if (c.pc != 0x003FE5B0u) [[unlikely]] return; }
L_003FE5B0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FE5B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE5BCu);  if (depth < kMaxDepth) unit_00BF(c, 323u, depth + 1u); else { c.pc = 0x003FE7D0u; return; } if (c.pc != 0x003FE5BCu) [[unlikely]] return; }
L_003FE5BC:
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE5C8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00BF(c, 262u, depth + 1u); else { c.pc = 0x003FE170u; return; } if (c.pc != 0x003FE5C8u) [[unlikely]] return; }
L_003FE5C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE5D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 320u, depth + 1u); else { c.pc = 0x003FE770u; return; } if (c.pc != 0x003FE5D0u) [[unlikely]] return; }
L_003FE5D0:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[19], ld32((c.r[16].w[0] + 4u)));  goto L_003FE5E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE5E0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003FE5E0u) [[unlikely]] return; }
L_003FE5E0:
    set32(c.r[19], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_003FE5E4:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[3], c.r[16].w[0] + 12u);  goto L_003FE6E8; }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_003FE654; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_003FE610; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE60Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 283u, depth + 1u); else { c.pc = 0x003FE4C0u; return; } if (c.pc != 0x003FE60Cu) [[unlikely]] return; }
L_003FE60C:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_003FE610:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003FE624; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE620u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 283u, depth + 1u); else { c.pc = 0x003FE4C0u; return; } if (c.pc != 0x003FE620u) [[unlikely]] return; }
L_003FE620:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FE624:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE62Cu);  if (depth < kMaxDepth) unit_00BF(c, 323u, depth + 1u); else { c.pc = 0x003FE7D0u; return; } if (c.pc != 0x003FE62Cu) [[unlikely]] return; }
L_003FE62C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE638u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00BF(c, 321u, depth + 1u); else { c.pc = 0x003FE780u; return; } if (c.pc != 0x003FE638u) [[unlikely]] return; }
L_003FE638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE640u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 320u, depth + 1u); else { c.pc = 0x003FE770u; return; } if (c.pc != 0x003FE640u) [[unlikely]] return; }
L_003FE640:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE650u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00BF(c, 318u, depth + 1u); else { c.pc = 0x003FE750u; return; } if (c.pc != 0x003FE650u) [[unlikely]] return; }
L_003FE650:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_003FE654:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003FE6B8; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_003FE674; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE670u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 283u, depth + 1u); else { c.pc = 0x003FE4C0u; return; } if (c.pc != 0x003FE670u) [[unlikely]] return; }
L_003FE670:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_003FE674:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003FE688; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE684u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 283u, depth + 1u); else { c.pc = 0x003FE4C0u; return; } if (c.pc != 0x003FE684u) [[unlikely]] return; }
L_003FE684:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FE688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE690u);  if (depth < kMaxDepth) unit_00BF(c, 323u, depth + 1u); else { c.pc = 0x003FE7D0u; return; } if (c.pc != 0x003FE690u) [[unlikely]] return; }
L_003FE690:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE69Cu); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00BF(c, 321u, depth + 1u); else { c.pc = 0x003FE780u; return; } if (c.pc != 0x003FE69Cu) [[unlikely]] return; }
L_003FE69C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE6A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 320u, depth + 1u); else { c.pc = 0x003FE770u; return; } if (c.pc != 0x003FE6A4u) [[unlikely]] return; }
L_003FE6A4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE6B4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00BF(c, 318u, depth + 1u); else { c.pc = 0x003FE750u; return; } if (c.pc != 0x003FE6B4u) [[unlikely]] return; }
L_003FE6B4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FE6B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE6C0u);  if (depth < kMaxDepth) unit_00BF(c, 323u, depth + 1u); else { c.pc = 0x003FE7D0u; return; } if (c.pc != 0x003FE6C0u) [[unlikely]] return; }
L_003FE6C0:
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE6CCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00BF(c, 262u, depth + 1u); else { c.pc = 0x003FE170u; return; } if (c.pc != 0x003FE6CCu) [[unlikely]] return; }
L_003FE6CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE6D4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 320u, depth + 1u); else { c.pc = 0x003FE770u; return; } if (c.pc != 0x003FE6D4u) [[unlikely]] return; }
L_003FE6D4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003FE6E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE6E4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003FE6E4u) [[unlikely]] return; }
L_003FE6E4:
    set32(c.r[3], c.r[16].w[0] + 12u);
    c.budget -= 1;
L_003FE6E8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FE724; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FE724; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FE724; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FE724; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FE724; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE724u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003FE724u) [[unlikely]] return; }
L_003FE724:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003FE738; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE734u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003FE734u) [[unlikely]] return; }
L_003FE734:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003FE738:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003FE750:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003FE764; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE764u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003FE764u) [[unlikely]] return; }
L_003FE764:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FE770:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 8u);  c.pc = t; return; }
L_003FE780:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003FE7C0; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003FE7C4; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003FE7C0; } }
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FE7C0; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FE7C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE7C0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003FE7C0u) [[unlikely]] return; }
L_003FE7C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003FE7C4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FE7D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003FE7E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003FE810; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE800u);  if (depth < kMaxDepth) unit_00BF(c, 283u, depth + 1u); else { c.pc = 0x003FE4C0u; return; } if (c.pc != 0x003FE800u) [[unlikely]] return; }
L_003FE800:
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[3], c.r[16].w[0] + 12u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 4;
L_003FE810:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FE820:
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
L_003FE850:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FE970; } }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_003FE8E0; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_003FE89C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE898u);  if (depth < kMaxDepth) unit_00BF(c, 327u, depth + 1u); else { c.pc = 0x003FE850u; return; } if (c.pc != 0x003FE898u) [[unlikely]] return; }
L_003FE898:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_003FE89C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003FE8B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE8ACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 327u, depth + 1u); else { c.pc = 0x003FE850u; return; } if (c.pc != 0x003FE8ACu) [[unlikely]] return; }
L_003FE8AC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FE8B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE8B8u);  if (depth < kMaxDepth) unit_00BF(c, 367u, depth + 1u); else { c.pc = 0x003FEB60u; return; } if (c.pc != 0x003FE8B8u) [[unlikely]] return; }
L_003FE8B8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE8C4u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00BF(c, 365u, depth + 1u); else { c.pc = 0x003FEB10u; return; } if (c.pc != 0x003FE8C4u) [[unlikely]] return; }
L_003FE8C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE8CCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 364u, depth + 1u); else { c.pc = 0x003FEB00u; return; } if (c.pc != 0x003FE8CCu) [[unlikely]] return; }
L_003FE8CC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE8DCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00BF(c, 362u, depth + 1u); else { c.pc = 0x003FEAE0u; return; } if (c.pc != 0x003FE8DCu) [[unlikely]] return; }
L_003FE8DC:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_003FE8E0:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003FE944; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_003FE900; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE8FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 327u, depth + 1u); else { c.pc = 0x003FE850u; return; } if (c.pc != 0x003FE8FCu) [[unlikely]] return; }
L_003FE8FC:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_003FE900:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003FE914; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE910u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 327u, depth + 1u); else { c.pc = 0x003FE850u; return; } if (c.pc != 0x003FE910u) [[unlikely]] return; }
L_003FE910:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FE914:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE91Cu);  if (depth < kMaxDepth) unit_00BF(c, 367u, depth + 1u); else { c.pc = 0x003FEB60u; return; } if (c.pc != 0x003FE91Cu) [[unlikely]] return; }
L_003FE91C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE928u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00BF(c, 365u, depth + 1u); else { c.pc = 0x003FEB10u; return; } if (c.pc != 0x003FE928u) [[unlikely]] return; }
L_003FE928:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE930u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 364u, depth + 1u); else { c.pc = 0x003FEB00u; return; } if (c.pc != 0x003FE930u) [[unlikely]] return; }
L_003FE930:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE940u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00BF(c, 362u, depth + 1u); else { c.pc = 0x003FEAE0u; return; } if (c.pc != 0x003FE940u) [[unlikely]] return; }
L_003FE940:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FE944:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE94Cu);  if (depth < kMaxDepth) unit_00BF(c, 367u, depth + 1u); else { c.pc = 0x003FEB60u; return; } if (c.pc != 0x003FE94Cu) [[unlikely]] return; }
L_003FE94C:
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE958u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00BF(c, 276u, depth + 1u); else { c.pc = 0x003FE3A0u; return; } if (c.pc != 0x003FE958u) [[unlikely]] return; }
L_003FE958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE960u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 364u, depth + 1u); else { c.pc = 0x003FEB00u; return; } if (c.pc != 0x003FE960u) [[unlikely]] return; }
L_003FE960:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[19], ld32((c.r[16].w[0] + 4u)));  goto L_003FE974; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE970u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003FE970u) [[unlikely]] return; }
L_003FE970:
    set32(c.r[19], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_003FE974:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[3], c.r[16].w[0] + 12u);  goto L_003FEA78; }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_003FE9E4; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_003FE9A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE99Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 327u, depth + 1u); else { c.pc = 0x003FE850u; return; } if (c.pc != 0x003FE99Cu) [[unlikely]] return; }
L_003FE99C:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_003FE9A0:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003FE9B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE9B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 327u, depth + 1u); else { c.pc = 0x003FE850u; return; } if (c.pc != 0x003FE9B0u) [[unlikely]] return; }
L_003FE9B0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FE9B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE9BCu);  if (depth < kMaxDepth) unit_00BF(c, 367u, depth + 1u); else { c.pc = 0x003FEB60u; return; } if (c.pc != 0x003FE9BCu) [[unlikely]] return; }
L_003FE9BC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE9C8u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00BF(c, 365u, depth + 1u); else { c.pc = 0x003FEB10u; return; } if (c.pc != 0x003FE9C8u) [[unlikely]] return; }
L_003FE9C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE9D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 364u, depth + 1u); else { c.pc = 0x003FEB00u; return; } if (c.pc != 0x003FE9D0u) [[unlikely]] return; }
L_003FE9D0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE9E0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00BF(c, 362u, depth + 1u); else { c.pc = 0x003FEAE0u; return; } if (c.pc != 0x003FE9E0u) [[unlikely]] return; }
L_003FE9E0:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_003FE9E4:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003FEA48; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_003FEA04; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEA00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 327u, depth + 1u); else { c.pc = 0x003FE850u; return; } if (c.pc != 0x003FEA00u) [[unlikely]] return; }
L_003FEA00:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_003FEA04:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003FEA18; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEA14u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 327u, depth + 1u); else { c.pc = 0x003FE850u; return; } if (c.pc != 0x003FEA14u) [[unlikely]] return; }
L_003FEA14:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FEA18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEA20u);  if (depth < kMaxDepth) unit_00BF(c, 367u, depth + 1u); else { c.pc = 0x003FEB60u; return; } if (c.pc != 0x003FEA20u) [[unlikely]] return; }
L_003FEA20:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEA2Cu); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00BF(c, 365u, depth + 1u); else { c.pc = 0x003FEB10u; return; } if (c.pc != 0x003FEA2Cu) [[unlikely]] return; }
L_003FEA2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEA34u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 364u, depth + 1u); else { c.pc = 0x003FEB00u; return; } if (c.pc != 0x003FEA34u) [[unlikely]] return; }
L_003FEA34:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEA44u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00BF(c, 362u, depth + 1u); else { c.pc = 0x003FEAE0u; return; } if (c.pc != 0x003FEA44u) [[unlikely]] return; }
L_003FEA44:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FEA48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEA50u);  if (depth < kMaxDepth) unit_00BF(c, 367u, depth + 1u); else { c.pc = 0x003FEB60u; return; } if (c.pc != 0x003FEA50u) [[unlikely]] return; }
L_003FEA50:
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEA5Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00BF(c, 276u, depth + 1u); else { c.pc = 0x003FE3A0u; return; } if (c.pc != 0x003FEA5Cu) [[unlikely]] return; }
L_003FEA5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEA64u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 364u, depth + 1u); else { c.pc = 0x003FEB00u; return; } if (c.pc != 0x003FEA64u) [[unlikely]] return; }
L_003FEA64:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003FEA74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEA74u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003FEA74u) [[unlikely]] return; }
L_003FEA74:
    set32(c.r[3], c.r[16].w[0] + 12u);
    c.budget -= 1;
L_003FEA78:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FEAB4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FEAB4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FEAB4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FEAB4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FEAB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEAB4u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003FEAB4u) [[unlikely]] return; }
L_003FEAB4:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003FEAC8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEAC4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003FEAC4u) [[unlikely]] return; }
L_003FEAC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003FEAC8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003FEAE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003FEAF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEAF4u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003FEAF4u) [[unlikely]] return; }
L_003FEAF4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FEB00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 8u);  c.pc = t; return; }
L_003FEB10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003FEB50; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003FEB54; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003FEB50; } }
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FEB50; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FEB50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEB50u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003FEB50u) [[unlikely]] return; }
L_003FEB50:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003FEB54:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FEB60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003FEB70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003FEBA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEB90u);  if (depth < kMaxDepth) unit_00BF(c, 327u, depth + 1u); else { c.pc = 0x003FE850u; return; } if (c.pc != 0x003FEB90u) [[unlikely]] return; }
L_003FEB90:
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[3], c.r[16].w[0] + 12u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 4;
L_003FEBA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FEBB0:
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
L_003FEBE0:
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
    { const bool t = c.r[1].d[0] != 0ull; c.r[18].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003FEC44; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEC3Cu); set32(c.r[5], c.r[5].w[0] - 3168u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x003FEC3Cu) [[unlikely]] return; }
L_003FEC3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEC44u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x003FEC44u) [[unlikely]] return; }
L_003FEC44:
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEC50u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x003FEC50u) [[unlikely]] return; }
L_003FEC50:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[17].w[0] + 12u);
    c.budget -= 4;
    if (c.r[16].d[0] == 0ull) { st32((c.r[17].w[0] + 4u), 0u);  goto L_003FEC78; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEC6Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003FEC6Cu) [[unlikely]] return; }
L_003FEC6C:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 3;
L_003FEC78:
    st32((c.r[17].w[0]), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_003FEC98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[17].w[0]);  if (t) { goto L_003FEC9C; } }
L_003FEC98:
    st32((c.r[20].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 1;
L_003FEC9C:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FECB4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 69u, depth + 1u); else { c.pc = 0x00114770u; return; } if (c.pc != 0x003FECB4u) [[unlikely]] return; }
L_003FECB4:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003FECC4; }
    st32((c.r[21].w[0] + 20u), c.r[17].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_003FECC4:
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
L_003FECF0:
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
    { const bool t = c.r[1].d[0] != 0ull; c.r[18].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003FED54; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FED4Cu); set32(c.r[5], c.r[5].w[0] - 3168u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x003FED4Cu) [[unlikely]] return; }
L_003FED4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FED54u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x003FED54u) [[unlikely]] return; }
L_003FED54:
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FED60u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x003FED60u) [[unlikely]] return; }
L_003FED60:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[17].w[0] + 12u);
    c.budget -= 4;
    if (c.r[16].d[0] == 0ull) { st32((c.r[17].w[0] + 4u), 0u);  goto L_003FED88; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FED7Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003FED7Cu) [[unlikely]] return; }
L_003FED7C:
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 3;
L_003FED88:
    st32((c.r[17].w[0]), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_003FEDA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[17].w[0]);  if (t) { goto L_003FEDAC; } }
L_003FEDA8:
    st32((c.r[20].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 1;
L_003FEDAC:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEDC4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 69u, depth + 1u); else { c.pc = 0x00114770u; return; } if (c.pc != 0x003FEDC4u) [[unlikely]] return; }
L_003FEDC4:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003FEDD4; }
    st32((c.r[21].w[0] + 20u), c.r[17].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_003FEDD4:
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
L_003FEE00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FEE48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 23904u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEE30u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00AF(c, 403u, depth + 1u); else { c.pc = 0x003BF300u; return; } if (c.pc != 0x003FEE30u) [[unlikely]] return; }
L_003FEE30:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003FEE4C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEE48u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003FEE48u) [[unlikely]] return; }
L_003FEE48:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FEE4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FEE60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEE70u); set32(c.r[4], ld32((c.r[28].w[0] - 26896u)));  if (depth < kMaxDepth) unit_00B4(c, 372u, depth + 1u); else { c.pc = 0x003D3C40u; return; } if (c.pc != 0x003FEE70u) [[unlikely]] return; }
L_003FEE70:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FEE80:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x003BF2F0u | kUnwind; return; } [[clang::musttail]] return unit_00AF(c, 402u, depth); }
L_003FEE90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 3136u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEEACu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 406u, depth + 1u); else { c.pc = 0x003BF370u; return; } if (c.pc != 0x003FEEACu) [[unlikely]] return; }
L_003FEEAC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 23904u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FEED0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FEF40; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 23936u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003FEF28; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 21584u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003FEF28; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003FEF28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEF28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003FEF28u) [[unlikely]] return; }
L_003FEF28:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003FEF44; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEF40u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003FEF40u) [[unlikely]] return; }
L_003FEF40:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FEF44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FEF60:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_003FEF88; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 5u);  goto L_003FEF80; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_003FEF80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FEF8C; } }
L_003FEF88:
    set32(c.r[2], c.r[2].w[0] - 3128u);
    c.budget -= 1;
L_003FEF8C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003FEFA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 3120u);  c.pc = t; return; }
L_003FEFB0:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEFD8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x003FEFD8u) [[unlikely]] return; }
L_003FEFD8:
    set32(c.r[17], c.r[29].w[0] + 208u);
    set32(c.r[19], c.r[2].w[0] + 364u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEFE8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x003FEFE8u) [[unlikely]] return; }
L_003FEFE8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_003FF000; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEFFCu);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x003FEFFCu) [[unlikely]] return; }
L_003FEFFC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_003FF000:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[29].w[0] + 256u), c.r[2].w[0]);  goto L_003FF014; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF010u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x003FF010u) [[unlikely]] return; }
L_003FF010:
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    c.budget -= 1;
L_003FF014:
    set32(c.r[5], c.r[29].w[0] + 252u);
    set32(c.r[2], c.r[29].w[0] + 260u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[6], c.r[29].w[0] + 256u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF030u); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00C0(c, 7u, depth + 1u); else { c.pc = 0x004000B0u; return; } if (c.pc != 0x003FF030u) [[unlikely]] return; }
L_003FF030:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 268u), c.r[2].w[0]);  if (t) { goto L_003FF120; } }
L_003FF03C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF044u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003FF044u) [[unlikely]] return; }
L_003FF044:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003FF0A0; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 268u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], c.r[5].w[0] - 26416u);
    set32(c.r[3], c.r[3].w[0] - 25632u);
    set32(c.r[17], ld32((c.r[6].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + 23984u);
    set32(c.r[4], c.r[18].w[0] + 8u);
    st32((c.r[18].w[0]), c.r[5].w[0]);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[5], c.r[17].w[0] + 8u);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF08Cu); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003FF08Cu) [[unlikely]] return; }
L_003FF08C:
    set32(c.r[4], c.r[18].w[0] + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF098u); set32(c.r[5], c.r[17].w[0] + 24u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003FF098u) [[unlikely]] return; }
L_003FF098:
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    st32((c.r[18].w[0] + 40u), c.f[0]);
    c.budget -= 2;
L_003FF0A0:
    set32(c.r[2], ld32((c.r[29].w[0] + 268u)));
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF0B0u); set32(c.r[5], c.r[2].w[0] + 12u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003FF0B0u) [[unlikely]] return; }
L_003FF0B0:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF0C0u); st32((c.r[29].w[0] + 192u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003FF0C0u) [[unlikely]] return; }
L_003FF0C0:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], c.r[29].w[0] + 208u);
    set32(c.r[6], c.r[29].w[0] + 144u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF0D8u); st32((c.r[29].w[0] + 160u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BF(c, 552u, depth + 1u); else { c.pc = 0x003FFFB0u; return; } if (c.pc != 0x003FF0D8u) [[unlikely]] return; }
L_003FF0D8:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF0E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003FF0E4u) [[unlikely]] return; }
L_003FF0E4:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF0F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003FF0F0u) [[unlikely]] return; }
L_003FF0F0:
    set32(c.r[2], ld32((c.r[29].w[0] + 268u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 268u)));  goto L_003FF114; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF110u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FF110u) [[unlikely]] return; }
L_003FF110:
    set32(c.r[2], ld32((c.r[29].w[0] + 268u)));
    c.budget -= 1;
L_003FF114:
    set32(c.r[4], c.r[29].w[0] + 268u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF120u); st32((c.r[2].w[0] + 28u), 0u);  if (depth < kMaxDepth) unit_0005(c, 13u, depth + 1u); else { c.pc = 0x00114160u; return; } if (c.pc != 0x003FF120u) [[unlikely]] return; }
L_003FF120:
    set32(c.r[3], ld32((c.r[29].w[0] + 268u)));
    set32(c.r[2], c.r[19].w[0] + 12u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], 0u + 44u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FF03Cu | kUnwind; return; } goto L_003FF03C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF138u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 544u, depth + 1u); else { c.pc = 0x003FFE70u; return; } if (c.pc != 0x003FF138u) [[unlikely]] return; }
L_003FF138:
    set32(c.r[3], ld32((c.r[29].w[0] + 228u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 264u), c.r[3].w[0]);  if (t) { goto L_003FF228; } }
L_003FF144:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF14Cu); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003FF14Cu) [[unlikely]] return; }
L_003FF14C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003FF1A8; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 264u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], c.r[5].w[0] - 26416u);
    set32(c.r[3], c.r[3].w[0] - 25632u);
    set32(c.r[17], ld32((c.r[6].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + 23984u);
    set32(c.r[4], c.r[18].w[0] + 8u);
    st32((c.r[18].w[0]), c.r[5].w[0]);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[5], c.r[17].w[0] + 8u);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF194u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003FF194u) [[unlikely]] return; }
L_003FF194:
    set32(c.r[4], c.r[18].w[0] + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF1A0u); set32(c.r[5], c.r[17].w[0] + 24u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003FF1A0u) [[unlikely]] return; }
L_003FF1A0:
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    st32((c.r[18].w[0] + 40u), c.f[0]);
    c.budget -= 2;
L_003FF1A8:
    set32(c.r[2], ld32((c.r[29].w[0] + 264u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF1B8u); set32(c.r[5], c.r[2].w[0] + 12u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003FF1B8u) [[unlikely]] return; }
L_003FF1B8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF1C8u); st32((c.r[29].w[0] + 128u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003FF1C8u) [[unlikely]] return; }
L_003FF1C8:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[4], c.r[29].w[0] + 232u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF1E0u); st32((c.r[29].w[0] + 96u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BF(c, 552u, depth + 1u); else { c.pc = 0x003FFFB0u; return; } if (c.pc != 0x003FF1E0u) [[unlikely]] return; }
L_003FF1E0:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF1ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003FF1ECu) [[unlikely]] return; }
L_003FF1EC:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF1F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003FF1F8u) [[unlikely]] return; }
L_003FF1F8:
    set32(c.r[2], ld32((c.r[29].w[0] + 264u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 264u)));  goto L_003FF21C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF218u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FF218u) [[unlikely]] return; }
L_003FF218:
    set32(c.r[2], ld32((c.r[29].w[0] + 264u)));
    c.budget -= 1;
L_003FF21C:
    set32(c.r[4], c.r[29].w[0] + 264u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF228u); st32((c.r[2].w[0] + 28u), 0u);  if (depth < kMaxDepth) unit_0005(c, 13u, depth + 1u); else { c.pc = 0x00114160u; return; } if (c.pc != 0x003FF228u) [[unlikely]] return; }
L_003FF228:
    set32(c.r[4], ld32((c.r[29].w[0] + 264u)));
    set32(c.r[3], c.r[29].w[0] + 220u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[5], ld32((c.r[16].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FF144u | kUnwind; return; } goto L_003FF144; }
    set32(c.r[5], ld32((c.r[29].w[0] + 220u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003FF250; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF24Cu); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_00BF(c, 503u, depth + 1u); else { c.pc = 0x003FFB50u; return; } if (c.pc != 0x003FF24Cu) [[unlikely]] return; }
L_003FF24C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003FF250:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_003FF270:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FF2B4; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_003FF2A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF29Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003FF29Cu) [[unlikely]] return; }
L_003FF29C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_003FF2A0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003FF2B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF2B4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003FF2B4u) [[unlikely]] return; }
L_003FF2B4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FF2B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FF2D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FF340; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 24u);
    set32(c.r[2], c.r[2].w[0] + 23984u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003FF308; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF308u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003FF308u) [[unlikely]] return; }
L_003FF308:
    set32(c.r[4], c.r[17].w[0] + 8u);
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003FF320; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF31Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003FF31Cu) [[unlikely]] return; }
L_003FF31C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FF320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF328u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 139u, depth + 1u); else { c.pc = 0x001354E0u; return; } if (c.pc != 0x003FF328u) [[unlikely]] return; }
L_003FF328:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003FF344; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF340u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003FF340u) [[unlikely]] return; }
L_003FF340:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FF344:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FF360:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[5].w[0])));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF388u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FF388u) [[unlikely]] return; }
L_003FF388:
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[10], 0u + 1u);  goto L_003FF398; }
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FF398:
    set32(c.r[2], ld32((c.r[16].w[0] + 188u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + 188u);  if (t) { goto L_003FF3B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_003FF3B4; } }
L_003FF3B0:
    set32(c.r[6], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_003FF3B4:
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + 72u);  if (t) { goto L_003FF3CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_003FF3D0; } }
L_003FF3CC:
    set32(c.r[7], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_003FF3D0:
    set32(c.r[8], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[9], ld32((c.r[16].w[0] + 112u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF3E4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 466u, depth + 1u); else { c.pc = 0x003FF6E0u; return; } if (c.pc != 0x003FF3E4u) [[unlikely]] return; }
L_003FF3E4:
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF3F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x003FF3F0u) [[unlikely]] return; }
L_003FF3F0:
    set32(c.r[16], c.r[2].w[0] + 364u);
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF404u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00BF(c, 499u, depth + 1u); else { c.pc = 0x003FFAB0u; return; } if (c.pc != 0x003FF404u) [[unlikely]] return; }
L_003FF404:
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[2], c.r[16].w[0] + 12u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 48u);  goto L_003FF42C; }
    set32(c.r[16], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF424u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003FF424u) [[unlikely]] return; }
L_003FF424:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FF43C; } }
L_003FF42C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF438u); set32(c.r[16], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003FF438u) [[unlikely]] return; }
L_003FF438:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003FF43C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003FF450:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF488u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x003FF488u) [[unlikely]] return; }
L_003FF488:
    set32(c.r[16], c.r[2].w[0] + 364u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF498u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003FF498u) [[unlikely]] return; }
L_003FF498:
    set32(c.r[4], c.r[29].w[0] + 204u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF4A8u); set32(c.r[6], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_00BF(c, 499u, depth + 1u); else { c.pc = 0x003FFAB0u; return; } if (c.pc != 0x003FF4A8u) [[unlikely]] return; }
L_003FF4A8:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF4B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003FF4B4u) [[unlikely]] return; }
L_003FF4B4:
    set32(c.r[3], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[2], c.r[16].w[0] + 12u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[5], ld32((c.r[19].w[0] + 4u)));  goto L_003FF518; }
    set32(c.r[4], ld32((c.r[3].w[0] + 28u)));
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003FF4E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003FF5D0; } }
L_003FF4E0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 204u)));  goto L_003FF4FC; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF4F8u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FF4F8u) [[unlikely]] return; }
L_003FF4F8:
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 1;
L_003FF4FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 200u);
    st32((c.r[2].w[0] + 28u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF514u); st32((c.r[29].w[0] + 200u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BF(c, 546u, depth + 1u); else { c.pc = 0x003FFEB0u; return; } if (c.pc != 0x003FF514u) [[unlikely]] return; }
L_003FF514:
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_003FF518:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF520u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003FF520u) [[unlikely]] return; }
L_003FF520:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003FF568; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF530u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 142u, depth + 1u); else { c.pc = 0x00135570u; return; } if (c.pc != 0x003FF530u) [[unlikely]] return; }
L_003FF530:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[19].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + 23984u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF544u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003FF544u) [[unlikely]] return; }
L_003FF544:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF54Cu); set32(c.r[4], c.r[19].w[0] + 24u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003FF54Cu) [[unlikely]] return; }
L_003FF54C:
    set32(c.r[4], c.r[19].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF558u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003FF558u) [[unlikely]] return; }
L_003FF558:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF564u); set32(c.r[4], c.r[19].w[0] + 24u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003FF564u) [[unlikely]] return; }
L_003FF564:
    st32((c.r[19].w[0] + 40u), c.f[20]);
    c.budget -= 1;
L_003FF568:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF574u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x003FF574u) [[unlikely]] return; }
L_003FF574:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF580u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003FF580u) [[unlikely]] return; }
L_003FF580:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF590u); st32((c.r[29].w[0] + 144u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x003FF590u) [[unlikely]] return; }
L_003FF590:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF5A8u); st32((c.r[29].w[0] + 112u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BF(c, 552u, depth + 1u); else { c.pc = 0x003FFFB0u; return; } if (c.pc != 0x003FF5A8u) [[unlikely]] return; }
L_003FF5A8:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF5B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003FF5B4u) [[unlikely]] return; }
L_003FF5B4:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF5C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003FF5C0u) [[unlikely]] return; }
L_003FF5C0:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF5CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003FF5CCu) [[unlikely]] return; }
L_003FF5CC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003FF5D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_003FF5F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[6].w[0])));
    c.f[20] = c.f[12];
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF628u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003FF628u) [[unlikely]] return; }
L_003FF628:
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[10], 0u + 1u);  goto L_003FF638; }
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003FF638:
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    set32(c.r[9], ld32((c.r[16].w[0] + 112u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 92u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + 72u);  if (t) { goto L_003FF658; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_003FF65C; } }
L_003FF658:
    set32(c.r[7], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_003FF65C:
    set32(c.r[2], ld32((c.r[16].w[0] + 188u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + 188u);  if (t) { goto L_003FF674; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_003FF678; } }
L_003FF674:
    set32(c.r[6], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_003FF678:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF684u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 466u, depth + 1u); else { c.pc = 0x003FF6E0u; return; } if (c.pc != 0x003FF684u) [[unlikely]] return; }
L_003FF684:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 81u);  goto L_003FF698; }
    set32(c.r[5], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_003FF698:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF6A8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00BF(c, 441u, depth + 1u); else { c.pc = 0x003FF450u; return; } if (c.pc != 0x003FF6A8u) [[unlikely]] return; }
L_003FF6A8:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF6B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003FF6B8u) [[unlikely]] return; }
L_003FF6B8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003FF6E0:
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != 0ull; c.r[2].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_003FF6F8; } }
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[9], c.r[9].w[0] - 3088u);  if (t) { goto L_003FF700; } }
L_003FF6F8:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[9], c.r[9].w[0] - 3080u);
    c.budget -= 2;
L_003FF700:
    c.budget -= 2;
    if (c.r[10].d[0] != 0ull) { c.r[11].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_003FF714; }
    c.r[11].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[11], c.r[11].w[0] - 3052u);  if (t) { goto L_003FF718; } }
L_003FF714:
    set32(c.r[11], c.r[11].w[0] - 3042u);
    c.budget -= 1;
L_003FF718:
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[10].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    c.budget -= 7;
    { set32(c.r[6], c.r[6].w[0] - 3072u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0013E9F0u | kUnwind; return; } [[clang::musttail]] return unit_000F(c, 268u, depth); }
L_003FF740:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 23968u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[16], c.r[18].w[0] + 8u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF774u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 142u, depth + 1u); else { c.pc = 0x00135570u; return; } if (c.pc != 0x003FF774u) [[unlikely]] return; }
L_003FF774:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + 23984u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF788u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003FF788u) [[unlikely]] return; }
L_003FF788:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF790u); set32(c.r[4], c.r[16].w[0] + 24u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003FF790u) [[unlikely]] return; }
L_003FF790:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF7A0u); set32(c.r[5], c.r[5].w[0] - 3035u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003FF7A0u) [[unlikely]] return; }
L_003FF7A0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[16].w[0] + 24u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF7B0u); set32(c.r[5], c.r[5].w[0] - 3019u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x003FF7B0u) [[unlikely]] return; }
L_003FF7B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[17].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003FF7E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 44u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF7F4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003FF7F4u) [[unlikely]] return; }
L_003FF7F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003FF834; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF804u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 142u, depth + 1u); else { c.pc = 0x00135570u; return; } if (c.pc != 0x003FF804u) [[unlikely]] return; }
L_003FF804:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + 23984u);
    c.budget -= 3;
L_003FF810:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF818u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003FF818u) [[unlikely]] return; }
L_003FF818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF820u); set32(c.r[4], c.r[16].w[0] + 24u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003FF820u) [[unlikely]] return; }
L_003FF820:
    set32(c.r[2], 0u + 9999u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.budget -= 5;
L_003FF834:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FF850:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 22360u);
    set32(c.r[5], c.r[5].w[0] - 3012u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF878u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0007(c, 125u, depth + 1u); else { c.pc = 0x0011CFB0u; return; } if (c.pc != 0x003FF878u) [[unlikely]] return; }
L_003FF878:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 2999u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 2995u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[8], 0u - 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF8A4u); set32(c.r[9], c.r[9].w[0] - 2988u);  if (depth < kMaxDepth) unit_0007(c, 100u, depth + 1u); else { c.pc = 0x0011CB70u; return; } if (c.pc != 0x003FF8A4u) [[unlikely]] return; }
L_003FF8A4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 2987u);
    set32(c.r[6], c.r[6].w[0] - 2995u);
    set32(c.r[7], 0u + 24u);
    set32(c.r[8], 0u - 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF8CCu); set32(c.r[9], c.r[9].w[0] - 2988u);  if (depth < kMaxDepth) unit_0007(c, 100u, depth + 1u); else { c.pc = 0x0011CB70u; return; } if (c.pc != 0x003FF8CCu) [[unlikely]] return; }
L_003FF8CC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 2969u);
    set32(c.r[6], c.r[6].w[0] - 2964u);
    set32(c.r[7], 0u + 40u);
    set32(c.r[8], 0u - 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF8F4u); set32(c.r[9], c.r[9].w[0] - 2988u);  if (depth < kMaxDepth) unit_0007(c, 100u, depth + 1u); else { c.pc = 0x0011CB70u; return; } if (c.pc != 0x003FF8F4u) [[unlikely]] return; }
L_003FF8F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FF910:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30352u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_003FF92C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003FF93C; } }
L_003FF92C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF934u);  if (depth < kMaxDepth) unit_000D(c, 144u, depth + 1u); else { c.pc = 0x001355D0u; return; } if (c.pc != 0x003FF934u) [[unlikely]] return; }
L_003FF934:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003FF93C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FF950:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF974u); set32(c.r[4], c.r[4].w[0] - 22360u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x003FF974u) [[unlikely]] return; }
L_003FF974:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003FF984; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003FF994; } }
L_003FF984:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF98Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000D(c, 145u, depth + 1u); else { c.pc = 0x001355F0u; return; } if (c.pc != 0x003FF98Cu) [[unlikely]] return; }
L_003FF98C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_003FF994:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FF9B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 31220u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_003FF9C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30352u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_003FF9DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003FF9E4; } }
L_003FF9DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF9E4u);  if (depth < kMaxDepth) unit_000D(c, 148u, depth + 1u); else { c.pc = 0x00135640u; return; } if (c.pc != 0x003FF9E4u) [[unlikely]] return; }
L_003FF9E4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FF9F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30352u)));  c.pc = t; return; }
L_003FFA00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FFA84; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[17].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 23968u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_003FFA6C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 23984u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_003FFA4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFA4Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003FFA4Cu) [[unlikely]] return; }
L_003FFA4C:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 8u);  goto L_003FFA64; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFA60u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x003FFA60u) [[unlikely]] return; }
L_003FFA60:
    set32(c.r[4], c.r[17].w[0] + 8u);
    c.budget -= 1;
L_003FFA64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFA6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000D(c, 139u, depth + 1u); else { c.pc = 0x001354E0u; return; } if (c.pc != 0x003FFA6Cu) [[unlikely]] return; }
L_003FFA6C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003FFA88; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFA84u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003FFA84u) [[unlikely]] return; }
L_003FFA84:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FFA88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FFAA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 3104u);  c.pc = t; return; }
L_003FFAB0:
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
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[19].w[0] + 12u);  if (t) { goto L_003FFAFC; } }
L_003FFAE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFAECu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x003FFAECu) [[unlikely]] return; }
L_003FFAEC:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[17], ld32((c.r[17].w[0] + 4u)));  goto L_003FFAFC; }
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 2;
L_003FFAFC:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], c.r[17].w[0] + 12u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FFAE4u | kUnwind; return; } goto L_003FFAE4; }
    set32(c.r[3], c.r[19].w[0] + 12u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[3], c.r[19].w[0] + 12u);  goto L_003FFB28; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFB1Cu); set32(c.r[5], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x003FFB1Cu) [[unlikely]] return; }
L_003FFB1C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { st32((c.r[20].w[0]), c.r[16].w[0]);  goto L_003FFB2C; }
    set32(c.r[3], c.r[19].w[0] + 12u);
    c.budget -= 1;
L_003FFB28:
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_003FFB2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003FFB50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FFC70; } }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_003FFBE0; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_003FFB9C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFB98u);  if (depth < kMaxDepth) unit_00BF(c, 503u, depth + 1u); else { c.pc = 0x003FFB50u; return; } if (c.pc != 0x003FFB98u) [[unlikely]] return; }
L_003FFB98:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_003FFB9C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003FFBB0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFBACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 503u, depth + 1u); else { c.pc = 0x003FFB50u; return; } if (c.pc != 0x003FFBACu) [[unlikely]] return; }
L_003FFBAC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FFBB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFBB8u);  if (depth < kMaxDepth) unit_00BF(c, 543u, depth + 1u); else { c.pc = 0x003FFE60u; return; } if (c.pc != 0x003FFBB8u) [[unlikely]] return; }
L_003FFBB8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFBC4u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00BF(c, 541u, depth + 1u); else { c.pc = 0x003FFE10u; return; } if (c.pc != 0x003FFBC4u) [[unlikely]] return; }
L_003FFBC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFBCCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 540u, depth + 1u); else { c.pc = 0x003FFE00u; return; } if (c.pc != 0x003FFBCCu) [[unlikely]] return; }
L_003FFBCC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFBDCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00BF(c, 538u, depth + 1u); else { c.pc = 0x003FFDE0u; return; } if (c.pc != 0x003FFBDCu) [[unlikely]] return; }
L_003FFBDC:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_003FFBE0:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003FFC44; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_003FFC00; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFBFCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 503u, depth + 1u); else { c.pc = 0x003FFB50u; return; } if (c.pc != 0x003FFBFCu) [[unlikely]] return; }
L_003FFBFC:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_003FFC00:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003FFC14; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFC10u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 503u, depth + 1u); else { c.pc = 0x003FFB50u; return; } if (c.pc != 0x003FFC10u) [[unlikely]] return; }
L_003FFC10:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FFC14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFC1Cu);  if (depth < kMaxDepth) unit_00BF(c, 543u, depth + 1u); else { c.pc = 0x003FFE60u; return; } if (c.pc != 0x003FFC1Cu) [[unlikely]] return; }
L_003FFC1C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFC28u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00BF(c, 541u, depth + 1u); else { c.pc = 0x003FFE10u; return; } if (c.pc != 0x003FFC28u) [[unlikely]] return; }
L_003FFC28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFC30u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 540u, depth + 1u); else { c.pc = 0x003FFE00u; return; } if (c.pc != 0x003FFC30u) [[unlikely]] return; }
L_003FFC30:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFC40u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00BF(c, 538u, depth + 1u); else { c.pc = 0x003FFDE0u; return; } if (c.pc != 0x003FFC40u) [[unlikely]] return; }
L_003FFC40:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FFC44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFC4Cu);  if (depth < kMaxDepth) unit_00BF(c, 543u, depth + 1u); else { c.pc = 0x003FFE60u; return; } if (c.pc != 0x003FFC4Cu) [[unlikely]] return; }
L_003FFC4C:
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFC58u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00BF(c, 426u, depth + 1u); else { c.pc = 0x003FF270u; return; } if (c.pc != 0x003FFC58u) [[unlikely]] return; }
L_003FFC58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFC60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 540u, depth + 1u); else { c.pc = 0x003FFE00u; return; } if (c.pc != 0x003FFC60u) [[unlikely]] return; }
L_003FFC60:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[19], ld32((c.r[16].w[0] + 4u)));  goto L_003FFC74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFC70u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003FFC70u) [[unlikely]] return; }
L_003FFC70:
    set32(c.r[19], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_003FFC74:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[3], c.r[16].w[0] + 12u);  goto L_003FFD78; }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_003FFCE4; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_003FFCA0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFC9Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 503u, depth + 1u); else { c.pc = 0x003FFB50u; return; } if (c.pc != 0x003FFC9Cu) [[unlikely]] return; }
L_003FFC9C:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_003FFCA0:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003FFCB4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFCB0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 503u, depth + 1u); else { c.pc = 0x003FFB50u; return; } if (c.pc != 0x003FFCB0u) [[unlikely]] return; }
L_003FFCB0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FFCB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFCBCu);  if (depth < kMaxDepth) unit_00BF(c, 543u, depth + 1u); else { c.pc = 0x003FFE60u; return; } if (c.pc != 0x003FFCBCu) [[unlikely]] return; }
L_003FFCBC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFCC8u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00BF(c, 541u, depth + 1u); else { c.pc = 0x003FFE10u; return; } if (c.pc != 0x003FFCC8u) [[unlikely]] return; }
L_003FFCC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFCD0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 540u, depth + 1u); else { c.pc = 0x003FFE00u; return; } if (c.pc != 0x003FFCD0u) [[unlikely]] return; }
L_003FFCD0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFCE0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00BF(c, 538u, depth + 1u); else { c.pc = 0x003FFDE0u; return; } if (c.pc != 0x003FFCE0u) [[unlikely]] return; }
L_003FFCE0:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_003FFCE4:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003FFD48; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_003FFD04; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFD00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 503u, depth + 1u); else { c.pc = 0x003FFB50u; return; } if (c.pc != 0x003FFD00u) [[unlikely]] return; }
L_003FFD00:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_003FFD04:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003FFD18; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFD14u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 503u, depth + 1u); else { c.pc = 0x003FFB50u; return; } if (c.pc != 0x003FFD14u) [[unlikely]] return; }
L_003FFD14:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FFD18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFD20u);  if (depth < kMaxDepth) unit_00BF(c, 543u, depth + 1u); else { c.pc = 0x003FFE60u; return; } if (c.pc != 0x003FFD20u) [[unlikely]] return; }
L_003FFD20:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFD2Cu); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00BF(c, 541u, depth + 1u); else { c.pc = 0x003FFE10u; return; } if (c.pc != 0x003FFD2Cu) [[unlikely]] return; }
L_003FFD2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFD34u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 540u, depth + 1u); else { c.pc = 0x003FFE00u; return; } if (c.pc != 0x003FFD34u) [[unlikely]] return; }
L_003FFD34:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFD44u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00BF(c, 538u, depth + 1u); else { c.pc = 0x003FFDE0u; return; } if (c.pc != 0x003FFD44u) [[unlikely]] return; }
L_003FFD44:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FFD48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFD50u);  if (depth < kMaxDepth) unit_00BF(c, 543u, depth + 1u); else { c.pc = 0x003FFE60u; return; } if (c.pc != 0x003FFD50u) [[unlikely]] return; }
L_003FFD50:
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFD5Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00BF(c, 426u, depth + 1u); else { c.pc = 0x003FF270u; return; } if (c.pc != 0x003FFD5Cu) [[unlikely]] return; }
L_003FFD5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFD64u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 540u, depth + 1u); else { c.pc = 0x003FFE00u; return; } if (c.pc != 0x003FFD64u) [[unlikely]] return; }
L_003FFD64:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_003FFD74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFD74u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003FFD74u) [[unlikely]] return; }
L_003FFD74:
    set32(c.r[3], c.r[16].w[0] + 12u);
    c.budget -= 1;
L_003FFD78:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FFDB4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FFDB4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FFDB4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FFDB4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FFDB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFDB4u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003FFDB4u) [[unlikely]] return; }
L_003FFDB4:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003FFDC8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFDC4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003FFDC4u) [[unlikely]] return; }
L_003FFDC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003FFDC8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003FFDE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003FFDF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFDF4u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003FFDF4u) [[unlikely]] return; }
L_003FFDF4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FFE00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 8u);  c.pc = t; return; }
L_003FFE10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003FFE50; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_003FFE54; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003FFE50; } }
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FFE50; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FFE50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFE50u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003FFE50u) [[unlikely]] return; }
L_003FFE50:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003FFE54:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003FFE60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003FFE70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003FFEA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFE90u);  if (depth < kMaxDepth) unit_00BF(c, 503u, depth + 1u); else { c.pc = 0x003FFB50u; return; } if (c.pc != 0x003FFE90u) [[unlikely]] return; }
L_003FFE90:
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[3], c.r[16].w[0] + 12u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 4;
L_003FFEA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003FFEB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 8;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003FFF30; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[17].w[0] + 20u);  if (t) { goto L_003FFF08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[3].w[0])));  if (t) { goto L_003FFEEC; } }
L_003FFEE4:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 2;
L_003FFEEC:
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FFEE4u | kUnwind; return; } goto L_003FFEE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_003FFF28; } }
L_003FFF08:
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[2], 0u - 2u);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    if (c.r[4].d[0] != c.r[2].d[0]) { st32((c.r[5].w[0]), c.r[3].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FFF08u | kUnwind; return; } goto L_003FFF08; }
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_003FFF28:
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_003FFF30:
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFF3Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 45u, depth + 1u); else { c.pc = 0x001188B0u; return; } if (c.pc != 0x003FFF3Cu) [[unlikely]] return; }
L_003FFF3C:
    set32(c.r[3], c.r[16].w[0] + 12u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FFF7C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FFF7C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FFF7C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FFF7C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003FFF7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFF7Cu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003FFF7Cu) [[unlikely]] return; }
L_003FFF7C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_003FFF90; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFF8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x003FFF8Cu) [[unlikely]] return; }
L_003FFF8C:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_003FFF90:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003FFFB0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[22], c.r[21].w[0] + 12u);
    set32(c.r[17], ld32((c.r[5].w[0] + 12u)));
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = c.r[16].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_00C0(c, 3u, depth); } }
L_003FFFFC:
    set32(c.r[5], c.r[17].w[0] + 12u);
    c.budget -= 1;
    [[clang::musttail]] return unit_00C0(c, 1u, depth);
}

}
