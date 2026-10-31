#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0012[4096] = {
    1, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0,
    8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0,
    13, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0,
    0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0,
    0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0,
    0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0,
    0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49,
    0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 52, 53, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0,
    59, 0, 0, 60, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0,
    0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0,
    0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 74, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0,
    78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0,
    0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92,
    93, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0,
    100, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 115, 0, 0, 0, 0, 0, 116, 0, 117, 0, 118,
    0, 119, 0, 0, 0, 0, 0, 120, 0, 121, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0,
    0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0,
    0, 0, 139, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0,
    149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0,
    0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0,
    161, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0,
    0, 0, 0, 0, 173, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177,
    0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 182, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0,
    0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 189, 0, 0, 190, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0,
    193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0,
    0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0,
    0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0,
    0, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0,
    0, 0, 218, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 230, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0,
    0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0,
    0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0,
    0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0,
    260, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 263, 264, 0, 0, 265, 0, 0, 266, 0, 0, 267, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271,
    0, 0, 272, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 277,
    0, 0, 278, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 283, 0, 0, 284, 0, 0, 285, 0, 0, 286, 0,
    0, 287, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 291,
    0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0,
    0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0, 300, 0, 0, 301, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 304, 0, 0, 0, 0, 305, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0,
    308, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 311, 0, 0, 312, 0,
    0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 314, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0,
    319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 322, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0,
    0, 0, 0, 325, 0, 0, 326, 0, 0, 327, 0, 0, 0, 328, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0,
    0, 331, 0, 0, 332, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336,
    337, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 341,
    0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0,
    0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0,
    0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0,
    355, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0,
    0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0,
    0, 0, 368, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0,
    0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 377, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    380, 0, 0, 0, 381, 0, 382, 0, 0, 0, 0, 0, 383, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0,
    0, 0, 0, 0, 0, 392, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0,
    398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 401, 0, 0, 0, 0, 0, 402, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 405, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 410,
    0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 415, 0, 416, 0, 417, 0, 0, 0, 0, 0, 0, 418, 0, 419, 0, 0, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0,
    422, 0, 423, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 427, 0, 428, 0,
    0, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 434,
    0, 0, 435, 0, 0, 436, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 441, 0, 442, 0, 0, 0, 0, 443, 0, 444, 0, 0, 0, 0, 0, 0, 0, 445, 0, 446, 0, 447, 0, 448, 0,
    449, 0, 450, 0, 0, 0, 0, 451, 0, 0, 0, 452, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 460, 0, 0,
    0, 0, 461, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 465, 0, 0, 0,
    0, 0, 0, 0, 0, 466, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0,
    0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 473, 0, 0, 0,
    0, 0, 0, 0, 474, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0,
    0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0,
    480, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0,
    484, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 487, 0, 0, 0, 0, 488,
    0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 493,
    0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 496, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0,
    498, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0,
    0, 502, 0, 0, 0, 0, 503, 0, 0, 0, 504, 0, 0, 0, 505, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 510, 0, 0,
    0, 0, 0, 0, 0, 511, 0, 0, 512, 0, 0, 513, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0,
    521, 0, 0, 0, 522, 0, 0, 0, 523, 0, 0, 0, 524, 0, 0, 0, 525, 0, 0, 0, 526, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0,
};

void unit_0012(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00148000;
    case 2u: goto L_00148004;
    case 3u: goto L_0014801C;
    case 4u: goto L_0014803C;
    case 5u: goto L_00148040;
    case 6u: goto L_00148060;
    case 7u: goto L_00148070;
    case 8u: goto L_00148080;
    case 9u: goto L_00148098;
    case 10u: goto L_001480BC;
    case 11u: goto L_001480C0;
    case 12u: goto L_001480F0;
    case 13u: goto L_00148100;
    case 14u: goto L_00148110;
    case 15u: goto L_00148120;
    case 16u: goto L_00148130;
    case 17u: goto L_00148140;
    case 18u: goto L_00148150;
    case 19u: goto L_0014816C;
    case 20u: goto L_00148178;
    case 21u: goto L_00148184;
    case 22u: goto L_001481A4;
    case 23u: goto L_001481C0;
    case 24u: goto L_001481D0;
    case 25u: goto L_001481E0;
    case 26u: goto L_001481EC;
    case 27u: goto L_00148208;
    case 28u: goto L_00148220;
    case 29u: goto L_0014822C;
    case 30u: goto L_00148244;
    case 31u: goto L_0014825C;
    case 32u: goto L_00148270;
    case 33u: goto L_00148290;
    case 34u: goto L_0014829C;
    case 35u: goto L_001482A8;
    case 36u: goto L_001482D0;
    case 37u: goto L_001482F0;
    case 38u: goto L_0014831C;
    case 39u: goto L_00148338;
    case 40u: goto L_00148358;
    case 41u: goto L_00148378;
    case 42u: goto L_00148384;
    case 43u: goto L_001483C0;
    case 44u: goto L_001483D0;
    case 45u: goto L_001483DC;
    case 46u: goto L_00148410;
    case 47u: goto L_00148420;
    case 48u: goto L_0014845C;
    case 49u: goto L_0014847C;
    case 50u: goto L_00148488;
    case 51u: goto L_001484B8;
    case 52u: goto L_00148510;
    case 53u: goto L_00148514;
    case 54u: goto L_00148520;
    case 55u: goto L_0014852C;
    case 56u: goto L_00148544;
    case 57u: goto L_00148550;
    case 58u: goto L_00148564;
    case 59u: goto L_00148580;
    case 60u: goto L_0014858C;
    case 61u: goto L_00148598;
    case 62u: goto L_001485A8;
    case 63u: goto L_001485D0;
    case 64u: goto L_001485EC;
    case 65u: goto L_001485F8;
    case 66u: goto L_00148614;
    case 67u: goto L_00148620;
    case 68u: goto L_00148650;
    case 69u: goto L_00148674;
    case 70u: goto L_00148684;
    case 71u: goto L_00148694;
    case 72u: goto L_001486A8;
    case 73u: goto L_001486B4;
    case 74u: goto L_001486C0;
    case 75u: goto L_001486CC;
    case 76u: goto L_001486DC;
    case 77u: goto L_001486EC;
    case 78u: goto L_00148700;
    case 79u: goto L_0014871C;
    case 80u: goto L_00148728;
    case 81u: goto L_00148734;
    case 82u: goto L_00148740;
    case 83u: goto L_0014875C;
    case 84u: goto L_00148778;
    case 85u: goto L_00148784;
    case 86u: goto L_001487C8;
    case 87u: goto L_00148800;
    case 88u: goto L_0014881C;
    case 89u: goto L_00148828;
    case 90u: goto L_0014883C;
    case 91u: goto L_00148860;
    case 92u: goto L_0014887C;
    case 93u: goto L_00148880;
    case 94u: goto L_00148888;
    case 95u: goto L_0014889C;
    case 96u: goto L_001488AC;
    case 97u: goto L_001488BC;
    case 98u: goto L_001488D8;
    case 99u: goto L_001488F4;
    case 100u: goto L_00148900;
    case 101u: goto L_0014890C;
    case 102u: goto L_00148918;
    case 103u: goto L_00148930;
    case 104u: goto L_00148940;
    case 105u: goto L_00148954;
    case 106u: goto L_001489B0;
    case 107u: goto L_001489C0;
    case 108u: goto L_001489E0;
    case 109u: goto L_00148A54;
    case 110u: goto L_00148A90;
    case 111u: goto L_00148AA0;
    case 112u: goto L_00148AB0;
    case 113u: goto L_00148AC0;
    case 114u: goto L_00148B4C;
    case 115u: goto L_00148B54;
    case 116u: goto L_00148B6C;
    case 117u: goto L_00148B74;
    case 118u: goto L_00148B7C;
    case 119u: goto L_00148B84;
    case 120u: goto L_00148B9C;
    case 121u: goto L_00148BA4;
    case 122u: goto L_00148BAC;
    case 123u: goto L_00148BB8;
    case 124u: goto L_00148BE8;
    case 125u: goto L_00148C1C;
    case 126u: goto L_00148C24;
    case 127u: goto L_00148C2C;
    case 128u: goto L_00148C48;
    case 129u: goto L_00148C50;
    case 130u: goto L_00148C68;
    case 131u: goto L_00148C78;
    case 132u: goto L_00148C84;
    case 133u: goto L_00148C8C;
    case 134u: goto L_00148CAC;
    case 135u: goto L_00148CB8;
    case 136u: goto L_00148CD0;
    case 137u: goto L_00148CDC;
    case 138u: goto L_00148CF0;
    case 139u: goto L_00148D08;
    case 140u: goto L_00148D10;
    case 141u: goto L_00148D24;
    case 142u: goto L_00148D34;
    case 143u: goto L_00148D44;
    case 144u: goto L_00148D5C;
    case 145u: goto L_00148DA0;
    case 146u: goto L_00148E08;
    case 147u: goto L_00148E2C;
    case 148u: goto L_00148E60;
    case 149u: goto L_00148E80;
    case 150u: goto L_00148EAC;
    case 151u: goto L_00148EC8;
    case 152u: goto L_00148ED8;
    case 153u: goto L_00148F14;
    case 154u: goto L_00148F30;
    case 155u: goto L_00148F50;
    case 156u: goto L_00148F68;
    case 157u: goto L_00148F84;
    case 158u: goto L_0014903C;
    case 159u: goto L_00149040;
    case 160u: goto L_00149074;
    case 161u: goto L_00149080;
    case 162u: goto L_00149098;
    case 163u: goto L_001490A0;
    case 164u: goto L_001490C0;
    case 165u: goto L_001490C8;
    case 166u: goto L_00149100;
    case 167u: goto L_00149120;
    case 168u: goto L_00149140;
    case 169u: goto L_00149168;
    case 170u: goto L_001491B4;
    case 171u: goto L_001491D4;
    case 172u: goto L_001491F4;
    case 173u: goto L_00149210;
    case 174u: goto L_00149218;
    case 175u: goto L_00149254;
    case 176u: goto L_00149270;
    case 177u: goto L_0014927C;
    case 178u: goto L_001492A0;
    case 179u: goto L_001492C0;
    case 180u: goto L_00149328;
    case 181u: goto L_00149348;
    case 182u: goto L_00149384;
    case 183u: goto L_00149390;
    case 184u: goto L_001493A8;
    case 185u: goto L_001493E0;
    case 186u: goto L_001493F8;
    case 187u: goto L_00149410;
    case 188u: goto L_0014943C;
    case 189u: goto L_00149444;
    case 190u: goto L_00149450;
    case 191u: goto L_0014945C;
    case 192u: goto L_0014946C;
    case 193u: goto L_00149480;
    case 194u: goto L_00149490;
    case 195u: goto L_001494A8;
    case 196u: goto L_001494D4;
    case 197u: goto L_00149500;
    case 198u: goto L_00149534;
    case 199u: goto L_00149550;
    case 200u: goto L_00149570;
    case 201u: goto L_00149590;
    case 202u: goto L_0014959C;
    case 203u: goto L_001495CC;
    case 204u: goto L_00149614;
    case 205u: goto L_00149670;
    case 206u: goto L_00149690;
    case 207u: goto L_001496A0;
    case 208u: goto L_001496B0;
    case 209u: goto L_001496D4;
    case 210u: goto L_001496EC;
    case 211u: goto L_00149710;
    case 212u: goto L_00149724;
    case 213u: goto L_00149740;
    case 214u: goto L_00149778;
    case 215u: goto L_001497A4;
    case 216u: goto L_001497C0;
    case 217u: goto L_001497F0;
    case 218u: goto L_00149808;
    case 219u: goto L_00149810;
    case 220u: goto L_00149824;
    case 221u: goto L_0014983C;
    case 222u: goto L_00149850;
    case 223u: goto L_00149880;
    case 224u: goto L_001498B0;
    case 225u: goto L_001498E0;
    case 226u: goto L_001498F0;
    case 227u: goto L_00149934;
    case 228u: goto L_00149990;
    case 229u: goto L_001499F0;
    case 230u: goto L_001499F8;
    case 231u: goto L_00149A44;
    case 232u: goto L_00149A84;
    case 233u: goto L_00149AD0;
    case 234u: goto L_00149B3C;
    case 235u: goto L_00149B6C;
    case 236u: goto L_00149BBC;
    case 237u: goto L_00149BE8;
    case 238u: goto L_00149C04;
    case 239u: goto L_00149C44;
    case 240u: goto L_00149C80;
    case 241u: goto L_00149D10;
    case 242u: goto L_00149D30;
    case 243u: goto L_00149D54;
    case 244u: goto L_00149D70;
    case 245u: goto L_00149D88;
    case 246u: goto L_00149DA0;
    case 247u: goto L_00149DB0;
    case 248u: goto L_00149DF0;
    case 249u: goto L_00149E10;
    case 250u: goto L_00149EB0;
    case 251u: goto L_00149ED0;
    case 252u: goto L_00149F30;
    case 253u: goto L_00149F48;
    case 254u: goto L_00149F60;
    case 255u: goto L_00149F70;
    case 256u: goto L_00149F98;
    case 257u: goto L_00149FB4;
    case 258u: goto L_00149FC8;
    case 259u: goto L_00149FE0;
    case 260u: goto L_0014A000;
    case 261u: goto L_0014A00C;
    case 262u: goto L_0014A038;
    case 263u: goto L_0014A03C;
    case 264u: goto L_0014A040;
    case 265u: goto L_0014A04C;
    case 266u: goto L_0014A058;
    case 267u: goto L_0014A064;
    case 268u: goto L_0014A0BC;
    case 269u: goto L_0014A0D0;
    case 270u: goto L_0014A0E0;
    case 271u: goto L_0014A0FC;
    case 272u: goto L_0014A108;
    case 273u: goto L_0014A114;
    case 274u: goto L_0014A120;
    case 275u: goto L_0014A150;
    case 276u: goto L_0014A160;
    case 277u: goto L_0014A17C;
    case 278u: goto L_0014A188;
    case 279u: goto L_0014A194;
    case 280u: goto L_0014A1A4;
    case 281u: goto L_0014A1B4;
    case 282u: goto L_0014A1C8;
    case 283u: goto L_0014A1D4;
    case 284u: goto L_0014A1E0;
    case 285u: goto L_0014A1EC;
    case 286u: goto L_0014A1F8;
    case 287u: goto L_0014A204;
    case 288u: goto L_0014A210;
    case 289u: goto L_0014A230;
    case 290u: goto L_0014A260;
    case 291u: goto L_0014A27C;
    case 292u: goto L_0014A28C;
    case 293u: goto L_0014A430;
    case 294u: goto L_0014A440;
    case 295u: goto L_0014A468;
    case 296u: goto L_0014A478;
    case 297u: goto L_0014A488;
    case 298u: goto L_0014A49C;
    case 299u: goto L_0014A4B8;
    case 300u: goto L_0014A4C4;
    case 301u: goto L_0014A4D0;
    case 302u: goto L_0014A4DC;
    case 303u: goto L_0014A534;
    case 304u: goto L_0014A53C;
    case 305u: goto L_0014A550;
    case 306u: goto L_0014A55C;
    case 307u: goto L_0014A570;
    case 308u: goto L_0014A580;
    case 309u: goto L_0014A594;
    case 310u: goto L_0014A5D0;
    case 311u: goto L_0014A5EC;
    case 312u: goto L_0014A5F8;
    case 313u: goto L_0014A60C;
    case 314u: goto L_0014A628;
    case 315u: goto L_0014A634;
    case 316u: goto L_0014A6A8;
    case 317u: goto L_0014A6D0;
    case 318u: goto L_0014A6E4;
    case 319u: goto L_0014A700;
    case 320u: goto L_0014A73C;
    case 321u: goto L_0014A74C;
    case 322u: goto L_0014A754;
    case 323u: goto L_0014A760;
    case 324u: goto L_0014A778;
    case 325u: goto L_0014A78C;
    case 326u: goto L_0014A798;
    case 327u: goto L_0014A7A4;
    case 328u: goto L_0014A7B4;
    case 329u: goto L_0014A7C0;
    case 330u: goto L_0014A7E8;
    case 331u: goto L_0014A804;
    case 332u: goto L_0014A810;
    case 333u: goto L_0014A81C;
    case 334u: goto L_0014A830;
    case 335u: goto L_0014A850;
    case 336u: goto L_0014A87C;
    case 337u: goto L_0014A880;
    case 338u: goto L_0014A890;
    case 339u: goto L_0014A8A4;
    case 340u: goto L_0014A8DC;
    case 341u: goto L_0014A8FC;
    case 342u: goto L_0014A920;
    case 343u: goto L_0014A974;
    case 344u: goto L_0014A990;
    case 345u: goto L_0014A9A8;
    case 346u: goto L_0014A9D0;
    case 347u: goto L_0014A9EC;
    case 348u: goto L_0014AA10;
    case 349u: goto L_0014AA30;
    case 350u: goto L_0014AA50;
    case 351u: goto L_0014AA74;
    case 352u: goto L_0014AAA0;
    case 353u: goto L_0014AAB8;
    case 354u: goto L_0014AADC;
    case 355u: goto L_0014AB00;
    case 356u: goto L_0014AB10;
    case 357u: goto L_0014AB20;
    case 358u: goto L_0014AB3C;
    case 359u: goto L_0014AB70;
    case 360u: goto L_0014AB90;
    case 361u: goto L_0014ABB0;
    case 362u: goto L_0014ABC8;
    case 363u: goto L_0014ABE0;
    case 364u: goto L_0014AC28;
    case 365u: goto L_0014AC3C;
    case 366u: goto L_0014ACC4;
    case 367u: goto L_0014ACE8;
    case 368u: goto L_0014AD08;
    case 369u: goto L_0014AD18;
    case 370u: goto L_0014AD40;
    case 371u: goto L_0014AD64;
    case 372u: goto L_0014AD88;
    case 373u: goto L_0014ADAC;
    case 374u: goto L_0014ADCC;
    case 375u: goto L_0014AE10;
    case 376u: goto L_0014AE40;
    case 377u: goto L_0014AE8C;
    case 378u: goto L_0014AEA0;
    case 379u: goto L_0014AEC8;
    case 380u: goto L_0014AF00;
    case 381u: goto L_0014AF10;
    case 382u: goto L_0014AF18;
    case 383u: goto L_0014AF30;
    case 384u: goto L_0014AF38;
    case 385u: goto L_0014AFA4;
    case 386u: goto L_0014B000;
    case 387u: goto L_0014B040;
    case 388u: goto L_0014B088;
    case 389u: goto L_0014B0D0;
    case 390u: goto L_0014B160;
    case 391u: goto L_0014B170;
    case 392u: goto L_0014B194;
    case 393u: goto L_0014B1A0;
    case 394u: goto L_0014B1B0;
    case 395u: goto L_0014B1C0;
    case 396u: goto L_0014B1D4;
    case 397u: goto L_0014B1DC;
    case 398u: goto L_0014B200;
    case 399u: goto L_0014B26C;
    case 400u: goto L_0014B2A0;
    case 401u: goto L_0014B2AC;
    case 402u: goto L_0014B2C4;
    case 403u: goto L_0014B2D0;
    case 404u: goto L_0014B2F0;
    case 405u: goto L_0014B318;
    case 406u: goto L_0014B320;
    case 407u: goto L_0014B338;
    case 408u: goto L_0014B350;
    case 409u: goto L_0014B368;
    case 410u: goto L_0014B37C;
    case 411u: goto L_0014B398;
    case 412u: goto L_0014B3C0;
    case 413u: goto L_0014B3D0;
    case 414u: goto L_0014B3E0;
    case 415u: goto L_0014B418;
    case 416u: goto L_0014B420;
    case 417u: goto L_0014B428;
    case 418u: goto L_0014B444;
    case 419u: goto L_0014B44C;
    case 420u: goto L_0014B464;
    case 421u: goto L_0014B474;
    case 422u: goto L_0014B480;
    case 423u: goto L_0014B488;
    case 424u: goto L_0014B4A8;
    case 425u: goto L_0014B4B4;
    case 426u: goto L_0014B4E0;
    case 427u: goto L_0014B4F0;
    case 428u: goto L_0014B4F8;
    case 429u: goto L_0014B510;
    case 430u: goto L_0014B520;
    case 431u: goto L_0014B530;
    case 432u: goto L_0014B54C;
    case 433u: goto L_0014B564;
    case 434u: goto L_0014B57C;
    case 435u: goto L_0014B588;
    case 436u: goto L_0014B594;
    case 437u: goto L_0014B5B0;
    case 438u: goto L_0014B5C0;
    case 439u: goto L_0014B5DC;
    case 440u: goto L_0014B5EC;
    case 441u: goto L_0014B61C;
    case 442u: goto L_0014B624;
    case 443u: goto L_0014B638;
    case 444u: goto L_0014B640;
    case 445u: goto L_0014B660;
    case 446u: goto L_0014B668;
    case 447u: goto L_0014B670;
    case 448u: goto L_0014B678;
    case 449u: goto L_0014B680;
    case 450u: goto L_0014B688;
    case 451u: goto L_0014B69C;
    case 452u: goto L_0014B6AC;
    case 453u: goto L_0014B6B8;
    case 454u: goto L_0014B71C;
    case 455u: goto L_0014B730;
    case 456u: goto L_0014B740;
    case 457u: goto L_0014B7AC;
    case 458u: goto L_0014B7C4;
    case 459u: goto L_0014B7E0;
    case 460u: goto L_0014B7F4;
    case 461u: goto L_0014B808;
    case 462u: goto L_0014B81C;
    case 463u: goto L_0014B838;
    case 464u: goto L_0014B860;
    case 465u: goto L_0014B870;
    case 466u: goto L_0014B894;
    case 467u: goto L_0014B89C;
    case 468u: goto L_0014B8D0;
    case 469u: goto L_0014B8F4;
    case 470u: goto L_0014B90C;
    case 471u: goto L_0014B930;
    case 472u: goto L_0014B960;
    case 473u: goto L_0014B970;
    case 474u: goto L_0014B990;
    case 475u: goto L_0014B9A0;
    case 476u: goto L_0014B9F8;
    case 477u: goto L_0014BA10;
    case 478u: goto L_0014BA30;
    case 479u: goto L_0014BA70;
    case 480u: goto L_0014BA80;
    case 481u: goto L_0014BA9C;
    case 482u: goto L_0014BAB4;
    case 483u: goto L_0014BAF0;
    case 484u: goto L_0014BB00;
    case 485u: goto L_0014BB20;
    case 486u: goto L_0014BB58;
    case 487u: goto L_0014BB68;
    case 488u: goto L_0014BB7C;
    case 489u: goto L_0014BB90;
    case 490u: goto L_0014BBA8;
    case 491u: goto L_0014BBCC;
    case 492u: goto L_0014BBE0;
    case 493u: goto L_0014BBFC;
    case 494u: goto L_0014BC08;
    case 495u: goto L_0014BC38;
    case 496u: goto L_0014BC50;
    case 497u: goto L_0014BC5C;
    case 498u: goto L_0014BC80;
    case 499u: goto L_0014BCA4;
    case 500u: goto L_0014BCBC;
    case 501u: goto L_0014BCF8;
    case 502u: goto L_0014BD04;
    case 503u: goto L_0014BD18;
    case 504u: goto L_0014BD28;
    case 505u: goto L_0014BD38;
    case 506u: goto L_0014BD50;
    case 507u: goto L_0014BD8C;
    case 508u: goto L_0014BDC0;
    case 509u: goto L_0014BDDC;
    case 510u: goto L_0014BDF4;
    case 511u: goto L_0014BE14;
    case 512u: goto L_0014BE20;
    case 513u: goto L_0014BE2C;
    case 514u: goto L_0014BE40;
    case 515u: goto L_0014BE60;
    case 516u: goto L_0014BEA0;
    case 517u: goto L_0014BED0;
    case 518u: goto L_0014BEF8;
    case 519u: goto L_0014BF30;
    case 520u: goto L_0014BF64;
    case 521u: goto L_0014BF80;
    case 522u: goto L_0014BF90;
    case 523u: goto L_0014BFA0;
    case 524u: goto L_0014BFB0;
    case 525u: goto L_0014BFC0;
    case 526u: goto L_0014BFD0;
    case 527u: goto L_0014BFE8;
    default: bad_entry(c, 0x00148000u); return;
    }
