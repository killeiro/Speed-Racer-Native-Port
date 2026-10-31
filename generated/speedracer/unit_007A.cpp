#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_007A[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0,
    0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0,
    0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0,
    0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0,
    28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0,
    36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40,
    0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0,
    45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    53, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0,
    58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0,
    0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0,
    0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0,
    0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0,
    0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0,
    0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0,
    0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0,
    0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0,
    0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0,
    129, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0,
    0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0,
    0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0,
    0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160,
    0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0,
    0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0,
    0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177,
    0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0,
    182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0,
    186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0,
    0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0,
    0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0,
    207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0,
    0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 220,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 224,
    0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0,
    0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0,
    0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236,
    0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0,
    0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0,
    0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0,
    0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0,
    256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 260,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 265,
    0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 270,
    0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0,
    0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0,
    0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0,
    0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 295,
    0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0,
    0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    304, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0,
    0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0,
    0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 318, 0,
    0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0,
    0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0,
    342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0,
    346, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0,
    0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0,
    361, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 365,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0,
    369, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0,
    0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 378,
    0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0,
    0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0,
    388, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0,
    0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0,
    0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0,
    0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 416,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0,
    0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0,
    0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426,
    0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0,
    0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 433, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0,
    0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 439, 0, 440, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 451, 0, 452, 0, 0, 0, 453, 0, 454, 0,
    455, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 459, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0,
};

void unit_007A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002E8000;
    case 2u: goto L_002E8024;
    case 3u: goto L_002E8038;
    case 4u: goto L_002E8068;
    case 5u: goto L_002E8078;
    case 6u: goto L_002E8098;
    case 7u: goto L_002E80C4;
    case 8u: goto L_002E80D4;
    case 9u: goto L_002E80F4;
    case 10u: goto L_002E8118;
    case 11u: goto L_002E812C;
    case 12u: goto L_002E813C;
    case 13u: goto L_002E8144;
    case 14u: goto L_002E8168;
    case 15u: goto L_002E8178;
    case 16u: goto L_002E8198;
    case 17u: goto L_002E81C4;
    case 18u: goto L_002E81E8;
    case 19u: goto L_002E81FC;
    case 20u: goto L_002E822C;
    case 21u: goto L_002E823C;
    case 22u: goto L_002E825C;
    case 23u: goto L_002E8288;
    case 24u: goto L_002E8298;
    case 25u: goto L_002E82B8;
    case 26u: goto L_002E82DC;
    case 27u: goto L_002E82F0;
    case 28u: goto L_002E8300;
    case 29u: goto L_002E832C;
    case 30u: goto L_002E833C;
    case 31u: goto L_002E835C;
    case 32u: goto L_002E8388;
    case 33u: goto L_002E83AC;
    case 34u: goto L_002E83C0;
    case 35u: goto L_002E83F0;
    case 36u: goto L_002E8400;
    case 37u: goto L_002E8420;
    case 38u: goto L_002E844C;
    case 39u: goto L_002E845C;
    case 40u: goto L_002E847C;
    case 41u: goto L_002E84A0;
    case 42u: goto L_002E84B4;
    case 43u: goto L_002E84C4;
    case 44u: goto L_002E84F0;
    case 45u: goto L_002E8500;
    case 46u: goto L_002E8520;
    case 47u: goto L_002E8550;
    case 48u: goto L_002E8564;
    case 49u: goto L_002E8574;
    case 50u: goto L_002E85A0;
    case 51u: goto L_002E85B0;
    case 52u: goto L_002E85D0;
    case 53u: goto L_002E8600;
    case 54u: goto L_002E8614;
    case 55u: goto L_002E8624;
    case 56u: goto L_002E8650;
    case 57u: goto L_002E8660;
    case 58u: goto L_002E8680;
    case 59u: goto L_002E86B0;
    case 60u: goto L_002E86C4;
    case 61u: goto L_002E86D4;
    case 62u: goto L_002E8700;
    case 63u: goto L_002E8710;
    case 64u: goto L_002E8730;
    case 65u: goto L_002E8754;
    case 66u: goto L_002E8790;
    case 67u: goto L_002E87B4;
    case 68u: goto L_002E87CC;
    case 69u: goto L_002E87E0;
    case 70u: goto L_002E880C;
    case 71u: goto L_002E881C;
    case 72u: goto L_002E883C;
    case 73u: goto L_002E8868;
    case 74u: goto L_002E8878;
    case 75u: goto L_002E8898;
    case 76u: goto L_002E88C4;
    case 77u: goto L_002E88D4;
    case 78u: goto L_002E88F4;
    case 79u: goto L_002E8918;
    case 80u: goto L_002E8928;
    case 81u: goto L_002E895C;
    case 82u: goto L_002E896C;
    case 83u: goto L_002E898C;
    case 84u: goto L_002E89B0;
    case 85u: goto L_002E89C0;
    case 86u: goto L_002E89F4;
    case 87u: goto L_002E8A04;
    case 88u: goto L_002E8A24;
    case 89u: goto L_002E8A60;
    case 90u: goto L_002E8ACC;
    case 91u: goto L_002E8AE4;
    case 92u: goto L_002E8B14;
    case 93u: goto L_002E8B24;
    case 94u: goto L_002E8B44;
    case 95u: goto L_002E8B50;
    case 96u: goto L_002E8B74;
    case 97u: goto L_002E8B88;
    case 98u: goto L_002E8B98;
    case 99u: goto L_002E8BC4;
    case 100u: goto L_002E8BD4;
    case 101u: goto L_002E8BF4;
    case 102u: goto L_002E8C18;
    case 103u: goto L_002E8C2C;
    case 104u: goto L_002E8C3C;
    case 105u: goto L_002E8C68;
    case 106u: goto L_002E8C78;
    case 107u: goto L_002E8C98;
    case 108u: goto L_002E8CCC;
    case 109u: goto L_002E8CE0;
    case 110u: goto L_002E8CF4;
    case 111u: goto L_002E8D20;
    case 112u: goto L_002E8D30;
    case 113u: goto L_002E8D50;
    case 114u: goto L_002E8D84;
    case 115u: goto L_002E8D98;
    case 116u: goto L_002E8DAC;
    case 117u: goto L_002E8DD8;
    case 118u: goto L_002E8DE8;
    case 119u: goto L_002E8E08;
    case 120u: goto L_002E8E48;
    case 121u: goto L_002E8E5C;
    case 122u: goto L_002E8E70;
    case 123u: goto L_002E8E9C;
    case 124u: goto L_002E8EAC;
    case 125u: goto L_002E8ECC;
    case 126u: goto L_002E8EF0;
    case 127u: goto L_002E8F44;
    case 128u: goto L_002E8F68;
    case 129u: goto L_002E8F80;
    case 130u: goto L_002E8F90;
    case 131u: goto L_002E8FA0;
    case 132u: goto L_002E8FCC;
    case 133u: goto L_002E8FDC;
    case 134u: goto L_002E8FFC;
    case 135u: goto L_002E9028;
    case 136u: goto L_002E9038;
    case 137u: goto L_002E9058;
    case 138u: goto L_002E9084;
    case 139u: goto L_002E9094;
    case 140u: goto L_002E90B4;
    case 141u: goto L_002E90E0;
    case 142u: goto L_002E90F4;
    case 143u: goto L_002E9104;
    case 144u: goto L_002E9130;
    case 145u: goto L_002E9140;
    case 146u: goto L_002E9160;
    case 147u: goto L_002E9178;
    case 148u: goto L_002E919C;
    case 149u: goto L_002E91BC;
    case 150u: goto L_002E91E0;
    case 151u: goto L_002E91F8;
    case 152u: goto L_002E9208;
    case 153u: goto L_002E9218;
    case 154u: goto L_002E9244;
    case 155u: goto L_002E9254;
    case 156u: goto L_002E9274;
    case 157u: goto L_002E92A0;
    case 158u: goto L_002E92B0;
    case 159u: goto L_002E92D0;
    case 160u: goto L_002E92FC;
    case 161u: goto L_002E930C;
    case 162u: goto L_002E932C;
    case 163u: goto L_002E93E4;
    case 164u: goto L_002E9408;
    case 165u: goto L_002E941C;
    case 166u: goto L_002E942C;
    case 167u: goto L_002E9458;
    case 168u: goto L_002E9468;
    case 169u: goto L_002E9488;
    case 170u: goto L_002E94B0;
    case 171u: goto L_002E94D4;
    case 172u: goto L_002E94E8;
    case 173u: goto L_002E94F8;
    case 174u: goto L_002E9524;
    case 175u: goto L_002E9534;
    case 176u: goto L_002E9554;
    case 177u: goto L_002E957C;
    case 178u: goto L_002E95A0;
    case 179u: goto L_002E95B4;
    case 180u: goto L_002E95C4;
    case 181u: goto L_002E95F0;
    case 182u: goto L_002E9600;
    case 183u: goto L_002E9620;
    case 184u: goto L_002E9648;
    case 185u: goto L_002E966C;
    case 186u: goto L_002E9680;
    case 187u: goto L_002E9690;
    case 188u: goto L_002E96BC;
    case 189u: goto L_002E96CC;
    case 190u: goto L_002E96EC;
    case 191u: goto L_002E971C;
    case 192u: goto L_002E9740;
    case 193u: goto L_002E9754;
    case 194u: goto L_002E9764;
    case 195u: goto L_002E9790;
    case 196u: goto L_002E97A0;
    case 197u: goto L_002E97C0;
    case 198u: goto L_002E97F0;
    case 199u: goto L_002E9814;
    case 200u: goto L_002E9828;
    case 201u: goto L_002E9838;
    case 202u: goto L_002E9864;
    case 203u: goto L_002E9874;
    case 204u: goto L_002E9894;
    case 205u: goto L_002E98C8;
    case 206u: goto L_002E98EC;
    case 207u: goto L_002E9900;
    case 208u: goto L_002E9910;
    case 209u: goto L_002E993C;
    case 210u: goto L_002E994C;
    case 211u: goto L_002E996C;
    case 212u: goto L_002E99A8;
    case 213u: goto L_002E99BC;
    case 214u: goto L_002E99CC;
    case 215u: goto L_002E99F8;
    case 216u: goto L_002E9A08;
    case 217u: goto L_002E9A28;
    case 218u: goto L_002E9A58;
    case 219u: goto L_002E9A6C;
    case 220u: goto L_002E9A7C;
    case 221u: goto L_002E9AA8;
    case 222u: goto L_002E9AB8;
    case 223u: goto L_002E9AD8;
    case 224u: goto L_002E9AFC;
    case 225u: goto L_002E9B0C;
    case 226u: goto L_002E9B40;
    case 227u: goto L_002E9B50;
    case 228u: goto L_002E9B70;
    case 229u: goto L_002E9B94;
    case 230u: goto L_002E9BA4;
    case 231u: goto L_002E9BD8;
    case 232u: goto L_002E9BE8;
    case 233u: goto L_002E9C08;
    case 234u: goto L_002E9C38;
    case 235u: goto L_002E9C48;
    case 236u: goto L_002E9C7C;
    case 237u: goto L_002E9C8C;
    case 238u: goto L_002E9CAC;
    case 239u: goto L_002E9CE0;
    case 240u: goto L_002E9D58;
    case 241u: goto L_002E9D68;
    case 242u: goto L_002E9D8C;
    case 243u: goto L_002E9DA0;
    case 244u: goto L_002E9DB0;
    case 245u: goto L_002E9DDC;
    case 246u: goto L_002E9DEC;
    case 247u: goto L_002E9E0C;
    case 248u: goto L_002E9E24;
    case 249u: goto L_002E9E48;
    case 250u: goto L_002E9E68;
    case 251u: goto L_002E9E8C;
    case 252u: goto L_002E9EA4;
    case 253u: goto L_002E9EB4;
    case 254u: goto L_002E9EC4;
    case 255u: goto L_002E9EF0;
    case 256u: goto L_002E9F00;
    case 257u: goto L_002E9F20;
    case 258u: goto L_002E9F4C;
    case 259u: goto L_002E9F5C;
    case 260u: goto L_002E9F7C;
    case 261u: goto L_002E9FA8;
    case 262u: goto L_002E9FB8;
    case 263u: goto L_002E9FD8;
    case 264u: goto L_002EA058;
    case 265u: goto L_002EA07C;
    case 266u: goto L_002EA090;
    case 267u: goto L_002EA0A0;
    case 268u: goto L_002EA0CC;
    case 269u: goto L_002EA0DC;
    case 270u: goto L_002EA0FC;
    case 271u: goto L_002EA120;
    case 272u: goto L_002EA130;
    case 273u: goto L_002EA164;
    case 274u: goto L_002EA174;
    case 275u: goto L_002EA194;
    case 276u: goto L_002EA1C4;
    case 277u: goto L_002EA1D4;
    case 278u: goto L_002EA1F8;
    case 279u: goto L_002EA208;
    case 280u: goto L_002EA23C;
    case 281u: goto L_002EA24C;
    case 282u: goto L_002EA26C;
    case 283u: goto L_002EA29C;
    case 284u: goto L_002EA2AC;
    case 285u: goto L_002EA2D0;
    case 286u: goto L_002EA2E0;
    case 287u: goto L_002EA314;
    case 288u: goto L_002EA324;
    case 289u: goto L_002EA344;
    case 290u: goto L_002EA374;
    case 291u: goto L_002EA384;
    case 292u: goto L_002EA3A8;
    case 293u: goto L_002EA3B8;
    case 294u: goto L_002EA3EC;
    case 295u: goto L_002EA3FC;
    case 296u: goto L_002EA41C;
    case 297u: goto L_002EA44C;
    case 298u: goto L_002EA45C;
    case 299u: goto L_002EA4B4;
    case 300u: goto L_002EA4E0;
    case 301u: goto L_002EA4F0;
    case 302u: goto L_002EA510;
    case 303u: goto L_002EA550;
    case 304u: goto L_002EA580;
    case 305u: goto L_002EA5A0;
    case 306u: goto L_002EA5B4;
    case 307u: goto L_002EA5C4;
    case 308u: goto L_002EA5E8;
    case 309u: goto L_002EA5F8;
    case 310u: goto L_002EA618;
    case 311u: goto L_002EA63C;
    case 312u: goto L_002EA660;
    case 313u: goto L_002EA674;
    case 314u: goto L_002EA684;
    case 315u: goto L_002EA6A8;
    case 316u: goto L_002EA6B8;
    case 317u: goto L_002EA6D8;
    case 318u: goto L_002EA6F8;
    case 319u: goto L_002EA708;
    case 320u: goto L_002EA734;
    case 321u: goto L_002EA744;
    case 322u: goto L_002EA764;
    case 323u: goto L_002EA788;
    case 324u: goto L_002EA798;
    case 325u: goto L_002EA7B8;
    case 326u: goto L_002EA7F0;
    case 327u: goto L_002EA864;
    case 328u: goto L_002EA8C4;
    case 329u: goto L_002EA924;
    case 330u: goto L_002EA984;
    case 331u: goto L_002EA9D0;
    case 332u: goto L_002EAA30;
    case 333u: goto L_002EAA90;
    case 334u: goto L_002EAAF0;
    case 335u: goto L_002EAB3C;
    case 336u: goto L_002EAB9C;
    case 337u: goto L_002EABFC;
    case 338u: goto L_002EAC5C;
    case 339u: goto L_002EACD0;
    case 340u: goto L_002EAD50;
    case 341u: goto L_002EAD60;
    case 342u: goto L_002EAD80;
    case 343u: goto L_002EADA8;
    case 344u: goto L_002EADD0;
    case 345u: goto L_002EADE0;
    case 346u: goto L_002EAE00;
    case 347u: goto L_002EAE14;
    case 348u: goto L_002EAE24;
    case 349u: goto L_002EAE54;
    case 350u: goto L_002EAE6C;
    case 351u: goto L_002EAE94;
    case 352u: goto L_002EAEA4;
    case 353u: goto L_002EAEC4;
    case 354u: goto L_002EAED0;
    case 355u: goto L_002EAEF0;
    case 356u: goto L_002EAF04;
    case 357u: goto L_002EAF14;
    case 358u: goto L_002EAF38;
    case 359u: goto L_002EAF48;
    case 360u: goto L_002EAF68;
    case 361u: goto L_002EAF80;
    case 362u: goto L_002EAFA0;
    case 363u: goto L_002EAFC0;
    case 364u: goto L_002EAFE0;
    case 365u: goto L_002EAFFC;
    case 366u: goto L_002EB028;
    case 367u: goto L_002EB050;
    case 368u: goto L_002EB060;
    case 369u: goto L_002EB080;
    case 370u: goto L_002EB0A4;
    case 371u: goto L_002EB0B4;
    case 372u: goto L_002EB0D4;
    case 373u: goto L_002EB0F8;
    case 374u: goto L_002EB108;
    case 375u: goto L_002EB128;
    case 376u: goto L_002EB14C;
    case 377u: goto L_002EB15C;
    case 378u: goto L_002EB17C;
    case 379u: goto L_002EB19C;
    case 380u: goto L_002EB1B0;
    case 381u: goto L_002EB1C0;
    case 382u: goto L_002EB1E4;
    case 383u: goto L_002EB1F4;
    case 384u: goto L_002EB214;
    case 385u: goto L_002EB234;
    case 386u: goto L_002EB244;
    case 387u: goto L_002EB270;
    case 388u: goto L_002EB280;
    case 389u: goto L_002EB2A0;
    case 390u: goto L_002EB2C4;
    case 391u: goto L_002EB2D4;
    case 392u: goto L_002EB2F4;
    case 393u: goto L_002EB318;
    case 394u: goto L_002EB328;
    case 395u: goto L_002EB348;
    case 396u: goto L_002EB380;
    case 397u: goto L_002EB3F0;
    case 398u: goto L_002EB40C;
    case 399u: goto L_002EB438;
    case 400u: goto L_002EB494;
    case 401u: goto L_002EB4A8;
    case 402u: goto L_002EB4E0;
    case 403u: goto L_002EB4F0;
    case 404u: goto L_002EB510;
    case 405u: goto L_002EB558;
    case 406u: goto L_002EB59C;
    case 407u: goto L_002EB5F0;
    case 408u: goto L_002EB624;
    case 409u: goto L_002EB640;
    case 410u: goto L_002EB670;
    case 411u: goto L_002EB6D0;
    case 412u: goto L_002EB748;
    case 413u: goto L_002EB764;
    case 414u: goto L_002EB798;
    case 415u: goto L_002EB7E0;
    case 416u: goto L_002EB7FC;
    case 417u: goto L_002EB834;
    case 418u: goto L_002EB870;
    case 419u: goto L_002EB88C;
    case 420u: goto L_002EB8B8;
    case 421u: goto L_002EB92C;
    case 422u: goto L_002EB988;
    case 423u: goto L_002EB9E8;
    case 424u: goto L_002EBA04;
    case 425u: goto L_002EBA34;
    case 426u: goto L_002EBA7C;
    case 427u: goto L_002EBAA0;
    case 428u: goto L_002EBAB4;
    case 429u: goto L_002EBAE4;
    case 430u: goto L_002EBAF4;
    case 431u: goto L_002EBB14;
    case 432u: goto L_002EBB40;
    case 433u: goto L_002EBB44;
    case 434u: goto L_002EBB50;
    case 435u: goto L_002EBB70;
    case 436u: goto L_002EBB94;
    case 437u: goto L_002EBBB0;
    case 438u: goto L_002EBBDC;
    case 439u: goto L_002EBC14;
    case 440u: goto L_002EBC1C;
    case 441u: goto L_002EBC38;
    case 442u: goto L_002EBC68;
    case 443u: goto L_002EBCDC;
    case 444u: goto L_002EBD18;
    case 445u: goto L_002EBD70;
    case 446u: goto L_002EBDBC;
    case 447u: goto L_002EBDD8;
    case 448u: goto L_002EBE00;
    case 449u: goto L_002EBE60;
    case 450u: goto L_002EBED0;
    case 451u: goto L_002EBED8;
    case 452u: goto L_002EBEE0;
    case 453u: goto L_002EBEF0;
    case 454u: goto L_002EBEF8;
    case 455u: goto L_002EBF00;
    case 456u: goto L_002EBF10;
    case 457u: goto L_002EBF44;
    case 458u: goto L_002EBF5C;
    case 459u: goto L_002EBF8C;
    case 460u: goto L_002EBF9C;
    case 461u: goto L_002EBFBC;
    case 462u: goto L_002EBFC8;
    case 463u: goto L_002EBFEC;
    default: bad_entry(c, 0x002E8000u); return;
    }
