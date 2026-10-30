#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0055[4096] = {
    1, 0, 2, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0,
    7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0,
    0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0,
    15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0,
    0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0,
    0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0,
    0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61,
    0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0,
    0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0,
    0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0,
    80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 83, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0,
    87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 90, 0, 0, 91, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0,
    0, 94, 0, 0, 95, 0, 0, 96, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0,
    102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0,
    119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0,
    0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0,
    0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0,
    0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0,
    0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0,
    0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 147, 0,
    0, 148, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 153, 0, 0, 154,
    0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0,
    0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0,
    0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0,
    0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0,
    0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0,
    0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0,
    0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0,
    0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0,
    0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0,
    0, 219, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0,
    0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0, 229, 0, 0,
    230, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 0,
    0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0,
    0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0,
    0, 249, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253,
    0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0,
    0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 263, 0,
    0, 264, 0, 0, 265, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 0,
    0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0,
    0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 284, 0, 285, 0, 286, 0, 287, 0, 288, 0, 0, 289, 0, 0, 290, 0, 0, 291, 0,
    0, 292, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0,
    0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0,
    0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0,
    0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0,
    311, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315,
    0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0,
    320, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0,
    0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0,
    0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0,
    0, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 354, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0,
    0, 0, 360, 0, 0, 361, 0, 0, 362, 0, 0, 363, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0,
    0, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 369, 0, 0, 370, 0, 0, 371, 0, 0, 372, 0, 0, 373, 0, 0, 374, 0, 0, 0,
    0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 387, 0, 0,
    0, 388, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 0,
    395, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0,
    403, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 0,
    409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 413,
    0, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0,
    0, 419, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0,
    0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 431, 0,
    0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 0,
    0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0,
    0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 440, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 447,
    0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 452, 0, 0, 0, 0, 0,
    453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    455, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 459, 0, 0,
    0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 465, 0,
    0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0,
    0, 0, 0, 470, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 475, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 478, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 483, 0, 0, 0,
    484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 485, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 490, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0055(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00254000;
    case 2u: goto L_00254008;
    case 3u: goto L_0025400C;
    case 4u: goto L_0025402C;
    case 5u: goto L_0025403C;
    case 6u: goto L_0025405C;
    case 7u: goto L_00254080;
    case 8u: goto L_00254090;
    case 9u: goto L_002540B0;
    case 10u: goto L_002540D4;
    case 11u: goto L_002540E4;
    case 12u: goto L_00254104;
    case 13u: goto L_00254130;
    case 14u: goto L_00254170;
    case 15u: goto L_00254180;
    case 16u: goto L_002541A4;
    case 17u: goto L_002541B4;
    case 18u: goto L_002541D4;
    case 19u: goto L_00254200;
    case 20u: goto L_00254240;
    case 21u: goto L_00254250;
    case 22u: goto L_00254274;
    case 23u: goto L_00254284;
    case 24u: goto L_002542A4;
    case 25u: goto L_002542D0;
    case 26u: goto L_00254310;
    case 27u: goto L_00254320;
    case 28u: goto L_00254344;
    case 29u: goto L_00254354;
    case 30u: goto L_00254374;
    case 31u: goto L_002543A0;
    case 32u: goto L_002543E0;
    case 33u: goto L_002543F0;
    case 34u: goto L_00254414;
    case 35u: goto L_00254424;
    case 36u: goto L_00254444;
    case 37u: goto L_00254470;
    case 38u: goto L_002544B0;
    case 39u: goto L_002544C0;
    case 40u: goto L_002544E4;
    case 41u: goto L_002544F4;
    case 42u: goto L_00254514;
    case 43u: goto L_00254540;
    case 44u: goto L_0025456C;
    case 45u: goto L_0025459C;
    case 46u: goto L_002545AC;
    case 47u: goto L_002545CC;
    case 48u: goto L_002545E4;
    case 49u: goto L_00254614;
    case 50u: goto L_00254624;
    case 51u: goto L_00254644;
    case 52u: goto L_0025465C;
    case 53u: goto L_0025468C;
    case 54u: goto L_0025469C;
    case 55u: goto L_002546BC;
    case 56u: goto L_002546D4;
    case 57u: goto L_00254704;
    case 58u: goto L_00254714;
    case 59u: goto L_00254734;
    case 60u: goto L_0025474C;
    case 61u: goto L_0025477C;
    case 62u: goto L_0025478C;
    case 63u: goto L_002547AC;
    case 64u: goto L_002547D0;
    case 65u: goto L_00254810;
    case 66u: goto L_00254820;
    case 67u: goto L_0025483C;
    case 68u: goto L_00254858;
    case 69u: goto L_00254868;
    case 70u: goto L_00254884;
    case 71u: goto L_002548A0;
    case 72u: goto L_002548C0;
    case 73u: goto L_002548E8;
    case 74u: goto L_002548F8;
    case 75u: goto L_0025490C;
    case 76u: goto L_0025491C;
    case 77u: goto L_00254950;
    case 78u: goto L_00254964;
    case 79u: goto L_00254974;
    case 80u: goto L_00254980;
    case 81u: goto L_002549A4;
    case 82u: goto L_002549B0;
    case 83u: goto L_002549BC;
    case 84u: goto L_002549C8;
    case 85u: goto L_002549D0;
    case 86u: goto L_002549EC;
    case 87u: goto L_00254A00;
    case 88u: goto L_00254A20;
    case 89u: goto L_00254A2C;
    case 90u: goto L_00254A38;
    case 91u: goto L_00254A44;
    case 92u: goto L_00254A50;
    case 93u: goto L_00254A70;
    case 94u: goto L_00254A84;
    case 95u: goto L_00254A90;
    case 96u: goto L_00254A9C;
    case 97u: goto L_00254AA8;
    case 98u: goto L_00254AB4;
    case 99u: goto L_00254AC8;
    case 100u: goto L_00254AD4;
    case 101u: goto L_00254AE0;
    case 102u: goto L_00254B00;
    case 103u: goto L_00254B24;
    case 104u: goto L_00254B34;
    case 105u: goto L_00254B58;
    case 106u: goto L_00254B74;
    case 107u: goto L_00254B9C;
    case 108u: goto L_00254BB0;
    case 109u: goto L_00254BC4;
    case 110u: goto L_00254BD8;
    case 111u: goto L_00254BEC;
    case 112u: goto L_00254C1C;
    case 113u: goto L_00254C30;
    case 114u: goto L_00254C44;
    case 115u: goto L_00254C70;
    case 116u: goto L_00254CD0;
    case 117u: goto L_00254CE0;
    case 118u: goto L_00254CF0;
    case 119u: goto L_00254D00;
    case 120u: goto L_00254D10;
    case 121u: goto L_00254D38;
    case 122u: goto L_00254D60;
    case 123u: goto L_00254D70;
    case 124u: goto L_00254D90;
    case 125u: goto L_00254DB8;
    case 126u: goto L_00254DE0;
    case 127u: goto L_00254DF0;
    case 128u: goto L_00254E10;
    case 129u: goto L_00254E38;
    case 130u: goto L_00254E60;
    case 131u: goto L_00254E70;
    case 132u: goto L_00254E90;
    case 133u: goto L_00254EB8;
    case 134u: goto L_00254EE0;
    case 135u: goto L_00254EF0;
    case 136u: goto L_00254F10;
    case 137u: goto L_00254F38;
    case 138u: goto L_00254F60;
    case 139u: goto L_00254F70;
    case 140u: goto L_00254F90;
    case 141u: goto L_00254FB4;
    case 142u: goto L_00254FC4;
    case 143u: goto L_00254FE4;
    case 144u: goto L_00255020;
    case 145u: goto L_00255060;
    case 146u: goto L_0025506C;
    case 147u: goto L_00255078;
    case 148u: goto L_00255084;
    case 149u: goto L_00255090;
    case 150u: goto L_002550B4;
    case 151u: goto L_002550D8;
    case 152u: goto L_002550E4;
    case 153u: goto L_002550F0;
    case 154u: goto L_002550FC;
    case 155u: goto L_00255108;
    case 156u: goto L_0025513C;
    case 157u: goto L_00255148;
    case 158u: goto L_00255154;
    case 159u: goto L_00255160;
    case 160u: goto L_0025516C;
    case 161u: goto L_00255190;
    case 162u: goto L_002551F4;
    case 163u: goto L_00255258;
    case 164u: goto L_00255290;
    case 165u: goto L_002552C8;
    case 166u: goto L_002552F8;
    case 167u: goto L_0025531C;
    case 168u: goto L_0025534C;
    case 169u: goto L_00255370;
    case 170u: goto L_00255390;
    case 171u: goto L_002553C0;
    case 172u: goto L_0025540C;
    case 173u: goto L_0025541C;
    case 174u: goto L_00255438;
    case 175u: goto L_0025544C;
    case 176u: goto L_0025545C;
    case 177u: goto L_00255488;
    case 178u: goto L_00255498;
    case 179u: goto L_002554B4;
    case 180u: goto L_002554C8;
    case 181u: goto L_002554D8;
    case 182u: goto L_00255514;
    case 183u: goto L_00255560;
    case 184u: goto L_00255570;
    case 185u: goto L_0025558C;
    case 186u: goto L_002555A0;
    case 187u: goto L_002555B0;
    case 188u: goto L_002555DC;
    case 189u: goto L_002555EC;
    case 190u: goto L_00255608;
    case 191u: goto L_0025561C;
    case 192u: goto L_0025562C;
    case 193u: goto L_00255664;
    case 194u: goto L_002556E8;
    case 195u: goto L_00255744;
    case 196u: goto L_002557A0;
    case 197u: goto L_00255800;
    case 198u: goto L_00255838;
    case 199u: goto L_00255860;
    case 200u: goto L_00255870;
    case 201u: goto L_00255894;
    case 202u: goto L_002558A4;
    case 203u: goto L_002558C4;
    case 204u: goto L_002558EC;
    case 205u: goto L_0025590C;
    case 206u: goto L_0025592C;
    case 207u: goto L_0025594C;
    case 208u: goto L_00255958;
    case 209u: goto L_00255980;
    case 210u: goto L_002559A8;
    case 211u: goto L_002559B8;
    case 212u: goto L_002559D4;
    case 213u: goto L_002559E8;
    case 214u: goto L_002559F8;
    case 215u: goto L_00255A1C;
    case 216u: goto L_00255A44;
    case 217u: goto L_00255A54;
    case 218u: goto L_00255A70;
    case 219u: goto L_00255A84;
    case 220u: goto L_00255A94;
    case 221u: goto L_00255AA4;
    case 222u: goto L_00255ACC;
    case 223u: goto L_00255ADC;
    case 224u: goto L_00255AF8;
    case 225u: goto L_00255B0C;
    case 226u: goto L_00255B1C;
    case 227u: goto L_00255B5C;
    case 228u: goto L_00255B68;
    case 229u: goto L_00255B74;
    case 230u: goto L_00255B80;
    case 231u: goto L_00255B8C;
    case 232u: goto L_00255BC8;
    case 233u: goto L_00255BD8;
    case 234u: goto L_00255BF4;
    case 235u: goto L_00255C08;
    case 236u: goto L_00255C18;
    case 237u: goto L_00255C60;
    case 238u: goto L_00255C70;
    case 239u: goto L_00255C94;
    case 240u: goto L_00255CA4;
    case 241u: goto L_00255CC4;
    case 242u: goto L_00255D00;
    case 243u: goto L_00255D28;
    case 244u: goto L_00255D3C;
    case 245u: goto L_00255D50;
    case 246u: goto L_00255D70;
    case 247u: goto L_00255DC8;
    case 248u: goto L_00255DE8;
    case 249u: goto L_00255E04;
    case 250u: goto L_00255E24;
    case 251u: goto L_00255E30;
    case 252u: goto L_00255E6C;
    case 253u: goto L_00255E7C;
    case 254u: goto L_00255E98;
    case 255u: goto L_00255EB0;
    case 256u: goto L_00255EC0;
    case 257u: goto L_00255EE0;
    case 258u: goto L_00255EF0;
    case 259u: goto L_00255F0C;
    case 260u: goto L_00255F24;
    case 261u: goto L_00255F34;
    case 262u: goto L_00255F6C;
    case 263u: goto L_00255F78;
    case 264u: goto L_00255F84;
    case 265u: goto L_00255F90;
    case 266u: goto L_00255F9C;
    case 267u: goto L_00255FC8;
    case 268u: goto L_00255FE4;
    case 269u: goto L_00256030;
    case 270u: goto L_00256040;
    case 271u: goto L_00256180;
    case 272u: goto L_00256228;
    case 273u: goto L_002562A0;
    case 274u: goto L_002562D8;
    case 275u: goto L_002562F4;
    case 276u: goto L_0025630C;
    case 277u: goto L_00256320;
    case 278u: goto L_0025633C;
    case 279u: goto L_00256350;
    case 280u: goto L_0025635C;
    case 281u: goto L_00256378;
    case 282u: goto L_00256390;
    case 283u: goto L_002563AC;
    case 284u: goto L_002563B4;
    case 285u: goto L_002563BC;
    case 286u: goto L_002563C4;
    case 287u: goto L_002563CC;
    case 288u: goto L_002563D4;
    case 289u: goto L_002563E0;
    case 290u: goto L_002563EC;
    case 291u: goto L_002563F8;
    case 292u: goto L_00256404;
    case 293u: goto L_00256410;
    case 294u: goto L_00256434;
    case 295u: goto L_00256444;
    case 296u: goto L_00256464;
    case 297u: goto L_00256488;
    case 298u: goto L_00256498;
    case 299u: goto L_002564B8;
    case 300u: goto L_002564DC;
    case 301u: goto L_002564EC;
    case 302u: goto L_0025650C;
    case 303u: goto L_00256530;
    case 304u: goto L_00256540;
    case 305u: goto L_00256560;
    case 306u: goto L_00256584;
    case 307u: goto L_00256594;
    case 308u: goto L_002565B4;
    case 309u: goto L_002565D0;
    case 310u: goto L_002565F0;
    case 311u: goto L_00256600;
    case 312u: goto L_00256624;
    case 313u: goto L_00256634;
    case 314u: goto L_00256654;
    case 315u: goto L_0025667C;
    case 316u: goto L_0025668C;
    case 317u: goto L_002566AC;
    case 318u: goto L_002566BC;
    case 319u: goto L_002566E0;
    case 320u: goto L_00256700;
    case 321u: goto L_00256710;
    case 322u: goto L_00256734;
    case 323u: goto L_00256744;
    case 324u: goto L_00256764;
    case 325u: goto L_0025678C;
    case 326u: goto L_0025679C;
    case 327u: goto L_002567BC;
    case 328u: goto L_002567CC;
    case 329u: goto L_002567E8;
    case 330u: goto L_00256808;
    case 331u: goto L_00256818;
    case 332u: goto L_0025683C;
    case 333u: goto L_0025684C;
    case 334u: goto L_0025686C;
    case 335u: goto L_00256894;
    case 336u: goto L_002568A4;
    case 337u: goto L_002568C4;
    case 338u: goto L_002568D4;
    case 339u: goto L_002568EC;
    case 340u: goto L_0025690C;
    case 341u: goto L_0025691C;
    case 342u: goto L_00256940;
    case 343u: goto L_00256950;
    case 344u: goto L_00256970;
    case 345u: goto L_00256998;
    case 346u: goto L_002569A8;
    case 347u: goto L_002569C8;
    case 348u: goto L_002569DC;
    case 349u: goto L_002569F4;
    case 350u: goto L_00256A14;
    case 351u: goto L_00256A24;
    case 352u: goto L_00256A48;
    case 353u: goto L_00256A58;
    case 354u: goto L_00256A78;
    case 355u: goto L_00256AA0;
    case 356u: goto L_00256AB0;
    case 357u: goto L_00256AD0;
    case 358u: goto L_00256AE4;
    case 359u: goto L_00256AF4;
    case 360u: goto L_00256B08;
    case 361u: goto L_00256B14;
    case 362u: goto L_00256B20;
    case 363u: goto L_00256B2C;
    case 364u: goto L_00256B38;
    case 365u: goto L_00256B64;
    case 366u: goto L_00256B74;
    case 367u: goto L_00256B90;
    case 368u: goto L_00256BA4;
    case 369u: goto L_00256BB4;
    case 370u: goto L_00256BC0;
    case 371u: goto L_00256BCC;
    case 372u: goto L_00256BD8;
    case 373u: goto L_00256BE4;
    case 374u: goto L_00256BF0;
    case 375u: goto L_00256C0C;
    case 376u: goto L_00256C50;
    case 377u: goto L_00256C60;
    case 378u: goto L_00256CA4;
    case 379u: goto L_00256CD0;
    case 380u: goto L_00256CF4;
    case 381u: goto L_00256E0C;
    case 382u: goto L_00256E2C;
    case 383u: goto L_00256E5C;
    case 384u: goto L_00256F90;
    case 385u: goto L_00257038;
    case 386u: goto L_00257060;
    case 387u: goto L_00257074;
    case 388u: goto L_00257084;
    case 389u: goto L_002570A0;
    case 390u: goto L_002570C0;
    case 391u: goto L_002570E0;
    case 392u: goto L_00257110;
    case 393u: goto L_0025715C;
    case 394u: goto L_00257170;
    case 395u: goto L_00257180;
    case 396u: goto L_002571A0;
    case 397u: goto L_002571C8;
    case 398u: goto L_0025720C;
    case 399u: goto L_0025721C;
    case 400u: goto L_00257238;
    case 401u: goto L_0025724C;
    case 402u: goto L_0025725C;
    case 403u: goto L_00257280;
    case 404u: goto L_0025729C;
    case 405u: goto L_002572AC;
    case 406u: goto L_002572C8;
    case 407u: goto L_002572DC;
    case 408u: goto L_002572EC;
    case 409u: goto L_00257300;
    case 410u: goto L_00257328;
    case 411u: goto L_00257350;
    case 412u: goto L_00257360;
    case 413u: goto L_0025737C;
    case 414u: goto L_00257390;
    case 415u: goto L_002573A0;
    case 416u: goto L_002573C4;
    case 417u: goto L_002573D4;
    case 418u: goto L_002573F0;
    case 419u: goto L_00257404;
    case 420u: goto L_00257414;
    case 421u: goto L_00257430;
    case 422u: goto L_00257468;
    case 423u: goto L_00257484;
    case 424u: goto L_002574BC;
    case 425u: goto L_002574CC;
    case 426u: goto L_0025751C;
    case 427u: goto L_00257598;
    case 428u: goto L_002575B8;
    case 429u: goto L_002575C8;
    case 430u: goto L_002575E4;
    case 431u: goto L_002575F8;
    case 432u: goto L_00257608;
    case 433u: goto L_0025765C;
    case 434u: goto L_0025766C;
    case 435u: goto L_00257688;
    case 436u: goto L_002576C0;
    case 437u: goto L_002576F0;
    case 438u: goto L_0025770C;
    case 439u: goto L_00257730;
    case 440u: goto L_0025778C;
    case 441u: goto L_002577A0;
    case 442u: goto L_002577B8;
    case 443u: goto L_002577F0;
    case 444u: goto L_00257818;
    case 445u: goto L_00257844;
    case 446u: goto L_00257864;
    case 447u: goto L_0025787C;
    case 448u: goto L_00257888;
    case 449u: goto L_002578BC;
    case 450u: goto L_002578CC;
    case 451u: goto L_002578DC;
    case 452u: goto L_002578E8;
    case 453u: goto L_00257900;
    case 454u: goto L_00257930;
    case 455u: goto L_00257980;
    case 456u: goto L_002579A4;
    case 457u: goto L_002579C8;
    case 458u: goto L_002579D8;
    case 459u: goto L_002579F4;
    case 460u: goto L_00257A08;
    case 461u: goto L_00257A18;
    case 462u: goto L_00257A38;
    case 463u: goto L_00257A48;
    case 464u: goto L_00257A64;
    case 465u: goto L_00257A78;
    case 466u: goto L_00257A88;
    case 467u: goto L_00257AA8;
    case 468u: goto L_00257AC8;
    case 469u: goto L_00257AEC;
    case 470u: goto L_00257B0C;
    case 471u: goto L_00257B18;
    case 472u: goto L_00257B8C;
    case 473u: goto L_00257BA8;
    case 474u: goto L_00257BD0;
    case 475u: goto L_00257C04;
    case 476u: goto L_00257C14;
    case 477u: goto L_00257C30;
    case 478u: goto L_00257C44;
    case 479u: goto L_00257C54;
    case 480u: goto L_00257CA0;
    case 481u: goto L_00257CAC;
    case 482u: goto L_00257CE0;
    case 483u: goto L_00257CF0;
    case 484u: goto L_00257D00;
    case 485u: goto L_00257E84;
    case 486u: goto L_00257E9C;
    case 487u: goto L_00257EF4;
    case 488u: goto L_00257F4C;
    case 489u: goto L_00257F60;
    case 490u: goto L_00257F8C;
    case 491u: goto L_00257FA4;
    case 492u: goto L_00257FD0;
    default: bad_entry(c, 0x00254000u); return;
    }
