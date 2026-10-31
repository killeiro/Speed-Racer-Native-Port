#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0100[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0,
    5, 0, 6, 0, 0, 0, 0, 7, 0, 8, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0,
    0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0,
    28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 32, 0, 33, 0, 0, 0, 0, 34, 0,
    0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0,
    41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50,
    0, 0, 0, 51, 0, 52, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 59,
    0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 63, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0,
    0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 71, 0, 72, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80,
    0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0,
    85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0,
    0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 98, 0, 99, 0, 0,
    0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0,
    0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0,
    122, 0, 0, 123, 0, 0, 0, 124, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0,
    130, 0, 0, 0, 131, 0, 0, 132, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0,
    0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0,
    148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0,
    0, 153, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 165,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 172, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0,
    176, 0, 0, 177, 0, 0, 178, 0, 179, 0, 0, 0, 180, 0, 0, 181, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    184, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 187, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0,
    0, 192, 0, 0, 193, 0, 194, 0, 0, 0, 195, 0, 0, 196, 0, 197, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0,
    200, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 214, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 218, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0,
    0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0, 227, 0, 0, 0, 0, 228,
    0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0,
    0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0,
    0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0,
    257, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 263,
    0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0,
    272, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0,
    0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 289,
    0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0,
    0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297,
    0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0,
    0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0,
    305, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 309, 0, 0, 310, 0, 0, 311, 0, 0, 312, 0, 0, 313, 0, 0, 314, 0, 0, 315, 0, 0, 316, 0, 0, 317, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0,
    320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 323,
    0, 0, 324, 0, 0, 325, 0, 0, 326, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 337, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 344,
    0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0,
    350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    351, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 357,
    0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0,
    0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 367, 0,
    0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372,
    0, 373, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0,
    0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0,
    383, 0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0,
    0, 389, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 393, 0, 0,
    0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    395, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 401,
    0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0,
    0, 0, 0, 0, 410, 0, 0, 0, 0, 411, 0, 0, 412, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0,
    0, 415, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0,
    421, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 425, 0, 426, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 0, 0, 431, 0, 0, 0,
    0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0,
    0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 439, 0, 0, 440, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0,
    0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0,
    0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0,
    451, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 454, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 456, 0, 457, 0, 0, 0, 0, 0, 0, 458, 0, 459, 0,
    0, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0, 462, 0, 463, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 465, 0, 0, 0, 0, 0, 0, 466,
    0, 467, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0,
    471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 473, 0, 474, 0, 0, 0, 0, 0, 0, 475, 0, 476, 0, 0, 0, 0, 0,
    477, 0, 0, 0, 478, 0, 0, 479, 0, 480, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 483, 0, 484, 0, 485, 0, 0, 0, 0, 0, 0, 486, 0, 487, 0, 0, 0, 0, 0, 488, 0, 0, 0, 489, 0, 0, 490, 0, 491, 0, 0,
};

void unit_0100(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00500000;
    case 2u: goto L_00500054;
    case 3u: goto L_0050006C;
    case 4u: goto L_00500078;
    case 5u: goto L_00500080;
    case 6u: goto L_00500088;
    case 7u: goto L_0050009C;
    case 8u: goto L_005000A4;
    case 9u: goto L_005000B4;
    case 10u: goto L_005000C0;
    case 11u: goto L_00500134;
    case 12u: goto L_00500180;
    case 13u: goto L_005001A8;
    case 14u: goto L_005001BC;
    case 15u: goto L_005001C8;
    case 16u: goto L_005001DC;
    case 17u: goto L_00500214;
    case 18u: goto L_0050023C;
    case 19u: goto L_00500270;
    case 20u: goto L_00500290;
    case 21u: goto L_005002B8;
    case 22u: goto L_005002D4;
    case 23u: goto L_005002E0;
    case 24u: goto L_00500318;
    case 25u: goto L_00500324;
    case 26u: goto L_0050033C;
    case 27u: goto L_00500360;
    case 28u: goto L_00500380;
    case 29u: goto L_005003A8;
    case 30u: goto L_005003BC;
    case 31u: goto L_005003CC;
    case 32u: goto L_005003DC;
    case 33u: goto L_005003E4;
    case 34u: goto L_005003F8;
    case 35u: goto L_0050040C;
    case 36u: goto L_00500434;
    case 37u: goto L_00500440;
    case 38u: goto L_00500454;
    case 39u: goto L_00500468;
    case 40u: goto L_00500474;
    case 41u: goto L_00500480;
    case 42u: goto L_0050049C;
    case 43u: goto L_005004A8;
    case 44u: goto L_005004B4;
    case 45u: goto L_005004C0;
    case 46u: goto L_005004E0;
    case 47u: goto L_00500508;
    case 48u: goto L_0050051C;
    case 49u: goto L_00500540;
    case 50u: goto L_0050057C;
    case 51u: goto L_0050058C;
    case 52u: goto L_00500594;
    case 53u: goto L_005005A4;
    case 54u: goto L_005005AC;
    case 55u: goto L_005005C0;
    case 56u: goto L_005005D0;
    case 57u: goto L_005005E0;
    case 58u: goto L_005005F0;
    case 59u: goto L_005005FC;
    case 60u: goto L_00500608;
    case 61u: goto L_0050061C;
    case 62u: goto L_0050062C;
    case 63u: goto L_00500638;
    case 64u: goto L_00500640;
    case 65u: goto L_0050064C;
    case 66u: goto L_00500664;
    case 67u: goto L_00500670;
    case 68u: goto L_00500688;
    case 69u: goto L_005006A0;
    case 70u: goto L_005006A8;
    case 71u: goto L_005006B4;
    case 72u: goto L_005006BC;
    case 73u: goto L_005006C8;
    case 74u: goto L_005006D4;
    case 75u: goto L_005006E8;
    case 76u: goto L_005006F8;
    case 77u: goto L_00500738;
    case 78u: goto L_00500750;
    case 79u: goto L_0050076C;
    case 80u: goto L_0050077C;
    case 81u: goto L_0050078C;
    case 82u: goto L_005007A0;
    case 83u: goto L_005007BC;
    case 84u: goto L_005007E4;
    case 85u: goto L_00500800;
    case 86u: goto L_00500820;
    case 87u: goto L_00500868;
    case 88u: goto L_00500878;
    case 89u: goto L_0050088C;
    case 90u: goto L_0050089C;
    case 91u: goto L_005008B0;
    case 92u: goto L_005008C4;
    case 93u: goto L_00500900;
    case 94u: goto L_00500918;
    case 95u: goto L_00500940;
    case 96u: goto L_0050094C;
    case 97u: goto L_00500960;
    case 98u: goto L_0050096C;
    case 99u: goto L_00500974;
    case 100u: goto L_00500988;
    case 101u: goto L_00500998;
    case 102u: goto L_005009B0;
    case 103u: goto L_005009BC;
    case 104u: goto L_005009C8;
    case 105u: goto L_005009F0;
    case 106u: goto L_00500A18;
    case 107u: goto L_00500A50;
    case 108u: goto L_00500A8C;
    case 109u: goto L_00500AA0;
    case 110u: goto L_00500AD4;
    case 111u: goto L_00500AE4;
    case 112u: goto L_00500B78;
    case 113u: goto L_00500BA0;
    case 114u: goto L_00500BE0;
    case 115u: goto L_00500C44;
    case 116u: goto L_00500C6C;
    case 117u: goto L_00500C88;
    case 118u: goto L_00500CC4;
    case 119u: goto L_00500CD4;
    case 120u: goto L_00500CDC;
    case 121u: goto L_00500CEC;
    case 122u: goto L_00500D00;
    case 123u: goto L_00500D0C;
    case 124u: goto L_00500D1C;
    case 125u: goto L_00500D28;
    case 126u: goto L_00500D30;
    case 127u: goto L_00500D4C;
    case 128u: goto L_00500D54;
    case 129u: goto L_00500D74;
    case 130u: goto L_00500D80;
    case 131u: goto L_00500D90;
    case 132u: goto L_00500D9C;
    case 133u: goto L_00500DA4;
    case 134u: goto L_00500DB0;
    case 135u: goto L_00500E20;
    case 136u: goto L_00500E44;
    case 137u: goto L_00500E50;
    case 138u: goto L_00500E80;
    case 139u: goto L_00500EA8;
    case 140u: goto L_00500EC0;
    case 141u: goto L_00500EE0;
    case 142u: goto L_00500EF0;
    case 143u: goto L_00500F10;
    case 144u: goto L_00500F28;
    case 145u: goto L_00500F50;
    case 146u: goto L_00500F60;
    case 147u: goto L_00500F70;
    case 148u: goto L_00500F80;
    case 149u: goto L_00500F90;
    case 150u: goto L_00500FC4;
    case 151u: goto L_00500FD4;
    case 152u: goto L_00500FF0;
    case 153u: goto L_00501004;
    case 154u: goto L_00501014;
    case 155u: goto L_00501024;
    case 156u: goto L_00501030;
    case 157u: goto L_0050106C;
    case 158u: goto L_005010B0;
    case 159u: goto L_005010BC;
    case 160u: goto L_00501110;
    case 161u: goto L_00501138;
    case 162u: goto L_0050116C;
    case 163u: goto L_00501174;
    case 164u: goto L_005011F0;
    case 165u: goto L_005011FC;
    case 166u: goto L_00501250;
    case 167u: goto L_005012B0;
    case 168u: goto L_005012C0;
    case 169u: goto L_00501308;
    case 170u: goto L_0050131C;
    case 171u: goto L_00501328;
    case 172u: goto L_00501334;
    case 173u: goto L_0050133C;
    case 174u: goto L_0050134C;
    case 175u: goto L_0050136C;
    case 176u: goto L_00501380;
    case 177u: goto L_0050138C;
    case 178u: goto L_00501398;
    case 179u: goto L_005013A0;
    case 180u: goto L_005013B0;
    case 181u: goto L_005013BC;
    case 182u: goto L_005013C4;
    case 183u: goto L_005013D4;
    case 184u: goto L_00501400;
    case 185u: goto L_00501414;
    case 186u: goto L_00501420;
    case 187u: goto L_0050142C;
    case 188u: goto L_00501434;
    case 189u: goto L_00501444;
    case 190u: goto L_00501464;
    case 191u: goto L_00501478;
    case 192u: goto L_00501484;
    case 193u: goto L_00501490;
    case 194u: goto L_00501498;
    case 195u: goto L_005014A8;
    case 196u: goto L_005014B4;
    case 197u: goto L_005014BC;
    case 198u: goto L_005014CC;
    case 199u: goto L_005014DC;
    case 200u: goto L_00501500;
    case 201u: goto L_00501514;
    case 202u: goto L_00501520;
    case 203u: goto L_00501530;
    case 204u: goto L_00501540;
    case 205u: goto L_00501550;
    case 206u: goto L_00501580;
    case 207u: goto L_005015C8;
    case 208u: goto L_005015D0;
    case 209u: goto L_00501610;
    case 210u: goto L_00501640;
    case 211u: goto L_0050169C;
    case 212u: goto L_005016D0;
    case 213u: goto L_00501728;
    case 214u: goto L_00501730;
    case 215u: goto L_0050173C;
    case 216u: goto L_00501794;
    case 217u: goto L_005017D0;
    case 218u: goto L_00501814;
    case 219u: goto L_00501818;
    case 220u: goto L_00501850;
    case 221u: goto L_00501870;
    case 222u: goto L_00501894;
    case 223u: goto L_005018A4;
    case 224u: goto L_005018B8;
    case 225u: goto L_005018D4;
    case 226u: goto L_005018E0;
    case 227u: goto L_005018E8;
    case 228u: goto L_005018FC;
    case 229u: goto L_00501914;
    case 230u: goto L_00501930;
    case 231u: goto L_00501954;
    case 232u: goto L_00501960;
    case 233u: goto L_00501974;
    case 234u: goto L_00501988;
    case 235u: goto L_005019C0;
    case 236u: goto L_005019DC;
    case 237u: goto L_005019F8;
    case 238u: goto L_00501A28;
    case 239u: goto L_00501A40;
    case 240u: goto L_00501A5C;
    case 241u: goto L_00501A68;
    case 242u: goto L_00501AAC;
    case 243u: goto L_00501AC4;
    case 244u: goto L_00501AD0;
    case 245u: goto L_00501B18;
    case 246u: goto L_00501B28;
    case 247u: goto L_00501B38;
    case 248u: goto L_00501B5C;
    case 249u: goto L_00501B84;
    case 250u: goto L_00501B9C;
    case 251u: goto L_00501BA8;
    case 252u: goto L_00501BC0;
    case 253u: goto L_00501BF4;
    case 254u: goto L_00501C0C;
    case 255u: goto L_00501C3C;
    case 256u: goto L_00501C74;
    case 257u: goto L_00501C80;
    case 258u: goto L_00501C8C;
    case 259u: goto L_00501CA8;
    case 260u: goto L_00501CC4;
    case 261u: goto L_00501CCC;
    case 262u: goto L_00501CE0;
    case 263u: goto L_00501CFC;
    case 264u: goto L_00501D04;
    case 265u: goto L_00501D18;
    case 266u: goto L_00501D40;
    case 267u: goto L_00501D90;
    case 268u: goto L_00501DA8;
    case 269u: goto L_00501DC0;
    case 270u: goto L_00501DD0;
    case 271u: goto L_00501DE8;
    case 272u: goto L_00501E00;
    case 273u: goto L_00501E0C;
    case 274u: goto L_00501E20;
    case 275u: goto L_00501EA0;
    case 276u: goto L_00501EE0;
    case 277u: goto L_00501F08;
    case 278u: goto L_00502130;
    case 279u: goto L_005021C4;
    case 280u: goto L_00502258;
    case 281u: goto L_005022CC;
    case 282u: goto L_00502340;
    case 283u: goto L_00502354;
    case 284u: goto L_00502370;
    case 285u: goto L_00502384;
    case 286u: goto L_005023F8;
    case 287u: goto L_005024D0;
    case 288u: goto L_00502558;
    case 289u: goto L_0050257C;
    case 290u: goto L_00502598;
    case 291u: goto L_005025B8;
    case 292u: goto L_005025D8;
    case 293u: goto L_005025E8;
    case 294u: goto L_00502604;
    case 295u: goto L_00502618;
    case 296u: goto L_00502628;
    case 297u: goto L_0050267C;
    case 298u: goto L_005026A0;
    case 299u: goto L_005026CC;
    case 300u: goto L_005026F0;
    case 301u: goto L_0050270C;
    case 302u: goto L_00502734;
    case 303u: goto L_00502760;
    case 304u: goto L_00502770;
    case 305u: goto L_00502780;
    case 306u: goto L_00502790;
    case 307u: goto L_005027A8;
    case 308u: goto L_005027C0;
    case 309u: goto L_0050280C;
    case 310u: goto L_00502818;
    case 311u: goto L_00502824;
    case 312u: goto L_00502830;
    case 313u: goto L_0050283C;
    case 314u: goto L_00502848;
    case 315u: goto L_00502854;
    case 316u: goto L_00502860;
    case 317u: goto L_0050286C;
    case 318u: goto L_005028A4;
    case 319u: goto L_005028EC;
    case 320u: goto L_00502900;
    case 321u: goto L_00502938;
    case 322u: goto L_00502970;
    case 323u: goto L_0050297C;
    case 324u: goto L_00502988;
    case 325u: goto L_00502994;
    case 326u: goto L_005029A0;
    case 327u: goto L_005029AC;
    case 328u: goto L_00502BD8;
    case 329u: goto L_00502C6C;
    case 330u: goto L_00502D00;
    case 331u: goto L_00502D7C;
    case 332u: goto L_00502DD0;
    case 333u: goto L_00502DD8;
    case 334u: goto L_00502E20;
    case 335u: goto L_00502E2C;
    case 336u: goto L_00502E70;
    case 337u: goto L_00502E78;
    case 338u: goto L_00502EB0;
    case 339u: goto L_00502EB8;
    case 340u: goto L_00502EF0;
    case 341u: goto L_00502F24;
    case 342u: goto L_00502F3C;
    case 343u: goto L_00502F60;
    case 344u: goto L_00502F7C;
    case 345u: goto L_00502FA0;
    case 346u: goto L_00502FC4;
    case 347u: goto L_00502FD8;
    case 348u: goto L_00503084;
    case 349u: goto L_005030F0;
    case 350u: goto L_00503100;
    case 351u: goto L_00503180;
    case 352u: goto L_00503190;
    case 353u: goto L_005031AC;
    case 354u: goto L_005031C0;
    case 355u: goto L_005031D0;
    case 356u: goto L_005031EC;
    case 357u: goto L_005031FC;
    case 358u: goto L_00503218;
    case 359u: goto L_0050322C;
    case 360u: goto L_0050323C;
    case 361u: goto L_00503250;
    case 362u: goto L_00503270;
    case 363u: goto L_0050328C;
    case 364u: goto L_0050329C;
    case 365u: goto L_005032C8;
    case 366u: goto L_005032E8;
    case 367u: goto L_005032F8;
    case 368u: goto L_00503314;
    case 369u: goto L_00503328;
    case 370u: goto L_00503338;
    case 371u: goto L_00503344;
    case 372u: goto L_0050337C;
    case 373u: goto L_00503384;
    case 374u: goto L_00503390;
    case 375u: goto L_005033C0;
    case 376u: goto L_005033E0;
    case 377u: goto L_005033F0;
    case 378u: goto L_0050340C;
    case 379u: goto L_00503420;
    case 380u: goto L_00503430;
    case 381u: goto L_00503454;
    case 382u: goto L_00503464;
    case 383u: goto L_00503480;
    case 384u: goto L_00503494;
    case 385u: goto L_005034A4;
    case 386u: goto L_005034C0;
    case 387u: goto L_005034D0;
    case 388u: goto L_005034EC;
    case 389u: goto L_00503504;
    case 390u: goto L_00503514;
    case 391u: goto L_00503540;
    case 392u: goto L_0050355C;
    case 393u: goto L_00503574;
    case 394u: goto L_00503588;
    case 395u: goto L_00503600;
    case 396u: goto L_00503610;
    case 397u: goto L_0050362C;
    case 398u: goto L_00503640;
    case 399u: goto L_00503650;
    case 400u: goto L_0050366C;
    case 401u: goto L_0050367C;
    case 402u: goto L_00503698;
    case 403u: goto L_005036B0;
    case 404u: goto L_005036C0;
    case 405u: goto L_005036E0;
    case 406u: goto L_0050370C;
    case 407u: goto L_00503738;
    case 408u: goto L_00503760;
    case 409u: goto L_00503774;
    case 410u: goto L_00503790;
    case 411u: goto L_005037A4;
    case 412u: goto L_005037B0;
    case 413u: goto L_005037C8;
    case 414u: goto L_005037E4;
    case 415u: goto L_00503804;
    case 416u: goto L_00503814;
    case 417u: goto L_00503830;
    case 418u: goto L_00503844;
    case 419u: goto L_00503854;
    case 420u: goto L_00503870;
    case 421u: goto L_00503880;
    case 422u: goto L_0050389C;
    case 423u: goto L_005038B0;
    case 424u: goto L_005038C0;
    case 425u: goto L_005038DC;
    case 426u: goto L_005038E4;
    case 427u: goto L_00503910;
    case 428u: goto L_00503934;
    case 429u: goto L_0050394C;
    case 430u: goto L_0050395C;
    case 431u: goto L_00503970;
    case 432u: goto L_00503994;
    case 433u: goto L_005039B0;
    case 434u: goto L_005039C0;
    case 435u: goto L_005039E0;
    case 436u: goto L_00503A30;
    case 437u: goto L_00503A70;
    case 438u: goto L_00503A84;
    case 439u: goto L_00503B08;
    case 440u: goto L_00503B14;
    case 441u: goto L_00503B30;
    case 442u: goto L_00503B6C;
    case 443u: goto L_00503B8C;
    case 444u: goto L_00503BB0;
    case 445u: goto L_00503BCC;
    case 446u: goto L_00503BF0;
    case 447u: goto L_00503C10;
    case 448u: goto L_00503C34;
    case 449u: goto L_00503C50;
    case 450u: goto L_00503C64;
    case 451u: goto L_00503C80;
    case 452u: goto L_00503C90;
    case 453u: goto L_00503CE4;
    case 454u: goto L_00503CF8;
    case 455u: goto L_00503D44;
    case 456u: goto L_00503D4C;
    case 457u: goto L_00503D54;
    case 458u: goto L_00503D70;
    case 459u: goto L_00503D78;
    case 460u: goto L_00503D90;
    case 461u: goto L_00503DA0;
    case 462u: goto L_00503DAC;
    case 463u: goto L_00503DB4;
    case 464u: goto L_00503DD4;
    case 465u: goto L_00503DE0;
    case 466u: goto L_00503DFC;
    case 467u: goto L_00503E04;
    case 468u: goto L_00503E1C;
    case 469u: goto L_00503E3C;
    case 470u: goto L_00503E60;
    case 471u: goto L_00503E80;
    case 472u: goto L_00503EB4;
    case 473u: goto L_00503EBC;
    case 474u: goto L_00503EC4;
    case 475u: goto L_00503EE0;
    case 476u: goto L_00503EE8;
    case 477u: goto L_00503F00;
    case 478u: goto L_00503F10;
    case 479u: goto L_00503F1C;
    case 480u: goto L_00503F24;
    case 481u: goto L_00503F44;
    case 482u: goto L_00503F50;
    case 483u: goto L_00503F84;
    case 484u: goto L_00503F8C;
    case 485u: goto L_00503F94;
    case 486u: goto L_00503FB0;
    case 487u: goto L_00503FB8;
    case 488u: goto L_00503FD0;
    case 489u: goto L_00503FE0;
    case 490u: goto L_00503FEC;
    case 491u: goto L_00503FF4;
    default: bad_entry(c, 0x00500000u); return;
    }
