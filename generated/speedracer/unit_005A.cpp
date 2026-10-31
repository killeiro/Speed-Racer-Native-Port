#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_005A[4096] = {
    1, 0, 0, 0, 0, 2, 3, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0,
    0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11,
    0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0,
    16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0,
    0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 26, 0, 27, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40,
    0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0,
    63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0,
    0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0,
    76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0,
    82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0,
    0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94,
    0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0,
    0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0,
    105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 111,
    0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117,
    0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 123, 0, 0,
    0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0,
    0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144,
    0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 151,
    0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163,
    0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    170, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0,
    0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0,
    0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0,
    0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0,
    0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0,
    0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0,
    0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0,
    218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 223, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0,
    226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0,
    0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 241, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 249, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0,
    0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 261, 0, 0, 262, 0, 0, 263, 0, 0, 264, 0, 0, 265, 0, 0, 266, 0, 0, 0, 0, 267,
    0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0,
    0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 275, 0, 0, 0, 0, 0, 0, 0, 276,
    0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 282, 0,
    0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 290,
    0, 0, 291, 0, 0, 292, 0, 0, 293, 0, 0, 294, 0, 0, 295, 0, 296, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0,
    0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0,
    0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0,
    308, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0,
    0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 342, 0, 343, 0, 0, 344, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0,
    0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    365, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 372,
    0, 0, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 0, 0,
    0, 378, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0,
    0, 384, 0, 0, 0, 385, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0,
    0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 392, 0, 0, 393, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0,
    395, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0,
    0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0,
    408, 0, 0, 0, 0, 409, 0, 0, 410, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0,
};

void unit_005A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00268000;
    case 2u: goto L_00268014;
    case 3u: goto L_00268018;
    case 4u: goto L_0026801C;
    case 5u: goto L_00268050;
    case 6u: goto L_00268070;
    case 7u: goto L_00268094;
    case 8u: goto L_00268100;
    case 9u: goto L_00268150;
    case 10u: goto L_00268170;
    case 11u: goto L_0026817C;
    case 12u: goto L_00268184;
    case 13u: goto L_002681A4;
    case 14u: goto L_002681E0;
    case 15u: goto L_002681F0;
    case 16u: goto L_00268200;
    case 17u: goto L_00268228;
    case 18u: goto L_00268234;
    case 19u: goto L_00268258;
    case 20u: goto L_00268278;
    case 21u: goto L_00268284;
    case 22u: goto L_0026829C;
    case 23u: goto L_002682AC;
    case 24u: goto L_002682D4;
    case 25u: goto L_002682E8;
    case 26u: goto L_002682F0;
    case 27u: goto L_002682F8;
    case 28u: goto L_00268350;
    case 29u: goto L_00268368;
    case 30u: goto L_00268378;
    case 31u: goto L_002683B0;
    case 32u: goto L_002683DC;
    case 33u: goto L_0026840C;
    case 34u: goto L_00268430;
    case 35u: goto L_00268454;
    case 36u: goto L_00268498;
    case 37u: goto L_00268510;
    case 38u: goto L_00268544;
    case 39u: goto L_00268554;
    case 40u: goto L_0026857C;
    case 41u: goto L_002685A0;
    case 42u: goto L_002685C0;
    case 43u: goto L_002685CC;
    case 44u: goto L_002685E4;
    case 45u: goto L_002685F4;
    case 46u: goto L_0026861C;
    case 47u: goto L_00268630;
    case 48u: goto L_00268638;
    case 49u: goto L_0026865C;
    case 50u: goto L_002686A0;
    case 51u: goto L_002686C8;
    case 52u: goto L_002686D4;
    case 53u: goto L_00268700;
    case 54u: goto L_00268720;
    case 55u: goto L_0026874C;
    case 56u: goto L_00268774;
    case 57u: goto L_002687B0;
    case 58u: goto L_002687D0;
    case 59u: goto L_002687E0;
    case 60u: goto L_0026880C;
    case 61u: goto L_00268858;
    case 62u: goto L_0026886C;
    case 63u: goto L_00268880;
    case 64u: goto L_002688C0;
    case 65u: goto L_002688E0;
    case 66u: goto L_002688EC;
    case 67u: goto L_00268904;
    case 68u: goto L_00268914;
    case 69u: goto L_0026893C;
    case 70u: goto L_00268950;
    case 71u: goto L_00268970;
    case 72u: goto L_002689A8;
    case 73u: goto L_002689E0;
    case 74u: goto L_00268A5C;
    case 75u: goto L_00268A70;
    case 76u: goto L_00268A80;
    case 77u: goto L_00268AA0;
    case 78u: goto L_00268AD4;
    case 79u: goto L_00268AF8;
    case 80u: goto L_00268B50;
    case 81u: goto L_00268B70;
    case 82u: goto L_00268B80;
    case 83u: goto L_00268C08;
    case 84u: goto L_00268C58;
    case 85u: goto L_00268CC0;
    case 86u: goto L_00268D20;
    case 87u: goto L_00268D64;
    case 88u: goto L_00268D70;
    case 89u: goto L_00268D90;
    case 90u: goto L_00268DAC;
    case 91u: goto L_00268DD0;
    case 92u: goto L_00268EB0;
    case 93u: goto L_00268EE8;
    case 94u: goto L_00268EFC;
    case 95u: goto L_00268F0C;
    case 96u: goto L_00268F18;
    case 97u: goto L_00268F34;
    case 98u: goto L_00268FCC;
    case 99u: goto L_00269078;
    case 100u: goto L_0026908C;
    case 101u: goto L_002690A0;
    case 102u: goto L_002690C0;
    case 103u: goto L_002690D0;
    case 104u: goto L_002690EC;
    case 105u: goto L_00269100;
    case 106u: goto L_00269110;
    case 107u: goto L_00269128;
    case 108u: goto L_0026913C;
    case 109u: goto L_00269148;
    case 110u: goto L_00269158;
    case 111u: goto L_0026917C;
    case 112u: goto L_0026918C;
    case 113u: goto L_002691A8;
    case 114u: goto L_002691BC;
    case 115u: goto L_002691CC;
    case 116u: goto L_002691EC;
    case 117u: goto L_002691FC;
    case 118u: goto L_00269218;
    case 119u: goto L_0026922C;
    case 120u: goto L_0026923C;
    case 121u: goto L_00269258;
    case 122u: goto L_00269264;
    case 123u: goto L_00269274;
    case 124u: goto L_00269288;
    case 125u: goto L_0026929C;
    case 126u: goto L_002692AC;
    case 127u: goto L_002692C8;
    case 128u: goto L_002692F0;
    case 129u: goto L_00269328;
    case 130u: goto L_00269344;
    case 131u: goto L_00269354;
    case 132u: goto L_00269390;
    case 133u: goto L_002693B0;
    case 134u: goto L_002693C0;
    case 135u: goto L_00269420;
    case 136u: goto L_00269438;
    case 137u: goto L_00269460;
    case 138u: goto L_00269470;
    case 139u: goto L_0026948C;
    case 140u: goto L_002694A0;
    case 141u: goto L_002694B0;
    case 142u: goto L_002694D0;
    case 143u: goto L_002694E0;
    case 144u: goto L_002694FC;
    case 145u: goto L_00269510;
    case 146u: goto L_00269520;
    case 147u: goto L_0026952C;
    case 148u: goto L_00269544;
    case 149u: goto L_0026955C;
    case 150u: goto L_0026956C;
    case 151u: goto L_0026957C;
    case 152u: goto L_00269590;
    case 153u: goto L_002695C0;
    case 154u: goto L_00269608;
    case 155u: goto L_00269628;
    case 156u: goto L_00269644;
    case 157u: goto L_00269650;
    case 158u: goto L_0026968C;
    case 159u: goto L_0026969C;
    case 160u: goto L_002696AC;
    case 161u: goto L_002696B8;
    case 162u: goto L_002696D8;
    case 163u: goto L_002696FC;
    case 164u: goto L_00269720;
    case 165u: goto L_00269730;
    case 166u: goto L_00269750;
    case 167u: goto L_002697B4;
    case 168u: goto L_002697C8;
    case 169u: goto L_002697D8;
    case 170u: goto L_00269800;
    case 171u: goto L_0026980C;
    case 172u: goto L_0026985C;
    case 173u: goto L_00269874;
    case 174u: goto L_002698C4;
    case 175u: goto L_002698D4;
    case 176u: goto L_0026990C;
    case 177u: goto L_0026991C;
    case 178u: goto L_00269938;
    case 179u: goto L_0026994C;
    case 180u: goto L_0026995C;
    case 181u: goto L_00269970;
    case 182u: goto L_00269990;
    case 183u: goto L_002699A4;
    case 184u: goto L_002699C8;
    case 185u: goto L_002699D8;
    case 186u: goto L_002699F4;
    case 187u: goto L_00269A08;
    case 188u: goto L_00269A18;
    case 189u: goto L_00269A38;
    case 190u: goto L_00269A48;
    case 191u: goto L_00269A64;
    case 192u: goto L_00269A78;
    case 193u: goto L_00269A88;
    case 194u: goto L_00269AAC;
    case 195u: goto L_00269AC4;
    case 196u: goto L_00269B14;
    case 197u: goto L_00269B24;
    case 198u: goto L_00269B3C;
    case 199u: goto L_00269B5C;
    case 200u: goto L_00269B6C;
    case 201u: goto L_00269B88;
    case 202u: goto L_00269B9C;
    case 203u: goto L_00269BAC;
    case 204u: goto L_00269BC0;
    case 205u: goto L_00269BE0;
    case 206u: goto L_00269BF4;
    case 207u: goto L_00269C18;
    case 208u: goto L_00269C28;
    case 209u: goto L_00269C44;
    case 210u: goto L_00269C58;
    case 211u: goto L_00269C68;
    case 212u: goto L_00269C88;
    case 213u: goto L_00269C98;
    case 214u: goto L_00269CB4;
    case 215u: goto L_00269CC8;
    case 216u: goto L_00269CD8;
    case 217u: goto L_00269CF0;
    case 218u: goto L_00269D00;
    case 219u: goto L_00269D20;
    case 220u: goto L_00269D34;
    case 221u: goto L_00269D48;
    case 222u: goto L_00269D58;
    case 223u: goto L_00269D74;
    case 224u: goto L_00269DB0;
    case 225u: goto L_00269DF0;
    case 226u: goto L_00269E00;
    case 227u: goto L_00269E30;
    case 228u: goto L_00269E50;
    case 229u: goto L_00269E60;
    case 230u: goto L_00269E90;
    case 231u: goto L_00269EB4;
    case 232u: goto L_00269EC4;
    case 233u: goto L_00269EF4;
    case 234u: goto L_00269F18;
    case 235u: goto L_00269F28;
    case 236u: goto L_00269F58;
    case 237u: goto L_00269F80;
    case 238u: goto L_00269F90;
    case 239u: goto L_00269FC0;
    case 240u: goto L_00269FE4;
    case 241u: goto L_0026A014;
    case 242u: goto L_0026A020;
    case 243u: goto L_0026A068;
    case 244u: goto L_0026A078;
    case 245u: goto L_0026A0AC;
    case 246u: goto L_0026A0C0;
    case 247u: goto L_0026A0D0;
    case 248u: goto L_0026A0E0;
    case 249u: goto L_0026A108;
    case 250u: goto L_0026A114;
    case 251u: goto L_0026A140;
    case 252u: goto L_0026A154;
    case 253u: goto L_0026A160;
    case 254u: goto L_0026A174;
    case 255u: goto L_0026A190;
    case 256u: goto L_0026A1AC;
    case 257u: goto L_0026A1CC;
    case 258u: goto L_0026A1EC;
    case 259u: goto L_0026A254;
    case 260u: goto L_0026A390;
    case 261u: goto L_0026A3AC;
    case 262u: goto L_0026A3B8;
    case 263u: goto L_0026A3C4;
    case 264u: goto L_0026A3D0;
    case 265u: goto L_0026A3DC;
    case 266u: goto L_0026A3E8;
    case 267u: goto L_0026A3FC;
    case 268u: goto L_0026A410;
    case 269u: goto L_0026A430;
    case 270u: goto L_0026A44C;
    case 271u: goto L_0026A474;
    case 272u: goto L_0026A490;
    case 273u: goto L_0026A4B0;
    case 274u: goto L_0026A4D4;
    case 275u: goto L_0026A4DC;
    case 276u: goto L_0026A4FC;
    case 277u: goto L_0026A50C;
    case 278u: goto L_0026A528;
    case 279u: goto L_0026A53C;
    case 280u: goto L_0026A54C;
    case 281u: goto L_0026A558;
    case 282u: goto L_0026A578;
    case 283u: goto L_0026A588;
    case 284u: goto L_0026A5A4;
    case 285u: goto L_0026A5B8;
    case 286u: goto L_0026A5C8;
    case 287u: goto L_0026A5EC;
    case 288u: goto L_0026A634;
    case 289u: goto L_0026A660;
    case 290u: goto L_0026A67C;
    case 291u: goto L_0026A688;
    case 292u: goto L_0026A694;
    case 293u: goto L_0026A6A0;
    case 294u: goto L_0026A6AC;
    case 295u: goto L_0026A6B8;
    case 296u: goto L_0026A6C0;
    case 297u: goto L_0026A6C8;
    case 298u: goto L_0026A6E0;
    case 299u: goto L_0026A6F4;
    case 300u: goto L_0026A70C;
    case 301u: goto L_0026A720;
    case 302u: goto L_0026A73C;
    case 303u: goto L_0026A758;
    case 304u: goto L_0026A774;
    case 305u: goto L_0026A790;
    case 306u: goto L_0026A7BC;
    case 307u: goto L_0026A7E0;
    case 308u: goto L_0026A800;
    case 309u: goto L_0026A810;
    case 310u: goto L_0026A82C;
    case 311u: goto L_0026A840;
    case 312u: goto L_0026A850;
    case 313u: goto L_0026A86C;
    case 314u: goto L_0026A88C;
    case 315u: goto L_0026A89C;
    case 316u: goto L_0026A8B8;
    case 317u: goto L_0026A8CC;
    case 318u: goto L_0026A8DC;
    case 319u: goto L_0026A950;
    case 320u: goto L_0026A960;
    case 321u: goto L_0026AA1C;
    case 322u: goto L_0026AA30;
    case 323u: goto L_0026AA60;
    case 324u: goto L_0026AAA0;
    case 325u: goto L_0026AAC8;
    case 326u: goto L_0026AAE4;
    case 327u: goto L_0026AAF8;
    case 328u: goto L_0026AB20;
    case 329u: goto L_0026AB5C;
    case 330u: goto L_0026ABC8;
    case 331u: goto L_0026AC40;
    case 332u: goto L_0026AC98;
    case 333u: goto L_0026ACF4;
    case 334u: goto L_0026AD60;
    case 335u: goto L_0026AE18;
    case 336u: goto L_0026AE48;
    case 337u: goto L_0026AF84;
    case 338u: goto L_0026AFC0;
    case 339u: goto L_0026B118;
    case 340u: goto L_0026B13C;
    case 341u: goto L_0026B150;
    case 342u: goto L_0026B15C;
    case 343u: goto L_0026B164;
    case 344u: goto L_0026B170;
    case 345u: goto L_0026B314;
    case 346u: goto L_0026B344;
    case 347u: goto L_0026B354;
    case 348u: goto L_0026B360;
    case 349u: goto L_0026B384;
    case 350u: goto L_0026B3E0;
    case 351u: goto L_0026B420;
    case 352u: goto L_0026B44C;
    case 353u: goto L_0026B4E4;
    case 354u: goto L_0026B5B0;
    case 355u: goto L_0026B648;
    case 356u: goto L_0026B69C;
    case 357u: goto L_0026B6C0;
    case 358u: goto L_0026B718;
    case 359u: goto L_0026B728;
    case 360u: goto L_0026B798;
    case 361u: goto L_0026B810;
    case 362u: goto L_0026B8D4;
    case 363u: goto L_0026B934;
    case 364u: goto L_0026B94C;
    case 365u: goto L_0026B980;
    case 366u: goto L_0026B990;
    case 367u: goto L_0026BA0C;
    case 368u: goto L_0026BA50;
    case 369u: goto L_0026BA74;
    case 370u: goto L_0026BAA0;
    case 371u: goto L_0026BAEC;
    case 372u: goto L_0026BAFC;
    case 373u: goto L_0026BB10;
    case 374u: goto L_0026BB24;
    case 375u: goto L_0026BB90;
    case 376u: goto L_0026BBD8;
    case 377u: goto L_0026BBE8;
    case 378u: goto L_0026BC04;
    case 379u: goto L_0026BC18;
    case 380u: goto L_0026BC28;
    case 381u: goto L_0026BC44;
    case 382u: goto L_0026BC54;
    case 383u: goto L_0026BC70;
    case 384u: goto L_0026BC84;
    case 385u: goto L_0026BC94;
    case 386u: goto L_0026BCA0;
    case 387u: goto L_0026BCC0;
    case 388u: goto L_0026BCD0;
    case 389u: goto L_0026BCEC;
    case 390u: goto L_0026BD0C;
    case 391u: goto L_0026BD1C;
    case 392u: goto L_0026BD38;
    case 393u: goto L_0026BD44;
    case 394u: goto L_0026BD60;
    case 395u: goto L_0026BD80;
    case 396u: goto L_0026BDA4;
    case 397u: goto L_0026BDC0;
    case 398u: goto L_0026BDD0;
    case 399u: goto L_0026BDE0;
    case 400u: goto L_0026BDF0;
    case 401u: goto L_0026BE18;
    case 402u: goto L_0026BE90;
    case 403u: goto L_0026BEA0;
    case 404u: goto L_0026BEF0;
    case 405u: goto L_0026BF10;
    case 406u: goto L_0026BF44;
    case 407u: goto L_0026BF70;
    case 408u: goto L_0026BF80;
    case 409u: goto L_0026BF94;
    case 410u: goto L_0026BFA0;
    case 411u: goto L_0026BFB4;
    case 412u: goto L_0026BFD0;
    case 413u: goto L_0026BFEC;
    default: bad_entry(c, 0x00268000u); return;
    }