L_00254000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254008u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00254008u) [[unlikely]] return; }
L_00254008:
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 1;
L_0025400C:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[16].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 104u)));  goto L_00254060; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025402Cu); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0025402Cu) [[unlikely]] return; }
L_0025402C:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025403Cu); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0025403Cu) [[unlikely]] return; }
L_0025403C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0025405C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025405Cu); set32(c.r[5], c.r[29].w[0] + 100u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x0025405Cu) [[unlikely]] return; }
L_0025405C:
    set32(c.r[2], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_00254060:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[16].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 108u)));  goto L_002540B4; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254080u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00254080u) [[unlikely]] return; }
L_00254080:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254090u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00254090u) [[unlikely]] return; }
L_00254090:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002540B0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002540B0u); set32(c.r[5], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002540B0u) [[unlikely]] return; }
L_002540B0:
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 1;
L_002540B4:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[16].d[0]) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00254108; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002540D4u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002540D4u) [[unlikely]] return; }
L_002540D4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002540E4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002540E4u) [[unlikely]] return; }
L_002540E4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00254104; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254104u); set32(c.r[5], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00254104u) [[unlikely]] return; }
L_00254104:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00254108:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00254130:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[17].d[0]; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002541D8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 16u)));  goto L_00254184; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254170u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00254170u) [[unlikely]] return; }
L_00254170:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254180u); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00254180u) [[unlikely]] return; }
L_00254180:
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 1;
L_00254184:
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[16].d[0]) { st32((c.r[19].w[0] + 16u), c.r[17].w[0]);  goto L_002541D8; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002541A4u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002541A4u) [[unlikely]] return; }
L_002541A4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002541B4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002541B4u) [[unlikely]] return; }
L_002541B4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002541D4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002541D4u); set32(c.r[5], c.r[19].w[0] + 16u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002541D4u) [[unlikely]] return; }
L_002541D4:
    st32((c.r[19].w[0] + 16u), c.r[17].w[0]);
    c.budget -= 1;
L_002541D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00254200:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[17].d[0]; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002542A8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 12u)));  goto L_00254254; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254240u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00254240u) [[unlikely]] return; }
L_00254240:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254250u); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00254250u) [[unlikely]] return; }
L_00254250:
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 1;
L_00254254:
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[16].d[0]) { st32((c.r[19].w[0] + 12u), c.r[17].w[0]);  goto L_002542A8; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254274u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00254274u) [[unlikely]] return; }
L_00254274:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254284u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00254284u) [[unlikely]] return; }
L_00254284:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002542A4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002542A4u); set32(c.r[5], c.r[19].w[0] + 12u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002542A4u) [[unlikely]] return; }
L_002542A4:
    st32((c.r[19].w[0] + 12u), c.r[17].w[0]);
    c.budget -= 1;
L_002542A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002542D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[17].d[0]; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00254378; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 8u)));  goto L_00254324; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254310u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00254310u) [[unlikely]] return; }
L_00254310:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254320u); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00254320u) [[unlikely]] return; }
L_00254320:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_00254324:
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[16].d[0]) { st32((c.r[19].w[0] + 8u), c.r[17].w[0]);  goto L_00254378; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254344u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00254344u) [[unlikely]] return; }
L_00254344:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254354u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00254354u) [[unlikely]] return; }
L_00254354:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00254374; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254374u); set32(c.r[5], c.r[19].w[0] + 8u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00254374u) [[unlikely]] return; }
L_00254374:
    st32((c.r[19].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 1;
L_00254378:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002543A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[17].d[0]; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00254448; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 4u)));  goto L_002543F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002543E0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002543E0u) [[unlikely]] return; }
L_002543E0:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002543F0u); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002543F0u) [[unlikely]] return; }
L_002543F0:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_002543F4:
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[16].d[0]) { st32((c.r[19].w[0] + 4u), c.r[17].w[0]);  goto L_00254448; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254414u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00254414u) [[unlikely]] return; }
L_00254414:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254424u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00254424u) [[unlikely]] return; }
L_00254424:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00254444; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254444u); set32(c.r[5], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00254444u) [[unlikely]] return; }
L_00254444:
    st32((c.r[19].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 1;
L_00254448:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00254470:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[5].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[17].d[0]; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00254518; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[3], ld32((c.r[19].w[0])));  goto L_002544C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002544B0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002544B0u) [[unlikely]] return; }
L_002544B0:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002544C0u); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002544C0u) [[unlikely]] return; }
L_002544C0:
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_002544C4:
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[16].d[0]) { st32((c.r[19].w[0]), c.r[17].w[0]);  goto L_00254518; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002544E4u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002544E4u) [[unlikely]] return; }
L_002544E4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002544F4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002544F4u) [[unlikely]] return; }
L_002544F4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00254514; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254514u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00254514u) [[unlikely]] return; }
L_00254514:
    st32((c.r[19].w[0]), c.r[17].w[0]);
    c.budget -= 1;
L_00254518:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00254540:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002545CC; } }
    st32((c.r[29].w[0] + 92u), c.r[3].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025456Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x0025456Cu) [[unlikely]] return; }
L_0025456C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_002545D0; }
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[17], c.r[4].w[0] - 8u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025459Cu); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0025459Cu) [[unlikely]] return; }
L_0025459C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002545ACu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002545ACu) [[unlikely]] return; }
L_002545AC:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002545CC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002545CCu); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002545CCu) [[unlikely]] return; }
L_002545CC:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_002545D0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 8u)));  goto L_00254648; }
    st32((c.r[29].w[0] + 88u), c.r[3].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002545E4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002545E4u) [[unlikely]] return; }
L_002545E4:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00254644; } }
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[17], c.r[4].w[0] - 8u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254614u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00254614u) [[unlikely]] return; }
L_00254614:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254624u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00254624u) [[unlikely]] return; }
L_00254624:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00254644; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254644u); set32(c.r[5], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00254644u) [[unlikely]] return; }
L_00254644:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_00254648:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 12u)));  goto L_002546C0; }
    st32((c.r[29].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025465Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x0025465Cu) [[unlikely]] return; }
L_0025465C:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002546BC; } }
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[17], c.r[4].w[0] - 8u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025468Cu); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0025468Cu) [[unlikely]] return; }
L_0025468C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025469Cu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0025469Cu) [[unlikely]] return; }
L_0025469C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002546BC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002546BCu); set32(c.r[5], c.r[29].w[0] + 84u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002546BCu) [[unlikely]] return; }
L_002546BC:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_002546C0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 16u)));  goto L_00254738; }
    st32((c.r[29].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002546D4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002546D4u) [[unlikely]] return; }
L_002546D4:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00254734; } }
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[17], c.r[4].w[0] - 8u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254704u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00254704u) [[unlikely]] return; }
L_00254704:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254714u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00254714u) [[unlikely]] return; }
L_00254714:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00254734; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254734u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00254734u) [[unlikely]] return; }
L_00254734:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_00254738:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002547B0; }
    st32((c.r[29].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025474Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x0025474Cu) [[unlikely]] return; }
L_0025474C:
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002547AC; } }
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[16], c.r[4].w[0] - 8u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025477Cu); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0025477Cu) [[unlikely]] return; }
L_0025477C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025478Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0025478Cu) [[unlikely]] return; }
L_0025478C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002547AC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002547ACu); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002547ACu) [[unlikely]] return; }
L_002547AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002547B0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002547D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002548A0; } }
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0025483C; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0025483C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254810u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00254810u) [[unlikely]] return; }
L_00254810:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254820u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00254820u) [[unlikely]] return; }
L_00254820:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025483C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025483Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025483Cu) [[unlikely]] return; }
L_0025483C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00254888; }
    set32(c.r[18], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00254884; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254858u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00254858u) [[unlikely]] return; }
L_00254858:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254868u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00254868u) [[unlikely]] return; }
L_00254868:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00254884; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00254884u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00254884u) [[unlikely]] return; }
L_00254884:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00254888:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002548A4; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002548A0u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002548A0u) [[unlikely]] return; }
L_002548A0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002548A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002548C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0]), 0u);
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_002548F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002548E8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002548E8u) [[unlikely]] return; }
L_002548E8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002548F8u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002548F8u) [[unlikely]] return; }
L_002548F8:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 4u), 0u);  if (t) { goto L_0025491C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025490Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0025490Cu) [[unlikely]] return; }
L_0025490C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025491Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0025491Cu) [[unlikely]] return; }
L_0025491C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 10064u));
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00254950:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 124u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254964u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00254964u) [[unlikely]] return; }
L_00254964:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00254978; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254974u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 105u, depth + 1u); else { c.pc = 0x002589A0u; return; } if (c.pc != 0x00254974u) [[unlikely]] return; }
L_00254974:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00254978:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00254980:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002549A4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006E(c, 424u, depth + 1u); else { c.pc = 0x002BB2D0u; return; } if (c.pc != 0x002549A4u) [[unlikely]] return; }
L_002549A4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002549B0u); set32(c.r[5], c.r[18].w[0] + 8u);  if (depth < kMaxDepth) unit_0081(c, 668u, depth + 1u); else { c.pc = 0x00307F40u; return; } if (c.pc != 0x002549B0u) [[unlikely]] return; }
L_002549B0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002549BCu); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x002549BCu) [[unlikely]] return; }
L_002549BC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002549C8u); set32(c.r[5], c.r[18].w[0] + 16u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x002549C8u) [[unlikely]] return; }
L_002549C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00254A54; } }
L_002549D0:
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002549ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002549ECu) [[unlikely]] return; }
L_002549EC:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00254A00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00254A00u) [[unlikely]] return; }
L_00254A00:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254A20u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 668u, depth + 1u); else { c.pc = 0x00307F40u; return; } if (c.pc != 0x00254A20u) [[unlikely]] return; }
L_00254A20:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254A2Cu); set32(c.r[5], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_0081(c, 668u, depth + 1u); else { c.pc = 0x00307F40u; return; } if (c.pc != 0x00254A2Cu) [[unlikely]] return; }
L_00254A2C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254A38u); set32(c.r[5], c.r[19].w[0] + 8u);  if (depth < kMaxDepth) unit_0081(c, 668u, depth + 1u); else { c.pc = 0x00307F40u; return; } if (c.pc != 0x00254A38u) [[unlikely]] return; }
L_00254A38:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254A44u); set32(c.r[5], c.r[19].w[0] + 12u);  if (depth < kMaxDepth) unit_0081(c, 668u, depth + 1u); else { c.pc = 0x00307F40u; return; } if (c.pc != 0x00254A44u) [[unlikely]] return; }
L_00254A44:
    set32(c.r[5], c.r[19].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254A50u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 668u, depth + 1u); else { c.pc = 0x00307F40u; return; } if (c.pc != 0x00254A50u) [[unlikely]] return; }