L_00500000:
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 26156u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[18], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[29].w[0] + 168u), 0u);
    st32((c.r[29].w[0] + 172u), 0u);
    st32((c.r[29].w[0] + 176u), 0u);
    st32((c.r[29].w[0] + 180u), 0u);
    st32((c.r[29].w[0] + 184u), 0u);
    st32((c.r[29].w[0] + 188u), 0u);
    st32((c.r[29].w[0] + 192u), 0u);
    st32((c.r[29].w[0] + 196u), 0u);
    st32((c.r[29].w[0] + 200u), 0u);
    st32((c.r[29].w[0] + 204u), 0u);
    st32((c.r[29].w[0] + 208u), 0u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500054u); st32((c.r[29].w[0] + 212u), 0u);  if (depth < kMaxDepth) unit_00CF(c, 87u, depth + 1u); else { c.pc = 0x0043CED0u; return; } if (c.pc != 0x00500054u) [[unlikely]] return; }
L_00500054:
    set32(c.r[17], ld32((c.r[17].w[0] + 444u)));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 144u);  goto L_005000B8; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050006Cu); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_00F8(c, 261u, depth + 1u); else { c.pc = 0x004E3870u; return; } if (c.pc != 0x0050006Cu) [[unlikely]] return; }
L_0050006C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500078u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_00CF(c, 91u, depth + 1u); else { c.pc = 0x0043CF10u; return; } if (c.pc != 0x00500078u) [[unlikely]] return; }
L_00500078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500080u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0100(c, 19u, depth + 1u); else { c.pc = 0x00500270u; return; } if (c.pc != 0x00500080u) [[unlikely]] return; }
L_00500080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500088u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 232u, depth + 1u); else { c.pc = 0x00129E30u; return; } if (c.pc != 0x00500088u) [[unlikely]] return; }
L_00500088:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_005000B4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050009Cu); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_00FE(c, 45u, depth + 1u); else { c.pc = 0x004F84D0u; return; } if (c.pc != 0x0050009Cu) [[unlikely]] return; }
L_0050009C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005000A4u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_002F(c, 118u, depth + 1u); else { c.pc = 0x001BDBC0u; return; } if (c.pc != 0x005000A4u) [[unlikely]] return; }
L_005000A4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005000B4u); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_00F8(c, 260u, depth + 1u); else { c.pc = 0x004E3560u; return; } if (c.pc != 0x005000B4u) [[unlikely]] return; }
L_005000B4:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 1;
L_005000B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005000C0u);  if (depth < kMaxDepth) unit_00CF(c, 86u, depth + 1u); else { c.pc = 0x0043CB70u; return; } if (c.pc != 0x005000C0u) [[unlikely]] return; }
L_005000C0:
    set32(c.r[3], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[2], 0u - 33u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[22].d[0] == 0ull; st32((c.r[29].w[0] + 144u), c.r[3].w[0]);  if (t) { goto L_005000E0; } }
    set32(c.r[2], 0u - 17u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    c.budget -= 3;
L_005000E0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 22392u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[28].w[0] - 26896u)));  goto L_00500110; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[2].w[0] - 1296u), 0u);
    st32((c.r[3].w[0] - 1292u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] - 1284u), 0u);
    st8((c.r[28].w[0] - 22392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 26896u)));
    c.budget -= 9;
L_00500110:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], ld32((c.r[5].w[0] + 48u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 312u)));
    st32((c.r[3].w[0] - 1296u), c.r[5].w[0]);
    st32((c.r[2].w[0] - 1292u), c.r[4].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500134u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_002F(c, 118u, depth + 1u); else { c.pc = 0x001BDBC0u; return; } if (c.pc != 0x00500134u) [[unlikely]] return; }
L_00500134:
    set32(c.r[3], c.r[2].w[0] + 308u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[2].w[0] - 1288u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    st32((c.r[2].w[0] - 1284u), c.r[23].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 1296u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_005001A8; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u - 11u);
    set32(c.r[6], c.r[6].w[0] + 656u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[8].w[0] - 1296u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500180u); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_00C7(c, 321u, depth + 1u); else { c.pc = 0x0041EE00u; return; } if (c.pc != 0x00500180u) [[unlikely]] return; }
L_00500180:
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 656u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[8].w[0] - 1296u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005001A8u); set32(c.r[10], 0u + 1u);  if (depth < kMaxDepth) unit_00C7(c, 321u, depth + 1u); else { c.pc = 0x0041EE00u; return; } if (c.pc != 0x005001A8u) [[unlikely]] return; }
L_005001A8:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0])));  goto L_005001C0; }
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005001BCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FD(c, 586u, depth + 1u); else { c.pc = 0x004F7C00u; return; } if (c.pc != 0x005001BCu) [[unlikely]] return; }
L_005001BC:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_005001C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005001C8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 169u, depth + 1u); else { c.pc = 0x00425370u; return; } if (c.pc != 0x005001C8u) [[unlikely]] return; }
L_005001C8:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_005001DC; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005001DCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FD(c, 582u, depth + 1u); else { c.pc = 0x004F7BA0u; return; } if (c.pc != 0x005001DCu) [[unlikely]] return; }
L_005001DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 1296u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  goto L_00500240; }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u - 11u);
    set32(c.r[6], c.r[6].w[0] + 656u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], c.r[8].w[0] - 1296u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500214u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 321u, depth + 1u); else { c.pc = 0x0041EE00u; return; } if (c.pc != 0x00500214u) [[unlikely]] return; }
L_00500214:
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 656u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], c.r[8].w[0] - 1296u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050023Cu); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C7(c, 321u, depth + 1u); else { c.pc = 0x0041EE00u; return; } if (c.pc != 0x0050023Cu) [[unlikely]] return; }
L_0050023C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_00500240:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_00500270:
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_00500290:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u - 11u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[3].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_005002C0; } }
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005002B8u); set32(c.r[4], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_0102(c, 342u, depth + 1u); else { c.pc = 0x0050B660u; return; } if (c.pc != 0x005002B8u) [[unlikely]] return; }
L_005002B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_005002D8; } }
L_005002C0:
    set32(c.r[5], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005002D4u); set32(c.r[4], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_0102(c, 292u, depth + 1u); else { c.pc = 0x0050A020u; return; } if (c.pc != 0x005002D4u) [[unlikely]] return; }
L_005002D4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_005002D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005002E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0050033C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  goto L_0050031C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00500318u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00500318u) [[unlikely]] return; }
L_00500318:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_0050031C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500324u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00FE(c, 47u, depth + 1u); else { c.pc = 0x004F8650u; return; } if (c.pc != 0x00500324u) [[unlikely]] return; }
L_00500324:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00500340; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050033Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0050033Cu) [[unlikely]] return; }
L_0050033C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00500340:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00500360:
    st32((c.r[4].w[0]), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), 0u);  c.pc = t; return; }
L_00500380:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 192u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005003A8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x005003A8u) [[unlikely]] return; }
L_005003A8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[5].d[0] = c.r[17].d[0] + 0ull;  goto L_005003C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005003BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 170u, depth + 1u); else { c.pc = 0x0043DAC0u; return; } if (c.pc != 0x005003BCu) [[unlikely]] return; }
L_005003BC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_005003C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005003CCu); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000A(c, 387u, depth + 1u); else { c.pc = 0x0012B1E0u; return; } if (c.pc != 0x005003CCu) [[unlikely]] return; }
L_005003CC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005003DCu); set32(c.r[5], c.r[5].w[0] + 22452u);  if (depth < kMaxDepth) unit_000A(c, 355u, depth + 1u); else { c.pc = 0x0012AEF0u; return; } if (c.pc != 0x005003DCu) [[unlikely]] return; }
L_005003DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005003E4u); set32(c.r[4], c.r[29].w[0] + 216u);  if (depth < kMaxDepth) unit_000F(c, 46u, depth + 1u); else { c.pc = 0x0013C580u; return; } if (c.pc != 0x005003E4u) [[unlikely]] return; }
L_005003E4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 216u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005003F8u); set32(c.r[6], c.r[6].w[0] + 22470u);  if (depth < kMaxDepth) unit_000F(c, 23u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x005003F8u) [[unlikely]] return; }
L_005003F8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 96u);  goto L_00500448; }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050040Cu); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000A(c, 378u, depth + 1u); else { c.pc = 0x0012B100u; return; } if (c.pc != 0x0050040Cu) [[unlikely]] return; }
L_0050040C:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[29].w[0] + 81u);  goto L_00500420; }
    set32(c.r[7], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_00500420:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500434u); set32(c.r[6], c.r[6].w[0] + 22472u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00500434u) [[unlikely]] return; }
L_00500434:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500440u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00500440u) [[unlikely]] return; }
L_00500440:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 64u);  if (t) { goto L_00500478; } }
L_00500448:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500454u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0008(c, 433u, depth + 1u); else { c.pc = 0x00123580u; return; } if (c.pc != 0x00500454u) [[unlikely]] return; }
L_00500454:
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 216u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500468u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 13u, depth + 1u); else { c.pc = 0x001200F0u; return; } if (c.pc != 0x00500468u) [[unlikely]] return; }
L_00500468:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500474u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0008(c, 427u, depth + 1u); else { c.pc = 0x001234B0u; return; } if (c.pc != 0x00500474u) [[unlikely]] return; }
L_00500474:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 1;
L_00500478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500480u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000A(c, 378u, depth + 1u); else { c.pc = 0x0012B100u; return; } if (c.pc != 0x00500480u) [[unlikely]] return; }
L_00500480:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 65u);  goto L_00500494; }
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_00500494:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050049Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 90u, depth + 1u); else { c.pc = 0x0043CF00u; return; } if (c.pc != 0x0050049Cu) [[unlikely]] return; }
L_0050049C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005004A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x005004A8u) [[unlikely]] return; }
L_005004A8:
    set32(c.r[4], c.r[29].w[0] + 216u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005004B4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000F(c, 39u, depth + 1u); else { c.pc = 0x0013C460u; return; } if (c.pc != 0x005004B4u) [[unlikely]] return; }
L_005004B4:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005004C0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x005004C0u) [[unlikely]] return; }
L_005004C0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_005004E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500508u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00500508u) [[unlikely]] return; }
L_00500508:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050051Cu); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0100(c, 206u, depth + 1u); else { c.pc = 0x00501580u; return; } if (c.pc != 0x0050051Cu) [[unlikely]] return; }
L_0050051C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00500540:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 11;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_005007F4; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[17].w[0] + 196u));  goto L_005007A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050057Cu);  if (depth < kMaxDepth) unit_00B8(c, 119u, depth + 1u); else { c.pc = 0x003E0DC0u; return; } if (c.pc != 0x0050057Cu) [[unlikely]] return; }
L_0050057C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_005007A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050058Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 127u, depth + 1u); else { c.pc = 0x003E0EC0u; return; } if (c.pc != 0x0050058Cu) [[unlikely]] return; }
L_0050058C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500594u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 126u, depth + 1u); else { c.pc = 0x003E0EB0u; return; } if (c.pc != 0x00500594u) [[unlikely]] return; }
L_00500594:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_005007A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005005A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 127u, depth + 1u); else { c.pc = 0x003E0EC0u; return; } if (c.pc != 0x005005A4u) [[unlikely]] return; }
L_005005A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005005ACu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 126u, depth + 1u); else { c.pc = 0x003E0EB0u; return; } if (c.pc != 0x005005ACu) [[unlikely]] return; }
L_005005AC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 20496u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005005C0u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_00AE(c, 270u, depth + 1u); else { c.pc = 0x003BA6C0u; return; } if (c.pc != 0x005005C0u) [[unlikely]] return; }
L_005005C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_005007A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005005D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 104u, depth + 1u); else { c.pc = 0x003E4CE0u; return; } if (c.pc != 0x005005D0u) [[unlikely]] return; }
L_005005D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005005E0u); set32(c.r[4], c.r[4].w[0] + 20928u);  if (depth < kMaxDepth) unit_004E(c, 128u, depth + 1u); else { c.pc = 0x00239870u; return; } if (c.pc != 0x005005E0u) [[unlikely]] return; }
L_005005E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_005007A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005005F0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0100(c, 167u, depth + 1u); else { c.pc = 0x005012B0u; return; } if (c.pc != 0x005005F0u) [[unlikely]] return; }
L_005005F0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005005FCu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_003E(c, 299u, depth + 1u); else { c.pc = 0x001FA6A0u; return; } if (c.pc != 0x005005FCu) [[unlikely]] return; }
L_005005FC:
    set32(c.r[4], 0u + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500608u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00500608u) [[unlikely]] return; }
L_00500608:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00500624; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050061Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 448u, depth + 1u); else { c.pc = 0x002AB930u; return; } if (c.pc != 0x0050061Cu) [[unlikely]] return; }
L_0050061C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00500624:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050062Cu);  if (depth < kMaxDepth) unit_00B8(c, 127u, depth + 1u); else { c.pc = 0x003E0EC0u; return; } if (c.pc != 0x0050062Cu) [[unlikely]] return; }
L_0050062C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500638u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 166u, depth + 1u); else { c.pc = 0x002BD6C0u; return; } if (c.pc != 0x00500638u) [[unlikely]] return; }
L_00500638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500640u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 104u, depth + 1u); else { c.pc = 0x003E4CE0u; return; } if (c.pc != 0x00500640u) [[unlikely]] return; }
L_00500640:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050064Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 90u, depth + 1u); else { c.pc = 0x002F8750u; return; } if (c.pc != 0x0050064Cu) [[unlikely]] return; }
L_0050064C:
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[4], c.r[29].w[0] + 188u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00500664u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00500664u) [[unlikely]] return; }
L_00500664:
    set32(c.r[4], c.r[29].w[0] + 188u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500670u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_003D(c, 190u, depth + 1u); else { c.pc = 0x001F5900u; return; } if (c.pc != 0x00500670u) [[unlikely]] return; }
L_00500670:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00500688u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00500688u) [[unlikely]] return; }
L_00500688:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x005006A0u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x005006A0u) [[unlikely]] return; }
L_005006A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005006A8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_007E(c, 93u, depth + 1u); else { c.pc = 0x002F8790u; return; } if (c.pc != 0x005006A8u) [[unlikely]] return; }
L_005006A8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005006B4u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0100(c, 160u, depth + 1u); else { c.pc = 0x00501110u; return; } if (c.pc != 0x005006B4u) [[unlikely]] return; }
L_005006B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005006BCu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0087(c, 269u, depth + 1u); else { c.pc = 0x0031EA30u; return; } if (c.pc != 0x005006BCu) [[unlikely]] return; }
L_005006BC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005006C8u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0100(c, 158u, depth + 1u); else { c.pc = 0x005010B0u; return; } if (c.pc != 0x005006C8u) [[unlikely]] return; }
L_005006C8:
    set32(c.r[4], 0u + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005006D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x005006D4u) [[unlikely]] return; }