L_00148000:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00148004:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00148020; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014801Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0014801Cu) [[unlikely]] return; }
L_0014801C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00148020:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0014803C:
    c.budget -= 1;
L_00148040:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148060u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000A(c, 21u, depth + 1u); else { c.pc = 0x001282F0u; return; } if (c.pc != 0x00148060u) [[unlikely]] return; }
L_00148060:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 24512u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_00148070:
    set32(c.r[2], c.r[16].w[0] << 3);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[4], 0u + 64u);
    c.budget -= 4;
L_00148080:
    set32(c.r[2], c.r[2].w[0] << 3);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[19].w[0] + 20u), c.r[5].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148098u); set32(c.r[18], c.r[19].w[0] + 24u);  if (depth < kMaxDepth) unit_0000(c, 136u, depth + 1u); else { c.pc = 0x00102150u; return; } if (c.pc != 0x00148098u) [[unlikely]] return; }
L_00148098:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[5], 0u + 204u);
    set32(c.r[2], 0u - 1u);
    mmi::pcpyld(c.r[2], c.r[0], c.r[2]);
    st64((c.r[19].w[0] + 40u), c.r[2].d[0]);
    st8((c.r[19].w[0] + 56u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001480BCu); c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x001480BCu) [[unlikely]] return; }
L_001480BC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001480C0:
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 120u), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00148070u | kUnwind; return; } goto L_00148070; } }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001480F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148100u); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_0000(c, 20u, depth + 1u); else { c.pc = 0x00100280u; return; } if (c.pc != 0x00148100u) [[unlikely]] return; }
L_00148100:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00148114; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148110u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 5u, depth + 1u); else { c.pc = 0x00148040u; return; } if (c.pc != 0x00148110u) [[unlikely]] return; }
L_00148110:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00148114:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00148120:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00148130:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00148140:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00148150:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014816Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0014816Cu) [[unlikely]] return; }
L_0014816C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148178u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000A(c, 393u, depth + 1u); else { c.pc = 0x0012B280u; return; } if (c.pc != 0x00148178u) [[unlikely]] return; }
L_00148178:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148184u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000A(c, 378u, depth + 1u); else { c.pc = 0x0012B100u; return; } if (c.pc != 0x00148184u) [[unlikely]] return; }
L_00148184:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[29].w[0] + 65u);  goto L_00148198; }
    set32(c.r[18], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_00148198:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001481A4u); set32(c.r[4], c.r[4].w[0] + 5956u);  if (depth < kMaxDepth) unit_0012(c, 46u, depth + 1u); else { c.pc = 0x00148410u; return; } if (c.pc != 0x001481A4u) [[unlikely]] return; }
L_001481A4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);  goto L_001481B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_00148284; } }
L_001481B4:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001481C0u); set32(c.r[4], c.r[4].w[0] + 5952u);  if (depth < kMaxDepth) unit_0012(c, 44u, depth + 1u); else { c.pc = 0x001483D0u; return; } if (c.pc != 0x001481C0u) [[unlikely]] return; }
L_001481C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001481D0u); set32(c.r[4], c.r[4].w[0] + 5956u);  if (depth < kMaxDepth) unit_0012(c, 46u, depth + 1u); else { c.pc = 0x00148410u; return; } if (c.pc != 0x001481D0u) [[unlikely]] return; }
L_001481D0:
    mmi::divu(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[17].d[0] = c.hi.d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00148260; } }
L_001481E0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001481ECu); set32(c.r[4], c.r[4].w[0] + 5956u);  if (depth < kMaxDepth) unit_0012(c, 43u, depth + 1u); else { c.pc = 0x001483C0u; return; } if (c.pc != 0x001481ECu) [[unlikely]] return; }
L_001481EC:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0014824C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148208u); set32(c.r[4], c.r[4].w[0] + 5956u);  if (depth < kMaxDepth) unit_0012(c, 43u, depth + 1u); else { c.pc = 0x001483C0u; return; } if (c.pc != 0x00148208u) [[unlikely]] return; }
L_00148208:
    c.r[6].d[0] = ld16((c.r[2].w[0] + 4u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 5952u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148220u); set32(c.r[4], c.r[4].w[0] + 5972u);  if (depth < kMaxDepth) unit_0012(c, 37u, depth + 1u); else { c.pc = 0x001482F0u; return; } if (c.pc != 0x00148220u) [[unlikely]] return; }
L_00148220:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014822Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0014822Cu) [[unlikely]] return; }
L_0014822C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014824C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148244u); set32(c.r[4], c.r[4].w[0] + 5956u);  if (depth < kMaxDepth) unit_0012(c, 43u, depth + 1u); else { c.pc = 0x001483C0u; return; } if (c.pc != 0x00148244u) [[unlikely]] return; }
L_00148244:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld16((c.r[2].w[0] + 4u));  if (t) { goto L_00148284; } }
L_0014824C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014825Cu); set32(c.r[4], c.r[4].w[0] + 5952u);  if (depth < kMaxDepth) unit_0012(c, 36u, depth + 1u); else { c.pc = 0x001482D0u; return; } if (c.pc != 0x0014825Cu) [[unlikely]] return; }
L_0014825C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00148260:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148270u); set32(c.r[4], c.r[4].w[0] + 5956u);  if (depth < kMaxDepth) unit_0012(c, 43u, depth + 1u); else { c.pc = 0x001483C0u; return; } if (c.pc != 0x00148270u) [[unlikely]] return; }
L_00148270:
    c.r[3].d[0] = ld16((c.r[2].w[0] + 6u));
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001481E0u | kUnwind; return; } goto L_001481E0; }
    set32(c.r[16], 0u - 1u);
    c.budget -= 1;
L_00148284:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148290u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00148290u) [[unlikely]] return; }
L_00148290:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014829Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x0014829Cu) [[unlikely]] return; }
L_0014829C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001482A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001482A8u) [[unlikely]] return; }
L_001482A8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001482D0:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001482E4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001482E4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001482F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 29000u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00148340; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014831Cu); set32(c.r[4], c.r[4].w[0] + 5920u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0014831Cu) [[unlikely]] return; }
L_0014831C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 5920u);
    set32(c.r[5], c.r[5].w[0] + 11712u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148338u); set32(c.r[6], c.r[6].w[0] + 5904u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x00148338u) [[unlikely]] return; }
L_00148338:
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 29000u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00148340:
    set32(c.r[2], c.r[17].w[0] << 3);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148358u); set32(c.r[5], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000A(c, 378u, depth + 1u); else { c.pc = 0x0012B100u; return; } if (c.pc != 0x00148358u) [[unlikely]] return; }
L_00148358:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 49u);  goto L_0014836C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_0014836C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148378u); set32(c.r[4], c.r[4].w[0] + 5920u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00148378u) [[unlikely]] return; }
L_00148378:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148384u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00148384u) [[unlikely]] return; }
L_00148384:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 5920u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);  goto L_001483A4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 5928u)));  if (t) { goto L_001483A8; } }
L_001483A4:
    set32(c.r[2], c.r[2].w[0] + 5921u);
    c.budget -= 1;
L_001483A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001483C0:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_001483D0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0xF0000000u);  if (t) { goto L_001483FC; } }
L_001483DC:
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_001483FC; } }
    set32(c.r[3], c.r[3].w[0] >> 24);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.budget -= 2;
L_001483FC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[3].d[0] << 56;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001483DCu | kUnwind; return; } goto L_001483DC; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00148410:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  c.pc = t; return; }
L_00148420:
    set32(c.r[29], c.r[29].w[0] - 224u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[4], c.r[29].w[0] + 144u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014845Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0012(c, 68u, depth + 1u); else { c.pc = 0x00148650u; return; } if (c.pc != 0x0014845Cu) [[unlikely]] return; }
L_0014845C:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[29].w[0] + 145u);  goto L_00148470; }
    set32(c.r[2], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 1;
L_00148470:
    set32(c.r[5], c.r[2].w[0] + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014847Cu); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0014847Cu) [[unlikely]] return; }
L_0014847C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148488u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00148488u) [[unlikely]] return; }
L_00148488:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 192u));  goto L_001484A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 196u)));  if (t) { goto L_001484A8; } }
L_001484A0:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_001484A8:
    set32(c.r[5], c.r[2].w[0] - 2u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001484B8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0008(c, 198u, depth + 1u); else { c.pc = 0x00121790u; return; } if (c.pc != 0x001484B8u) [[unlikely]] return; }
L_001484B8:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 196u)));  goto L_001484E0; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 192u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_001484E0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] - 1u);  if (t) { goto L_001484F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[29].w[0] + 193u);  if (t) { goto L_001484F4; } }
L_001484F0:
    set32(c.r[2], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 1;
L_001484F4:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], 0u + 92u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[6].d[0]) { set32(c.r[4], c.r[29].w[0] + 176u);  goto L_00148518; }
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148514u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0012(c, 222u, depth + 1u); else { c.pc = 0x00149850u; return; } if (c.pc != 0x00148514u) [[unlikely]] return; }
    goto L_00148514;
L_00148510:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_00148514:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 1;
L_00148518:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148520u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x00148520u) [[unlikely]] return; }
L_00148520:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001485FC; } }
L_0014852C:
    set32(c.r[2], ld32((c.r[28].w[0] - 28996u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[16], c.r[3].w[0] << 2);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148544u); set32(c.r[5], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_000A(c, 378u, depth + 1u); else { c.pc = 0x0012B100u; return; } if (c.pc != 0x00148544u) [[unlikely]] return; }
L_00148544:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148550u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x00148550u) [[unlikely]] return; }
L_00148550:
    c.r[21].d[0] = c.r[2].d[0] ^ 0ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148564u); c.r[21].d[0] = c.r[21].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00148564u) [[unlikely]] return; }
L_00148564:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_001485FC; }
    set32(c.r[2], ld32((c.r[28].w[0] - 28996u)));
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148580u); set32(c.r[5], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0004(c, 343u, depth + 1u); else { c.pc = 0x00113B00u; return; } if (c.pc != 0x00148580u) [[unlikely]] return; }
L_00148580:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014858Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 331u, depth + 1u); else { c.pc = 0x0013F2A0u; return; } if (c.pc != 0x0014858Cu) [[unlikely]] return; }
L_0014858C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148598u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0011(c, 235u, depth + 1u); else { c.pc = 0x00146240u; return; } if (c.pc != 0x00148598u) [[unlikely]] return; }
L_00148598:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001485A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001485A8u) [[unlikely]] return; }
L_001485A8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_001485F0; }
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 161u);  goto L_001485C4; }
    set32(c.r[5], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_001485C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001485D0u); set32(c.r[4], c.r[4].w[0] + 15568u);  if (depth < kMaxDepth) unit_000B(c, 413u, depth + 1u); else { c.pc = 0x0012FF20u; return; } if (c.pc != 0x001485D0u) [[unlikely]] return; }