L_00268000:
    st32((c.r[29].w[0] + 1108u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[18].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268014u); set32(c.r[6], c.r[29].w[0] + 1108u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x00268014u) [[unlikely]] return; }
L_00268014:
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00268018:
    c.r[17].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 1;
L_0026801C:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 60u));
    c.r[7].d[0] = c.r[17].d[0] & 65535ull;
    c.r[3].d[0] = c.r[7].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 56u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00267FC0u | kUnwind; return; } [[clang::musttail]] return unit_0059(c, 410u, depth); }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 1120u);  c.pc = t; return; }
L_00268050:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268070u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0058(c, 198u, depth + 1u); else { c.pc = 0x00261A60u; return; } if (c.pc != 0x00268070u) [[unlikely]] return; }
L_00268070:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld16((c.r[17].w[0] + 60u));  goto L_00268080; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00268134; } }
L_00268080:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 60u));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_0026811C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00268134; } }
L_00268094:
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002680C0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00268134; }
L_002680C0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002680DC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00268108; } }
L_002680DC:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], c.r[16].w[0] + 1u);  goto L_00268118; }
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00268100u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00268100u) [[unlikely]] return; }
L_00268100:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00268114; } }
L_00268108:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00268134; } }
L_00268114:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00268118:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_0026811C:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 60u));
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 56u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00268094u | kUnwind; return; } goto L_00268094; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00268134:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00268150:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268170u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0058(c, 199u, depth + 1u); else { c.pc = 0x00261A70u; return; } if (c.pc != 0x00268170u) [[unlikely]] return; }
L_00268170:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026817Cu); set32(c.r[5], c.r[18].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 388u, depth + 1u); else { c.pc = 0x001F71A0u; return; } if (c.pc != 0x0026817Cu) [[unlikely]] return; }
L_0026817C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002681AC; } }
L_00268184:
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002681A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002681A4u) [[unlikely]] return; }
L_002681A4:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 2;
L_002681AC:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 60u));
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 56u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00268184u | kUnwind; return; } goto L_00268184; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002681E0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00261A80u | kUnwind; return; } [[clang::musttail]] return unit_0058(c, 200u, depth); }
L_002681F0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00261A90u | kUnwind; return; } [[clang::musttail]] return unit_0058(c, 201u, depth); }
L_00268200:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268228u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0058(c, 203u, depth + 1u); else { c.pc = 0x00261AD0u; return; } if (c.pc != 0x00268228u) [[unlikely]] return; }
L_00268228:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268234u); set32(c.r[5], c.r[20].w[0] + 60u);  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x00268234u) [[unlikely]] return; }
L_00268234:
    c.r[17].d[0] = ld16((c.r[20].w[0] + 60u));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st16((c.r[20].w[0] + 60u), static_cast<std::uint16_t>(c.r[17].w[0]));  if (t) { goto L_002682E8; } }
    set32(c.r[2], c.r[17].w[0] << 1);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268258u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x00268258u) [[unlikely]] return; }
L_00268258:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 19120u);
    set32(c.r[6], c.r[6].w[0] + 16960u);
    set32(c.r[7], 0u + 48u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268278u); c.r[8].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x00268278u) [[unlikely]] return; }
L_00268278:
    st32((c.r[20].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002682B4; } }
L_00268284:
    set32(c.r[2], ld32((c.r[20].w[0] + 52u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026829Cu); set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026829Cu) [[unlikely]] return; }
L_0026829C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002682ACu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002682ACu) [[unlikely]] return; }
L_002682AC:
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_002682B4:
    c.r[2].d[0] = c.r[18].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00268284u | kUnwind; return; } goto L_00268284; }
    set32(c.r[16], c.r[17].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002682D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x002682D4u) [[unlikely]] return; }
L_002682D4:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[20].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002682E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x002682E8u) [[unlikely]] return; }
L_002682E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00268314; } }
L_002682F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002682F8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 116u, depth + 1u); else { c.pc = 0x0030CD00u; return; } if (c.pc != 0x002682F8u) [[unlikely]] return; }
L_002682F8:
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[4], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[5], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 7;
L_00268314:
    c.r[3].d[0] = ld16((c.r[20].w[0] + 60u));
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002682F0u | kUnwind; return; } goto L_002682F0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00268350:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268368u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00268368u) [[unlikely]] return; }
L_00268368:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00268390; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268378u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 209u, depth + 1u); else { c.pc = 0x00261BA0u; return; } if (c.pc != 0x00268378u) [[unlikely]] return; }
L_00268378:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 3760u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    st16((c.r[16].w[0] + 60u), static_cast<std::uint16_t>(0u));
    c.budget -= 6;
L_00268390:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002683B0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002683DCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0087(c, 168u, depth + 1u); else { c.pc = 0x0031DAB0u; return; } if (c.pc != 0x002683DCu) [[unlikely]] return; }
L_002683DC:
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; mmi::divu(c, 0, c.r[21].w[0], c.r[3].w[0]);  if (t) { goto L_002683F4; } }
    breakpoint(c, 0x002683F0u);
    c.budget -= 1;
L_002683F4:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[3].w[0])));  if (t) { goto L_0026841C; } }
L_0026840C:
    c.budget -= 2;
    if (c.r[21].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0])));  goto L_0026841C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[4].w[0] + 8u)));  if (t) { goto L_00268424; } }
L_0026841C:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026840Cu | kUnwind; return; } goto L_0026840C; }
L_00268424:
    c.r[18].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002684D4; } }
L_00268430:
    set32(c.r[2], ld32((c.r[21].w[0] + 52u)));
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00268454u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00268454u) [[unlikely]] return; }
L_00268454:
    set32(c.r[3], ld32((c.r[21].w[0] + 56u)));
    set32(c.r[6], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], c.r[17].w[0] + 1u);  goto L_002684D0; }
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; mmi::divu(c, 0, c.r[5].w[0], c.r[3].w[0]);  if (t) { goto L_00268480; } }
    breakpoint(c, 0x0026847Cu);
    c.budget -= 1;
L_00268480:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[3].w[0])));  if (t) { goto L_002684AC; } }
L_00268498:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0])));  goto L_002684AC; }
    set32(c.r[19], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002684B8; } }
L_002684AC:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00268498u | kUnwind; return; } goto L_00268498; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002684B8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002684CC; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0]), c.r[19].w[0]);
    c.budget -= 3;
L_002684CC:
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002684D0:
    c.r[17].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 1;
L_002684D4:
    c.r[3].d[0] = ld16((c.r[21].w[0] + 60u));
    c.r[4].d[0] = c.r[17].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[16].d[0] = c.r[17].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00268430u | kUnwind; return; } goto L_00268430; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00268510:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 64u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268544u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00268544u) [[unlikely]] return; }
L_00268544:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0026856C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268554u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 209u, depth + 1u); else { c.pc = 0x00261BA0u; return; } if (c.pc != 0x00268554u) [[unlikely]] return; }
L_00268554:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 3760u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    st16((c.r[16].w[0] + 60u), static_cast<std::uint16_t>(0u));
    c.budget -= 6;
L_0026856C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026857Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 206u, depth + 1u); else { c.pc = 0x00261B60u; return; } if (c.pc != 0x0026857Cu) [[unlikely]] return; }
L_0026857C:
    c.r[20].d[0] = ld16((c.r[18].w[0] + 60u));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull; st16((c.r[16].w[0] + 60u), static_cast<std::uint16_t>(c.r[20].w[0]));  if (t) { goto L_00268630; } }
    set32(c.r[2], c.r[20].w[0] << 1);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002685A0u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002685A0u) [[unlikely]] return; }
L_002685A0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 19120u);
    set32(c.r[6], c.r[6].w[0] + 16960u);
    set32(c.r[7], 0u + 48u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002685C0u); c.r[8].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002685C0u) [[unlikely]] return; }
L_002685C0:
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_002685FC; } }
L_002685CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002685E4u); set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002685E4u) [[unlikely]] return; }
L_002685E4:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002685F4u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002685F4u) [[unlikely]] return; }
L_002685F4:
    set32(c.r[2], c.r[21].w[0] + 1u);
    c.r[21].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_002685FC:
    c.r[2].d[0] = c.r[21].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002685CCu | kUnwind; return; } goto L_002685CC; }
    set32(c.r[19], c.r[20].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026861Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x0026861Cu) [[unlikely]] return; }
L_0026861C:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268630u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x00268630u) [[unlikely]] return; }
L_00268630:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_00268664; } }
L_00268638:
    set32(c.r[3], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026865Cu); set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_0051(c, 27u, depth + 1u); else { c.pc = 0x00244450u; return; } if (c.pc != 0x0026865Cu) [[unlikely]] return; }
L_0026865C:
    set32(c.r[2], c.r[19].w[0] + 1u);
    c.r[19].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_00268664:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 60u));
    c.r[3].d[0] = c.r[19].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[19].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00268638u | kUnwind; return; } goto L_00268638; }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002686A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 5;
    if (c.r[4].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_002686BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002686F4; } }
L_002686BC:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002686C8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002686C8u) [[unlikely]] return; }
L_002686C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 17288u);  if (t) { goto L_002686E4; } }
L_002686D4:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_002686E4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002686F0; } }
L_002686E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002686D4u | kUnwind; return; } goto L_002686D4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002686F0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_002686F4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00268700:
    set32(c.r[25], ld32((c.r[5].w[0])));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 124u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0];  c.pc = t; if (t - 0x00268000u < 16384u) { entry = entries_005A[(t - 0x00268000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00268720:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[21] = c.f[12];
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[13];  if (t) { goto L_0026877C; } }
L_0026874C:
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    c.f[12] = c.f[21];
    set32(c.r[25], ld32((c.r[25].w[0] + 136u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00268774u); c.f[13] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00268774u) [[unlikely]] return; }
L_00268774:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 2;
L_0026877C:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 60u));
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026874Cu | kUnwind; return; } goto L_0026874C; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002687B0:
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_002687D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002687E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026880Cu); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0072(c, 209u, depth + 1u); else { c.pc = 0x002C96B0u; return; } if (c.pc != 0x0026880Cu) [[unlikely]] return; }
L_0026880C:
    c.f[5] = ld32((c.r[16].w[0] + 108u));
    set32(c.r[4], 0u + 80u);
    c.f[4] = ld32((c.r[16].w[0] + 96u));
    c.r[5].d[0] = 0ull + 0ull;
    c.f[3] = ld32((c.r[29].w[0] + 80u));
    c.f[2] = ld32((c.r[29].w[0] + 84u));
    st32((c.r[29].w[0] + 32u), c.f[4]);
    c.f[4] = ld32((c.r[16].w[0] + 100u));
    c.f[1] = ld32((c.r[29].w[0] + 88u));
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    st32((c.r[29].w[0] + 36u), c.f[4]);
    c.f[4] = ld32((c.r[16].w[0] + 104u));
    st32((c.r[29].w[0] + 40u), c.f[4]);
    st32((c.r[29].w[0] + 48u), c.f[3]);
    st32((c.r[29].w[0] + 52u), c.f[2]);
    st32((c.r[29].w[0] + 56u), c.f[1]);
    st32((c.r[29].w[0] + 60u), c.f[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268858u); st32((c.r[29].w[0] + 64u), c.f[5]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00268858u) [[unlikely]] return; }
L_00268858:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00268870; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026886Cu); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_005E(c, 292u, depth + 1u); else { c.pc = 0x0027B8E0u; return; } if (c.pc != 0x0026886Cu) [[unlikely]] return; }
L_0026886C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00268870:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00268880:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] & 65535ull;
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull; st16((c.r[4].w[0] + 60u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_00268950; } }
    set32(c.r[2], c.r[16].w[0] << 1);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002688C0u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002688C0u) [[unlikely]] return; }
L_002688C0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 19120u);
    set32(c.r[6], c.r[6].w[0] + 16960u);
    set32(c.r[7], 0u + 48u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002688E0u); c.r[8].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002688E0u) [[unlikely]] return; }
L_002688E0:
    st32((c.r[18].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0026891C; } }
L_002688EC:
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268904u); set32(c.r[19], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00268904u) [[unlikely]] return; }
L_00268904:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268914u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00268914u) [[unlikely]] return; }
L_00268914:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_0026891C:
    c.r[2].d[0] = c.r[17].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] & 65535ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002688ECu | kUnwind; return; } goto L_002688EC; }
    set32(c.r[16], c.r[16].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026893Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x0026893Cu) [[unlikely]] return; }
L_0026893C:
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268950u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x00268950u) [[unlikely]] return; }
L_00268950:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00268970:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 8u));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00268A5C; } }
    c.f[1] = ld32((c.r[28].w[0] - 32640u));
    c.r[16].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    st32((c.r[17].w[0] + 20u), c.f[1]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 24u), c.f[0]);  if (t) { goto L_00268A18; } }
L_002689A8:
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.f[0] = ld32((c.r[28].w[0] - 32640u));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 56u);
    st32((c.r[29].w[0] + 60u), c.f[1]);
    set32(c.r[3], c.r[2].w[0] << 4);
    st32((c.r[29].w[0] + 56u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002689E0u); set32(c.r[6], c.r[29].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002689E0u) [[unlikely]] return; }
L_002689E0:
    c.f[1] = ld32((c.r[29].w[0] + 56u));
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[29].w[0] + 60u));  goto L_002689FC; }
    st32((c.r[17].w[0] + 20u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 60u));
    c.budget -= 2;
L_002689FC:
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], c.r[16].w[0] + 1u);  goto L_00268A14; }
    st32((c.r[17].w[0] + 24u), c.f[1]);
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_00268A14:
    c.r[16].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 1;