L_005006D4:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[20].d[0] == 0ull) { set32(c.r[3], c.r[29].w[0] + 176u);  goto L_005006F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005006E8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 20u, depth + 1u); else { c.pc = 0x00424310u; return; } if (c.pc != 0x005006E8u) [[unlikely]] return; }
L_005006E8:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[29].w[0] + 176u);
    c.budget -= 2;
L_005006F0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_00500714; } }
L_005006F8:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x005006F8u | kUnwind; return; } goto L_005006F8; } }
L_00500714:
    c.f[1] = ld32((c.r[28].w[0] - 29392u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.r[19].d[0] = 0ull + 0ull;
    c.f[12] = 0u;
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 176u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 180u), c.f[0]);  if (t) { goto L_00500758; } }
L_00500738:
    set32(c.r[2], c.r[19].w[0] << 2);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.f[20] = ld32((c.r[2].w[0] + 176u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500750u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0100(c, 156u, depth + 1u); else { c.pc = 0x00501030u; return; } if (c.pc != 0x00500750u) [[unlikely]] return; }
L_00500750:
    c.f[12] = c.f[20];
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 2;
L_00500758:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00500738u | kUnwind; return; } goto L_00500738; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050076Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0100(c, 149u, depth + 1u); else { c.pc = 0x00500F90u; return; } if (c.pc != 0x0050076Cu) [[unlikely]] return; }
L_0050076C:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050077Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0060(c, 582u, depth + 1u); else { c.pc = 0x00283C30u; return; } if (c.pc != 0x0050077Cu) [[unlikely]] return; }
L_0050077C:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050078Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050078Cu) [[unlikely]] return; }
L_0050078C:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x005007A0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x005007A0u) [[unlikely]] return; }
L_005007A0:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 196u));
    c.budget -= 1;
L_005007A4:
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_005007F8; }
    c.r[18].d[0] = ld16((c.r[17].w[0] + 218u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_005007E8; } }
L_005007BC:
    c.r[1].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 212u)));  goto L_005007D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_005007DC; } }
L_005007D0:
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_005007DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005007E4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0100(c, 49u, depth + 1u); else { c.pc = 0x00500540u; return; } if (c.pc != 0x005007E4u) [[unlikely]] return; }
L_005007E4:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_005007E8:
    c.r[3].d[0] = c.r[19].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[17].w[0] + 218u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x005007BCu | kUnwind; return; } goto L_005007BC; }
L_005007F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_005007F8:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.budget -= 2;
L_00500800:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00500820:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_00500A28; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[19].w[0] + 196u));  goto L_005009D8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500868u); set32(c.r[4], c.r[4].w[0] + 19952u);  if (depth < kMaxDepth) unit_004E(c, 128u, depth + 1u); else { c.pc = 0x00239870u; return; } if (c.pc != 0x00500868u) [[unlikely]] return; }
L_00500868:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500878u); set32(c.r[4], c.r[4].w[0] + 20928u);  if (depth < kMaxDepth) unit_004E(c, 128u, depth + 1u); else { c.pc = 0x00239870u; return; } if (c.pc != 0x00500878u) [[unlikely]] return; }
L_00500878:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00500944; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050088Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0100(c, 148u, depth + 1u); else { c.pc = 0x00500F80u; return; } if (c.pc != 0x0050088Cu) [[unlikely]] return; }
L_0050088C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050089Cu); set32(c.r[4], c.r[4].w[0] + 14864u);  if (depth < kMaxDepth) unit_004E(c, 128u, depth + 1u); else { c.pc = 0x00239870u; return; } if (c.pc != 0x0050089Cu) [[unlikely]] return; }
L_0050089C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00500940; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005008B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0100(c, 147u, depth + 1u); else { c.pc = 0x00500F70u; return; } if (c.pc != 0x005008B0u) [[unlikely]] return; }
L_005008B0:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[29].w[0] + 144u);
    c.f[12] = 0u;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_005008E0; } }
L_005008C4:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x005008C4u | kUnwind; return; } goto L_005008C4; } }
L_005008E0:
    c.f[1] = ld32((c.r[28].w[0] - 29392u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.r[21].d[0] = 0ull + 0ull;
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 144u), c.f[1]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 148u), c.f[0]);  if (t) { goto L_00500920; } }
L_00500900:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.f[20] = ld32((c.r[2].w[0] + 144u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500918u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_0100(c, 156u, depth + 1u); else { c.pc = 0x00501030u; return; } if (c.pc != 0x00500918u) [[unlikely]] return; }
L_00500918:
    c.f[12] = c.f[20];
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 2;
L_00500920:
    c.r[2].d[0] = c.r[21].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[21].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00500900u | kUnwind; return; } goto L_00500900; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00500940u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00500940u) [[unlikely]] return; }
L_00500940:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00500944:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050094Cu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0061(c, 38u, depth + 1u); else { c.pc = 0x00284390u; return; } if (c.pc != 0x0050094Cu) [[unlikely]] return; }
L_0050094C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_005009D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500960u);  if (depth < kMaxDepth) unit_0100(c, 146u, depth + 1u); else { c.pc = 0x00500F60u; return; } if (c.pc != 0x00500960u) [[unlikely]] return; }
L_00500960:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_005009C0; } }
L_0050096C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500974u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0100(c, 145u, depth + 1u); else { c.pc = 0x00500F50u; return; } if (c.pc != 0x00500974u) [[unlikely]] return; }
L_00500974:
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_005009C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500988u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0049(c, 336u, depth + 1u); else { c.pc = 0x00227BB0u; return; } if (c.pc != 0x00500988u) [[unlikely]] return; }
L_00500988:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500998u); set32(c.r[4], c.r[4].w[0] - 28864u);  if (depth < kMaxDepth) unit_004E(c, 128u, depth + 1u); else { c.pc = 0x00239870u; return; } if (c.pc != 0x00500998u) [[unlikely]] return; }
L_00500998:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 156u), c.r[2].w[0]);  if (t) { goto L_005009BC; } }
    set32(c.r[5], ld32((c.r[18].w[0])));
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005009B0u); set32(c.r[6], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_0100(c, 143u, depth + 1u); else { c.pc = 0x00500F10u; return; } if (c.pc != 0x005009B0u) [[unlikely]] return; }
L_005009B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005009BCu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0100(c, 142u, depth + 1u); else { c.pc = 0x00500EF0u; return; } if (c.pc != 0x005009BCu) [[unlikely]] return; }
L_005009BC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_005009C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005009C8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0100(c, 141u, depth + 1u); else { c.pc = 0x00500EE0u; return; } if (c.pc != 0x005009C8u) [[unlikely]] return; }
L_005009C8:
    c.r[3].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0050096Cu | kUnwind; return; } goto L_0050096C; }
L_005009D4:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 196u));
    c.budget -= 1;
L_005009D8:
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  goto L_00500A2C; }
    c.r[16].d[0] = ld16((c.r[19].w[0] + 218u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00500A1C; } }
L_005009F0:
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 212u)));  goto L_00500A04; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00500A10; } }
L_00500A04:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_00500A10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500A18u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0100(c, 86u, depth + 1u); else { c.pc = 0x00500820u; return; } if (c.pc != 0x00500A18u) [[unlikely]] return; }
L_00500A18:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00500A1C:
    c.r[3].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[19].w[0] + 218u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x005009F0u | kUnwind; return; } goto L_005009F0; }
L_00500A28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_00500A2C:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00500A50:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00500BB0; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[17].w[0] + 196u));  goto L_00500B60; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500A8Cu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0061(c, 38u, depth + 1u); else { c.pc = 0x00284390u; return; } if (c.pc != 0x00500A8Cu) [[unlikely]] return; }
L_00500A8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00500B5C; } }
    set32(c.r[19], c.r[2].w[0] + 32u);
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
L_00500AA0:
    set32(c.r[4], c.r[21].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[18].d[0] == 0ull) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_00500B50; }
    set32(c.r[20], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[20].d[0] != 0ull) { set32(c.r[25], ld32((c.r[20].w[0])));  goto L_00500AC8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_00500B10; } }
L_00500AC8:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00500AD4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00500AD4u) [[unlikely]] return; }
L_00500AD4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] - 28864u);  if (t) { goto L_00500AF4; } }
L_00500AE4:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_00500AF4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00500B00; } }
L_00500AF4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00500AE4u | kUnwind; return; } goto L_00500AE4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00500B00:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[20].d[0] = 0ull + 0ull;  goto L_00500B10; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00500B10; } }
L_00500B10:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00500B4C; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 104u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_00500B30; }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_00500B30:
    c.r[5].d[0] = ld16((c.r[18].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[4], 0u - 3841u);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
L_00500B4C:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_00500B50:
    c.r[3].d[0] = c.r[21].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00500AA0u | kUnwind; return; } goto L_00500AA0; }
L_00500B5C:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 196u));
    c.budget -= 1;
L_00500B60:
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_00500BB4; }
    c.r[18].d[0] = ld16((c.r[17].w[0] + 218u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00500BA4; } }
L_00500B78:
    c.r[1].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 212u)));  goto L_00500B8C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_00500B98; } }
L_00500B8C:
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_00500B98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500BA0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0100(c, 107u, depth + 1u); else { c.pc = 0x00500A50u; return; } if (c.pc != 0x00500BA0u) [[unlikely]] return; }
L_00500BA0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_00500BA4:
    c.r[3].d[0] = c.r[19].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[17].w[0] + 218u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00500B78u | kUnwind; return; } goto L_00500B78; }
L_00500BB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_00500BB4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00500BE0:
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
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 14;
    { const bool t = c.r[21].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00500DE4; } }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[21].w[0] + 196u));  goto L_00500C70; }
    st32((c.r[29].w[0] + 188u), c.r[21].w[0]);
    c.r[3].d[0] = ld16((c.r[21].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00500C6C; } }
    set32(c.r[5], ld32((c.r[20].w[0])));
    set32(c.r[6], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500C44u); set32(c.r[4], ld32((c.r[21].w[0] + 8u)));  if (depth < kMaxDepth) unit_00AE(c, 270u, depth + 1u); else { c.pc = 0x003BA6C0u; return; } if (c.pc != 0x00500C44u) [[unlikely]] return; }
L_00500C44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00500C6C; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 188u);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500C6Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x00500C6Cu) [[unlikely]] return; }
L_00500C6C:
    c.r[3].d[0] = ld16((c.r[21].w[0] + 196u));
    c.budget -= 1;
L_00500C70:
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  goto L_00500DE8; }
    c.r[30].d[0] = ld16((c.r[21].w[0] + 218u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00500DD8; } }
L_00500C88:
    c.r[1].d[0] = c.r[19].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 212u)));  goto L_00500C9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00500CA8; } }
L_00500C9C:
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0])));
    c.budget -= 3;
L_00500CA8:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_00500DD8; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00500D04; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500CC4u); st32((c.r[29].w[0] + 184u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_00B8(c, 119u, depth + 1u); else { c.pc = 0x003E0DC0u; return; } if (c.pc != 0x00500CC4u) [[unlikely]] return; }
L_00500CC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00500D00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500CD4u); set32(c.r[4], ld32((c.r[29].w[0] + 184u)));  if (depth < kMaxDepth) unit_00B8(c, 127u, depth + 1u); else { c.pc = 0x003E0EC0u; return; } if (c.pc != 0x00500CD4u) [[unlikely]] return; }
L_00500CD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500CDCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 126u, depth + 1u); else { c.pc = 0x003E0EB0u; return; } if (c.pc != 0x00500CDCu) [[unlikely]] return; }
L_00500CDC:
    set32(c.r[5], ld32((c.r[20].w[0])));
    set32(c.r[6], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500CECu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 270u, depth + 1u); else { c.pc = 0x003BA6C0u; return; } if (c.pc != 0x00500CECu) [[unlikely]] return; }
L_00500CEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00500D00; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500D00u); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_0100(c, 140u, depth + 1u); else { c.pc = 0x00500EC0u; return; } if (c.pc != 0x00500D00u) [[unlikely]] return; }
L_00500D00:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00500D04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500D0Cu); set32(c.r[5], 0u + 256u);  if (depth < kMaxDepth) unit_00B8(c, 125u, depth + 1u); else { c.pc = 0x003E0E90u; return; } if (c.pc != 0x00500D0Cu) [[unlikely]] return; }
L_00500D0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00500DD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500D1Cu); set32(c.r[4], c.r[18].w[0] + 208u);  if (depth < kMaxDepth) unit_004E(c, 133u, depth + 1u); else { c.pc = 0x00239910u; return; } if (c.pc != 0x00500D1Cu) [[unlikely]] return; }
L_00500D1C:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00500DC8; } }
L_00500D28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500D30u); set32(c.r[4], c.r[18].w[0] + 208u);  if (depth < kMaxDepth) unit_004E(c, 133u, depth + 1u); else { c.pc = 0x00239910u; return; } if (c.pc != 0x00500D30u) [[unlikely]] return; }
L_00500D30:
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[18].w[0] + 208u);  goto L_00500D44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00500D58; } }
L_00500D44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500D4Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 132u, depth + 1u); else { c.pc = 0x00239900u; return; } if (c.pc != 0x00500D4Cu) [[unlikely]] return; }
L_00500D4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500D54u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 131u, depth + 1u); else { c.pc = 0x002398F0u; return; } if (c.pc != 0x00500D54u) [[unlikely]] return; }
L_00500D54:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00500D58:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00500DC8; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00500D78; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500D74u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0100(c, 137u, depth + 1u); else { c.pc = 0x00500E50u; return; } if (c.pc != 0x00500D74u) [[unlikely]] return; }
L_00500D74:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00500D78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500D80u);  if (depth < kMaxDepth) unit_00B8(c, 119u, depth + 1u); else { c.pc = 0x003E0DC0u; return; } if (c.pc != 0x00500D80u) [[unlikely]] return; }
L_00500D80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00500DC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500D90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 126u, depth + 1u); else { c.pc = 0x00239830u; return; } if (c.pc != 0x00500D90u) [[unlikely]] return; }
L_00500D90:
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_00500DB4; } }
L_00500D9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500DA4u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 127u, depth + 1u); else { c.pc = 0x00239840u; return; } if (c.pc != 0x00500DA4u) [[unlikely]] return; }
L_00500DA4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500DB0u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0100(c, 114u, depth + 1u); else { c.pc = 0x00500BE0u; return; } if (c.pc != 0x00500DB0u) [[unlikely]] return; }
L_00500DB0:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_00500DB4:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    c.r[3].d[0] = c.r[22].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00500D9Cu | kUnwind; return; } goto L_00500D9C; }
L_00500DC4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00500DC8:
    c.r[3].d[0] = c.r[17].d[0] < c.r[23].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00500D28u | kUnwind; return; } goto L_00500D28; } }
L_00500DD4:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_00500DD8:
    c.r[3].d[0] = c.r[19].d[0] < c.r[30].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld16((c.r[21].w[0] + 218u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00500C88u | kUnwind; return; } goto L_00500C88; }
L_00500DE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_00500DE8:
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
L_00500E20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00500E34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00500E44; } }
L_00500E34:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 28u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00500E44u); set32(c.r[5], ld32((c.r[28].w[0] - 31192u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00500E44u) [[unlikely]] return; }
L_00500E44:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00500E50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 44u), c.r[5].w[0]);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00500EA8; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500E80u); set32(c.r[6], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00AE(c, 270u, depth + 1u); else { c.pc = 0x003BA6C0u; return; } if (c.pc != 0x00500E80u) [[unlikely]] return; }
L_00500E80:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00500EAC; }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[29].w[0] + 44u);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500EA8u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x00500EA8u) [[unlikely]] return; }
L_00500EA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00500EAC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00500EC0:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 7;
    { set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001120D0u | kUnwind; return; } [[clang::musttail]] return unit_0004(c, 158u, depth); }
L_00500EE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld16((c.r[4].w[0] + 10u));  c.pc = t; return; }
L_00500EF0:
    c.r[6].d[0] = ld16((c.r[4].w[0]));
    c.r[3].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[5], 0u - 3841u);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00500F10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500F28u); set32(c.r[4], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_0100(c, 209u, depth + 1u); else { c.pc = 0x00501610u; return; } if (c.pc != 0x00500F28u) [[unlikely]] return; }
L_00500F28:
    set32(c.r[3], ld32((c.r[29].w[0] + 40u)));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[29].w[0] + 44u));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00500F50:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[5].w[0] << 2);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_00500F60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 32u);  c.pc = t; return; }
L_00500F70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 52u)));  c.pc = t; return; }
L_00500F80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 288u)));  c.pc = t; return; }
L_00500F90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[4].w[0] + 288u)));
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == c.r[17].d[0]; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00501014; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[18].w[0] + 288u), c.r[17].w[0]);  goto L_00500FF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500FC4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00500FC4u) [[unlikely]] return; }
L_00500FC4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00500FD4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00500FD4u) [[unlikely]] return; }
L_00500FD4:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00500FF0; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00500FF0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00500FF0u) [[unlikely]] return; }
L_00500FF0:
    st32((c.r[18].w[0] + 288u), c.r[17].w[0]);
    c.budget -= 1;
L_00500FF4:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_00501018; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501004u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00501004u) [[unlikely]] return; }
L_00501004:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501014u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00501014u) [[unlikely]] return; }
L_00501014:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00501018:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
L_00501024:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00501030:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.f[21] = c.f[12];
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; c.f[20] = c.f[13];  if (t) { goto L_0050106C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050106Cu); set32(c.r[5], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_00C8(c, 305u, depth + 1u); else { c.pc = 0x00423F70u; return; } if (c.pc != 0x0050106Cu) [[unlikely]] return; }
L_0050106C:
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[4], c.r[16].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.f[21]);
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 4u), c.f[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_005010B0:
    set32(c.r[7], c.r[4].w[0] + 48u);
    set32(c.r[6], 0u + 3u);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
L_005010BC:
    ld128((c.r[8].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] - 1u);
    st128((c.r[7].w[0]) & ~15u, c.r[3]);
    set32(c.r[8], c.r[8].w[0] + 16u);
    set32(c.r[7], c.r[7].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[6].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x005010BCu | kUnwind; return; } goto L_005010BC; } }
    c.f[2] = ld32((c.r[5].w[0] + 48u));
    c.f[1] = ld32((c.r[5].w[0] + 52u));
    c.f[0] = ld32((c.r[5].w[0] + 56u));
    st32((c.r[4].w[0] + 96u), c.f[2]);
    st32((c.r[4].w[0] + 100u), c.f[1]);
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 60u));
    st32((c.r[4].w[0] + 108u), c.f[0]);
    c.f[0] = c.f[0] & fp::kAbs;
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 108u), c.f[0]);  c.pc = t; return; }
L_00501110:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00501244; } }
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[3], c.r[29].w[0] + 224u);
    c.budget -= 2;