L_001485D0:
    set32(c.r[2], c.r[20].w[0] + 12u);
    set32(c.r[4], c.r[29].w[0] + 220u);
    st32((c.r[29].w[0] + 216u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 216u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001485ECu); set32(c.r[7], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000B(c, 53u, depth + 1u); else { c.pc = 0x0012C6B0u; return; } if (c.pc != 0x001485ECu) [[unlikely]] return; }
L_001485EC:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_001485F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001485F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001485F8u) [[unlikely]] return; }
L_001485F8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001485FC:
    set32(c.r[2], ld32((c.r[28].w[0] - 28992u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 3);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0014852Cu | kUnwind; return; } goto L_0014852C; }
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148614u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00148614u) [[unlikely]] return; }
L_00148614:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148620u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00148620u) [[unlikely]] return; }
L_00148620:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_00148650:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148674u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00148674u) [[unlikely]] return; }
L_00148674:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148684u); set32(c.r[5], c.r[5].w[0] + 15577u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00148684u) [[unlikely]] return; }
L_00148684:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148694u); set32(c.r[5], c.r[5].w[0] + 15579u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00148694u) [[unlikely]] return; }
L_00148694:
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[29].w[0] + 208u);
    set32(c.r[6], c.r[29].w[0] + 192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001486A8u); set32(c.r[7], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 353u, depth + 1u); else { c.pc = 0x0013F620u; return; } if (c.pc != 0x001486A8u) [[unlikely]] return; }
L_001486A8:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001486B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001486B4u) [[unlikely]] return; }
L_001486B4:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001486C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001486C0u) [[unlikely]] return; }
L_001486C0:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001486CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001486CCu) [[unlikely]] return; }
L_001486CC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001486DCu); set32(c.r[5], c.r[5].w[0] + 15581u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x001486DCu) [[unlikely]] return; }
L_001486DC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001486ECu); set32(c.r[5], c.r[5].w[0] + 15579u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x001486ECu) [[unlikely]] return; }
L_001486EC:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    set32(c.r[6], c.r[29].w[0] + 160u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148700u); set32(c.r[7], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 353u, depth + 1u); else { c.pc = 0x0013F620u; return; } if (c.pc != 0x00148700u) [[unlikely]] return; }
L_00148700:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 129u);  goto L_00148714; }
    set32(c.r[5], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_00148714:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014871Cu); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0014871Cu) [[unlikely]] return; }
L_0014871C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148728u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00148728u) [[unlikely]] return; }
L_00148728:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148734u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00148734u) [[unlikely]] return; }
L_00148734:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148740u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00148740u) [[unlikely]] return; }
L_00148740:
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 225u);  goto L_00148754; }
    set32(c.r[5], ld32((c.r[29].w[0] + 232u)));
    c.budget -= 1;
L_00148754:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014875Cu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 331u, depth + 1u); else { c.pc = 0x0013F2A0u; return; } if (c.pc != 0x0014875Cu) [[unlikely]] return; }
L_0014875C:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 113u);  goto L_00148770; }
    set32(c.r[5], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 1;
L_00148770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148778u); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00148778u) [[unlikely]] return; }
L_00148778:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148784u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00148784u) [[unlikely]] return; }
L_00148784:
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 224u));  goto L_0014879C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 228u)));  if (t) { goto L_001487A4; } }
L_0014879C:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_001487A4:
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] - 2u)));
    set32(c.r[2], 0u + 59u);
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 224u)));  goto L_001487CC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001487C8u); set32(c.r[5], c.r[5].w[0] + 15584u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x001487C8u) [[unlikely]] return; }
L_001487C8:
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.budget -= 1;
L_001487CC:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[29].w[0] + 225u);  goto L_001487DC; }
    set32(c.r[2], ld32((c.r[29].w[0] + 232u)));
    c.budget -= 1;
L_001487DC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], 0u + 46u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 224u)));  goto L_0014882C; }
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148800u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 295u, depth + 1u); else { c.pc = 0x0012A6E0u; return; } if (c.pc != 0x00148800u) [[unlikely]] return; }
L_00148800:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 97u);  goto L_00148814; }
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_00148814:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014881Cu); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0014881Cu) [[unlikely]] return; }
L_0014881C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148828u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00148828u) [[unlikely]] return; }
L_00148828:
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.budget -= 1;
L_0014882C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[29].w[0] + 225u);  goto L_0014883C; }
    set32(c.r[2], ld32((c.r[29].w[0] + 232u)));
    c.budget -= 1;
L_0014883C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], 0u + 92u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 64u);  goto L_0014888C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[5].w[0] + 15579u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148860u); set32(c.r[6], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0010(c, 434u, depth + 1u); else { c.pc = 0x001433D0u; return; } if (c.pc != 0x00148860u) [[unlikely]] return; }
L_00148860:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 81u);  goto L_00148874; }
    set32(c.r[5], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_00148874:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014887Cu); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0014887Cu) [[unlikely]] return; }
L_0014887C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_00148880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148888u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00148888u) [[unlikely]] return; }
L_00148888:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 1;
L_0014888C:
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014889Cu); set32(c.r[7], 0u + 7u);  if (depth < kMaxDepth) unit_000A(c, 295u, depth + 1u); else { c.pc = 0x0012A6E0u; return; } if (c.pc != 0x0014889Cu) [[unlikely]] return; }
L_0014889C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001488ACu); set32(c.r[5], c.r[5].w[0] + 15587u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x001488ACu) [[unlikely]] return; }
L_001488AC:
    c.r[16].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001488BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x001488BCu) [[unlikely]] return; }
L_001488BC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00148904; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] + 15587u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001488D8u); set32(c.r[6], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0010(c, 434u, depth + 1u); else { c.pc = 0x001433D0u; return; } if (c.pc != 0x001488D8u) [[unlikely]] return; }
L_001488D8:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 49u);  goto L_001488EC; }
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_001488EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001488F4u); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x001488F4u) [[unlikely]] return; }
L_001488F4:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148900u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00148900u) [[unlikely]] return; }
L_00148900:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00148904:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014890Cu); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0014890Cu) [[unlikely]] return; }
L_0014890C:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148918u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00148918u) [[unlikely]] return; }
L_00148918:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_00148930:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00148940:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148954u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 18u, depth + 1u); else { c.pc = 0x00148150u; return; } if (c.pc != 0x00148954u) [[unlikely]] return; }
L_00148954:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], c.r[2].w[0] << 3);  goto L_00148968; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00148994; } }
L_00148968:
    set32(c.r[4], ld32((c.r[28].w[0] - 28996u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st64((c.r[16].w[0] + 8u), 0ull);
    st64((c.r[16].w[0] + 16u), 0ull);
    st64((c.r[16].w[0] + 24u), 0ull);
    st64((c.r[16].w[0] + 32u), 0ull);
    c.budget -= 11;
L_00148994:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001489B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[5].w[0] + 24u)));  c.pc = t; return; }
L_001489C0:
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  c.pc = t; return; }
L_001489E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00148A2C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[5].w[0] + 8u)));  goto L_00148A18; }
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { c.r[2].d[0] = c.r[6].d[0] << 32;  goto L_00148A0C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_00148A44; } }
L_00148A0C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00148A5C; } }
L_00148A18:
    c.r[3].d[0] = c.r[6].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00148A5C; } }
L_00148A2C:
    c.r[2].d[0] = ld32((c.r[5].w[0] + 24u));
    c.r[2].d[0] = c.r[2].d[0] + c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00148A5C; } }
L_00148A44:
    set32(c.r[4], 0u + 64u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148A54u); set32(c.r[6], c.r[6].w[0] + 15596u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00148A54u) [[unlikely]] return; }
L_00148A54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00148A7C; } }
L_00148A5C:
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    mmi::pmaxw(c.r[2], c.r[2], c.r[4]);
    st32((c.r[5].w[0] + 8u), c.r[2].w[0]);
    mmi::pminw(c.r[2], c.r[2], c.r[3]);
    st32((c.r[5].w[0] + 8u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 8;
L_00148A7C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00148A90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[5].w[0] + 8u)));  c.pc = t; return; }
L_00148AA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00148AB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00148AC0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    set32(c.r[3], 0u + 255u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    mmi::mult(c, 0, c.r[7].w[0], c.r[21].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[29].w[0] + 236u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[8].w[0] + 28u)));
    st32((c.r[29].w[0] + 172u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    st8((c.r[29].w[0] + 238u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    st8((c.r[29].w[0] + 237u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[8].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[8].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    mmi::pminw(c.r[19], c.r[2], c.r[3]);
    set32(c.r[4], ld32((c.r[28].w[0] - 28976u)));
    set32(c.r[3], ld32((c.r[8].w[0] + 16u)));
    set32(c.r[5], c.r[5].w[0] >> 11);
    set32(c.r[2], c.r[19].w[0] + 2047u);
    set32(c.r[23], c.r[2].w[0] >> 11);
    set32(c.r[22], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148B4Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0012(c, 414u, depth + 1u); else { c.pc = 0x0014B3E0u; return; } if (c.pc != 0x00148B4Cu) [[unlikely]] return; }
L_00148B4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148B54u);  if (depth < kMaxDepth) unit_00A6(c, 134u, depth + 1u); else { c.pc = 0x00398D10u; return; } if (c.pc != 0x00148B54u) [[unlikely]] return; }
L_00148B54:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[30], 0u + 10000u);  goto L_00148B64; }
    set32(c.r[30], 0u + 1000u);
    c.budget -= 1;
L_00148B64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148B6Cu); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0010(c, 315u, depth + 1u); else { c.pc = 0x00142810u; return; } if (c.pc != 0x00148B6Cu) [[unlikely]] return; }
L_00148B6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148B74u); set32(c.r[4], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_0010(c, 315u, depth + 1u); else { c.pc = 0x00142810u; return; } if (c.pc != 0x00148B74u) [[unlikely]] return; }
L_00148B74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148B7Cu); set32(c.r[4], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_0010(c, 306u, depth + 1u); else { c.pc = 0x001426F0u; return; } if (c.pc != 0x00148B7Cu) [[unlikely]] return; }
L_00148B7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 172u)));  if (t) { goto L_00148CE0; } }
L_00148B84:
    set32(c.r[4], 0u + 64u);
    set32(c.r[5], 0u + 8u);
    set32(c.r[6], c.r[6].w[0] + 15670u);
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148B9Cu); c.r[8].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00148B9Cu) [[unlikely]] return; }
L_00148B9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148BA4u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0010(c, 306u, depth + 1u); else { c.pc = 0x001426F0u; return; } if (c.pc != 0x00148BA4u) [[unlikely]] return; }
L_00148BA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148BACu); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0010(c, 298u, depth + 1u); else { c.pc = 0x00142600u; return; } if (c.pc != 0x00148BACu) [[unlikely]] return; }
L_00148BAC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148BB8u); set32(c.r[4], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_0010(c, 298u, depth + 1u); else { c.pc = 0x00142600u; return; } if (c.pc != 0x00148BB8u) [[unlikely]] return; }
L_00148BB8:
    c.r[2].d[0] = c.r[16].d[0] - c.r[2].d[0];
    c.r[1].d[0] = c.r[2].sd[0] < 5001ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { c.r[4].d[0] = c.r[30].d[0] + 0ull;  goto L_00148CD4; }
    set32(c.r[5], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[2], ld32((c.r[28].w[0] - 28996u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148BE8u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000A(c, 378u, depth + 1u); else { c.pc = 0x0012B100u; return; } if (c.pc != 0x00148BE8u) [[unlikely]] return; }
L_00148BE8:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[29].w[0] + 177u);  goto L_00148BFC; }
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 1;
L_00148BFC:
    set32(c.r[18], ld32((c.r[28].w[0] - 28976u)));
    set32(c.r[4], c.r[29].w[0] + 232u);
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148C1Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 478u, depth + 1u); else { c.pc = 0x00147FB0u; return; } if (c.pc != 0x00148C1Cu) [[unlikely]] return; }
L_00148C1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00148CB0; } }
L_00148C24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148C2Cu); set32(c.r[4], c.r[29].w[0] + 232u);  if (depth < kMaxDepth) unit_0011(c, 477u, depth + 1u); else { c.pc = 0x00147FA0u; return; } if (c.pc != 0x00148C2Cu) [[unlikely]] return; }
L_00148C2C:
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 192u);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00148C48u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00148C48u) [[unlikely]] return; }
L_00148C48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148C50u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 476u, depth + 1u); else { c.pc = 0x00147F90u; return; } if (c.pc != 0x00148C50u) [[unlikely]] return; }
L_00148C50:
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 176u);  goto L_00148CC8; }
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148C68u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 478u, depth + 1u); else { c.pc = 0x00147FB0u; return; } if (c.pc != 0x00148C68u) [[unlikely]] return; }
L_00148C68:
    set32(c.r[4], c.r[29].w[0] + 228u);
    set32(c.r[5], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148C78u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 475u, depth + 1u); else { c.pc = 0x00147F70u; return; } if (c.pc != 0x00148C78u) [[unlikely]] return; }
L_00148C78:
    set32(c.r[4], c.r[29].w[0] + 232u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148C84u); set32(c.r[5], c.r[29].w[0] + 228u);  if (depth < kMaxDepth) unit_0011(c, 474u, depth + 1u); else { c.pc = 0x00147F60u; return; } if (c.pc != 0x00148C84u) [[unlikely]] return; }
L_00148C84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148C8Cu); set32(c.r[4], c.r[29].w[0] + 232u);  if (depth < kMaxDepth) unit_0011(c, 477u, depth + 1u); else { c.pc = 0x00147FA0u; return; } if (c.pc != 0x00148C8Cu) [[unlikely]] return; }
L_00148C8C:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_00148CAC; } }
    set32(c.r[4], c.r[29].w[0] + 220u);
    set32(c.r[5], c.r[29].w[0] + 232u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148CACu); set32(c.r[17], c.r[17].w[0] + 1u);  if (depth < kMaxDepth) unit_0011(c, 473u, depth + 1u); else { c.pc = 0x00147F40u; return; } if (c.pc != 0x00148CACu) [[unlikely]] return; }
L_00148CAC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00148CB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148CB8u);  if (depth < kMaxDepth) unit_0011(c, 476u, depth + 1u); else { c.pc = 0x00147F90u; return; } if (c.pc != 0x00148CB8u) [[unlikely]] return; }
L_00148CB8:
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00148C24u | kUnwind; return; } goto L_00148C24; } }
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 1;
L_00148CC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148CD0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00148CD0u) [[unlikely]] return; }
L_00148CD0:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 1;
L_00148CD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148CDCu);  if (depth < kMaxDepth) unit_00A6(c, 293u, depth + 1u); else { c.pc = 0x00399E98u; return; } if (c.pc != 0x00148CDCu) [[unlikely]] return; }
L_00148CDC:
    set32(c.r[6], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 1;
L_00148CE0:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148CF0u); set32(c.r[7], c.r[29].w[0] + 236u);  if (depth < kMaxDepth) unit_00A9(c, 261u, depth + 1u); else { c.pc = 0x003A6660u; return; } if (c.pc != 0x00148CF0u) [[unlikely]] return; }
L_00148CF0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00148B84u | kUnwind; return; } goto L_00148B84; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148D08u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 183u, depth + 1u); else { c.pc = 0x003A5C28u; return; } if (c.pc != 0x00148D08u) [[unlikely]] return; }
L_00148D08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148D10u);  if (depth < kMaxDepth) unit_00A9(c, 279u, depth + 1u); else { c.pc = 0x003A6900u; return; } if (c.pc != 0x00148D10u) [[unlikely]] return; }
L_00148D10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00148CDCu | kUnwind; return; } goto L_00148CDC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 28976u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148D24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 414u, depth + 1u); else { c.pc = 0x0014B3E0u; return; } if (c.pc != 0x00148D24u) [[unlikely]] return; }
L_00148D24:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148D34u); st32((c.r[20].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A9(c, 279u, depth + 1u); else { c.pc = 0x003A6900u; return; } if (c.pc != 0x00148D34u) [[unlikely]] return; }
L_00148D34:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { mmi::divu(c, 0, c.r[19].w[0], c.r[21].w[0]);  goto L_00148D64; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148D44u);  if (depth < kMaxDepth) unit_00A9(c, 279u, depth + 1u); else { c.pc = 0x003A6900u; return; } if (c.pc != 0x00148D44u) [[unlikely]] return; }
L_00148D44:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 64u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148D5Cu); set32(c.r[6], c.r[6].w[0] + 15715u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00148D5Cu) [[unlikely]] return; }
L_00148D5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00148D68; } }
L_00148D64:
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 1;
L_00148D68:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_00148DA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    mmi::mult(c, 0, c.r[7].w[0], c.r[6].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[8].w[0] + 8u)));
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[8].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    mmi::pminw(c.r[2], c.r[4], c.r[2]);
    c.r[3].d[0] = c.r[2].d[0] & 2047ull;
    c.r[2].d[0] = c.r[5].d[0] & 2047ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[18].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 20;
    { const bool t = c.r[18].d[0] != 0ull; c.r[17].d[0] = c.r[2].d[0] & 255ull;  if (t) { goto L_00148E08; } }
    c.r[7].d[0] = c.r[4].d[0] & 2047ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148E08u); set32(c.r[6], c.r[6].w[0] + 15740u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00148E08u) [[unlikely]] return; }
L_00148E08:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[2].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;  goto L_00148E30; }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] + 15782u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148E2Cu); c.r[7].d[0] = c.r[2].d[0] & 2047ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00148E2Cu) [[unlikely]] return; }
L_00148E2C:
    c.r[2].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00148E30:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_00148E40; }
    c.r[2].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 2;