L_00268A18:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 60u));
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.f[1] = ld32((c.r[28].w[0] - 32644u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002689A8u | kUnwind; return; } goto L_002689A8; }
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = ld32((c.r[28].w[0] - 32640u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00268A60; }
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00268A5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268A5Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 207u, depth + 1u); else { c.pc = 0x00261B70u; return; } if (c.pc != 0x00268A5Cu) [[unlikely]] return; }
L_00268A5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00268A60:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00268A70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00268A80:
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);  c.pc = t; return; }
L_00268AA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00268ACC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[2].w[0] + 13520u));  if (t) { goto L_00268B2C; } }
L_00268ACC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00268B10; } }
L_00268AD4:
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[16].w[0] + 1u);  goto L_00268B0C; }
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268AF8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00268AF8u) [[unlikely]] return; }
L_00268AF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00268B08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00268B2C; } }
L_00268B08:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00268B0C:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_00268B10:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 60u));
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 56u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00268AD4u | kUnwind; return; } goto L_00268AD4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].d[0] = ld16((c.r[2].w[0] + 13520u));
    c.budget -= 2;
L_00268B2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00268B50:
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[2].w[0] + 8u)));  c.pc = t; return; }
L_00268B70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld16((c.r[4].w[0] + 60u));  c.pc = t; return; }
L_00268B80:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.f[0] = ld32((c.r[3].w[0] + 14400u));
    c.f[20] = c.f[12];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[2] = ld32((c.r[3].w[0] + 14404u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[1] = ld32((c.r[3].w[0] + 14408u));
    st32((c.r[29].w[0] + 84u), c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 14416u));
    st32((c.r[29].w[0] + 88u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[1] = ld32((c.r[3].w[0] + 14420u));
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 14424u));
    st32((c.r[29].w[0] + 100u), c.f[1]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[1] = ld32((c.r[3].w[0] + 14428u));
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 14432u));
    st32((c.r[29].w[0] + 108u), c.f[1]);
    c.budget -= 34;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 112u), c.f[0]);  if (t) { goto L_00268CF0; } }
L_00268C08:
    c.r[4].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[16], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], c.r[17].w[0] + 1u);  goto L_00268CEC; }
    c.r[3].d[0] = ld16((c.r[5].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00268CE8; } }
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[29].w[0] + 80u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00268C58u); c.f[12] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00268C58u) [[unlikely]] return; }
L_00268C58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00268CE8; } }
    c.f[1] = ld32((c.r[28].w[0] - 32644u));
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[28].w[0] - 32644u));  goto L_00268C98; }
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[3].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 84u));
    st32((c.r[3].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 88u));
    st32((c.r[3].w[0] + 104u), c.f[0]);
    c.f[1] = ld32((c.r[28].w[0] - 32644u));
    c.budget -= 9;
L_00268C98:
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[29].w[0] + 112u));  goto L_00268CC4; }
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268CC0u); set32(c.r[5], c.r[2].w[0] + 48u);  if (depth < kMaxDepth) unit_002F(c, 166u, depth + 1u); else { c.pc = 0x001BE1F0u; return; } if (c.pc != 0x00268CC0u) [[unlikely]] return; }
L_00268CC0:
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_00268CC4:
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00268CE8; } }
    c.f[0] = c.f[1] & fp::kAbs;
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[3].w[0] + 108u), c.f[0]);
    c.budget -= 5;
L_00268CE8:
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00268CEC:
    c.r[17].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 1;
L_00268CF0:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 60u));
    c.r[4].d[0] = c.r[17].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 56u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00268C08u | kUnwind; return; } goto L_00268C08; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00268D20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00268DAC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[2], c.r[2].w[0] + 3760u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 16960u);
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268D64u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x00268D64u) [[unlikely]] return; }
L_00268D64:
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268D70u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x00268D70u) [[unlikely]] return; }
L_00268D70:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00268D94; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 2336u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268D90u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0087(c, 245u, depth + 1u); else { c.pc = 0x0031E610u; return; } if (c.pc != 0x00268D90u) [[unlikely]] return; }
L_00268D90:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00268D94:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00268DB0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268DACu); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00268DACu) [[unlikely]] return; }
L_00268DAC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00268DB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00268DD0:
    c.r[7].d[0] = ld16((c.r[4].w[0] + 8u));
    set32(c.r[3], 0u - 2u);
    c.r[6].d[0] = ld16((c.r[5].w[0] + 8u));
    c.r[7].d[0] = c.r[7].d[0] & 1ull;
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    c.budget -= 8;
    { const bool t = c.r[7].d[0] != 0ull; st16((c.r[5].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00268E00; } }
    c.r[3].d[0] = ld16((c.r[5].w[0] + 8u));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[5].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00268E0C; } }
L_00268E00:
    c.r[3].d[0] = ld16((c.r[5].w[0] + 8u));
    c.r[3].d[0] = c.r[3].d[0] & 65527ull;
    st16((c.r[5].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00268E0C:
    c.r[7].d[0] = ld16((c.r[4].w[0] + 8u));
    set32(c.r[3], 0u - 7u);
    c.r[6].d[0] = ld16((c.r[5].w[0] + 8u));
    c.r[7].d[0] = c.r[7].d[0] & 6ull;
    c.r[6].d[0] = c.r[6].d[0] & c.r[3].d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 1));
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[3].d[0] = c.r[6].d[0] | c.r[3].d[0];
    st16((c.r[5].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 8u));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 14;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[5].w[0] + 8u));  goto L_00268E54; }
    c.r[3].d[0] = ld16((c.r[5].w[0] + 8u));
    c.r[3].d[0] = c.r[3].d[0] | 16ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[5].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00268E5C; } }
L_00268E54:
    c.r[3].d[0] = c.r[3].d[0] & 65519ull;
    st16((c.r[5].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00268E5C:
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    st32((c.r[5].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 20u));
    st32((c.r[5].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 24u));
    st32((c.r[5].w[0] + 24u), c.f[0]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 8u));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 10;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[5].w[0] + 8u));  goto L_00268E94; }
    c.r[3].d[0] = ld16((c.r[5].w[0] + 8u));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[5].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00268E9C; } }
L_00268E94:
    c.r[3].d[0] = c.r[3].d[0] & 65527ull;
    st16((c.r[5].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00268E9C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00268EB0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 14864u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268EE8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 53u, depth + 1u); else { c.pc = 0x002BC710u; return; } if (c.pc != 0x00268EE8u) [[unlikely]] return; }
L_00268EE8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 124u), c.r[2].w[0]);  if (t) { goto L_00268F0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268EFCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00268EFCu) [[unlikely]] return; }
L_00268EFC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268F0Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00268F0Cu) [[unlikely]] return; }
L_00268F0C:
    set32(c.r[4], 0u + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268F18u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00268F18u) [[unlikely]] return; }
L_00268F18:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[18].w[0] + 52u));  goto L_00268F3C; }
    set32(c.r[5], ld32((c.r[18].w[0] + 64u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 68u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268F34u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 168u, depth + 1u); else { c.pc = 0x0026E040u; return; } if (c.pc != 0x00268F34u) [[unlikely]] return; }
L_00268F34:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[18].w[0] + 52u));
    c.budget -= 2;
L_00268F3C:
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[16].w[0] + 12u));  goto L_00268F58; }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00268F60; } }
L_00268F58:
    c.r[2].d[0] = c.r[2].d[0] & 65531ull;
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00268F60:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 52u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[16].w[0] + 12u));  goto L_00268F80; }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00268F88; } }
L_00268F80:
    c.r[2].d[0] = c.r[2].d[0] & 65527ull;
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00268F88:
    set32(c.r[2], ld32((c.r[18].w[0] + 96u)));
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 52u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.r[3].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[16].w[0] + 12u));  goto L_00268FB4; }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00268FBC; } }
L_00268FB4:
    c.r[2].d[0] = c.r[2].d[0] & 65519ull;
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00268FBC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[18].w[0] + 52u));  goto L_00268FD0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00268FCCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 135u, depth + 1u); else { c.pc = 0x0026DB90u; return; } if (c.pc != 0x00268FCCu) [[unlikely]] return; }
L_00268FCC:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 52u));
    c.budget -= 1;
L_00268FD0:
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[16].w[0] + 12u));  goto L_00268FEC; }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00268FF4; } }
L_00268FEC:
    c.r[2].d[0] = c.r[2].d[0] & 65503ull;
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00268FF4:
    c.f[0] = ld32((c.r[18].w[0] + 80u));
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 84u));
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 88u)));
    st16((c.r[16].w[0] + 48u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[18].w[0] + 52u));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 10;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[16].w[0] + 12u));  goto L_0026902C; }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00269034; } }
L_0026902C:
    c.r[2].d[0] = c.r[2].d[0] & 65471ull;
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00269034:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 52u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[16].w[0] + 12u));  goto L_00269054; }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0026905C; } }
L_00269054:
    c.r[2].d[0] = c.r[2].d[0] & 65533ull;
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0026905C:
    set32(c.r[4], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 56u);  goto L_00269084; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00269078u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00269078u) [[unlikely]] return; }
L_00269078:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 124u)));  goto L_00269244; }
    set32(c.r[4], 0u + 56u);
    c.budget -= 1;
L_00269084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026908Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0026908Cu) [[unlikely]] return; }
L_0026908C:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[20].d[0] == 0ull) { set32(c.r[19], ld32((c.r[29].w[0] + 124u)));  goto L_002690A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002690A0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 104u, depth + 1u); else { c.pc = 0x002792B0u; return; } if (c.pc != 0x002690A0u) [[unlikely]] return; }
L_002690A0:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 2;
L_002690A8:
    c.budget -= 2;
    if (c.r[19].d[0] == c.r[20].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 124u)));  goto L_00269114; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[29].w[0] + 124u), c.r[20].w[0]);  goto L_002690F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002690C0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002690C0u) [[unlikely]] return; }
L_002690C0:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002690D0u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002690D0u) [[unlikely]] return; }
L_002690D0:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002690EC; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002690ECu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002690ECu) [[unlikely]] return; }
L_002690EC:
    st32((c.r[29].w[0] + 124u), c.r[20].w[0]);
    c.budget -= 1;
L_002690F0:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00269110; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269100u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00269100u) [[unlikely]] return; }
L_00269100:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269110u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00269110u) [[unlikely]] return; }
L_00269110:
    set32(c.r[4], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 1;
L_00269114:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 136u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00269128u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00269128u) [[unlikely]] return; }
L_00269128:
    set32(c.r[4], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026913Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026913Cu) [[unlikely]] return; }
L_0026913C:
    set32(c.r[5], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269148u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 91u, depth + 1u); else { c.pc = 0x00268DD0u; return; } if (c.pc != 0x00269148u) [[unlikely]] return; }
L_00269148:
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269158u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 89u, depth + 1u); else { c.pc = 0x002BCAB0u; return; } if (c.pc != 0x00269158u) [[unlikely]] return; }
L_00269158:
    set32(c.r[19], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[20], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[21], ld32((c.r[19].w[0] + 48u)));
    c.budget -= 5;
    if (c.r[21].d[0] == c.r[20].d[0]) { set32(c.r[19], ld32((c.r[29].w[0] + 124u)));  goto L_002691D0; }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { st32((c.r[19].w[0] + 48u), c.r[20].w[0]);  goto L_002691AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026917Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026917Cu) [[unlikely]] return; }
L_0026917C:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026918Cu); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026918Cu) [[unlikely]] return; }
L_0026918C:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002691A8; } }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002691A8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002691A8u) [[unlikely]] return; }
L_002691A8:
    st32((c.r[19].w[0] + 48u), c.r[20].w[0]);
    c.budget -= 1;
L_002691AC:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_002691CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002691BCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002691BCu) [[unlikely]] return; }
L_002691BC:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002691CCu); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002691CCu) [[unlikely]] return; }
L_002691CC:
    set32(c.r[19], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 1;
L_002691D0:
    set32(c.r[20], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[20].d[0] == c.r[19].d[0]) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_00269268; }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { st32((c.r[18].w[0] + 48u), c.r[19].w[0]);  goto L_0026921C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002691ECu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002691ECu) [[unlikely]] return; }
L_002691EC:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002691FCu); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002691FCu) [[unlikely]] return; }
L_002691FC:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00269218; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00269218u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00269218u) [[unlikely]] return; }
L_00269218:
    st32((c.r[18].w[0] + 48u), c.r[19].w[0]);
    c.budget -= 1;
L_0026921C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00269264; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026922Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026922Cu) [[unlikely]] return; }
L_0026922C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026923Cu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026923Cu) [[unlikely]] return; }
L_0026923C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00269264; } }
L_00269244:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 136u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00269258u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00269258u) [[unlikely]] return; }
L_00269258:
    set32(c.r[5], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269264u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 91u, depth + 1u); else { c.pc = 0x00268DD0u; return; } if (c.pc != 0x00269264u) [[unlikely]] return; }
L_00269264:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_00269268:
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00269274u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00269274u) [[unlikely]] return; }
L_00269274:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 124u)));  goto L_0026928C; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269288u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 57u, depth + 1u); else { c.pc = 0x002BC790u; return; } if (c.pc != 0x00269288u) [[unlikely]] return; }
L_00269288:
    set32(c.r[16], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 1;
L_0026928C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_002692CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026929Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026929Cu) [[unlikely]] return; }
L_0026929C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002692ACu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002692ACu) [[unlikely]] return; }
L_002692AC:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002692C8; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002692C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002692C8u) [[unlikely]] return; }
L_002692C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_002692CC:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002692F0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[21], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002693F8; } }
L_00269328:
    c.budget -= 2;
    if (c.r[21].d[0] != 0ull) { set32(c.r[25], ld32((c.r[21].w[0])));  goto L_00269338; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00269374; } }
L_00269338:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00269344u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00269344u) [[unlikely]] return; }
L_00269344:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 14864u);  if (t) { goto L_00269364; } }
L_00269354:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_00269364; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00269370; } }
L_00269364:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00269354u | kUnwind; return; } goto L_00269354; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00269370:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_00269374:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[21], ld32((c.r[21].w[0] + 48u)));  goto L_002693F8; }
    set32(c.r[25], ld32((c.r[21].w[0])));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00269390u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00269390u) [[unlikely]] return; }
L_00269390:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[20].d[0] != 0ull) { set32(c.r[25], ld32((c.r[20].w[0])));  goto L_002693A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_002693E0; } }
L_002693A4:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002693B0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002693B0u) [[unlikely]] return; }
L_002693B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 13832u);  if (t) { goto L_002693D0; } }
L_002693C0:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_002693D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_002693DC; } }
L_002693D0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002693C0u | kUnwind; return; } goto L_002693C0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002693DC:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_002693E0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002693F4; } }
    c.r[18].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00269400; } }
L_002693F4:
    set32(c.r[21], ld32((c.r[21].w[0] + 48u)));
    c.budget -= 1;
L_002693F8:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00269328u | kUnwind; return; } goto L_00269328; } }
L_00269400:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0026957C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0026957C; } }
    set32(c.r[20], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[4], 0u + 24u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269420u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00269420u) [[unlikely]] return; }
L_00269420:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_0026943C; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269438u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 240u, depth + 1u); else { c.pc = 0x0025DD40u; return; } if (c.pc != 0x00269438u) [[unlikely]] return; }
L_00269438:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0026943C:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[20], ld32((c.r[17].w[0] + 84u)));  goto L_002694B8; }
    set32(c.r[20], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 3;
    if (c.r[20].d[0] == c.r[21].d[0]) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00269524; }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { st32((c.r[17].w[0] + 84u), c.r[21].w[0]);  goto L_00269490; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269460u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00269460u) [[unlikely]] return; }
L_00269460:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269470u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00269470u) [[unlikely]] return; }
L_00269470:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026948C; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026948Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026948Cu) [[unlikely]] return; }
L_0026948C:
    st32((c.r[17].w[0] + 84u), c.r[21].w[0]);
    c.budget -= 1;