L_00501138:
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.r[2].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00501138u | kUnwind; return; } goto L_00501138; } }
    set32(c.r[4], c.r[4].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 176u);
    st32((c.r[29].w[0] + 188u), 0u);
    st32((c.r[29].w[0] + 204u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050116Cu); st32((c.r[29].w[0] + 220u), 0u);  if (depth < kMaxDepth) unit_0087(c, 263u, depth + 1u); else { c.pc = 0x0031E870u; return; } if (c.pc != 0x0050116Cu) [[unlikely]] return; }
L_0050116C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501174u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_003E(c, 300u, depth + 1u); else { c.pc = 0x001FA730u; return; } if (c.pc != 0x00501174u) [[unlikely]] return; }
L_00501174:
    set32(c.r[2], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    ld128((c.r[16].w[0] + 48u) & ~15u, c.vu0.vf[12]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[16].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    vu::mul(c.vu0, 1u, 13u, 11u, 12u);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[4].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[4].w[1]);
    vu::maddbc(c.vu0, 15u, 14u, 3u, c.vu0.vf[4].w[2]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[5].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[5].w[1]);
    vu::maddbc(c.vu0, 15u, 15u, 3u, c.vu0.vf[5].w[2]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[6].w[0]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[6].w[1]);
    vu::maddbc(c.vu0, 15u, 16u, 3u, c.vu0.vf[6].w[2]);
    vu::mulabc(c.vu0, 14u, 1u, c.vu0.vf[12].w[0]);
    vu::maddabc(c.vu0, 14u, 2u, c.vu0.vf[12].w[1]);
    vu::maddbc(c.vu0, 14u, 13u, 3u, c.vu0.vf[12].w[2]);
    vu::mulbc(c.vu0, 14u, 13u, 13u, c.vu0.vf[11].w[3]);
    vu::add(c.vu0, 14u, 13u, 13u, 11u);
    st128((c.r[5].w[0]) & ~15u, c.vu0.vf[14]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.vu0.vf[15]);
    st128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[16]);
    st128((c.r[5].w[0] + 48u) & ~15u, c.vu0.vf[13]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005011F0u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_003E(c, 299u, depth + 1u); else { c.pc = 0x001FA6A0u; return; } if (c.pc != 0x005011F0u) [[unlikely]] return; }
L_005011F0:
    set32(c.r[6], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
L_005011FC:
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x005011FCu | kUnwind; return; } goto L_005011FC; } }
    c.f[2] = ld32((c.r[29].w[0] + 160u));
    c.f[1] = ld32((c.r[29].w[0] + 164u));
    c.f[0] = ld32((c.r[29].w[0] + 168u));
    st32((c.r[17].w[0] + 96u), c.f[2]);
    st32((c.r[17].w[0] + 100u), c.f[1]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 172u));
    st32((c.r[17].w[0] + 108u), c.f[0]);
    c.f[0] = c.f[0] & fp::kAbs;
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 108u), c.f[0]);  if (t) { goto L_00501294; } }
L_00501244:
    set32(c.r[5], c.r[17].w[0] + 48u);
    set32(c.r[4], 0u + 3u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_00501250:
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00501250u | kUnwind; return; } goto L_00501250; } }
    c.f[2] = ld32((c.r[16].w[0] + 48u));
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    st32((c.r[17].w[0] + 96u), c.f[2]);
    st32((c.r[17].w[0] + 100u), c.f[1]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 60u));
    st32((c.r[17].w[0] + 108u), c.f[0]);
    c.f[0] = c.f[0] & fp::kAbs;
    st32((c.r[17].w[0] + 108u), c.f[0]);
    c.budget -= 10;
L_00501294:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_005012B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 112u);  c.pc = t; return; }
L_005012C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_005013D4; } }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_00501350; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_0050130C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501308u);  if (depth < kMaxDepth) unit_0100(c, 168u, depth + 1u); else { c.pc = 0x005012C0u; return; } if (c.pc != 0x00501308u) [[unlikely]] return; }
L_00501308:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0050130C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00501320; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050131Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0100(c, 168u, depth + 1u); else { c.pc = 0x005012C0u; return; } if (c.pc != 0x0050131Cu) [[unlikely]] return; }
L_0050131C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00501320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501328u);  if (depth < kMaxDepth) unit_0100(c, 204u, depth + 1u); else { c.pc = 0x00501540u; return; } if (c.pc != 0x00501328u) [[unlikely]] return; }
L_00501328:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501334u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_0100(c, 203u, depth + 1u); else { c.pc = 0x00501530u; return; } if (c.pc != 0x00501334u) [[unlikely]] return; }
L_00501334:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050133Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0100(c, 202u, depth + 1u); else { c.pc = 0x00501520u; return; } if (c.pc != 0x0050133Cu) [[unlikely]] return; }
L_0050133C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050134Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0100(c, 200u, depth + 1u); else { c.pc = 0x00501500u; return; } if (c.pc != 0x0050134Cu) [[unlikely]] return; }
L_0050134C:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_00501350:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_005013B4; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_00501370; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050136Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0100(c, 168u, depth + 1u); else { c.pc = 0x005012C0u; return; } if (c.pc != 0x0050136Cu) [[unlikely]] return; }
L_0050136C:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_00501370:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00501384; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501380u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0100(c, 168u, depth + 1u); else { c.pc = 0x005012C0u; return; } if (c.pc != 0x00501380u) [[unlikely]] return; }
L_00501380:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00501384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050138Cu);  if (depth < kMaxDepth) unit_0100(c, 204u, depth + 1u); else { c.pc = 0x00501540u; return; } if (c.pc != 0x0050138Cu) [[unlikely]] return; }
L_0050138C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501398u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_0100(c, 203u, depth + 1u); else { c.pc = 0x00501530u; return; } if (c.pc != 0x00501398u) [[unlikely]] return; }
L_00501398:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005013A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0100(c, 202u, depth + 1u); else { c.pc = 0x00501520u; return; } if (c.pc != 0x005013A0u) [[unlikely]] return; }
L_005013A0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005013B0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0100(c, 200u, depth + 1u); else { c.pc = 0x00501500u; return; } if (c.pc != 0x005013B0u) [[unlikely]] return; }
L_005013B0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_005013B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005013BCu);  if (depth < kMaxDepth) unit_0100(c, 204u, depth + 1u); else { c.pc = 0x00501540u; return; } if (c.pc != 0x005013BCu) [[unlikely]] return; }
L_005013BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005013C4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0100(c, 202u, depth + 1u); else { c.pc = 0x00501520u; return; } if (c.pc != 0x005013C4u) [[unlikely]] return; }
L_005013C4:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[19], ld32((c.r[16].w[0] + 4u)));  goto L_005013D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005013D4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x005013D4u) [[unlikely]] return; }
L_005013D4:
    set32(c.r[19], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_005013D8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_005014CC; } }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_00501448; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_00501404; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501400u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0100(c, 168u, depth + 1u); else { c.pc = 0x005012C0u; return; } if (c.pc != 0x00501400u) [[unlikely]] return; }
L_00501400:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_00501404:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00501418; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501414u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0100(c, 168u, depth + 1u); else { c.pc = 0x005012C0u; return; } if (c.pc != 0x00501414u) [[unlikely]] return; }
L_00501414:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00501418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501420u);  if (depth < kMaxDepth) unit_0100(c, 204u, depth + 1u); else { c.pc = 0x00501540u; return; } if (c.pc != 0x00501420u) [[unlikely]] return; }
L_00501420:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050142Cu); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_0100(c, 203u, depth + 1u); else { c.pc = 0x00501530u; return; } if (c.pc != 0x0050142Cu) [[unlikely]] return; }
L_0050142C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501434u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0100(c, 202u, depth + 1u); else { c.pc = 0x00501520u; return; } if (c.pc != 0x00501434u) [[unlikely]] return; }
L_00501434:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501444u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0100(c, 200u, depth + 1u); else { c.pc = 0x00501500u; return; } if (c.pc != 0x00501444u) [[unlikely]] return; }
L_00501444:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_00501448:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_005014AC; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_00501468; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501464u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0100(c, 168u, depth + 1u); else { c.pc = 0x005012C0u; return; } if (c.pc != 0x00501464u) [[unlikely]] return; }
L_00501464:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_00501468:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0050147C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501478u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0100(c, 168u, depth + 1u); else { c.pc = 0x005012C0u; return; } if (c.pc != 0x00501478u) [[unlikely]] return; }
L_00501478:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0050147C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501484u);  if (depth < kMaxDepth) unit_0100(c, 204u, depth + 1u); else { c.pc = 0x00501540u; return; } if (c.pc != 0x00501484u) [[unlikely]] return; }
L_00501484:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501490u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_0100(c, 203u, depth + 1u); else { c.pc = 0x00501530u; return; } if (c.pc != 0x00501490u) [[unlikely]] return; }
L_00501490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501498u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0100(c, 202u, depth + 1u); else { c.pc = 0x00501520u; return; } if (c.pc != 0x00501498u) [[unlikely]] return; }
L_00501498:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005014A8u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0100(c, 200u, depth + 1u); else { c.pc = 0x00501500u; return; } if (c.pc != 0x005014A8u) [[unlikely]] return; }
L_005014A8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_005014AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005014B4u);  if (depth < kMaxDepth) unit_0100(c, 204u, depth + 1u); else { c.pc = 0x00501540u; return; } if (c.pc != 0x005014B4u) [[unlikely]] return; }
L_005014B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005014BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0100(c, 202u, depth + 1u); else { c.pc = 0x00501520u; return; } if (c.pc != 0x005014BCu) [[unlikely]] return; }
L_005014BC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_005014CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005014CCu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x005014CCu) [[unlikely]] return; }
L_005014CC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_005014E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005014DCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x005014DCu) [[unlikely]] return; }
L_005014DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_005014E0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00501500:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00501514; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501514u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00501514u) [[unlikely]] return; }
L_00501514:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00501520:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 8u);  c.pc = t; return; }
L_00501530:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00501540:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_00501550:
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
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), c.r[3].w[0]);  c.pc = t; return; }
L_00501580:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[10], ld32((c.r[4].w[0] + 8u)));  goto L_005015A4; }
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[10], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] >> 57;  if (t) { goto L_005015A8; } }
L_005015A4:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_005015A8:
    c.r[1].d[0] = c.r[6].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u - 1u);  goto L_00501608; }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00501604; } }
    set32(c.r[4], c.r[10].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[9], c.r[10].w[0] + c.r[6].w[0]);  if (t) { goto L_005015F8; } }
L_005015C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_005015E8; } }
L_005015D0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_005015E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[9].w[0] - c.r[10].w[0]);  if (t) { goto L_00501608; } }
L_005015E4:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_005015E8:
    c.r[2].d[0] = c.r[6].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x005015D0u | kUnwind; return; } goto L_005015D0; }
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_005015F8:
    c.r[2].d[0] = c.r[9].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[8].d[0] = c.r[5].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x005015C8u | kUnwind; return; } goto L_005015C8; }
L_00501604:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00501608:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00501610:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[11].d[0] = 0ull + 0ull;
    set32(c.r[9], ld32((c.r[5].w[0] + 12u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[10], c.r[5].w[0] + 12u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0050166C; } }
L_00501640:
    set32(c.r[4], ld32((c.r[9].w[0] + 12u)));
    c.r[1].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[10].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_0050165C; } }
    set32(c.r[9], ld32((c.r[9].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0050166C; } }
L_0050165C:
    c.r[11].d[0] = c.r[9].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[9], ld32((c.r[9].w[0] + 4u)));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_0050166C:
    c.budget -= 2;
    if (c.r[9].d[0] != 0ull) { set32(c.r[6], ld32((c.r[8].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00501640u | kUnwind; return; } goto L_00501640; }
    c.budget -= 2;
    if (c.r[11].d[0] == 0ull) { c.r[4].d[0] = c.r[5].d[0] + 0ull;  goto L_00501694; }
    set32(c.r[4], ld32((c.r[11].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[8].w[0])));
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { st32((c.r[16].w[0]), c.r[11].w[0]);  goto L_005016AC; }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_00501694:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050169Cu); c.r[5].d[0] = c.r[10].d[0] + 0ull;  if (depth < kMaxDepth) unit_0100(c, 212u, depth + 1u); else { c.pc = 0x005016D0u; return; } if (c.pc != 0x0050169Cu) [[unlikely]] return; }
L_0050169C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 29388u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_005016B4; } }
L_005016AC:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 29384u));
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_005016B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_005016D0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(-1ll) ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] != 0ull; c.r[17].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_00501730; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501728u); set32(c.r[5], c.r[5].w[0] + 22682u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x00501728u) [[unlikely]] return; }
L_00501728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501730u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x00501730u) [[unlikely]] return; }
L_00501730:
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050173Cu); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0050173Cu) [[unlikely]] return; }
L_0050173C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[16].w[0] + 12u);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { st32((c.r[16].w[0] + 4u), 0u);  goto L_00501758; }
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 3;
L_00501758:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00501778; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[16].w[0]);  if (t) { goto L_0050177C; } }
L_00501778:
    st32((c.r[20].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_0050177C:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501794u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 69u, depth + 1u); else { c.pc = 0x00114770u; return; } if (c.pc != 0x00501794u) [[unlikely]] return; }
L_00501794:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_005017A4; }
    st32((c.r[21].w[0] + 16u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_005017A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_005017D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00501850; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 22928u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00501838; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27552u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501814u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x00501814u) [[unlikely]] return; }
L_00501814:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_0050183C; }
    goto L_0050181C;
L_00501818:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 1;
L_0050181C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 31120u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00501838; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26416u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00501838:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 1;
L_0050183C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00501854; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501850u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00501850u) [[unlikely]] return; }
L_00501850:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00501854:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00501870:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0050188C; } }
    set32(c.r[5], c.r[5].w[0] + 48u);
    c.budget -= 1;
L_0050188C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501894u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 105u, depth + 1u); else { c.pc = 0x0047CD40u; return; } if (c.pc != 0x00501894u) [[unlikely]] return; }
L_00501894:
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005018A4u); st32((c.r[17].w[0] + 64u), 0u);  if (depth < kMaxDepth) unit_000C(c, 347u, depth + 1u); else { c.pc = 0x00133590u; return; } if (c.pc != 0x005018A4u) [[unlikely]] return; }
L_005018A4:
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00501918; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005018B8u);  if (depth < kMaxDepth) unit_0022(c, 185u, depth + 1u); else { c.pc = 0x0018AB20u; return; } if (c.pc != 0x005018B8u) [[unlikely]] return; }
L_005018B8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_005018DC; }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x005018D4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x005018D4u) [[unlikely]] return; }
L_005018D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00501914; } }
L_005018DC:
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 1;
L_005018E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005018E8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0022(c, 152u, depth + 1u); else { c.pc = 0x00189FB0u; return; } if (c.pc != 0x005018E8u) [[unlikely]] return; }
L_005018E8:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x005018FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x005018FCu) [[unlikely]] return; }
L_005018FC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 68u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x005018E0u | kUnwind; return; } goto L_005018E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501914u); set32(c.r[4], ld32((c.r[17].w[0] + 68u)));  if (depth < kMaxDepth) unit_00ED(c, 41u, depth + 1u); else { c.pc = 0x004B4440u; return; } if (c.pc != 0x00501914u) [[unlikely]] return; }
L_00501914:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00501918:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00501930:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501954u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x00501954u) [[unlikely]] return; }
L_00501954:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501960u); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x00501960u) [[unlikely]] return; }
L_00501960:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_00501978; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501974u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x00501974u) [[unlikely]] return; }
L_00501974:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_00501978:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[29].w[0] + 64u), c.r[2].w[0]);  goto L_0050198C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501988u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x00501988u) [[unlikely]] return; }
L_00501988:
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 1;
L_0050198C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26060u)));
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 72u), 0u);
    st32((c.r[29].w[0] + 76u), 0u);
    set32(c.r[3], c.r[2].w[0] + 156u);
    set32(c.r[2], ld32((c.r[2].w[0] + 156u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[3].w[0] + 1u);  goto L_005019B4; }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_005019B4:
    set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005019C0u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_00B3(c, 59u, depth + 1u); else { c.pc = 0x003CC8A0u; return; } if (c.pc != 0x005019C0u) [[unlikely]] return; }
L_005019C0:
    set32(c.r[5], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 72u)));
    c.r[1].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_00501A48; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005019DCu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_00C4(c, 308u, depth + 1u); else { c.pc = 0x00412260u; return; } if (c.pc != 0x005019DCu) [[unlikely]] return; }
L_005019DC:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], c.r[2].w[0] + 1u);  goto L_005019F0; }
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 1;
L_005019F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005019F8u); set32(c.r[4], ld32((c.r[28].w[0] - 22676u)));  if (depth < kMaxDepth) unit_00F9(c, 217u, depth + 1u); else { c.pc = 0x004E5F30u; return; } if (c.pc != 0x005019F8u) [[unlikely]] return; }
L_005019F8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 132u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + 132u);  if (t) { goto L_00501A14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_00501A18; } }
L_00501A14:
    set32(c.r[6], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00501A18:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501A28u); set32(c.r[5], c.r[5].w[0] + 22720u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x00501A28u) [[unlikely]] return; }