L_00148E40:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00148E60:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00148E70; }
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_00148E70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00148E80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148EACu); set32(c.r[5], 0u + 114u);  if (depth < kMaxDepth) unit_00AE(c, 149u, depth + 1u); else { c.pc = 0x003B9A38u; return; } if (c.pc != 0x00148EACu) [[unlikely]] return; }
L_00148EAC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u - 1u);  goto L_00148ED0; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 64u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148EC8u); set32(c.r[6], c.r[6].w[0] + 15824u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00148EC8u) [[unlikely]] return; }
L_00148EC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00149028; } }
L_00148ED0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00148EF0; } }
L_00148ED8:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 8u));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_00148EF0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_00148EFC; } }
L_00148EF0:
    c.r[2].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[3].w[0] << 5);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00148ED8u | kUnwind; return; } goto L_00148ED8; }
L_00148EFC:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], c.r[4].w[0] << 5);  goto L_00148F1C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148F14u); set32(c.r[4], c.r[4].w[0] + 15907u);  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x00148F14u) [[unlikely]] return; }
L_00148F14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00149028; } }
L_00148F1C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148F30u); set32(c.r[16], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0012(c, 18u, depth + 1u); else { c.pc = 0x00148150u; return; } if (c.pc != 0x00148F30u) [[unlikely]] return; }
L_00148F30:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_00148F44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00149028; } }
L_00148F44:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148F50u); set32(c.r[5], 0u + 116u);  if (depth < kMaxDepth) unit_00AE(c, 149u, depth + 1u); else { c.pc = 0x003B9A38u; return; } if (c.pc != 0x00148F50u) [[unlikely]] return; }
L_00148F50:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00148F60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 28u), 0u);  if (t) { goto L_00148F78; } }
L_00148F60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148F68u); set32(c.r[5], 0u + 98u);  if (depth < kMaxDepth) unit_00AE(c, 149u, depth + 1u); else { c.pc = 0x003B9A38u; return; } if (c.pc != 0x00148F68u) [[unlikely]] return; }
L_00148F68:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 28u), 0u);  goto L_00148F78; }
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 2;
L_00148F78:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00148F84u); set32(c.r[5], 0u + 115u);  if (depth < kMaxDepth) unit_00AE(c, 149u, depth + 1u); else { c.pc = 0x003B9A38u; return; } if (c.pc != 0x00148F84u) [[unlikely]] return; }
L_00148F84:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[28].w[0] - 28988u)));  goto L_00148F9C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 28988u)));
    c.budget -= 4;
L_00148F9C:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[28].w[0] - 28988u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 28996u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 28996u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[4], c.r[4].w[0] + 2047u);
    set32(c.r[4], c.r[4].w[0] >> 11);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 28996u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 35;
L_00149028:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0014903C:
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 1;
L_00149040:
    set32(c.r[29], c.r[29].w[0] - 1456u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 15938u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149074u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00A7(c, 215u, depth + 1u); else { c.pc = 0x0039E1A8u; return; } if (c.pc != 0x00149074u) [[unlikely]] return; }
L_00149074:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[20].sd[0] >= 0) { set32(c.r[2], 0u - 1u);  goto L_001490A8; }
L_00149080:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] + 15957u);
    set32(c.r[5], c.r[5].w[0] + 15938u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149098u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x00149098u) [[unlikely]] return; }
L_00149098:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001490A0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 235u, depth + 1u); else { c.pc = 0x0039E438u; return; } if (c.pc != 0x001490A0u) [[unlikely]] return; }
L_001490A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001494D8; } }
L_001490A8:
    c.r[19].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[28].w[0] - 28992u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_001493D0; } }
L_001490C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001493BC; } }
L_001490C8:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[2].d[0] = c.r[18].sd[0] < 256ll ? 1ull : 0ull;  goto L_00149104; }
    set32(c.r[7], ld32((c.r[28].w[0] - 28992u)));
    c.budget -= 3;
    { const bool t = c.r[7].sd[0] < 0;  if (t) { goto L_00149100; } }
    c.r[2].d[0] = c.r[17].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00149100; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] + 16005u);
    set32(c.r[5], c.r[5].w[0] + 15938u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149100u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x00149100u) [[unlikely]] return; }
L_00149100:
    c.r[2].d[0] = c.r[18].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 1;
L_00149104:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] + c.r[29].w[0]);  goto L_00149124; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] + 16124u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149120u); set32(c.r[5], c.r[5].w[0] + 15938u);  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x00149120u) [[unlikely]] return; }
L_00149120:
    set32(c.r[2], c.r[16].w[0] + c.r[29].w[0]);
    c.budget -= 1;
L_00149124:
    set32(c.r[6], 0u + 10u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 112u)));
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[6].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_001493BC; }
    set32(c.r[3], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001493B8; } }
L_00149140:
    c.r[1].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0014939C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 15536u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00148000u < 16384u) { entry = entries_0012[(t - 0x00148000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00149168:
    c.r[3].d[0] = c.r[2].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], 0u + 59u);  goto L_00149194; }
    c.r[1].d[0] = c.r[2].sd[0] < 58ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00149190; } }
    set32(c.r[3], c.r[18].w[0] + c.r[29].w[0]);
    st8((c.r[3].w[0] + 1184u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_001493A8; } }
L_00149190:
    set32(c.r[3], 0u + 59u);
    c.budget -= 1;
L_00149194:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 28992u)));  goto L_001493AC; }
    set32(c.r[2], c.r[18].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[29].w[0] + 112u);
    st8((c.r[2].w[0] + 112u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001491B4u); set32(c.r[6], 0u + 10u);  if (depth < kMaxDepth) unit_00AE(c, 296u, depth + 1u); else { c.pc = 0x003BAD48u; return; } if (c.pc != 0x001491B4u) [[unlikely]] return; }
L_001491B4:
    c.r[18].d[0] = c.r[2].d[0] << 32;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 32);
    set32(c.r[2], c.r[18].w[0] << 3);
    st32((c.r[28].w[0] - 28992u), c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001491D4u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 19u, depth + 1u); else { c.pc = 0x00100270u; return; } if (c.pc != 0x001491D4u) [[unlikely]] return; }
L_001491D4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00150000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00150000u);
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 26864u);
    set32(c.r[6], c.r[6].w[0] - 26960u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001491F4u); set32(c.r[7], 0u + 36u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x001491F4u) [[unlikely]] return; }
L_001491F4:
    set32(c.r[5], ld32((c.r[28].w[0] - 28992u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[28].w[0] - 28996u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 16236u);
    set32(c.r[19], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149210u); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x00149210u) [[unlikely]] return; }
L_00149210:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001493A8; } }
L_00149218:
    set32(c.r[3], 0u + 44u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 34u);  goto L_00149288; }
    set32(c.r[3], c.r[18].w[0] + c.r[29].w[0]);
    set32(c.r[2], 0u + 59u);
    set32(c.r[3], c.r[3].w[0] + 1184u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[3].w[0] - 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] - 2u)));
    c.budget -= 8;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 1152u);  goto L_0014924C; }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[29].w[0] + 1152u);
    c.budget -= 2;
L_0014924C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149254u); set32(c.r[5], c.r[29].w[0] + 1185u);  if (depth < kMaxDepth) unit_000A(c, 391u, depth + 1u); else { c.pc = 0x0012B240u; return; } if (c.pc != 0x00149254u) [[unlikely]] return; }
L_00149254:
    set32(c.r[3], c.r[17].w[0] << 3);
    set32(c.r[2], ld32((c.r[28].w[0] - 28996u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[29].w[0] + 1152u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149270u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000A(c, 320u, depth + 1u); else { c.pc = 0x0012ABA0u; return; } if (c.pc != 0x00149270u) [[unlikely]] return; }
L_00149270:
    set32(c.r[4], c.r[29].w[0] + 1152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014927Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x0014927Cu) [[unlikely]] return; }
L_0014927C:
    set32(c.r[19], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001493A8; } }
L_00149288:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001493A8; } }
    set32(c.r[3], c.r[18].w[0] + c.r[29].w[0]);
    st8((c.r[3].w[0] + 1184u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_001493A8; } }
L_001492A0:
    set32(c.r[3], 0u + 44u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], c.r[18].w[0] + c.r[29].w[0]);  goto L_0014931C; }
    set32(c.r[2], c.r[18].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[29].w[0] + 1184u);
    st8((c.r[2].w[0] + 1184u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001492C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 296u, depth + 1u); else { c.pc = 0x003BAD48u; return; } if (c.pc != 0x001492C0u) [[unlikely]] return; }
L_001492C0:
    c.r[4].d[0] = c.r[2].d[0] << 32;
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);  if (t) { goto L_001492F0; } }
    set32(c.r[3], c.r[17].w[0] << 3);
    set32(c.r[2], ld32((c.r[28].w[0] - 28996u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[19], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 28u), c.r[4].w[0]);  if (t) { goto L_00149310; } }
L_001492F0:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[19].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 4u);  goto L_00149304; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], 0u + 4u);  if (t) { goto L_00149310; } }
L_00149304:
    c.budget -= 2;
    if (c.r[19].d[0] != c.r[2].d[0]) { c.r[18].d[0] = 0ull + 0ull;  goto L_001493A8; }
    set32(c.r[19], 0u + 5u);
    c.budget -= 1;
L_00149310:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001493A8; } }
L_0014931C:
    st8((c.r[3].w[0] + 1184u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_001493A8; } }
L_00149328:
    set32(c.r[3], 0u + 59u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], c.r[18].w[0] + c.r[29].w[0]);  goto L_00149378; }
    set32(c.r[2], c.r[18].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[29].w[0] + 1184u);
    st8((c.r[2].w[0] + 1184u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149348u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 296u, depth + 1u); else { c.pc = 0x003BAD48u; return; } if (c.pc != 0x00149348u) [[unlikely]] return; }
L_00149348:
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] << 3);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[19], 0u + 1u);
    set32(c.r[2], ld32((c.r[28].w[0] - 28996u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 32u), c.r[4].w[0]);  if (t) { goto L_001493A8; } }
L_00149378:
    st8((c.r[3].w[0] + 1184u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_001493A8; } }
L_00149384:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149390u); set32(c.r[4], c.r[4].w[0] + 16268u);  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x00149390u) [[unlikely]] return; }
L_00149390:
    set32(c.r[19], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001493A8; } }
L_0014939C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001493A8u); set32(c.r[4], c.r[4].w[0] + 16361u);  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x001493A8u) [[unlikely]] return; }
L_001493A8:
    set32(c.r[2], ld32((c.r[28].w[0] - 28992u)));
    c.budget -= 1;
L_001493AC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_001493B8; } }
    c.r[21].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_001493B8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001493BC:
    c.r[1].d[0] = c.r[16].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_001493D4; }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001490C8u | kUnwind; return; } goto L_001490C8; } }
L_001493D0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001493D4:
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001493E0u); set32(c.r[6], 0u + 1024u);  if (depth < kMaxDepth) unit_00A7(c, 263u, depth + 1u); else { c.pc = 0x0039E7F0u; return; } if (c.pc != 0x001493E0u) [[unlikely]] return; }
L_001493E0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001493F0; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001490C0u | kUnwind; return; } goto L_001490C0; } }
L_001493F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001493F8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 235u, depth + 1u); else { c.pc = 0x0039E438u; return; } if (c.pc != 0x001493F8u) [[unlikely]] return; }
L_001493F8:
    c.budget -= 2;
    if (c.r[16].sd[0] >= 0) { c.r[3].d[0] = ld64((c.r[28].w[0] - 31128u));  goto L_00149418; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149410u); set32(c.r[4], c.r[4].w[0] + 16429u);  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x00149410u) [[unlikely]] return; }
L_00149410:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001494D8; } }
L_00149418:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[16], ld32((c.r[28].w[0] - 28996u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[6], c.r[29].w[0] + 1448u);
    set32(c.r[5], c.r[17].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + 5956u);
    st64((c.r[29].w[0] + 1448u), c.r[3].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014943Cu); st32((c.r[2].w[0] + 5952u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0012(c, 207u, depth + 1u); else { c.pc = 0x001496A0u; return; } if (c.pc != 0x0014943Cu) [[unlikely]] return; }
L_0014943C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00149460; } }
L_00149444:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149450u); set32(c.r[4], c.r[4].w[0] + 5956u);  if (depth < kMaxDepth) unit_0012(c, 206u, depth + 1u); else { c.pc = 0x00149690u; return; } if (c.pc != 0x00149450u) [[unlikely]] return; }
L_00149450:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014945Cu); set32(c.r[5], c.r[29].w[0] + 1448u);  if (depth < kMaxDepth) unit_0012(c, 205u, depth + 1u); else { c.pc = 0x00149670u; return; } if (c.pc != 0x0014945Cu) [[unlikely]] return; }
L_0014945C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00149460:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014946Cu); set32(c.r[4], c.r[4].w[0] + 5956u);  if (depth < kMaxDepth) unit_0012(c, 46u, depth + 1u); else { c.pc = 0x00148410u; return; } if (c.pc != 0x0014946Cu) [[unlikely]] return; }
L_0014946C:
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00149444u | kUnwind; return; } goto L_00149444; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001494AC; } }
L_00149480:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 5972u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149490u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0012(c, 37u, depth + 1u); else { c.pc = 0x001482F0u; return; } if (c.pc != 0x00149490u) [[unlikely]] return; }
L_00149490:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_001494AC; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001494A8u); set32(c.r[4], c.r[4].w[0] + 5952u);  if (depth < kMaxDepth) unit_0012(c, 197u, depth + 1u); else { c.pc = 0x00149500u; return; } if (c.pc != 0x001494A8u) [[unlikely]] return; }
L_001494A8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001494AC:
    c.r[2].d[0] = c.r[18].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00149480u | kUnwind; return; } goto L_00149480; }
    set32(c.r[5], ld32((c.r[28].w[0] - 28992u)));
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[5].d[0]) { set32(c.r[2], 0u + 1u);  goto L_001494D8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001494D4u); set32(c.r[4], c.r[4].w[0] + 16469u);  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x001494D4u) [[unlikely]] return; }
L_001494D4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001494D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1456u);  c.pc = t; return; }
L_00149500:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 29000u)));
    set32(c.r[16], ld32((c.r[4].w[0])));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00149558; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149534u); set32(c.r[4], c.r[4].w[0] + 5920u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x00149534u) [[unlikely]] return; }
L_00149534:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 5920u);
    set32(c.r[5], c.r[5].w[0] + 11712u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149550u); set32(c.r[6], c.r[6].w[0] + 5904u);  if (depth < kMaxDepth) unit_00A6(c, 13u, depth + 1u); else { c.pc = 0x003981B0u; return; } if (c.pc != 0x00149550u) [[unlikely]] return; }
L_00149550:
    set32(c.r[2], 0u + 1u);
    st8((c.r[28].w[0] - 29000u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00149558:
    set32(c.r[2], c.r[17].w[0] << 3);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149570u); set32(c.r[5], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000A(c, 378u, depth + 1u); else { c.pc = 0x0012B100u; return; } if (c.pc != 0x00149570u) [[unlikely]] return; }
L_00149570:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 65u);  goto L_00149584; }
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_00149584:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149590u); set32(c.r[4], c.r[4].w[0] + 5920u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00149590u) [[unlikely]] return; }
L_00149590:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014959Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0014959Cu) [[unlikely]] return; }
L_0014959C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 5920u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[6].sd[0] = static_cast<std::int32_t>(0x005F0000u);  goto L_001495BC; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[3].w[0] + 5928u)));  if (t) { goto L_001495C0; } }
L_001495BC:
    set32(c.r[6], c.r[6].w[0] + 5921u);
    c.budget -= 1;
L_001495C0:
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0xF0000000u);  if (t) { goto L_001495EC; } }
L_001495CC:
    set32(c.r[5], c.r[9].w[0] << 4);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[9], c.r[5].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[9].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { goto L_001495EC; } }
    set32(c.r[3], c.r[3].w[0] >> 24);
    c.r[9].d[0] = c.r[9].d[0] ^ c.r[3].d[0];
    c.budget -= 2;
L_001495EC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = c.r[3].d[0] << 56;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001495CCu | kUnwind; return; } goto L_001495CC; }
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.r[3].d[0] = 0ull | 65535ull;
    set32(c.r[7], ld32((c.r[18].w[0] + 16u)));
    mmi::divu(c, 0, c.r[9].w[0], c.r[4].w[0]);
    c.r[8].d[0] = c.hi.d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_00149628; } }
L_00149614:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[10].d[0] != c.r[4].d[0];  if (t) { goto L_00149628; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_00149628; } }
L_00149628:
    set32(c.r[6], c.r[10].w[0] << 3);
    set32(c.r[5], c.r[7].w[0] + c.r[6].w[0]);
    c.r[4].d[0] = ld16((c.r[5].w[0] + 6u));
    c.budget -= 5;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00149614u | kUnwind; return; } goto L_00149614; }
    st16((c.r[5].w[0] + 4u), static_cast<std::uint16_t>(c.r[17].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0]), c.r[9].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00149670:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 4u));
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 6u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00149690:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_001496A0:
    c.budget -= 2;
    {  goto L_00149880; }
L_001496B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001496EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001496D4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x001496D4u) [[unlikely]] return; }
L_001496D4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001496F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001496ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x001496ECu) [[unlikely]] return; }
L_001496EC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001496F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00149710:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149724u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 395u, depth + 1u); else { c.pc = 0x0012B2D0u; return; } if (c.pc != 0x00149724u) [[unlikely]] return; }
L_00149724:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00149740:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001497A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00150000u);
    set32(c.r[2], c.r[2].w[0] - 24480u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 28996u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149778u); set32(c.r[5], c.r[5].w[0] - 26960u);  if (depth < kMaxDepth) unit_00A5(c, 160u, depth + 1u); else { c.pc = 0x00397F00u; return; } if (c.pc != 0x00149778u) [[unlikely]] return; }