L_00269490:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_00269520; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002694A0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002694A0u) [[unlikely]] return; }
L_002694A0:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002694B0u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002694B0u) [[unlikely]] return; }
L_002694B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00269520; } }
L_002694B8:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00269520; } }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { c.r[20].d[0] = 0ull + 0ull;  goto L_00269500; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002694D0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002694D0u) [[unlikely]] return; }
L_002694D0:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002694E0u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002694E0u) [[unlikely]] return; }
L_002694E0:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002694FC; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002694FCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002694FCu) [[unlikely]] return; }
L_002694FC:
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00269500:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[17].w[0] + 84u), 0u);  if (t) { goto L_00269520; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269510u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00269510u) [[unlikely]] return; }
L_00269510:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269520u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00269520u) [[unlikely]] return; }
L_00269520:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00269524:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026952Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 91u, depth + 1u); else { c.pc = 0x00268DD0u; return; } if (c.pc != 0x0026952Cu) [[unlikely]] return; }
L_0026952C:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 124u);
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00269544u); set32(c.r[6], c.r[29].w[0] + 120u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00269544u) [[unlikely]] return; }
L_00269544:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.f[12] = ld32((c.r[29].w[0] + 124u));
    c.f[13] = ld32((c.r[29].w[0] + 120u));
    set32(c.r[25], ld32((c.r[25].w[0] + 136u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026955Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026955Cu) [[unlikely]] return; }
L_0026955C:
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 140u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026956Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026956Cu) [[unlikely]] return; }
L_0026956C:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026957Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026957Cu) [[unlikely]] return; }
L_0026957C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_00269594; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269590u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 57u, depth + 1u); else { c.pc = 0x002BC790u; return; } if (c.pc != 0x00269590u) [[unlikely]] return; }
L_00269590:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_00269594:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002695C0:
    set32(c.r[29], c.r[29].w[0] - 256u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 14864u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[23], ld32((c.r[4].w[0] + 44u)));
    st8((c.r[29].w[0] + 224u), static_cast<std::uint8_t>(0u));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269608u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 53u, depth + 1u); else { c.pc = 0x002BC710u; return; } if (c.pc != 0x00269608u) [[unlikely]] return; }
L_00269608:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_0026967C; }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00269628u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00269628u) [[unlikely]] return; }
L_00269628:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[2].w[0])));  goto L_00269638; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00269670; } }
L_00269638:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00269644u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00269644u) [[unlikely]] return; }
L_00269644:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 14976u);  if (t) { goto L_00269660; } }
L_00269650:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_00269660; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0026966C; } }
L_00269660:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00269650u | kUnwind; return; } goto L_00269650; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026966C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00269670:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u + 96u);  goto L_002696B0; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0026967C:
    set32(c.r[4], 0u + 56u);
    st8((c.r[29].w[0] + 224u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026968Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0026968Cu) [[unlikely]] return; }
L_0026968C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[17].d[0] = c.r[2].d[0] + 0ull;  goto L_002696A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026969Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_005E(c, 104u, depth + 1u); else { c.pc = 0x002792B0u; return; } if (c.pc != 0x0026969Cu) [[unlikely]] return; }
L_0026969C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002696A0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002696ACu); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 91u, depth + 1u); else { c.pc = 0x00268DD0u; return; } if (c.pc != 0x002696ACu) [[unlikely]] return; }
L_002696AC:
    set32(c.r[4], 0u + 96u);
    c.budget -= 1;
L_002696B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002696B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002696B8u) [[unlikely]] return; }
L_002696B8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], ld32((c.r[22].w[0] + 56u)));  goto L_002696E0; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002696D8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0059(c, 232u, depth + 1u); else { c.pc = 0x00266790u; return; } if (c.pc != 0x002696D8u) [[unlikely]] return; }
L_002696D8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[22].w[0] + 56u)));
    c.budget -= 2;
L_002696E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], ld32((c.r[2].w[0] + 20312u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 248u);
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002696FCu); st32((c.r[29].w[0] + 248u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0059(c, 178u, depth + 1u); else { c.pc = 0x00265C00u; return; } if (c.pc != 0x002696FCu) [[unlikely]] return; }
L_002696FC:
    set32(c.r[2], ld32((c.r[29].w[0] + 248u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[18].d[0]) { c.r[2].d[0] = ld16((c.r[22].w[0] + 52u));  goto L_00269754; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269720u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00269720u) [[unlikely]] return; }
L_00269720:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269730u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00269730u) [[unlikely]] return; }
L_00269730:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00269750; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269750u); set32(c.r[5], c.r[29].w[0] + 248u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00269750u) [[unlikely]] return; }
L_00269750:
    c.r[2].d[0] = ld16((c.r[22].w[0] + 52u));
    c.budget -= 1;
L_00269754:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[16].w[0] + 12u));  goto L_00269770; }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 12u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00269778; } }
L_00269770:
    c.r[2].d[0] = c.r[2].d[0] & 65534ull;
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00269778:
    c.r[6].d[0] = ld16((c.r[22].w[0] + 52u));
    set32(c.r[2], 0u - 7u);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 12u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] & 6ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 1));
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 132u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002697B4u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002697B4u) [[unlikely]] return; }
L_002697B4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[29].w[0] + 252u), c.r[2].w[0]);  if (t) { goto L_002697D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002697C8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002697C8u) [[unlikely]] return; }
L_002697C8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002697D8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002697D8u) [[unlikely]] return; }
L_002697D8:
    set32(c.r[4], ld32((c.r[29].w[0] + 252u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[25], ld32((c.r[17].w[0])));  goto L_00269CDC; }
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_002697F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026982C; } }
L_002697F4:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00269800u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00269800u) [[unlikely]] return; }
L_00269800:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 14976u);  if (t) { goto L_0026981C; } }
L_0026980C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_0026981C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00269828; } }
L_0026981C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026980Cu | kUnwind; return; } goto L_0026980C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00269828:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_0026982C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00269CD8; } }
    set32(c.r[18], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00269848; }
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 1;
L_00269848:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 64u)));  goto L_00269A8C; }
    set32(c.r[4], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026985Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0026985Cu) [[unlikely]] return; }
L_0026985C:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[20].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 64u)));  goto L_0026987C; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269874u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 306u, depth + 1u); else { c.pc = 0x0026F320u; return; } if (c.pc != 0x00269874u) [[unlikely]] return; }
L_00269874:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 2;
L_0026987C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[30].d[0] = 0ull + 0ull;  goto L_0026989C; }
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[30], ld32((c.r[3].w[0] + 24u)));
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 176u), c.r[2].w[0]);  if (t) { goto L_002698A4; } }
L_0026989C:
    st32((c.r[29].w[0] + 208u), 0u);
    st32((c.r[29].w[0] + 176u), 0u);
    c.budget -= 2;
L_002698A4:
    c.budget -= 2;
    if (c.r[30].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 24u)));  goto L_00269978; }
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 176u)));  goto L_00269960; }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002698C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002698C4u) [[unlikely]] return; }
L_002698C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002698F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002698D4u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x002698D4u) [[unlikely]] return; }
L_002698D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 4624u);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    st32((c.r[21].w[0] + 8u), 0u);
    st32((c.r[21].w[0] + 12u), 0u);
    st32((c.r[21].w[0] + 16u), 0u);
    st8((c.r[21].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
L_002698F0:
    set32(c.r[19], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[21].d[0];  if (t) { goto L_0026995C; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[20].w[0] + 24u), c.r[21].w[0]);  goto L_0026993C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026990Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026990Cu) [[unlikely]] return; }
L_0026990C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026991Cu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026991Cu) [[unlikely]] return; }
L_0026991C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00269938; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00269938u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00269938u) [[unlikely]] return; }
L_00269938:
    st32((c.r[20].w[0] + 24u), c.r[21].w[0]);
    c.budget -= 1;
L_0026993C:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_0026995C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026994Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026994Cu) [[unlikely]] return; }
L_0026994C:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026995Cu); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026995Cu) [[unlikely]] return; }
L_0026995C:
    set32(c.r[5], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 1;
L_00269960:
    set32(c.r[7], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269970u); c.r[6].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 354u, depth + 1u); else { c.pc = 0x0026F9A0u; return; } if (c.pc != 0x00269970u) [[unlikely]] return; }
L_00269970:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 28u), 0u);  if (t) { goto L_00269990; } }
L_00269978:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 64u)));  goto L_00269994; }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269990u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005B(c, 354u, depth + 1u); else { c.pc = 0x0026F9A0u; return; } if (c.pc != 0x00269990u) [[unlikely]] return; }
L_00269990:
    set32(c.r[4], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 1;
L_00269994:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002699A4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005E(c, 183u, depth + 1u); else { c.pc = 0x00279F50u; return; } if (c.pc != 0x002699A4u) [[unlikely]] return; }
L_002699A4:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[19], ld32((c.r[16].w[0] + 80u)));  goto L_00269A20; }
    set32(c.r[19], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[20].d[0];  if (t) { goto L_00269A88; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[16].w[0] + 80u), c.r[20].w[0]);  goto L_002699F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002699C8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002699C8u) [[unlikely]] return; }
L_002699C8:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002699D8u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002699D8u) [[unlikely]] return; }
L_002699D8:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002699F4; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002699F4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002699F4u) [[unlikely]] return; }
L_002699F4:
    st32((c.r[16].w[0] + 80u), c.r[20].w[0]);
    c.budget -= 1;
L_002699F8:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00269A88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269A08u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00269A08u) [[unlikely]] return; }
L_00269A08:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269A18u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00269A18u) [[unlikely]] return; }
L_00269A18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00269A88; } }
L_00269A20:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00269A88; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[19].d[0] = 0ull + 0ull;  goto L_00269A68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269A38u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00269A38u) [[unlikely]] return; }
L_00269A38:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269A48u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00269A48u) [[unlikely]] return; }
L_00269A48:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00269A64; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00269A64u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00269A64u) [[unlikely]] return; }
L_00269A64:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00269A68:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[16].w[0] + 80u), 0u);  if (t) { goto L_00269A88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269A78u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00269A78u) [[unlikely]] return; }
L_00269A78:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269A88u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00269A88u) [[unlikely]] return; }
L_00269A88:
    set32(c.r[2], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 1;
L_00269A8C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00269A98; }
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 1;
L_00269A98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00269CD8; } }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269AACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00269AACu) [[unlikely]] return; }
L_00269AAC:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[20].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 64u)));  goto L_00269ACC; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269AC4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0057(c, 240u, depth + 1u); else { c.pc = 0x0025DD40u; return; } if (c.pc != 0x00269AC4u) [[unlikely]] return; }
L_00269AC4:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 2;
L_00269ACC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[30].d[0] = 0ull + 0ull;  goto L_00269AEC; }
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[30], ld32((c.r[3].w[0] + 40u)));
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 160u), c.r[2].w[0]);  if (t) { goto L_00269AF4; } }
L_00269AEC:
    st32((c.r[29].w[0] + 192u), 0u);
    st32((c.r[29].w[0] + 160u), 0u);
    c.budget -= 2;
L_00269AF4:
    c.budget -= 2;
    if (c.r[30].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 16u)));  goto L_00269BC8; }
    set32(c.r[2], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 160u)));  goto L_00269BB0; }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269B14u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00269B14u) [[unlikely]] return; }
L_00269B14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00269B40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269B24u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x00269B24u) [[unlikely]] return; }
L_00269B24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 1088u);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    st32((c.r[21].w[0] + 8u), 0u);
    st32((c.r[21].w[0] + 12u), 0u);
    st32((c.r[21].w[0] + 16u), 0u);
    c.budget -= 6;
L_00269B3C:
    st8((c.r[21].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00269B40:
    set32(c.r[19], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == c.r[21].d[0];  if (t) { goto L_00269BAC; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[20].w[0] + 16u), c.r[21].w[0]);  goto L_00269B8C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269B5Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00269B5Cu) [[unlikely]] return; }
L_00269B5C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269B6Cu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00269B6Cu) [[unlikely]] return; }
L_00269B6C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00269B88; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00269B88u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00269B88u) [[unlikely]] return; }
L_00269B88:
    st32((c.r[20].w[0] + 16u), c.r[21].w[0]);
    c.budget -= 1;
L_00269B8C:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_00269BAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269B9Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00269B9Cu) [[unlikely]] return; }
L_00269B9C:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269BACu); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00269BACu) [[unlikely]] return; }
L_00269BAC:
    set32(c.r[5], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 1;
L_00269BB0:
    set32(c.r[7], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 16u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269BC0u); c.r[6].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_0057(c, 64u, depth + 1u); else { c.pc = 0x0025C800u; return; } if (c.pc != 0x00269BC0u) [[unlikely]] return; }
L_00269BC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 20u), 0u);  if (t) { goto L_00269BE0; } }
L_00269BC8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 64u)));  goto L_00269BE4; }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269BE0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0057(c, 64u, depth + 1u); else { c.pc = 0x0025C800u; return; } if (c.pc != 0x00269BE0u) [[unlikely]] return; }
L_00269BE0:
    set32(c.r[4], ld32((c.r[18].w[0] + 64u)));
    c.budget -= 1;
L_00269BE4:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269BF4u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005E(c, 182u, depth + 1u); else { c.pc = 0x00279F00u; return; } if (c.pc != 0x00269BF4u) [[unlikely]] return; }
L_00269BF4:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[18], ld32((c.r[16].w[0] + 88u)));  goto L_00269C70; }
    set32(c.r[18], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[20].d[0];  if (t) { goto L_00269CD8; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0] + 88u), c.r[20].w[0]);  goto L_00269C48; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269C18u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00269C18u) [[unlikely]] return; }
L_00269C18:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269C28u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00269C28u) [[unlikely]] return; }
L_00269C28:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00269C44; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00269C44u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00269C44u) [[unlikely]] return; }
L_00269C44:
    st32((c.r[16].w[0] + 88u), c.r[20].w[0]);
    c.budget -= 1;
L_00269C48:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00269CD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269C58u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00269C58u) [[unlikely]] return; }
L_00269C58:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269C68u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00269C68u) [[unlikely]] return; }
L_00269C68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00269CD8; } }
L_00269C70:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00269CD8; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_00269CB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269C88u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00269C88u) [[unlikely]] return; }
L_00269C88:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269C98u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00269C98u) [[unlikely]] return; }
L_00269C98:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00269CB4; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00269CB4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00269CB4u) [[unlikely]] return; }
L_00269CB4:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00269CB8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[16].w[0] + 88u), 0u);  if (t) { goto L_00269CD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269CC8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00269CC8u) [[unlikely]] return; }
L_00269CC8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269CD8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00269CD8u) [[unlikely]] return; }
L_00269CD8:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_00269CDC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 136u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00269CF0u); c.r[6].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00269CF0u) [[unlikely]] return; }
L_00269CF0:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00269D00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00269D00u) [[unlikely]] return; }
L_00269D00:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 224u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00269D20; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00269D20u); c.r[5].d[0] = c.r[23].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00269D20u) [[unlikely]] return; }
L_00269D20:
    c.budget -= 2;
    if (c.r[23].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 252u)));  goto L_00269D38; }
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269D34u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 57u, depth + 1u); else { c.pc = 0x002BC790u; return; } if (c.pc != 0x00269D34u) [[unlikely]] return; }
L_00269D34:
    set32(c.r[16], ld32((c.r[29].w[0] + 252u)));
    c.budget -= 1;