L_002E8000:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27676u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 236u), c.r[2].w[0]);  if (t) { goto L_002E801C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E8024; } }
L_002E801C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8024u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E8024u) [[unlikely]] return; }
L_002E8024:
    st32((c.r[29].w[0] + 232u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 236u);
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8038u); set32(c.r[6], c.r[29].w[0] + 232u);  if (depth < kMaxDepth) unit_006C(c, 510u, depth + 1u); else { c.pc = 0x002B3E20u; return; } if (c.pc != 0x002E8038u) [[unlikely]] return; }
L_002E8038:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 232u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E8098; } }
    set32(c.r[20], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8068u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E8068u) [[unlikely]] return; }
L_002E8068:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8078u); st32((c.r[20].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E8078u) [[unlikely]] return; }
L_002E8078:
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E8098; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8098u); set32(c.r[5], c.r[29].w[0] + 232u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E8098u) [[unlikely]] return; }
L_002E8098:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E80F4; } }
    set32(c.r[20], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E80C4u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E80C4u) [[unlikely]] return; }
L_002E80C4:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E80D4u); st32((c.r[20].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E80D4u) [[unlikely]] return; }
L_002E80D4:
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E80F4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E80F4u); set32(c.r[5], c.r[29].w[0] + 236u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E80F4u) [[unlikely]] return; }
L_002E80F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27649u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E8110; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E8118; } }
L_002E8110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8118u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E8118u) [[unlikely]] return; }
L_002E8118:
    st32((c.r[29].w[0] + 228u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[20], ld32((c.r[18].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E812Cu); set32(c.r[5], c.r[29].w[0] + 228u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002E812Cu) [[unlikely]] return; }
L_002E812C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E813Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002E813Cu) [[unlikely]] return; }
L_002E813C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 228u)));
    c.budget -= 2;
L_002E8144:
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E8198; } }
    set32(c.r[20], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8168u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E8168u) [[unlikely]] return; }
L_002E8168:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8178u); st32((c.r[20].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E8178u) [[unlikely]] return; }
L_002E8178:
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E8198; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8198u); set32(c.r[5], c.r[29].w[0] + 228u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E8198u) [[unlikely]] return; }
L_002E8198:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != 0ull;  if (t) { goto L_002E82B8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28442u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E81BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E81C4; } }
L_002E81BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E81C4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E81C4u) [[unlikely]] return; }
L_002E81C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27676u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 224u), c.r[2].w[0]);  if (t) { goto L_002E81E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E81E8; } }
L_002E81E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E81E8u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E81E8u) [[unlikely]] return; }
L_002E81E8:
    st32((c.r[29].w[0] + 220u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 224u);
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E81FCu); set32(c.r[6], c.r[29].w[0] + 220u);  if (depth < kMaxDepth) unit_006C(c, 510u, depth + 1u); else { c.pc = 0x002B3E20u; return; } if (c.pc != 0x002E81FCu) [[unlikely]] return; }
L_002E81FC:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 220u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E825C; } }
    set32(c.r[20], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E822Cu); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E822Cu) [[unlikely]] return; }
L_002E822C:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E823Cu); st32((c.r[20].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E823Cu) [[unlikely]] return; }
L_002E823C:
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E825C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E825Cu); set32(c.r[5], c.r[29].w[0] + 220u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E825Cu) [[unlikely]] return; }
L_002E825C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E82B8; } }
    set32(c.r[20], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8288u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E8288u) [[unlikely]] return; }
L_002E8288:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8298u); st32((c.r[20].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E8298u) [[unlikely]] return; }
L_002E8298:
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E82B8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E82B8u); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E82B8u) [[unlikely]] return; }
L_002E82B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27637u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E82D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E82DC; } }
L_002E82D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E82DCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E82DCu) [[unlikely]] return; }
L_002E82DC:
    st32((c.r[29].w[0] + 216u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[20], ld32((c.r[18].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E82F0u); set32(c.r[5], c.r[29].w[0] + 216u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002E82F0u) [[unlikely]] return; }
L_002E82F0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8300u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002E8300u) [[unlikely]] return; }
L_002E8300:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 216u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E835C; } }
    set32(c.r[20], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E832Cu); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E832Cu) [[unlikely]] return; }
L_002E832C:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E833Cu); st32((c.r[20].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E833Cu) [[unlikely]] return; }
L_002E833C:
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E835C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E835Cu); set32(c.r[5], c.r[29].w[0] + 216u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E835Cu) [[unlikely]] return; }
L_002E835C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002E847C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28442u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E8380; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E8388; } }
L_002E8380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8388u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E8388u) [[unlikely]] return; }
L_002E8388:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27626u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 212u), c.r[2].w[0]);  if (t) { goto L_002E83A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E83AC; } }
L_002E83A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E83ACu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E83ACu) [[unlikely]] return; }
L_002E83AC:
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 212u);
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E83C0u); set32(c.r[6], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_006C(c, 510u, depth + 1u); else { c.pc = 0x002B3E20u; return; } if (c.pc != 0x002E83C0u) [[unlikely]] return; }
L_002E83C0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 208u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E8420; } }
    set32(c.r[20], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E83F0u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E83F0u) [[unlikely]] return; }
L_002E83F0:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8400u); st32((c.r[20].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E8400u) [[unlikely]] return; }
L_002E8400:
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E8420; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8420u); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E8420u) [[unlikely]] return; }
L_002E8420:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E847C; } }
    set32(c.r[20], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E844Cu); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E844Cu) [[unlikely]] return; }
L_002E844C:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E845Cu); st32((c.r[20].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E845Cu) [[unlikely]] return; }
L_002E845C:
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E847C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E847Cu); set32(c.r[5], c.r[29].w[0] + 212u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E847Cu) [[unlikely]] return; }
L_002E847C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27610u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E8498; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E84A0; } }
L_002E8498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E84A0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E84A0u) [[unlikely]] return; }
L_002E84A0:
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[20], ld32((c.r[18].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E84B4u); set32(c.r[5], c.r[29].w[0] + 204u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002E84B4u) [[unlikely]] return; }
L_002E84B4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E84C4u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002E84C4u) [[unlikely]] return; }
L_002E84C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 204u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 164u)));  goto L_002E8524; }
    set32(c.r[17], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E84F0u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E84F0u) [[unlikely]] return; }
L_002E84F0:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8500u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E8500u) [[unlikely]] return; }
L_002E8500:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E8520; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8520u); set32(c.r[5], c.r[29].w[0] + 204u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E8520u) [[unlikely]] return; }
L_002E8520:
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 1;
L_002E8524:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 168u)));  goto L_002E85D4; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27598u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E8548; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E8550; } }
L_002E8548:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8550u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E8550u) [[unlikely]] return; }
L_002E8550:
    st32((c.r[29].w[0] + 200u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[18].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8564u); set32(c.r[5], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002E8564u) [[unlikely]] return; }
L_002E8564:
    set32(c.r[5], ld32((c.r[29].w[0] + 164u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8574u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002E8574u) [[unlikely]] return; }
L_002E8574:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 200u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E85D0; } }
    set32(c.r[17], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E85A0u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E85A0u) [[unlikely]] return; }