L_00254A50:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00254A54:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002549D0u | kUnwind; return; } goto L_002549D0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254A70u); set32(c.r[5], c.r[18].w[0] + 28u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x00254A70u) [[unlikely]] return; }
L_00254A70:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00254A84u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00254A84u) [[unlikely]] return; }
L_00254A84:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254A90u); set32(c.r[5], c.r[18].w[0] + 36u);  if (depth < kMaxDepth) unit_0056(c, 119u, depth + 1u); else { c.pc = 0x00258C00u; return; } if (c.pc != 0x00254A90u) [[unlikely]] return; }
L_00254A90:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254A9Cu); set32(c.r[5], c.r[18].w[0] + 40u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x00254A9Cu) [[unlikely]] return; }
L_00254A9C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254AA8u); set32(c.r[5], c.r[18].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x00254AA8u) [[unlikely]] return; }
L_00254AA8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254AB4u); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x00254AB4u) [[unlikely]] return; }
L_00254AB4:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00254AC8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00254AC8u) [[unlikely]] return; }
L_00254AC8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254AD4u); set32(c.r[5], c.r[18].w[0] + 112u);  if (depth < kMaxDepth) unit_0081(c, 668u, depth + 1u); else { c.pc = 0x00307F40u; return; } if (c.pc != 0x00254AD4u) [[unlikely]] return; }
L_00254AD4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254AE0u); set32(c.r[5], c.r[18].w[0] + 120u);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x00254AE0u) [[unlikely]] return; }
L_00254AE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00254B00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254B24u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006E(c, 425u, depth + 1u); else { c.pc = 0x002BB2E0u; return; } if (c.pc != 0x00254B24u) [[unlikely]] return; }
L_00254B24:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_00254BF0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00254C48; } }
L_00254B34:
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 4u)));  goto L_00254B5C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00254B58u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00254B58u) [[unlikely]] return; }
L_00254B58:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_00254B5C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[25], ld32((c.r[17].w[0])));  goto L_00254B78; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00254B74u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00254B74u) [[unlikely]] return; }
L_00254B74:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00254B78:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00254B9Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00254B9Cu) [[unlikely]] return; }
L_00254B9C:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00254BB0u); set32(c.r[5], c.r[19].w[0] + 4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00254BB0u) [[unlikely]] return; }
L_00254BB0:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00254BC4u); set32(c.r[5], c.r[19].w[0] + 8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00254BC4u) [[unlikely]] return; }
L_00254BC4:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00254BD8u); set32(c.r[5], c.r[19].w[0] + 12u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00254BD8u) [[unlikely]] return; }
L_00254BD8:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[5], c.r[19].w[0] + 16u);
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00254BECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00254BECu) [[unlikely]] return; }
L_00254BEC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00254BF0:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00254B34u | kUnwind; return; } goto L_00254B34; }
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[25], ld32((c.r[17].w[0])));  goto L_00254C20; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00254C1Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00254C1Cu) [[unlikely]] return; }
L_00254C1C:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00254C20:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00254C30u); set32(c.r[5], c.r[18].w[0] + 8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00254C30u) [[unlikely]] return; }
L_00254C30:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[5], c.r[18].w[0] + 112u);
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00254C44u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00254C44u) [[unlikely]] return; }
L_00254C44:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00254C48:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00254C70:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[6], 0u + 4u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[4].w[0])));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[20], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[5], c.r[29].w[0] + 188u);
    set32(c.r[19], ld32((c.r[2].w[0] + 20312u)));
    set32(c.r[21], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[22], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[23], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254CD0u); st32((c.r[29].w[0] + 188u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00254CD0u) [[unlikely]] return; }
L_00254CD0:
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[5], c.r[29].w[0] + 188u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254CE0u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00254CE0u) [[unlikely]] return; }
L_00254CE0:
    set32(c.r[4], c.r[17].w[0] + 8u);
    set32(c.r[5], c.r[29].w[0] + 188u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254CF0u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00254CF0u) [[unlikely]] return; }
L_00254CF0:
    set32(c.r[4], c.r[17].w[0] + 12u);
    set32(c.r[5], c.r[29].w[0] + 188u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254D00u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00254D00u) [[unlikely]] return; }
L_00254D00:
    set32(c.r[4], c.r[17].w[0] + 16u);
    set32(c.r[5], c.r[29].w[0] + 188u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254D10u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00254D10u) [[unlikely]] return; }
L_00254D10:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_00254D94; }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00254D90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254D38u); st32((c.r[29].w[0] + 184u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x00254D38u) [[unlikely]] return; }
L_00254D38:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[19].d[0];  if (t) { goto L_00254D90; } }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254D60u); set32(c.r[30], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00254D60u) [[unlikely]] return; }
L_00254D60:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254D70u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00254D70u) [[unlikely]] return; }
L_00254D70:
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00254D90; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254D90u); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00254D90u) [[unlikely]] return; }
L_00254D90:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_00254D94:
    c.budget -= 2;
    if (c.r[20].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_00254E14; }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00254E10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254DB8u); st32((c.r[29].w[0] + 180u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x00254DB8u) [[unlikely]] return; }
L_00254DB8:
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 180u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[19].d[0];  if (t) { goto L_00254E10; } }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254DE0u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00254DE0u) [[unlikely]] return; }
L_00254DE0:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254DF0u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00254DF0u) [[unlikely]] return; }
L_00254DF0:
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00254E10; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254E10u); set32(c.r[5], c.r[29].w[0] + 180u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00254E10u) [[unlikely]] return; }
L_00254E10:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_00254E14:
    c.budget -= 2;
    if (c.r[21].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_00254E94; }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[4], c.r[4].w[0] + c.r[21].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00254E90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254E38u); st32((c.r[29].w[0] + 176u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x00254E38u) [[unlikely]] return; }
L_00254E38:
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[19].d[0];  if (t) { goto L_00254E90; } }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254E60u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00254E60u) [[unlikely]] return; }
L_00254E60:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254E70u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00254E70u) [[unlikely]] return; }
L_00254E70:
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00254E90; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254E90u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00254E90u) [[unlikely]] return; }
L_00254E90:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_00254E94:
    c.budget -= 2;
    if (c.r[22].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_00254F14; }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] + c.r[22].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00254F10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254EB8u); st32((c.r[29].w[0] + 172u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x00254EB8u) [[unlikely]] return; }
L_00254EB8:
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[19].d[0];  if (t) { goto L_00254F10; } }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254EE0u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00254EE0u) [[unlikely]] return; }
L_00254EE0:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254EF0u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00254EF0u) [[unlikely]] return; }
L_00254EF0:
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00254F10; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254F10u); set32(c.r[5], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00254F10u) [[unlikely]] return; }
L_00254F10:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_00254F14:
    c.budget -= 2;
    if (c.r[23].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[29].w[0] + 188u)));  goto L_00254F94; }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], c.r[4].w[0] + c.r[23].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00254F90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254F38u); st32((c.r[29].w[0] + 168u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x00254F38u) [[unlikely]] return; }
L_00254F38:
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[19].d[0];  if (t) { goto L_00254F90; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254F60u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00254F60u) [[unlikely]] return; }
L_00254F60:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254F70u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00254F70u) [[unlikely]] return; }
L_00254F70:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00254F90; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254F90u); set32(c.r[5], c.r[29].w[0] + 168u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00254F90u) [[unlikely]] return; }
L_00254F90:
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    c.budget -= 1;
L_00254F94:
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[19].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  goto L_00254FE8; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254FB4u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00254FB4u) [[unlikely]] return; }
L_00254FB4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254FC4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00254FC4u) [[unlikely]] return; }
L_00254FC4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00254FE4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00254FE4u); set32(c.r[5], c.r[29].w[0] + 188u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00254FE4u) [[unlikely]] return; }
L_00254FE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_00254FE8:
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
L_00255020:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x0A010000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[1].d[0] = c.r[1].d[0] | 113ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00255098; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255060u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 672u, depth + 1u); else { c.pc = 0x00307FD0u; return; } if (c.pc != 0x00255060u) [[unlikely]] return; }
L_00255060:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025506Cu); set32(c.r[5], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0081(c, 672u, depth + 1u); else { c.pc = 0x00307FD0u; return; } if (c.pc != 0x0025506Cu) [[unlikely]] return; }
L_0025506C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255078u); set32(c.r[5], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_0081(c, 672u, depth + 1u); else { c.pc = 0x00307FD0u; return; } if (c.pc != 0x00255078u) [[unlikely]] return; }
L_00255078:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255084u); set32(c.r[5], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0081(c, 672u, depth + 1u); else { c.pc = 0x00307FD0u; return; } if (c.pc != 0x00255084u) [[unlikely]] return; }
L_00255084:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255090u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0081(c, 672u, depth + 1u); else { c.pc = 0x00307FD0u; return; } if (c.pc != 0x00255090u) [[unlikely]] return; }
L_00255090:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00255170; } }
L_00255098:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x14010000u);
    c.r[1].d[0] = c.r[1].d[0] | 1ull;
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00255134; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002550B4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 116u, depth + 1u); else { c.pc = 0x0030CD00u; return; } if (c.pc != 0x002550B4u) [[unlikely]] return; }
L_002550B4:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 92u);
    st32((c.r[29].w[0] + 92u), 0u);
    st32((c.r[29].w[0] + 88u), 0u);
    st32((c.r[29].w[0] + 84u), 0u);
    st32((c.r[29].w[0] + 80u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002550D8u); st32((c.r[29].w[0] + 76u), 0u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x002550D8u) [[unlikely]] return; }
L_002550D8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002550E4u); set32(c.r[5], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x002550E4u) [[unlikely]] return; }
L_002550E4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002550F0u); set32(c.r[5], c.r[29].w[0] + 84u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x002550F0u) [[unlikely]] return; }
L_002550F0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002550FCu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x002550FCu) [[unlikely]] return; }
L_002550FC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255108u); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x00255108u) [[unlikely]] return; }
L_00255108:
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 84u)));
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_0025516C; } }
L_00255134:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025513Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0082(c, 20u, depth + 1u); else { c.pc = 0x00308230u; return; } if (c.pc != 0x0025513Cu) [[unlikely]] return; }
L_0025513C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255148u); set32(c.r[5], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0082(c, 20u, depth + 1u); else { c.pc = 0x00308230u; return; } if (c.pc != 0x00255148u) [[unlikely]] return; }
L_00255148:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255154u); set32(c.r[5], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_0082(c, 20u, depth + 1u); else { c.pc = 0x00308230u; return; } if (c.pc != 0x00255154u) [[unlikely]] return; }
L_00255154:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255160u); set32(c.r[5], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0082(c, 20u, depth + 1u); else { c.pc = 0x00308230u; return; } if (c.pc != 0x00255160u) [[unlikely]] return; }
L_00255160:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025516Cu); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0082(c, 20u, depth + 1u); else { c.pc = 0x00308230u; return; } if (c.pc != 0x0025516Cu) [[unlikely]] return; }
L_0025516C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00255170:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00255190:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002551BC; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00255270; }
L_002551BC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002551D0; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002551FC; } }
L_002551D0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  goto L_0025520C; }
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00255208; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002551F4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002551F4u) [[unlikely]] return; }
L_002551F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00255208; } }
L_002551FC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00255270; } }
L_00255208:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_0025520C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00255220; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00255270; }
L_00255220:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00255234; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00255260; } }
L_00255234:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_00255270; }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0025526C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00255258u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00255258u) [[unlikely]] return; }
L_00255258:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025526C; } }
L_00255260:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00255270; } }
L_0025526C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00255270:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00255290:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002552C8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006E(c, 450u, depth + 1u); else { c.pc = 0x002BB580u; return; } if (c.pc != 0x002552C8u) [[unlikely]] return; }
L_002552C8:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; mmi::divu(c, 0, c.r[20].w[0], c.r[3].w[0]);  if (t) { goto L_002552E0; } }
    breakpoint(c, 0x002552DCu);
    c.budget -= 1;
L_002552E0:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[3].w[0])));  if (t) { goto L_00255308; } }
L_002552F8:
    c.budget -= 2;
    if (c.r[20].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0])));  goto L_00255308; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[4].w[0] + 8u)));  if (t) { goto L_00255310; } }
L_00255308:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002552F8u | kUnwind; return; } goto L_002552F8; }
L_00255310:
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_002556A8; } }
L_0025531C:
    set32(c.r[16], c.r[22].w[0] << 4);
    set32(c.r[23], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[23].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[22], c.r[22].w[0] + 1u);  goto L_002556A8; }
    set32(c.r[3], ld32((c.r[20].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 68u)));  goto L_00255378; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025534Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025534Cu) [[unlikely]] return; }
L_0025534C:
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002556A4; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00255370u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00255370u) [[unlikely]] return; }
L_00255370:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002556A4; } }
L_00255378:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], ld32((c.r[19].w[0])));  goto L_00255398; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00255390u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00255390u) [[unlikely]] return; }
L_00255390:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[20].w[0] + 20u)));  if (t) { goto L_002554DC; } }
L_00255398:
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; mmi::divu(c, 0, c.r[4].w[0], c.r[3].w[0]);  if (t) { goto L_002553A8; } }
    breakpoint(c, 0x002553A4u);
    c.budget -= 1;
L_002553A8:
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    c.r[5].d[0] = c.hi.d[0];
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0])));  if (t) { goto L_002553D4; } }
L_002553C0:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[5], ld32((c.r[5].w[0])));  goto L_002553D4; }
    set32(c.r[18], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002553E0; } }
L_002553D4:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002553C0u | kUnwind; return; } goto L_002553C0; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002553E0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_00255464; }
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[23], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[21], ld32((c.r[23].w[0])));
    c.budget -= 5;
    { const bool t = c.r[21].d[0] == c.r[18].d[0];  if (t) { goto L_002554D8; } }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { st32((c.r[23].w[0]), c.r[18].w[0]);  goto L_0025543C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025540Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0025540Cu) [[unlikely]] return; }
L_0025540C:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025541Cu); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0025541Cu) [[unlikely]] return; }
L_0025541C:
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00255438; } }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00255438u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00255438u) [[unlikely]] return; }
L_00255438:
    st32((c.r[23].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_0025543C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002554D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025544Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0025544Cu) [[unlikely]] return; }
L_0025544C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025545Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0025545Cu) [[unlikely]] return; }
L_0025545C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002554D8; } }
L_00255464:
    set32(c.r[3], ld32((c.r[23].w[0])));
    set32(c.r[30], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[21], ld32((c.r[30].w[0])));
    c.budget -= 5;
    { const bool t = c.r[21].d[0] == c.r[3].d[0];  if (t) { goto L_002554D8; } }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[21], ld32((c.r[23].w[0])));  goto L_002554B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255488u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00255488u) [[unlikely]] return; }
L_00255488:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255498u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00255498u) [[unlikely]] return; }
L_00255498:
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002554B4; } }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002554B4u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002554B4u) [[unlikely]] return; }
L_002554B4:
    set32(c.r[21], ld32((c.r[23].w[0])));
    c.budget -= 1;