L_00149778:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00149790; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26128u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 4;
L_00149790:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001497A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001497A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x001497A4u) [[unlikely]] return; }
L_001497A4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001497A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001497C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] - 26128u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 24480u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001497F0u); st32((c.r[4].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 159u, depth + 1u); else { c.pc = 0x00149040u; return; } if (c.pc != 0x001497F0u) [[unlikely]] return; }
L_001497F0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_0014980C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149808u); set32(c.r[4], c.r[4].w[0] + 16539u);  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x00149808u) [[unlikely]] return; }
L_00149808:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0014980C:
    set32(c.r[2], c.r[17].w[0] << 5);
    c.budget -= 1;
L_00149810:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[6], 0u + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149824u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x00149824u) [[unlikely]] return; }
L_00149824:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[17].w[0] << 5);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00149810u | kUnwind; return; } goto L_00149810; }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_0014983C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00149850:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0014986C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[4].w[0] + 4u)));  if (t) { goto L_00149878; } }
L_0014986C:
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[5].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_00149878:
    c.budget -= 2;
    { c.r[6].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00121800u | kUnwind; return; } [[clang::musttail]] return unit_0008(c, 201u, depth); }
L_00149880:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001498B8; } }
    set32(c.r[6], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001498B0u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0012(c, 228u, depth + 1u); else { c.pc = 0x00149990u; return; } if (c.pc != 0x001498B0u) [[unlikely]] return; }
L_001498B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001498E4; } }
L_001498B8:
    c.r[1].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001498E0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[5], c.r[6].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001498E0u); set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0012(c, 226u, depth + 1u); else { c.pc = 0x001498F0u; return; } if (c.pc != 0x001498E0u) [[unlikely]] return; }
L_001498E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001498E4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001498F0:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[6].d[0]) { set32(c.r[3], ld32((c.r[4].w[0] + 8u)));  goto L_00149900; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00149980; } }
L_00149900:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[7], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[7].w[0] - c.r[6].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));  if (t) { goto L_00149920; } }
    set32(c.r[2], c.r[3].w[0] + 7u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_00149920:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[6].w[0] - c.r[5].w[0]);  goto L_00149960; }
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00149950; } }
L_00149934:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[8].w[0] + 4u));
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[8].w[0] + 6u));
    st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[8], c.r[8].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.budget -= 7;
L_00149950:
    c.r[2].d[0] = c.r[8].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[8].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00149934u | kUnwind; return; } goto L_00149934; }
    set32(c.r[2], c.r[6].w[0] - c.r[5].w[0]);
    c.budget -= 1;
L_00149960:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));  if (t) { goto L_00149970; } }
    set32(c.r[2], c.r[2].w[0] + 7u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    c.budget -= 2;
L_00149970:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[6].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_00149980:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00149990:
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
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00149D10; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] - c.r[18].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[20].w[0] + 8u)));  goto L_001499FC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001499F0u); set32(c.r[5], c.r[5].w[0] + 16681u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x001499F0u) [[unlikely]] return; }
L_001499F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001499F8u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x001499F8u) [[unlikely]] return; }
L_001499F8:
    set32(c.r[5], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 1;
L_001499FC:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[4], c.r[5].w[0] + c.r[18].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0])));  goto L_00149B98; }
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[4], c.r[5].w[0] << 3);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[6].w[0] - c.r[19].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));  if (t) { goto L_00149A30; } }
    set32(c.r[3], c.r[3].w[0] + 7u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    c.budget -= 2;
L_00149A30:
    c.r[1].d[0] = c.r[4].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], c.r[18].w[0] << 3);  goto L_00149AC4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00149A70; } }
L_00149A44:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  goto L_00149A60; }
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[5].w[0]), c.f[1]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 5;
L_00149A60:
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_00149A70:
    c.r[1].d[0] = c.r[4].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00149A44u | kUnwind; return; } goto L_00149A44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00149AB0; } }
L_00149A84:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  goto L_00149AA0; }
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[5].w[0]), c.f[1]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 5;
L_00149AA0:
    set32(c.r[4], c.r[4].w[0] + 8u);
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_00149AB0:
    c.r[3].d[0] = c.r[4].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00149A84u | kUnwind; return; } goto L_00149A84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00149B64; } }
L_00149AC4:
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[6].w[0] - c.r[5].w[0]);  if (t) { goto L_00149AFC; } }
L_00149AD0:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 8u)));  goto L_00149AEC; }
    c.f[1] = ld32((c.r[8].w[0]));
    c.f[0] = ld32((c.r[8].w[0] + 4u));
    st32((c.r[7].w[0]), c.f[1]);
    st32((c.r[7].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 5;
L_00149AEC:
    set32(c.r[8], c.r[8].w[0] + 8u);
    set32(c.r[7], c.r[7].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_00149AFC:
    c.r[3].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00149AD0u | kUnwind; return; } goto L_00149AD0; } }
    set32(c.r[3], c.r[4].w[0] - c.r[18].w[0]);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[6].w[0] - c.r[4].w[0]);
    c.r[1].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);  goto L_00149B58; }
    c.r[1].d[0] = c.r[17].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00149B30; } }
    set32(c.r[17], c.r[17].w[0] + c.r[5].w[0]);
    c.budget -= 1;
L_00149B30:
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00149B58; } }
L_00149B3C:
    set32(c.r[6], c.r[6].w[0] - 8u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 4u));
    st16((c.r[6].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 6u));
    st16((c.r[6].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
L_00149B58:
    c.r[1].d[0] = c.r[19].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00149B3Cu | kUnwind; return; } goto L_00149B3C; }
L_00149B64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00149B88; } }
L_00149B6C:
    set32(c.r[18], c.r[18].w[0] - 1u);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 4u));
    st16((c.r[19].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 6u));
    st16((c.r[19].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.budget -= 7;
L_00149B88:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00149B6Cu | kUnwind; return; } goto L_00149B6C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_00149D14; } }
L_00149B98:
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 104u), 0u);
    st32((c.r[29].w[0] + 108u), 0u);
    set32(c.r[16], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 7;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], 0u + 1u);  goto L_00149BB4; }
L_00149BB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00149BD0; } }
L_00149BBC:
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[16].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[16].d[0] = c.r[2].d[0] + 0ull;  goto L_00149BD0; }
    set32(c.r[16], c.r[16].w[0] << 1);
    c.budget -= 1;
L_00149BD0:
    c.r[1].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00149BBCu | kUnwind; return; } goto L_00149BBC; }
    set32(c.r[5], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149BE8u); set32(c.r[4], c.r[16].w[0] << 3);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x00149BE8u) [[unlikely]] return; }
L_00149BE8:
    st32((c.r[29].w[0] + 100u), c.r[16].w[0]);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_00149C30; } }
L_00149C04:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_00149C20; }
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[2].w[0]), c.f[1]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 5;
L_00149C20:
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 4;
L_00149C30:
    c.r[3].d[0] = c.r[5].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00149C04u | kUnwind; return; } goto L_00149C04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00149C70; } }
L_00149C44:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_00149C60; }
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[2].w[0]), c.f[1]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 5;
L_00149C60:
    set32(c.r[2], c.r[2].w[0] + 8u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 4;
L_00149C70:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00149C44u | kUnwind; return; } goto L_00149C44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_00149CB0; } }
L_00149C80:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 104u)));  goto L_00149C9C; }
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[2].w[0]), c.f[1]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 5;
L_00149C9C:
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_00149CB0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00149C80u | kUnwind; return; } goto L_00149C80; } }
    set32(c.r[2], c.r[29].w[0] + 96u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[20].d[0]) { set32(c.r[4], c.r[29].w[0] + 96u);  goto L_00149D08; }
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
L_00149D08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149D10u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0012(c, 242u, depth + 1u); else { c.pc = 0x00149D30u; return; } if (c.pc != 0x00149D10u) [[unlikely]] return; }
L_00149D10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_00149D14:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00149D30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00149D88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149D54u);  if (depth < kMaxDepth) unit_0012(c, 246u, depth + 1u); else { c.pc = 0x00149DA0u; return; } if (c.pc != 0x00149D54u) [[unlikely]] return; }
L_00149D54:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00149D74; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00149D70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149D70u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00149D70u) [[unlikely]] return; }
L_00149D70:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00149D74:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00149D8C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149D88u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00149D88u) [[unlikely]] return; }
L_00149D88:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00149D8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00149DA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), 0u);  c.pc = t; return; }
L_00149DB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00149EB0; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[17].w[0] << 3);
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 56u), 0u);
    st32((c.r[29].w[0] + 48u), c.r[5].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149DF0u); st32((c.r[29].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x00149DF0u) [[unlikely]] return; }
L_00149DF0:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[29].w[0] + 52u), c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    st32((c.r[29].w[0] + 60u), c.r[6].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_00149E3C; } }
L_00149E10:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 56u)));  goto L_00149E2C; }
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[6].w[0]), c.f[1]);
    st32((c.r[6].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 5;
L_00149E2C:
    set32(c.r[5], c.r[5].w[0] + 8u);
    set32(c.r[6], c.r[6].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 4;
L_00149E3C:
    c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00149E10u | kUnwind; return; } goto L_00149E10; } }
    set32(c.r[3], c.r[29].w[0] + 48u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[16].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  goto L_00149E98; }
    set32(c.r[4], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[6], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 60u)));
    st32((c.r[16].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    st32((c.r[29].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[29].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 17;
L_00149E98:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 56u), 0u);  if (t) { goto L_00149EB0; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00149EB4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149EB0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00149EB0u) [[unlikely]] return; }
L_00149EB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00149EB4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00149ED0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00149F48; } }
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00149F34; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00149F30; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00149F30; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00149F30; } }
    st32((c.r[17].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00149F30; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00149F30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149F30u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00149F30u) [[unlikely]] return; }
L_00149F30:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00149F34:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00149F4C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149F48u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00149F48u) [[unlikely]] return; }
L_00149F48:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00149F4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00149F60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00149F70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00149F98u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00149F98u) [[unlikely]] return; }
L_00149F98:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 33u);  goto L_00149FAC; }
    set32(c.r[4], ld32((c.r[29].w[0] + 40u)));
    c.budget -= 1;
L_00149FAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149FB4u); set32(c.r[5], 0u + 511u);  if (depth < kMaxDepth) unit_00A7(c, 349u, depth + 1u); else { c.pc = 0x0039F460u; return; } if (c.pc != 0x00149FB4u) [[unlikely]] return; }
L_00149FB4:
    c.r[16].d[0] = c.r[2].d[0] ^ 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00149FC8u); c.r[16].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00149FC8u) [[unlikely]] return; }
L_00149FC8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00149FE0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A000u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0014A000u) [[unlikely]] return; }
L_0014A000:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A00Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0014A00Cu) [[unlikely]] return; }
L_0014A00C:
    set32(c.r[2], ld32((c.r[28].w[0] - 29204u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 141u));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_0014A028; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 16712u)));  if (t) { goto L_0014A02C; } }
L_0014A028:
    set32(c.r[5], ld32((c.r[2].w[0] + 16720u)));
    c.budget -= 1;
L_0014A02C:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A038u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 301u, depth + 1u); else { c.pc = 0x0012A770u; return; } if (c.pc != 0x0014A038u) [[unlikely]] return; }
L_0014A038:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));  goto L_0014A06C; }
    goto L_0014A040;
L_0014A03C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 1;
L_0014A040:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A04Cu); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0014A04Cu) [[unlikely]] return; }
L_0014A04C:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A058u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0014A058u) [[unlikely]] return; }
L_0014A058:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A064u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0014A064u) [[unlikely]] return; }
L_0014A064:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0014A214; } }
L_0014A06C:
    set32(c.r[2], 0u + 46u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 29204u)));  goto L_0014A12C; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[2], 0u + 92u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[28].w[0] - 29204u)));  goto L_0014A098; }
    set32(c.r[2], 0u + 47u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0014A128; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 29204u)));
    c.budget -= 1;
L_0014A098:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 141u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_0014A0B0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 16712u)));  if (t) { goto L_0014A0B4; } }
L_0014A0B0:
    set32(c.r[5], ld32((c.r[2].w[0] + 16720u)));
    c.budget -= 1;
L_0014A0B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A0BCu); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0014A0BCu) [[unlikely]] return; }
L_0014A0BC:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A0D0u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 295u, depth + 1u); else { c.pc = 0x0012A6E0u; return; } if (c.pc != 0x0014A0D0u) [[unlikely]] return; }
L_0014A0D0:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A0E0u); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000A(c, 138u, depth + 1u); else { c.pc = 0x00129250u; return; } if (c.pc != 0x0014A0E0u) [[unlikely]] return; }
L_0014A0E0:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 129u);  goto L_0014A0F4; }
    set32(c.r[5], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_0014A0F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A0FCu); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0014A0FCu) [[unlikely]] return; }
L_0014A0FC:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A108u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0014A108u) [[unlikely]] return; }
L_0014A108:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A114u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0014A114u) [[unlikely]] return; }
L_0014A114:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A120u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0014A120u) [[unlikely]] return; }
L_0014A120:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014A194; } }
L_0014A128:
    set32(c.r[2], ld32((c.r[28].w[0] - 29204u)));
    c.budget -= 1;
L_0014A12C:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 141u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_0014A144; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[2].w[0] + 16712u)));  if (t) { goto L_0014A148; } }
L_0014A144:
    set32(c.r[5], ld32((c.r[2].w[0] + 16720u)));
    c.budget -= 1;
L_0014A148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A150u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0014A150u) [[unlikely]] return; }
L_0014A150:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A160u); set32(c.r[6], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000A(c, 138u, depth + 1u); else { c.pc = 0x00129250u; return; } if (c.pc != 0x0014A160u) [[unlikely]] return; }
L_0014A160:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 97u);  goto L_0014A174; }
    set32(c.r[5], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_0014A174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A17Cu); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0014A17Cu) [[unlikely]] return; }
L_0014A17C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A188u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0014A188u) [[unlikely]] return; }
L_0014A188:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A194u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0014A194u) [[unlikely]] return; }
L_0014A194:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A1A4u); set32(c.r[5], c.r[5].w[0] + 16751u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0014A1A4u) [[unlikely]] return; }
L_0014A1A4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A1B4u); set32(c.r[5], c.r[5].w[0] + 16753u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0014A1B4u) [[unlikely]] return; }
L_0014A1B4:
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A1C8u); set32(c.r[7], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 353u, depth + 1u); else { c.pc = 0x0013F620u; return; } if (c.pc != 0x0014A1C8u) [[unlikely]] return; }
L_0014A1C8:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A1D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0014A1D4u) [[unlikely]] return; }
L_0014A1D4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A1E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0014A1E0u) [[unlikely]] return; }
L_0014A1E0:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A1ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0014A1ECu) [[unlikely]] return; }
L_0014A1EC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A1F8u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0014A1F8u) [[unlikely]] return; }
L_0014A1F8:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A204u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0014A204u) [[unlikely]] return; }
L_0014A204:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A210u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0014A210u) [[unlikely]] return; }
L_0014A210:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0014A214:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0014A230:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A260u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0014A260u) [[unlikely]] return; }
L_0014A260:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 49u);  goto L_0014A274; }
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 1;
L_0014A274:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A27Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_00A7(c, 426u, depth + 1u); else { c.pc = 0x0039FD90u; return; } if (c.pc != 0x0014A27Cu) [[unlikely]] return; }
L_0014A27C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A28Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0014A28Cu) [[unlikely]] return; }
L_0014A28C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st64((c.r[16].w[0] + 8u), 0ull);  goto L_0014A2A4; }
    set32(c.r[3], 0u - c.r[17].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28980u), c.r[3].w[0]);  if (t) { goto L_0014A41C; } }