L_002E85A0:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E85B0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E85B0u) [[unlikely]] return; }
L_002E85B0:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E85D0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E85D0u); set32(c.r[5], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E85D0u) [[unlikely]] return; }
L_002E85D0:
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_002E85D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 256u)));  goto L_002E8684; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27580u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E85F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E8600; } }
L_002E85F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8600u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E8600u) [[unlikely]] return; }
L_002E8600:
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[18].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8614u); set32(c.r[5], c.r[29].w[0] + 196u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002E8614u) [[unlikely]] return; }
L_002E8614:
    set32(c.r[5], ld32((c.r[29].w[0] + 168u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8624u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002E8624u) [[unlikely]] return; }
L_002E8624:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 196u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E8680; } }
    set32(c.r[17], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8650u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E8650u) [[unlikely]] return; }
L_002E8650:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8660u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E8660u) [[unlikely]] return; }
L_002E8660:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E8680; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8680u); set32(c.r[5], c.r[29].w[0] + 196u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E8680u) [[unlikely]] return; }
L_002E8680:
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    c.budget -= 1;
L_002E8684:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E8730; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27561u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E86A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E86B0; } }
L_002E86A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E86B0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E86B0u) [[unlikely]] return; }
L_002E86B0:
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[18].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E86C4u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002E86C4u) [[unlikely]] return; }
L_002E86C4:
    set32(c.r[5], ld32((c.r[29].w[0] + 256u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E86D4u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002E86D4u) [[unlikely]] return; }
L_002E86D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E8730; } }
    set32(c.r[17], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8700u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E8700u) [[unlikely]] return; }
L_002E8700:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8710u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E8710u) [[unlikely]] return; }
L_002E8710:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E8730; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8730u); set32(c.r[5], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E8730u) [[unlikely]] return; }
L_002E8730:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27543u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E874C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E8754; } }
L_002E874C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8754u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E8754u) [[unlikely]] return; }
L_002E8754:
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 661u));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_002E8770; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] - 27538u);  if (t) { goto L_002E8774; } }
L_002E8770:
    set32(c.r[4], c.r[4].w[0] - 27531u);
    c.budget -= 1;
L_002E8774:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E8788; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E8790; } }
L_002E8788:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8790u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E8790u) [[unlikely]] return; }
L_002E8790:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27523u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 184u), c.r[2].w[0]);  if (t) { goto L_002E87AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E87B4; } }
L_002E87AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E87B4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E87B4u) [[unlikely]] return; }
L_002E87B4:
    st32((c.r[29].w[0] + 180u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 188u);
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[17], ld32((c.r[18].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E87CCu); set32(c.r[6], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_006C(c, 510u, depth + 1u); else { c.pc = 0x002B3E20u; return; } if (c.pc != 0x002E87CCu) [[unlikely]] return; }
L_002E87CC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 180u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E87E0u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 188u, depth + 1u); else { c.pc = 0x002B1320u; return; } if (c.pc != 0x002E87E0u) [[unlikely]] return; }
L_002E87E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E883C; } }
    set32(c.r[17], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E880Cu); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E880Cu) [[unlikely]] return; }
L_002E880C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E881Cu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E881Cu) [[unlikely]] return; }
L_002E881C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E883C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E883Cu); set32(c.r[5], c.r[29].w[0] + 180u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E883Cu) [[unlikely]] return; }
L_002E883C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E8898; } }
    set32(c.r[17], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8868u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E8868u) [[unlikely]] return; }
L_002E8868:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8878u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E8878u) [[unlikely]] return; }
L_002E8878:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E8898; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8898u); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E8898u) [[unlikely]] return; }
L_002E8898:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E88F4; } }
    set32(c.r[17], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E88C4u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E88C4u) [[unlikely]] return; }
L_002E88C4:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E88D4u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E88D4u) [[unlikely]] return; }
L_002E88D4:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E88F4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E88F4u); set32(c.r[5], c.r[29].w[0] + 188u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E88F4u) [[unlikely]] return; }
L_002E88F4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27514u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E8910; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E8918; } }
L_002E8910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8918u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E8918u) [[unlikely]] return; }
L_002E8918:
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8928u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_006C(c, 486u, depth + 1u); else { c.pc = 0x002B3B40u; return; } if (c.pc != 0x002E8928u) [[unlikely]] return; }
L_002E8928:
    set32(c.r[4], ld32((c.r[29].w[0] + 264u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002E898C; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[17], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E895Cu); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E895Cu) [[unlikely]] return; }
L_002E895C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E896Cu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E896Cu) [[unlikely]] return; }
L_002E896C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E898C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E898Cu); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E898Cu) [[unlikely]] return; }
L_002E898C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27506u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E89A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E89B0; } }
L_002E89A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E89B0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E89B0u) [[unlikely]] return; }
L_002E89B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E89C0u); set32(c.r[5], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_006C(c, 486u, depth + 1u); else { c.pc = 0x002B3B40u; return; } if (c.pc != 0x002E89C0u) [[unlikely]] return; }
L_002E89C0:
    set32(c.r[4], ld32((c.r[29].w[0] + 272u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 172u)));
    c.budget -= 7;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  goto L_002E8A28; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E89F4u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E89F4u) [[unlikely]] return; }
L_002E89F4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8A04u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E8A04u) [[unlikely]] return; }
L_002E8A04:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E8A24; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8A24u); set32(c.r[5], c.r[29].w[0] + 172u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E8A24u) [[unlikely]] return; }
L_002E8A24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_002E8A28:
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
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_002E8A60:
    set32(c.r[29], c.r[29].w[0] - 320u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[4].w[0] - 27497u);
    set32(c.r[30], ld32((c.r[29].w[0] + 360u)));
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 172u), c.r[10].w[0]);
    c.budget -= 22;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 168u), c.r[11].w[0]);  if (t) { goto L_002E8AC4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E8ACC; } }
L_002E8AC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8ACCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E8ACCu) [[unlikely]] return; }
L_002E8ACC:
    st32((c.r[29].w[0] + 316u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8AE4u); set32(c.r[5], c.r[29].w[0] + 316u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E8AE4u) [[unlikely]] return; }
L_002E8AE4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 316u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[19].w[0])));  goto L_002E8B48; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8B14u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E8B14u) [[unlikely]] return; }
L_002E8B14:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8B24u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E8B24u) [[unlikely]] return; }
L_002E8B24:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E8B44; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8B44u); set32(c.r[5], c.r[29].w[0] + 316u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E8B44u) [[unlikely]] return; }
L_002E8B44:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_002E8B48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8B50u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 283u, depth + 1u); else { c.pc = 0x002B20B0u; return; } if (c.pc != 0x002E8B50u) [[unlikely]] return; }
L_002E8B50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27491u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E8B6C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E8B74; } }
L_002E8B6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8B74u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E8B74u) [[unlikely]] return; }
L_002E8B74:
    st32((c.r[29].w[0] + 312u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8B88u); set32(c.r[5], c.r[29].w[0] + 312u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002E8B88u) [[unlikely]] return; }
L_002E8B88:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8B98u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002E8B98u) [[unlikely]] return; }
L_002E8B98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 312u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E8BF4; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8BC4u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E8BC4u) [[unlikely]] return; }
L_002E8BC4:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8BD4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E8BD4u) [[unlikely]] return; }
L_002E8BD4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E8BF4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8BF4u); set32(c.r[5], c.r[29].w[0] + 312u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E8BF4u) [[unlikely]] return; }
L_002E8BF4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27482u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E8C10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E8C18; } }
L_002E8C10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8C18u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E8C18u) [[unlikely]] return; }
L_002E8C18:
    st32((c.r[29].w[0] + 308u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8C2Cu); set32(c.r[5], c.r[29].w[0] + 308u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002E8C2Cu) [[unlikely]] return; }
L_002E8C2C:
    set32(c.r[5], ld32((c.r[29].w[0] + 172u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8C3Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002E8C3Cu) [[unlikely]] return; }
L_002E8C3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 308u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 328u)));  goto L_002E8C9C; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8C68u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E8C68u) [[unlikely]] return; }
L_002E8C68:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8C78u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E8C78u) [[unlikely]] return; }
L_002E8C78:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E8C98; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8C98u); set32(c.r[5], c.r[29].w[0] + 308u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E8C98u) [[unlikely]] return; }
L_002E8C98:
    set32(c.r[2], ld32((c.r[29].w[0] + 328u)));
    c.budget -= 1;
L_002E8C9C:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 336u)));  goto L_002E8D54; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27473u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E8CC4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E8CCC; } }
L_002E8CC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8CCCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E8CCCu) [[unlikely]] return; }
L_002E8CCC:
    st32((c.r[29].w[0] + 304u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8CE0u); set32(c.r[5], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002E8CE0u) [[unlikely]] return; }
L_002E8CE0:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 328u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8CF4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002E8CF4u) [[unlikely]] return; }
L_002E8CF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E8D50; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8D20u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E8D20u) [[unlikely]] return; }
L_002E8D20:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8D30u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E8D30u) [[unlikely]] return; }
L_002E8D30:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E8D50; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8D50u); set32(c.r[5], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E8D50u) [[unlikely]] return; }
L_002E8D50:
    set32(c.r[2], ld32((c.r[29].w[0] + 336u)));
    c.budget -= 1;
L_002E8D54:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 344u)));  goto L_002E8E0C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27460u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E8D7C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E8D84; } }
L_002E8D7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8D84u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E8D84u) [[unlikely]] return; }
L_002E8D84:
    st32((c.r[29].w[0] + 300u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8D98u); set32(c.r[5], c.r[29].w[0] + 300u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002E8D98u) [[unlikely]] return; }
L_002E8D98:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 336u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8DACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002E8DACu) [[unlikely]] return; }
L_002E8DAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 300u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E8E08; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8DD8u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E8DD8u) [[unlikely]] return; }
L_002E8DD8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8DE8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E8DE8u) [[unlikely]] return; }
L_002E8DE8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E8E08; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8E08u); set32(c.r[5], c.r[29].w[0] + 300u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E8E08u) [[unlikely]] return; }
L_002E8E08:
    set32(c.r[2], ld32((c.r[29].w[0] + 344u)));
    c.budget -= 1;
L_002E8E0C:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E8ECC; } }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 352u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E8ECC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27447u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E8E40; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E8E48; } }
L_002E8E40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8E48u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E8E48u) [[unlikely]] return; }
L_002E8E48:
    st32((c.r[29].w[0] + 296u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8E5Cu); set32(c.r[5], c.r[29].w[0] + 296u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002E8E5Cu) [[unlikely]] return; }
L_002E8E5C:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 344u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8E70u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002E8E70u) [[unlikely]] return; }
L_002E8E70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 296u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E8ECC; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8E9Cu); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E8E9Cu) [[unlikely]] return; }
L_002E8E9C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8EACu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E8EACu) [[unlikely]] return; }
L_002E8EAC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E8ECC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8ECCu); set32(c.r[5], c.r[29].w[0] + 296u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E8ECCu) [[unlikely]] return; }
L_002E8ECC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27543u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E8EE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E8EF0; } }
L_002E8EE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8EF0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E8EF0u) [[unlikely]] return; }
L_002E8EF0:
    st32((c.r[29].w[0] + 292u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 352u));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_002E8F0C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] - 27538u);  if (t) { goto L_002E8F10; } }
L_002E8F0C:
    set32(c.r[2], c.r[2].w[0] - 27531u);
    c.budget -= 1;
L_002E8F10:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 352u));  goto L_002E8F24; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E8F44; } }
L_002E8F24:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_002E8F38; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] - 27538u);  if (t) { goto L_002E8F3C; } }
L_002E8F38:
    set32(c.r[4], c.r[4].w[0] - 27531u);
    c.budget -= 1;
L_002E8F3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8F44u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E8F44u) [[unlikely]] return; }
L_002E8F44:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27433u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 288u), c.r[2].w[0]);  if (t) { goto L_002E8F60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E8F68; } }
L_002E8F60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8F68u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E8F68u) [[unlikely]] return; }
L_002E8F68:
    st32((c.r[29].w[0] + 284u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 292u);
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8F80u); set32(c.r[6], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_006C(c, 510u, depth + 1u); else { c.pc = 0x002B3E20u; return; } if (c.pc != 0x002E8F80u) [[unlikely]] return; }
L_002E8F80:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8F90u); set32(c.r[5], c.r[29].w[0] + 284u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002E8F90u) [[unlikely]] return; }
L_002E8F90:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8FA0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002E8FA0u) [[unlikely]] return; }
L_002E8FA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 284u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E8FFC; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8FCCu); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E8FCCu) [[unlikely]] return; }
L_002E8FCC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8FDCu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E8FDCu) [[unlikely]] return; }
L_002E8FDC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E8FFC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E8FFCu); set32(c.r[5], c.r[29].w[0] + 284u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E8FFCu) [[unlikely]] return; }
L_002E8FFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 288u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E9058; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9028u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E9028u) [[unlikely]] return; }
L_002E9028:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9038u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E9038u) [[unlikely]] return; }
L_002E9038:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E9058; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9058u); set32(c.r[5], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E9058u) [[unlikely]] return; }
L_002E9058:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 292u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E90B4; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9084u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E9084u) [[unlikely]] return; }
L_002E9084:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9094u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E9094u) [[unlikely]] return; }
L_002E9094:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E90B4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E90B4u); set32(c.r[5], c.r[29].w[0] + 292u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E90B4u) [[unlikely]] return; }
L_002E90B4:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull;  if (t) { goto L_002E9160; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27418u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E90D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E90E0; } }
L_002E90D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E90E0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E90E0u) [[unlikely]] return; }
L_002E90E0:
    st32((c.r[29].w[0] + 280u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E90F4u); set32(c.r[5], c.r[29].w[0] + 280u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002E90F4u) [[unlikely]] return; }