L_002554B8:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[30].w[0]), c.r[21].w[0]);  if (t) { goto L_002554D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002554C8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002554C8u) [[unlikely]] return; }
L_002554C8:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002554D8u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002554D8u) [[unlikely]] return; }
L_002554D8:
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 1;
L_002554DC:
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[23], c.r[3].w[0] + 4u);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; mmi::divu(c, 0, c.r[5].w[0], c.r[3].w[0]);  if (t) { goto L_002554FC; } }
    breakpoint(c, 0x002554F8u);
    c.budget -= 1;
L_002554FC:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[3].w[0])));  if (t) { goto L_00255528; } }
L_00255514:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0])));  goto L_00255528; }
    set32(c.r[18], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00255534; } }
L_00255528:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00255514u | kUnwind; return; } goto L_00255514; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00255534:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_002555B8; }
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[21], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[21].d[0] == c.r[18].d[0]; set32(c.r[23], c.r[3].w[0] + 4u);  if (t) { goto L_0025562C; } }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { st32((c.r[23].w[0]), c.r[18].w[0]);  goto L_00255590; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255560u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00255560u) [[unlikely]] return; }
L_00255560:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255570u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00255570u) [[unlikely]] return; }
L_00255570:
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025558C; } }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025558Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025558Cu) [[unlikely]] return; }
L_0025558C:
    st32((c.r[23].w[0]), c.r[18].w[0]);
    c.budget -= 1;
L_00255590:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 20u)));  goto L_00255630; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002555A0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002555A0u) [[unlikely]] return; }
L_002555A0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002555B0u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002555B0u) [[unlikely]] return; }
L_002555B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025562C; } }
L_002555B8:
    set32(c.r[3], ld32((c.r[23].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[21], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[21].d[0] == c.r[3].d[0]; set32(c.r[30], c.r[4].w[0] + 4u);  if (t) { goto L_0025562C; } }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[21], ld32((c.r[23].w[0])));  goto L_0025560C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002555DCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002555DCu) [[unlikely]] return; }
L_002555DC:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002555ECu); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002555ECu) [[unlikely]] return; }
L_002555EC:
    set32(c.r[3], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00255608; } }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00255608u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00255608u) [[unlikely]] return; }
L_00255608:
    set32(c.r[21], ld32((c.r[23].w[0])));
    c.budget -= 1;
L_0025560C:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[30].w[0]), c.r[21].w[0]);  if (t) { goto L_0025562C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025561Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0025561Cu) [[unlikely]] return; }
L_0025561C:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025562Cu); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0025562Cu) [[unlikely]] return; }
L_0025562C:
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 1;
L_00255630:
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; mmi::divu(c, 0, c.r[5].w[0], c.r[3].w[0]);  if (t) { goto L_0025564C; } }
    breakpoint(c, 0x00255648u);
    c.budget -= 1;
L_0025564C:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[3].w[0])));  if (t) { goto L_00255678; } }
L_00255664:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0])));  goto L_00255678; }
    set32(c.r[18], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00255684; } }
L_00255678:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00255664u | kUnwind; return; } goto L_00255664; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00255684:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 20u)));  goto L_0025569C; }
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.r[18].w[0]);  if (t) { goto L_002556A4; } }
L_0025569C:
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[5].w[0]);
    c.budget -= 2;
L_002556A4:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_002556A8:
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    c.r[3].d[0] = c.r[22].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0025531Cu | kUnwind; return; } goto L_0025531C; }
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[5], ld32((c.r[20].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; mmi::divu(c, 0, c.r[5].w[0], c.r[3].w[0]);  if (t) { goto L_002556D0; } }
    breakpoint(c, 0x002556CCu);
    c.budget -= 1;
L_002556D0:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[3].w[0])));  if (t) { goto L_002556FC; } }
L_002556E8:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0])));  goto L_002556FC; }
    set32(c.r[18], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00255708; } }
L_002556FC:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002556E8u | kUnwind; return; } goto L_002556E8; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00255708:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[17].w[0] + 64u), c.r[5].w[0]);  goto L_00255714; }
    st32((c.r[17].w[0] + 64u), c.r[18].w[0]);
    c.budget -= 1;
L_00255714:
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[5], ld32((c.r[20].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; mmi::divu(c, 0, c.r[5].w[0], c.r[3].w[0]);  if (t) { goto L_0025572C; } }
    breakpoint(c, 0x00255728u);
    c.budget -= 1;
L_0025572C:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[3].w[0])));  if (t) { goto L_00255758; } }
L_00255744:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0])));  goto L_00255758; }
    set32(c.r[18], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00255764; } }
L_00255758:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00255744u | kUnwind; return; } goto L_00255744; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00255764:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[17].w[0] + 104u), c.r[5].w[0]);  goto L_00255770; }
    st32((c.r[17].w[0] + 104u), c.r[18].w[0]);
    c.budget -= 1;
L_00255770:
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[5], ld32((c.r[20].w[0] + 116u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; mmi::divu(c, 0, c.r[5].w[0], c.r[3].w[0]);  if (t) { goto L_00255788; } }
    breakpoint(c, 0x00255784u);
    c.budget -= 1;
L_00255788:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[3].w[0])));  if (t) { goto L_002557B4; } }
L_002557A0:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0])));  goto L_002557B4; }
    set32(c.r[18], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002557C0; } }
L_002557B4:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002557A0u | kUnwind; return; } goto L_002557A0; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002557C0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[17].w[0] + 116u), c.r[5].w[0]);  goto L_002557CC; }
    st32((c.r[17].w[0] + 116u), c.r[18].w[0]);
    c.budget -= 1;
L_002557CC:
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
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00255800:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255838u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006E(c, 446u, depth + 1u); else { c.pc = 0x002BB4A0u; return; } if (c.pc != 0x00255838u) [[unlikely]] return; }
L_00255838:
    set32(c.r[17], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[17].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 12u)));  goto L_002558CC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 8u)));  goto L_00255874; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255860u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00255860u) [[unlikely]] return; }
L_00255860:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255870u); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00255870u) [[unlikely]] return; }
L_00255870:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_00255874:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[16].d[0]) { st32((c.r[19].w[0] + 8u), c.r[17].w[0]);  goto L_002558C8; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255894u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00255894u) [[unlikely]] return; }
L_00255894:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002558A4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002558A4u) [[unlikely]] return; }
L_002558A4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002558C4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002558C4u); set32(c.r[5], c.r[19].w[0] + 8u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002558C4u) [[unlikely]] return; }
L_002558C4:
    st32((c.r[19].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 1;
L_002558C8:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 1;
L_002558CC:
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    st32((c.r[19].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[2], c.r[16].w[0] << 4);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002558ECu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002558ECu) [[unlikely]] return; }
L_002558EC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00250000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00250000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 18624u);
    set32(c.r[6], c.r[6].w[0] + 18384u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025590Cu); set32(c.r[7], 0u + 16u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x0025590Cu) [[unlikely]] return; }
L_0025590C:
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025592Cu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x0025592Cu) [[unlikely]] return; }
L_0025592C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00250000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00250000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 16064u);
    set32(c.r[6], c.r[6].w[0] + 15440u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025594Cu); set32(c.r[7], 0u + 20u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x0025594Cu) [[unlikely]] return; }
L_0025594C:
    st32((c.r[19].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00255B90; } }
L_00255958:
    set32(c.r[16], c.r[18].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[18].w[0] << 2);  goto L_00255B38; }
    set32(c.r[2], ld32((c.r[20].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[22].d[0] + 0ull;  goto L_00255A9C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255980u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 454u, depth + 1u); else { c.pc = 0x002BB650u; return; } if (c.pc != 0x00255980u) [[unlikely]] return; }
L_00255980:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[23], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[17], ld32((c.r[23].w[0])));
    c.budget -= 6;
    if (c.r[17].d[0] == c.r[21].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 20u)));  goto L_002559FC; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[23].w[0]), c.r[21].w[0]);  goto L_002559D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002559A8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002559A8u) [[unlikely]] return; }
L_002559A8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002559B8u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002559B8u) [[unlikely]] return; }
L_002559B8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002559D4; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002559D4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002559D4u) [[unlikely]] return; }
L_002559D4:
    st32((c.r[23].w[0]), c.r[21].w[0]);
    c.budget -= 1;
L_002559D8:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_002559F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002559E8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002559E8u) [[unlikely]] return; }
L_002559E8:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002559F8u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002559F8u) [[unlikely]] return; }
L_002559F8:
    set32(c.r[2], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 1;
L_002559FC:
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00255B34; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00255A1Cu); c.r[5].d[0] = c.r[22].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00255A1Cu) [[unlikely]] return; }
L_00255A1C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == c.r[17].d[0]; set32(c.r[21], c.r[2].w[0] + 4u);  if (t) { goto L_00255B34; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[21].w[0]), c.r[17].w[0]);  goto L_00255A74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255A44u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00255A44u) [[unlikely]] return; }
L_00255A44:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255A54u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00255A54u) [[unlikely]] return; }
L_00255A54:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00255A70; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00255A70u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00255A70u) [[unlikely]] return; }
L_00255A70:
    st32((c.r[21].w[0]), c.r[17].w[0]);
    c.budget -= 1;
L_00255A74:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00255B34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255A84u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00255A84u) [[unlikely]] return; }
L_00255A84:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255A94u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00255A94u) [[unlikely]] return; }
L_00255A94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00255B34; } }
L_00255A9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255AA4u);  if (depth < kMaxDepth) unit_006E(c, 454u, depth + 1u); else { c.pc = 0x002BB650u; return; } if (c.pc != 0x00255AA4u) [[unlikely]] return; }
L_00255AA4:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[23], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[17], ld32((c.r[23].w[0])));
    c.budget -= 6;
    if (c.r[17].d[0] == c.r[21].d[0]) { set32(c.r[3], ld32((c.r[20].w[0] + 20u)));  goto L_00255B20; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[23].w[0]), c.r[21].w[0]);  goto L_00255AFC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255ACCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00255ACCu) [[unlikely]] return; }
L_00255ACC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255ADCu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00255ADCu) [[unlikely]] return; }
L_00255ADC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00255AF8; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00255AF8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00255AF8u) [[unlikely]] return; }
L_00255AF8:
    st32((c.r[23].w[0]), c.r[21].w[0]);
    c.budget -= 1;
L_00255AFC:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_00255B1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255B0Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00255B0Cu) [[unlikely]] return; }
L_00255B0C:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255B1Cu); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00255B1Cu) [[unlikely]] return; }
L_00255B1C:
    set32(c.r[3], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 1;
L_00255B20:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_00255B34:
    set32(c.r[2], c.r[18].w[0] << 2);
    c.budget -= 1;
L_00255B38:
    set32(c.r[3], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255B5Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 37u, depth + 1u); else { c.pc = 0x00254470u; return; } if (c.pc != 0x00255B5Cu) [[unlikely]] return; }
L_00255B5C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255B68u); set32(c.r[5], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0055(c, 31u, depth + 1u); else { c.pc = 0x002543A0u; return; } if (c.pc != 0x00255B68u) [[unlikely]] return; }
L_00255B68:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255B74u); set32(c.r[5], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_0055(c, 25u, depth + 1u); else { c.pc = 0x002542D0u; return; } if (c.pc != 0x00255B74u) [[unlikely]] return; }
L_00255B74:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255B80u); set32(c.r[5], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0055(c, 19u, depth + 1u); else { c.pc = 0x00254200u; return; } if (c.pc != 0x00255B80u) [[unlikely]] return; }
L_00255B80:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255B8Cu); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0055(c, 13u, depth + 1u); else { c.pc = 0x00254130u; return; } if (c.pc != 0x00255B8Cu) [[unlikely]] return; }
L_00255B8C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00255B90:
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00255958u | kUnwind; return; } goto L_00255958; }
    c.f[0] = ld32((c.r[20].w[0] + 28u));
    st32((c.r[19].w[0] + 28u), c.f[0]);
    set32(c.r[16], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 32u)));
    c.budget -= 6;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[20].w[0] + 36u)));  goto L_00255C1C; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[20].w[0] + 32u)));  goto L_00255BF8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255BC8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00255BC8u) [[unlikely]] return; }
L_00255BC8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255BD8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00255BD8u) [[unlikely]] return; }
L_00255BD8:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00255BF4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00255BF4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00255BF4u) [[unlikely]] return; }
L_00255BF4:
    set32(c.r[16], ld32((c.r[20].w[0] + 32u)));
    c.budget -= 1;
L_00255BF8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[19].w[0] + 32u), c.r[16].w[0]);  if (t) { goto L_00255C18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255C08u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00255C08u) [[unlikely]] return; }
L_00255C08:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255C18u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00255C18u) [[unlikely]] return; }
L_00255C18:
    set32(c.r[3], ld32((c.r[20].w[0] + 36u)));
    c.budget -= 1;
L_00255C1C:
    st32((c.r[19].w[0] + 36u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[20].w[0] + 40u));
    st32((c.r[19].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 44u));
    st32((c.r[19].w[0] + 44u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 48u));
    st32((c.r[19].w[0] + 48u), c.f[0]);
    set32(c.r[17], ld32((c.r[20].w[0] + 112u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 112u)));
    c.budget -= 11;
    if (c.r[3].d[0] == c.r[17].d[0]) { set32(c.r[3], ld32((c.r[20].w[0] + 120u)));  goto L_00255CCC; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 112u)));  goto L_00255C74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255C60u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00255C60u) [[unlikely]] return; }
L_00255C60:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255C70u); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00255C70u) [[unlikely]] return; }
L_00255C70:
    set32(c.r[3], ld32((c.r[19].w[0] + 112u)));
    c.budget -= 1;
L_00255C74:
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[16].d[0]) { st32((c.r[19].w[0] + 112u), c.r[17].w[0]);  goto L_00255CC8; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255C94u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00255C94u) [[unlikely]] return; }
L_00255C94:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255CA4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00255CA4u) [[unlikely]] return; }
L_00255CA4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00255CC4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255CC4u); set32(c.r[5], c.r[19].w[0] + 112u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00255CC4u) [[unlikely]] return; }
L_00255CC4:
    st32((c.r[19].w[0] + 112u), c.r[17].w[0]);
    c.budget -= 1;
L_00255CC8:
    set32(c.r[3], ld32((c.r[20].w[0] + 120u)));
    c.budget -= 1;
L_00255CCC:
    st32((c.r[19].w[0] + 120u), c.r[3].w[0]);
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00255D00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 124u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255D28u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00255D28u) [[unlikely]] return; }
L_00255D28:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00255D44; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255D3Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0056(c, 105u, depth + 1u); else { c.pc = 0x002589A0u; return; } if (c.pc != 0x00255D3Cu) [[unlikely]] return; }
L_00255D3C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_00255D44:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255D50u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 197u, depth + 1u); else { c.pc = 0x00255800u; return; } if (c.pc != 0x00255D50u) [[unlikely]] return; }
L_00255D50:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00255D70:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00255DB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00255FF4; } }
L_00255DB0:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[16].w[0] << 4);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255DC8u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x00255DC8u) [[unlikely]] return; }
L_00255DC8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00250000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00250000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 18624u);
    set32(c.r[6], c.r[6].w[0] + 18384u);
    set32(c.r[7], 0u + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255DE8u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x00255DE8u) [[unlikely]] return; }
L_00255DE8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255E04u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x00255E04u) [[unlikely]] return; }
L_00255E04:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00250000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00250000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 16064u);
    set32(c.r[6], c.r[6].w[0] + 15440u);
    set32(c.r[7], 0u + 20u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255E24u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x00255E24u) [[unlikely]] return; }