L_0014A2A4:
    set32(c.r[2], 0u + 1u);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 98u)));
    c.r[6].d[0] = ld8((c.r[29].w[0] + 97u));
    c.r[5].d[0] = ld8((c.r[29].w[0] + 96u));
    c.r[3].d[0] = c.r[7].d[0] << 5;
    c.r[4].d[0] = ld8((c.r[29].w[0] + 95u));
    c.r[7].d[0] = c.r[3].d[0] - c.r[7].d[0];
    c.r[3].d[0] = c.r[6].d[0] << 5;
    c.r[6].d[0] = c.r[3].d[0] - c.r[6].d[0];
    c.r[3].d[0] = c.r[7].d[0] << 4;
    c.r[7].d[0] = c.r[3].d[0] - c.r[7].d[0];
    c.r[3].d[0] = c.r[6].d[0] << 4;
    c.r[6].d[0] = c.r[3].d[0] - c.r[6].d[0];
    c.r[3].d[0] = c.r[7].d[0] << 4;
    c.r[7].d[0] = c.r[3].d[0] - c.r[7].d[0];
    c.r[3].d[0] = c.r[6].d[0] << 4;
    c.r[6].d[0] = c.r[3].d[0] - c.r[6].d[0];
    c.r[3].d[0] = c.r[7].d[0] << 3;
    c.r[7].d[0] = c.r[7].d[0] + c.r[3].d[0];
    c.r[3].d[0] = c.r[6].d[0] << 2;
    c.r[7].d[0] = c.r[7].d[0] << 9;
    c.r[3].d[0] = c.r[3].d[0] - c.r[6].d[0];
    c.r[6].d[0] = c.r[3].d[0] << 7;
    c.r[3].d[0] = c.r[5].d[0] << 4;
    c.r[7].d[0] = c.r[7].d[0] + c.r[6].d[0];
    c.r[6].d[0] = c.r[3].d[0] - c.r[5].d[0];
    c.r[5].d[0] = c.r[6].d[0] << 4;
    c.r[3].d[0] = c.r[4].d[0] << 4;
    c.r[6].d[0] = c.r[5].d[0] - c.r[6].d[0];
    c.r[4].d[0] = c.r[3].d[0] - c.r[4].d[0];
    c.r[5].d[0] = c.r[6].d[0] << 2;
    c.r[3].d[0] = c.r[4].d[0] << 4;
    c.r[3].d[0] = c.r[3].d[0] - c.r[4].d[0];
    c.r[5].d[0] = c.r[5].d[0] - c.r[6].d[0];
    c.r[4].d[0] = c.r[5].d[0] << 7;
    c.r[3].d[0] = c.r[3].d[0] << 4;
    c.r[5].d[0] = ld8((c.r[29].w[0] + 94u));
    c.r[4].d[0] = c.r[4].d[0] + c.r[7].d[0];
    c.r[6].d[0] = c.r[3].d[0] + c.r[4].d[0];
    c.r[3].d[0] = ld8((c.r[29].w[0] + 93u));
    c.r[4].d[0] = c.r[5].d[0] << 4;
    c.r[4].d[0] = c.r[4].d[0] - c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] << 2;
    c.r[4].d[0] = c.r[4].d[0] + c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] + c.r[4].d[0];
    st64((c.r[16].w[0] + 16u), c.r[3].d[0]);
    st64((c.r[16].w[0] + 24u), 0ull);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 82u)));
    c.r[6].d[0] = ld8((c.r[29].w[0] + 81u));
    c.r[5].d[0] = ld8((c.r[29].w[0] + 80u));
    c.r[3].d[0] = c.r[7].d[0] << 5;
    c.r[4].d[0] = ld8((c.r[29].w[0] + 79u));
    c.r[7].d[0] = c.r[3].d[0] - c.r[7].d[0];
    c.r[3].d[0] = c.r[6].d[0] << 5;
    c.r[6].d[0] = c.r[3].d[0] - c.r[6].d[0];
    c.r[3].d[0] = c.r[7].d[0] << 4;
    c.r[7].d[0] = c.r[3].d[0] - c.r[7].d[0];
    c.r[3].d[0] = c.r[6].d[0] << 4;
    c.r[6].d[0] = c.r[3].d[0] - c.r[6].d[0];
    c.r[3].d[0] = c.r[7].d[0] << 4;
    c.r[7].d[0] = c.r[3].d[0] - c.r[7].d[0];
    c.r[3].d[0] = c.r[6].d[0] << 4;
    c.r[6].d[0] = c.r[3].d[0] - c.r[6].d[0];
    c.r[3].d[0] = c.r[7].d[0] << 3;
    c.r[7].d[0] = c.r[7].d[0] + c.r[3].d[0];
    c.r[3].d[0] = c.r[6].d[0] << 2;
    c.r[7].d[0] = c.r[7].d[0] << 9;
    c.r[3].d[0] = c.r[3].d[0] - c.r[6].d[0];
    c.r[6].d[0] = c.r[3].d[0] << 7;
    c.r[3].d[0] = c.r[5].d[0] << 4;
    c.r[7].d[0] = c.r[7].d[0] + c.r[6].d[0];
    c.r[6].d[0] = c.r[3].d[0] - c.r[5].d[0];
    c.r[5].d[0] = c.r[6].d[0] << 4;
    c.r[3].d[0] = c.r[4].d[0] << 4;
    c.r[6].d[0] = c.r[5].d[0] - c.r[6].d[0];
    c.r[4].d[0] = c.r[3].d[0] - c.r[4].d[0];
    c.r[5].d[0] = c.r[6].d[0] << 2;
    c.r[3].d[0] = c.r[4].d[0] << 4;
    c.r[3].d[0] = c.r[3].d[0] - c.r[4].d[0];
    c.r[5].d[0] = c.r[5].d[0] - c.r[6].d[0];
    c.r[4].d[0] = c.r[5].d[0] << 7;
    c.r[3].d[0] = c.r[3].d[0] << 4;
    c.r[5].d[0] = ld8((c.r[29].w[0] + 78u));
    c.r[4].d[0] = c.r[4].d[0] + c.r[7].d[0];
    c.r[6].d[0] = c.r[3].d[0] + c.r[4].d[0];
    c.r[3].d[0] = ld8((c.r[29].w[0] + 77u));
    c.r[4].d[0] = c.r[5].d[0] << 4;
    c.r[4].d[0] = c.r[4].d[0] - c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] << 2;
    c.r[4].d[0] = c.r[4].d[0] + c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] + c.r[4].d[0];
    st64((c.r[16].w[0] + 32u), c.r[3].d[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 94;
L_0014A41C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0014A430:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0014A440:
    set32(c.r[29], c.r[29].w[0] - 608u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 576u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A468u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0014A468u) [[unlikely]] return; }
L_0014A468:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A478u); set32(c.r[5], c.r[5].w[0] + 16751u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0014A478u) [[unlikely]] return; }
L_0014A478:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A488u); set32(c.r[5], c.r[5].w[0] + 16753u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0014A488u) [[unlikely]] return; }
L_0014A488:
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[29].w[0] + 576u);
    set32(c.r[6], c.r[29].w[0] + 224u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A49Cu); set32(c.r[7], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000F(c, 353u, depth + 1u); else { c.pc = 0x0013F620u; return; } if (c.pc != 0x0014A49Cu) [[unlikely]] return; }
L_0014A49C:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 193u);  goto L_0014A4B0; }
    set32(c.r[5], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 1;
L_0014A4B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A4B8u); set32(c.r[4], c.r[29].w[0] + 576u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0014A4B8u) [[unlikely]] return; }
L_0014A4B8:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A4C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0014A4C4u) [[unlikely]] return; }
L_0014A4C4:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A4D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0014A4D0u) [[unlikely]] return; }
L_0014A4D0:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A4DCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0014A4DCu) [[unlikely]] return; }
L_0014A4DC:
    set32(c.r[2], ld32((c.r[29].w[0] + 576u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 584u)));  goto L_0014A4FC; }
    set32(c.r[2], c.r[29].w[0] + 577u);
    c.budget -= 1;
L_0014A4FC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], 0u + 92u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_0014A560; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 580u)));  goto L_0014A520; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 576u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_0014A520:
    set32(c.r[7], c.r[2].w[0] - 1u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 576u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A534u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_000A(c, 295u, depth + 1u); else { c.pc = 0x0012A6E0u; return; } if (c.pc != 0x0014A534u) [[unlikely]] return; }
L_0014A534:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 2;
L_0014A53C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 177u);  goto L_0014A548; }
    set32(c.r[5], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 1;
L_0014A548:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A550u); set32(c.r[4], c.r[29].w[0] + 576u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0014A550u) [[unlikely]] return; }
L_0014A550:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A55Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0014A55Cu) [[unlikely]] return; }
L_0014A55C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_0014A560:
    set32(c.r[5], c.r[29].w[0] + 576u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A570u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_000A(c, 295u, depth + 1u); else { c.pc = 0x0012A6E0u; return; } if (c.pc != 0x0014A570u) [[unlikely]] return; }
L_0014A570:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A580u); set32(c.r[5], c.r[5].w[0] + 16755u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0014A580u) [[unlikely]] return; }
L_0014A580:
    c.r[16].d[0] = c.r[2].d[0] ^ 0ull;
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A594u); c.r[16].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0014A594u) [[unlikely]] return; }
L_0014A594:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0014A5F8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 576u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 576u));  goto L_0014A5B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 580u)));  if (t) { goto L_0014A5BC; } }
L_0014A5B4:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_0014A5BC:
    set32(c.r[7], c.r[2].w[0] - 2u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 576u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A5D0u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_000A(c, 295u, depth + 1u); else { c.pc = 0x0012A6E0u; return; } if (c.pc != 0x0014A5D0u) [[unlikely]] return; }
L_0014A5D0:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 145u);  goto L_0014A5E4; }
    set32(c.r[5], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 1;
L_0014A5E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A5ECu); set32(c.r[4], c.r[29].w[0] + 576u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0014A5ECu) [[unlikely]] return; }
L_0014A5EC:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A5F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0014A5F8u) [[unlikely]] return; }
L_0014A5F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[5].w[0] + 16744u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A60Cu); set32(c.r[6], c.r[29].w[0] + 576u);  if (depth < kMaxDepth) unit_0010(c, 434u, depth + 1u); else { c.pc = 0x001433D0u; return; } if (c.pc != 0x0014A60Cu) [[unlikely]] return; }
L_0014A60C:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 129u);  goto L_0014A620; }
    set32(c.r[5], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_0014A620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A628u); set32(c.r[4], c.r[29].w[0] + 576u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0014A628u) [[unlikely]] return; }
L_0014A628:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A634u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0014A634u) [[unlikely]] return; }
L_0014A634:
    set32(c.r[2], ld32((c.r[29].w[0] + 576u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 580u)));  goto L_0014A65C; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 576u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_0014A65C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] - 1u);  if (t) { goto L_0014A66C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[29].w[0] + 577u);  if (t) { goto L_0014A670; } }
L_0014A66C:
    set32(c.r[2], ld32((c.r[29].w[0] + 584u)));
    c.budget -= 1;
L_0014A670:
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], 0u + 92u);
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 576u)));  goto L_0014A6AC; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 580u)));  goto L_0014A698; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 576u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_0014A698:
    set32(c.r[5], c.r[2].w[0] - 1u);
    set32(c.r[4], c.r[29].w[0] + 576u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A6A8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0008(c, 198u, depth + 1u); else { c.pc = 0x00121790u; return; } if (c.pc != 0x0014A6A8u) [[unlikely]] return; }
L_0014A6A8:
    set32(c.r[2], ld32((c.r[29].w[0] + 576u)));
    c.budget -= 1;
L_0014A6AC:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[29].w[0] + 577u);  goto L_0014A6BC; }
    set32(c.r[7], ld32((c.r[29].w[0] + 584u)));
    c.budget -= 1;
L_0014A6BC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 64u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A6D0u); set32(c.r[6], c.r[6].w[0] + 16758u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0014A6D0u) [[unlikely]] return; }
L_0014A6D0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 64u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A6E4u); set32(c.r[6], c.r[6].w[0] + 16786u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0014A6E4u) [[unlikely]] return; }
L_0014A6E4:
    set32(c.r[2], ld32((c.r[29].w[0] + 576u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 577u);  goto L_0014A6F8; }
    set32(c.r[4], ld32((c.r[29].w[0] + 584u)));
    c.budget -= 1;
L_0014A6F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A700u);  if (depth < kMaxDepth) unit_00A7(c, 393u, depth + 1u); else { c.pc = 0x0039FA08u; return; } if (c.pc != 0x0014A700u) [[unlikely]] return; }
L_0014A700:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].sd[0] >= 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0014A814; }
    set32(c.r[2], ld32((c.r[29].w[0] + 576u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[29].w[0] + 577u);  goto L_0014A720; }
    set32(c.r[7], ld32((c.r[29].w[0] + 584u)));
    c.budget -= 1;
L_0014A720:
    set32(c.r[16], 0u - c.r[16].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 64u);
    set32(c.r[5], 0u + 8u);
    set32(c.r[6], c.r[6].w[0] + 16833u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A73Cu); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0014A73Cu) [[unlikely]] return; }
L_0014A73C:
    set32(c.r[4], c.r[29].w[0] + 576u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A74Cu); st32((c.r[28].w[0] - 28980u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0014A74Cu) [[unlikely]] return; }
L_0014A74C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0014A834; } }
L_0014A754:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A760u); set32(c.r[5], c.r[5].w[0] + 16868u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0014A760u) [[unlikely]] return; }
L_0014A760:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014A810; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A778u); set32(c.r[5], c.r[5].w[0] + 16870u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0014A778u) [[unlikely]] return; }
L_0014A778:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014A810; } }
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A78Cu); set32(c.r[5], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0014A78Cu) [[unlikely]] return; }
L_0014A78C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A798u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 331u, depth + 1u); else { c.pc = 0x0013F2A0u; return; } if (c.pc != 0x0014A798u) [[unlikely]] return; }
L_0014A798:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A7A4u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0011(c, 235u, depth + 1u); else { c.pc = 0x00146240u; return; } if (c.pc != 0x0014A7A4u) [[unlikely]] return; }
L_0014A7A4:
    c.r[19].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A7B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0014A7B4u) [[unlikely]] return; }
L_0014A7B4:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A7C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0014A7C0u) [[unlikely]] return; }
L_0014A7C0:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0014A810; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] >> 12);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0014A810; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A7E8u); set32(c.r[5], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0014A7E8u) [[unlikely]] return; }
L_0014A7E8:
    set32(c.r[2], c.r[18].w[0] + 12u);
    set32(c.r[4], c.r[29].w[0] + 604u);
    st32((c.r[29].w[0] + 600u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 600u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A804u); set32(c.r[7], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000B(c, 53u, depth + 1u); else { c.pc = 0x0012C6B0u; return; } if (c.pc != 0x0014A804u) [[unlikely]] return; }
L_0014A804:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A810u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0014A810u) [[unlikely]] return; }
L_0014A810:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0014A814:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A81Cu); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_00A7(c, 414u, depth + 1u); else { c.pc = 0x0039FC38u; return; } if (c.pc != 0x0014A81Cu) [[unlikely]] return; }
L_0014A81C:
    c.budget -= 2;
    if (c.r[2].sd[0] > 0) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0014A754u | kUnwind; return; } goto L_0014A754; }
    set32(c.r[4], c.r[29].w[0] + 576u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A830u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0014A830u) [[unlikely]] return; }
L_0014A830:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0014A834:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 608u);  c.pc = t; return; }
L_0014A850:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A87Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 247u, depth + 1u); else { c.pc = 0x0039E5B0u; return; } if (c.pc != 0x0014A87Cu) [[unlikely]] return; }
L_0014A87C:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_0014A880:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A890u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_00A7(c, 247u, depth + 1u); else { c.pc = 0x0039E5B0u; return; } if (c.pc != 0x0014A890u) [[unlikely]] return; }
L_0014A890:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A8A4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 247u, depth + 1u); else { c.pc = 0x0039E5B0u; return; } if (c.pc != 0x0014A8A4u) [[unlikely]] return; }
L_0014A8A4:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] < 0; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0014A8BC; } }
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0;  if (t) { goto L_0014A8BC; } }
    c.budget -= 2;
    if (c.r[16].sd[0] >= 0) { set32(c.r[4], ld32((c.r[19].w[0])));  goto L_0014A8F0; }
L_0014A8BC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 64u);
    set32(c.r[5], 0u + 8u);
    set32(c.r[6], c.r[6].w[0] + 16874u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A8DCu); c.r[9].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0014A8DCu) [[unlikely]] return; }
L_0014A8DC:
    mmi::pminw(c.r[2], c.r[17], c.r[16]);
    mmi::pminw(c.r[2], c.r[18], c.r[2]);
    st32((c.r[28].w[0] - 28980u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0014A900; } }
L_0014A8F0:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A8FCu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A7(c, 247u, depth + 1u); else { c.pc = 0x0039E5B0u; return; } if (c.pc != 0x0014A8FCu) [[unlikely]] return; }
L_0014A8FC:
    set32(c.r[2], c.r[17].w[0] - c.r[16].w[0]);
    c.budget -= 1;
L_0014A900:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0014A920:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    c.budget -= 8;
    { const bool t = c.r[7].d[0] == c.r[6].d[0]; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0014A968; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[6].d[0]) { set32(c.r[4], ld32((c.r[17].w[0])));  goto L_0014A99C; }
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { c.r[6].d[0] = 0ull + 0ull;  goto L_0014A998; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014A97C; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014A998; } }
L_0014A968:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A974u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 247u, depth + 1u); else { c.pc = 0x0039E5B0u; return; } if (c.pc != 0x0014A974u) [[unlikely]] return; }
L_0014A974:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_0014A998; } }
L_0014A97C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 64u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A990u); set32(c.r[6], c.r[6].w[0] + 16966u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0014A990u) [[unlikely]] return; }
L_0014A990:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0014A9BC; } }
L_0014A998:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_0014A99C:
    c.r[5].d[0] = c.r[16].d[0] << 32;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A9A8u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  if (depth < kMaxDepth) unit_00A7(c, 247u, depth + 1u); else { c.pc = 0x0039E5B0u; return; } if (c.pc != 0x0014A9A8u) [[unlikely]] return; }
L_0014A9A8:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;  goto L_0014A9BC; }
    set32(c.r[3], 0u - c.r[2].w[0]);
    st32((c.r[28].w[0] - 28980u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    c.budget -= 3;
L_0014A9BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0014A9D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014A9ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 247u, depth + 1u); else { c.pc = 0x0039E5B0u; return; } if (c.pc != 0x0014A9ECu) [[unlikely]] return; }
L_0014A9EC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].sd[0] >= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0014AA1C; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 64u);
    set32(c.r[5], 0u + 8u);
    set32(c.r[6], c.r[6].w[0] + 17009u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AA10u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0014AA10u) [[unlikely]] return; }
L_0014AA10:
    set32(c.r[2], 0u - c.r[16].w[0]);
    st32((c.r[28].w[0] - 28980u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_0014AA1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0014AA30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[8].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AA50u); mmi::mult(c, 0, c.r[17].w[0], c.r[7].w[0]); c.r[6].d[0] = c.lo.d[0];  if (depth < kMaxDepth) unit_00A7(c, 263u, depth + 1u); else { c.pc = 0x0039E7F0u; return; } if (c.pc != 0x0014AA50u) [[unlikely]] return; }
L_0014AA50:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].sd[0] >= 0) { mmi::divu(c, 0, c.r[16].w[0], c.r[17].w[0]);  goto L_0014AA80; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 64u);
    set32(c.r[5], 0u + 8u);
    set32(c.r[6], c.r[6].w[0] + 17037u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AA74u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0014AA74u) [[unlikely]] return; }