L_002E90F4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9104u); c.r[5].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002E9104u) [[unlikely]] return; }
L_002E9104:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 280u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E9160; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9130u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E9130u) [[unlikely]] return; }
L_002E9130:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9140u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E9140u) [[unlikely]] return; }
L_002E9140:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E9160; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9160u); set32(c.r[5], c.r[29].w[0] + 280u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E9160u) [[unlikely]] return; }
L_002E9160:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], 0u + 32u);
    set32(c.r[6], c.r[6].w[0] - 27411u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9178u); c.r[7].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x002E9178u) [[unlikely]] return; }
L_002E9178:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27406u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E9194; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E919C; } }
L_002E9194:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E919Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E919Cu) [[unlikely]] return; }
L_002E919C:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 276u), c.r[2].w[0]);  if (t) { goto L_002E91B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E91BC; } }
L_002E91B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E91BCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E91BCu) [[unlikely]] return; }
L_002E91BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27402u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 272u), c.r[2].w[0]);  if (t) { goto L_002E91D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E91E0; } }
L_002E91D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E91E0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E91E0u) [[unlikely]] return; }
L_002E91E0:
    st32((c.r[29].w[0] + 268u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 276u);
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E91F8u); set32(c.r[6], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_006C(c, 510u, depth + 1u); else { c.pc = 0x002B3E20u; return; } if (c.pc != 0x002E91F8u) [[unlikely]] return; }
L_002E91F8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9208u); set32(c.r[5], c.r[29].w[0] + 268u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002E9208u) [[unlikely]] return; }
L_002E9208:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9218u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002E9218u) [[unlikely]] return; }
L_002E9218:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 268u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E9274; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9244u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E9244u) [[unlikely]] return; }
L_002E9244:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9254u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E9254u) [[unlikely]] return; }
L_002E9254:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E9274; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9274u); set32(c.r[5], c.r[29].w[0] + 268u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E9274u) [[unlikely]] return; }
L_002E9274:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 272u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E92D0; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E92A0u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E92A0u) [[unlikely]] return; }
L_002E92A0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E92B0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E92B0u) [[unlikely]] return; }
L_002E92B0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E92D0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E92D0u); set32(c.r[5], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E92D0u) [[unlikely]] return; }
L_002E92D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 276u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_002E9330; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E92FCu); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E92FCu) [[unlikely]] return; }
L_002E92FC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E930Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E930Cu) [[unlikely]] return; }
L_002E930C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E932C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E932Cu); set32(c.r[5], c.r[29].w[0] + 276u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E932Cu) [[unlikely]] return; }
L_002E932C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002E9330:
    set32(c.r[17], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002E939C; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == c.r[17].d[0];  if (t) { goto L_002E9378; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_002E9354; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[20].w[0])));  if (t) { goto L_002E93C0; } }
L_002E9354:
    c.budget -= 2;
    if (c.r[30].d[0] == 0ull) { c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_002E936C; }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[17], 0u + 6u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] - 27392u);  if (t) { goto L_002E93BC; } }
L_002E936C:
    set32(c.r[17], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] - 27382u);  if (t) { goto L_002E93BC; } }
L_002E9378:
    c.budget -= 2;
    if (c.r[30].d[0] == 0ull) { c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_002E9390; }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[17], 0u + 5u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] - 27378u);  if (t) { goto L_002E93BC; } }
L_002E9390:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] - 27366u);  if (t) { goto L_002E93BC; } }
L_002E939C:
    c.budget -= 2;
    if (c.r[30].d[0] == 0ull) { c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_002E93B4; }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[17], 0u + 7u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] - 27360u);  if (t) { goto L_002E93BC; } }
L_002E93B4:
    set32(c.r[17], 0u + 4u);
    set32(c.r[16], c.r[16].w[0] - 27349u);
    c.budget -= 2;
L_002E93BC:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_002E93C0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[6], 0u + 5u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 136u)));
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E93E4u); set32(c.r[10], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E93E4u) [[unlikely]] return; }
L_002E93E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27344u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; c.r[23].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002E9400; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E9408; } }
L_002E9400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9408u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E9408u) [[unlikely]] return; }
L_002E9408:
    st32((c.r[29].w[0] + 264u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[30], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E941Cu); set32(c.r[5], c.r[29].w[0] + 264u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002E941Cu) [[unlikely]] return; }
L_002E941C:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E942Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002E942Cu) [[unlikely]] return; }
L_002E942C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 264u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[25], ld32((c.r[20].w[0])));  goto L_002E948C; }
    set32(c.r[23], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9458u); set32(c.r[30], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E9458u) [[unlikely]] return; }
L_002E9458:
    set32(c.r[2], ld32((c.r[23].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9468u); st32((c.r[23].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E9468u) [[unlikely]] return; }
L_002E9468:
    set32(c.r[3], ld32((c.r[23].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E9488; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9488u); set32(c.r[5], c.r[29].w[0] + 264u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E9488u) [[unlikely]] return; }
L_002E9488:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_002E948C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[6], 0u + 6u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 136u)));
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E94B0u); set32(c.r[10], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E94B0u) [[unlikely]] return; }
L_002E94B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27331u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; c.r[30].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002E94CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E94D4; } }
L_002E94CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E94D4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E94D4u) [[unlikely]] return; }
L_002E94D4:
    st32((c.r[29].w[0] + 260u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[23], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E94E8u); set32(c.r[5], c.r[29].w[0] + 260u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002E94E8u) [[unlikely]] return; }
L_002E94E8:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E94F8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002E94F8u) [[unlikely]] return; }
L_002E94F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 260u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[25], ld32((c.r[20].w[0])));  goto L_002E9558; }
    set32(c.r[23], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9524u); set32(c.r[30], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E9524u) [[unlikely]] return; }
L_002E9524:
    set32(c.r[2], ld32((c.r[23].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9534u); st32((c.r[23].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E9534u) [[unlikely]] return; }
L_002E9534:
    set32(c.r[3], ld32((c.r[23].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E9554; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9554u); set32(c.r[5], c.r[29].w[0] + 260u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E9554u) [[unlikely]] return; }
L_002E9554:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_002E9558:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[6], 0u + 7u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 136u)));
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E957Cu); set32(c.r[10], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E957Cu) [[unlikely]] return; }
L_002E957C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27318u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; c.r[30].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002E9598; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E95A0; } }
L_002E9598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E95A0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E95A0u) [[unlikely]] return; }
L_002E95A0:
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[23], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E95B4u); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002E95B4u) [[unlikely]] return; }
L_002E95B4:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E95C4u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002E95C4u) [[unlikely]] return; }
L_002E95C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[25], ld32((c.r[20].w[0])));  goto L_002E9624; }
    set32(c.r[23], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E95F0u); set32(c.r[30], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E95F0u) [[unlikely]] return; }
L_002E95F0:
    set32(c.r[2], ld32((c.r[23].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9600u); st32((c.r[23].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E9600u) [[unlikely]] return; }
L_002E9600:
    set32(c.r[3], ld32((c.r[23].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E9620; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9620u); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E9620u) [[unlikely]] return; }
L_002E9620:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_002E9624:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[6], 0u + 8u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 136u)));
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9648u); set32(c.r[10], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E9648u) [[unlikely]] return; }
L_002E9648:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27304u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; c.r[30].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002E9664; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E966C; } }
L_002E9664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E966Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E966Cu) [[unlikely]] return; }
L_002E966C:
    st32((c.r[29].w[0] + 252u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[23], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9680u); set32(c.r[5], c.r[29].w[0] + 252u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002E9680u) [[unlikely]] return; }
L_002E9680:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9690u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002E9690u) [[unlikely]] return; }
L_002E9690:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E96EC; } }
    set32(c.r[23], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E96BCu); set32(c.r[30], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E96BCu) [[unlikely]] return; }
L_002E96BC:
    set32(c.r[2], ld32((c.r[23].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E96CCu); st32((c.r[23].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E96CCu) [[unlikely]] return; }
L_002E96CC:
    set32(c.r[3], ld32((c.r[23].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E96EC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E96ECu); set32(c.r[5], c.r[29].w[0] + 252u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E96ECu) [[unlikely]] return; }
L_002E96EC:
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { set32(c.r[10], 0u + 1u);  goto L_002E97C4; }
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[6], 0u + 15u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 136u)));
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E971Cu); set32(c.r[10], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E971Cu) [[unlikely]] return; }
L_002E971C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27295u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; c.r[30].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002E9738; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E9740; } }
L_002E9738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9740u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E9740u) [[unlikely]] return; }
L_002E9740:
    st32((c.r[29].w[0] + 248u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[23], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9754u); set32(c.r[5], c.r[29].w[0] + 248u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002E9754u) [[unlikely]] return; }
L_002E9754:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9764u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002E9764u) [[unlikely]] return; }
L_002E9764:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 248u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E97C0; } }
    set32(c.r[23], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9790u); set32(c.r[30], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E9790u) [[unlikely]] return; }
L_002E9790:
    set32(c.r[2], ld32((c.r[23].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E97A0u); st32((c.r[23].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E97A0u) [[unlikely]] return; }
L_002E97A0:
    set32(c.r[3], ld32((c.r[23].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E97C0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E97C0u); set32(c.r[5], c.r[29].w[0] + 248u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E97C0u) [[unlikely]] return; }
L_002E97C0:
    set32(c.r[10], 0u + 1u);
    c.budget -= 1;
L_002E97C4:
    c.budget -= 2;
    if (c.r[21].d[0] == c.r[10].d[0]) { set32(c.r[2], 0u + 2u);  goto L_002E9898; }
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[6], 0u + 10u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 136u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E97F0u); c.r[9].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E97F0u) [[unlikely]] return; }
L_002E97F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27278u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; c.r[30].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002E980C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E9814; } }
L_002E980C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9814u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E9814u) [[unlikely]] return; }
L_002E9814:
    st32((c.r[29].w[0] + 244u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[23], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9828u); set32(c.r[5], c.r[29].w[0] + 244u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002E9828u) [[unlikely]] return; }
L_002E9828:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9838u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002E9838u) [[unlikely]] return; }
L_002E9838:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 244u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E9894; } }
    set32(c.r[23], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9864u); set32(c.r[30], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E9864u) [[unlikely]] return; }
L_002E9864:
    set32(c.r[2], ld32((c.r[23].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9874u); st32((c.r[23].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E9874u) [[unlikely]] return; }
L_002E9874:
    set32(c.r[3], ld32((c.r[23].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E9894; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9894u); set32(c.r[5], c.r[29].w[0] + 244u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E9894u) [[unlikely]] return; }
L_002E9894:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002E9898:
    c.budget -= 2;
    if (c.r[21].d[0] != c.r[2].d[0]) { c.r[2].d[0] = ld8((c.r[29].w[0] + 352u));  goto L_002E9970; }
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 136u)));
    set32(c.r[6], 0u + 14u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E98C8u); set32(c.r[10], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E98C8u) [[unlikely]] return; }
L_002E98C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27263u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002E98E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E98EC; } }
L_002E98E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E98ECu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E98ECu) [[unlikely]] return; }
L_002E98EC:
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9900u); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002E9900u) [[unlikely]] return; }
L_002E9900:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9910u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002E9910u) [[unlikely]] return; }
L_002E9910:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E996C; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E993Cu); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E993Cu) [[unlikely]] return; }
L_002E993C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E994Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E994Cu) [[unlikely]] return; }
L_002E994C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E996C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E996Cu); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E996Cu) [[unlikely]] return; }
L_002E996C:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 352u));
    c.budget -= 1;
L_002E9970:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E9AD8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 320u)));  goto L_002E9A2C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27242u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E99A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E99A8; } }
L_002E99A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E99A8u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E99A8u) [[unlikely]] return; }
L_002E99A8:
    st32((c.r[29].w[0] + 236u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E99BCu); set32(c.r[5], c.r[29].w[0] + 236u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002E99BCu) [[unlikely]] return; }
L_002E99BC:
    set32(c.r[5], ld32((c.r[29].w[0] + 168u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E99CCu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002E99CCu) [[unlikely]] return; }
L_002E99CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E9A28; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E99F8u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E99F8u) [[unlikely]] return; }
L_002E99F8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9A08u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E9A08u) [[unlikely]] return; }
L_002E9A08:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E9A28; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9A28u); set32(c.r[5], c.r[29].w[0] + 236u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E9A28u) [[unlikely]] return; }
L_002E9A28:
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.budget -= 1;
L_002E9A2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002E9AD8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27226u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E9A50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E9A58; } }
L_002E9A50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9A58u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E9A58u) [[unlikely]] return; }
L_002E9A58:
    st32((c.r[29].w[0] + 232u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9A6Cu); set32(c.r[5], c.r[29].w[0] + 232u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002E9A6Cu) [[unlikely]] return; }
L_002E9A6C:
    set32(c.r[5], ld32((c.r[29].w[0] + 320u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9A7Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002E9A7Cu) [[unlikely]] return; }
L_002E9A7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 232u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E9AD8; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9AA8u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E9AA8u) [[unlikely]] return; }
L_002E9AA8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9AB8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E9AB8u) [[unlikely]] return; }
L_002E9AB8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E9AD8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9AD8u); set32(c.r[5], c.r[29].w[0] + 232u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E9AD8u) [[unlikely]] return; }
L_002E9AD8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27212u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E9AF4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E9AFC; } }
L_002E9AF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9AFCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E9AFCu) [[unlikely]] return; }
L_002E9AFC:
    st32((c.r[29].w[0] + 228u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9B0Cu); set32(c.r[5], c.r[29].w[0] + 228u);  if (depth < kMaxDepth) unit_006C(c, 486u, depth + 1u); else { c.pc = 0x002B3B40u; return; } if (c.pc != 0x002E9B0Cu) [[unlikely]] return; }