L_00255E24:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00255FA0; } }
L_00255E30:
    c.r[1].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_00255FA0; }
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[22], c.r[18].w[0] << 4);
    set32(c.r[23], c.r[17].w[0] + c.r[22].w[0]);
    set32(c.r[21], ld32((c.r[23].w[0])));
    set32(c.r[20], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.budget -= 8;
    if (c.r[21].d[0] == c.r[2].d[0]) { set32(c.r[21], ld32((c.r[23].w[0] + 4u)));  goto L_00255EC4; }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[21], ld32((c.r[20].w[0])));  goto L_00255E9C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255E6Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00255E6Cu) [[unlikely]] return; }
L_00255E6C:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255E7Cu); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00255E7Cu) [[unlikely]] return; }
L_00255E7C:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00255E98; } }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00255E98u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00255E98u) [[unlikely]] return; }
L_00255E98:
    set32(c.r[21], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_00255E9C:
    set32(c.r[2], c.r[17].w[0] + c.r[22].w[0]);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[2].w[0]), c.r[21].w[0]);  if (t) { goto L_00255EC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255EB0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00255EB0u) [[unlikely]] return; }
L_00255EB0:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255EC0u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00255EC0u) [[unlikely]] return; }
L_00255EC0:
    set32(c.r[21], ld32((c.r[23].w[0] + 4u)));
    c.budget -= 1;
L_00255EC4:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[21].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  goto L_00255F38; }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[21], ld32((c.r[20].w[0] + 4u)));  goto L_00255F10; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255EE0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00255EE0u) [[unlikely]] return; }
L_00255EE0:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255EF0u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00255EF0u) [[unlikely]] return; }
L_00255EF0:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00255F0C; } }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00255F0Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00255F0Cu) [[unlikely]] return; }
L_00255F0C:
    set32(c.r[21], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 1;
L_00255F10:
    set32(c.r[2], c.r[17].w[0] + c.r[22].w[0]);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[2].w[0] + 4u), c.r[21].w[0]);  if (t) { goto L_00255F34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255F24u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00255F24u) [[unlikely]] return; }
L_00255F24:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255F34u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00255F34u) [[unlikely]] return; }
L_00255F34:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 1;
L_00255F38:
    set32(c.r[5], c.r[17].w[0] + c.r[22].w[0]);
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[5].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].d[0] = ld8((c.r[20].w[0] + 12u));
    set32(c.r[21], c.r[30].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st8((c.r[5].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[20], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255F6Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 37u, depth + 1u); else { c.pc = 0x00254470u; return; } if (c.pc != 0x00255F6Cu) [[unlikely]] return; }
L_00255F6C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255F78u); set32(c.r[5], c.r[20].w[0] + 4u);  if (depth < kMaxDepth) unit_0055(c, 31u, depth + 1u); else { c.pc = 0x002543A0u; return; } if (c.pc != 0x00255F78u) [[unlikely]] return; }
L_00255F78:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255F84u); set32(c.r[5], c.r[20].w[0] + 8u);  if (depth < kMaxDepth) unit_0055(c, 25u, depth + 1u); else { c.pc = 0x002542D0u; return; } if (c.pc != 0x00255F84u) [[unlikely]] return; }
L_00255F84:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255F90u); set32(c.r[5], c.r[20].w[0] + 12u);  if (depth < kMaxDepth) unit_0055(c, 19u, depth + 1u); else { c.pc = 0x00254200u; return; } if (c.pc != 0x00255F90u) [[unlikely]] return; }
L_00255F90:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255F9Cu); set32(c.r[5], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_0055(c, 13u, depth + 1u); else { c.pc = 0x00254130u; return; } if (c.pc != 0x00255F9Cu) [[unlikely]] return; }
L_00255F9C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00255FA0:
    c.r[2].d[0] = c.r[18].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00255E30u | kUnwind; return; } goto L_00255E30; }
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00250000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] + 18384u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255FC8u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x00255FC8u) [[unlikely]] return; }
L_00255FC8:
    set32(c.r[4], ld32((c.r[19].w[0] + 24u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00250000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] + 15440u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00255FE4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x00255FE4u) [[unlikely]] return; }
L_00255FE4:
    st32((c.r[19].w[0] + 12u), c.r[16].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0] + 20u), c.r[17].w[0]);
    st32((c.r[19].w[0] + 24u), c.r[30].w[0]);
    c.budget -= 4;
L_00255FF4:
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
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00256030:
    c.f[1] = ld32((c.r[28].w[0] - 32644u));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00256164; } }
L_00256040:
    set32(c.r[7], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[10], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 5;
    if (c.r[10].d[0] == 0ull) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_00256164; }
    c.r[7].d[0] = ld8((c.r[10].w[0] + 14u));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[3].d[0]; c.r[9].d[0] = ld8((c.r[5].w[0] + 12u));  if (t) { goto L_00256070; } }
    c.r[7].d[0] = ld8((c.r[10].w[0] + 15u));
    c.r[8].d[0] = c.r[9].d[0] & 255ull;
    c.budget -= 4;
    if (c.r[8].d[0] == c.r[7].d[0]) { set32(c.r[10], ld32((c.r[5].w[0] + 8u)));  goto L_002560B8; }
L_00256070:
    c.r[9].d[0] = c.r[9].d[0] & 255ull;
    set32(c.r[7], ld32((c.r[10].w[0] + 20u)));
    set32(c.r[8], c.r[9].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 3);
    set32(c.r[8], c.r[7].w[0] + c.r[8].w[0]);
    c.f[0] = ld32((c.r[8].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[12]) == fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[7], c.r[8].w[0] + 4u);  if (t) { goto L_002560B4; } }
    st32((c.r[7].w[0]), c.f[12]);
    st32((c.r[10].w[0] + 36u), c.f[1]);
    st32((c.r[10].w[0] + 40u), c.f[1]);
    st32((c.r[10].w[0] + 44u), c.f[1]);
    c.r[7].d[0] = ld8((c.r[10].w[0] + 12u));
    c.r[7].d[0] = c.r[7].d[0] | 4ull;
    st8((c.r[10].w[0] + 12u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 7;
L_002560B4:
    set32(c.r[10], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 1;
L_002560B8:
    c.r[7].d[0] = ld8((c.r[10].w[0] + 14u));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[3].d[0]; c.r[9].d[0] = ld8((c.r[5].w[0] + 12u));  if (t) { goto L_002560D4; } }
    c.r[7].d[0] = ld8((c.r[10].w[0] + 15u));
    c.r[8].d[0] = c.r[9].d[0] & 255ull;
    c.budget -= 4;
    if (c.r[8].d[0] == c.r[7].d[0]) { c.r[8].d[0] = ld8((c.r[5].w[0] + 12u));  goto L_0025611C; }
L_002560D4:
    c.r[9].d[0] = c.r[9].d[0] & 255ull;
    set32(c.r[7], ld32((c.r[10].w[0] + 20u)));
    set32(c.r[8], c.r[9].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[8].w[0] << 3);
    set32(c.r[8], c.r[7].w[0] + c.r[8].w[0]);
    c.f[0] = ld32((c.r[8].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[13]) == fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[7], c.r[8].w[0] + 16u);  if (t) { goto L_00256118; } }
    st32((c.r[7].w[0]), c.f[13]);
    st32((c.r[10].w[0] + 36u), c.f[1]);
    st32((c.r[10].w[0] + 40u), c.f[1]);
    st32((c.r[10].w[0] + 44u), c.f[1]);
    c.r[7].d[0] = ld8((c.r[10].w[0] + 12u));
    c.r[7].d[0] = c.r[7].d[0] | 4ull;
    st8((c.r[10].w[0] + 12u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 7;
L_00256118:
    c.r[8].d[0] = ld8((c.r[5].w[0] + 12u));
    c.budget -= 1;
L_0025611C:
    set32(c.r[9], ld32((c.r[5].w[0] + 8u)));
    c.r[5].d[0] = ld8((c.r[9].w[0] + 14u));
    c.budget -= 4;
    if (c.r[5].d[0] != c.r[3].d[0]) { c.r[8].d[0] = c.r[8].d[0] & 255ull;  goto L_00256148; }
    c.r[5].d[0] = ld8((c.r[9].w[0] + 15u));
    c.r[7].d[0] = c.r[8].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[5].d[0];  if (t) { goto L_00256144; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[9].w[0] + 32u), c.f[14]);  if (t) { goto L_00256160; } }
L_00256144:
    c.r[8].d[0] = c.r[8].d[0] & 255ull;
    c.budget -= 1;
L_00256148:
    set32(c.r[5], ld32((c.r[9].w[0] + 20u)));
    set32(c.r[7], c.r[8].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[5].w[0] + 20u), c.f[14]);
    c.budget -= 6;
L_00256160:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00256164:
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.r[5].d[0] = c.r[6].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[5].d[0] != 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00256040u | kUnwind; return; } goto L_00256040; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00256180:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[1] = ld32((c.r[4].w[0] + 52u));
    c.f[21] = ld32((c.r[4].w[0] + 56u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[22] = c.f[12];  if (t) { goto L_002561C8; } }
    c.f[21] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = c.f[22];  if (t) { goto L_002561CC; } }
L_002561C8:
    c.f[1] = fp::sub(c.f[22], c.f[1]);
    c.budget -= 1;
L_002561CC:
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.f[2] = 0u;
    set32(c.r[2], 0u + 2u);
    c.facc = fp::add(c.f[2], c.f[21]);
    c.f[21] = fp::add(c.facc, fp::mul(c.f[1], c.f[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.f[0] = c.f[21];  if (t) { goto L_00256240; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.f[3] = ld32((c.r[17].w[0] + 44u));  goto L_002561FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[17].w[0] + 48u));  if (t) { goto L_00256244; } }
L_002561FC:
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.f[20] = fp::sub(c.f[1], c.f[3]);
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[20]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = c.f[3];  goto L_00256240; }
    fpu_compare(c, fp::key(c.f[21]) == fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00256230; } }
    c.f[12] = fp::sub(c.f[21], c.f[3]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256228u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_00AB(c, 431u, depth + 1u); else { c.pc = 0x003AF758u; return; } if (c.pc != 0x00256228u) [[unlikely]] return; }
L_00256228:
    c.f[3] = ld32((c.r[17].w[0] + 44u));
    c.f[0] = fp::add(c.f[3], c.f[0]);
    c.budget -= 2;
L_00256230:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00256240; } }
    c.f[0] = fp::add(c.f[0], c.f[20]);
    c.budget -= 1;
L_00256240:
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.budget -= 1;
L_00256244:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[17].w[0] + 44u));  goto L_00256258; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[1];  if (t) { goto L_00256268; } }
L_00256258:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00256268; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_00256268:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_00256280; }
    st32((c.r[17].w[0] + 56u), c.f[21]);
    st32((c.r[17].w[0] + 52u), c.f[22]);
    st32((c.r[17].w[0] + 60u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 4;
L_00256280:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002562A0:
    set32(c.r[29], c.r[29].w[0] - 1008u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002562D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x002562D8u) [[unlikely]] return; }
L_002562D8:
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(260ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], c.r[2].w[0] + 1u);  goto L_002562E8; }
    set32(c.r[6], 0u + 260u);
    c.budget -= 1;
L_002562E8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002562F4u); set32(c.r[4], c.r[29].w[0] + 704u);  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x002562F4u) [[unlikely]] return; }
L_002562F4:
    st8((c.r[2].w[0] + 259u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[29].w[0] + 704u);
    set32(c.r[5], 0u + 10u);
    st8((c.r[29].w[0] + 432u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025630Cu); st8((c.r[29].w[0] + 160u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00AE(c, 149u, depth + 1u); else { c.pc = 0x003B9A38u; return; } if (c.pc != 0x0025630Cu) [[unlikely]] return; }
L_0025630C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00256380; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256320u); set32(c.r[4], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00256320u) [[unlikely]] return; }
L_00256320:
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(260ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], c.r[2].w[0] + 1u);  goto L_00256330; }
    set32(c.r[6], 0u + 260u);
    c.budget -= 1;
L_00256330:
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025633Cu); set32(c.r[5], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x0025633Cu) [[unlikely]] return; }
L_0025633C:
    st8((c.r[2].w[0] + 259u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[29].w[0] + 432u);
    set32(c.r[5], 0u + 10u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256350u); st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00AE(c, 149u, depth + 1u); else { c.pc = 0x003B9A38u; return; } if (c.pc != 0x00256350u) [[unlikely]] return; }
L_00256350:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025635Cu); set32(c.r[4], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0025635Cu) [[unlikely]] return; }
L_0025635C:
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(260ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], c.r[2].w[0] + 1u);  goto L_0025636C; }
    set32(c.r[6], 0u + 260u);
    c.budget -= 1;
L_0025636C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256378u); set32(c.r[5], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x00256378u) [[unlikely]] return; }
L_00256378:
    st8((c.r[2].w[0] + 259u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00256380:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00256BF8; } }
L_00256390:
    st32((c.r[29].w[0] + 1004u), c.r[18].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 1000u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 996u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 992u), c.r[18].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002563ACu); st32((c.r[29].w[0] + 988u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_004E(c, 172u, depth + 1u); else { c.pc = 0x00239E00u; return; } if (c.pc != 0x002563ACu) [[unlikely]] return; }
L_002563AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002563B4u); set32(c.r[4], c.r[29].w[0] + 132u);  if (depth < kMaxDepth) unit_004E(c, 172u, depth + 1u); else { c.pc = 0x00239E00u; return; } if (c.pc != 0x002563B4u) [[unlikely]] return; }
L_002563B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002563BCu); set32(c.r[4], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_004E(c, 172u, depth + 1u); else { c.pc = 0x00239E00u; return; } if (c.pc != 0x002563BCu) [[unlikely]] return; }
L_002563BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002563C4u); set32(c.r[4], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_004E(c, 172u, depth + 1u); else { c.pc = 0x00239E00u; return; } if (c.pc != 0x002563C4u) [[unlikely]] return; }
L_002563C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002563CCu); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_004E(c, 172u, depth + 1u); else { c.pc = 0x00239E00u; return; } if (c.pc != 0x002563CCu) [[unlikely]] return; }
L_002563CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002563D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 43u, depth + 1u); else { c.pc = 0x00254540u; return; } if (c.pc != 0x002563D4u) [[unlikely]] return; }
L_002563D4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002563E0u); set32(c.r[5], c.r[29].w[0] + 1004u);  if (depth < kMaxDepth) unit_0055(c, 37u, depth + 1u); else { c.pc = 0x00254470u; return; } if (c.pc != 0x002563E0u) [[unlikely]] return; }
L_002563E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002563ECu); set32(c.r[5], c.r[29].w[0] + 1000u);  if (depth < kMaxDepth) unit_0055(c, 31u, depth + 1u); else { c.pc = 0x002543A0u; return; } if (c.pc != 0x002563ECu) [[unlikely]] return; }
L_002563EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002563F8u); set32(c.r[5], c.r[29].w[0] + 996u);  if (depth < kMaxDepth) unit_0055(c, 25u, depth + 1u); else { c.pc = 0x002542D0u; return; } if (c.pc != 0x002563F8u) [[unlikely]] return; }
L_002563F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256404u); set32(c.r[5], c.r[29].w[0] + 992u);  if (depth < kMaxDepth) unit_0055(c, 19u, depth + 1u); else { c.pc = 0x00254200u; return; } if (c.pc != 0x00256404u) [[unlikely]] return; }
L_00256404:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256410u); set32(c.r[5], c.r[29].w[0] + 988u);  if (depth < kMaxDepth) unit_0055(c, 13u, depth + 1u); else { c.pc = 0x00254130u; return; } if (c.pc != 0x00256410u) [[unlikely]] return; }
L_00256410:
    set32(c.r[2], ld32((c.r[29].w[0] + 988u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 992u)));  goto L_00256468; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256434u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00256434u) [[unlikely]] return; }