L_0014AA74:
    set32(c.r[2], 0u - c.r[16].w[0]);
    st32((c.r[28].w[0] - 28980u), c.r[2].w[0]);
    mmi::divu(c, 0, c.r[16].w[0], c.r[17].w[0]);
    c.budget -= 3;
L_0014AA80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].d[0] = c.lo.d[0];
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0014AAA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[8].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AAB8u); mmi::mult(c, 0, c.r[6].w[0], c.r[7].w[0]); c.r[6].d[0] = c.lo.d[0];  if (depth < kMaxDepth) unit_00A7(c, 281u, depth + 1u); else { c.pc = 0x0039EA60u; return; } if (c.pc != 0x0014AAB8u) [[unlikely]] return; }
L_0014AAB8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].sd[0] >= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0014AAE8; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 64u);
    set32(c.r[5], 0u + 8u);
    set32(c.r[6], c.r[6].w[0] + 17064u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AADCu); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0014AADCu) [[unlikely]] return; }
L_0014AADC:
    set32(c.r[2], 0u - c.r[16].w[0]);
    st32((c.r[28].w[0] - 28980u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_0014AAE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0014AB00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0014AB10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 28980u)));  c.pc = t; return; }
L_0014AB20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AB3Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 235u, depth + 1u); else { c.pc = 0x0039E438u; return; } if (c.pc != 0x0014AB3Cu) [[unlikely]] return; }
L_0014AB3C:
    set32(c.r[3], ld32((c.r[28].w[0] - 28984u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[28].w[0] - 28984u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].sd[0] >= 0; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0014AB78; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 64u);
    set32(c.r[5], 0u + 8u);
    set32(c.r[6], c.r[6].w[0] + 17093u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AB70u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0014AB70u) [[unlikely]] return; }
L_0014AB70:
    set32(c.r[2], 0u - c.r[16].w[0]);
    st32((c.r[28].w[0] - 28980u), c.r[2].w[0]);
    c.budget -= 2;
L_0014AB78:
    c.r[2].d[0] = c.r[16].sd[0] < 0ll ? 1ull : 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0014AB90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[5].w[0])));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014ABB0u); set32(c.r[5], c.r[29].w[0] + 47u);  if (depth < kMaxDepth) unit_00A7(c, 263u, depth + 1u); else { c.pc = 0x0039E7F0u; return; } if (c.pc != 0x0014ABB0u) [[unlikely]] return; }
L_0014ABB0:
    c.budget -= 2;
    if (c.r[2].sd[0] <= 0) { set32(c.r[2], 0u + 1u);  goto L_0014ABCC; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014ABC8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00A7(c, 247u, depth + 1u); else { c.pc = 0x0039E5B0u; return; } if (c.pc != 0x0014ABC8u) [[unlikely]] return; }
L_0014ABC8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0014ABCC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0014ABE0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[7], 0u + 16u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 28984u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != c.r[7].d[0]; c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0014AC30; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 64u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AC28u); set32(c.r[6], c.r[6].w[0] + 17128u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0014AC28u) [[unlikely]] return; }
L_0014AC28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0014AE14; } }
L_0014AC30:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0014ACBC; } }
L_0014AC3C:
    set32(c.r[2], 0u + 43u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[17].d[0] = c.r[17].d[0] | 3ull;  goto L_0014ACB8; }
    set32(c.r[2], 0u + 65u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[17].d[0] = c.r[17].d[0] | 770ull;  goto L_0014ACB8; }
    set32(c.r[2], 0u + 97u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0014ACB4; } }
    set32(c.r[2], 0u + 87u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[17].d[0] = c.r[17].d[0] | 1538ull;  goto L_0014ACB8; }
    set32(c.r[2], 0u + 119u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0014ACA8; } }
    set32(c.r[2], 0u + 82u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[17].d[0] = c.r[17].d[0] | 1ull;  goto L_0014ACB8; }
    set32(c.r[2], 0u + 114u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0014AC9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014ACB8; } }
L_0014AC9C:
    c.r[17].d[0] = c.r[17].d[0] | 1ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014ACB8; } }
L_0014ACA8:
    c.r[17].d[0] = c.r[17].d[0] | 1538ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014ACB8; } }
L_0014ACB4:
    c.r[17].d[0] = c.r[17].d[0] | 770ull;
    c.budget -= 1;
L_0014ACB8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0014ACBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014ACC4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0014ACC4u) [[unlikely]] return; }
L_0014ACC4:
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] + c.r[16].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0014AC3Cu | kUnwind; return; } goto L_0014AC3C; }
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0014ACE8u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0014ACE8u) [[unlikely]] return; }
L_0014ACE8:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 97u);  goto L_0014ACFC; }
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_0014ACFC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AD08u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 215u, depth + 1u); else { c.pc = 0x0039E1A8u; return; } if (c.pc != 0x0014AD08u) [[unlikely]] return; }
L_0014AD08:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AD18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0014AD18u) [[unlikely]] return; }
L_0014AD18:
    c.budget -= 2;
    if (c.r[16].sd[0] >= 0) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005F0000u);  goto L_0014ADBC; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);  goto L_0014AD44; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 64u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AD40u); set32(c.r[6], c.r[6].w[0] + 17176u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0014AD40u) [[unlikely]] return; }
L_0014AD40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 1;
L_0014AD44:
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);  goto L_0014AD68; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 64u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AD64u); set32(c.r[6], c.r[6].w[0] + 17186u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0014AD64u) [[unlikely]] return; }
L_0014AD64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 1;
L_0014AD68:
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);  goto L_0014AD8C; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 64u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AD88u); set32(c.r[6], c.r[6].w[0] + 17199u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0014AD88u) [[unlikely]] return; }
L_0014AD88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 1;
L_0014AD8C:
    c.r[2].d[0] = c.r[2].d[0] | 3ull;
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[3], 0u - c.r[16].w[0]);  goto L_0014ADB0; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 64u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014ADACu); set32(c.r[6], c.r[6].w[0] + 17209u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0014ADACu) [[unlikely]] return; }
L_0014ADAC:
    set32(c.r[3], 0u - c.r[16].w[0]);
    c.budget -= 1;
L_0014ADB0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28980u), c.r[3].w[0]);  if (t) { goto L_0014AE14; } }
L_0014ADBC:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 5984u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_0014ADF0; } }
L_0014ADCC:
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_0014ADF0; }
    set32(c.r[3], ld32((c.r[28].w[0] - 28984u)));
    st32((c.r[2].w[0]), c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 28984u), c.r[3].w[0]);  if (t) { goto L_0014AE14; } }
L_0014ADF0:
    c.r[2].d[0] = c.r[6].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[6].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0014ADCCu | kUnwind; return; } goto L_0014ADCC; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 64u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AE10u); set32(c.r[6], c.r[6].w[0] + 17219u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x0014AE10u) [[unlikely]] return; }
L_0014AE10:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0014AE14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0014AE40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0014AE90; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 24384u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0014AE74; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26128u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0014AE74:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0014AE8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AE8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0014AE8Cu) [[unlikely]] return; }
L_0014AE8C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0014AE90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0014AEA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 26128u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 24384u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[5], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + 5984u);
    c.budget -= 10;
L_0014AEC8:
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    c.r[2].d[0] = c.r[6].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014AEC8u | kUnwind; return; } goto L_0014AEC8; } }
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[28].w[0] - 28984u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 28980u), 0u);  c.pc = t; return; }
L_0014AF00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AF10u);  if (depth < kMaxDepth) unit_0012(c, 383u, depth + 1u); else { c.pc = 0x0014AF30u; return; } if (c.pc != 0x0014AF10u) [[unlikely]] return; }
L_0014AF10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014AF18u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x0014AF18u) [[unlikely]] return; }
L_0014AF18:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0014AF30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  if (t) { goto L_0014AF3C; } }
L_0014AF38:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 1;
L_0014AF3C:
    c.r[2].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[6].d[0] = c.r[3].d[0] << 56;  goto L_0014AF64; }
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[1].d[0] = c.r[2].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0014AF38u | kUnwind; return; } goto L_0014AF38; }
    c.r[6].d[0] = c.r[3].d[0] << 56;
    c.budget -= 1;
L_0014AF64:
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[3], 0u + 45u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0014AF80; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { goto L_0014AF90; } }
L_0014AF80:
    set32(c.r[3], 0u + 43u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_0014AF90; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0014AF90:
    c.f[0] = 0u;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[3] = c.r[3].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[1] = c.f[0];  if (t) { goto L_0014AFBC; } }
L_0014AFA4:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.facc = fp::add(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    c.budget -= 6;
L_0014AFBC:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[3].d[0] = c.r[7].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0014AFDC; }
    c.r[1].d[0] = c.r[7].sd[0] < 58ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[3], c.r[7].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0014AFA4u | kUnwind; return; } goto L_0014AFA4; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_0014AFDC:
    set32(c.r[3], 0u + 46u);
    c.f[4] = c.r[6].w[0];
    c.budget -= 4;
    if (c.r[7].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 101u);  goto L_0014B03C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[3] = c.r[3].w[0];
    c.f[1] = 0u;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { goto L_0014B01C; } }
L_0014B000:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.facc = fp::add(c.f[1], c.f[2]);
    c.f[4] = fp::mul(c.f[4], c.f[3]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[3], c.f[0]));
    c.budget -= 7;
L_0014B01C:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[3].d[0] = c.r[7].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0014B038; } }
    c.r[1].d[0] = c.r[7].sd[0] < 58ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[3], c.r[7].w[0] - 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B000u | kUnwind; return; } goto L_0014B000; }
L_0014B038:
    set32(c.r[3], 0u + 101u);
    c.budget -= 1;
L_0014B03C:
    c.budget -= 2;
    if (c.r[7].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_0014B054; }
    goto L_0014B044;
L_0014B040:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0014B044:
    set32(c.r[3], 0u + 69u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_0014B108; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0014B054:
    set32(c.r[3], 0u + 45u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0014B074; } }
    set32(c.r[7], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { goto L_0014B09C; } }
L_0014B074:
    set32(c.r[3], 0u + 43u);
    c.budget -= 3;
    if (c.r[6].d[0] != c.r[3].d[0]) { c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  goto L_0014B0A0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { goto L_0014B09C; } }
L_0014B088:
    set32(c.r[6], c.r[6].w[0] - 48u);
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[8], c.r[6].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_0014B09C:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 1;
L_0014B0A0:
    c.r[3].d[0] = c.r[6].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0014B0BC; }
    c.r[1].d[0] = c.r[6].sd[0] < 58ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[3], c.r[8].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B088u | kUnwind; return; } goto L_0014B088; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_0014B0BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[2] = c.r[6].w[0];
    c.f[1] = c.r[3].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0014B0D8; } }
L_0014B0D0:
    c.f[2] = fp::mul(c.f[2], c.f[1]);
    c.r[3].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 2;
L_0014B0D8:
    set32(c.r[8], c.r[8].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B0D0u | kUnwind; return; } goto L_0014B0D0; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0014B0FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[4] = fp::mul(c.f[4], c.f[2]);  if (t) { goto L_0014B108; } }
L_0014B0FC:
    fpu_div(c, 4u, c.f[4], c.f[2]);
    c.budget -= 3;
L_0014B108:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0014B114; } }
    st32((c.r[5].w[0]), c.r[4].w[0]);
    c.budget -= 1;
L_0014B114:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0014B124; }
    c.f[0] = c.f[0] ^ fp::kSign;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 2;
L_0014B124:
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[4]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014B140; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014B14C; } }
L_0014B140:
    fpu_div(c, 0u, c.f[0], c.f[4]);
    c.budget -= 3;
L_0014B14C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014B160:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_00A6(c, 134u, depth); }
L_0014B170:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B194u); set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0014B194u) [[unlikely]] return; }
L_0014B194:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B1A0u); st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 126u, depth + 1u); else { c.pc = 0x00398C60u; return; } if (c.pc != 0x0014B1A0u) [[unlikely]] return; }
L_0014B1A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0014B1B0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 8u)));  c.pc = t; return; }
L_0014B1C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0014B1DC; } }
L_0014B1D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B1DCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000A(c, 144u, depth + 1u); else { c.pc = 0x001292E0u; return; } if (c.pc != 0x0014B1DCu) [[unlikely]] return; }
L_0014B1DC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B1D4u | kUnwind; return; } goto L_0014B1D4; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0014B200:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0014B238; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0014B2D8; } }
L_0014B238:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00150000u);
    set32(c.r[3], 0u + 16384u);
    set32(c.r[2], c.r[2].w[0] - 20112u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[6].w[0] + 20u)));
    set32(c.r[2], c.r[28].w[0]);
    st32((c.r[29].w[0] + 72u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 76u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 24u)));
    st32((c.r[29].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B26Cu); st32((c.r[29].w[0] + 80u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 120u, depth + 1u); else { c.pc = 0x00398C20u; return; } if (c.pc != 0x0014B26Cu) [[unlikely]] return; }
L_0014B26C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[2].w[0]), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 10;
    if (c.r[5].sd[0] > 0) { set32(c.r[5], ld32((c.r[18].w[0])));  goto L_0014B2A4; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B2A0u); set32(c.r[4], c.r[4].w[0] + 17688u);  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x0014B2A0u) [[unlikely]] return; }
L_0014B2A0:
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_0014B2A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B2ACu); set32(c.r[4], ld32((c.r[5].w[0] + 16u)));  if (depth < kMaxDepth) unit_00A6(c, 300u, depth + 1u); else { c.pc = 0x00399F60u; return; } if (c.pc != 0x0014B2ACu) [[unlikely]] return; }
L_0014B2AC:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], 0u + 1u);  goto L_0014B2D4; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B2C4u); set32(c.r[4], c.r[4].w[0] + 17716u);  if (depth < kMaxDepth) unit_00A6(c, 475u, depth + 1u); else { c.pc = 0x0039BB08u; return; } if (c.pc != 0x0014B2C4u) [[unlikely]] return; }
L_0014B2C4:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B2D0u); set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (depth < kMaxDepth) unit_00A6(c, 122u, depth + 1u); else { c.pc = 0x00398C30u; return; } if (c.pc != 0x0014B2D0u) [[unlikely]] return; }
L_0014B2D0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0014B2D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0014B2D8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0014B2F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0014B338; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B318u); set32(c.r[4], ld32((c.r[2].w[0] + 20u)));  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x001002F0u; return; } if (c.pc != 0x0014B318u) [[unlikely]] return; }
L_0014B318:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B320u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0014B320u) [[unlikely]] return; }
L_0014B320:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0014B33C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B338u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0014B338u) [[unlikely]] return; }
L_0014B338:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0014B33C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0014B350:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B368u); set32(c.r[4], 0u + 28u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0014B368u) [[unlikely]] return; }
L_0014B368:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B37Cu); set32(c.r[6], 0u + 28u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0014B37Cu) [[unlikely]] return; }
L_0014B37C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 16u);
    set32(c.r[4], 0u + 64u);
    set32(c.r[5], 0u + 16384u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B398u); st32((c.r[2].w[0] + 24u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0000(c, 136u, depth + 1u); else { c.pc = 0x00102150u; return; } if (c.pc != 0x0014B398u) [[unlikely]] return; }
L_0014B398:
    set32(c.r[3], ld32((c.r[16].w[0])));
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[3].w[0] + 8u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0014B3C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0014B3D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014B3E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 5u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 72u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 92u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B418u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 478u, depth + 1u); else { c.pc = 0x00147FB0u; return; } if (c.pc != 0x0014B418u) [[unlikely]] return; }
L_0014B418:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0014B4AC; } }
L_0014B420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B428u); set32(c.r[4], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_0011(c, 477u, depth + 1u); else { c.pc = 0x00147FA0u; return; } if (c.pc != 0x0014B428u) [[unlikely]] return; }
L_0014B428:
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 72u);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B444u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0014B444u) [[unlikely]] return; }
L_0014B444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B44Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 476u, depth + 1u); else { c.pc = 0x00147F90u; return; } if (c.pc != 0x0014B44Cu) [[unlikely]] return; }
L_0014B44C:
    c.r[1].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_0014B4C4; }
    set32(c.r[4], c.r[29].w[0] + 84u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B464u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 478u, depth + 1u); else { c.pc = 0x00147FB0u; return; } if (c.pc != 0x0014B464u) [[unlikely]] return; }
L_0014B464:
    set32(c.r[4], c.r[29].w[0] + 88u);
    set32(c.r[5], c.r[29].w[0] + 84u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B474u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 475u, depth + 1u); else { c.pc = 0x00147F70u; return; } if (c.pc != 0x0014B474u) [[unlikely]] return; }
L_0014B474:
    set32(c.r[4], c.r[29].w[0] + 92u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B480u); set32(c.r[5], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_0011(c, 474u, depth + 1u); else { c.pc = 0x00147F60u; return; } if (c.pc != 0x0014B480u) [[unlikely]] return; }
L_0014B480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B488u); set32(c.r[4], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_0011(c, 477u, depth + 1u); else { c.pc = 0x00147FA0u; return; } if (c.pc != 0x0014B488u) [[unlikely]] return; }
L_0014B488:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_0014B4A8; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 92u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B4A8u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_0011(c, 473u, depth + 1u); else { c.pc = 0x00147F40u; return; } if (c.pc != 0x0014B4A8u) [[unlikely]] return; }
L_0014B4A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0014B4AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B4B4u);  if (depth < kMaxDepth) unit_0011(c, 476u, depth + 1u); else { c.pc = 0x00147F90u; return; } if (c.pc != 0x0014B4B4u) [[unlikely]] return; }
L_0014B4B4:
    c.r[3].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B420u | kUnwind; return; } goto L_0014B420; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0014B4C4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0014B4E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B4F0u);  if (depth < kMaxDepth) unit_000B(c, 92u, depth + 1u); else { c.pc = 0x0012CBE0u; return; } if (c.pc != 0x0014B4F0u) [[unlikely]] return; }