L_002E9B0C:
    set32(c.r[3], ld32((c.r[29].w[0] + 328u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E9B70; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9B40u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E9B40u) [[unlikely]] return; }
L_002E9B40:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9B50u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E9B50u) [[unlikely]] return; }
L_002E9B50:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E9B70; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9B70u); set32(c.r[5], c.r[29].w[0] + 228u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E9B70u) [[unlikely]] return; }
L_002E9B70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27196u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E9B8C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E9B94; } }
L_002E9B8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9B94u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E9B94u) [[unlikely]] return; }
L_002E9B94:
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9BA4u); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_006C(c, 486u, depth + 1u); else { c.pc = 0x002B3B40u; return; } if (c.pc != 0x002E9BA4u) [[unlikely]] return; }
L_002E9BA4:
    set32(c.r[3], ld32((c.r[29].w[0] + 336u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 7;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = ld8((c.r[29].w[0] + 352u));  goto L_002E9C0C; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9BD8u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E9BD8u) [[unlikely]] return; }
L_002E9BD8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9BE8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E9BE8u) [[unlikely]] return; }
L_002E9BE8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E9C08; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9C08u); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E9C08u) [[unlikely]] return; }
L_002E9C08:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 352u));
    c.budget -= 1;
L_002E9C0C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  goto L_002E9CB0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27180u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E9C30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E9C38; } }
L_002E9C30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9C38u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E9C38u) [[unlikely]] return; }
L_002E9C38:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 220u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9C48u); set32(c.r[5], c.r[29].w[0] + 220u);  if (depth < kMaxDepth) unit_006C(c, 486u, depth + 1u); else { c.pc = 0x002B3B40u; return; } if (c.pc != 0x002E9C48u) [[unlikely]] return; }
L_002E9C48:
    set32(c.r[3], ld32((c.r[29].w[0] + 344u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 220u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E9CAC; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9C7Cu); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E9C7Cu) [[unlikely]] return; }
L_002E9C7C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9C8Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E9C8Cu) [[unlikely]] return; }
L_002E9C8C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E9CAC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9CACu); set32(c.r[5], c.r[29].w[0] + 220u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E9CACu) [[unlikely]] return; }
L_002E9CAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_002E9CB0:
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
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_002E9CE0:
    set32(c.r[29], c.r[29].w[0] - 560u);
    c.r[2].d[0] = c.r[11].d[0] & 65535ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
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
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 27556u)));
    st32((c.r[29].w[0] + 236u), c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[30], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 22;
    { const bool t = c.r[30].d[0] != 0ull; c.r[16].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_002E9D40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EA7BC; } }
L_002E9D40:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[30].w[0] + c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9D58u); set32(c.r[5], c.r[2].w[0] + 8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002E9D58u) [[unlikely]] return; }
L_002E9D58:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9D68u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 283u, depth + 1u); else { c.pc = 0x002B20B0u; return; } if (c.pc != 0x002E9D68u) [[unlikely]] return; }
L_002E9D68:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27491u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E9D84; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E9D8C; } }
L_002E9D84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9D8Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E9D8Cu) [[unlikely]] return; }
L_002E9D8C:
    st32((c.r[29].w[0] + 552u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[21], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9DA0u); set32(c.r[5], c.r[29].w[0] + 552u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002E9DA0u) [[unlikely]] return; }
L_002E9DA0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9DB0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002E9DB0u) [[unlikely]] return; }
L_002E9DB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 552u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E9E0C; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9DDCu); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E9DDCu) [[unlikely]] return; }
L_002E9DDC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9DECu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E9DECu) [[unlikely]] return; }
L_002E9DEC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E9E0C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9E0Cu); set32(c.r[5], c.r[29].w[0] + 552u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E9E0Cu) [[unlikely]] return; }
L_002E9E0C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], 0u + 256u);
    set32(c.r[6], c.r[6].w[0] - 27411u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9E24u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x002E9E24u) [[unlikely]] return; }
L_002E9E24:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27406u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002E9E40; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E9E48; } }
L_002E9E40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9E48u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E9E48u) [[unlikely]] return; }
L_002E9E48:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 548u), c.r[2].w[0]);  if (t) { goto L_002E9E60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E9E68; } }
L_002E9E60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9E68u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E9E68u) [[unlikely]] return; }
L_002E9E68:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27402u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 544u), c.r[2].w[0]);  if (t) { goto L_002E9E84; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002E9E8C; } }
L_002E9E84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9E8Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002E9E8Cu) [[unlikely]] return; }
L_002E9E8C:
    st32((c.r[29].w[0] + 540u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 548u);
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9EA4u); set32(c.r[6], c.r[29].w[0] + 544u);  if (depth < kMaxDepth) unit_006C(c, 510u, depth + 1u); else { c.pc = 0x002B3E20u; return; } if (c.pc != 0x002E9EA4u) [[unlikely]] return; }
L_002E9EA4:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9EB4u); set32(c.r[5], c.r[29].w[0] + 540u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002E9EB4u) [[unlikely]] return; }
L_002E9EB4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9EC4u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002E9EC4u) [[unlikely]] return; }
L_002E9EC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 540u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E9F20; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9EF0u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E9EF0u) [[unlikely]] return; }
L_002E9EF0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9F00u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E9F00u) [[unlikely]] return; }
L_002E9F00:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E9F20; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9F20u); set32(c.r[5], c.r[29].w[0] + 540u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E9F20u) [[unlikely]] return; }
L_002E9F20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 544u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002E9F7C; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9F4Cu); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E9F4Cu) [[unlikely]] return; }
L_002E9F4C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9F5Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E9F5Cu) [[unlikely]] return; }
L_002E9F5C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E9F7C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9F7Cu); set32(c.r[5], c.r[29].w[0] + 544u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E9F7Cu) [[unlikely]] return; }
L_002E9F7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 548u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_002E9FDC; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9FA8u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002E9FA8u) [[unlikely]] return; }
L_002E9FA8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9FB8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002E9FB8u) [[unlikely]] return; }
L_002E9FB8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002E9FD8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002E9FD8u); set32(c.r[5], c.r[29].w[0] + 548u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002E9FD8u) [[unlikely]] return; }
L_002E9FD8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002E9FDC:
    set32(c.r[16], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_002EA018; } }
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[16].d[0]) { c.r[21].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_002EA00C; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[21].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_002EA000; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002EA028; } }
L_002EA000:
    set32(c.r[16], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[21].w[0] - 27392u);  if (t) { goto L_002EA024; } }
L_002EA00C:
    set32(c.r[16], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[21].w[0] - 27378u);  if (t) { goto L_002EA024; } }
L_002EA018:
    c.r[21].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[16], 0u + 7u);
    set32(c.r[21], c.r[21].w[0] - 27360u);
    c.budget -= 3;
L_002EA024:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002EA028:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_002EA0FC; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[6], 0u + 10u);
    set32(c.r[8], ld32((c.r[29].w[0] + 236u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 136u)));
    c.r[9].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA058u); set32(c.r[10], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EA058u) [[unlikely]] return; }
L_002EA058:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27278u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; c.r[22].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002EA074; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002EA07C; } }
L_002EA074:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA07Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EA07Cu) [[unlikely]] return; }
L_002EA07C:
    st32((c.r[29].w[0] + 536u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[23], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA090u); set32(c.r[5], c.r[29].w[0] + 536u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002EA090u) [[unlikely]] return; }
L_002EA090:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA0A0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002EA0A0u) [[unlikely]] return; }
L_002EA0A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 536u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EA0FC; } }
    set32(c.r[22], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA0CCu); set32(c.r[23], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EA0CCu) [[unlikely]] return; }
L_002EA0CC:
    set32(c.r[2], ld32((c.r[22].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA0DCu); st32((c.r[22].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EA0DCu) [[unlikely]] return; }
L_002EA0DC:
    set32(c.r[3], ld32((c.r[22].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EA0FC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA0FCu); set32(c.r[5], c.r[29].w[0] + 536u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EA0FCu) [[unlikely]] return; }
L_002EA0FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27304u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EA118; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002EA120; } }
L_002EA118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA120u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EA120u) [[unlikely]] return; }
L_002EA120:
    st32((c.r[29].w[0] + 532u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA130u); set32(c.r[5], c.r[29].w[0] + 532u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002EA130u) [[unlikely]] return; }
L_002EA130:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 532u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EA194; } }
    set32(c.r[22], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA164u); st32((c.r[29].w[0] + 208u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EA164u) [[unlikely]] return; }
L_002EA164:
    set32(c.r[2], ld32((c.r[22].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA174u); st32((c.r[22].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EA174u) [[unlikely]] return; }
L_002EA174:
    set32(c.r[3], ld32((c.r[22].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EA194; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 208u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA194u); set32(c.r[5], c.r[29].w[0] + 532u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EA194u) [[unlikely]] return; }
L_002EA194:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_002EA1D4; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[6], 0u + 8u);
    set32(c.r[8], ld32((c.r[29].w[0] + 236u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 136u)));
    c.r[9].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA1C4u); set32(c.r[10], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EA1C4u) [[unlikely]] return; }
L_002EA1C4:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA1D4u); c.r[6].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002EA1D4u) [[unlikely]] return; }
L_002EA1D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27163u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EA1F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002EA1F8; } }
L_002EA1F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA1F8u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EA1F8u) [[unlikely]] return; }
L_002EA1F8:
    st32((c.r[29].w[0] + 528u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA208u); set32(c.r[5], c.r[29].w[0] + 528u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002EA208u) [[unlikely]] return; }
L_002EA208:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 528u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EA26C; } }
    set32(c.r[22], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA23Cu); st32((c.r[29].w[0] + 192u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EA23Cu) [[unlikely]] return; }
L_002EA23C:
    set32(c.r[2], ld32((c.r[22].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA24Cu); st32((c.r[22].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EA24Cu) [[unlikely]] return; }
L_002EA24C:
    set32(c.r[3], ld32((c.r[22].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EA26C; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA26Cu); set32(c.r[5], c.r[29].w[0] + 528u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EA26Cu) [[unlikely]] return; }
L_002EA26C:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_002EA2AC; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[6], 0u + 27u);
    set32(c.r[8], ld32((c.r[29].w[0] + 236u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 136u)));
    c.r[9].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA29Cu); set32(c.r[10], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EA29Cu) [[unlikely]] return; }
L_002EA29C:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA2ACu); c.r[6].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002EA2ACu) [[unlikely]] return; }
L_002EA2AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27149u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EA2C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002EA2D0; } }
L_002EA2C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA2D0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EA2D0u) [[unlikely]] return; }
L_002EA2D0:
    st32((c.r[29].w[0] + 524u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA2E0u); set32(c.r[5], c.r[29].w[0] + 524u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002EA2E0u) [[unlikely]] return; }
L_002EA2E0:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 524u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EA344; } }
    set32(c.r[22], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA314u); st32((c.r[29].w[0] + 176u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EA314u) [[unlikely]] return; }
L_002EA314:
    set32(c.r[2], ld32((c.r[22].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA324u); st32((c.r[22].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EA324u) [[unlikely]] return; }
L_002EA324:
    set32(c.r[3], ld32((c.r[22].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EA344; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA344u); set32(c.r[5], c.r[29].w[0] + 524u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EA344u) [[unlikely]] return; }
L_002EA344:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_002EA384; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[6], 0u + 28u);
    set32(c.r[8], ld32((c.r[29].w[0] + 236u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 136u)));
    c.r[9].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA374u); set32(c.r[10], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EA374u) [[unlikely]] return; }
L_002EA374:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA384u); c.r[6].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002EA384u) [[unlikely]] return; }
L_002EA384:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27138u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EA3A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002EA3A8; } }
L_002EA3A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA3A8u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EA3A8u) [[unlikely]] return; }
L_002EA3A8:
    st32((c.r[29].w[0] + 520u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA3B8u); set32(c.r[5], c.r[29].w[0] + 520u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002EA3B8u) [[unlikely]] return; }
L_002EA3B8:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 520u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EA41C; } }
    set32(c.r[22], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA3ECu); st32((c.r[29].w[0] + 160u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EA3ECu) [[unlikely]] return; }
L_002EA3EC:
    set32(c.r[2], ld32((c.r[22].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA3FCu); st32((c.r[22].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EA3FCu) [[unlikely]] return; }
L_002EA3FC:
    set32(c.r[3], ld32((c.r[22].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EA41C; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA41Cu); set32(c.r[5], c.r[29].w[0] + 520u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EA41Cu) [[unlikely]] return; }
L_002EA41C:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_002EA45C; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[6], 0u + 29u);
    set32(c.r[8], ld32((c.r[29].w[0] + 236u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 136u)));
    c.r[9].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA44Cu); set32(c.r[10], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EA44Cu) [[unlikely]] return; }
L_002EA44C:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA45Cu); c.r[6].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002EA45Cu) [[unlikely]] return; }
L_002EA45C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], 0u + 23u);
    set32(c.r[22], ld32((c.r[2].w[0] + 20312u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[18].d[0] == c.r[2].d[0]; st32((c.r[29].w[0] + 556u), c.r[22].w[0]);  if (t) { goto L_002EA4A0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 236u)));  goto L_002EA498; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 236u)));  goto L_002EA490; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[29].w[0] + 556u);  if (t) { goto L_002EA4AC; } }
L_002EA490:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] + 23u);  if (t) { goto L_002EA4A8; } }
L_002EA498:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] + 39u);  if (t) { goto L_002EA4A8; } }
L_002EA4A0:
    set32(c.r[2], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[4], c.r[2].w[0] + 31u);
    c.budget -= 2;
L_002EA4A8:
    set32(c.r[5], c.r[29].w[0] + 556u);
    c.budget -= 1;