L_00269D38:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  goto L_00269D78; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269D48u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00269D48u) [[unlikely]] return; }
L_00269D48:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269D58u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00269D58u) [[unlikely]] return; }
L_00269D58:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00269D74; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00269D74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00269D74u) [[unlikely]] return; }
L_00269D74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_00269D78:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_00269DB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00269FF8; } }
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[25], ld32((c.r[18].w[0])));  goto L_00269DE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00269E20; } }
L_00269DE4:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00269DF0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00269DF0u) [[unlikely]] return; }
L_00269DF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 17288u);  if (t) { goto L_00269E10; } }
L_00269E00:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_00269E10; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00269E1C; } }
L_00269E10:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00269E00u | kUnwind; return; } goto L_00269E00; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00269E1C:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_00269E20:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_00269FFC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[18].w[0] + 12u)));  if (t) { goto L_00269F5C; } }
L_00269E30:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 48u)));  if (t) { goto L_00269E40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00269E80; } }
L_00269E40:
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00269E50u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00269E50u) [[unlikely]] return; }
L_00269E50:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 14496u);  if (t) { goto L_00269E70; } }
L_00269E60:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_00269E70; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00269E7C; } }
L_00269E70:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00269E60u | kUnwind; return; } goto L_00269E60; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00269E7C:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_00269E80:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00269E98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269E90u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 128u, depth + 1u); else { c.pc = 0x002692F0u; return; } if (c.pc != 0x00269E90u) [[unlikely]] return; }
L_00269E90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00269F5C; } }
L_00269E98:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[25], ld32((c.r[17].w[0])));  goto L_00269EA8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00269EE4; } }
L_00269EA8:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00269EB4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00269EB4u) [[unlikely]] return; }
L_00269EB4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 13800u);  if (t) { goto L_00269ED4; } }
L_00269EC4:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_00269ED4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00269EE0; } }
L_00269ED4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00269EC4u | kUnwind; return; } goto L_00269EC4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00269EE0:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_00269EE4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00269EFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269EF4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 153u, depth + 1u); else { c.pc = 0x002695C0u; return; } if (c.pc != 0x00269EF4u) [[unlikely]] return; }
L_00269EF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00269F58; } }
L_00269EFC:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[25], ld32((c.r[17].w[0])));  goto L_00269F0C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00269F48; } }
L_00269F0C:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00269F18u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00269F18u) [[unlikely]] return; }
L_00269F18:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 14112u);  if (t) { goto L_00269F38; } }
L_00269F28:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_00269F38; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00269F44; } }
L_00269F38:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00269F28u | kUnwind; return; } goto L_00269F28; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00269F44:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_00269F48:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00269F58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269F58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 92u, depth + 1u); else { c.pc = 0x00268EB0u; return; } if (c.pc != 0x00269F58u) [[unlikely]] return; }
L_00269F58:
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00269F5C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00269E30u | kUnwind; return; } goto L_00269E30; } }
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[25], ld32((c.r[18].w[0])));  goto L_00269F74; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_00269FB0; } }
L_00269F74:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00269F80u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00269F80u) [[unlikely]] return; }
L_00269F80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 23832u);  if (t) { goto L_00269FA0; } }
L_00269F90:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_00269FA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00269FAC; } }
L_00269FA0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00269F90u | kUnwind; return; } goto L_00269F90; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00269FAC:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_00269FB0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00269FF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00269FE8; } }
L_00269FC0:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 212u)));  goto L_00269FD0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00269FDC; } }
L_00269FD0:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_00269FDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00269FE4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 224u, depth + 1u); else { c.pc = 0x00269DB0u; return; } if (c.pc != 0x00269FE4u) [[unlikely]] return; }
L_00269FE4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00269FE8:
    c.r[4].d[0] = ld16((c.r[18].w[0] + 218u));
    c.r[3].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[1].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00269FC0u | kUnwind; return; } goto L_00269FC0; }
L_00269FF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_00269FFC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0026A014:
    c.budget -= 3;
L_0026A020:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x0A010000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[1].d[0] = c.r[1].d[0] | 104ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0026A0AC; } }
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_0026A05C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0026A098; } }
L_0026A05C:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A068u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026A068u) [[unlikely]] return; }
L_0026A068:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 23920u);  if (t) { goto L_0026A088; } }
L_0026A078:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_0026A088; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0026A094; } }
L_0026A088:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026A078u | kUnwind; return; } goto L_0026A078; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026A094:
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 1;
L_0026A098:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0026A0B0; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A0ACu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 224u, depth + 1u); else { c.pc = 0x00269DB0u; return; } if (c.pc != 0x0026A0ACu) [[unlikely]] return; }
L_0026A0AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0026A0B0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026A0C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 14112u);  c.pc = t; return; }
L_0026A0D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0026A0E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 5;
    if (c.r[4].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_0026A0FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026A134; } }
L_0026A0FC:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A108u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026A108u) [[unlikely]] return; }
L_0026A108:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 17288u);  if (t) { goto L_0026A124; } }
L_0026A114:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_0026A124; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0026A130; } }
L_0026A124:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026A114u | kUnwind; return; } goto L_0026A114; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026A130:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_0026A134:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0026A140:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A154u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 107u, depth + 1u); else { c.pc = 0x0031D490u; return; } if (c.pc != 0x0026A154u) [[unlikely]] return; }
L_0026A154:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A160u); set32(c.r[4], ld32((c.r[2].w[0] + 14112u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x0026A160u) [[unlikely]] return; }
L_0026A160:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A174u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0026A174u) [[unlikely]] return; }
L_0026A174:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026A190:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A1ACu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 135u, depth + 1u); else { c.pc = 0x0031D710u; return; } if (c.pc != 0x0026A1ACu) [[unlikely]] return; }
L_0026A1AC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 64u)));  goto L_0026A1BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026A374; } }
L_0026A1BC:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A1CCu); set32(c.r[5], ld32((c.r[16].w[0] + 64u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026A1CCu) [[unlikely]] return; }
L_0026A1CC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 68u)));  goto L_0026A1DC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026A374; } }
L_0026A1DC:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A1ECu); set32(c.r[5], ld32((c.r[16].w[0] + 68u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026A1ECu) [[unlikely]] return; }
L_0026A1EC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 72u)));  goto L_0026A1FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026A374; } }
L_0026A1FC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0026A210; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026A374; }
L_0026A210:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0026A230; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026A230; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026A374; } }
L_0026A230:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.f[1] = ld32((c.r[17].w[0] + 76u));  goto L_0026A268; }
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026A248; }
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 1;
L_0026A248:
    set32(c.r[5], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A254u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x0026A254u) [[unlikely]] return; }
L_0026A254:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026A264; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026A374; } }
L_0026A264:
    c.f[1] = ld32((c.r[17].w[0] + 76u));
    c.budget -= 1;
L_0026A268:
    c.f[0] = ld32((c.r[16].w[0] + 76u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026A374; }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 52u));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 52u));
    c.r[4].d[0] = c.r[3].d[0] & 1ull;
    c.r[5].d[0] = c.r[2].d[0] & 1ull;
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_0026A370; } }
    c.r[5].d[0] = c.r[2].d[0] & 2ull;
    c.r[4].d[0] = c.r[3].d[0] & 2ull;
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_0026A370; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_0026A370; } }
    c.r[5].d[0] = c.r[2].d[0] & 4ull;
    c.r[4].d[0] = c.r[3].d[0] & 4ull;
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_0026A370; } }
    c.r[5].d[0] = c.r[2].d[0] & 8ull;
    c.r[4].d[0] = c.r[3].d[0] & 8ull;
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_0026A370; } }
    c.r[5].d[0] = c.r[2].d[0] & 16ull;
    c.r[4].d[0] = c.r[3].d[0] & 16ull;
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_0026A370; } }
    c.r[5].d[0] = c.r[2].d[0] & 32ull;
    c.r[4].d[0] = c.r[3].d[0] & 32ull;
    c.r[5].d[0] = 0ull < c.r[5].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_0026A370; } }
    c.f[1] = ld32((c.r[17].w[0] + 80u));
    c.f[0] = ld32((c.r[16].w[0] + 80u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026A370; } }
    c.f[1] = ld32((c.r[17].w[0] + 84u));
    c.f[0] = ld32((c.r[16].w[0] + 84u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026A370; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 88u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 88u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_0026A370; } }
    c.r[4].d[0] = c.r[2].d[0] & 64ull;
    c.r[2].d[0] = c.r[3].d[0] & 64ull;
    c.r[3].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 1u);  goto L_0026A374; }
L_0026A370:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026A374:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026A390:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A3ACu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 137u, depth + 1u); else { c.pc = 0x0031D7F0u; return; } if (c.pc != 0x0026A3ACu) [[unlikely]] return; }
L_0026A3AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A3B8u); set32(c.r[5], c.r[17].w[0] + 52u);  if (depth < kMaxDepth) unit_003D(c, 388u, depth + 1u); else { c.pc = 0x001F71A0u; return; } if (c.pc != 0x0026A3B8u) [[unlikely]] return; }
L_0026A3B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A3C4u); set32(c.r[5], c.r[17].w[0] + 96u);  if (depth < kMaxDepth) unit_005A(c, 402u, depth + 1u); else { c.pc = 0x0026BE90u; return; } if (c.pc != 0x0026A3C4u) [[unlikely]] return; }
L_0026A3C4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A3D0u); set32(c.r[5], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x0026A3D0u) [[unlikely]] return; }
L_0026A3D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A3DCu); set32(c.r[5], c.r[17].w[0] + 84u);  if (depth < kMaxDepth) unit_003D(c, 389u, depth + 1u); else { c.pc = 0x001F71B0u; return; } if (c.pc != 0x0026A3DCu) [[unlikely]] return; }
L_0026A3DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A3E8u); set32(c.r[5], c.r[17].w[0] + 88u);  if (depth < kMaxDepth) unit_003F(c, 92u, depth + 1u); else { c.pc = 0x001FD320u; return; } if (c.pc != 0x0026A3E8u) [[unlikely]] return; }
L_0026A3E8:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A3FCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026A3FCu) [[unlikely]] return; }
L_0026A3FC:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A410u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026A410u) [[unlikely]] return; }
L_0026A410:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026A430:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A44Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 148u, depth + 1u); else { c.pc = 0x0031D8C0u; return; } if (c.pc != 0x0026A44Cu) [[unlikely]] return; }
L_0026A44C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 64u)));  goto L_0026A45C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0026A494; } }
L_0026A45C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 68u)));  goto L_0026A478; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A474u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026A474u) [[unlikely]] return; }
L_0026A474:
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 1;
L_0026A478:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_0026A494; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A490u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026A490u) [[unlikely]] return; }
L_0026A490:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0026A494:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026A4B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A4D4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0087(c, 151u, depth + 1u); else { c.pc = 0x0031D920u; return; } if (c.pc != 0x0026A4D4u) [[unlikely]] return; }
L_0026A4D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A4DCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x0026A4DCu) [[unlikely]] return; }
L_0026A4DC:
    set32(c.r[17], ld32((c.r[19].w[0] + 64u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[16].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0026A550; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[19].w[0] + 64u), c.r[16].w[0]);  goto L_0026A52C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A4FCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026A4FCu) [[unlikely]] return; }
L_0026A4FC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A50Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026A50Cu) [[unlikely]] return; }
L_0026A50C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026A528; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A528u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026A528u) [[unlikely]] return; }
L_0026A528:
    st32((c.r[19].w[0] + 64u), c.r[16].w[0]);
    c.budget -= 1;
L_0026A52C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0026A54C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A53Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026A53Cu) [[unlikely]] return; }
L_0026A53C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A54Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026A54Cu) [[unlikely]] return; }
L_0026A54C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0026A550:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A558u);  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x0026A558u) [[unlikely]] return; }
L_0026A558:
    set32(c.r[17], ld32((c.r[19].w[0] + 68u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[16].d[0]) { c.r[3].d[0] = ld16((c.r[19].w[0] + 52u));  goto L_0026A5CC; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[19].w[0] + 68u), c.r[16].w[0]);  goto L_0026A5A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A578u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026A578u) [[unlikely]] return; }
L_0026A578:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A588u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026A588u) [[unlikely]] return; }
L_0026A588:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026A5A4; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A5A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026A5A4u) [[unlikely]] return; }
L_0026A5A4:
    st32((c.r[19].w[0] + 68u), c.r[16].w[0]);
    c.budget -= 1;
L_0026A5A8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0026A5C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A5B8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026A5B8u) [[unlikely]] return; }
L_0026A5B8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A5C8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026A5C8u) [[unlikely]] return; }
L_0026A5C8:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 52u));
    c.budget -= 1;
L_0026A5CC:
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[19].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 52u));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 64u)));  goto L_0026A5F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A5ECu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 368u, depth + 1u); else { c.pc = 0x0026BA50u; return; } if (c.pc != 0x0026A5ECu) [[unlikely]] return; }
L_0026A5EC:
    set32(c.r[3], ld32((c.r[19].w[0] + 64u)));
    c.budget -= 1;
L_0026A5F0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0026A608; }
    set32(c.r[6], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_0026A610; } }
L_0026A608:
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0026A610:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0026A63C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 13400u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A634u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026A634u) [[unlikely]] return; }
L_0026A634:
    st32((c.r[19].w[0] + 92u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 2;
L_0026A63C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0026A660:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A67Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 159u, depth + 1u); else { c.pc = 0x0031D9F0u; return; } if (c.pc != 0x0026A67Cu) [[unlikely]] return; }
L_0026A67C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A688u); set32(c.r[5], c.r[17].w[0] + 52u);  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x0026A688u) [[unlikely]] return; }
L_0026A688:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A694u); set32(c.r[5], c.r[17].w[0] + 96u);  if (depth < kMaxDepth) unit_005A(c, 403u, depth + 1u); else { c.pc = 0x0026BEA0u; return; } if (c.pc != 0x0026A694u) [[unlikely]] return; }
L_0026A694:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A6A0u); set32(c.r[5], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x0026A6A0u) [[unlikely]] return; }
L_0026A6A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A6ACu); set32(c.r[5], c.r[17].w[0] + 84u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x0026A6ACu) [[unlikely]] return; }
L_0026A6AC:
    set32(c.r[5], c.r[17].w[0] + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A6B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003F(c, 93u, depth + 1u); else { c.pc = 0x001FD330u; return; } if (c.pc != 0x0026A6B8u) [[unlikely]] return; }
L_0026A6B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A6C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 118u, depth + 1u); else { c.pc = 0x0030CD50u; return; } if (c.pc != 0x0026A6C0u) [[unlikely]] return; }
L_0026A6C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A6C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 118u, depth + 1u); else { c.pc = 0x0030CD50u; return; } if (c.pc != 0x0026A6C8u) [[unlikely]] return; }
L_0026A6C8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026A6E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 100u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A6F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0026A6F4u) [[unlikely]] return; }
L_0026A6F4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0026A710; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A70Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005A(c, 395u, depth + 1u); else { c.pc = 0x0026BD80u; return; } if (c.pc != 0x0026A70Cu) [[unlikely]] return; }
L_0026A70C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0026A710:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0026A720:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A73Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 168u, depth + 1u); else { c.pc = 0x0031DAB0u; return; } if (c.pc != 0x0026A73Cu) [[unlikely]] return; }
L_0026A73C:
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 68u)));  goto L_0026A75C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A758u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026A758u) [[unlikely]] return; }
L_0026A758:
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 1;
L_0026A75C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0026A778; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A774u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026A774u) [[unlikely]] return; }
L_0026A774:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0026A778:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026A790:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A7BCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 171u, depth + 1u); else { c.pc = 0x0031DB00u; return; } if (c.pc != 0x0026A7BCu) [[unlikely]] return; }
L_0026A7BC:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 52u));
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 68u)));  goto L_0026A854; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A7E0u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026A7E0u) [[unlikely]] return; }
L_0026A7E0:
    set32(c.r[19], ld32((c.r[16].w[0] + 64u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == c.r[18].d[0];  if (t) { goto L_0026A850; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[16].w[0] + 64u), c.r[18].w[0]);  goto L_0026A830; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A800u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026A800u) [[unlikely]] return; }
L_0026A800:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A810u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026A810u) [[unlikely]] return; }
L_0026A810:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026A82C; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A82Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026A82Cu) [[unlikely]] return; }
L_0026A82C:
    st32((c.r[16].w[0] + 64u), c.r[18].w[0]);
    c.budget -= 1;
L_0026A830:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0026A850; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A840u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026A840u) [[unlikely]] return; }
L_0026A840:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A850u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026A850u) [[unlikely]] return; }
L_0026A850:
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 1;
L_0026A854:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[17].w[0] + 52u));  goto L_0026A8E0; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A86Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026A86Cu) [[unlikely]] return; }
L_0026A86C:
    set32(c.r[19], ld32((c.r[16].w[0] + 68u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == c.r[18].d[0];  if (t) { goto L_0026A8DC; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[16].w[0] + 68u), c.r[18].w[0]);  goto L_0026A8BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A88Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026A88Cu) [[unlikely]] return; }