L_00501A28:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 22737u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501A40u); set32(c.r[6], c.r[6].w[0] + 22748u);  if (depth < kMaxDepth) unit_0027(c, 246u, depth + 1u); else { c.pc = 0x0019FB50u; return; } if (c.pc != 0x00501A40u) [[unlikely]] return; }
L_00501A40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00501A60; } }
L_00501A48:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 22737u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501A5Cu); set32(c.r[6], c.r[6].w[0] + 22760u);  if (depth < kMaxDepth) unit_0027(c, 246u, depth + 1u); else { c.pc = 0x0019FB50u; return; } if (c.pc != 0x00501A5Cu) [[unlikely]] return; }
L_00501A5C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00501A60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501A68u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x00501A68u) [[unlikely]] return; }
L_00501A68:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00501AC8; }
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[29].w[0] + 80u));  goto L_00501A88; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 84u)));  if (t) { goto L_00501A90; } }
L_00501A88:
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 57;
    c.budget -= 2;
L_00501A90:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[25], ld32((c.r[2].w[0])));  goto L_00501AB4; }
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 116u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00501AACu); set32(c.r[5], c.r[29].w[0] + 80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00501AACu) [[unlikely]] return; }
L_00501AAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00501AC4; } }
L_00501AB4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00501AC4u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00501AC4u) [[unlikely]] return; }
L_00501AC4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00501AC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501AD0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x00501AD0u) [[unlikely]] return; }
L_00501AD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00501B18; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_00501B04; }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 36u);  if (t) { goto L_00501AF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[4].w[0] + 8u)));  if (t) { goto L_00501AFC; } }
L_00501AF8:
    set32(c.r[5], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_00501AFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[2].w[0])));  if (t) { goto L_00501B0C; } }
L_00501B04:
    set32(c.r[5], c.r[5].w[0] + 22770u);
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_00501B0C:
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00501B18u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00501B18u) [[unlikely]] return; }
L_00501B18:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[18].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501B28u); set32(c.r[5], c.r[5].w[0] + 22771u);  if (depth < kMaxDepth) unit_000C(c, 350u, depth + 1u); else { c.pc = 0x001335E0u; return; } if (c.pc != 0x00501B28u) [[unlikely]] return; }
L_00501B28:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 111u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501B38u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x00501B38u) [[unlikely]] return; }
L_00501B38:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 111u));  goto L_00501B60; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00501B5C; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 111u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501B5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x00501B5Cu) [[unlikely]] return; }
L_00501B5C:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 111u));
    c.budget -= 1;
L_00501B60:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 64u)));  goto L_00501B88; }
    set32(c.r[4], ld32((c.r[18].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00501B84; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 220u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00501B84u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00501B84u) [[unlikely]] return; }
L_00501B84:
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 1;
L_00501B88:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501B9Cu); st32((c.r[18].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0007(c, 292u, depth + 1u); else { c.pc = 0x0011EEB0u; return; } if (c.pc != 0x00501B9Cu) [[unlikely]] return; }
L_00501B9C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501BA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00501BA8u) [[unlikely]] return; }
L_00501BA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00501BC0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00501BEC; } }
    set32(c.r[4], c.r[4].w[0] + 48u);
    c.budget -= 1;
L_00501BEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501BF4u);  if (depth < kMaxDepth) unit_00DF(c, 105u, depth + 1u); else { c.pc = 0x0047CD40u; return; } if (c.pc != 0x00501BF4u) [[unlikely]] return; }
L_00501BF4:
    set32(c.r[17], c.r[29].w[0] + 80u);
    st32((c.r[19].w[0] + 68u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501C0Cu); st32((c.r[19].w[0] + 64u), 0u);  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x00501C0Cu) [[unlikely]] return; }
L_00501C0C:
    st16((c.r[29].w[0] + 104u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[29].w[0] + 84u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[16].d[0] = ld8((c.r[28].w[0] - 29380u));
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[3].d[0]; st16((c.r[29].w[0] + 106u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00501C44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501C3Cu); set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00501C3Cu) [[unlikely]] return; }
L_00501C3C:
    set32(c.r[2], c.r[17].w[0] + 4u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_00501C44:
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
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00501C74u); set32(c.r[5], c.r[5].w[0] + 22771u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00501C74u) [[unlikely]] return; }
L_00501C74:
    set32(c.r[4], c.r[19].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501C80u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x00501C80u) [[unlikely]] return; }
L_00501C80:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501C8Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x00501C8Cu) [[unlikely]] return; }
L_00501C8C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[6].w[0] + 22781u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501CA8u); set32(c.r[7], c.r[7].w[0] + 22770u);  if (depth < kMaxDepth) unit_0027(c, 263u, depth + 1u); else { c.pc = 0x0019FE40u; return; } if (c.pc != 0x00501CA8u) [[unlikely]] return; }
L_00501CA8:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 113u);  goto L_00501CBC; }
    set32(c.r[4], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 1;
L_00501CBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501CC4u);  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x00501CC4u) [[unlikely]] return; }
L_00501CC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501CCCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 103u, depth + 1u); else { c.pc = 0x0047CD10u; return; } if (c.pc != 0x00501CCCu) [[unlikely]] return; }
L_00501CCC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 29244u)));
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501CE0u); st32((c.r[28].w[0] - 29244u), 0u);  if (depth < kMaxDepth) unit_0026(c, 323u, depth + 1u); else { c.pc = 0x0019BE80u; return; } if (c.pc != 0x00501CE0u) [[unlikely]] return; }
L_00501CE0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[9].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[16].w[0] + 60u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501CFCu); set32(c.r[8], 0u + 2u);  if (depth < kMaxDepth) unit_0026(c, 306u, depth + 1u); else { c.pc = 0x0019BB20u; return; } if (c.pc != 0x00501CFCu) [[unlikely]] return; }
L_00501CFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501D04u); set32(c.r[4], c.r[16].w[0] + 60u);  if (depth < kMaxDepth) unit_000F(c, 108u, depth + 1u); else { c.pc = 0x0013D410u; return; } if (c.pc != 0x00501D04u) [[unlikely]] return; }
L_00501D04:
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501D18u); st32((c.r[28].w[0] - 29244u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00501D18u) [[unlikely]] return; }
L_00501D18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00501D40:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00500000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[7], c.r[7].w[0] + 10080u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[4], c.r[4].w[0] + 22832u);
    set32(c.r[5], c.r[29].w[0] + 180u);
    set32(c.r[6], c.r[6].w[0] + 10096u);
    st32((c.r[29].w[0] + 188u), 0u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501D90u); st32((c.r[29].w[0] + 184u), 0u);  if (depth < kMaxDepth) unit_0039(c, 269u, depth + 1u); else { c.pc = 0x001E5DE0u; return; } if (c.pc != 0x00501D90u) [[unlikely]] return; }
L_00501D90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 188u), c.r[2].w[0]);  if (t) { goto L_00501DA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_005026D0; } }
L_00501DA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501DA8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 455u, depth + 1u); else { c.pc = 0x001F3C30u; return; } if (c.pc != 0x00501DA8u) [[unlikely]] return; }
L_00501DA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 184u), c.r[2].w[0]);  if (t) { goto L_00501DC8; } }
    set32(c.r[4], c.r[29].w[0] + 188u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501DC0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 76u, depth + 1u); else { c.pc = 0x001E47B0u; return; } if (c.pc != 0x00501DC0u) [[unlikely]] return; }
L_00501DC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_005026D0; } }
L_00501DC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501DD0u); set32(c.r[4], ld32((c.r[29].w[0] + 188u)));  if (depth < kMaxDepth) unit_00AE(c, 102u, depth + 1u); else { c.pc = 0x003B8FF8u; return; } if (c.pc != 0x00501DD0u) [[unlikely]] return; }
L_00501DD0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 188u)));  goto L_00501DF0; }
    set32(c.r[4], c.r[29].w[0] + 188u);
    set32(c.r[5], c.r[29].w[0] + 184u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501DE8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 76u, depth + 1u); else { c.pc = 0x001E47B0u; return; } if (c.pc != 0x00501DE8u) [[unlikely]] return; }
L_00501DE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_005026D0; } }
L_00501DF0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00500000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501E00u); set32(c.r[6], c.r[6].w[0] + 9968u);  if (depth < kMaxDepth) unit_0039(c, 270u, depth + 1u); else { c.pc = 0x001E5DF0u; return; } if (c.pc != 0x00501E00u) [[unlikely]] return; }
L_00501E00:
    set32(c.r[4], ld32((c.r[29].w[0] + 188u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501E0Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 471u, depth + 1u); else { c.pc = 0x001F3EE0u; return; } if (c.pc != 0x00501E0Cu) [[unlikely]] return; }
L_00501E0C:
    set32(c.r[4], ld32((c.r[29].w[0] + 188u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501E20u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 17u, depth + 1u); else { c.pc = 0x001E41F0u; return; } if (c.pc != 0x00501E20u) [[unlikely]] return; }
L_00501E20:
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[6], 0u + 4u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 48u));
    st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 49u));
    st8((c.r[17].w[0] + 21u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 50u));
    st8((c.r[17].w[0] + 22u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 51u));
    st8((c.r[17].w[0] + 23u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 52u));
    st8((c.r[17].w[0] + 24u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 53u));
    st8((c.r[17].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 54u));
    st8((c.r[17].w[0] + 26u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 55u));
    st8((c.r[17].w[0] + 27u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 472u)));
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501EA0u); set32(c.r[5], c.r[2].w[0] + 496u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00501EA0u) [[unlikely]] return; }
L_00501EA0:
    set32(c.r[5], ld32((c.r[17].w[0] + 32u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    st8((c.r[17].w[0] + 36u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] >> 16);
    c.r[5].d[0] = c.r[5].d[0] & 65280ull;
    set32(c.r[2], c.r[2].w[0] >> 24);
    set32(c.r[5], c.r[5].w[0] >> 8);
    st8((c.r[17].w[0] + 37u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[17].w[0] + 38u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 39u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501EE0u); st8((c.r[17].w[0] + 40u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0071(c, 352u, depth + 1u); else { c.pc = 0x002C7D90u; return; } if (c.pc != 0x00501EE0u) [[unlikely]] return; }
L_00501EE0:
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[17].w[0] + 36u);
    set32(c.r[5], c.r[5].w[0] + 22838u);
    set32(c.r[20], ld32((c.r[2].w[0])));
    set32(c.r[19], ld32((c.r[2].w[0] + 8u)));
    c.r[18].d[0] = ld8((c.r[2].w[0] + 40u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 41u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00501F08u); st8((c.r[17].w[0] + 49u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00501F08u) [[unlikely]] return; }
L_00501F08:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 49u));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[3].d[0] = c.r[18].d[0] & 255ull;  goto L_00501F80; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = c.r[18].d[0] & 255ull;  goto L_00501F70; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { st8((c.r[17].w[0] + 64u), static_cast<std::uint8_t>(c.r[18].w[0]));  goto L_00501F64; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[3].d[0] = c.r[18].d[0] & 255ull;  goto L_00501F50; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00501F4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[17].w[0] + 64u));  if (t) { goto L_00501F98; } }
L_00501F4C:
    c.r[3].d[0] = c.r[18].d[0] & 255ull;
    c.budget -= 1;
L_00501F50:
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[17].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 68u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00501F94; } }
L_00501F64:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 68u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00501F94; } }
L_00501F70:
    set32(c.r[2], c.r[2].w[0] << 2);
    st8((c.r[17].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 68u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00501F94; } }
L_00501F80:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    st8((c.r[17].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 67u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 68u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_00501F94:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 64u));
    c.budget -= 1;
L_00501F98:
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], 0u + 4u);  goto L_00502074; }
    set32(c.r[2], 0u + 24u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], 0u + 3u);  goto L_00502048; }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_00502040; }
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0050203C; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], 0u + 1u);  goto L_00502010; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { st8((c.r[17].w[0] + 66u), static_cast<std::uint8_t>(0u));  goto L_00501FE8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_005020A0; } }
L_00501FE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[2] = ld32((c.r[2].w[0] + 32640u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[2].w[0] + 32644u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[2].w[0] + 32648u));
    st32((c.r[17].w[0] + 160u), c.f[2]);
    st32((c.r[17].w[0] + 164u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 168u), c.f[0]);  if (t) { goto L_0050209C; } }
L_00502010:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st8((c.r[17].w[0] + 66u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 32656u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[3].w[0] + 32660u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[2].w[0] + 32664u));
    st32((c.r[17].w[0] + 160u), c.f[2]);
    st32((c.r[17].w[0] + 164u), c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 168u), c.f[0]);  if (t) { goto L_0050209C; } }
L_0050203C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00502040:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 66u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0050209C; } }
L_00502048:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st8((c.r[17].w[0] + 66u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 32672u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[3].w[0] + 32676u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[2].w[0] + 32680u));
    st32((c.r[17].w[0] + 160u), c.f[2]);
    st32((c.r[17].w[0] + 164u), c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 168u), c.f[0]);  if (t) { goto L_0050209C; } }
L_00502074:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st8((c.r[17].w[0] + 66u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 32688u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[3].w[0] + 32692u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[2].w[0] + 32696u));
    st32((c.r[17].w[0] + 160u), c.f[2]);
    st32((c.r[17].w[0] + 164u), c.f[1]);
    st32((c.r[17].w[0] + 168u), c.f[0]);
    c.budget -= 10;
L_0050209C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_005020A0:
    st8((c.r[17].w[0] + 67u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 68u));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_005021EC; }
    c.r[3].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00502158; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 24784u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[17].w[0] + 72u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[11].d[0] = ld8((c.r[8].w[0] + 24785u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[10], c.r[10].w[0] + 24808u);
    set32(c.r[9], c.r[17].w[0] + 96u);
    st8((c.r[17].w[0] + 73u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[8], 0u + 6u);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 24786u));
    st8((c.r[17].w[0] + 74u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[6].w[0] + 24788u)));
    st32((c.r[17].w[0] + 76u), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 24792u)));
    st32((c.r[17].w[0] + 80u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 24796u)));
    st32((c.r[17].w[0] + 84u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 24800u)));
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 24804u)));
    st32((c.r[17].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 28;
L_00502130:
    set32(c.r[3], ld32((c.r[10].w[0])));
    set32(c.r[8], c.r[8].w[0] - 1u);
    set32(c.r[2], ld32((c.r[10].w[0] + 4u)));
    st32((c.r[9].w[0]), c.r[3].w[0]);
    set32(c.r[10], c.r[10].w[0] + 8u);
    st32((c.r[9].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[8].sd[0] > 0; set32(c.r[9], c.r[9].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00502130u | kUnwind; return; } goto L_00502130; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 60u), static_cast<std::uint16_t>(c.r[20].w[0]));  if (t) { goto L_0050227C; } }
L_00502158:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 24944u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[17].w[0] + 72u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[11].d[0] = ld8((c.r[8].w[0] + 24945u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[10], c.r[10].w[0] + 24968u);
    set32(c.r[9], c.r[17].w[0] + 96u);
    st8((c.r[17].w[0] + 73u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[8], 0u + 6u);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 24946u));
    st8((c.r[17].w[0] + 74u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[6].w[0] + 24948u)));
    st32((c.r[17].w[0] + 76u), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 24952u)));
    st32((c.r[17].w[0] + 80u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 24956u)));
    st32((c.r[17].w[0] + 84u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 24960u)));
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 24964u)));
    st32((c.r[17].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 27;
L_005021C4:
    set32(c.r[3], ld32((c.r[10].w[0])));
    set32(c.r[8], c.r[8].w[0] - 1u);
    set32(c.r[2], ld32((c.r[10].w[0] + 4u)));
    st32((c.r[9].w[0]), c.r[3].w[0]);
    set32(c.r[10], c.r[10].w[0] + 8u);
    st32((c.r[9].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[8].sd[0] > 0; set32(c.r[9], c.r[9].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x005021C4u | kUnwind; return; } goto L_005021C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00502278; } }
L_005021EC:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 25024u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[17].w[0] + 72u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[11].d[0] = ld8((c.r[8].w[0] + 25025u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[10], c.r[10].w[0] + 25048u);
    set32(c.r[9], c.r[17].w[0] + 96u);
    st8((c.r[17].w[0] + 73u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[8], 0u + 6u);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 25026u));
    st8((c.r[17].w[0] + 74u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[6].w[0] + 25028u)));
    st32((c.r[17].w[0] + 76u), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 25032u)));
    st32((c.r[17].w[0] + 80u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 25036u)));
    st32((c.r[17].w[0] + 84u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 25040u)));
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 25044u)));
    st32((c.r[17].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 27;
L_00502258:
    set32(c.r[3], ld32((c.r[10].w[0])));
    set32(c.r[8], c.r[8].w[0] - 1u);
    set32(c.r[2], ld32((c.r[10].w[0] + 4u)));
    st32((c.r[9].w[0]), c.r[3].w[0]);
    set32(c.r[10], c.r[10].w[0] + 8u);
    st32((c.r[9].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[8].sd[0] > 0; set32(c.r[9], c.r[9].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00502258u | kUnwind; return; } goto L_00502258; } }
L_00502278:
    st16((c.r[17].w[0] + 60u), static_cast<std::uint16_t>(c.r[20].w[0]));
    c.budget -= 1;
L_0050227C:
    set32(c.r[6], c.r[17].w[0] + 96u);
    st16((c.r[17].w[0] + 62u), static_cast<std::uint16_t>(c.r[19].w[0]));
    set32(c.r[5], c.r[29].w[0] + 120u);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 72u));
    set32(c.r[4], 0u + 6u);
    st8((c.r[29].w[0] + 96u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 73u));
    st8((c.r[29].w[0] + 97u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 74u));
    st8((c.r[29].w[0] + 98u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 92u)));
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    c.budget -= 20;
L_005022CC:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x005022CCu | kUnwind; return; } goto L_005022CC; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00502420; } }
    set32(c.r[7], 0u + 1u);
    st8((c.r[17].w[0] + 68u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 36u));
    st16((c.r[17].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 152u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 36u));
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    if (c.r[1].d[0] == 0ull) { set32(c.r[6], ld32((c.r[17].w[0] + 156u)));  goto L_00502378; }
    st32((c.r[17].w[0] + 152u), c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 156u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00502340u); set32(c.r[6], c.r[6].w[0] - 12752u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x00502340u) [[unlikely]] return; }
L_00502340:
    c.r[18].d[0] = ld16((c.r[17].w[0] + 52u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[18].w[0] << 2);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00502354u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x00502354u) [[unlikely]] return; }