L_002EA4AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA4B4u); set32(c.r[6], c.r[29].w[0] + 236u);  if (depth < kMaxDepth) unit_007F(c, 198u, depth + 1u); else { c.pc = 0x002FFA90u; return; } if (c.pc != 0x002EA4B4u) [[unlikely]] return; }
L_002EA4B4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[7], 0u + 1u);  goto L_002EA51C; }
    set32(c.r[2], ld32((c.r[29].w[0] + 556u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[22].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002EA7BC; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA4E0u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EA4E0u) [[unlikely]] return; }
L_002EA4E0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA4F0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EA4F0u) [[unlikely]] return; }
L_002EA4F0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EA510; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA510u); set32(c.r[5], c.r[29].w[0] + 556u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EA510u) [[unlikely]] return; }
L_002EA510:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EA7BC; } }
L_002EA51C:
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[7].d[0]) { set32(c.r[25], ld32((c.r[20].w[0])));  goto L_002EA55C; }
    c.r[2].d[0] = ld8((c.r[30].w[0] + 73u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EA558; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[29].w[0] + 236u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA550u); set32(c.r[6], c.r[29].w[0] + 556u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EA550u) [[unlikely]] return; }
L_002EA550:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002EA640; } }
L_002EA558:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_002EA55C:
    c.r[9].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[29].w[0] + 236u)));
    set32(c.r[6], 0u + 25u);
    set32(c.r[25], ld32((c.r[25].w[0] + 136u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA580u); set32(c.r[10], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EA580u) [[unlikely]] return; }
L_002EA580:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27116u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_002EA598; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_002EA5A0; } }
L_002EA598:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA5A0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EA5A0u) [[unlikely]] return; }
L_002EA5A0:
    st32((c.r[29].w[0] + 516u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[21], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA5B4u); set32(c.r[5], c.r[29].w[0] + 516u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002EA5B4u) [[unlikely]] return; }
L_002EA5B4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA5C4u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002EA5C4u) [[unlikely]] return; }
L_002EA5C4:
    set32(c.r[2], ld32((c.r[29].w[0] + 516u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[22].d[0]) { set32(c.r[25], ld32((c.r[20].w[0])));  goto L_002EA61C; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA5E8u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EA5E8u) [[unlikely]] return; }
L_002EA5E8:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA5F8u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EA5F8u) [[unlikely]] return; }
L_002EA5F8:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EA618; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA618u); set32(c.r[5], c.r[29].w[0] + 516u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EA618u) [[unlikely]] return; }
L_002EA618:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_002EA61C:
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[29].w[0] + 236u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 556u);
    set32(c.r[25], ld32((c.r[25].w[0] + 128u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA63Cu); c.r[7].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EA63Cu) [[unlikely]] return; }
L_002EA63C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002EA640:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27096u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EA658; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_002EA660; } }
L_002EA658:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA660u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EA660u) [[unlikely]] return; }
L_002EA660:
    st32((c.r[29].w[0] + 512u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA674u); set32(c.r[5], c.r[29].w[0] + 512u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002EA674u) [[unlikely]] return; }
L_002EA674:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA684u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002EA684u) [[unlikely]] return; }
L_002EA684:
    set32(c.r[2], ld32((c.r[29].w[0] + 512u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[22].d[0];  if (t) { goto L_002EA6D8; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA6A8u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EA6A8u) [[unlikely]] return; }
L_002EA6A8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA6B8u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EA6B8u) [[unlikely]] return; }
L_002EA6B8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EA6D8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA6D8u); set32(c.r[5], c.r[29].w[0] + 512u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EA6D8u) [[unlikely]] return; }
L_002EA6D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27086u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EA6F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_002EA6F8; } }
L_002EA6F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA6F8u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EA6F8u) [[unlikely]] return; }
L_002EA6F8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 508u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA708u); set32(c.r[5], c.r[29].w[0] + 508u);  if (depth < kMaxDepth) unit_006C(c, 486u, depth + 1u); else { c.pc = 0x002B3B40u; return; } if (c.pc != 0x002EA708u) [[unlikely]] return; }
L_002EA708:
    set32(c.r[3], ld32((c.r[29].w[0] + 560u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 508u)));
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[22].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 556u)));  goto L_002EA768; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA734u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EA734u) [[unlikely]] return; }
L_002EA734:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA744u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EA744u) [[unlikely]] return; }
L_002EA744:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EA764; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA764u); set32(c.r[5], c.r[29].w[0] + 508u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EA764u) [[unlikely]] return; }
L_002EA764:
    set32(c.r[2], ld32((c.r[29].w[0] + 556u)));
    c.budget -= 1;
L_002EA768:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[22].d[0]) { set32(c.r[2], 0u + 1u);  goto L_002EA7BC; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA788u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EA788u) [[unlikely]] return; }
L_002EA788:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA798u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EA798u) [[unlikely]] return; }
L_002EA798:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EA7B8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA7B8u); set32(c.r[5], c.r[29].w[0] + 556u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EA7B8u) [[unlikely]] return; }
L_002EA7B8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002EA7BC:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 560u);  c.pc = t; return; }
L_002EA7F0:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    c.r[22].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    set32(c.r[18], ld32((c.r[29].w[0] + 336u)));
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[29].w[0] + 344u)));
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[23], ld32((c.r[29].w[0] + 352u)));
    set32(c.r[30], ld32((c.r[29].w[0] + 360u)));
    st32((c.r[29].w[0] + 328u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 324u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 320u), c.r[9].w[0]);
    st32((c.r[29].w[0] + 316u), c.r[10].w[0]);
    st32((c.r[29].w[0] + 312u), c.r[11].w[0]);
    st32((c.r[29].w[0] + 332u), 0u);
    st32((c.r[29].w[0] + 288u), 0u);
    c.budget -= 29;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 272u), 0u);  if (t) { goto L_002EA9AC; } }
L_002EA864:
    set32(c.r[2], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] << (c.r[16].w[0] & 31u));
    set32(c.r[2], c.r[4].w[0] << (c.r[2].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    set32(c.r[2], ld32((c.r[29].w[0] + 316u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 332u), 0u);  if (t) { goto L_002EA934; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 27556u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st64((c.r[29].w[0]), c.r[30].d[0]);  goto L_002EA938; }
    set32(c.r[2], c.r[29].w[0] + 332u);
    set32(c.r[11], ld32((c.r[29].w[0] + 312u)));
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 272u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA8C4u); c.r[10].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EA8C4u) [[unlikely]] return; }
L_002EA8C4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st64((c.r[29].w[0]), c.r[30].d[0]);  goto L_002EA8D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EAC9C; } }
L_002EA8D4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 368u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    c.r[10].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 376u)));
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[21].d[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 332u)));
    st64((c.r[29].w[0] + 40u), c.r[2].d[0]);
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 276u)));
    c.budget -= 20;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA924u); c.r[11].d[0] = c.r[23].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EA924u) [[unlikely]] return; }
L_002EA924:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[22], c.r[22].w[0] + 1u);  goto L_002EA99C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EAC9C; } }
L_002EA934:
    st64((c.r[29].w[0]), c.r[30].d[0]);
    c.budget -= 1;
L_002EA938:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 368u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[29].w[0] + 288u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    c.r[10].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 376u)));
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 40u), 0ull);
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 276u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EA984u); c.r[11].d[0] = c.r[23].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EA984u) [[unlikely]] return; }
L_002EA984:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 288u)));  goto L_002EA994; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EAC9C; } }
L_002EA994:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 288u), c.r[2].w[0]);
    c.budget -= 2;
L_002EA99C:
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    c.budget -= 4;
L_002EA9AC:
    set32(c.r[3], ld32((c.r[29].w[0] + 272u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 328u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002EA864u | kUnwind; return; } goto L_002EA864; }
    c.r[22].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 208u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 256u), 0u);  if (t) { goto L_002EAB18; } }
L_002EA9D0:
    set32(c.r[2], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] << (c.r[16].w[0] & 31u));
    set32(c.r[2], c.r[4].w[0] << (c.r[2].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    set32(c.r[2], ld32((c.r[29].w[0] + 316u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 332u), 0u);  if (t) { goto L_002EAAA0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 27556u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st64((c.r[29].w[0]), c.r[30].d[0]);  goto L_002EAAA4; }
    set32(c.r[2], c.r[29].w[0] + 332u);
    set32(c.r[11], ld32((c.r[29].w[0] + 312u)));
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 272u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAA30u); c.r[10].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EAA30u) [[unlikely]] return; }
L_002EAA30:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st64((c.r[29].w[0]), c.r[30].d[0]);  goto L_002EAA40; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EAC9C; } }
L_002EAA40:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 368u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    c.r[10].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 376u)));
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[21].d[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 332u)));
    st64((c.r[29].w[0] + 40u), c.r[2].d[0]);
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 276u)));
    c.budget -= 20;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAA90u); c.r[11].d[0] = c.r[23].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EAA90u) [[unlikely]] return; }
L_002EAA90:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[22], c.r[22].w[0] + 1u);  goto L_002EAB08; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EAC9C; } }
L_002EAAA0:
    st64((c.r[29].w[0]), c.r[30].d[0]);
    c.budget -= 1;
L_002EAAA4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 368u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[29].w[0] + 208u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    c.r[10].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 376u)));
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 40u), 0ull);
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 276u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAAF0u); c.r[11].d[0] = c.r[23].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EAAF0u) [[unlikely]] return; }
L_002EAAF0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 208u)));  goto L_002EAB00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EAC9C; } }
L_002EAB00:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    c.budget -= 2;
L_002EAB08:
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    c.budget -= 4;
L_002EAB18:
    set32(c.r[3], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 324u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002EA9D0u | kUnwind; return; } goto L_002EA9D0; }
    c.r[22].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 224u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 240u), 0u);  if (t) { goto L_002EAC84; } }
L_002EAB3C:
    set32(c.r[2], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] << (c.r[16].w[0] & 31u));
    set32(c.r[2], c.r[4].w[0] << (c.r[2].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    set32(c.r[2], ld32((c.r[29].w[0] + 316u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 332u), 0u);  if (t) { goto L_002EAC0C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 27556u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st64((c.r[29].w[0]), c.r[30].d[0]);  goto L_002EAC10; }
    set32(c.r[2], c.r[29].w[0] + 332u);
    set32(c.r[11], ld32((c.r[29].w[0] + 312u)));
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], 0u + 2u);
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 272u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAB9Cu); c.r[10].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EAB9Cu) [[unlikely]] return; }
L_002EAB9C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st64((c.r[29].w[0]), c.r[30].d[0]);  goto L_002EABAC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EAC9C; } }
L_002EABAC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 368u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], 0u + 2u);
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    c.r[10].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 376u)));
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[21].d[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 332u)));
    st64((c.r[29].w[0] + 40u), c.r[2].d[0]);
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 276u)));
    c.budget -= 20;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EABFCu); c.r[11].d[0] = c.r[23].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EABFCu) [[unlikely]] return; }
L_002EABFC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[22], c.r[22].w[0] + 1u);  goto L_002EAC74; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EAC9C; } }
L_002EAC0C:
    st64((c.r[29].w[0]), c.r[30].d[0]);
    c.budget -= 1;
L_002EAC10:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 368u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[29].w[0] + 224u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], 0u + 2u);
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    c.r[10].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 376u)));
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 384u)));
    st64((c.r[29].w[0] + 24u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 40u), 0ull);
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 276u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAC5Cu); c.r[11].d[0] = c.r[23].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EAC5Cu) [[unlikely]] return; }
L_002EAC5C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 224u)));  goto L_002EAC6C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EAC9C; } }
L_002EAC6C:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    c.budget -= 2;
L_002EAC74:
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    c.budget -= 4;
L_002EAC84:
    set32(c.r[3], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], 0u - 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002EAB3Cu | kUnwind; return; } goto L_002EAB3C; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002EAC9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_002EACD0:
    set32(c.r[29], c.r[29].w[0] - 272u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[2].w[0] + 20312u)));
    st32((c.r[29].w[0] + 188u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 268u), c.r[16].w[0]);
    c.budget -= 23;
    { const bool t = c.r[19].d[0] != 0ull; st32((c.r[7].w[0]), c.r[19].w[0]);  if (t) { goto L_002EAD8C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 268u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[16].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002EB34C; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAD50u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EAD50u) [[unlikely]] return; }
L_002EAD50:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAD60u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EAD60u) [[unlikely]] return; }
L_002EAD60:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EAD80; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAD80u); set32(c.r[5], c.r[29].w[0] + 268u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EAD80u) [[unlikely]] return; }
L_002EAD80:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EB34C; } }
L_002EAD8C:
    set32(c.r[2], ld32((c.r[29].w[0] + 268u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28207u);
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[4].d[0]) { set32(c.r[17], ld32((c.r[18].w[0])));  goto L_002EAE04; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EADA8u); st32((c.r[29].w[0] + 228u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EADA8u) [[unlikely]] return; }
L_002EADA8:
    st32((c.r[29].w[0] + 268u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_002EAE00; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[17], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EADD0u); set32(c.r[22], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EADD0u) [[unlikely]] return; }
L_002EADD0:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EADE0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EADE0u) [[unlikely]] return; }
L_002EADE0:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EAE00; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAE00u); set32(c.r[5], c.r[29].w[0] + 228u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EAE00u) [[unlikely]] return; }
L_002EAE00:
    set32(c.r[17], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_002EAE04:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[3], ld32((c.r[18].w[0])));  goto L_002EAE28; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAE14u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EAE14u) [[unlikely]] return; }
L_002EAE14:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAE24u); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EAE24u) [[unlikely]] return; }
L_002EAE24:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_002EAE28:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[23].d[0] != c.r[2].d[0]; st32((c.r[29].w[0] + 264u), c.r[3].w[0]);  if (t) { goto L_002EB2A0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27076u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EAE4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002EAE54; } }
L_002EAE4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAE54u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EAE54u) [[unlikely]] return; }
L_002EAE54:
    st32((c.r[29].w[0] + 260u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAE6Cu); set32(c.r[5], c.r[29].w[0] + 260u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EAE6Cu) [[unlikely]] return; }