L_0026A88C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A89Cu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026A89Cu) [[unlikely]] return; }
L_0026A89C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026A8B8; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A8B8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026A8B8u) [[unlikely]] return; }
L_0026A8B8:
    st32((c.r[16].w[0] + 68u), c.r[18].w[0]);
    c.budget -= 1;
L_0026A8BC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0026A8DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A8CCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026A8CCu) [[unlikely]] return; }
L_0026A8CC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A8DCu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026A8DCu) [[unlikely]] return; }
L_0026A8DC:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 52u));
    c.budget -= 1;
L_0026A8E0:
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[16].w[0] + 52u));  goto L_0026A8FC; }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 52u));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0026A904; } }
L_0026A8FC:
    c.r[2].d[0] = c.r[2].d[0] & 65531ull;
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0026A904:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 52u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[16].w[0] + 52u));  goto L_0026A924; }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 52u));
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0026A92C; } }
L_0026A924:
    c.r[2].d[0] = c.r[2].d[0] & 65527ull;
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0026A92C:
    set32(c.r[2], ld32((c.r[17].w[0] + 96u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 16u);
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 52u));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.r[18].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A950u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 323u, depth + 1u); else { c.pc = 0x0026AA60u; return; } if (c.pc != 0x0026A950u) [[unlikely]] return; }
L_0026A950:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[17].w[0] + 52u));  goto L_0026A964; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026A960u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 368u, depth + 1u); else { c.pc = 0x0026BA50u; return; } if (c.pc != 0x0026A960u) [[unlikely]] return; }
L_0026A960:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 52u));
    c.budget -= 1;
L_0026A964:
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[16].w[0] + 52u));  goto L_0026A980; }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 52u));
    c.r[3].d[0] = c.r[3].d[0] | 32ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0026A988; } }
L_0026A980:
    c.r[3].d[0] = c.r[3].d[0] & 65503ull;
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0026A988:
    c.f[0] = ld32((c.r[17].w[0] + 80u));
    st32((c.r[16].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 84u));
    st32((c.r[16].w[0] + 84u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 88u)));
    st16((c.r[16].w[0] + 88u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 52u));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 10;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[16].w[0] + 52u));  goto L_0026A9C0; }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 52u));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0026A9C8; } }
L_0026A9C0:
    c.r[3].d[0] = c.r[3].d[0] & 65471ull;
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0026A9C8:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 52u));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[16].w[0] + 52u));  goto L_0026A9E8; }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 52u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0026A9F0; } }
L_0026A9E8:
    c.r[3].d[0] = c.r[3].d[0] & 65533ull;
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0026A9F0:
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.f[0] = ld32((c.r[17].w[0] + 76u));  goto L_0026AA34; }
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0026AA0C; }
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 1;
L_0026AA0C:
    set32(c.r[18], c.r[2].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AA1Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x0026AA1Cu) [[unlikely]] return; }
L_0026AA1C:
    st32((c.r[16].w[0] + 72u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AA30u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0026AA30u) [[unlikely]] return; }
L_0026AA30:
    c.f[0] = ld32((c.r[17].w[0] + 76u));
    c.budget -= 1;
L_0026AA34:
    st32((c.r[16].w[0] + 76u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0026AA60:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[5].d[0] = c.r[6].d[0] & 65535ull;  goto L_0026AA78; }
    c.r[3].d[0] = ld16((c.r[4].w[0] + 52u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[6].d[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0026AA8C; } }
L_0026AA78:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 52u));
    c.r[5].d[0] = ~(c.r[5].d[0] | 0ull);
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_0026AA8C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0026AAA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 100u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AAC8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0026AAC8u) [[unlikely]] return; }
L_0026AAC8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0026AAEC; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AAE4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_005A(c, 395u, depth + 1u); else { c.pc = 0x0026BD80u; return; } if (c.pc != 0x0026AAE4u) [[unlikely]] return; }
L_0026AAE4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_0026AAEC:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AAF8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 305u, depth + 1u); else { c.pc = 0x0026A790u; return; } if (c.pc != 0x0026AAF8u) [[unlikely]] return; }
L_0026AAF8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0026AB20:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[21] = c.f[12];
    c.f[20] = 0u;
    c.budget -= 15;
L_0026AB5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 4576u);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[20].w[0] + 64u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.f[12] = fp::mul(c.f[21], c.f[0]);  if (t) { goto L_0026AB8C; } }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 20u));
    set32(c.r[7], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_0026AB98; } }
L_0026AB8C:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0026AB98:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[6], c.r[29].w[0] + 112u);
    set32(c.r[3], c.r[4].w[0] << 2);
    mmi::mult(c, 0, c.r[19].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[18].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    set32(c.r[5], c.r[7].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 13664u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026ABC8u); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026ABC8u) [[unlikely]] return; }
L_0026ABC8:
    c.f[2] = ld32((c.r[29].w[0] + 112u));
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[2] = fp::sqrt(c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 4544u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[3].w[0]));
    c.facc = fp::add(c.f[0], c.f[20]);
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull; c.f[20] = fp::add(c.facc, fp::mul(c.f[1], c.f[2]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026AB5Cu | kUnwind; return; } goto L_0026AB5C; } }
    c.f[0] = fp::mul(c.f[20], c.f[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0026AC40:
    set32(c.r[29], c.r[29].w[0] - 480u);
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
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[6], c.r[6].w[0] + 15184u);
    c.f[20] = c.f[12];
    set32(c.r[5], c.r[29].w[0] + 288u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 22;
L_0026AC98:
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026AC98u | kUnwind; return; } goto L_0026AC98; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[23].d[0] = 0ull + 0ull;  goto L_0026ACD4; }
    set32(c.r[21], ld32((c.r[3].w[0] + 16u)));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 20u));
    set32(c.r[16], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[23], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_0026ACE0; } }
L_0026ACD4:
    c.r[21].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0026ACE0:
    c.r[1].d[0] = c.r[23].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[20].w[0] + 52u));  goto L_0026AD18; }
    set32(c.r[5], c.r[29].w[0] + 288u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 2;
L_0026ACF4:
    ld128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st128((c.r[17].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026ACF4u | kUnwind; return; } goto L_0026ACF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));  if (t) { goto L_0026B3A4; } }
L_0026AD18:
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[4].d[0] & 255ull;  goto L_0026B0EC; }
    c.r[22].d[0] = c.r[4].d[0] & 255ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    mmi::mult(c, 0, c.r[18].w[0], c.r[22].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[19].w[0], c.r[22].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[29].w[0] + 456u);
    c.f[12] = c.f[20];
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[8], c.r[29].w[0] + 440u);
    set32(c.r[30], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[9], c.r[29].w[0] + 424u);
    set32(c.r[10], c.r[29].w[0] + 476u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AD60u); c.r[5].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_005B(c, 367u, depth + 1u); else { c.pc = 0x0026FB30u; return; } if (c.pc != 0x0026AD60u) [[unlikely]] return; }
L_0026AD60:
    c.f[3] = ld32((c.r[20].w[0] + 84u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[3]) == fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[29].w[0] + 464u));  goto L_0026B080; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[12] = fp::sub(c.f[0], c.f[3]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026AF08; } }
    c.r[3].d[0] = ld16((c.r[20].w[0] + 52u));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026ADB8; } }
    set32(c.r[3], c.r[23].w[0] - 1u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[3].d[0]) { c.r[18].d[0] = 0ull + 0ull;  goto L_0026ADB8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026ADB8; } }
L_0026ADB8:
    set32(c.r[3], c.r[23].w[0] - 1u);
    c.r[1].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0026B07C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[3].w[0];
    set32(c.r[4], ld32((c.r[29].w[0] + 176u)));
    c.f[0] = fp::sub(c.f[2], c.f[20]);
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 408u);
    set32(c.r[8], c.r[29].w[0] + 440u);
    set32(c.r[9], c.r[29].w[0] + 424u);
    set32(c.r[10], c.r[29].w[0] + 476u);
    c.f[1] = fp::add(c.f[0], c.f[3]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    fpu_div(c, 21u, c.f[1], c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AE18u); c.f[20] = fp::sub(c.f[2], c.f[21]);  if (depth < kMaxDepth) unit_005B(c, 367u, depth + 1u); else { c.pc = 0x0026FB30u; return; } if (c.pc != 0x0026AE18u) [[unlikely]] return; }
L_0026AE18:
    mmi::mult(c, 0, c.r[18].w[0], c.r[22].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[18].w[0] + 1u);
    mmi::mult(c, 1, c.r[2].w[0], c.r[22].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    c.f[12] = ld32((c.r[20].w[0] + 84u));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[29].w[0] + 408u);
    set32(c.r[8], c.r[29].w[0] + 392u);
    set32(c.r[9], c.r[29].w[0] + 424u);
    set32(c.r[10], c.r[29].w[0] + 472u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AE48u); set32(c.r[4], c.r[16].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_005B(c, 367u, depth + 1u); else { c.pc = 0x0026FB30u; return; } if (c.pc != 0x0026AE48u) [[unlikely]] return; }
L_0026AE48:
    c.f[1] = ld32((c.r[29].w[0] + 440u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = ld32((c.r[29].w[0] + 400u));
    c.f[6] = ld32((c.r[29].w[0] + 448u));
    c.f[8] = fp::mul(c.f[21], c.f[1]);
    c.facc = fp::mul(c.f[20], c.f[5]);
    c.f[7] = fp::add(c.facc, fp::mul(c.f[21], c.f[6]));
    c.f[2] = ld32((c.r[29].w[0] + 396u));
    c.f[3] = ld32((c.r[29].w[0] + 444u));
    c.f[1] = ld32((c.r[29].w[0] + 392u));
    c.facc = fp::mul(c.f[20], c.f[2]);
    c.f[6] = fp::add(c.facc, fp::mul(c.f[21], c.f[3]));
    c.f[4] = 0u;
    c.facc = fp::add(c.f[4], c.f[8]);
    c.f[4] = fp::add(c.facc, fp::mul(c.f[20], c.f[1]));
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 448u), c.f[7]);
    st32((c.r[29].w[0] + 444u), c.f[6]);
    st32((c.r[29].w[0] + 440u), c.f[4]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[6]));
    c.f[8] = fp::add(c.facc, fp::mul(c.f[7], c.f[7]));
    fpu_rsqrt(c, 8u, c.f[0], c.f[8]);
    c.f[5] = fp::mul(c.f[4], c.f[8]);
    c.f[0] = ld32((c.r[29].w[0] + 472u));
    c.f[4] = fp::mul(c.f[6], c.f[8]);
    c.f[3] = ld32((c.r[29].w[0] + 476u));
    c.facc = fp::mul(c.f[20], c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 460u));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[21], c.f[3]));
    c.f[3] = fp::mul(c.f[7], c.f[8]);
    c.f[1] = ld32((c.r[29].w[0] + 464u));
    st32((c.r[29].w[0] + 476u), c.f[0]);
    st32((c.r[29].w[0] + 440u), c.f[5]);
    st32((c.r[29].w[0] + 444u), c.f[4]);
    st32((c.r[29].w[0] + 448u), c.f[3]);
    c.facc = fp::mul(c.f[2], c.f[3]);
    c.f[6] = fp::sub(c.facc, fp::mul(c.f[1], c.f[4]));
    c.f[0] = ld32((c.r[29].w[0] + 456u));
    c.facc = fp::mul(c.f[1], c.f[5]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[0], c.f[3]));
    c.facc = fp::mul(c.f[0], c.f[4]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[2], c.f[5]));
    st32((c.r[29].w[0] + 424u), c.f[6]);
    st32((c.r[29].w[0] + 428u), c.f[1]);
    c.budget -= 48;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 432u), c.f[0]);  if (t) { goto L_0026B07C; } }
L_0026AF08:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[3]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026B07C; } }
    c.r[3].d[0] = ld16((c.r[20].w[0] + 52u));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026AF34; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[19], c.r[23].w[0] - 1u);  goto L_0026AF34; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026AF34; } }
L_0026AF34:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0026B07C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[4], ld32((c.r[29].w[0] + 176u)));
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 408u);
    set32(c.r[8], c.r[29].w[0] + 440u);
    set32(c.r[9], c.r[29].w[0] + 424u);
    set32(c.r[10], c.r[29].w[0] + 476u);
    c.f[1] = fp::sub(c.f[3], c.f[20]);
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.f[12] = c.f[3];
    c.f[0] = c.r[2].w[0];
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AF84u); c.f[21] = fp::sub(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_005B(c, 367u, depth + 1u); else { c.pc = 0x0026FB30u; return; } if (c.pc != 0x0026AF84u) [[unlikely]] return; }
L_0026AF84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[7], c.r[29].w[0] + 408u);
    set32(c.r[2], c.r[19].w[0] - 1u);
    set32(c.r[8], c.r[29].w[0] + 392u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[22].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[9], c.r[29].w[0] + 424u);
    c.f[1] = ld32((c.r[20].w[0] + 84u));
    set32(c.r[10], c.r[29].w[0] + 472u);
    mmi::mult(c, 1, c.r[19].w[0], c.r[22].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    c.f[12] = fp::sub(c.f[0], c.f[1]);
    set32(c.r[5], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026AFC0u); set32(c.r[4], c.r[16].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_005B(c, 367u, depth + 1u); else { c.pc = 0x0026FB30u; return; } if (c.pc != 0x0026AFC0u) [[unlikely]] return; }
L_0026AFC0:
    c.f[1] = ld32((c.r[29].w[0] + 440u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = ld32((c.r[29].w[0] + 400u));
    c.f[6] = ld32((c.r[29].w[0] + 448u));
    c.f[8] = fp::mul(c.f[21], c.f[1]);
    c.facc = fp::mul(c.f[20], c.f[5]);
    c.f[7] = fp::add(c.facc, fp::mul(c.f[21], c.f[6]));
    c.f[2] = ld32((c.r[29].w[0] + 396u));
    c.f[3] = ld32((c.r[29].w[0] + 444u));
    c.f[1] = ld32((c.r[29].w[0] + 392u));
    c.facc = fp::mul(c.f[20], c.f[2]);
    c.f[6] = fp::add(c.facc, fp::mul(c.f[21], c.f[3]));
    c.f[4] = 0u;
    c.facc = fp::add(c.f[4], c.f[8]);
    c.f[4] = fp::add(c.facc, fp::mul(c.f[20], c.f[1]));
    c.f[0] = c.r[3].w[0];
    st32((c.r[29].w[0] + 448u), c.f[7]);
    st32((c.r[29].w[0] + 444u), c.f[6]);
    st32((c.r[29].w[0] + 440u), c.f[4]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[6], c.f[6]));
    c.f[8] = fp::add(c.facc, fp::mul(c.f[7], c.f[7]));
    fpu_rsqrt(c, 8u, c.f[0], c.f[8]);
    c.f[5] = fp::mul(c.f[4], c.f[8]);
    c.f[0] = ld32((c.r[29].w[0] + 472u));
    c.f[4] = fp::mul(c.f[6], c.f[8]);
    c.f[3] = ld32((c.r[29].w[0] + 476u));
    c.facc = fp::mul(c.f[20], c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 460u));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[21], c.f[3]));
    c.f[3] = fp::mul(c.f[7], c.f[8]);
    c.f[1] = ld32((c.r[29].w[0] + 464u));
    st32((c.r[29].w[0] + 476u), c.f[0]);
    st32((c.r[29].w[0] + 440u), c.f[5]);
    st32((c.r[29].w[0] + 444u), c.f[4]);
    st32((c.r[29].w[0] + 448u), c.f[3]);
    c.facc = fp::mul(c.f[2], c.f[3]);
    c.f[6] = fp::sub(c.facc, fp::mul(c.f[1], c.f[4]));
    c.f[0] = ld32((c.r[29].w[0] + 456u));
    c.facc = fp::mul(c.f[1], c.f[5]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[0], c.f[3]));
    c.facc = fp::mul(c.f[0], c.f[4]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[2], c.f[5]));
    st32((c.r[29].w[0] + 424u), c.f[6]);
    st32((c.r[29].w[0] + 428u), c.f[1]);
    st32((c.r[29].w[0] + 432u), c.f[0]);
    c.budget -= 47;