L_00502354:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00280000u);
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 16368u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00502370u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x00502370u) [[unlikely]] return; }
L_00502370:
    st32((c.r[17].w[0] + 156u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 2;
L_00502378:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 255u);  if (t) { goto L_005023D0; } }
L_00502384:
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 2u));
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1u));
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[6].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 19;
L_005023D0:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 52u));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 184u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00502384u | kUnwind; return; } goto L_00502384; }
    set32(c.r[2], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 156u)));  if (t) { goto L_00502420; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0050240C; } }
L_005023F8:
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 5;
L_0050240C:
    set32(c.r[3], ld32((c.r[29].w[0] + 184u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 38u));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 92u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x005023F8u | kUnwind; return; } goto L_005023F8; }
L_00502420:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], 0u + 116u);  goto L_00502550; }
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 60u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0050254C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 62u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0050254C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[2], c.r[16].w[0] + 8u);  if (t) { goto L_00502490; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 72u));
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0050253C; }
    set32(c.r[4], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00502490; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 73u));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 1u));
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[2].w[0] + 12u)));  goto L_0050249C; }
L_00502490:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0050253C; } }
L_0050249C:
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[5].d[0]) { c.r[7].d[0] = 0ull + 0ull;  goto L_0050252C; }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_005024C4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_005024C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0050253C; } }
L_005024C4:
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0050252C; } }
L_005024D0:
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 24u)));
    c.budget -= 8;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0050253C; }
    set32(c.r[4], ld32((c.r[5].w[0] + 100u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00502520; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 104u));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 32u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00502520; } }
    c.r[4].d[0] = ld8((c.r[5].w[0] + 105u));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 33u));
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_0050252C; }
L_00502520:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0050253C; } }
L_0050252C:
    c.r[3].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[7].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x005024D0u | kUnwind; return; } goto L_005024D0; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0050253C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0050254C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[17].w[0] + 68u));  if (t) { goto L_00502584; } }
L_0050254C:
    set32(c.r[4], 0u + 116u);
    c.budget -= 1;
L_00502550:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00502558u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00502558u) [[unlikely]] return; }
L_00502558:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = c.r[2].d[0] + 0ull;  goto L_00502580; }
    c.r[5].d[0] = ld16((c.r[17].w[0] + 60u));
    set32(c.r[8], 0u + 1u);
    c.r[6].d[0] = ld16((c.r[17].w[0] + 62u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], c.r[17].w[0] + 72u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050257Cu); c.r[9].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 242u, depth + 1u); else { c.pc = 0x002C6150u; return; } if (c.pc != 0x0050257Cu) [[unlikely]] return; }
L_0050257C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00502580:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 68u));
    c.budget -= 1;
L_00502584:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 96u)));  goto L_0050262C; }
    set32(c.r[4], 0u + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00502598u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00502598u) [[unlikely]] return; }
L_00502598:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { set32(c.r[18], ld32((c.r[16].w[0] + 80u)));  goto L_005025C0; }
    c.r[6].d[0] = ld16((c.r[17].w[0] + 52u));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 67u));
    set32(c.r[7], ld32((c.r[17].w[0] + 156u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005025B8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0070(c, 340u, depth + 1u); else { c.pc = 0x002C2DD0u; return; } if (c.pc != 0x005025B8u) [[unlikely]] return; }
L_005025B8:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 2;
L_005025C0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[19].d[0];  if (t) { goto L_00502628; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0] + 80u), c.r[19].w[0]);  goto L_00502608; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005025D8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x005025D8u) [[unlikely]] return; }
L_005025D8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005025E8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x005025E8u) [[unlikely]] return; }
L_005025E8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00502604; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00502604u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00502604u) [[unlikely]] return; }
L_00502604:
    st32((c.r[16].w[0] + 80u), c.r[19].w[0]);
    c.budget -= 1;
L_00502608:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00502628; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00502618u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00502618u) [[unlikely]] return; }
L_00502618:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00502628u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00502628u) [[unlikely]] return; }
L_00502628:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 1;
L_0050262C:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[19].d[0] = c.lo.d[0];
    c.budget -= 8;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[20], c.r[5].w[0] + c.r[4].w[0]);  if (t) { goto L_00502650; } }
    set32(c.r[19], c.r[3].w[0] >> 1);
    c.budget -= 1;
L_00502650:
    c.r[2].d[0] = ld8((c.r[17].w[0] + 69u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_005026A8; }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 62u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    mmi::mult(c, 0, c.r[19].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[20], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[19], 0u - c.r[19].w[0]);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005026A8; } }
L_0050267C:
    set32(c.r[3], c.r[18].w[0] << 2);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], c.r[17].w[0] + 160u);
    set32(c.r[2], ld32((c.r[2].w[0] + 320u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005026A0u); st32((c.r[17].w[0] + 148u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_00A5(c, 140u, depth + 1u); else { c.pc = 0x00397B00u; return; } if (c.pc != 0x005026A0u) [[unlikely]] return; }
L_005026A0:
    set32(c.r[20], c.r[20].w[0] + c.r[19].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_005026A8:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 62u));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 184u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0050267Cu | kUnwind; return; } goto L_0050267C; }
    set32(c.r[4], c.r[29].w[0] + 188u);
    set32(c.r[5], c.r[29].w[0] + 184u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005026CCu); st32((c.r[17].w[0] + 148u), 0u);  if (depth < kMaxDepth) unit_0039(c, 76u, depth + 1u); else { c.pc = 0x001E47B0u; return; } if (c.pc != 0x005026CCu) [[unlikely]] return; }
L_005026CC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_005026D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_005026F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050270Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 423u, depth + 1u); else { c.pc = 0x001F36A0u; return; } if (c.pc != 0x0050270Cu) [[unlikely]] return; }
L_0050270C:
    c.r[6].d[0] = c.r[16].d[0] << 32;
    set32(c.r[8], 0u + 1u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 60u), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00502734u); set32(c.r[7], c.r[29].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00502734u) [[unlikely]] return; }
L_00502734:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00502760:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00502770:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00502780:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00501D40u | kUnwind; return; } goto L_00501D40; }
L_00502790:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005027A8u); set32(c.r[5], c.r[5].w[0] + 22843u);  if (depth < kMaxDepth) unit_0047(c, 323u, depth + 1u); else { c.pc = 0x0021EE60u; return; } if (c.pc != 0x005027A8u) [[unlikely]] return; }
L_005027A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_005027C0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    c.r[16].d[0] = c.r[9].d[0] + 0ull;
    st32((c.r[10].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050280Cu); set32(c.r[5], c.r[21].w[0] + 20u);  if (depth < kMaxDepth) unit_0058(c, 283u, depth + 1u); else { c.pc = 0x002623F0u; return; } if (c.pc != 0x0050280Cu) [[unlikely]] return; }
L_0050280C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00502818u); set32(c.r[5], c.r[21].w[0] + 21u);  if (depth < kMaxDepth) unit_0058(c, 283u, depth + 1u); else { c.pc = 0x002623F0u; return; } if (c.pc != 0x00502818u) [[unlikely]] return; }
L_00502818:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00502824u); set32(c.r[5], c.r[21].w[0] + 22u);  if (depth < kMaxDepth) unit_0058(c, 283u, depth + 1u); else { c.pc = 0x002623F0u; return; } if (c.pc != 0x00502824u) [[unlikely]] return; }
L_00502824:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00502830u); set32(c.r[5], c.r[21].w[0] + 23u);  if (depth < kMaxDepth) unit_0058(c, 283u, depth + 1u); else { c.pc = 0x002623F0u; return; } if (c.pc != 0x00502830u) [[unlikely]] return; }
L_00502830:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050283Cu); set32(c.r[5], c.r[21].w[0] + 24u);  if (depth < kMaxDepth) unit_0058(c, 283u, depth + 1u); else { c.pc = 0x002623F0u; return; } if (c.pc != 0x0050283Cu) [[unlikely]] return; }
L_0050283C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00502848u); set32(c.r[5], c.r[21].w[0] + 25u);  if (depth < kMaxDepth) unit_0058(c, 283u, depth + 1u); else { c.pc = 0x002623F0u; return; } if (c.pc != 0x00502848u) [[unlikely]] return; }
L_00502848:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00502854u); set32(c.r[5], c.r[21].w[0] + 26u);  if (depth < kMaxDepth) unit_0058(c, 283u, depth + 1u); else { c.pc = 0x002623F0u; return; } if (c.pc != 0x00502854u) [[unlikely]] return; }
L_00502854:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00502860u); set32(c.r[5], c.r[21].w[0] + 27u);  if (depth < kMaxDepth) unit_0058(c, 283u, depth + 1u); else { c.pc = 0x002623F0u; return; } if (c.pc != 0x00502860u) [[unlikely]] return; }
L_00502860:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050286Cu); set32(c.r[5], c.r[21].w[0] + 28u);  if (depth < kMaxDepth) unit_0058(c, 282u, depth + 1u); else { c.pc = 0x002623E0u; return; } if (c.pc != 0x0050286Cu) [[unlikely]] return; }
L_0050286C:
    c.r[2].d[0] = ld8((c.r[21].w[0] + 28u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = ld8((c.r[21].w[0] + 29u));
    set32(c.r[5], c.r[21].w[0] + 32u);
    c.r[3].d[0] = ld8((c.r[21].w[0] + 30u));
    set32(c.r[7], c.r[2].w[0] << 24);
    set32(c.r[6], c.r[6].w[0] << 16);
    c.r[2].d[0] = ld8((c.r[21].w[0] + 31u));
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005028A4u); st32((c.r[21].w[0] + 28u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0058(c, 282u, depth + 1u); else { c.pc = 0x002623E0u; return; } if (c.pc != 0x005028A4u) [[unlikely]] return; }
L_005028A4:
    set32(c.r[6], ld32((c.r[21].w[0] + 32u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[21].w[0] + 36u);
    set32(c.r[5], c.r[5].w[0] + 22838u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    st8((c.r[21].w[0] + 36u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], c.r[3].w[0] >> 16);
    c.r[6].d[0] = c.r[6].d[0] & 65280ull;
    set32(c.r[2], c.r[2].w[0] >> 24);
    set32(c.r[6], c.r[6].w[0] >> 8);
    st8((c.r[21].w[0] + 37u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[21].w[0] + 38u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[21].w[0] + 39u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005028ECu); st8((c.r[21].w[0] + 40u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x005028ECu) [[unlikely]] return; }
L_005028EC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[21].w[0] + 49u));  goto L_005029B0; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00502900u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 282u, depth + 1u); else { c.pc = 0x002623E0u; return; } if (c.pc != 0x00502900u) [[unlikely]] return; }
L_00502900:
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = ld8((c.r[19].w[0] + 1u));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[19].w[0] + 2u));
    set32(c.r[7], c.r[2].w[0] << 24);
    set32(c.r[6], c.r[6].w[0] << 16);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 3u));
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00502938u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0058(c, 282u, depth + 1u); else { c.pc = 0x002623E0u; return; } if (c.pc != 0x00502938u) [[unlikely]] return; }
L_00502938:
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = ld8((c.r[18].w[0] + 1u));
    set32(c.r[5], c.r[29].w[0] + 124u);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 2u));
    set32(c.r[7], c.r[2].w[0] << 24);
    set32(c.r[6], c.r[6].w[0] << 16);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 3u));
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00502970u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0058(c, 283u, depth + 1u); else { c.pc = 0x002623F0u; return; } if (c.pc != 0x00502970u) [[unlikely]] return; }
L_00502970:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050297Cu); set32(c.r[5], c.r[21].w[0] + 49u);  if (depth < kMaxDepth) unit_0058(c, 283u, depth + 1u); else { c.pc = 0x002623F0u; return; } if (c.pc != 0x0050297Cu) [[unlikely]] return; }
L_0050297C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00502988u); set32(c.r[5], c.r[29].w[0] + 127u);  if (depth < kMaxDepth) unit_0058(c, 283u, depth + 1u); else { c.pc = 0x002623F0u; return; } if (c.pc != 0x00502988u) [[unlikely]] return; }
L_00502988:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00502994u); set32(c.r[5], c.r[29].w[0] + 126u);  if (depth < kMaxDepth) unit_0058(c, 283u, depth + 1u); else { c.pc = 0x002623F0u; return; } if (c.pc != 0x00502994u) [[unlikely]] return; }
L_00502994:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005029A0u); set32(c.r[5], c.r[29].w[0] + 125u);  if (depth < kMaxDepth) unit_0058(c, 283u, depth + 1u); else { c.pc = 0x002623F0u; return; } if (c.pc != 0x005029A0u) [[unlikely]] return; }
L_005029A0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005029ACu); set32(c.r[5], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_0058(c, 282u, depth + 1u); else { c.pc = 0x002623E0u; return; } if (c.pc != 0x005029ACu) [[unlikely]] return; }
L_005029AC:
    c.r[3].d[0] = ld8((c.r[21].w[0] + 49u));
    c.budget -= 1;
L_005029B0:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[3].d[0] = ld8((c.r[29].w[0] + 124u));  goto L_00502A28; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = ld8((c.r[29].w[0] + 124u));  goto L_00502A18; }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[3].d[0] = ld8((c.r[29].w[0] + 124u));  goto L_00502A08; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[3].d[0] = ld8((c.r[29].w[0] + 124u));  goto L_005029F4; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_005029F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[21].w[0] + 64u));  if (t) { goto L_00502A40; } }
L_005029F0:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 124u));
    c.budget -= 1;
L_005029F4:
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[21].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 68u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00502A3C; } }
L_00502A08:
    set32(c.r[2], 0u + 1u);
    st8((c.r[21].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 68u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00502A3C; } }
L_00502A18:
    set32(c.r[2], c.r[2].w[0] << 2);
    st8((c.r[21].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 68u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00502A3C; } }
L_00502A28:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    st8((c.r[21].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[21].w[0] + 67u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[21].w[0] + 68u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_00502A3C:
    c.r[3].d[0] = ld8((c.r[21].w[0] + 64u));
    c.budget -= 1;
L_00502A40:
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], 0u + 4u);  goto L_00502B1C; }
    set32(c.r[2], 0u + 24u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], 0u + 3u);  goto L_00502AF0; }
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_00502AE8; }
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00502AE4; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], 0u + 1u);  goto L_00502AB8; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { st8((c.r[21].w[0] + 66u), static_cast<std::uint8_t>(0u));  goto L_00502A90; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00502B48; } }
L_00502A90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[2] = ld32((c.r[2].w[0] + 32576u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[2].w[0] + 32580u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[2].w[0] + 32584u));
    st32((c.r[21].w[0] + 160u), c.f[2]);
    st32((c.r[21].w[0] + 164u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 168u), c.f[0]);  if (t) { goto L_00502B44; } }
L_00502AB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st8((c.r[21].w[0] + 66u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 32592u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[3].w[0] + 32596u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[2].w[0] + 32600u));
    st32((c.r[21].w[0] + 160u), c.f[2]);
    st32((c.r[21].w[0] + 164u), c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 168u), c.f[0]);  if (t) { goto L_00502B44; } }
L_00502AE4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00502AE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 66u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00502B44; } }
L_00502AF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st8((c.r[21].w[0] + 66u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 32608u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[3].w[0] + 32612u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[2].w[0] + 32616u));
    st32((c.r[21].w[0] + 160u), c.f[2]);
    st32((c.r[21].w[0] + 164u), c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 168u), c.f[0]);  if (t) { goto L_00502B44; } }
L_00502B1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st8((c.r[21].w[0] + 66u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 32624u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[1] = ld32((c.r[3].w[0] + 32628u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[2].w[0] + 32632u));
    st32((c.r[21].w[0] + 160u), c.f[2]);
    st32((c.r[21].w[0] + 164u), c.f[1]);
    st32((c.r[21].w[0] + 168u), c.f[0]);
    c.budget -= 10;
L_00502B44:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00502B48:
    st8((c.r[21].w[0] + 67u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 68u));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00502C94; }
    c.r[3].d[0] = ld8((c.r[29].w[0] + 124u));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_00502C00; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 24784u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[21].w[0] + 72u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[11].d[0] = ld8((c.r[8].w[0] + 24785u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[10], c.r[10].w[0] + 24808u);
    set32(c.r[9], c.r[21].w[0] + 96u);
    st8((c.r[21].w[0] + 73u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[8], 0u + 6u);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 24786u));
    st8((c.r[21].w[0] + 74u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[6].w[0] + 24788u)));
    st32((c.r[21].w[0] + 76u), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 24792u)));
    st32((c.r[21].w[0] + 80u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 24796u)));
    st32((c.r[21].w[0] + 84u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 24800u)));
    st32((c.r[21].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 24804u)));
    st32((c.r[21].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 28;
L_00502BD8:
    set32(c.r[3], ld32((c.r[10].w[0])));
    set32(c.r[8], c.r[8].w[0] - 1u);
    set32(c.r[2], ld32((c.r[10].w[0] + 4u)));
    st32((c.r[9].w[0]), c.r[3].w[0]);
    set32(c.r[10], c.r[10].w[0] + 8u);
    st32((c.r[9].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[8].sd[0] > 0; set32(c.r[9], c.r[9].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00502BD8u | kUnwind; return; } goto L_00502BD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0])));  if (t) { goto L_00502D24; } }