L_002EAE6C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 260u)));
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[16].d[0]) { set32(c.r[4], ld32((c.r[20].w[0])));  goto L_002EAEC8; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[21], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAE94u); set32(c.r[22], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EAE94u) [[unlikely]] return; }
L_002EAE94:
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAEA4u); st32((c.r[21].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EAEA4u) [[unlikely]] return; }
L_002EAEA4:
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EAEC4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAEC4u); set32(c.r[5], c.r[29].w[0] + 260u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EAEC4u) [[unlikely]] return; }
L_002EAEC4:
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_002EAEC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAED0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 283u, depth + 1u); else { c.pc = 0x002B20B0u; return; } if (c.pc != 0x002EAED0u) [[unlikely]] return; }
L_002EAED0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27058u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EAEE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002EAEF0; } }
L_002EAEE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAEF0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EAEF0u) [[unlikely]] return; }
L_002EAEF0:
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[21], ld32((c.r[20].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAF04u); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002EAF04u) [[unlikely]] return; }
L_002EAF04:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAF14u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002EAF14u) [[unlikely]] return; }
L_002EAF14:
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[16].d[0]) { set32(c.r[7], ld32((c.r[18].w[0])));  goto L_002EAF6C; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[19], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAF38u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EAF38u) [[unlikely]] return; }
L_002EAF38:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAF48u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EAF48u) [[unlikely]] return; }
L_002EAF48:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EAF68; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAF68u); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EAF68u) [[unlikely]] return; }
L_002EAF68:
    set32(c.r[7], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_002EAF6C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], 0u + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAF80u); set32(c.r[6], c.r[6].w[0] - 27049u);  if (depth < kMaxDepth) unit_0047(c, 72u, depth + 1u); else { c.pc = 0x0021CC60u; return; } if (c.pc != 0x002EAF80u) [[unlikely]] return; }
L_002EAF80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27033u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EAF98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002EAFA0; } }
L_002EAF98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAFA0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EAFA0u) [[unlikely]] return; }
L_002EAFA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27024u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 252u), c.r[2].w[0]);  if (t) { goto L_002EAFB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002EAFC0; } }
L_002EAFB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAFC0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EAFC0u) [[unlikely]] return; }
L_002EAFC0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27889u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 248u), c.r[2].w[0]);  if (t) { goto L_002EAFD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002EAFE0; } }
L_002EAFD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAFE0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EAFE0u) [[unlikely]] return; }
L_002EAFE0:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 244u), c.r[2].w[0]);  if (t) { goto L_002EAFF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002EAFFC; } }
L_002EAFF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EAFFCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EAFFCu) [[unlikely]] return; }
L_002EAFFC:
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 252u);
    st64((c.r[29].w[0]), c.r[30].d[0]);
    set32(c.r[6], c.r[29].w[0] + 248u);
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[7], c.r[29].w[0] + 244u);
    set32(c.r[8], c.r[29].w[0] + 240u);
    set32(c.r[9], 0u + 1u);
    set32(c.r[10], 0u + 2u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB028u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 522u, depth + 1u); else { c.pc = 0x002B3F30u; return; } if (c.pc != 0x002EB028u) [[unlikely]] return; }
L_002EB028:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[16].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 244u)));  goto L_002EB084; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB050u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EB050u) [[unlikely]] return; }
L_002EB050:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB060u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EB060u) [[unlikely]] return; }
L_002EB060:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EB080; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB080u); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EB080u) [[unlikely]] return; }
L_002EB080:
    set32(c.r[2], ld32((c.r[29].w[0] + 244u)));
    c.budget -= 1;
L_002EB084:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[16].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 248u)));  goto L_002EB0D8; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB0A4u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EB0A4u) [[unlikely]] return; }
L_002EB0A4:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB0B4u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EB0B4u) [[unlikely]] return; }
L_002EB0B4:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EB0D4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB0D4u); set32(c.r[5], c.r[29].w[0] + 244u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EB0D4u) [[unlikely]] return; }
L_002EB0D4:
    set32(c.r[2], ld32((c.r[29].w[0] + 248u)));
    c.budget -= 1;
L_002EB0D8:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[16].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 252u)));  goto L_002EB12C; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB0F8u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EB0F8u) [[unlikely]] return; }
L_002EB0F8:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB108u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EB108u) [[unlikely]] return; }
L_002EB108:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EB128; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB128u); set32(c.r[5], c.r[29].w[0] + 248u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EB128u) [[unlikely]] return; }
L_002EB128:
    set32(c.r[2], ld32((c.r[29].w[0] + 252u)));
    c.budget -= 1;
L_002EB12C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_002EB17C; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB14Cu); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EB14Cu) [[unlikely]] return; }
L_002EB14C:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB15Cu); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EB15Cu) [[unlikely]] return; }
L_002EB15C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EB17C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB17Cu); set32(c.r[5], c.r[29].w[0] + 252u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EB17Cu) [[unlikely]] return; }
L_002EB17C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27024u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EB194; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002EB19C; } }
L_002EB194:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB19Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EB19Cu) [[unlikely]] return; }
L_002EB19C:
    st32((c.r[29].w[0] + 236u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[20].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB1B0u); set32(c.r[5], c.r[29].w[0] + 236u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002EB1B0u) [[unlikely]] return; }
L_002EB1B0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB1C0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 201u, depth + 1u); else { c.pc = 0x002B1500u; return; } if (c.pc != 0x002EB1C0u) [[unlikely]] return; }
L_002EB1C0:
    set32(c.r[2], ld32((c.r[29].w[0] + 236u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_002EB214; } }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB1E4u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EB1E4u) [[unlikely]] return; }
L_002EB1E4:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB1F4u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EB1F4u) [[unlikely]] return; }
L_002EB1F4:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EB214; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB214u); set32(c.r[5], c.r[29].w[0] + 236u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EB214u) [[unlikely]] return; }
L_002EB214:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27011u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EB22C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002EB234; } }
L_002EB22C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB234u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EB234u) [[unlikely]] return; }
L_002EB234:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 232u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB244u); set32(c.r[5], c.r[29].w[0] + 232u);  if (depth < kMaxDepth) unit_006C(c, 486u, depth + 1u); else { c.pc = 0x002B3B40u; return; } if (c.pc != 0x002EB244u) [[unlikely]] return; }
L_002EB244:
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 232u)));
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[16].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 264u)));  goto L_002EB2A4; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[17], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB270u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EB270u) [[unlikely]] return; }
L_002EB270:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB280u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EB280u) [[unlikely]] return; }
L_002EB280:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EB2A0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB2A0u); set32(c.r[5], c.r[29].w[0] + 232u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EB2A0u) [[unlikely]] return; }
L_002EB2A0:
    set32(c.r[2], ld32((c.r[29].w[0] + 264u)));
    c.budget -= 1;
L_002EB2A4:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[16].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 268u)));  goto L_002EB2F8; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[17], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB2C4u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EB2C4u) [[unlikely]] return; }
L_002EB2C4:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB2D4u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EB2D4u) [[unlikely]] return; }
L_002EB2D4:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EB2F4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB2F4u); set32(c.r[5], c.r[29].w[0] + 264u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EB2F4u) [[unlikely]] return; }
L_002EB2F4:
    set32(c.r[2], ld32((c.r[29].w[0] + 268u)));
    c.budget -= 1;
L_002EB2F8:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[16].d[0]) { set32(c.r[2], 0u + 1u);  goto L_002EB34C; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB318u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EB318u) [[unlikely]] return; }
L_002EB318:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB328u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EB328u) [[unlikely]] return; }
L_002EB328:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EB348; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB348u); set32(c.r[5], c.r[29].w[0] + 268u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EB348u) [[unlikely]] return; }
L_002EB348:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002EB34C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 272u);  c.pc = t; return; }
L_002EB380:
    set32(c.r[29], c.r[29].w[0] - 240u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.r[30].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 236u), 0u);
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    set32(c.r[3], c.r[3].w[0] >> 12);
    c.budget -= 25;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[29].w[0] + 220u), c.r[8].w[0]);  if (t) { goto L_002EB448; } }
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB3F0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 208u, depth + 1u); else { c.pc = 0x003014E0u; return; } if (c.pc != 0x002EB3F0u) [[unlikely]] return; }
L_002EB3F0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002EB404; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 256u)));  if (t) { goto L_002EB414; } }
L_002EB404:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB40Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 105u, depth + 1u); else { c.pc = 0x00304A10u; return; } if (c.pc != 0x002EB40Cu) [[unlikely]] return; }
L_002EB40C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    c.budget -= 2;
L_002EB414:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 240u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB438u); set32(c.r[7], c.r[29].w[0] + 236u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EB438u) [[unlikely]] return; }
L_002EB438:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002EB448; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EB694; } }
L_002EB448:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x07000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[16], c.r[2].w[0] >> 24);
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 4u)));  goto L_002EB604; }
    st32((c.r[29].w[0] + 232u), 0u);
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 264u)));  goto L_002EB5B0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26999u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EB48C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002EB494; } }
L_002EB48C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB494u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EB494u) [[unlikely]] return; }
L_002EB494:
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 224u);
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB4A8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006C(c, 209u, depth + 1u); else { c.pc = 0x002B1660u; return; } if (c.pc != 0x002EB4A8u) [[unlikely]] return; }
L_002EB4A8:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 224u)));
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 7;
    if (c.r[3].d[0] == c.r[2].d[0]) { ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);  goto L_002EB514; }
    set32(c.r[22], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 16);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB4E0u); st32((c.r[29].w[0] + 192u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EB4E0u) [[unlikely]] return; }
L_002EB4E0:
    set32(c.r[2], ld32((c.r[22].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB4F0u); st32((c.r[22].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EB4F0u) [[unlikely]] return; }
L_002EB4F0:
    set32(c.r[3], ld32((c.r[22].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EB510; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 192u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB510u); set32(c.r[5], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EB510u) [[unlikely]] return; }
L_002EB510:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.budget -= 1;
L_002EB514:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EB5AC; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; st32((c.r[29].w[0] + 228u), 0u);  if (t) { goto L_002EB534; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], c.r[29].w[0] + 232u);  goto L_002EB56C; }
L_002EB534:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[29].w[0] + 220u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[21].w[0])));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 172u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB558u); set32(c.r[9], c.r[29].w[0] + 228u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EB558u) [[unlikely]] return; }
L_002EB558:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EB568; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EB694; } }
L_002EB568:
    set32(c.r[2], c.r[29].w[0] + 232u);
    c.budget -= 1;
L_002EB56C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], ld32((c.r[21].w[0])));
    set32(c.r[9], 0u + 8u);
    set32(c.r[8], ld32((c.r[29].w[0] + 228u)));
    c.r[10].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 196u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB59Cu); c.r[11].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EB59Cu) [[unlikely]] return; }
L_002EB59C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[25], ld32((c.r[20].w[0])));  goto L_002EB5C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EB694; } }
L_002EB5AC:
    set32(c.r[2], ld32((c.r[29].w[0] + 264u)));
    c.budget -= 1;
L_002EB5B0:
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[29].w[0] + 232u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.budget -= 6;
L_002EB5C8:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 232u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[10], ld32((c.r[29].w[0] + 236u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[11], ld32((c.r[29].w[0] + 240u)));
    c.r[8].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 252u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB5F0u); c.r[9].d[0] = c.r[30].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EB5F0u) [[unlikely]] return; }
L_002EB5F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EB600; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EB694; } }
L_002EB600:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_002EB604:
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 16384ull;
    set32(c.r[3], c.r[3].w[0] >> 14);
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 248u)));  goto L_002EB684; }
    set32(c.r[4], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB624u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 208u, depth + 1u); else { c.pc = 0x003014E0u; return; } if (c.pc != 0x002EB624u) [[unlikely]] return; }
L_002EB624:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002EB638; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 256u)));  if (t) { goto L_002EB648; } }
L_002EB638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB640u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 105u, depth + 1u); else { c.pc = 0x00304A10u; return; } if (c.pc != 0x002EB640u) [[unlikely]] return; }
L_002EB640:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    c.budget -= 2;
L_002EB648:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[23].d[0] + 0ull;
    c.r[8].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 244u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB670u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EB670u) [[unlikely]] return; }
L_002EB670:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002EB680; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EB694; } }
L_002EB680:
    set32(c.r[4], ld32((c.r[29].w[0] + 248u)));
    c.budget -= 1;
L_002EB684:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_002EB694:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
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
L_002EB6D0:
    set32(c.r[29], c.r[29].w[0] - 304u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 300u), 0u);
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[21], ld32((c.r[29].w[0] + 368u)));
    set32(c.r[30], ld32((c.r[29].w[0] + 376u)));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    set32(c.r[17], ld32((c.r[29].w[0] + 392u)));
    set32(c.r[3], c.r[3].w[0] >> 7);
    st32((c.r[29].w[0] + 284u), c.r[7].w[0]);
    c.budget -= 27;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[29].w[0] + 280u), c.r[10].w[0]);  if (t) { goto L_002EB7B8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB748u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 208u, depth + 1u); else { c.pc = 0x003014E0u; return; } if (c.pc != 0x002EB748u) [[unlikely]] return; }
L_002EB748:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002EB75C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] << 2);  if (t) { goto L_002EB76C; } }
L_002EB75C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB764u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 105u, depth + 1u); else { c.pc = 0x00304A10u; return; } if (c.pc != 0x002EB764u) [[unlikely]] return; }
L_002EB764:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 2;
L_002EB76C:
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[16], c.r[17].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 296u), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[7], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 216u)));
    c.budget -= 11;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB798u); set32(c.r[6], c.r[29].w[0] + 296u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EB798u) [[unlikely]] return; }
L_002EB798:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 300u)));  goto L_002EB7A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EBE28; } }
L_002EB7A8:
    set32(c.r[2], ld32((c.r[29].w[0] + 296u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 300u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 4;
L_002EB7B8:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] & 512ull;
    set32(c.r[2], c.r[2].w[0] >> 9);
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 4u)));  goto L_002EB850; }
    c.r[2].d[0] = c.r[3].d[0] & 96ull;
    set32(c.r[4], 0u + 2u);
    set32(c.r[16], c.r[2].w[0] >> 5);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB7E0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 208u, depth + 1u); else { c.pc = 0x003014E0u; return; } if (c.pc != 0x002EB7E0u) [[unlikely]] return; }