L_0014B4F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B4F8u);  if (depth < kMaxDepth) unit_00A6(c, 20u, depth + 1u); else { c.pc = 0x003982D0u; return; } if (c.pc != 0x0014B4F8u) [[unlikely]] return; }
L_0014B4F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0014B510:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014B520:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014B530:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B54Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0014B54Cu) [[unlikely]] return; }
L_0014B54C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0014B5A0; }
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B564u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0014B564u) [[unlikely]] return; }
L_0014B564:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014B59C; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B57Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0014B57Cu) [[unlikely]] return; }
L_0014B57C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014B59C; } }
    set32(c.r[25], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_0014B588:
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B594u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0014B594u) [[unlikely]] return; }
L_0014B594:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[16].w[0] + 16u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B588u | kUnwind; return; } goto L_0014B588; } }
L_0014B59C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0014B5A0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0014B5B0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));  c.pc = t; return; }
L_0014B5C0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29204u)));
    c.r[16].d[0] = ld8((c.r[2].w[0] + 141u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B5DCu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 19u, depth + 1u); else { c.pc = 0x0039C3E0u; return; } if (c.pc != 0x0014B5DCu) [[unlikely]] return; }
L_0014B5DC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 29204u)));  goto L_0014B5F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B5ECu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 208u, depth + 1u); else { c.pc = 0x003A5F40u; return; } if (c.pc != 0x0014B5ECu) [[unlikely]] return; }
L_0014B5EC:
    set32(c.r[2], ld32((c.r[28].w[0] - 29204u)));
    c.budget -= 1;
L_0014B5F0:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 141u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_0014B608; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 17773u);  if (t) { goto L_0014B60C; } }
L_0014B608:
    set32(c.r[5], c.r[5].w[0] + 17790u);
    c.budget -= 1;
L_0014B60C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 17744u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B61Cu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x0014B61Cu) [[unlikely]] return; }
L_0014B61C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B624u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00A8(c, 218u, depth + 1u); else { c.pc = 0x003A2550u; return; } if (c.pc != 0x0014B624u) [[unlikely]] return; }
L_0014B624:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B61Cu | kUnwind; return; } goto L_0014B61C; } }
L_0014B638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B640u);  if (depth < kMaxDepth) unit_00A8(c, 213u, depth + 1u); else { c.pc = 0x003A2500u; return; } if (c.pc != 0x0014B640u) [[unlikely]] return; }
L_0014B640:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B638u | kUnwind; return; } goto L_0014B638; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B660u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A7(c, 19u, depth + 1u); else { c.pc = 0x0039C3E0u; return; } if (c.pc != 0x0014B660u) [[unlikely]] return; }
L_0014B660:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B668u);  if (depth < kMaxDepth) unit_00A8(c, 120u, depth + 1u); else { c.pc = 0x003A10D0u; return; } if (c.pc != 0x0014B668u) [[unlikely]] return; }
L_0014B668:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B670u);  if (depth < kMaxDepth) unit_00A8(c, 139u, depth + 1u); else { c.pc = 0x003A17B0u; return; } if (c.pc != 0x0014B670u) [[unlikely]] return; }
L_0014B670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B678u);  if (depth < kMaxDepth) unit_00A7(c, 192u, depth + 1u); else { c.pc = 0x0039DF40u; return; } if (c.pc != 0x0014B678u) [[unlikely]] return; }
L_0014B678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B680u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 208u, depth + 1u); else { c.pc = 0x003A5F40u; return; } if (c.pc != 0x0014B680u) [[unlikely]] return; }
L_0014B680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B688u);  if (depth < kMaxDepth) unit_00A9(c, 277u, depth + 1u); else { c.pc = 0x003A68D8u; return; } if (c.pc != 0x0014B688u) [[unlikely]] return; }
L_0014B688:
    set32(c.r[3], 0u + 20u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], 0u + 1u);  goto L_0014B6A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B69Cu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_00A9(c, 289u, depth + 1u); else { c.pc = 0x003A6A50u; return; } if (c.pc != 0x0014B69Cu) [[unlikely]] return; }
L_0014B69C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 104u);  if (t) { goto L_0014B6B0; } }
L_0014B6A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B6ACu);  if (depth < kMaxDepth) unit_00A9(c, 289u, depth + 1u); else { c.pc = 0x003A6A50u; return; } if (c.pc != 0x0014B6ACu) [[unlikely]] return; }
L_0014B6AC:
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.budget -= 1;
L_0014B6B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B6B8u);  if (depth < kMaxDepth) unit_00A9(c, 297u, depth + 1u); else { c.pc = 0x003A6B48u; return; } if (c.pc != 0x0014B6B8u) [[unlikely]] return; }
L_0014B6B8:
    c.r[5].d[0] = ld8((c.r[29].w[0] + 106u));
    c.r[4].d[0] = ld8((c.r[29].w[0] + 107u));
    c.r[6].d[0] = ld8((c.r[29].w[0] + 105u));
    set32(c.r[2], c.r[5].w[0] << 4);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 109u));
    set32(c.r[5], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 7);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B71Cu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);  if (depth < kMaxDepth) unit_000C(c, 30u, depth + 1u); else { c.pc = 0x00130570u; return; } if (c.pc != 0x0014B71Cu) [[unlikely]] return; }
L_0014B71C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0014B730:
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00148000u < 16384u) { entry = entries_0012[(t - 0x00148000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0014B740:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0014B7C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 24288u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[28].w[0] - 28976u), 0u);  if (t) { goto L_0014B7AC; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0014B7B0; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0014B7AC; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0014B7AC; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0014B7AC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0014B7AC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0014B7AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B7ACu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0014B7ACu) [[unlikely]] return; }
L_0014B7AC:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0014B7B0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0014B7C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B7C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0014B7C4u) [[unlikely]] return; }
L_0014B7C4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0014B7C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0014B7E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B7F4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0014B7F4u) [[unlikely]] return; }
L_0014B7F4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0014B80C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B808u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0014B808u) [[unlikely]] return; }
L_0014B808:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0014B80C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_0014B820; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B81Cu);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0014B81Cu) [[unlikely]] return; }
L_0014B81C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0014B820:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[5], 0u + 8u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B838u); st32((c.r[16].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x0014B838u) [[unlikely]] return; }
L_0014B838:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 24288u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[28].w[0] - 28976u), c.r[16].w[0]);
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0014B860:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0])));  [[clang::musttail]] return unit_00A6(c, 158u, depth); }
L_0014B870:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0014B8A0; } }
L_0014B894:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B89Cu); set32(c.r[4], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_00A6(c, 154u, depth + 1u); else { c.pc = 0x00398E40u; return; } if (c.pc != 0x0014B89Cu) [[unlikely]] return; }
L_0014B89C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0014B8A0:
    c.r[3].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014B894u | kUnwind; return; } goto L_0014B894; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0014B8D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0014B90C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B8F4u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x0014B8F4u) [[unlikely]] return; }
L_0014B8F4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0014B910; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B90Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0014B90Cu) [[unlikely]] return; }
L_0014B90C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0014B910:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0014B930:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B960u); set32(c.r[6], 0u + 24u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x0014B960u) [[unlikely]] return; }
L_0014B960:
    set32(c.r[4], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 72u), c.r[17].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B970u); st32((c.r[29].w[0] + 68u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_00A6(c, 150u, depth + 1u); else { c.pc = 0x00398E20u; return; } if (c.pc != 0x0014B970u) [[unlikely]] return; }
L_0014B970:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0014B990:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014B9A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0014BA10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 24240u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0014B9F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27696u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0014B9F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0014B9F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014B9F8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0014B9F8u) [[unlikely]] return; }
L_0014B9F8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0014BA14; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BA10u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0014BA10u) [[unlikely]] return; }
L_0014BA10:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0014BA14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0014BA30:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_0014BA58; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 5u);  goto L_0014BA50; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_0014BA50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014BA5C; } }
L_0014BA58:
    set32(c.r[2], c.r[2].w[0] + 17824u);
    c.budget -= 1;
L_0014BA5C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014BA70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 17952u);  c.pc = t; return; }
L_0014BA80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BA9Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0014BA9Cu) [[unlikely]] return; }
L_0014BA9C:
    set32(c.r[7], ld32((c.r[28].w[0] - 28972u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BAB4u); set32(c.r[6], c.r[6].w[0] + 18016u);  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x0014BAB4u) [[unlikely]] return; }
L_0014BAB4:
    set32(c.r[3], ld32((c.r[28].w[0] - 28972u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[28].w[0] - 28972u), c.r[3].w[0]);  if (t) { goto L_0014BAD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[29].w[0] + 56u)));  if (t) { goto L_0014BAD8; } }
L_0014BAD4:
    set32(c.r[7], c.r[29].w[0] + 49u);
    c.budget -= 1;
L_0014BAD8:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BAF0u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0014BAF0u) [[unlikely]] return; }
L_0014BAF0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BB00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0014BB00u) [[unlikely]] return; }
L_0014BB00:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0014BB20:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[6], c.r[6].w[0] + 18043u);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[7], 0u + 10u);
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BB58u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 430u, depth + 1u); else { c.pc = 0x00133EC0u; return; } if (c.pc != 0x0014BB58u) [[unlikely]] return; }
L_0014BB58:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BB68u); set32(c.r[5], c.r[5].w[0] + 18045u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0014BB68u) [[unlikely]] return; }
L_0014BB68:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_0014BB84; }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BB7Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x0014BB7Cu) [[unlikely]] return; }
L_0014BB7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0014BC60; } }
L_0014BB84:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BB90u); set32(c.r[5], c.r[5].w[0] + 18050u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0014BB90u) [[unlikely]] return; }
L_0014BB90:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], 0u + 32u);  goto L_0014BBD0; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BBA8u); set32(c.r[5], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_0004(c, 241u, depth + 1u); else { c.pc = 0x00112E00u; return; } if (c.pc != 0x0014BBA8u) [[unlikely]] return; }
L_0014BBA8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 156u)));  goto L_0014BBD0; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0014BBCC; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BBCCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 239u, depth + 1u); else { c.pc = 0x00112DA0u; return; } if (c.pc != 0x0014BBCCu) [[unlikely]] return; }
L_0014BBCC:
    set32(c.r[16], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 1;
L_0014BBD0:
    set32(c.r[4], 0u + 116u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BBE0u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0014BBE0u) [[unlikely]] return; }
L_0014BBE0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0014BC3C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BBFCu); set32(c.r[5], c.r[5].w[0] + 18045u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0014BBFCu) [[unlikely]] return; }
L_0014BBFC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BC08u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x0014BC08u) [[unlikely]] return; }
L_0014BC08:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[17], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[29].w[0] + 80u);  if (t) { goto L_0014BC24; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 88u)));  if (t) { goto L_0014BC28; } }
L_0014BC24:
    set32(c.r[6], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0014BC28:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BC38u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 17u, depth + 1u); else { c.pc = 0x0014C290u; return; } if (c.pc != 0x0014BC38u) [[unlikely]] return; }
L_0014BC38:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0014BC3C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 96u);  goto L_0014BC54; }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BC50u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0014BC50u) [[unlikely]] return; }
L_0014BC50:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 1;
L_0014BC54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BC5Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x0014BC5Cu) [[unlikely]] return; }
L_0014BC5C:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0014BC60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0014BC80:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], c.r[17].w[0] + 52u);
    st32((c.r[29].w[0] + 68u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BCA4u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 464u, depth + 1u); else { c.pc = 0x0014B860u; return; } if (c.pc != 0x0014BCA4u) [[unlikely]] return; }
L_0014BCA4:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 72u));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 68u)));  goto L_0014BCFC; }
    set32(c.r[4], c.r[29].w[0] + 92u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BCBCu); set32(c.r[5], c.r[17].w[0] + 56u);  if (depth < kMaxDepth) unit_0013(c, 42u, depth + 1u); else { c.pc = 0x0014C530u; return; } if (c.pc != 0x0014BCBCu) [[unlikely]] return; }
L_0014BCBC:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[4], c.r[29].w[0] + 92u);
    set32(c.r[5], 0u - 1u);
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[6], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], ld32((c.r[6].w[0] + 88u)));
    set32(c.r[16], ld32((c.r[6].w[0] + 84u)));
    st32((c.r[29].w[0] + 68u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    st32((c.r[6].w[0] + 84u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BCF8u); st32((c.r[17].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0013(c, 39u, depth + 1u); else { c.pc = 0x0014C4D0u; return; } if (c.pc != 0x0014BCF8u) [[unlikely]] return; }
L_0014BCF8:
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 1;
L_0014BCFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 84u), c.r[3].w[0]);  if (t) { goto L_0014BD98; } }
L_0014BD04:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0014BD20; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BD18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 67u, depth + 1u); else { c.pc = 0x00138E10u; return; } if (c.pc != 0x0014BD18u) [[unlikely]] return; }
L_0014BD18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 52u);  if (t) { goto L_0014BD2C; } }
L_0014BD20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BD28u);  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x0014BD28u) [[unlikely]] return; }
L_0014BD28:
    set32(c.r[4], c.r[17].w[0] + 52u);
    c.budget -= 1;
L_0014BD2C:
    st32((c.r[29].w[0] + 60u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BD38u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0012(c, 464u, depth + 1u); else { c.pc = 0x0014B860u; return; } if (c.pc != 0x0014BD38u) [[unlikely]] return; }
L_0014BD38:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 72u));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 60u)));  goto L_0014BD90; }
    set32(c.r[4], c.r[29].w[0] + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BD50u); set32(c.r[5], c.r[17].w[0] + 56u);  if (depth < kMaxDepth) unit_0013(c, 42u, depth + 1u); else { c.pc = 0x0014C530u; return; } if (c.pc != 0x0014BD50u) [[unlikely]] return; }
L_0014BD50:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[4], c.r[29].w[0] + 88u);
    set32(c.r[5], 0u - 1u);
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[6], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], ld32((c.r[6].w[0] + 88u)));
    set32(c.r[16], ld32((c.r[6].w[0] + 84u)));
    st32((c.r[29].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    st32((c.r[6].w[0] + 84u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BD8Cu); st32((c.r[17].w[0] + 76u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0013(c, 39u, depth + 1u); else { c.pc = 0x0014C4D0u; return; } if (c.pc != 0x0014BD8Cu) [[unlikely]] return; }
L_0014BD8C:
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 1;
L_0014BD90:
    st32((c.r[29].w[0] + 76u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 84u), c.r[3].w[0]);
    c.budget -= 2;
L_0014BD98:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 84u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0014BD04u | kUnwind; return; } goto L_0014BD04; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0014BDC0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BDDCu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 36u, depth + 1u); else { c.pc = 0x00138A30u; return; } if (c.pc != 0x0014BDDCu) [[unlikely]] return; }
L_0014BDDC:
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[16].w[0] + 36u);
    set32(c.r[5], c.r[5].w[0] + 18050u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BDF4u); st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0008(c, 148u, depth + 1u); else { c.pc = 0x00121220u; return; } if (c.pc != 0x0014BDF4u) [[unlikely]] return; }
L_0014BDF4:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0014BE34; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] + 18050u);
    set32(c.r[6], c.r[29].w[0] + 92u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BE14u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_0012(c, 517u, depth + 1u); else { c.pc = 0x0014BED0u; return; } if (c.pc != 0x0014BE14u) [[unlikely]] return; }
L_0014BE14:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BE20u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0014BE20u) [[unlikely]] return; }
L_0014BE20:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BE2Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0014BE2Cu) [[unlikely]] return; }
L_0014BE2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0014BE44; } }
L_0014BE34:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BE40u); set32(c.r[6], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_0012(c, 515u, depth + 1u); else { c.pc = 0x0014BE60u; return; } if (c.pc != 0x0014BE40u) [[unlikely]] return; }
L_0014BE40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0014BE44:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0014BE60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], c.r[5].w[0] << 5);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], 0u + 4u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[16], ld32((c.r[6].w[0])));
    set32(c.r[17], c.r[4].w[0] + c.r[5].w[0]);
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], c.r[17].w[0] + 4u);
    c.budget -= 14;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 20u)));  goto L_0014BEAC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BEA0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0014BEA0u) [[unlikely]] return; }
L_0014BEA0:
    set32(c.r[3], c.r[17].w[0] + 4u);
    st32((c.r[17].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
L_0014BEAC:
    st32((c.r[3].w[0]), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0014BED0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BEF8u); c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x0014BEF8u) [[unlikely]] return; }
L_0014BEF8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], c.r[18].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    st16((c.r[18].w[0] + 24u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 4u);
    st32((c.r[18].w[0] + 20u), c.r[5].w[0]);
    set32(c.r[16], ld32((c.r[16].w[0])));
    st16((c.r[18].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 12;
    if (c.r[4].d[0] == c.r[5].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 20u)));  goto L_0014BF3C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BF30u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0014BF30u) [[unlikely]] return; }
L_0014BF30:
    set32(c.r[2], c.r[18].w[0] + 4u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
L_0014BF3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[3].w[0]), c.r[16].w[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0014BF64u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0014BF64u) [[unlikely]] return; }
L_0014BF64:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0014BF80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014BF90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014BFA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0014BFB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014BFC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 48u)));  c.pc = t; return; }
L_0014BFD0:
    set32(c.r[3], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[7], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[7].w[0] + c.r[3].w[0]);  if (t) { [[clang::musttail]] return unit_0013(c, 2u, depth); } }
L_0014BFE8:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] << 32;  [[clang::musttail]] return unit_0013(c, 1u, depth); }
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 2;
    [[clang::musttail]] return unit_0013(c, 1u, depth);
}

}