L_0026B07C:
    c.f[0] = ld32((c.r[29].w[0] + 464u));
    c.budget -= 1;
L_0026B080:
    st32((c.r[29].w[0] + 300u), 0u);
    c.f[1] = ld32((c.r[29].w[0] + 460u));
    st32((c.r[29].w[0] + 316u), 0u);
    c.f[2] = ld32((c.r[29].w[0] + 456u));
    st32((c.r[29].w[0] + 332u), 0u);
    st32((c.r[29].w[0] + 296u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 440u));
    st32((c.r[29].w[0] + 292u), c.f[1]);
    c.f[1] = ld32((c.r[29].w[0] + 448u));
    c.f[3] = c.f[0] ^ fp::kSign;
    c.f[0] = ld32((c.r[29].w[0] + 424u));
    c.f[1] = c.f[1] ^ fp::kSign;
    st32((c.r[29].w[0] + 288u), c.f[2]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 312u), c.f[1]);
    st32((c.r[29].w[0] + 320u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 444u));
    c.f[1] = ld32((c.r[29].w[0] + 428u));
    c.f[0] = ld32((c.r[29].w[0] + 432u));
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 304u), c.f[3]);
    st32((c.r[29].w[0] + 308u), c.f[2]);
    st32((c.r[29].w[0] + 324u), c.f[1]);
    c.budget -= 27;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 328u), c.f[0]);  if (t) { goto L_0026B1C0; } }
L_0026B0EC:
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    mmi::mult(c, 0, c.r[19].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[7], c.r[29].w[0] + 456u);
    c.f[12] = c.f[20];
    set32(c.r[8], c.r[29].w[0] + 440u);
    set32(c.r[9], c.r[29].w[0] + 424u);
    set32(c.r[10], c.r[29].w[0] + 476u);
    mmi::mult(c, 1, c.r[18].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    set32(c.r[4], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B118u); set32(c.r[5], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_005B(c, 367u, depth + 1u); else { c.pc = 0x0026FB30u; return; } if (c.pc != 0x0026B118u) [[unlikely]] return; }
L_0026B118:
    c.f[2] = ld32((c.r[29].w[0] + 456u));
    set32(c.r[4], c.r[29].w[0] + 360u);
    c.f[1] = ld32((c.r[29].w[0] + 460u));
    st32((c.r[29].w[0] + 300u), 0u);
    c.f[0] = ld32((c.r[29].w[0] + 464u));
    st32((c.r[29].w[0] + 288u), c.f[2]);
    st32((c.r[29].w[0] + 292u), c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B13Cu); st32((c.r[29].w[0] + 296u), c.f[0]);  if (depth < kMaxDepth) unit_002F(c, 197u, depth + 1u); else { c.pc = 0x001BE690u; return; } if (c.pc != 0x0026B13Cu) [[unlikely]] return; }
L_0026B13C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 344u);
    set32(c.r[5], c.r[5].w[0] + 31072u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B150u); set32(c.r[6], c.r[29].w[0] + 456u);  if (depth < kMaxDepth) unit_005A(c, 350u, depth + 1u); else { c.pc = 0x0026B3E0u; return; } if (c.pc != 0x0026B150u) [[unlikely]] return; }
L_0026B150:
    set32(c.r[4], c.r[29].w[0] + 360u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B15Cu); set32(c.r[5], c.r[29].w[0] + 344u);  if (depth < kMaxDepth) unit_003E(c, 273u, depth + 1u); else { c.pc = 0x001FA150u; return; } if (c.pc != 0x0026B15Cu) [[unlikely]] return; }
L_0026B15C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B164u); set32(c.r[4], c.r[29].w[0] + 360u);  if (depth < kMaxDepth) unit_003E(c, 272u, depth + 1u); else { c.pc = 0x001FA100u; return; } if (c.pc != 0x0026B164u) [[unlikely]] return; }
L_0026B164:
    set32(c.r[4], c.r[29].w[0] + 376u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B170u); set32(c.r[5], c.r[29].w[0] + 360u);  if (depth < kMaxDepth) unit_0046(c, 276u, depth + 1u); else { c.pc = 0x0021AA70u; return; } if (c.pc != 0x0026B170u) [[unlikely]] return; }
L_0026B170:
    c.f[5] = ld32((c.r[29].w[0] + 376u));
    st32((c.r[29].w[0] + 316u), 0u);
    c.f[4] = ld32((c.r[29].w[0] + 380u));
    c.f[3] = ld32((c.r[29].w[0] + 384u));
    c.f[2] = ld32((c.r[29].w[0] + 460u));
    c.f[1] = ld32((c.r[29].w[0] + 464u));
    st32((c.r[29].w[0] + 304u), c.f[5]);
    st32((c.r[29].w[0] + 308u), c.f[4]);
    st32((c.r[29].w[0] + 312u), c.f[3]);
    c.facc = fp::mul(c.f[2], c.f[3]);
    c.f[6] = fp::sub(c.facc, fp::mul(c.f[1], c.f[4]));
    c.f[0] = ld32((c.r[29].w[0] + 456u));
    c.facc = fp::mul(c.f[1], c.f[5]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[0], c.f[3]));
    c.facc = fp::mul(c.f[0], c.f[4]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[2], c.f[5]));
    st32((c.r[29].w[0] + 332u), 0u);
    st32((c.r[29].w[0] + 320u), c.f[6]);
    st32((c.r[29].w[0] + 324u), c.f[1]);
    st32((c.r[29].w[0] + 328u), c.f[0]);
    c.budget -= 20;
L_0026B1C0:
    c.r[3].d[0] = ld16((c.r[20].w[0] + 52u));
    c.r[3].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 88u)));  goto L_0026B224; }
    c.f[0] = ld32((c.r[29].w[0] + 296u));
    st32((c.r[29].w[0] + 300u), 0u);
    c.f[1] = ld32((c.r[29].w[0] + 288u));
    st32((c.r[29].w[0] + 316u), 0u);
    c.f[2] = ld32((c.r[29].w[0] + 292u));
    c.f[3] = c.f[0] ^ fp::kSign;
    c.f[0] = ld32((c.r[29].w[0] + 312u));
    c.f[1] = c.f[1] ^ fp::kSign;
    st32((c.r[29].w[0] + 288u), c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 312u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 308u));
    c.f[0] = ld32((c.r[29].w[0] + 304u));
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 296u), c.f[3]);
    st32((c.r[29].w[0] + 292u), c.f[2]);
    st32((c.r[29].w[0] + 308u), c.f[1]);
    st32((c.r[29].w[0] + 304u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 88u)));
    c.budget -= 21;
L_0026B224:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.f[2] = ld32((c.r[29].w[0] + 328u));  goto L_0026B288; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.f[2] = ld32((c.r[29].w[0] + 312u));  goto L_0026B244; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld16((c.r[20].w[0] + 52u));  if (t) { goto L_0026B2CC; } }
L_0026B244:
    st32((c.r[29].w[0] + 300u), 0u);
    c.f[1] = ld32((c.r[29].w[0] + 308u));
    st32((c.r[29].w[0] + 316u), 0u);
    c.f[0] = ld32((c.r[29].w[0] + 304u));
    c.f[5] = ld32((c.r[29].w[0] + 288u));
    c.f[4] = ld32((c.r[29].w[0] + 292u));
    c.f[3] = ld32((c.r[29].w[0] + 296u));
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 312u), c.f[3]);
    st32((c.r[29].w[0] + 296u), c.f[2]);
    st32((c.r[29].w[0] + 292u), c.f[1]);
    st32((c.r[29].w[0] + 288u), c.f[0]);
    st32((c.r[29].w[0] + 304u), c.f[5]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 308u), c.f[4]);  if (t) { goto L_0026B2C8; } }
L_0026B288:
    st32((c.r[29].w[0] + 300u), 0u);
    c.f[1] = ld32((c.r[29].w[0] + 324u));
    st32((c.r[29].w[0] + 332u), 0u);
    c.f[0] = ld32((c.r[29].w[0] + 320u));
    c.f[5] = ld32((c.r[29].w[0] + 288u));
    c.f[4] = ld32((c.r[29].w[0] + 292u));
    c.f[3] = ld32((c.r[29].w[0] + 296u));
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 328u), c.f[3]);
    st32((c.r[29].w[0] + 296u), c.f[2]);
    st32((c.r[29].w[0] + 292u), c.f[1]);
    st32((c.r[29].w[0] + 288u), c.f[0]);
    st32((c.r[29].w[0] + 320u), c.f[5]);
    st32((c.r[29].w[0] + 324u), c.f[4]);
    c.budget -= 16;
L_0026B2C8:
    c.r[3].d[0] = ld16((c.r[20].w[0] + 52u));
    c.budget -= 1;
L_0026B2CC:
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 288u);  goto L_0026B380; }
    c.f[3] = ld32((c.r[20].w[0] + 96u));
    c.f[2] = ld32((c.r[20].w[0] + 80u));
    c.f[0] = ld32((c.r[29].w[0] + 476u));
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[1] = ld32((c.r[20].w[0] + 92u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[20] = fp::mul(c.f[3], c.f[2]);  if (t) { goto L_0026B320; } }
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B314u);  if (depth < kMaxDepth) unit_00AB(c, 372u, depth + 1u); else { c.pc = 0x003AEE10u; return; } if (c.pc != 0x0026B314u) [[unlikely]] return; }
L_0026B314:
    c.f[1] = ld32((c.r[28].w[0] - 30688u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.budget -= 3;
L_0026B320:
    c.f[13] = ld32((c.r[29].w[0] + 456u));
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.f[14] = ld32((c.r[29].w[0] + 460u));
    st32((c.r[29].w[0] + 252u), 0u);
    c.f[15] = ld32((c.r[29].w[0] + 464u));
    st32((c.r[29].w[0] + 268u), 0u);
    c.f[12] = c.f[20];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B344u); st32((c.r[29].w[0] + 284u), 0u);  if (depth < kMaxDepth) unit_005F(c, 80u, depth + 1u); else { c.pc = 0x0027D8C0u; return; } if (c.pc != 0x0026B344u) [[unlikely]] return; }
L_0026B344:
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B354u); set32(c.r[6], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_005F(c, 75u, depth + 1u); else { c.pc = 0x0027D2D0u; return; } if (c.pc != 0x0026B354u) [[unlikely]] return; }
L_0026B354:
    set32(c.r[6], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[29].w[0] + 288u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
L_0026B360:
    ld128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026B360u | kUnwind; return; } goto L_0026B360; } }
    set32(c.r[5], c.r[29].w[0] + 288u);
    c.budget -= 1;
L_0026B380:
    set32(c.r[4], 0u + 3u);
    c.budget -= 1;
L_0026B384:
    ld128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st128((c.r[17].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026B384u | kUnwind; return; } goto L_0026B384; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.budget -= 1;
L_0026B3A4:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 480u);  c.pc = t; return; }
L_0026B3E0:
    c.f[5] = ld32((c.r[5].w[0] + 4u));
    c.f[4] = ld32((c.r[6].w[0] + 8u));
    c.f[3] = ld32((c.r[5].w[0] + 8u));
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    c.facc = fp::mul(c.f[5], c.f[4]);
    c.f[6] = fp::sub(c.facc, fp::mul(c.f[3], c.f[2]));
    c.f[1] = ld32((c.r[6].w[0]));
    c.f[0] = ld32((c.r[5].w[0]));
    c.facc = fp::mul(c.f[3], c.f[1]);
    c.f[3] = fp::sub(c.facc, fp::mul(c.f[0], c.f[4]));
    c.facc = fp::mul(c.f[0], c.f[2]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[5], c.f[1]));
    st32((c.r[4].w[0]), c.f[6]);
    st32((c.r[4].w[0] + 4u), c.f[3]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.f[0]);  c.pc = t; return; }
L_0026B420:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[4].w[0] + 52u));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0026B458; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B44Cu);  if (depth < kMaxDepth) unit_005A(c, 354u, depth + 1u); else { c.pc = 0x0026B5B0u; return; } if (c.pc != 0x0026B44Cu) [[unlikely]] return; }
L_0026B44C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 56u), c.r[3].w[0]);  if (t) { goto L_0026B594; } }
L_0026B458:
    set32(c.r[3], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_0026B474; }
    set32(c.r[5], ld32((c.r[3].w[0] + 8u)));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 20u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[3].w[0] + 12u)));  if (t) { goto L_0026B47C; } }
L_0026B474:
    c.r[3].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0026B47C:
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[10].d[0] = c.r[4].d[0] & 255ull;  goto L_0026B4A0; }
    st32((c.r[16].w[0]), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), 0u);  if (t) { goto L_0026B594; } }
L_0026B4A0:
    set32(c.r[9], c.r[5].w[0] - 1u);
    mmi::mult(c, 0, c.r[9].w[0], c.r[10].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[12], ld32((c.r[17].w[0] + 56u)));  goto L_0026B4D4; }
    set32(c.r[4], c.r[5].w[0] - 2u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    st32((c.r[6].w[0]), c.r[9].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[3].w[0]);  if (t) { goto L_0026B594; } }
L_0026B4D4:
    set32(c.r[5], c.r[5].w[0] - 2u);
    c.r[13].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[11].d[0] = 0ull + 0ull;  if (t) { goto L_0026B558; } }
L_0026B4E4:
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    fpu_compare(c, fp::key(c.f[12]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026B504; } }
    st32((c.r[17].w[0] + 56u), c.r[12].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[11], c.r[12].w[0] + 1u);  if (t) { goto L_0026B564; } }
L_0026B504:
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0026B538; } }
    set32(c.r[8], c.r[12].w[0] + 1u);
    mmi::mult(c, 0, c.r[8].w[0], c.r[10].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026B538; } }
    st32((c.r[17].w[0] + 56u), c.r[12].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[11].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0026B564; } }
L_0026B538:
    c.budget -= 2;
    if (c.r[12].d[0] != c.r[5].d[0]) { set32(c.r[12], c.r[12].w[0] + 1u);  goto L_0026B558; }
    c.budget -= 2;
    { const bool t = c.r[13].d[0] == 0ull;  if (t) { goto L_0026B554; } }
    c.r[12].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[13].d[0] = 0ull + 0ull;  if (t) { goto L_0026B558; } }
L_0026B554:
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.budget -= 1;
L_0026B558:
    c.r[4].d[0] = c.r[12].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { mmi::mult(c, 0, c.r[12].w[0], c.r[10].w[0]); c.r[4].d[0] = c.lo.d[0];  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026B4E4u | kUnwind; return; } goto L_0026B4E4; }
L_0026B564:
    mmi::mult(c, 0, c.r[12].w[0], c.r[10].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[11].w[0], c.r[10].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[1] = fp::sub(c.f[0], c.f[2]);
    c.f[0] = fp::sub(c.f[12], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[7].w[0]), c.f[0]);
    st32((c.r[16].w[0]), c.r[12].w[0]);
    st32((c.r[6].w[0]), c.r[11].w[0]);
    c.budget -= 12;
L_0026B594:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026B5B0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    c.budget -= 18;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0026B600; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_0026B604; } }
L_0026B600:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026B604:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026B62C; } }
    st32((c.r[19].w[0]), 0u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0]), c.f[0]);  if (t) { goto L_0026B7D8; } }
L_0026B62C:
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 3;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0026B65C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B648u);  if (depth < kMaxDepth) unit_00AB(c, 431u, depth + 1u); else { c.pc = 0x003AF758u; return; } if (c.pc != 0x0026B648u) [[unlikely]] return; }
L_0026B648:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[12] = fp::add(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 5;
L_0026B65C:
    c.f[13] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[13]) == fp::key(c.f[12]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0026B688; } }
    set32(c.r[4], c.r[16].w[0] - 2u);
    set32(c.r[3], c.r[16].w[0] - 1u);
    st32((c.r[19].w[0]), c.r[4].w[0]);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0]), c.f[13]);  if (t) { goto L_0026B7D8; } }