L_002EB7E0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002EB7F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[3].w[0] << 2);  if (t) { goto L_002EB804; } }
L_002EB7F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB7FCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 105u, depth + 1u); else { c.pc = 0x00304A10u; return; } if (c.pc != 0x002EB7FCu) [[unlikely]] return; }
L_002EB7FC:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] << 2);
    c.budget -= 2;
L_002EB804:
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[9], ld32((c.r[23].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 224u)));
    c.r[8].d[0] = c.r[22].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 280u)));
    set32(c.r[10], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB834u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EB834u) [[unlikely]] return; }
L_002EB834:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 300u)));  goto L_002EB844; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EBE28; } }
L_002EB844:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
L_002EB850:
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    set32(c.r[3], c.r[3].w[0] >> 10);
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 4u)));  goto L_002EB8D4; }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB870u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 208u, depth + 1u); else { c.pc = 0x003014E0u; return; } if (c.pc != 0x002EB870u) [[unlikely]] return; }
L_002EB870:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002EB884; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[20].w[0])));  if (t) { goto L_002EB894; } }
L_002EB884:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB88Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 105u, depth + 1u); else { c.pc = 0x00304A10u; return; } if (c.pc != 0x002EB88Cu) [[unlikely]] return; }
L_002EB88C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.budget -= 2;
L_002EB894:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 228u)));
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB8B8u); c.r[8].d[0] = c.r[30].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EB8B8u) [[unlikely]] return; }
L_002EB8B8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 300u)));  goto L_002EB8C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EBE28; } }
L_002EB8C8:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
L_002EB8D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x07000000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 24);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002EB8FC; } }
    c.r[2].d[0] = c.r[3].d[0] & 512ull;
    set32(c.r[2], c.r[2].w[0] >> 9);
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x18000000u);  goto L_002EB900; }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002EB8FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x18000000u);
    c.budget -= 1;
L_002EB900:
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 27);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);  if (t) { goto L_002EB9B0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 400u)));
    set32(c.r[22], 0u + 1u);
    c.r[23].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);  if (t) { goto L_002EB9A0; } }
L_002EB92C:
    set32(c.r[3], c.r[16].w[0] << 2);
    st64((c.r[29].w[0]), c.r[30].d[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[7].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xE0000000u);
    set32(c.r[25], ld32((c.r[25].w[0] + 260u)));
    c.r[11].d[0] = c.r[21].d[0] + 0ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] >> 29);
    c.r[3].d[0] = c.r[22].d[0] & c.r[3].d[0];
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.r[2].d[0] = c.r[22].d[0] & c.r[2].d[0];
    c.r[9].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 284u)));
    set32(c.r[10], ld32((c.r[2].w[0])));
    c.budget -= 23;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB988u); c.r[8].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EB988u) [[unlikely]] return; }
L_002EB988:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002EB998; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EBE28; } }
L_002EB998:
    set32(c.r[22], c.r[22].w[0] << 1);
    set32(c.r[23], c.r[23].w[0] + 1u);
    c.budget -= 2;
L_002EB9A0:
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[23].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { ld128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002EB92Cu | kUnwind; return; } goto L_002EB92C; }
L_002EB9B0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[4], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.budget -= 6;
    if (c.r[2].d[0] != c.r[4].d[0]) { set32(c.r[2], ld32((c.r[21].w[0])));  goto L_002EBA50; }
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 22);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EB9E8u); c.r[22].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0080(c, 208u, depth + 1u); else { c.pc = 0x003014E0u; return; } if (c.pc != 0x002EB9E8u) [[unlikely]] return; }
L_002EB9E8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002EB9FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[20].w[0])));  if (t) { goto L_002EBA0C; } }
L_002EB9FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBA04u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 105u, depth + 1u); else { c.pc = 0x00304A10u; return; } if (c.pc != 0x002EBA04u) [[unlikely]] return; }
L_002EBA04:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.budget -= 2;
L_002EBA0C:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[8], ld32((c.r[29].w[0] + 360u)));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.r[9].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 220u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBA34u); c.r[7].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EBA34u) [[unlikely]] return; }
L_002EBA34:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 300u)));  goto L_002EBA44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EBE28; } }
L_002EBA44:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 300u), c.r[2].w[0]);  if (t) { goto L_002EBB70; } }
L_002EBA50:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 4u)));  goto L_002EBB74; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 28442u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EBA74; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002EBA7C; } }
L_002EBA74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBA7Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EBA7Cu) [[unlikely]] return; }
L_002EBA7C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26974u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 292u), c.r[2].w[0]);  if (t) { goto L_002EBA98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002EBAA0; } }
L_002EBA98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBAA0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EBAA0u) [[unlikely]] return; }
L_002EBAA0:
    st32((c.r[29].w[0] + 288u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 292u);
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBAB4u); set32(c.r[6], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_006C(c, 510u, depth + 1u); else { c.pc = 0x002B3E20u; return; } if (c.pc != 0x002EBAB4u) [[unlikely]] return; }
L_002EBAB4:
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 288u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EBB14; } }
    set32(c.r[22], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBAE4u); set32(c.r[23], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EBAE4u) [[unlikely]] return; }
L_002EBAE4:
    set32(c.r[2], ld32((c.r[22].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBAF4u); st32((c.r[22].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EBAF4u) [[unlikely]] return; }
L_002EBAF4:
    set32(c.r[3], ld32((c.r[22].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EBB14; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBB14u); set32(c.r[5], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EBB14u) [[unlikely]] return; }
L_002EBB14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 292u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EBB70; } }
    set32(c.r[22], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBB40u); set32(c.r[23], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EBB40u) [[unlikely]] return; }
L_002EBB40:
    set32(c.r[2], ld32((c.r[22].w[0])));
    c.budget -= 1;
L_002EBB44:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBB50u); st32((c.r[22].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EBB50u) [[unlikely]] return; }
L_002EBB50:
    set32(c.r[3], ld32((c.r[22].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EBB70; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBB70u); set32(c.r[5], c.r[29].w[0] + 292u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EBB70u) [[unlikely]] return; }
L_002EBB70:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_002EBB74:
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 2048ull;
    set32(c.r[3], c.r[3].w[0] >> 11);
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 4u)));  goto L_002EBBF8; }
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBB94u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 208u, depth + 1u); else { c.pc = 0x003014E0u; return; } if (c.pc != 0x002EBB94u) [[unlikely]] return; }
L_002EBB94:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002EBBA8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[20].w[0])));  if (t) { goto L_002EBBB8; } }
L_002EBBA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBBB0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 105u, depth + 1u); else { c.pc = 0x00304A10u; return; } if (c.pc != 0x002EBBB0u) [[unlikely]] return; }
L_002EBBB0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.budget -= 2;
L_002EBBB8:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 232u)));
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBBDCu); c.r[8].d[0] = c.r[30].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EBBDCu) [[unlikely]] return; }
L_002EBBDC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 300u)));  goto L_002EBBEC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EBE28; } }
L_002EBBEC:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
L_002EBBF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[23], c.r[2].w[0] >> 20);
    c.budget -= 5;
    if (c.r[23].d[0] == 0ull) { set32(c.r[7], ld32((c.r[29].w[0] + 328u)));  goto L_002EBC94; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_002EBC84; } }
L_002EBC14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBC1Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 208u, depth + 1u); else { c.pc = 0x003014E0u; return; } if (c.pc != 0x002EBC1Cu) [[unlikely]] return; }
L_002EBC1C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002EBC30; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[20].w[0])));  if (t) { goto L_002EBC40; } }
L_002EBC30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBC38u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 105u, depth + 1u); else { c.pc = 0x00304A10u; return; } if (c.pc != 0x002EBC38u) [[unlikely]] return; }
L_002EBC38:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.budget -= 2;
L_002EBC40:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 256u)));
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBC68u); c.r[9].d[0] = c.r[30].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EBC68u) [[unlikely]] return; }
L_002EBC68:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 300u)));  goto L_002EBC78; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EBE28; } }
L_002EBC78:
    set32(c.r[22], c.r[22].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 300u), c.r[2].w[0]);
    c.budget -= 3;
L_002EBC84:
    c.r[2].d[0] = c.r[22].d[0] < c.r[23].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[22].w[0] + 13u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002EBC14u | kUnwind; return; } goto L_002EBC14; }
    set32(c.r[7], ld32((c.r[29].w[0] + 328u)));
    c.budget -= 1;
L_002EBC94:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 344u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 352u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[7].d[0]);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[3].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[30].d[0]);
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[9], ld32((c.r[29].w[0] + 400u)));
    set32(c.r[10], ld32((c.r[29].w[0] + 312u)));
    set32(c.r[11], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 248u)));
    c.budget -= 18;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBCDCu); set32(c.r[7], c.r[29].w[0] + 300u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EBCDCu) [[unlikely]] return; }
L_002EBCDC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 8u)));  goto L_002EBCEC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EBE28; } }
L_002EBCEC:
    c.r[2].d[0] = c.r[2].d[0] & 24ull;
    set32(c.r[2], c.r[2].w[0] >> 3);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);  if (t) { goto L_002EBD98; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 400u)));
    set32(c.r[22], 0u + 1u);
    c.r[23].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);  if (t) { goto L_002EBD88; } }
L_002EBD18:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[8], ld32((c.r[18].w[0] + 8u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    c.r[11].d[0] = c.r[21].d[0] + 0ull;
    c.r[2].d[0] = c.r[8].d[0] & 224ull;
    st64((c.r[29].w[0]), c.r[30].d[0]);
    set32(c.r[3], c.r[2].w[0] >> 5);
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[2].d[0] = c.r[8].d[0] & 1792ull;
    c.r[3].d[0] = c.r[22].d[0] & c.r[3].d[0];
    set32(c.r[2], c.r[2].w[0] >> 8);
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.r[2].d[0] = c.r[22].d[0] & c.r[2].d[0];
    set32(c.r[25], ld32((c.r[25].w[0] + 264u)));
    c.r[9].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 284u)));
    set32(c.r[10], ld32((c.r[2].w[0])));
    c.budget -= 22;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBD70u); c.r[8].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EBD70u) [[unlikely]] return; }
L_002EBD70:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002EBD80; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EBE28; } }
L_002EBD80:
    set32(c.r[22], c.r[22].w[0] << 1);
    set32(c.r[23], c.r[23].w[0] + 1u);
    c.budget -= 2;
L_002EBD88:
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[23].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002EBD18u | kUnwind; return; } goto L_002EBD18; }
L_002EBD98:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 8192ull;
    set32(c.r[3], c.r[3].w[0] >> 13);
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 300u)));  goto L_002EBE1C; }
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBDBCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0080(c, 208u, depth + 1u); else { c.pc = 0x003014E0u; return; } if (c.pc != 0x002EBDBCu) [[unlikely]] return; }
L_002EBDBC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_002EBDD0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[25], ld32((c.r[20].w[0])));  if (t) { goto L_002EBDE0; } }
L_002EBDD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBDD8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0081(c, 105u, depth + 1u); else { c.pc = 0x00304A10u; return; } if (c.pc != 0x002EBDD8u) [[unlikely]] return; }
L_002EBDD8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.budget -= 2;
L_002EBDE0:
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[29].w[0] + 336u)));
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 236u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBE00u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EBE00u) [[unlikely]] return; }
L_002EBE00:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 300u)));  goto L_002EBE10; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_002EBE28; } }
L_002EBE10:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 300u)));
    c.budget -= 3;
L_002EBE1C:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 384u)));
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 3;
L_002EBE28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_002EBE60:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[1].d[0] = c.r[10].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[30], ld32((c.r[29].w[0] + 192u)));
    st32((c.r[29].w[0] + 172u), c.r[8].w[0]);
    c.budget -= 21;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[30].w[0]), 0u);  if (t) { goto L_002EBF08; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[10].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 28672u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002E8000u < 16384u) { entry = entries_007A[(t - 0x002E8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002EBED0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002EBF10; } }
L_002EBED8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002EBF10; } }
L_002EBEE0:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 288u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBEF0u); set32(c.r[6], c.r[29].w[0] + 172u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EBEF0u) [[unlikely]] return; }
L_002EBEF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 172u)));  if (t) { goto L_002EBF10; } }
L_002EBEF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_002EBF10; } }
L_002EBF00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 172u)));  if (t) { goto L_002EBF10; } }
L_002EBF08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_007B(c, 19u, depth); } }
L_002EBF10:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  [[clang::musttail]] return unit_007B(c, 19u, depth); }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_007B(c, 18u, depth); } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 26955u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EBF3C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002EBF44; } }
L_002EBF3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBF44u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EBF44u) [[unlikely]] return; }
L_002EBF44:
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBF5Cu); set32(c.r[5], c.r[29].w[0] + 188u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002EBF5Cu) [[unlikely]] return; }
L_002EBF5C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[19].w[0])));  goto L_002EBFC0; }
    set32(c.r[21], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBF8Cu); set32(c.r[22], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002EBF8Cu) [[unlikely]] return; }
L_002EBF8C:
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBF9Cu); st32((c.r[21].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002EBF9Cu) [[unlikely]] return; }
L_002EBF9C:
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EBFBC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBFBCu); set32(c.r[5], c.r[29].w[0] + 188u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002EBFBCu) [[unlikely]] return; }
L_002EBFBC:
    set32(c.r[4], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_002EBFC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBFC8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_006C(c, 283u, depth + 1u); else { c.pc = 0x002B20B0u; return; } if (c.pc != 0x002EBFC8u) [[unlikely]] return; }
L_002EBFC8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 27058u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EBFE4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_002EBFEC; } }
L_002EBFE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EBFECu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x002EBFECu) [[unlikely]] return; }
L_002EBFEC:
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[21], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC000u); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_006D(c, 44u, depth + 1u); else { c.pc = 0x002B4360u; return; } if (c.pc != 0x002EC000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_007B(c, 1u, depth);
}

}