L_00256434:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256444u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00256444u) [[unlikely]] return; }
L_00256444:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00256464; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256464u); set32(c.r[5], c.r[29].w[0] + 988u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00256464u) [[unlikely]] return; }
L_00256464:
    set32(c.r[2], ld32((c.r[29].w[0] + 992u)));
    c.budget -= 1;
L_00256468:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 996u)));  goto L_002564BC; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256488u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00256488u) [[unlikely]] return; }
L_00256488:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256498u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00256498u) [[unlikely]] return; }
L_00256498:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002564B8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002564B8u); set32(c.r[5], c.r[29].w[0] + 992u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002564B8u) [[unlikely]] return; }
L_002564B8:
    set32(c.r[2], ld32((c.r[29].w[0] + 996u)));
    c.budget -= 1;
L_002564BC:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 1000u)));  goto L_00256510; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002564DCu); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002564DCu) [[unlikely]] return; }
L_002564DC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002564ECu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002564ECu) [[unlikely]] return; }
L_002564EC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0025650C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025650Cu); set32(c.r[5], c.r[29].w[0] + 996u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x0025650Cu) [[unlikely]] return; }
L_0025650C:
    set32(c.r[2], ld32((c.r[29].w[0] + 1000u)));
    c.budget -= 1;
L_00256510:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 1004u)));  goto L_00256564; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256530u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00256530u) [[unlikely]] return; }
L_00256530:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256540u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00256540u) [[unlikely]] return; }
L_00256540:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00256560; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256560u); set32(c.r[5], c.r[29].w[0] + 1000u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00256560u) [[unlikely]] return; }
L_00256560:
    set32(c.r[2], ld32((c.r[29].w[0] + 1004u)));
    c.budget -= 1;
L_00256564:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { set32(c.r[4], c.r[29].w[0] + 704u);  goto L_002565B8; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256584u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00256584u) [[unlikely]] return; }
L_00256584:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256594u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00256594u) [[unlikely]] return; }
L_00256594:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002565B4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002565B4u); set32(c.r[5], c.r[29].w[0] + 1004u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002565B4u) [[unlikely]] return; }
L_002565B4:
    set32(c.r[4], c.r[29].w[0] + 704u);
    c.budget -= 1;
L_002565B8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002565C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002565D4; } }
L_002565C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002565D0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002565D0u) [[unlikely]] return; }
L_002565D0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002565D4:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0]; st32((c.r[29].w[0] + 984u), c.r[17].w[0]);  if (t) { goto L_00256658; } }
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 128u)));  goto L_00256604; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002565F0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002565F0u) [[unlikely]] return; }
L_002565F0:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256600u); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00256600u) [[unlikely]] return; }
L_00256600:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.budget -= 1;
L_00256604:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { st32((c.r[29].w[0] + 128u), c.r[17].w[0]);  goto L_00256658; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256624u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00256624u) [[unlikely]] return; }
L_00256624:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256634u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00256634u) [[unlikely]] return; }
L_00256634:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00256654; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256654u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00256654u) [[unlikely]] return; }
L_00256654:
    st32((c.r[29].w[0] + 128u), c.r[17].w[0]);
    c.budget -= 1;
L_00256658:
    set32(c.r[2], ld32((c.r[29].w[0] + 984u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { goto L_002566AC; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025667Cu); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0025667Cu) [[unlikely]] return; }
L_0025667C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025668Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0025668Cu) [[unlikely]] return; }
L_0025668C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002566AC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002566ACu); set32(c.r[5], c.r[29].w[0] + 984u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002566ACu) [[unlikely]] return; }
L_002566AC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002566BCu); set32(c.r[5], c.r[5].w[0] + 12231u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x002566BCu) [[unlikely]] return; }
L_002566BC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[20].w[0])));  goto L_002567C0; }
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002566D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002566E4; } }
L_002566D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002566E0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002566E0u) [[unlikely]] return; }
L_002566E0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002566E4:
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0]; st32((c.r[29].w[0] + 980u), c.r[17].w[0]);  if (t) { goto L_00256768; } }
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 132u)));  goto L_00256714; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256700u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00256700u) [[unlikely]] return; }
L_00256700:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256710u); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00256710u) [[unlikely]] return; }
L_00256710:
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 1;
L_00256714:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { st32((c.r[29].w[0] + 132u), c.r[17].w[0]);  goto L_00256768; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256734u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00256734u) [[unlikely]] return; }
L_00256734:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256744u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00256744u) [[unlikely]] return; }
L_00256744:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00256764; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256764u); set32(c.r[5], c.r[29].w[0] + 132u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00256764u) [[unlikely]] return; }
L_00256764:
    st32((c.r[29].w[0] + 132u), c.r[17].w[0]);
    c.budget -= 1;
L_00256768:
    set32(c.r[2], ld32((c.r[29].w[0] + 980u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { goto L_002567BC; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025678Cu); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0025678Cu) [[unlikely]] return; }
L_0025678C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025679Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0025679Cu) [[unlikely]] return; }
L_0025679C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002567BC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002567BCu); set32(c.r[5], c.r[29].w[0] + 980u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002567BCu) [[unlikely]] return; }
L_002567BC:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_002567C0:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002567CCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002567CCu) [[unlikely]] return; }
L_002567CC:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002567E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002567EC; } }
L_002567E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002567E8u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002567E8u) [[unlikely]] return; }
L_002567E8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002567EC:
    set32(c.r[2], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0]; st32((c.r[29].w[0] + 976u), c.r[17].w[0]);  if (t) { goto L_00256870; } }
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 136u)));  goto L_0025681C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256808u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00256808u) [[unlikely]] return; }
L_00256808:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256818u); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00256818u) [[unlikely]] return; }
L_00256818:
    set32(c.r[2], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_0025681C:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { st32((c.r[29].w[0] + 136u), c.r[17].w[0]);  goto L_00256870; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025683Cu); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0025683Cu) [[unlikely]] return; }
L_0025683C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025684Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0025684Cu) [[unlikely]] return; }
L_0025684C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0025686C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025686Cu); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x0025686Cu) [[unlikely]] return; }
L_0025686C:
    st32((c.r[29].w[0] + 136u), c.r[17].w[0]);
    c.budget -= 1;
L_00256870:
    set32(c.r[2], ld32((c.r[29].w[0] + 976u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[18].d[0]) { set32(c.r[25], ld32((c.r[20].w[0])));  goto L_002568C8; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256894u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00256894u) [[unlikely]] return; }
L_00256894:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002568A4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002568A4u) [[unlikely]] return; }
L_002568A4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002568C4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002568C4u); set32(c.r[5], c.r[29].w[0] + 976u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002568C4u) [[unlikely]] return; }
L_002568C4:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_002568C8:
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002568D4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002568D4u) [[unlikely]] return; }
L_002568D4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_002568E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002568F0; } }
L_002568E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002568ECu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002568ECu) [[unlikely]] return; }
L_002568EC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002568F0:
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0]; st32((c.r[29].w[0] + 972u), c.r[17].w[0]);  if (t) { goto L_00256974; } }
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 140u)));  goto L_00256920; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025690Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0025690Cu) [[unlikely]] return; }
L_0025690C:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025691Cu); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0025691Cu) [[unlikely]] return; }
L_0025691C:
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    c.budget -= 1;
L_00256920:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { st32((c.r[29].w[0] + 140u), c.r[17].w[0]);  goto L_00256974; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256940u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00256940u) [[unlikely]] return; }
L_00256940:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256950u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00256950u) [[unlikely]] return; }
L_00256950:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00256970; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256970u); set32(c.r[5], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00256970u) [[unlikely]] return; }
L_00256970:
    st32((c.r[29].w[0] + 140u), c.r[17].w[0]);
    c.budget -= 1;
L_00256974:
    set32(c.r[2], ld32((c.r[29].w[0] + 972u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[18].d[0]) { set32(c.r[25], ld32((c.r[20].w[0])));  goto L_002569CC; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256998u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00256998u) [[unlikely]] return; }
L_00256998:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002569A8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002569A8u) [[unlikely]] return; }
L_002569A8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002569C8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002569C8u); set32(c.r[5], c.r[29].w[0] + 972u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002569C8u) [[unlikely]] return; }
L_002569C8:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_002569CC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 124u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002569DCu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002569DCu) [[unlikely]] return; }
L_002569DC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[2].d[0] + 0ull;  goto L_002569EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_002569F8; } }
L_002569EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002569F4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002569F4u) [[unlikely]] return; }
L_002569F4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002569F8:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0]; st32((c.r[29].w[0] + 968u), c.r[17].w[0]);  if (t) { goto L_00256A7C; } }
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[18].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 144u)));  goto L_00256A28; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256A14u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00256A14u) [[unlikely]] return; }
L_00256A14:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256A24u); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00256A24u) [[unlikely]] return; }
L_00256A24:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.budget -= 1;
L_00256A28:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { st32((c.r[29].w[0] + 144u), c.r[17].w[0]);  goto L_00256A7C; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256A48u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00256A48u) [[unlikely]] return; }
L_00256A48:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256A58u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00256A58u) [[unlikely]] return; }
L_00256A58:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00256A78; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256A78u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00256A78u) [[unlikely]] return; }
L_00256A78:
    st32((c.r[29].w[0] + 144u), c.r[17].w[0]);
    c.budget -= 1;
L_00256A7C:
    set32(c.r[2], ld32((c.r[29].w[0] + 968u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[18].d[0]) { set32(c.r[25], ld32((c.r[20].w[0])));  goto L_00256AD4; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256AA0u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00256AA0u) [[unlikely]] return; }
L_00256AA0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256AB0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00256AB0u) [[unlikely]] return; }
L_00256AB0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00256AD0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256AD0u); set32(c.r[5], c.r[29].w[0] + 968u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00256AD0u) [[unlikely]] return; }
L_00256AD0:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_00256AD4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00256AE4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00256AE4u) [[unlikely]] return; }
L_00256AE4:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256AF4u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0056(c, 74u, depth + 1u); else { c.pc = 0x002585E0u; return; } if (c.pc != 0x00256AF4u) [[unlikely]] return; }
L_00256AF4:
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[3], c.r[2].w[0] << 4);  goto L_00256B40; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256B08u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x00256B08u) [[unlikely]] return; }
L_00256B08:
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256B14u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x00256B14u) [[unlikely]] return; }
L_00256B14:
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256B20u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x00256B20u) [[unlikely]] return; }
L_00256B20:
    set32(c.r[4], c.r[29].w[0] + 132u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256B2Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x00256B2Cu) [[unlikely]] return; }
L_00256B2C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256B38u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x00256B38u) [[unlikely]] return; }
L_00256B38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00256C20; } }
L_00256B40:
    set32(c.r[2], ld32((c.r[22].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[20].d[0]; set32(c.r[16], c.r[2].w[0] + 4u);  if (t) { goto L_00256BB4; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0]), c.r[20].w[0]);  goto L_00256B94; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256B64u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00256B64u) [[unlikely]] return; }
L_00256B64:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256B74u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00256B74u) [[unlikely]] return; }
L_00256B74:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00256B90; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00256B90u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00256B90u) [[unlikely]] return; }
L_00256B90:
    st32((c.r[16].w[0]), c.r[20].w[0]);
    c.budget -= 1;
L_00256B94:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 144u);  goto L_00256BB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256BA4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00256BA4u) [[unlikely]] return; }
L_00256BA4:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256BB4u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00256BB4u) [[unlikely]] return; }
L_00256BB4:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 1;
L_00256BB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256BC0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x00256BC0u) [[unlikely]] return; }
L_00256BC0:
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256BCCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x00256BCCu) [[unlikely]] return; }
L_00256BCC:
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256BD8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x00256BD8u) [[unlikely]] return; }
L_00256BD8:
    set32(c.r[4], c.r[29].w[0] + 132u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256BE4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x00256BE4u) [[unlikely]] return; }
L_00256BE4:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256BF0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x00256BF0u) [[unlikely]] return; }
L_00256BF0:
    set32(c.r[2], c.r[19].w[0] + 1u);
    c.r[19].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_00256BF8:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 120u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00256C0Cu); c.r[16].d[0] = c.r[19].d[0] & 65535ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00256C0Cu) [[unlikely]] return; }
L_00256C0C:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[29].w[0] + 128u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00256390u | kUnwind; return; } goto L_00256390; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00256C20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1008u);  c.pc = t; return; }
L_00256C50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 13512u);  c.pc = t; return; }
L_00256C60:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256CA4u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0055(c, 271u, depth + 1u); else { c.pc = 0x00256180u; return; } if (c.pc != 0x00256CA4u) [[unlikely]] return; }
L_00256CA4:
    set32(c.r[2], ld32((c.r[20].w[0] + 32u)));
    c.f[20] = c.f[0];
    c.r[19].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.r[23].d[0] = 0ull + 0ull;
    set32(c.r[30], ld32((c.r[2].w[0] + 12u)));
    c.r[22].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);  if (t) { goto L_00256D30; } }
L_00256CD0:
    set32(c.r[3], c.r[22].w[0] << 3);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[22], c.r[22].w[0] + 1u);  goto L_00256D30; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], 0u + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256CF4u); set32(c.r[5], c.r[5].w[0] + 12224u);  if (depth < kMaxDepth) unit_00AE(c, 270u, depth + 1u); else { c.pc = 0x003BA6C0u; return; } if (c.pc != 0x00256CF4u) [[unlikely]] return; }
L_00256CF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00256D2C; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; c.r[23].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00256D08; } }
    c.r[19].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00256D08:
    c.f[0] = ld32((c.r[16].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00256D20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00256D2C; } }
L_00256D20:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_00256D2C; } }
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00256D2C:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_00256D30:
    c.r[2].d[0] = c.r[22].d[0] < c.r[30].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00256CD0u | kUnwind; return; } goto L_00256CD0; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st8((c.r[29].w[0] + 224u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00256D4C; } }
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.f[2] = ld32((c.r[18].w[0]));  goto L_00256DC8; }
L_00256D4C:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.f[3] = ld32((c.r[20].w[0] + 44u));  goto L_00256D94; }
    c.f[3] = ld32((c.r[20].w[0] + 48u));
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.f[2] = ld32((c.r[20].w[0] + 44u));
    c.r[17].d[0] = c.r[19].d[0] + 0ull;
    c.f[4] = ld32((c.r[18].w[0]));
    st8((c.r[29].w[0] + 224u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[19].w[0]));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[1] = fp::add(c.f[2], c.f[1]);
    c.f[0] = fp::sub(c.f[20], c.f[4]);
    c.f[1] = fp::sub(c.f[1], c.f[4]);
    fpu_div(c, 20u, c.f[0], c.f[1]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00256DD8; } }
L_00256D94:
    c.r[18].d[0] = c.r[23].d[0] + 0ull;
    c.f[2] = ld32((c.r[20].w[0] + 48u));
    c.f[1] = ld32((c.r[23].w[0]));
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[2] = fp::add(c.f[2], c.f[1]);
    c.f[1] = fp::sub(c.f[20], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00256DD8; } }
L_00256DC8:
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[1] = fp::sub(c.f[20], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 4;
L_00256DD8:
    set32(c.r[3], ld32((c.r[21].w[0] + 32u)));
    c.r[22].d[0] = c.r[18].d[0] ^ 0ull;
    c.r[23].d[0] = c.r[17].d[0] ^ 0ull;
    c.r[22].d[0] = c.r[22].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[23].d[0] = c.r[23].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.r[19].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);  if (t) { goto L_00256E70; } }