L_0026B688:
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[13]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[20].w[0] + 76u));  goto L_0026B6A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B69Cu);  if (depth < kMaxDepth) unit_00AB(c, 431u, depth + 1u); else { c.pc = 0x003AF758u; return; } if (c.pc != 0x0026B69Cu) [[unlikely]] return; }
L_0026B69C:
    c.f[12] = c.f[0];
    c.f[0] = ld32((c.r[20].w[0] + 76u));
    c.budget -= 2;
L_0026B6A4:
    set32(c.r[4], c.r[16].w[0] - 1u);
    c.f[20] = 0u;
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], 0u + 1u);
    c.f[2] = fp::mul(c.f[12], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.f[22] = c.f[20];  if (t) { goto L_0026B704; } }
L_0026B6C0:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0026B700; }
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[20] = fp::sub(c.f[2], c.f[0]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_div(c, 22u, c.f[20], c.f[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026B710; } }
L_0026B700:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0026B704:
    c.r[3].d[0] = c.r[17].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], ld32((c.r[20].w[0] + 72u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026B6C0u | kUnwind; return; } goto L_0026B6C0; }
L_0026B710:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_0026B7C0; } }
L_0026B718:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B728u); c.f[12] = c.f[22];  if (depth < kMaxDepth) unit_005A(c, 328u, depth + 1u); else { c.pc = 0x0026AB20u; return; } if (c.pc != 0x0026B728u) [[unlikely]] return; }
L_0026B728:
    c.f[21] = fp::sub(c.f[0], c.f[20]);
    c.f[1] = c.f[21] & fp::kAbs;
    c.f[0] = ld32((c.r[28].w[0] - 32584u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[19].w[0]), c.r[17].w[0]);  goto L_0026B7D0; }
    set32(c.r[2], ld32((c.r[20].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = 0ull + 0ull;  goto L_0026B75C; }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 20u));
    set32(c.r[7], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_0026B764; } }
L_0026B75C:
    c.r[7].d[0] = 0ull + 0ull;
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0026B764:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[6], c.r[29].w[0] + 144u);
    set32(c.r[3], c.r[4].w[0] << 2);
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.f[12] = c.f[22];
    mmi::mult(c, 1, c.r[16].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    set32(c.r[5], c.r[7].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 13664u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B798u); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026B798u) [[unlikely]] return; }
L_0026B798:
    c.f[2] = ld32((c.r[29].w[0] + 144u));
    c.f[1] = ld32((c.r[29].w[0] + 148u));
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[0] = fp::sqrt(c.f[0]);
    set32(c.r[22], c.r[22].w[0] + 1u);
    fpu_div(c, 0u, c.f[21], c.f[0]);
    c.f[22] = fp::sub(c.f[22], c.f[0]);
    c.budget -= 10;
L_0026B7C0:
    c.r[3].d[0] = c.r[22].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026B718u | kUnwind; return; } goto L_0026B718; }
    st32((c.r[19].w[0]), c.r[17].w[0]);
    c.budget -= 1;
L_0026B7D0:
    st32((c.r[18].w[0]), c.r[16].w[0]);
    st32((c.r[21].w[0]), c.f[22]);
    c.budget -= 2;
L_0026B7D8:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0026B810:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 68u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0026B848; } }
    set32(c.r[18], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_0026B854; } }
L_0026B848:
    c.r[19].d[0] = 0ull + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0026B854:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_0026BA2C; }
    set32(c.r[3], ld32((c.r[20].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_0026B874; }
    c.r[16].d[0] = ld8((c.r[3].w[0] + 20u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[3].w[0] + 12u)));  if (t) { goto L_0026B878; } }
L_0026B874:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026B878:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0026BA28; } }
    c.r[4].d[0] = ld16((c.r[20].w[0] + 8u));
    c.r[3].d[0] = c.r[4].d[0] & 8ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_0026B910; }
    c.f[0] = ld32((c.r[20].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[12]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { c.r[3].d[0] = c.r[4].d[0] & 64ull;  goto L_0026B8BC; }
    c.r[3].d[0] = c.r[4].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026B8B8; } }
    c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0026B910; } }
L_0026B8B8:
    c.r[3].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 1;
L_0026B8BC:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[20].w[0] + 8u));  goto L_0026B904; }
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 104u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B8D4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026B8D4u) [[unlikely]] return; }
L_0026B8D4:
    c.f[1] = ld32((c.r[20].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[20].w[0] + 40u), c.f[0]);  goto L_0026B900; }
    c.r[3].d[0] = ld16((c.r[20].w[0] + 8u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026B8FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0026B910; } }
L_0026B8FC:
    st32((c.r[20].w[0] + 40u), c.f[0]);
    c.budget -= 1;
L_0026B900:
    c.r[3].d[0] = ld16((c.r[20].w[0] + 8u));
    c.budget -= 1;
L_0026B904:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & 65407ull;
    st16((c.r[20].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0026B910:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0026BA28; } }
    c.f[12] = ld32((c.r[20].w[0] + 40u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B934u); set32(c.r[7], c.r[20].w[0] + 60u);  if (depth < kMaxDepth) unit_0057(c, 258u, depth + 1u); else { c.pc = 0x0025DF30u; return; } if (c.pc != 0x0026B934u) [[unlikely]] return; }
L_0026B934:
    c.f[12] = c.f[0];
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 172u);
    set32(c.r[6], c.r[29].w[0] + 168u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B94Cu); set32(c.r[7], c.r[29].w[0] + 164u);  if (depth < kMaxDepth) unit_005A(c, 351u, depth + 1u); else { c.pc = 0x0026B420u; return; } if (c.pc != 0x0026B94Cu) [[unlikely]] return; }
L_0026B94C:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 52u));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 64u)));  goto L_0026B9B0; }
    set32(c.r[5], ld32((c.r[29].w[0] + 172u)));
    c.f[12] = ld32((c.r[29].w[0] + 164u));
    set32(c.r[6], ld32((c.r[29].w[0] + 168u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 108u), 0u);
    st32((c.r[29].w[0] + 124u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026B980u); st32((c.r[29].w[0] + 140u), 0u);  if (depth < kMaxDepth) unit_005A(c, 331u, depth + 1u); else { c.pc = 0x0026AC40u; return; } if (c.pc != 0x0026B980u) [[unlikely]] return; }
L_0026B980:
    set32(c.r[2], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], c.r[2].w[0] + 48u);
    c.budget -= 4;
L_0026B990:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026B990u | kUnwind; return; } goto L_0026B990; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 64u)));
    c.budget -= 1;
L_0026B9B0:
    set32(c.r[5], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.f[12] = ld32((c.r[29].w[0] + 164u));  if (t) { goto L_0026B9D0; } }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 20u));
    set32(c.r[7], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[2].w[0] + 16u)));  if (t) { goto L_0026B9DC; } }
L_0026B9D0:
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0026B9DC:
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[29].w[0] + 152u);
    mmi::mult(c, 1, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    set32(c.r[5], c.r[7].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] + 13544u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BA0Cu); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026BA0Cu) [[unlikely]] return; }
L_0026BA0C:
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    c.f[2] = ld32((c.r[29].w[0] + 156u));
    c.f[1] = ld32((c.r[29].w[0] + 160u));
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    st32((c.r[3].w[0] + 96u), c.f[0]);
    st32((c.r[3].w[0] + 100u), c.f[2]);
    st32((c.r[3].w[0] + 104u), c.f[1]);
    c.budget -= 7;
L_0026BA28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0026BA2C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_0026BA50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 52u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0026BA84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BA74u);  if (depth < kMaxDepth) unit_005A(c, 370u, depth + 1u); else { c.pc = 0x0026BAA0u; return; } if (c.pc != 0x0026BA74u) [[unlikely]] return; }
L_0026BA74:
    st32((c.r[16].w[0] + 76u), c.f[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0] + 52u));
    c.r[3].d[0] = c.r[3].d[0] & 65534ull;
    st16((c.r[16].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0026BA84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0026BAA0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 76u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0026BB6C; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_0026BAE0; }
    set32(c.r[17], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 1;
L_0026BAE0:
    set32(c.r[4], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BAECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x0026BAECu) [[unlikely]] return; }
L_0026BAEC:
    set32(c.r[16], c.r[17].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BAFCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x0026BAFCu) [[unlikely]] return; }
L_0026BAFC:
    st32((c.r[20].w[0] + 72u), c.r[2].w[0]);
    c.r[19].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0]), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_0026BB4C; } }
L_0026BB10:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BB24u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_005A(c, 328u, depth + 1u); else { c.pc = 0x0026AB20u; return; } if (c.pc != 0x0026BB24u) [[unlikely]] return; }
L_0026BB24:
    set32(c.r[4], ld32((c.r[20].w[0] + 72u)));
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[2].w[0]), c.f[0]);
    c.budget -= 10;
L_0026BB4C:
    set32(c.r[2], c.r[17].w[0] - 1u);
    c.r[2].d[0] = c.r[19].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0026BB10u | kUnwind; return; } goto L_0026BB10; }
    set32(c.r[2], ld32((c.r[20].w[0] + 72u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0] - 4u));
    st32((c.r[20].w[0] + 76u), c.f[0]);
    c.budget -= 4;
L_0026BB6C:
    c.f[0] = ld32((c.r[20].w[0] + 76u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0026BB90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0026BD60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 3936u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 6;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 68u)));  goto L_0026BC2C; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_0026BC08; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BBD8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026BBD8u) [[unlikely]] return; }
L_0026BBD8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BBE8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026BBE8u) [[unlikely]] return; }
L_0026BBE8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026BC04; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BC04u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026BC04u) [[unlikely]] return; }
L_0026BC04:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026BC08:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 64u), 0u);  if (t) { goto L_0026BC28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BC18u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026BC18u) [[unlikely]] return; }
L_0026BC18:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BC28u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026BC28u) [[unlikely]] return; }
L_0026BC28:
    set32(c.r[18], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 1;
L_0026BC2C:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 72u)));  goto L_0026BC98; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_0026BC74; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BC44u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026BC44u) [[unlikely]] return; }
L_0026BC44:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BC54u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026BC54u) [[unlikely]] return; }
L_0026BC54:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026BC70; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BC70u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026BC70u) [[unlikely]] return; }
L_0026BC70:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0026BC74:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 68u), 0u);  if (t) { goto L_0026BC94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BC84u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026BC84u) [[unlikely]] return; }
L_0026BC84:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BC94u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026BC94u) [[unlikely]] return; }
L_0026BC94:
    set32(c.r[4], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 1;
L_0026BC98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BCA0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x0026BCA0u) [[unlikely]] return; }
L_0026BCA0:
    set32(c.r[2], c.r[17].w[0] + 68u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 64u);  goto L_0026BCF0; }
    set32(c.r[18], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0026BCEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BCC0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026BCC0u) [[unlikely]] return; }
L_0026BCC0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BCD0u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026BCD0u) [[unlikely]] return; }
L_0026BCD0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026BCEC; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BCECu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026BCECu) [[unlikely]] return; }
L_0026BCEC:
    set32(c.r[2], c.r[17].w[0] + 64u);
    c.budget -= 1;
L_0026BCF0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0026BD3C; }
    set32(c.r[18], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0026BD38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BD0Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026BD0Cu) [[unlikely]] return; }
L_0026BD0C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BD1Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026BD1Cu) [[unlikely]] return; }
L_0026BD1C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0026BD38; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BD38u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026BD38u) [[unlikely]] return; }
L_0026BD38:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0026BD3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BD44u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 245u, depth + 1u); else { c.pc = 0x0031E610u; return; } if (c.pc != 0x0026BD44u) [[unlikely]] return; }
L_0026BD44:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0026BD64; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BD60u); set32(c.r[5], 0u + 100u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0026BD60u) [[unlikely]] return; }
L_0026BD60:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0026BD64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0026BD80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BDA4u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 251u, depth + 1u); else { c.pc = 0x0031E6D0u; return; } if (c.pc != 0x0026BDA4u) [[unlikely]] return; }
L_0026BDA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 3936u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 64u), c.r[18].w[0]);  if (t) { goto L_0026BDD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BDC0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026BDC0u) [[unlikely]] return; }
L_0026BDC0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BDD0u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026BDD0u) [[unlikely]] return; }
L_0026BDD0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 68u), c.r[16].w[0]);  if (t) { goto L_0026BDF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BDE0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0026BDE0u) [[unlikely]] return; }
L_0026BDE0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BDF0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0026BDF0u) [[unlikely]] return; }
L_0026BDF0:
    st16((c.r[17].w[0] + 52u), static_cast<std::uint16_t>(0u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 56u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 60u), 0u);
    set32(c.r[6], 0u + 16u);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 52u));
    c.r[2].d[0] = c.r[2].d[0] & 65531ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BE18u); st16((c.r[17].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_005A(c, 323u, depth + 1u); else { c.pc = 0x0026AA60u; return; } if (c.pc != 0x0026BE18u) [[unlikely]] return; }
L_0026BE18:
    c.r[5].d[0] = ld16((c.r[17].w[0] + 52u));
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] & 65503ull;
    st16((c.r[17].w[0] + 52u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[17].w[0] + 80u), 0u);
    st32((c.r[17].w[0] + 84u), 0u);
    st32((c.r[17].w[0] + 96u), c.r[4].w[0]);
    st16((c.r[17].w[0] + 88u), static_cast<std::uint16_t>(0u));
    c.r[4].d[0] = ld16((c.r[17].w[0] + 52u));
    c.r[4].d[0] = c.r[4].d[0] & 65471ull;
    st16((c.r[17].w[0] + 52u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[17].w[0] + 52u));
    c.r[4].d[0] = c.r[4].d[0] | 2ull;
    st16((c.r[17].w[0] + 52u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st32((c.r[17].w[0] + 92u), 0u);
    st32((c.r[17].w[0] + 72u), 0u);
    st32((c.r[17].w[0] + 76u), c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[17].w[0] + 52u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[17].w[0] + 52u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 28;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0026BE90:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 396u)));  goto L_0026BEB0; }
L_0026BEA0:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 392u)));  goto L_0026BF10; }
L_0026BEB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], c.r[29].w[0] + 44u);
    st32((c.r[29].w[0] + 40u), 0u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 44u), c.r[6].w[0]);
    set32(c.r[8], 0u + 1u);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BEF0u); set32(c.r[5], c.r[29].w[0] + 40u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026BEF0u) [[unlikely]] return; }
L_0026BEF0:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026BF10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[6], 0u + 4u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[7], c.r[29].w[0] + 56u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[8], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 56u), c.r[6].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BF44u); set32(c.r[5], c.r[29].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026BF44u) [[unlikely]] return; }
L_0026BF44:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 60u)));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0026BF70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 14152u);  c.pc = t; return; }
L_0026BF80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BF94u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 253u, depth + 1u); else { c.pc = 0x00262040u; return; } if (c.pc != 0x0026BF94u) [[unlikely]] return; }
L_0026BF94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BFA0u); set32(c.r[4], ld32((c.r[2].w[0] + 14152u)));  if (depth < kMaxDepth) unit_0088(c, 258u, depth + 1u); else { c.pc = 0x00321E60u; return; } if (c.pc != 0x0026BFA0u) [[unlikely]] return; }
L_0026BFA0:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[16].w[0] + 10u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BFB4u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 11u, depth + 1u); else { c.pc = 0x001F40A0u; return; } if (c.pc != 0x0026BFB4u) [[unlikely]] return; }
L_0026BFB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0026BFD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026BFECu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0058(c, 257u, depth + 1u); else { c.pc = 0x00262090u; return; } if (c.pc != 0x0026BFECu) [[unlikely]] return; }
L_0026BFEC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  goto L_0026BFFC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_005B(c, 7u, depth); } }
L_0026BFFC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_005B(c, 3u, depth); } }
    [[clang::musttail]] return unit_005B(c, 2u, depth);
}

}