L_00502C00:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 24944u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[21].w[0] + 72u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[11].d[0] = ld8((c.r[8].w[0] + 24945u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[10], c.r[10].w[0] + 24968u);
    set32(c.r[9], c.r[21].w[0] + 96u);
    st8((c.r[21].w[0] + 73u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[8], 0u + 6u);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 24946u));
    st8((c.r[21].w[0] + 74u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[6].w[0] + 24948u)));
    st32((c.r[21].w[0] + 76u), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 24952u)));
    st32((c.r[21].w[0] + 80u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 24956u)));
    st32((c.r[21].w[0] + 84u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 24960u)));
    st32((c.r[21].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 24964u)));
    st32((c.r[21].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 27;
L_00502C6C:
    set32(c.r[3], ld32((c.r[10].w[0])));
    set32(c.r[8], c.r[8].w[0] - 1u);
    set32(c.r[2], ld32((c.r[10].w[0] + 4u)));
    st32((c.r[9].w[0]), c.r[3].w[0]);
    set32(c.r[10], c.r[10].w[0] + 8u);
    st32((c.r[9].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[8].sd[0] > 0; set32(c.r[9], c.r[9].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00502C6Cu | kUnwind; return; } goto L_00502C6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00502D20; } }
L_00502C94:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 25024u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[21].w[0] + 72u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[11].d[0] = ld8((c.r[8].w[0] + 25025u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[10], c.r[10].w[0] + 25048u);
    set32(c.r[9], c.r[21].w[0] + 96u);
    st8((c.r[21].w[0] + 73u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[8], 0u + 6u);
    c.r[7].d[0] = ld8((c.r[7].w[0] + 25026u));
    st8((c.r[21].w[0] + 74u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[6].w[0] + 25028u)));
    st32((c.r[21].w[0] + 76u), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 25032u)));
    st32((c.r[21].w[0] + 80u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 25036u)));
    st32((c.r[21].w[0] + 84u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 25040u)));
    st32((c.r[21].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 25044u)));
    st32((c.r[21].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 27;
L_00502D00:
    set32(c.r[3], ld32((c.r[10].w[0])));
    set32(c.r[8], c.r[8].w[0] - 1u);
    set32(c.r[2], ld32((c.r[10].w[0] + 4u)));
    st32((c.r[9].w[0]), c.r[3].w[0]);
    set32(c.r[10], c.r[10].w[0] + 8u);
    st32((c.r[9].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[8].sd[0] > 0; set32(c.r[9], c.r[9].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00502D00u | kUnwind; return; } goto L_00502D00; } }
L_00502D20:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_00502D24:
    set32(c.r[6], c.r[21].w[0] + 96u);
    set32(c.r[5], c.r[17].w[0] + 24u);
    set32(c.r[4], 0u + 6u);
    st16((c.r[21].w[0] + 60u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0])));
    st16((c.r[21].w[0] + 62u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 72u));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 73u));
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 74u));
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[21].w[0] + 76u)));
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 80u)));
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 84u)));
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 88u)));
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0] + 92u)));
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 22;
L_00502D7C:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00502D7Cu | kUnwind; return; } goto L_00502D7C; } }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00502DD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00502E00; } }
L_00502DD8:
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2u));
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 3u));
    st8((c.r[6].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 10;
L_00502E00:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 60u));
    c.r[3].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00502DD8u | kUnwind; return; } goto L_00502DD8; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00502E20:
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 255u);  if (t) { goto L_00502E50; } }
L_00502E2C:
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2u));
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 3u);
    st8((c.r[6].w[0] + 3u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 9;
L_00502E50:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 60u));
    c.r[3].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00502E2Cu | kUnwind; return; } goto L_00502E2C; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00502E70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00502E90; } }
L_00502E78:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 50u));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[7].w[0] - c.r[3].w[0]);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 6;
L_00502E90:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 60u));
    c.r[3].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[7].d[0] = ld8((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00502E78u | kUnwind; return; } goto L_00502E78; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00502EB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00502ED0; } }
L_00502EB8:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 50u));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[7].w[0] - c.r[3].w[0]);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 6;
L_00502ED0:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 60u));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.r[3].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[7].d[0] = ld8((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00502EB8u | kUnwind; return; } goto L_00502EB8; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00502EF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00502F7C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 22864u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 148u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00502F24u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x00502F24u) [[unlikely]] return; }
L_00502F24:
    set32(c.r[4], ld32((c.r[17].w[0] + 156u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00502F3Cu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x00502F3Cu) [[unlikely]] return; }
L_00502F3C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00502F64; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[17].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 7728u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_00502F60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00502F60u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_00A6(c, 152u, depth + 1u); else { c.pc = 0x00398E30u; return; } if (c.pc != 0x00502F60u) [[unlikely]] return; }
L_00502F60:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00502F64:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00502F80; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00502F7Cu); set32(c.r[5], 0u + 172u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00502F7Cu) [[unlikely]] return; }
L_00502F7C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00502F80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00502FA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 7728u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00502FC4u); set32(c.r[4], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_0047(c, 220u, depth + 1u); else { c.pc = 0x0021DEA0u; return; } if (c.pc != 0x00502FC4u) [[unlikely]] return; }
L_00502FC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[16].w[0] + 72u);
    set32(c.r[2], c.r[2].w[0] - 22864u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00502FD8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0071(c, 352u, depth + 1u); else { c.pc = 0x002C7D90u; return; } if (c.pc != 0x00502FD8u) [[unlikely]] return; }
L_00502FD8:
    st8((c.r[16].w[0] + 48u), static_cast<std::uint8_t>(0u));
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[16].w[0] + 49u), static_cast<std::uint8_t>(0u));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st16((c.r[16].w[0] + 50u), static_cast<std::uint16_t>(0u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(0u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[16].w[0] + 54u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st16((c.r[16].w[0] + 56u), static_cast<std::uint16_t>(0u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st16((c.r[16].w[0] + 58u), static_cast<std::uint16_t>(0u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st16((c.r[16].w[0] + 60u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st16((c.r[16].w[0] + 62u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st8((c.r[16].w[0] + 64u), static_cast<std::uint8_t>(0u));
    set32(c.r[12], c.r[12].w[0] + 25128u);
    st8((c.r[16].w[0] + 65u), static_cast<std::uint8_t>(0u));
    set32(c.r[11], c.r[16].w[0] + 96u);
    st8((c.r[16].w[0] + 66u), static_cast<std::uint8_t>(0u));
    set32(c.r[10], 0u + 6u);
    st8((c.r[16].w[0] + 67u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(0u));
    c.r[9].d[0] = ld8((c.r[9].w[0] + 25104u));
    st8((c.r[16].w[0] + 72u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[8].d[0] = ld8((c.r[8].w[0] + 25105u));
    st8((c.r[16].w[0] + 73u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[7].d[0] = ld8((c.r[7].w[0] + 25106u));
    st8((c.r[16].w[0] + 74u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], ld32((c.r[6].w[0] + 25108u)));
    st32((c.r[16].w[0] + 76u), c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 25112u)));
    st32((c.r[16].w[0] + 80u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 25116u)));
    st32((c.r[16].w[0] + 84u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 25120u)));
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 25124u)));
    st32((c.r[16].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 43;
L_00503084:
    set32(c.r[3], ld32((c.r[12].w[0])));
    set32(c.r[10], c.r[10].w[0] - 1u);
    set32(c.r[2], ld32((c.r[12].w[0] + 4u)));
    st32((c.r[11].w[0]), c.r[3].w[0]);
    set32(c.r[12], c.r[12].w[0] + 8u);
    st32((c.r[11].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[10].sd[0] > 0; set32(c.r[11], c.r[11].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00503084u | kUnwind; return; } goto L_00503084; } }
    st32((c.r[16].w[0] + 144u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[16].w[0] + 148u), 0u);
    set32(c.r[4], c.r[4].w[0] + 25072u);
    st32((c.r[16].w[0] + 152u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[16].w[0] + 156u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = ld32((c.r[3].w[0] + 25072u));
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[16].w[0] + 160u), c.f[2]);
    st32((c.r[16].w[0] + 164u), c.f[1]);
    st32((c.r[16].w[0] + 168u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_005030F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00503100:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 13;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00503438; } }
    set32(c.r[17], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00503168; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 88u)));
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00503168; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  goto L_00503518; }
L_00503168:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[16].w[0] + 76u)));  goto L_005031D4; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_005031B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503180u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00503180u) [[unlikely]] return; }
L_00503180:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503190u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00503190u) [[unlikely]] return; }
L_00503190:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_005031AC; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x005031ACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x005031ACu) [[unlikely]] return; }
L_005031AC:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_005031B0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 72u), 0u);  if (t) { goto L_005031D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005031C0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x005031C0u) [[unlikely]] return; }
L_005031C0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005031D0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x005031D0u) [[unlikely]] return; }
L_005031D0:
    set32(c.r[17], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_005031D4:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[28].w[0] - 27612u)));  goto L_00503240; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_0050321C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005031ECu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x005031ECu) [[unlikely]] return; }
L_005031EC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005031FCu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x005031FCu) [[unlikely]] return; }
L_005031FC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00503218; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00503218u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00503218u) [[unlikely]] return; }
L_00503218:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0050321C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 76u), 0u);  if (t) { goto L_0050323C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050322Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050322Cu) [[unlikely]] return; }
L_0050322C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050323Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050323Cu) [[unlikely]] return; }
L_0050323C:
    set32(c.r[17], ld32((c.r[28].w[0] - 27612u)));
    c.budget -= 1;
L_00503240:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 420u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00503250u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00503250u) [[unlikely]] return; }
L_00503250:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    mmi::pminw(c.r[18], c.r[3], c.r[2]);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 424u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00503270u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00503270u) [[unlikely]] return; }
L_00503270:
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    mmi::pminw(c.r[17], c.r[3], c.r[2]);
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050328Cu); st32((c.r[29].w[0] + 132u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x0050328Cu) [[unlikely]] return; }
L_0050328C:
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[4], 0u + 116u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050329Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0050329Cu) [[unlikely]] return; }
L_0050329C:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[20].d[0] == 0ull) { set32(c.r[19], ld32((c.r[16].w[0] + 72u)));  goto L_005032D0; }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[8], 0u + 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 25024u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005032C8u); c.r[9].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_0071(c, 242u, depth + 1u); else { c.pc = 0x002C6150u; return; } if (c.pc != 0x005032C8u) [[unlikely]] return; }
L_005032C8:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 2;
L_005032D0:
    c.budget -= 2;
    if (c.r[19].d[0] == c.r[20].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 128u)));  goto L_0050333C; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[16].w[0] + 72u), c.r[20].w[0]);  goto L_00503318; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005032E8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x005032E8u) [[unlikely]] return; }
L_005032E8:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005032F8u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x005032F8u) [[unlikely]] return; }
L_005032F8:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00503314; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00503314u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00503314u) [[unlikely]] return; }
L_00503314:
    st32((c.r[16].w[0] + 72u), c.r[20].w[0]);
    c.budget -= 1;
L_00503318:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00503338; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503328u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00503328u) [[unlikely]] return; }
L_00503328:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503338u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00503338u) [[unlikely]] return; }
L_00503338:
    set32(c.r[4], ld32((c.r[29].w[0] + 128u)));
    c.budget -= 1;
L_0050333C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503344u);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00503344u) [[unlikely]] return; }
L_00503344:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 72u)));  goto L_005033B8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[21], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_005033B4; } }
    set32(c.r[22], ld32((c.r[4].w[0] + 104u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 140u), c.r[2].w[0]);  if (t) { goto L_005033A8; } }
L_0050337C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00503398; } }
L_00503384:
    set32(c.r[5], c.r[29].w[0] + 140u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503390u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x00503390u) [[unlikely]] return; }
L_00503390:
    set32(c.r[21], c.r[21].w[0] + c.r[22].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 2;
L_00503398:
    c.r[2].d[0] = c.r[19].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00503384u | kUnwind; return; } goto L_00503384; }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_005033A8:
    c.r[2].d[0] = c.r[20].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0050337Cu | kUnwind; return; } goto L_0050337C; } }
L_005033B4:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 1;
L_005033B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005033C0u);  if (depth < kMaxDepth) unit_0047(c, 388u, depth + 1u); else { c.pc = 0x0021F500u; return; } if (c.pc != 0x005033C0u) [[unlikely]] return; }
L_005033C0:
    set32(c.r[18], ld32((c.r[16].w[0] + 76u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[17].d[0];  if (t) { goto L_00503514; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0] + 76u), c.r[17].w[0]);  goto L_00503410; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005033E0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x005033E0u) [[unlikely]] return; }
L_005033E0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005033F0u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x005033F0u) [[unlikely]] return; }
L_005033F0:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0050340C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050340Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050340Cu) [[unlikely]] return; }
L_0050340C:
    st32((c.r[16].w[0] + 76u), c.r[17].w[0]);
    c.budget -= 1;
L_00503410:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00503514; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503420u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00503420u) [[unlikely]] return; }
L_00503420:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503430u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00503430u) [[unlikely]] return; }
L_00503430:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00503514; } }
L_00503438:
    set32(c.r[17], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[16].w[0] + 76u)));  goto L_005034A8; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_00503484; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503454u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00503454u) [[unlikely]] return; }
L_00503454:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503464u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00503464u) [[unlikely]] return; }
L_00503464:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00503480; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00503480u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00503480u) [[unlikely]] return; }
L_00503480:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00503484:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 72u), 0u);  if (t) { goto L_005034A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503494u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00503494u) [[unlikely]] return; }
L_00503494:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005034A4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x005034A4u) [[unlikely]] return; }
L_005034A4:
    set32(c.r[17], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_005034A8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00503514; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 76u), 0u);  goto L_005034F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005034C0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x005034C0u) [[unlikely]] return; }
L_005034C0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005034D0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x005034D0u) [[unlikely]] return; }
L_005034D0:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_005034EC; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x005034ECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x005034ECu) [[unlikely]] return; }
L_005034EC:
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 1;
L_005034F0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00503514; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503504u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00503504u) [[unlikely]] return; }
L_00503504:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503514u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00503514u) [[unlikely]] return; }
L_00503514:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_00503518:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00503540:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050355Cu); set32(c.r[4], ld32((c.r[4].w[0] + 24u)));  if (depth < kMaxDepth) unit_0103(c, 58u, depth + 1u); else { c.pc = 0x0050C590u; return; } if (c.pc != 0x0050355Cu) [[unlikely]] return; }
L_0050355C:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  goto L_00503578; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503574u);  if (depth < kMaxDepth) unit_009E(c, 115u, depth + 1u); else { c.pc = 0x00379850u; return; } if (c.pc != 0x00503574u) [[unlikely]] return; }
L_00503574:
    set32(c.r[4], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 1;
L_00503578:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 24u)));  goto L_00503590; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503588u);  if (depth < kMaxDepth) unit_000A(c, 487u, depth + 1u); else { c.pc = 0x0012BEC0u; return; } if (c.pc != 0x00503588u) [[unlikely]] return; }
L_00503588:
    st32((c.r[16].w[0] + 80u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 2;
L_00503590:
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_005035C8; }
    st8((c.r[16].w[0] + 29u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = 0ull & 127ull;
    c.r[4].d[0] = ld8((c.r[16].w[0] + 28u));
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], 0u - 255u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_005035D0; } }
L_005035C8:
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 32u), 0u);
    c.budget -= 2;
L_005035D0:
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(0u));
    set32(c.r[17], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 8;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[16].w[0] + 76u)));  goto L_00503654; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_00503630; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503600u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00503600u) [[unlikely]] return; }
L_00503600:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503610u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00503610u) [[unlikely]] return; }
L_00503610:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0050362C; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050362Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050362Cu) [[unlikely]] return; }
L_0050362C:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00503630:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 72u), 0u);  if (t) { goto L_00503650; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503640u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00503640u) [[unlikely]] return; }
L_00503640:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503650u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00503650u) [[unlikely]] return; }
L_00503650:
    set32(c.r[17], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 1;
L_00503654:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_005036C4; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 76u), 0u);  goto L_0050369C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050366Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0050366Cu) [[unlikely]] return; }
L_0050366C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050367Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0050367Cu) [[unlikely]] return; }
L_0050367C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00503698; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00503698u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00503698u) [[unlikely]] return; }
L_00503698:
    st32((c.r[16].w[0] + 76u), 0u);
    c.budget -= 1;
L_0050369C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_005036C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005036B0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x005036B0u) [[unlikely]] return; }
L_005036B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005036C0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x005036C0u) [[unlikely]] return; }
L_005036C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_005036C4:
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_005036E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050370Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0103(c, 58u, depth + 1u); else { c.pc = 0x0050C590u; return; } if (c.pc != 0x0050370Cu) [[unlikely]] return; }
L_0050370C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x00200000u);  if (t) { goto L_00503718; } }
    c.r[16].d[0] = c.r[16].d[0] | 8192ull;
    c.budget -= 1;
L_00503718:
    set32(c.r[2], ld32((c.r[28].w[0] - 29204u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 141u));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_0050376C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503738u); set32(c.r[5], c.r[5].w[0] + 22848u);  if (depth < kMaxDepth) unit_000A(c, 495u, depth + 1u); else { c.pc = 0x0012BFD0u; return; } if (c.pc != 0x00503738u) [[unlikely]] return; }
L_00503738:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_005037A4; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[5].d[0] = c.r[16].d[0] | c.r[2].d[0];
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503760u); c.r[4].d[0] = c.r[2].d[0] | c.r[3].d[0];  if (depth < kMaxDepth) unit_009D(c, 182u, depth + 1u); else { c.pc = 0x00377088u; return; } if (c.pc != 0x00503760u) [[unlikely]] return; }
L_00503760:
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_005037A4; } }
L_0050376C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503774u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 398u, depth + 1u); else { c.pc = 0x0012B320u; return; } if (c.pc != 0x00503774u) [[unlikely]] return; }
L_00503774:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 81u);  goto L_00503788; }
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_00503788:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503790u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_009D(c, 182u, depth + 1u); else { c.pc = 0x00377088u; return; } if (c.pc != 0x00503790u) [[unlikely]] return; }
L_00503790:
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005037A4u); st32((c.r[3].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x005037A4u) [[unlikely]] return; }
L_005037A4:
    set32(c.r[4], c.r[18].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005037B0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x005037B0u) [[unlikely]] return; }
L_005037B0:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[2].w[0] + 8u)));  goto L_005038CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005037C8u);  if (depth < kMaxDepth) unit_009E(c, 198u, depth + 1u); else { c.pc = 0x0037AF98u; return; } if (c.pc != 0x005037C8u) [[unlikely]] return; }
L_005037C8:
    set32(c.r[4], 0u + 1u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 22851u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005037E4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x005037E4u) [[unlikely]] return; }
L_005037E4:
    st32((c.r[18].w[0] + 8u), 0u);
    set32(c.r[16], ld32((c.r[18].w[0] + 72u)));
    c.budget -= 4;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[18].w[0] + 76u)));  goto L_00503858; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_00503834; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503804u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00503804u) [[unlikely]] return; }