L_00256E0C:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull;  if (t) { goto L_00256E3C; } }
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[30], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[30].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256E2Cu); set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00256E2Cu) [[unlikely]] return; }
L_00256E2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00256E3C; } }
    c.r[20].d[0] = c.r[30].d[0] + 0ull;
    c.r[22].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_00256E3C:
    c.budget -= 2;
    if (c.r[23].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00256E70; }
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    set32(c.r[3], c.r[16].w[0] << 3);
    set32(c.r[30], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[30].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00256E5Cu); set32(c.r[5], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00256E5Cu) [[unlikely]] return; }
L_00256E5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00256E6C; } }
    c.r[19].d[0] = c.r[30].d[0] + 0ull;
    c.r[23].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_00256E6C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00256E70:
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00256E90; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00256E0Cu | kUnwind; return; } goto L_00256E0C; } }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00256E0Cu | kUnwind; return; } goto L_00256E0C; } }
L_00256E90:
    c.f[3] = 0u;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[19].d[0]; c.f[2] = c.f[3];  if (t) { goto L_00256ED4; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 224u));
    c.f[3] = ld32((c.r[19].w[0]));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.f[2] = ld32((c.r[20].w[0]));  if (t) { goto L_00256EC0; } }
    c.f[1] = ld32((c.r[21].w[0] + 48u));
    c.f[0] = ld32((c.r[21].w[0] + 44u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[3] = fp::add(c.f[3], c.f[0]);  if (t) { goto L_00256F08; } }
L_00256EC0:
    c.f[1] = ld32((c.r[21].w[0] + 48u));
    c.f[0] = ld32((c.r[21].w[0] + 44u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[2] = fp::sub(c.f[2], c.f[0]);  if (t) { goto L_00256F08; } }
L_00256ED4:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00256EE0; } }
    c.f[3] = ld32((c.r[19].w[0]));
    c.budget -= 1;
L_00256EE0:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00256EEC; } }
    c.f[2] = ld32((c.r[20].w[0]));
    c.budget -= 1;
L_00256EEC:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[3]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = fp::sub(c.f[3], c.f[2]);  goto L_00256F0C; }
    c.f[1] = ld32((c.r[21].w[0] + 48u));
    c.f[0] = ld32((c.r[21].w[0] + 44u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[3] = fp::add(c.f[3], c.f[0]);
    c.budget -= 4;
L_00256F08:
    c.f[1] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 1;
L_00256F0C:
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[2]);
    c.f[2] = ld32((c.r[21].w[0] + 44u));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[20], c.f[1]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 8;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[21].w[0] + 48u));  goto L_00256F3C; }
    c.f[1] = ld32((c.r[21].w[0] + 48u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[0] = fp::add(c.f[0], c.f[1]);  if (t) { goto L_00256F50; } }
L_00256F3C:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));  goto L_00256F54; }
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 2;
L_00256F50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.budget -= 1;
L_00256F54:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_00256F90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00256FB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002570F4; } }
L_00256FB8:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[3] = ld32((c.r[18].w[0] + 52u));  goto L_00256FF4; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], 0u + 3u);  goto L_00256FE0; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 68u), c.r[2].w[0]);  if (t) { goto L_00256FE4; } }
L_00256FE0:
    st32((c.r[18].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 1;
L_00256FE4:
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    st32((c.r[18].w[0] + 92u), c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 96u), c.f[12]);  if (t) { goto L_002570B4; } }
L_00256FF4:
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[3]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[28].w[0] - 32644u));  goto L_00257024; }
    c.f[2] = ld32((c.r[18].w[0] + 56u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = ld32((c.r[18].w[0] + 88u));
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[1] = fp::sub(c.f[1], c.f[3]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 88u), c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    c.budget -= 8;
L_00257024:
    st32((c.r[18].w[0] + 68u), 0u);
    st32((c.r[18].w[0] + 104u), 0u);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 100u), c.f[0]);  if (t) { goto L_002570A4; } }
L_00257038:
    set32(c.r[3], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 5;
    if (c.r[5].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002570A4; }
    set32(c.r[25], ld32((c.r[5].w[0])));
    c.r[6].d[0] = ld8((c.r[2].w[0] + 12u));
    set32(c.r[25], ld32((c.r[25].w[0] + 160u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00257060u); set32(c.r[4], c.r[29].w[0] + 76u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00257060u) [[unlikely]] return; }
L_00257060:
    set32(c.r[17], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002570A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257074u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00257074u) [[unlikely]] return; }
L_00257074:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257084u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00257084u) [[unlikely]] return; }
L_00257084:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002570A0; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002570A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002570A0u) [[unlikely]] return; }
L_002570A0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002570A4:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00257038u | kUnwind; return; } goto L_00257038; }
L_002570B4:
    c.r[16].d[0] = ld16((c.r[18].w[0] + 82u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002570E4; } }
L_002570C0:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[6], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002570E0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002570E0u) [[unlikely]] return; }
L_002570E0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002570E4:
    c.r[2].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 76u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002570C0u | kUnwind; return; } goto L_002570C0; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002570F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00257110:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    c.r[30].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025715Cu); set32(c.r[5], c.r[5].w[0] + 14032u);  if (depth < kMaxDepth) unit_006F(c, 53u, depth + 1u); else { c.pc = 0x002BC710u; return; } if (c.pc != 0x0025715Cu) [[unlikely]] return; }
L_0025715C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 188u), c.r[2].w[0]);  if (t) { goto L_00257180; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257170u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00257170u) [[unlikely]] return; }
L_00257170:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257180u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00257180u) [[unlikely]] return; }
L_00257180:
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00257414; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[18], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_002571DC; } }
L_002571A0:
    set32(c.r[2], ld32((c.r[21].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    if (c.r[4].d[0] == c.r[18].d[0]) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_002571DC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002571C8u); set32(c.r[5], c.r[5].w[0] + 12236u);  if (depth < kMaxDepth) unit_0047(c, 323u, depth + 1u); else { c.pc = 0x0021EE60u; return; } if (c.pc != 0x002571C8u) [[unlikely]] return; }
L_002571C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002571D8; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_002571D8:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_002571DC:
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[19].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002571A0u | kUnwind; return; } goto L_002571A0; }
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 64u);  goto L_00257244; }
    set32(c.r[16], ld32((c.r[29].w[0] + 188u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0025768C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025720Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0025720Cu) [[unlikely]] return; }
L_0025720C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025721Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0025721Cu) [[unlikely]] return; }
L_0025721C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00257238; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00257238u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00257238u) [[unlikely]] return; }
L_00257238:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0025768C; } }
L_00257244:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025724Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0025724Cu) [[unlikely]] return; }
L_0025724C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00257280; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025725Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 209u, depth + 1u); else { c.pc = 0x00261BA0u; return; } if (c.pc != 0x0025725Cu) [[unlikely]] return; }
L_0025725C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 3760u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0] + 52u), 0u);
    st32((c.r[18].w[0] + 56u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257280u); st16((c.r[18].w[0] + 60u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_005A(c, 63u, depth + 1u); else { c.pc = 0x00268880u; return; } if (c.pc != 0x00257280u) [[unlikely]] return; }
L_00257280:
    set32(c.r[16], ld32((c.r[29].w[0] + 188u)));
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[18].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 188u)));  goto L_002572F0; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[29].w[0] + 188u), c.r[18].w[0]);  goto L_002572CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025729Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0025729Cu) [[unlikely]] return; }
L_0025729C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002572ACu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002572ACu) [[unlikely]] return; }
L_002572AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002572C8; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002572C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002572C8u) [[unlikely]] return; }
L_002572C8:
    st32((c.r[29].w[0] + 188u), c.r[18].w[0]);
    c.budget -= 1;
L_002572CC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002572EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002572DCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002572DCu) [[unlikely]] return; }
L_002572DC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002572ECu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002572ECu) [[unlikely]] return; }
L_002572EC:
    set32(c.r[4], ld32((c.r[29].w[0] + 188u)));
    c.budget -= 1;
L_002572F0:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00257300u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00257300u) [[unlikely]] return; }
L_00257300:
    set32(c.r[5], ld32((c.r[29].w[0] + 188u)));
    c.r[2].d[0] = ld16((c.r[5].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    st16((c.r[5].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[21].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 8;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[30].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00257414; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257328u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 57u, depth + 1u); else { c.pc = 0x002BC790u; return; } if (c.pc != 0x00257328u) [[unlikely]] return; }
L_00257328:
    set32(c.r[2], ld32((c.r[21].w[0] + 64u)));
    set32(c.r[16], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[18], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 6;
    if (c.r[18].d[0] == c.r[17].d[0]) { set32(c.r[16], ld32((c.r[21].w[0] + 64u)));  goto L_002573A4; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0] + 48u), c.r[17].w[0]);  goto L_00257380; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257350u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00257350u) [[unlikely]] return; }
L_00257350:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257360u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00257360u) [[unlikely]] return; }
L_00257360:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025737C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025737Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025737Cu) [[unlikely]] return; }
L_0025737C:
    st32((c.r[16].w[0] + 48u), c.r[17].w[0]);
    c.budget -= 1;
L_00257380:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002573A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257390u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00257390u) [[unlikely]] return; }
L_00257390:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002573A0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002573A0u) [[unlikely]] return; }
L_002573A0:
    set32(c.r[16], ld32((c.r[21].w[0] + 64u)));
    c.budget -= 1;
L_002573A4:
    set32(c.r[17], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[18], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[17].d[0];  if (t) { goto L_00257414; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0] + 48u), c.r[17].w[0]);  goto L_002573F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002573C4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002573C4u) [[unlikely]] return; }
L_002573C4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002573D4u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002573D4u) [[unlikely]] return; }
L_002573D4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002573F0; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002573F0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002573F0u) [[unlikely]] return; }
L_002573F0:
    st32((c.r[16].w[0] + 48u), c.r[17].w[0]);
    c.budget -= 1;
L_002573F4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00257414; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257404u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00257404u) [[unlikely]] return; }
L_00257404:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257414u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00257414u) [[unlikely]] return; }
L_00257414:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[17].d[0] = ld16((c.r[2].w[0] + 13520u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_00257638; } }
L_00257430:
    set32(c.r[4], ld32((c.r[21].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 24u)));
    set32(c.r[5], c.r[20].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[22], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 11;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_00257638; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257468u); set32(c.r[5], c.r[5].w[0] + 12236u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00257468u) [[unlikely]] return; }
L_00257468:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00257634; } }
    set32(c.r[25], ld32((c.r[23].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00257484u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00257484u) [[unlikely]] return; }
L_00257484:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00257634; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_002574AC; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 64u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 88u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00257634; } }
L_002574AC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002574BCu); set32(c.r[5], c.r[5].w[0] + 14864u);  if (depth < kMaxDepth) unit_006F(c, 53u, depth + 1u); else { c.pc = 0x002BC710u; return; } if (c.pc != 0x002574BCu) [[unlikely]] return; }
L_002574BC:
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    c.r[6].d[0] = ld16((c.r[3].w[0] + 60u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_002574F0; } }
L_002574CC:
    c.r[8].d[0] = c.r[7].d[0] & 65535ull;
    set32(c.r[5], c.r[8].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 6;
    if (c.r[4].d[0] != c.r[16].d[0]) { set32(c.r[4], c.r[7].w[0] + 1u);  goto L_002574EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = c.r[8].d[0] & 65535ull;  if (t) { goto L_00257508; } }
L_002574EC:
    c.r[7].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 1;
L_002574F0:
    c.r[4].d[0] = c.r[7].d[0] & 65535ull;
    c.r[4].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[4].d[0] != 0ull) { set32(c.r[4], ld32((c.r[3].w[0] + 56u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002574CCu | kUnwind; return; } goto L_002574CC; }
    c.r[8].d[0] = c.r[17].d[0] & 65535ull;
    c.r[19].d[0] = c.r[8].d[0] & 65535ull;
    c.budget -= 2;
L_00257508:
    c.budget -= 2;
    if (c.r[19].d[0] != c.r[17].d[0]) { set32(c.r[3], ld32((c.r[3].w[0] + 56u)));  goto L_00257574; }
    c.r[6].d[0] = ld16((c.r[3].w[0] + 60u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0025754C; } }
L_0025751C:
    c.r[8].d[0] = c.r[7].d[0] & 65535ull;
    set32(c.r[5], c.r[8].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.budget -= 6;
    if (c.r[4].d[0] != 0ull) { set32(c.r[4], c.r[7].w[0] + 1u);  goto L_00257548; }
    st32((c.r[5].w[0]), c.r[16].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00257560; } }
L_00257548:
    c.r[7].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 1;
L_0025754C:
    c.r[4].d[0] = c.r[7].d[0] & 65535ull;
    c.r[4].d[0] = c.r[4].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[4].d[0] != 0ull) { set32(c.r[4], ld32((c.r[3].w[0] + 56u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0025751Cu | kUnwind; return; } goto L_0025751C; }
    c.r[8].d[0] = c.r[17].d[0] & 65535ull;
    c.budget -= 1;
L_00257560:
    c.r[19].d[0] = c.r[8].d[0] & 65535ull;
    c.budget -= 3;
    if (c.r[19].d[0] != c.r[17].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00257590; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00257634; } }
L_00257574:
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[16].w[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    st16((c.r[16].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
L_00257590:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257598u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 57u, depth + 1u); else { c.pc = 0x002BC790u; return; } if (c.pc != 0x00257598u) [[unlikely]] return; }
L_00257598:
    set32(c.r[16], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[18], ld32((c.r[22].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[18].d[0] == c.r[16].d[0]) { c.r[3].d[0] = c.r[19].d[0] & 65535ull;  goto L_0025760C; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[22].w[0] + 4u), c.r[16].w[0]);  goto L_002575E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002575B8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002575B8u) [[unlikely]] return; }
L_002575B8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002575C8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002575C8u) [[unlikely]] return; }
L_002575C8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002575E4; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002575E4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002575E4u) [[unlikely]] return; }
L_002575E4:
    st32((c.r[22].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_002575E8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00257608; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002575F8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002575F8u) [[unlikely]] return; }
L_002575F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257608u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00257608u) [[unlikely]] return; }
L_00257608:
    c.r[3].d[0] = c.r[19].d[0] & 65535ull;
    c.budget -= 1;
L_0025760C:
    set32(c.r[4], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 4);
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[22].w[0] + 8u), c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st8((c.r[3].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
L_00257634:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_00257638:
    set32(c.r[2], ld32((c.r[21].w[0] + 12u)));
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[20].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00257430u | kUnwind; return; } goto L_00257430; }
    set32(c.r[16], ld32((c.r[29].w[0] + 188u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[30].d[0] + 0ull;  goto L_0025768C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025765Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0025765Cu) [[unlikely]] return; }
L_0025765C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025766Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0025766Cu) [[unlikely]] return; }
L_0025766C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00257688; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00257688u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00257688u) [[unlikely]] return; }
L_00257688:
    c.r[2].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 1;
L_0025768C:
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
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_002576C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0025770C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 2336u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002576F0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 245u, depth + 1u); else { c.pc = 0x0031E610u; return; } if (c.pc != 0x002576F0u) [[unlikely]] return; }
L_002576F0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00257710; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025770Cu); set32(c.r[5], 0u + 52u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0025770Cu) [[unlikely]] return; }
L_0025770C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00257710:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00257730:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    set32(c.r[22], ld32((c.r[3].w[0] + 104u)));
    c.budget -= 19;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00257790; } }
    set32(c.r[25], ld32((c.r[22].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025778Cu); c.r[4].d[0] = c.r[22].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025778Cu) [[unlikely]] return; }