L_00503804:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503814u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00503814u) [[unlikely]] return; }
L_00503814:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00503830; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00503830u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00503830u) [[unlikely]] return; }
L_00503830:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00503834:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[18].w[0] + 72u), 0u);  if (t) { goto L_00503854; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503844u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00503844u) [[unlikely]] return; }
L_00503844:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503854u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00503854u) [[unlikely]] return; }
L_00503854:
    set32(c.r[16], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 1;
L_00503858:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_005038E8; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_005038A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503870u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00503870u) [[unlikely]] return; }
L_00503870:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503880u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00503880u) [[unlikely]] return; }
L_00503880:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0050389C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0050389Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0050389Cu) [[unlikely]] return; }
L_0050389C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_005038A0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[18].w[0] + 76u), 0u);  if (t) { goto L_005038C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005038B0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x005038B0u) [[unlikely]] return; }
L_005038B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005038C0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x005038C0u) [[unlikely]] return; }
L_005038C0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_005038E8; } }
L_005038CC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005038DCu); st8((c.r[18].w[0] + 68u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0100(c, 350u, depth + 1u); else { c.pc = 0x00503100u; return; } if (c.pc != 0x005038DCu) [[unlikely]] return; }
L_005038DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005038E4u); set32(c.r[4], ld32((c.r[18].w[0] + 24u)));  if (depth < kMaxDepth) unit_0103(c, 54u, depth + 1u); else { c.pc = 0x0050C530u; return; } if (c.pc != 0x005038E4u) [[unlikely]] return; }
L_005038E4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_005038E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00503910:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503934u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0012(c, 464u, depth + 1u); else { c.pc = 0x0014B860u; return; } if (c.pc != 0x00503934u) [[unlikely]] return; }
L_00503934:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 24u)));  goto L_00503950; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050394Cu); c.r[5].d[0] = c.r[16].d[0] & 255ull;  if (depth < kMaxDepth) unit_009E(c, 140u, depth + 1u); else { c.pc = 0x00379C58u; return; } if (c.pc != 0x0050394Cu) [[unlikely]] return; }
L_0050394C:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_00503950:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0050395Cu); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0012(c, 465u, depth + 1u); else { c.pc = 0x0014B870u; return; } if (c.pc != 0x0050395Cu) [[unlikely]] return; }
L_0050395C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00503970:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503994u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0012(c, 464u, depth + 1u); else { c.pc = 0x0014B860u; return; } if (c.pc != 0x00503994u) [[unlikely]] return; }
L_00503994:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 24u)));  goto L_005039B4; }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005039B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009E(c, 202u, depth + 1u); else { c.pc = 0x0037B128u; return; } if (c.pc != 0x005039B0u) [[unlikely]] return; }
L_005039B0:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_005039B4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x005039C0u); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0012(c, 465u, depth + 1u); else { c.pc = 0x0014B870u; return; } if (c.pc != 0x005039C0u) [[unlikely]] return; }
L_005039C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_005039E0:
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    st32((c.r[4].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    st32((c.r[4].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 11;
    if (c.r[3].sd[0] >= 0) { set32(c.r[3], ld32((c.r[4].w[0] + 48u)));  goto L_00503A14; }
    st32((c.r[4].w[0] + 56u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 2;
L_00503A14:
    c.budget -= 2;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00503A20; } }
    st32((c.r[4].w[0] + 48u), 0u);
    c.budget -= 1;
L_00503A20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00503A30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00503B14; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 68u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_00503B18; }
    set32(c.r[17], ld32((c.r[28].w[0] - 27612u)));
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 420u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00503A70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00503A70u) [[unlikely]] return; }
L_00503A70:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 424u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00503A84u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00503A84u) [[unlikely]] return; }
L_00503A84:
    set32(c.r[5], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[7], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 88u)));
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[7].w[0] + c.r[4].w[0]);
    c.r[1].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 92u)));  goto L_00503AAC; }
    set32(c.r[7], c.r[16].w[0] - c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    c.budget -= 2;
L_00503AAC:
    set32(c.r[8], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[8].w[0] + c.r[4].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 92u)));  goto L_00503ACC; }
    set32(c.r[8], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 92u)));
    c.budget -= 2;
L_00503ACC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 88u)));
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[5].w[0] - 1u);
    st32((c.r[29].w[0] + 64u), 0u);
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] - 1u);
    st32((c.r[29].w[0] + 72u), 0u);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 436u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00503B08u); set32(c.r[6], c.r[29].w[0] + 64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00503B08u) [[unlikely]] return; }
L_00503B08:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503B14u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0049(c, 115u, depth + 1u); else { c.pc = 0x002261A0u; return; } if (c.pc != 0x00503B14u) [[unlikely]] return; }
L_00503B14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00503B18:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00503B30:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 11;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 72u)));  goto L_00503BD8; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st8((c.r[18].w[0] + 68u), static_cast<std::uint8_t>(0u));  goto L_00503B78; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503B6Cu);  if (depth < kMaxDepth) unit_009E(c, 115u, depth + 1u); else { c.pc = 0x00379850u; return; } if (c.pc != 0x00503B6Cu) [[unlikely]] return; }
L_00503B6C:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    st32((c.r[2].w[0] + 12u), 0u);
    st8((c.r[18].w[0] + 68u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_00503B78:
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 28u)));  goto L_00503B94; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503B8Cu);  if (depth < kMaxDepth) unit_000A(c, 487u, depth + 1u); else { c.pc = 0x0012BEC0u; return; } if (c.pc != 0x00503B8Cu) [[unlikely]] return; }
L_00503B8C:
    st32((c.r[18].w[0] + 80u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 2;
L_00503B94:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[18].w[0] + 29u);  goto L_00503BA4; }
    set32(c.r[5], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 1;
L_00503BA4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503BB0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0100(c, 405u, depth + 1u); else { c.pc = 0x005036E0u; return; } if (c.pc != 0x00503BB0u) [[unlikely]] return; }
L_00503BB0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  [[clang::musttail]] return unit_0101(c, 7u, depth); }
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503BCCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009E(c, 93u, depth + 1u); else { c.pc = 0x00379448u; return; } if (c.pc != 0x00503BCCu) [[unlikely]] return; }
L_00503BCC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0101(c, 7u, depth); } }
L_00503BD8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[3].w[0] + 4u);  goto L_00503C5C; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st8((c.r[18].w[0] + 68u), static_cast<std::uint8_t>(0u));  goto L_00503BFC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503BF0u);  if (depth < kMaxDepth) unit_009E(c, 115u, depth + 1u); else { c.pc = 0x00379850u; return; } if (c.pc != 0x00503BF0u) [[unlikely]] return; }
L_00503BF0:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    st32((c.r[2].w[0] + 12u), 0u);
    st8((c.r[18].w[0] + 68u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_00503BFC:
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 28u)));  goto L_00503C18; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503C10u);  if (depth < kMaxDepth) unit_000A(c, 487u, depth + 1u); else { c.pc = 0x0012BEC0u; return; } if (c.pc != 0x00503C10u) [[unlikely]] return; }
L_00503C10:
    st32((c.r[18].w[0] + 80u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 2;
L_00503C18:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[18].w[0] + 29u);  goto L_00503C28; }
    set32(c.r[5], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 1;
L_00503C28:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503C34u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0100(c, 405u, depth + 1u); else { c.pc = 0x005036E0u; return; } if (c.pc != 0x00503C34u) [[unlikely]] return; }
L_00503C34:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  [[clang::musttail]] return unit_0101(c, 7u, depth); }
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503C50u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009E(c, 93u, depth + 1u); else { c.pc = 0x00379448u; return; } if (c.pc != 0x00503C50u) [[unlikely]] return; }
L_00503C50:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0101(c, 7u, depth); } }
L_00503C5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503C64u);  if (depth < kMaxDepth) unit_0012(c, 464u, depth + 1u); else { c.pc = 0x0014B860u; return; } if (c.pc != 0x00503C64u) [[unlikely]] return; }
L_00503C64:
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8u));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[3].w[0] + 12u)));  goto L_00503C88; }
    set32(c.r[4], c.r[3].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503C80u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0012(c, 465u, depth + 1u); else { c.pc = 0x0014B870u; return; } if (c.pc != 0x00503C80u) [[unlikely]] return; }
L_00503C80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_0101(c, 7u, depth); } }
L_00503C88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503C90u);  if (depth < kMaxDepth) unit_009E(c, 41u, depth + 1u); else { c.pc = 0x003789E8u; return; } if (c.pc != 0x00503C90u) [[unlikely]] return; }
L_00503C90:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 24u)));  goto L_00503CF0; }
    set32(c.r[7], ld32((c.r[18].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00503CEC; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[7].w[0] + 96u)));
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[7].w[0] + 84u)));
    set32(c.r[10], 0u + 3u);
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[6], ld32((c.r[7].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 88u)));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0] + 92u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503CE4u); mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]); c.r[6].d[0] = c.lo.d[0];  if (depth < kMaxDepth) unit_009E(c, 199u, depth + 1u); else { c.pc = 0x0037B0D8u; return; } if (c.pc != 0x00503CE4u) [[unlikely]] return; }
L_00503CE4:
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 68u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00503CEC:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 1;
L_00503CF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503CF8u); set32(c.r[4], ld32((c.r[2].w[0] + 12u)));  if (depth < kMaxDepth) unit_009E(c, 71u, depth + 1u); else { c.pc = 0x00378FF8u; return; } if (c.pc != 0x00503CF8u) [[unlikely]] return; }
L_00503CF8:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 11;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], ld32((c.r[28].w[0] - 28976u)));  goto L_00503F68; }
    set32(c.r[17], ld32((c.r[28].w[0] - 28976u)));
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 156u);
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503D44u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 478u, depth + 1u); else { c.pc = 0x00147FB0u; return; } if (c.pc != 0x00503D44u) [[unlikely]] return; }
L_00503D44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00503DD8; } }
L_00503D4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503D54u); set32(c.r[4], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_0011(c, 477u, depth + 1u); else { c.pc = 0x00147FA0u; return; } if (c.pc != 0x00503D54u) [[unlikely]] return; }
L_00503D54:
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 104u);
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00503D70u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00503D70u) [[unlikely]] return; }
L_00503D70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503D78u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 476u, depth + 1u); else { c.pc = 0x00147F90u; return; } if (c.pc != 0x00503D78u) [[unlikely]] return; }
L_00503D78:
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 24u)));  goto L_00503DF0; }
    set32(c.r[4], c.r[29].w[0] + 148u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503D90u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 478u, depth + 1u); else { c.pc = 0x00147FB0u; return; } if (c.pc != 0x00503D90u) [[unlikely]] return; }
L_00503D90:
    set32(c.r[4], c.r[29].w[0] + 152u);
    set32(c.r[5], c.r[29].w[0] + 148u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503DA0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 475u, depth + 1u); else { c.pc = 0x00147F70u; return; } if (c.pc != 0x00503DA0u) [[unlikely]] return; }
L_00503DA0:
    set32(c.r[4], c.r[29].w[0] + 156u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503DACu); set32(c.r[5], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_0011(c, 474u, depth + 1u); else { c.pc = 0x00147F60u; return; } if (c.pc != 0x00503DACu) [[unlikely]] return; }
L_00503DAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503DB4u); set32(c.r[4], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_0011(c, 477u, depth + 1u); else { c.pc = 0x00147FA0u; return; } if (c.pc != 0x00503DB4u) [[unlikely]] return; }
L_00503DB4:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_00503DD4; } }
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[29].w[0] + 156u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503DD4u); set32(c.r[16], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0011(c, 473u, depth + 1u); else { c.pc = 0x00147F40u; return; } if (c.pc != 0x00503DD4u) [[unlikely]] return; }
L_00503DD4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00503DD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503DE0u);  if (depth < kMaxDepth) unit_0011(c, 476u, depth + 1u); else { c.pc = 0x00147F90u; return; } if (c.pc != 0x00503DE0u) [[unlikely]] return; }
L_00503DE0:
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00503D4Cu | kUnwind; return; } goto L_00503D4C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 1;
L_00503DF0:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503DFCu); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0012(c, 465u, depth + 1u); else { c.pc = 0x0014B870u; return; } if (c.pc != 0x00503DFCu) [[unlikely]] return; }
L_00503DFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503E04u); set32(c.r[4], 0u + 100u);  if (depth < kMaxDepth) unit_000A(c, 144u, depth + 1u); else { c.pc = 0x001292E0u; return; } if (c.pc != 0x00503E04u) [[unlikely]] return; }
L_00503E04:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { st8((c.r[18].w[0] + 68u), static_cast<std::uint8_t>(0u));  goto L_00503E28; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503E1Cu);  if (depth < kMaxDepth) unit_009E(c, 115u, depth + 1u); else { c.pc = 0x00379850u; return; } if (c.pc != 0x00503E1Cu) [[unlikely]] return; }
L_00503E1C:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    st32((c.r[2].w[0] + 12u), 0u);
    st8((c.r[18].w[0] + 68u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_00503E28:
    set32(c.r[4], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 28u)));  goto L_00503E44; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503E3Cu);  if (depth < kMaxDepth) unit_000A(c, 487u, depth + 1u); else { c.pc = 0x0012BEC0u; return; } if (c.pc != 0x00503E3Cu) [[unlikely]] return; }
L_00503E3C:
    st32((c.r[18].w[0] + 80u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 2;
L_00503E44:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[18].w[0] + 29u);  goto L_00503E54; }
    set32(c.r[5], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 1;
L_00503E54:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503E60u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0100(c, 405u, depth + 1u); else { c.pc = 0x005036E0u; return; } if (c.pc != 0x00503E60u) [[unlikely]] return; }
L_00503E60:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 24u)));  goto L_00503E70; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00503E84; } }
L_00503E70:
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503E80u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_009E(c, 93u, depth + 1u); else { c.pc = 0x00379448u; return; } if (c.pc != 0x00503E80u) [[unlikely]] return; }
L_00503E80:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00503E84:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00503DFCu | kUnwind; return; } goto L_00503DFC; } }
    set32(c.r[18], ld32((c.r[28].w[0] - 28976u)));
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 140u);
    st32((c.r[29].w[0] + 100u), 0u);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503EB4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 478u, depth + 1u); else { c.pc = 0x00147FB0u; return; } if (c.pc != 0x00503EB4u) [[unlikely]] return; }
L_00503EB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00503F48; } }
L_00503EBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503EC4u); set32(c.r[4], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_0011(c, 477u, depth + 1u); else { c.pc = 0x00147FA0u; return; } if (c.pc != 0x00503EC4u) [[unlikely]] return; }
L_00503EC4:
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 96u);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00503EE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00503EE0u) [[unlikely]] return; }
L_00503EE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503EE8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 476u, depth + 1u); else { c.pc = 0x00147F90u; return; } if (c.pc != 0x00503EE8u) [[unlikely]] return; }
L_00503EE8:
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  [[clang::musttail]] return unit_0101(c, 7u, depth); }
    set32(c.r[4], c.r[29].w[0] + 132u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503F00u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 478u, depth + 1u); else { c.pc = 0x00147FB0u; return; } if (c.pc != 0x00503F00u) [[unlikely]] return; }
L_00503F00:
    set32(c.r[4], c.r[29].w[0] + 136u);
    set32(c.r[5], c.r[29].w[0] + 132u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503F10u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 475u, depth + 1u); else { c.pc = 0x00147F70u; return; } if (c.pc != 0x00503F10u) [[unlikely]] return; }
L_00503F10:
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503F1Cu); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_0011(c, 474u, depth + 1u); else { c.pc = 0x00147F60u; return; } if (c.pc != 0x00503F1Cu) [[unlikely]] return; }
L_00503F1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503F24u); set32(c.r[4], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_0011(c, 477u, depth + 1u); else { c.pc = 0x00147FA0u; return; } if (c.pc != 0x00503F24u) [[unlikely]] return; }
L_00503F24:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_00503F44; } }
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 140u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503F44u); set32(c.r[17], c.r[17].w[0] + 1u);  if (depth < kMaxDepth) unit_0011(c, 473u, depth + 1u); else { c.pc = 0x00147F40u; return; } if (c.pc != 0x00503F44u) [[unlikely]] return; }
L_00503F44:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00503F48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503F50u);  if (depth < kMaxDepth) unit_0011(c, 476u, depth + 1u); else { c.pc = 0x00147F90u; return; } if (c.pc != 0x00503F50u) [[unlikely]] return; }
L_00503F50:
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00503EBCu | kUnwind; return; } goto L_00503EBC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0101(c, 7u, depth); } }
L_00503F68:
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 124u);
    st32((c.r[29].w[0] + 92u), 0u);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503F84u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 478u, depth + 1u); else { c.pc = 0x00147FB0u; return; } if (c.pc != 0x00503F84u) [[unlikely]] return; }
L_00503F84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_0101(c, 3u, depth); } }
L_00503F8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503F94u); set32(c.r[4], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_0011(c, 477u, depth + 1u); else { c.pc = 0x00147FA0u; return; } if (c.pc != 0x00503F94u) [[unlikely]] return; }
L_00503F94:
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 88u);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00503FB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00503FB0u) [[unlikely]] return; }
L_00503FB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503FB8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 476u, depth + 1u); else { c.pc = 0x00147F90u; return; } if (c.pc != 0x00503FB8u) [[unlikely]] return; }
L_00503FB8:
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 24u)));  [[clang::musttail]] return unit_0101(c, 5u, depth); }
    set32(c.r[4], c.r[29].w[0] + 116u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503FD0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 478u, depth + 1u); else { c.pc = 0x00147FB0u; return; } if (c.pc != 0x00503FD0u) [[unlikely]] return; }
L_00503FD0:
    set32(c.r[4], c.r[29].w[0] + 120u);
    set32(c.r[5], c.r[29].w[0] + 116u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503FE0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 475u, depth + 1u); else { c.pc = 0x00147F70u; return; } if (c.pc != 0x00503FE0u) [[unlikely]] return; }
L_00503FE0:
    set32(c.r[4], c.r[29].w[0] + 124u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503FECu); set32(c.r[5], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_0011(c, 474u, depth + 1u); else { c.pc = 0x00147F60u; return; } if (c.pc != 0x00503FECu) [[unlikely]] return; }
L_00503FEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00503FF4u); set32(c.r[4], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_0011(c, 477u, depth + 1u); else { c.pc = 0x00147FA0u; return; } if (c.pc != 0x00503FF4u) [[unlikely]] return; }
L_00503FF4:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { [[clang::musttail]] return unit_0101(c, 2u, depth); } }
    [[clang::musttail]] return unit_0101(c, 1u, depth);
}

}