L_0025778C:
    st32((c.r[19].w[0] + 116u), c.r[2].w[0]);
    c.budget -= 1;
L_00257790:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002577A0u); c.r[6].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 392u, depth + 1u); else { c.pc = 0x00257110u; return; } if (c.pc != 0x002577A0u) [[unlikely]] return; }
L_002577A0:
    st8((c.r[29].w[0] + 176u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[18].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 13520u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);  if (t) { goto L_00257C64; } }
L_002577B8:
    set32(c.r[30], c.r[18].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[30].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_00257C64; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002577F0u); set32(c.r[20], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002577F0u) [[unlikely]] return; }
L_002577F0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 20u)));  goto L_00257820; }
    set32(c.r[5], ld32((c.r[20].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[8], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[9], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257818u); set32(c.r[4], c.r[4].w[0] + 12258u);  if (depth < kMaxDepth) unit_0047(c, 142u, depth + 1u); else { c.pc = 0x0021D6A0u; return; } if (c.pc != 0x00257818u) [[unlikely]] return; }
L_00257818:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00257C60; } }
L_00257820:
    set32(c.r[2], c.r[2].w[0] + c.r[30].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00257C60; } }
    set32(c.r[25], ld32((c.r[22].w[0])));
    set32(c.r[5], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00257844u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00257844u) [[unlikely]] return; }
L_00257844:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002578A0; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002578A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 180u)));  if (t) { goto L_00257898; } }
L_00257864:
    set32(c.r[23], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[16], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025787Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025787Cu) [[unlikely]] return; }
L_0025787C:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257888u); c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00257888u) [[unlikely]] return; }
L_00257888:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00257898; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_002578A0; } }
L_00257898:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[21], ld32((c.r[16].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00257864u | kUnwind; return; } goto L_00257864; }
L_002578A0:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[21], ld32((c.r[17].w[0] + 12u)));  goto L_002578C4; }
    set32(c.r[5], ld32((c.r[20].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002578BCu); set32(c.r[4], c.r[4].w[0] + 12474u);  if (depth < kMaxDepth) unit_0047(c, 142u, depth + 1u); else { c.pc = 0x0021D6A0u; return; } if (c.pc != 0x002578BCu) [[unlikely]] return; }
L_002578BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00257C60; } }
L_002578C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00257948; } }
L_002578CC:
    set32(c.r[23], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002578DCu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002578DCu) [[unlikely]] return; }
L_002578DC:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002578E8u); c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x002578E8u) [[unlikely]] return; }
L_002578E8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[21], ld32((c.r[21].w[0] + 48u)));  goto L_00257948; }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00257900u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00257900u) [[unlikely]] return; }
L_00257900:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00257914; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = c.r[21].d[0] + 0ull;  goto L_00257950; }
L_00257914:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00257944; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00257944; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257930u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00257930u) [[unlikely]] return; }
L_00257930:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00257944; } }
    c.r[16].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00257950; } }
L_00257944:
    set32(c.r[21], ld32((c.r[21].w[0] + 48u)));
    c.budget -= 1;
L_00257948:
    c.budget -= 2;
    if (c.r[21].d[0] != 0ull) { set32(c.r[25], ld32((c.r[21].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002578CCu | kUnwind; return; } goto L_002578CC; }
L_00257950:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_00257AB4; }
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + c.r[30].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[16].d[0] == 0ull) { set32(c.r[5], ld32((c.r[20].w[0])));  goto L_00257A90; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00257980u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00257980u) [[unlikely]] return; }
L_00257980:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st8((c.r[29].w[0] + 176u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[19].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 6;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00257AB0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002579A4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 57u, depth + 1u); else { c.pc = 0x002BC790u; return; } if (c.pc != 0x002579A4u) [[unlikely]] return; }
L_002579A4:
    set32(c.r[2], ld32((c.r[19].w[0] + 64u)));
    set32(c.r[21], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[23], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 5;
    if (c.r[21].d[0] == c.r[23].d[0]) { set32(c.r[23], ld32((c.r[19].w[0] + 64u)));  goto L_00257A1C; }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { st32((c.r[16].w[0] + 48u), c.r[23].w[0]);  goto L_002579F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002579C8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002579C8u) [[unlikely]] return; }
L_002579C8:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002579D8u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002579D8u) [[unlikely]] return; }
L_002579D8:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002579F4; } }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002579F4u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002579F4u) [[unlikely]] return; }
L_002579F4:
    st32((c.r[16].w[0] + 48u), c.r[23].w[0]);
    c.budget -= 1;
L_002579F8:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_00257A18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257A08u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00257A08u) [[unlikely]] return; }
L_00257A08:
    set32(c.r[2], ld32((c.r[23].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257A18u); st32((c.r[23].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00257A18u) [[unlikely]] return; }
L_00257A18:
    set32(c.r[23], ld32((c.r[19].w[0] + 64u)));
    c.budget -= 1;
L_00257A1C:
    set32(c.r[21], ld32((c.r[23].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == c.r[16].d[0];  if (t) { goto L_00257AB0; } }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { st32((c.r[23].w[0] + 48u), c.r[16].w[0]);  goto L_00257A68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257A38u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00257A38u) [[unlikely]] return; }
L_00257A38:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257A48u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00257A48u) [[unlikely]] return; }
L_00257A48:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00257A64; } }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00257A64u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00257A64u) [[unlikely]] return; }
L_00257A64:
    st32((c.r[23].w[0] + 48u), c.r[16].w[0]);
    c.budget -= 1;
L_00257A68:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00257AB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257A78u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00257A78u) [[unlikely]] return; }
L_00257A78:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257A88u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00257A88u) [[unlikely]] return; }
L_00257A88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00257AB0; } }
L_00257A90:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[8], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257AA8u); set32(c.r[4], c.r[4].w[0] + 12606u);  if (depth < kMaxDepth) unit_0047(c, 142u, depth + 1u); else { c.pc = 0x0021D6A0u; return; } if (c.pc != 0x00257AA8u) [[unlikely]] return; }
L_00257AA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00257C60; } }
L_00257AB0:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_00257AB4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[20].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00257AC8u); c.r[21].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00257AC8u) [[unlikely]] return; }
L_00257AC8:
    c.r[23].d[0] = c.r[2].d[0] & 65535ull;
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 4;
    { const bool t = c.r[23].d[0] == c.r[2].d[0];  if (t) { goto L_00257BA8; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00257AECu); c.r[5].d[0] = c.r[23].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00257AECu) [[unlikely]] return; }
L_00257AEC:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[21].d[0] != 0ull) { set32(c.r[25], ld32((c.r[21].w[0])));  goto L_00257B00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_00257B44; } }
L_00257B00:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00257B0Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00257B0Cu) [[unlikely]] return; }
L_00257B0C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 10056u);  if (t) { goto L_00257B28; } }
L_00257B18:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_00257B28; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00257B34; } }
L_00257B28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00257B18u | kUnwind; return; } goto L_00257B18; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00257B34:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[21].d[0] = 0ull + 0ull;  goto L_00257B44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00257B44; } }
L_00257B44:
    set32(c.r[2], ld32((c.r[19].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00257B64; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 64u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 88u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00257B64; } }
    c.r[7].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00257B64:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_00257BA8; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[25], ld32((c.r[25].w[0] + 156u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00257B8Cu); set32(c.r[8], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00257B8Cu) [[unlikely]] return; }
L_00257B8C:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 136u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00257BA8u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00257BA8u) [[unlikely]] return; }
L_00257BA8:
    c.budget -= 2;
    if (c.r[21].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[16].w[0] + 8u));  goto L_00257BD8; }
    set32(c.r[5], ld32((c.r[20].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[8], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[9], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257BD0u); set32(c.r[4], c.r[4].w[0] + 12773u);  if (depth < kMaxDepth) unit_0047(c, 142u, depth + 1u); else { c.pc = 0x0021D6A0u; return; } if (c.pc != 0x00257BD0u) [[unlikely]] return; }
L_00257BD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00257C60; } }
L_00257BD8:
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    st16((c.r[16].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + c.r[30].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == c.r[16].d[0]; set32(c.r[20], c.r[2].w[0] + 4u);  if (t) { goto L_00257C54; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[20].w[0]), c.r[16].w[0]);  goto L_00257C34; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257C04u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00257C04u) [[unlikely]] return; }
L_00257C04:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257C14u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00257C14u) [[unlikely]] return; }
L_00257C14:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00257C30; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00257C30u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00257C30u) [[unlikely]] return; }
L_00257C30:
    st32((c.r[20].w[0]), c.r[16].w[0]);
    c.budget -= 1;
L_00257C34:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 20u)));  goto L_00257C58; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257C44u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00257C44u) [[unlikely]] return; }
L_00257C44:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257C54u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00257C54u) [[unlikely]] return; }
L_00257C54:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 1;
L_00257C58:
    set32(c.r[2], c.r[2].w[0] + c.r[30].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[21].w[0]);
    c.budget -= 2;
L_00257C60:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00257C64:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002577B8u | kUnwind; return; } goto L_002577B8; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 176u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00257CA4; }
    set32(c.r[2], ld32((c.r[19].w[0] + 64u)));
    set32(c.r[5], c.r[29].w[0] + 207u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00257CA0u); set32(c.r[7], c.r[29].w[0] + 206u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00257CA0u) [[unlikely]] return; }
L_00257CA0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00257CA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257CACu);  if (depth < kMaxDepth) unit_0055(c, 492u, depth + 1u); else { c.pc = 0x00257FD0u; return; } if (c.pc != 0x00257CACu) [[unlikely]] return; }
L_00257CAC:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_00257CE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 18368u);  c.pc = t; return; }
L_00257CF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 31184u);  c.pc = t; return; }
L_00257D00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; c.f[22] = c.f[12];  if (t) { goto L_00257FA4; } }
    c.f[1] = ld32((c.r[17].w[0] + 88u));
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[17].w[0] + 92u));  goto L_00257D50; }
    c.f[0] = c.f[22] ^ fp::kSign;
    st32((c.r[17].w[0] + 88u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 92u));
    c.budget -= 3;
L_00257D50:
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_00257D74; }
    st32((c.r[17].w[0] + 92u), c.f[22]);
    c.f[0] = ld32((c.r[17].w[0] + 96u));
    c.f[0] = fp::add(c.f[0], c.f[22]);
    st32((c.r[17].w[0] + 96u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 5;
L_00257D74:
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    c.f[21] = c.r[3].w[0];
    set32(c.r[3], 0u + 4u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.f[20] = c.f[21];  if (t) { goto L_00257EB8; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.f[0] = ld32((c.r[17].w[0] + 88u));  goto L_00257E8C; }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.f[2] = ld32((c.r[17].w[0] + 96u));  goto L_00257E4C; }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.f[0] = ld32((c.r[17].w[0] + 96u));  goto L_00257DF4; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.f[0] = ld32((c.r[17].w[0] + 96u));  goto L_00257DC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00257EFC; } }
L_00257DC0:
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], 0u + 1u);  goto L_00257DEC; }
    c.f[1] = ld32((c.r[17].w[0] + 92u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[1] = fp::sub(c.f[22], c.f[1]);
    fpu_div(c, 21u, c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00257EFC; } }
L_00257DEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 68u), c.r[3].w[0]);  if (t) { goto L_00257EFC; } }
L_00257DF4:
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.f[2] = ld32((c.r[17].w[0] + 100u));  goto L_00257E20; }
    c.f[1] = ld32((c.r[17].w[0] + 92u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[1] = fp::sub(c.f[22], c.f[1]);
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00257EFC; } }
L_00257E20:
    c.f[1] = ld32((c.r[28].w[0] - 32644u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[2]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], 0u + 1u);  goto L_00257E44; }
    c.f[0] = c.f[22] ^ fp::kSign;
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[17].w[0] + 88u), c.f[0]);
    st32((c.r[17].w[0] + 100u), c.f[1]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
L_00257E44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 68u), c.r[3].w[0]);  if (t) { goto L_00257EFC; } }
L_00257E4C:
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[2]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00257E78; }
    c.f[1] = ld32((c.r[17].w[0] + 92u));
    c.f[0] = fp::sub(c.f[2], c.f[22]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 21u, c.f[0], c.f[1]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00257EFC; } }
L_00257E78:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257E84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0055(c, 384u, depth + 1u); else { c.pc = 0x00256F90u; return; } if (c.pc != 0x00257E84u) [[unlikely]] return; }
L_00257E84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00257FA8; } }
L_00257E8C:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257E9Cu); c.f[12] = fp::add(c.f[0], c.f[22]);  if (depth < kMaxDepth) unit_0055(c, 377u, depth + 1u); else { c.pc = 0x00256C60u; return; } if (c.pc != 0x00257E9Cu) [[unlikely]] return; }
L_00257E9C:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[3], 0u + 4u);
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[22]);
    st32((c.r[4].w[0] + 88u), c.f[0]);
    st32((c.r[17].w[0] + 68u), c.r[3].w[0]);
    c.budget -= 7;
L_00257EB8:
    c.f[2] = ld32((c.r[17].w[0] + 96u));
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[2]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00257EE8; }
    c.f[1] = ld32((c.r[17].w[0] + 92u));
    c.f[0] = fp::sub(c.f[2], c.f[22]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 20u, c.f[0], c.f[1]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00257EFC; } }
L_00257EE8:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257EF4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0055(c, 384u, depth + 1u); else { c.pc = 0x00256F90u; return; } if (c.pc != 0x00257EF4u) [[unlikely]] return; }
L_00257EF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00257FA4; } }
L_00257EFC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00257FA4; } }
    c.f[12] = ld32((c.r[17].w[0] + 100u));
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[17].w[0] + 104u)));  goto L_00257F20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00257F84; } }
L_00257F20:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.f[0] = ld32((c.r[17].w[0] + 88u));  goto L_00257F7C; }
    c.f[1] = ld32((c.r[4].w[0] + 88u));
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    c.f[1] = fp::add(c.f[1], c.f[22]);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[5], ld32((c.r[17].w[0] + 104u)));  goto L_00257F50; }
    c.f[12] = c.f[22];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257F4Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0055(c, 484u, depth + 1u); else { c.pc = 0x00257D00u; return; } if (c.pc != 0x00257F4Cu) [[unlikely]] return; }
L_00257F4C:
    set32(c.r[5], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 1;
L_00257F50:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = ld32((c.r[5].w[0] + 88u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257F60u); c.f[12] = fp::add(c.f[0], c.f[22]);  if (depth < kMaxDepth) unit_0055(c, 377u, depth + 1u); else { c.pc = 0x00256C60u; return; } if (c.pc != 0x00257F60u) [[unlikely]] return; }
L_00257F60:
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00257F80; } }
L_00257F7C:
    c.f[12] = fp::add(c.f[0], c.f[22]);
    c.budget -= 1;
L_00257F80:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00257F84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257F8Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0055(c, 271u, depth + 1u); else { c.pc = 0x00256180u; return; } if (c.pc != 0x00257F8Cu) [[unlikely]] return; }
L_00257F8C:
    c.f[14] = c.f[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    c.f[13] = c.f[21];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00257FA4u); c.f[12] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0055(c, 269u, depth + 1u); else { c.pc = 0x00256030u; return; } if (c.pc != 0x00257FA4u) [[unlikely]] return; }
L_00257FA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00257FA8:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00257FD0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 12;
    [[clang::musttail]] return unit_0056(c, 1u, depth);
}

}
