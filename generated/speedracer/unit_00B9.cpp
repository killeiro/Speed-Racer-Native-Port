#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00B9[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0,
    0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0,
    0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0,
    35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0,
    0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0,
    44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0,
    0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 54,
    0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0,
    72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0,
    80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 85,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0,
    0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 94, 0, 0, 0, 95, 0, 0, 96, 0, 0, 97, 0, 0, 0,
    0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0,
    102, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0,
    106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0,
    0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0,
    0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118,
    0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 123,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0,
    0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 135, 0, 0, 0, 0, 136, 0,
    0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0,
    0, 141, 0, 0, 142, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 149,
    0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0,
    0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162,
    0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0,
    0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 170,
    0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0,
    175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0,
    0, 0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0,
    0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 194, 0, 195, 0, 196, 0,
    0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0,
    0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0,
    0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 211, 0, 0, 0, 0,
    0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0,
    0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0,
    0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0,
    248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 266, 0, 267, 0, 0,
    0, 0, 0, 0, 268, 0, 269, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 272, 0, 0, 273, 0, 274, 0, 0, 275, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0,
    284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0,
    0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0,
    0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 304, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 312, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0,
    0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 320, 0, 0, 321, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0,
    0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0,
    0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 335, 0, 0, 336, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0,
    0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 343, 0, 0, 344, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 0,
    0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 351, 0, 0, 352, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 0,
    0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 367,
    0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    385, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0,
    0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0,
    0, 398, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    406, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0,
    0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 411,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0, 0,
    427, 0, 0, 0, 428, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 433, 0, 0, 0,
    434, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 437,
    0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 441, 0, 0, 442, 0, 0,
    443, 0, 0, 444, 0, 0, 445, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0,
    448, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0,
    0, 454, 0, 0, 0, 0, 0, 0, 455, 0, 456, 0, 0, 457, 0, 458, 0, 0, 0, 459, 0, 460, 0, 0, 0, 0, 0, 0, 0, 461, 0, 462,
    0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 464, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 467, 0, 468, 0,
};

void unit_00B9(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003E4000;
    case 2u: goto L_003E402C;
    case 3u: goto L_003E403C;
    case 4u: goto L_003E4078;
    case 5u: goto L_003E4088;
    case 6u: goto L_003E40A8;
    case 7u: goto L_003E40CC;
    case 8u: goto L_003E40E4;
    case 9u: goto L_003E4104;
    case 10u: goto L_003E4114;
    case 11u: goto L_003E4130;
    case 12u: goto L_003E4144;
    case 13u: goto L_003E4148;
    case 14u: goto L_003E4154;
    case 15u: goto L_003E4180;
    case 16u: goto L_003E4190;
    case 17u: goto L_003E41B0;
    case 18u: goto L_003E41FC;
    case 19u: goto L_003E4248;
    case 20u: goto L_003E4294;
    case 21u: goto L_003E42E0;
    case 22u: goto L_003E4354;
    case 23u: goto L_003E4364;
    case 24u: goto L_003E43A0;
    case 25u: goto L_003E43B0;
    case 26u: goto L_003E43D0;
    case 27u: goto L_003E4414;
    case 28u: goto L_003E4430;
    case 29u: goto L_003E4444;
    case 30u: goto L_003E44C0;
    case 31u: goto L_003E44F0;
    case 32u: goto L_003E4534;
    case 33u: goto L_003E4544;
    case 34u: goto L_003E4560;
    case 35u: goto L_003E4580;
    case 36u: goto L_003E4590;
    case 37u: goto L_003E45AC;
    case 38u: goto L_003E45E4;
    case 39u: goto L_003E45F4;
    case 40u: goto L_003E4614;
    case 41u: goto L_003E4634;
    case 42u: goto L_003E4644;
    case 43u: goto L_003E4660;
    case 44u: goto L_003E4680;
    case 45u: goto L_003E4690;
    case 46u: goto L_003E46AC;
    case 47u: goto L_003E46C8;
    case 48u: goto L_003E46D8;
    case 49u: goto L_003E46F4;
    case 50u: goto L_003E470C;
    case 51u: goto L_003E4730;
    case 52u: goto L_003E4758;
    case 53u: goto L_003E4768;
    case 54u: goto L_003E477C;
    case 55u: goto L_003E478C;
    case 56u: goto L_003E47A0;
    case 57u: goto L_003E47B0;
    case 58u: goto L_003E47D4;
    case 59u: goto L_003E47E4;
    case 60u: goto L_003E4810;
    case 61u: goto L_003E4820;
    case 62u: goto L_003E4840;
    case 63u: goto L_003E4868;
    case 64u: goto L_003E4894;
    case 65u: goto L_003E48A4;
    case 66u: goto L_003E48C4;
    case 67u: goto L_003E48E0;
    case 68u: goto L_003E490C;
    case 69u: goto L_003E4938;
    case 70u: goto L_003E4948;
    case 71u: goto L_003E4968;
    case 72u: goto L_003E4980;
    case 73u: goto L_003E49C8;
    case 74u: goto L_003E49E4;
    case 75u: goto L_003E4A14;
    case 76u: goto L_003E4A24;
    case 77u: goto L_003E4A44;
    case 78u: goto L_003E4A50;
    case 79u: goto L_003E4A5C;
    case 80u: goto L_003E4A80;
    case 81u: goto L_003E4AB0;
    case 82u: goto L_003E4ACC;
    case 83u: goto L_003E4ADC;
    case 84u: goto L_003E4AEC;
    case 85u: goto L_003E4AFC;
    case 86u: goto L_003E4B2C;
    case 87u: goto L_003E4B38;
    case 88u: goto L_003E4B4C;
    case 89u: goto L_003E4B78;
    case 90u: goto L_003E4B84;
    case 91u: goto L_003E4B94;
    case 92u: goto L_003E4BB0;
    case 93u: goto L_003E4BC0;
    case 94u: goto L_003E4BC8;
    case 95u: goto L_003E4BD8;
    case 96u: goto L_003E4BE4;
    case 97u: goto L_003E4BF0;
    case 98u: goto L_003E4C04;
    case 99u: goto L_003E4C30;
    case 100u: goto L_003E4C40;
    case 101u: goto L_003E4C60;
    case 102u: goto L_003E4C80;
    case 103u: goto L_003E4C8C;
    case 104u: goto L_003E4CE0;
    case 105u: goto L_003E4CF0;
    case 106u: goto L_003E4D00;
    case 107u: goto L_003E4D20;
    case 108u: goto L_003E4D58;
    case 109u: goto L_003E4D68;
    case 110u: goto L_003E4D84;
    case 111u: goto L_003E4D98;
    case 112u: goto L_003E4DA8;
    case 113u: goto L_003E4DD4;
    case 114u: goto L_003E4DE4;
    case 115u: goto L_003E4E04;
    case 116u: goto L_003E4E10;
    case 117u: goto L_003E4E6C;
    case 118u: goto L_003E4E7C;
    case 119u: goto L_003E4E9C;
    case 120u: goto L_003E4EC0;
    case 121u: goto L_003E4ED0;
    case 122u: goto L_003E4EF0;
    case 123u: goto L_003E4EFC;
    case 124u: goto L_003E4F58;
    case 125u: goto L_003E4F68;
    case 126u: goto L_003E4F88;
    case 127u: goto L_003E4F94;
    case 128u: goto L_003E4FB0;
    case 129u: goto L_003E4FC0;
    case 130u: goto L_003E4FD0;
    case 131u: goto L_003E500C;
    case 132u: goto L_003E5034;
    case 133u: goto L_003E5048;
    case 134u: goto L_003E505C;
    case 135u: goto L_003E5064;
    case 136u: goto L_003E5078;
    case 137u: goto L_003E5094;
    case 138u: goto L_003E50C8;
    case 139u: goto L_003E50E0;
    case 140u: goto L_003E50EC;
    case 141u: goto L_003E5104;
    case 142u: goto L_003E5110;
    case 143u: goto L_003E5124;
    case 144u: goto L_003E512C;
    case 145u: goto L_003E513C;
    case 146u: goto L_003E514C;
    case 147u: goto L_003E515C;
    case 148u: goto L_003E516C;
    case 149u: goto L_003E517C;
    case 150u: goto L_003E519C;
    case 151u: goto L_003E51AC;
    case 152u: goto L_003E51BC;
    case 153u: goto L_003E51CC;
    case 154u: goto L_003E51DC;
    case 155u: goto L_003E51EC;
    case 156u: goto L_003E520C;
    case 157u: goto L_003E521C;
    case 158u: goto L_003E522C;
    case 159u: goto L_003E523C;
    case 160u: goto L_003E524C;
    case 161u: goto L_003E525C;
    case 162u: goto L_003E527C;
    case 163u: goto L_003E5284;
    case 164u: goto L_003E52EC;
    case 165u: goto L_003E5310;
    case 166u: goto L_003E53B4;
    case 167u: goto L_003E53C8;
    case 168u: goto L_003E53E4;
    case 169u: goto L_003E53F0;
    case 170u: goto L_003E53FC;
    case 171u: goto L_003E540C;
    case 172u: goto L_003E5430;
    case 173u: goto L_003E5460;
    case 174u: goto L_003E5470;
    case 175u: goto L_003E5480;
    case 176u: goto L_003E54A0;
    case 177u: goto L_003E54D0;
    case 178u: goto L_003E54F0;
    case 179u: goto L_003E5520;
    case 180u: goto L_003E5540;
    case 181u: goto L_003E5564;
    case 182u: goto L_003E5578;
    case 183u: goto L_003E5588;
    case 184u: goto L_003E5590;
    case 185u: goto L_003E55AC;
    case 186u: goto L_003E55C0;
    case 187u: goto L_003E55D4;
    case 188u: goto L_003E55E8;
    case 189u: goto L_003E55F4;
    case 190u: goto L_003E5610;
    case 191u: goto L_003E5620;
    case 192u: goto L_003E564C;
    case 193u: goto L_003E5658;
    case 194u: goto L_003E5668;
    case 195u: goto L_003E5670;
    case 196u: goto L_003E5678;
    case 197u: goto L_003E568C;
    case 198u: goto L_003E56B4;
    case 199u: goto L_003E56C4;
    case 200u: goto L_003E56E0;
    case 201u: goto L_003E56F4;
    case 202u: goto L_003E5704;
    case 203u: goto L_003E571C;
    case 204u: goto L_003E5738;
    case 205u: goto L_003E5754;
    case 206u: goto L_003E5760;
    case 207u: goto L_003E5770;
    case 208u: goto L_003E5790;
    case 209u: goto L_003E57D0;
    case 210u: goto L_003E57E4;
    case 211u: goto L_003E57EC;
    case 212u: goto L_003E5808;
    case 213u: goto L_003E5814;
    case 214u: goto L_003E582C;
    case 215u: goto L_003E584C;
    case 216u: goto L_003E585C;
    case 217u: goto L_003E5878;
    case 218u: goto L_003E5898;
    case 219u: goto L_003E58A8;
    case 220u: goto L_003E58C4;
    case 221u: goto L_003E58D0;
    case 222u: goto L_003E58E8;
    case 223u: goto L_003E5910;
    case 224u: goto L_003E5930;
    case 225u: goto L_003E5954;
    case 226u: goto L_003E5964;
    case 227u: goto L_003E5974;
    case 228u: goto L_003E5984;
    case 229u: goto L_003E59BC;
    case 230u: goto L_003E59C8;
    case 231u: goto L_003E59D8;
    case 232u: goto L_003E5A00;
    case 233u: goto L_003E5A20;
    case 234u: goto L_003E5A44;
    case 235u: goto L_003E5A54;
    case 236u: goto L_003E5A68;
    case 237u: goto L_003E5A78;
    case 238u: goto L_003E5AA4;
    case 239u: goto L_003E5AC0;
    case 240u: goto L_003E5B0C;
    case 241u: goto L_003E5B20;
    case 242u: goto L_003E5B30;
    case 243u: goto L_003E5B40;
    case 244u: goto L_003E5BA0;
    case 245u: goto L_003E5C00;
    case 246u: goto L_003E5C30;
    case 247u: goto L_003E5C60;
    case 248u: goto L_003E5C80;
    case 249u: goto L_003E5C94;
    case 250u: goto L_003E5CB0;
    case 251u: goto L_003E5CC0;
    case 252u: goto L_003E5CD0;
    case 253u: goto L_003E5D0C;
    case 254u: goto L_003E5D24;
    case 255u: goto L_003E5D40;
    case 256u: goto L_003E5D8C;
    case 257u: goto L_003E5DA0;
    case 258u: goto L_003E5DC0;
    case 259u: goto L_003E5E00;
    case 260u: goto L_003E5E5C;
    case 261u: goto L_003E5E6C;
    case 262u: goto L_003E5EDC;
    case 263u: goto L_003E5F1C;
    case 264u: goto L_003E5F50;
    case 265u: goto L_003E5F60;
    case 266u: goto L_003E5F6C;
    case 267u: goto L_003E5F74;
    case 268u: goto L_003E5F90;
    case 269u: goto L_003E5F98;
    case 270u: goto L_003E5FB8;
    case 271u: goto L_003E5FC4;
    case 272u: goto L_003E5FD4;
    case 273u: goto L_003E5FE0;
    case 274u: goto L_003E5FE8;
    case 275u: goto L_003E5FF4;
    case 276u: goto L_003E6060;
    case 277u: goto L_003E6094;
    case 278u: goto L_003E60A4;
    case 279u: goto L_003E6110;
    case 280u: goto L_003E6148;
    case 281u: goto L_003E6198;
    case 282u: goto L_003E61C0;
    case 283u: goto L_003E61F0;
    case 284u: goto L_003E6200;
    case 285u: goto L_003E6240;
    case 286u: goto L_003E6250;
    case 287u: goto L_003E62F0;
    case 288u: goto L_003E6310;
    case 289u: goto L_003E63CC;
    case 290u: goto L_003E63EC;
    case 291u: goto L_003E6464;
    case 292u: goto L_003E6484;
    case 293u: goto L_003E6538;
    case 294u: goto L_003E6560;
    case 295u: goto L_003E6578;
    case 296u: goto L_003E65C4;
    case 297u: goto L_003E65D0;
    case 298u: goto L_003E65FC;
    case 299u: goto L_003E662C;
    case 300u: goto L_003E6640;
    case 301u: goto L_003E6660;
    case 302u: goto L_003E6678;
    case 303u: goto L_003E66C4;
    case 304u: goto L_003E66D0;
    case 305u: goto L_003E66DC;
    case 306u: goto L_003E6708;
    case 307u: goto L_003E6738;
    case 308u: goto L_003E674C;
    case 309u: goto L_003E6760;
    case 310u: goto L_003E6778;
    case 311u: goto L_003E67C4;
    case 312u: goto L_003E67D0;
    case 313u: goto L_003E67DC;
    case 314u: goto L_003E6814;
    case 315u: goto L_003E6844;
    case 316u: goto L_003E6858;
    case 317u: goto L_003E6870;
    case 318u: goto L_003E6888;
    case 319u: goto L_003E68D4;
    case 320u: goto L_003E68E0;
    case 321u: goto L_003E68EC;
    case 322u: goto L_003E6918;
    case 323u: goto L_003E6948;
    case 324u: goto L_003E695C;
    case 325u: goto L_003E6970;
    case 326u: goto L_003E6988;
    case 327u: goto L_003E69D4;
    case 328u: goto L_003E69E0;
    case 329u: goto L_003E6A0C;
    case 330u: goto L_003E6A3C;
    case 331u: goto L_003E6A50;
    case 332u: goto L_003E6A70;
    case 333u: goto L_003E6A88;
    case 334u: goto L_003E6AD4;
    case 335u: goto L_003E6AE0;
    case 336u: goto L_003E6AEC;
    case 337u: goto L_003E6B18;
    case 338u: goto L_003E6B48;
    case 339u: goto L_003E6B5C;
    case 340u: goto L_003E6B70;
    case 341u: goto L_003E6B88;
    case 342u: goto L_003E6BD4;
    case 343u: goto L_003E6BE0;
    case 344u: goto L_003E6BEC;
    case 345u: goto L_003E6C18;
    case 346u: goto L_003E6C48;
    case 347u: goto L_003E6C5C;
    case 348u: goto L_003E6C70;
    case 349u: goto L_003E6C88;
    case 350u: goto L_003E6CD4;
    case 351u: goto L_003E6CE0;
    case 352u: goto L_003E6CEC;
    case 353u: goto L_003E6D18;
    case 354u: goto L_003E6D48;
    case 355u: goto L_003E6D5C;
    case 356u: goto L_003E6D70;
    case 357u: goto L_003E6D88;
    case 358u: goto L_003E6DD4;
    case 359u: goto L_003E6DE0;
    case 360u: goto L_003E6E0C;
    case 361u: goto L_003E6E3C;
    case 362u: goto L_003E6E50;
    case 363u: goto L_003E6E70;
    case 364u: goto L_003E6EA4;
    case 365u: goto L_003E6ED0;
    case 366u: goto L_003E6EEC;
    case 367u: goto L_003E6EFC;
    case 368u: goto L_003E6F08;
    case 369u: goto L_003E6F28;
    case 370u: goto L_003E6F40;
    case 371u: goto L_003E6F64;
    case 372u: goto L_003E7018;
    case 373u: goto L_003E702C;
    case 374u: goto L_003E705C;
    case 375u: goto L_003E70A0;
    case 376u: goto L_003E7140;
    case 377u: goto L_003E7154;
    case 378u: goto L_003E71A4;
    case 379u: goto L_003E71B8;
    case 380u: goto L_003E71C8;
    case 381u: goto L_003E71D8;
    case 382u: goto L_003E7200;
    case 383u: goto L_003E724C;
    case 384u: goto L_003E7260;
    case 385u: goto L_003E7300;
    case 386u: goto L_003E7324;
    case 387u: goto L_003E7338;
    case 388u: goto L_003E73F0;
    case 389u: goto L_003E7414;
    case 390u: goto L_003E7428;
    case 391u: goto L_003E7490;
    case 392u: goto L_003E74B4;
    case 393u: goto L_003E74C8;
    case 394u: goto L_003E7520;
    case 395u: goto L_003E7544;
    case 396u: goto L_003E7558;
    case 397u: goto L_003E75E0;
    case 398u: goto L_003E7604;
    case 399u: goto L_003E7618;
    case 400u: goto L_003E76A0;
    case 401u: goto L_003E76C4;
    case 402u: goto L_003E76D8;
    case 403u: goto L_003E7730;
    case 404u: goto L_003E7754;
    case 405u: goto L_003E7768;
    case 406u: goto L_003E7800;
    case 407u: goto L_003E781C;
    case 408u: goto L_003E7870;
    case 409u: goto L_003E788C;
    case 410u: goto L_003E78E0;
    case 411u: goto L_003E78FC;
    case 412u: goto L_003E7950;
    case 413u: goto L_003E796C;
    case 414u: goto L_003E79C0;
    case 415u: goto L_003E79DC;
    case 416u: goto L_003E7A30;
    case 417u: goto L_003E7A4C;
    case 418u: goto L_003E7AA0;
    case 419u: goto L_003E7ABC;
    case 420u: goto L_003E7B10;
    case 421u: goto L_003E7B2C;
    case 422u: goto L_003E7B80;
    case 423u: goto L_003E7C40;
    case 424u: goto L_003E7C50;
    case 425u: goto L_003E7C60;
    case 426u: goto L_003E7C70;
    case 427u: goto L_003E7C80;
    case 428u: goto L_003E7C90;
    case 429u: goto L_003E7CA0;
    case 430u: goto L_003E7CB0;
    case 431u: goto L_003E7CC0;
    case 432u: goto L_003E7CDC;
    case 433u: goto L_003E7CF0;
    case 434u: goto L_003E7D00;
    case 435u: goto L_003E7D10;
    case 436u: goto L_003E7D64;
    case 437u: goto L_003E7D7C;
    case 438u: goto L_003E7DA0;
    case 439u: goto L_003E7DBC;
    case 440u: goto L_003E7DD0;
    case 441u: goto L_003E7DE8;
    case 442u: goto L_003E7DF4;
    case 443u: goto L_003E7E00;
    case 444u: goto L_003E7E0C;
    case 445u: goto L_003E7E18;
    case 446u: goto L_003E7E30;
    case 447u: goto L_003E7E6C;
    case 448u: goto L_003E7E80;
    case 449u: goto L_003E7E8C;
    case 450u: goto L_003E7EAC;
    case 451u: goto L_003E7EBC;
    case 452u: goto L_003E7ED0;
    case 453u: goto L_003E7EEC;
    case 454u: goto L_003E7F04;
    case 455u: goto L_003E7F20;
    case 456u: goto L_003E7F28;
    case 457u: goto L_003E7F34;
    case 458u: goto L_003E7F3C;
    case 459u: goto L_003E7F4C;
    case 460u: goto L_003E7F54;
    case 461u: goto L_003E7F74;
    case 462u: goto L_003E7F7C;
    case 463u: goto L_003E7F90;
    case 464u: goto L_003E7FAC;
    case 465u: goto L_003E7FB4;
    case 466u: goto L_003E7FE4;
    case 467u: goto L_003E7FF0;
    case 468u: goto L_003E7FF8;
    default: bad_entry(c, 0x003E4000u); return;
    }
L_003E4000:
    st32((c.r[19].w[0] + 44u), c.f[0]);
    c.f[0] = fp::min(c.f[0], c.f[1]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 10121u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[19].w[0] + 44u), c.f[0]);  if (t) { goto L_003E4024; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_003E402C; } }
L_003E4024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E402Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x003E402Cu) [[unlikely]] return; }
L_003E402C:
    st32((c.r[29].w[0] + 348u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E403Cu); set32(c.r[5], c.r[29].w[0] + 348u);  if (depth < kMaxDepth) unit_006F(c, 120u, depth + 1u); else { c.pc = 0x002BCF90u; return; } if (c.pc != 0x003E403Cu) [[unlikely]] return; }
L_003E403C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003E4048; }
    c.r[2].d[0] = ld8((c.r[2].w[0] + 12u));
    c.budget -= 1;
L_003E4048:
    st8((c.r[19].w[0] + 52u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 348u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003E40A8; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4078u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E4078u) [[unlikely]] return; }
L_003E4078:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4088u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E4088u) [[unlikely]] return; }
L_003E4088:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003E40A8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E40A8u); set32(c.r[5], c.r[29].w[0] + 348u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x003E40A8u) [[unlikely]] return; }
L_003E40A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 10157u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003E40C4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_003E40CC; } }
L_003E40C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E40CCu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x003E40CCu) [[unlikely]] return; }
L_003E40CC:
    st32((c.r[29].w[0] + 344u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E40E4u); set32(c.r[5], c.r[29].w[0] + 344u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E40E4u) [[unlikely]] return; }
L_003E40E4:
    set32(c.r[20], ld32((c.r[19].w[0] + 4u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[20].d[0] == c.r[16].d[0];  if (t) { goto L_003E4154; } }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { st32((c.r[19].w[0] + 4u), c.r[16].w[0]);  goto L_003E4134; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4104u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E4104u) [[unlikely]] return; }
L_003E4104:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4114u); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E4114u) [[unlikely]] return; }
L_003E4114:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E4130; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4130u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E4130u) [[unlikely]] return; }
L_003E4130:
    st32((c.r[19].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 1;
L_003E4134:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003E4154; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4144u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E4144u) [[unlikely]] return; }
L_003E4144:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_003E4148:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4154u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E4154u) [[unlikely]] return; }
L_003E4154:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 344u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003E41B0; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4180u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E4180u) [[unlikely]] return; }
L_003E4180:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4190u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E4190u) [[unlikely]] return; }
L_003E4190:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003E41B0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E41B0u); set32(c.r[5], c.r[29].w[0] + 344u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x003E41B0u) [[unlikely]] return; }
L_003E41B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[2].w[0] + 31392u));
    c.r[3].d[0] = ld64((c.r[3].w[0] + 31384u));
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 288u), c.r[3].d[0]);
    set32(c.r[2], c.r[2].w[0] + 22432u);
    st32((c.r[29].w[0] + 296u), c.f[0]);
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 288u));
    c.f[0] = ld32((c.r[29].w[0] + 296u));
    st64((c.r[29].w[0] + 208u), c.r[2].d[0]);
    st32((c.r[29].w[0] + 216u), c.f[0]);
    st32((c.r[29].w[0] + 220u), c.r[19].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E41FCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E41FCu) [[unlikely]] return; }
L_003E41FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[2].w[0] + 31408u));
    c.r[3].d[0] = ld64((c.r[3].w[0] + 31400u));
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 272u), c.r[3].d[0]);
    set32(c.r[2], c.r[2].w[0] + 22432u);
    st32((c.r[29].w[0] + 280u), c.f[0]);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 272u));
    c.f[0] = ld32((c.r[29].w[0] + 280u));
    st64((c.r[29].w[0] + 176u), c.r[2].d[0]);
    st32((c.r[29].w[0] + 184u), c.f[0]);
    st32((c.r[29].w[0] + 188u), c.r[19].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4248u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E4248u) [[unlikely]] return; }
L_003E4248:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[2].w[0] + 31424u));
    c.r[3].d[0] = ld64((c.r[3].w[0] + 31416u));
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 256u), c.r[3].d[0]);
    set32(c.r[2], c.r[2].w[0] + 22432u);
    st32((c.r[29].w[0] + 264u), c.f[0]);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 256u));
    c.f[0] = ld32((c.r[29].w[0] + 264u));
    st64((c.r[29].w[0] + 144u), c.r[2].d[0]);
    st32((c.r[29].w[0] + 152u), c.f[0]);
    st32((c.r[29].w[0] + 156u), c.r[19].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4294u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E4294u) [[unlikely]] return; }
L_003E4294:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[0] = ld32((c.r[2].w[0] + 31440u));
    c.r[3].d[0] = ld64((c.r[3].w[0] + 31432u));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 240u), c.r[3].d[0]);
    set32(c.r[2], c.r[2].w[0] + 22416u);
    st32((c.r[29].w[0] + 248u), c.f[0]);
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 240u));
    c.f[0] = ld32((c.r[29].w[0] + 248u));
    st64((c.r[29].w[0] + 112u), c.r[2].d[0]);
    st32((c.r[29].w[0] + 120u), c.f[0]);
    st32((c.r[29].w[0] + 124u), c.r[19].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 19;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E42E0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E42E0u) [[unlikely]] return; }
L_003E42E0:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[18].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 196u));
    c.r[3].d[0] = c.r[3].d[0] & 65533ull;
    st16((c.r[18].w[0] + 196u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_003E4404; }
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 26896u)));  goto L_003E431C; }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E4404; } }
L_003E431C:
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 188u)));
    c.budget -= 5;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[19].w[0] + 24u)));  goto L_003E43E4; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 10176u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003E434C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_003E4354; } }
L_003E434C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4354u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x003E4354u) [[unlikely]] return; }
L_003E4354:
    st32((c.r[29].w[0] + 340u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4364u); set32(c.r[5], c.r[29].w[0] + 340u);  if (depth < kMaxDepth) unit_006F(c, 120u, depth + 1u); else { c.pc = 0x002BCF90u; return; } if (c.pc != 0x003E4364u) [[unlikely]] return; }
L_003E4364:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_003E4370; }
    c.r[3].d[0] = ld8((c.r[2].w[0] + 12u));
    c.budget -= 1;
L_003E4370:
    c.r[18].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 340u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003E43D0; } }
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[16], c.r[4].w[0] - 8u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E43A0u); set32(c.r[20], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E43A0u) [[unlikely]] return; }
L_003E43A0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E43B0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E43B0u) [[unlikely]] return; }
L_003E43B0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003E43D0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E43D0u); set32(c.r[5], c.r[29].w[0] + 340u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x003E43D0u) [[unlikely]] return; }
L_003E43D0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003E43E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003E4404; } }
L_003E43E0:
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 1;
L_003E43E4:
    set32(c.r[3], ld32((c.r[3].w[0] + 364u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[3].d[0] & 255ull;  goto L_003E4404; }
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 364u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 4;
L_003E4404:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_003E44C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4414u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 355u, depth + 1u); else { c.pc = 0x003E29A0u; return; } if (c.pc != 0x003E4414u) [[unlikely]] return; }
L_003E4414:
    c.r[7].d[0] = ld8((c.r[19].w[0] + 53u));
    c.budget -= 3;
    if (c.r[7].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 48u)));  goto L_003E4438; }
    set32(c.r[4], ld32((c.r[19].w[0] + 48u)));
    set32(c.r[5], c.r[19].w[0] + 36u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4430u); set32(c.r[6], c.r[19].w[0] + 24u);  if (depth < kMaxDepth) unit_00BD(c, 407u, depth + 1u); else { c.pc = 0x003F7950u; return; } if (c.pc != 0x003E4430u) [[unlikely]] return; }
L_003E4430:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[19].w[0] + 53u));  if (t) { goto L_003E4448; } }
L_003E4438:
    set32(c.r[5], c.r[19].w[0] + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4444u); set32(c.r[6], c.r[19].w[0] + 36u);  if (depth < kMaxDepth) unit_00BD(c, 407u, depth + 1u); else { c.pc = 0x003F7950u; return; } if (c.pc != 0x003E4444u) [[unlikely]] return; }
L_003E4444:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 53u));
    c.budget -= 1;
L_003E4448:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[10].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_003E445C; }
    c.r[10].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[10].w[0] - 10111u);  if (t) { goto L_003E4460; } }
L_003E445C:
    set32(c.r[10], c.r[10].w[0] - 10103u);
    c.budget -= 1;
L_003E4460:
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 328u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[9].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_003E4480; }
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[9], c.r[9].w[0] - 10111u);  if (t) { goto L_003E4484; } }
L_003E4480:
    set32(c.r[9], c.r[9].w[0] - 10103u);
    c.budget -= 1;
L_003E4484:
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[3].w[0] + 328u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_003E44A4; }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] - 10111u);  if (t) { goto L_003E44A8; } }
L_003E44A4:
    set32(c.r[8], c.r[8].w[0] - 10103u);
    c.budget -= 1;
L_003E44A8:
    set32(c.r[7], ld32((c.r[17].w[0] + 8u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 8192u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E44C0u); set32(c.r[6], c.r[6].w[0] - 10095u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003E44C0u) [[unlikely]] return; }
L_003E44C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_003E44C4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 352u);  c.pc = t; return; }
L_003E44F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E470C; } }
    set32(c.r[2], c.r[17].w[0] + 48u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 20u);  goto L_003E4564; }
    set32(c.r[18], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003E4560; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4534u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E4534u) [[unlikely]] return; }
L_003E4534:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4544u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E4544u) [[unlikely]] return; }
L_003E4544:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E4560; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4560u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E4560u) [[unlikely]] return; }
L_003E4560:
    set32(c.r[2], c.r[17].w[0] + 20u);
    c.budget -= 1;
L_003E4564:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 12u);  goto L_003E45B0; }
    set32(c.r[18], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003E45AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4580u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E4580u) [[unlikely]] return; }
L_003E4580:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4590u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E4590u) [[unlikely]] return; }
L_003E4590:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E45AC; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E45ACu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E45ACu) [[unlikely]] return; }
L_003E45AC:
    set32(c.r[2], c.r[17].w[0] + 12u);
    c.budget -= 1;
L_003E45B0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 8u);  goto L_003E4618; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003E4614; } }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E45E4u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E45E4u) [[unlikely]] return; }
L_003E45E4:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E45F4u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E45F4u) [[unlikely]] return; }
L_003E45F4:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003E4614; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4614u); set32(c.r[5], c.r[17].w[0] + 12u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x003E4614u) [[unlikely]] return; }
L_003E4614:
    set32(c.r[2], c.r[17].w[0] + 8u);
    c.budget -= 1;
L_003E4618:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 4u);  goto L_003E4664; }
    set32(c.r[18], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003E4660; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4634u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E4634u) [[unlikely]] return; }
L_003E4634:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4644u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E4644u) [[unlikely]] return; }
L_003E4644:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E4660; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4660u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E4660u) [[unlikely]] return; }
L_003E4660:
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_003E4664:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E46AC; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003E46AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4680u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E4680u) [[unlikely]] return; }
L_003E4680:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4690u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E4690u) [[unlikely]] return; }
L_003E4690:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E46AC; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E46ACu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E46ACu) [[unlikely]] return; }
L_003E46AC:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_003E46F8; }
    set32(c.r[18], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003E46F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E46C8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E46C8u) [[unlikely]] return; }
L_003E46C8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E46D8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E46D8u) [[unlikely]] return; }
L_003E46D8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E46F4; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E46F4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E46F4u) [[unlikely]] return; }
L_003E46F4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_003E46F8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003E4710; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E470Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003E470Cu) [[unlikely]] return; }
L_003E470C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003E4710:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003E4730:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0]), 0u);
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003E4768; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4758u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E4758u) [[unlikely]] return; }
L_003E4758:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4768u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E4768u) [[unlikely]] return; }
L_003E4768:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 4u), 0u);  if (t) { goto L_003E478C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E477Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E477Cu) [[unlikely]] return; }
L_003E477C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E478Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E478Cu) [[unlikely]] return; }
L_003E478C:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 8u), 0u);  if (t) { goto L_003E47B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E47A0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E47A0u) [[unlikely]] return; }
L_003E47A0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E47B0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E47B0u) [[unlikely]] return; }
L_003E47B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 16u), 0u);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 20u), 0u);  if (t) { goto L_003E47E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E47D4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E47D4u) [[unlikely]] return; }
L_003E47D4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E47E4u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E47E4u) [[unlikely]] return; }
L_003E47E4:
    st32((c.r[16].w[0] + 24u), 0u);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 28u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 48u), 0u);  if (t) { goto L_003E4820; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4810u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E4810u) [[unlikely]] return; }
L_003E4810:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4820u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E4820u) [[unlikely]] return; }
L_003E4820:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E4840:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26724u)));
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003E48C8; }
    st32((c.r[29].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4868u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x003E4868u) [[unlikely]] return; }
L_003E4868:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st32((c.r[28].w[0] - 26724u), c.r[2].w[0]);  if (t) { goto L_003E48C4; } }
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[16], c.r[4].w[0] - 8u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4894u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E4894u) [[unlikely]] return; }
L_003E4894:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E48A4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E48A4u) [[unlikely]] return; }
L_003E48A4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003E48C4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E48C4u); set32(c.r[5], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x003E48C4u) [[unlikely]] return; }
L_003E48C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003E48C8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E48E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 10063u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26724u)));
    c.budget -= 9;
    if (c.r[3].d[0] == c.r[4].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003E496C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E490Cu); st32((c.r[29].w[0] + 60u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x003E490Cu) [[unlikely]] return; }
L_003E490C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st32((c.r[28].w[0] - 26724u), c.r[2].w[0]);  if (t) { goto L_003E4968; } }
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[16], c.r[4].w[0] - 8u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4938u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E4938u) [[unlikely]] return; }
L_003E4938:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4948u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E4948u) [[unlikely]] return; }
L_003E4948:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_003E4968; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4968u); set32(c.r[5], c.r[29].w[0] + 60u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x003E4968u) [[unlikely]] return; }
L_003E4968:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003E496C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E4980:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 24u), c.r[5].w[0]);  if (t) { goto L_003E4A60; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 10032u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003E49C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_003E49C8; } }
L_003E49C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E49C8u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x003E49C8u) [[unlikely]] return; }
L_003E49C8:
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 172u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E49E4u); set32(c.r[5], c.r[29].w[0] + 92u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E49E4u) [[unlikely]] return; }
L_003E49E4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[19].w[0] + 20u)));  goto L_003E4A48; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4A14u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E4A14u) [[unlikely]] return; }
L_003E4A14:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4A24u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E4A24u) [[unlikely]] return; }
L_003E4A24:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003E4A44; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4A44u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x003E4A44u) [[unlikely]] return; }
L_003E4A44:
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 1;
L_003E4A48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4A50u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 280u, depth + 1u); else { c.pc = 0x001270B0u; return; } if (c.pc != 0x003E4A50u) [[unlikely]] return; }
L_003E4A50:
    st32((c.r[2].w[0] + 28u), c.r[17].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4A5Cu); set32(c.r[4], ld32((c.r[19].w[0] + 20u)));  if (depth < kMaxDepth) unit_0009(c, 274u, depth + 1u); else { c.pc = 0x00127040u; return; } if (c.pc != 0x003E4A5Cu) [[unlikely]] return; }
L_003E4A5C:
    st32((c.r[2].w[0] + 16u), c.r[17].w[0]);
    c.budget -= 1;
L_003E4A60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003E4A80:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4AB0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 284u, depth + 1u); else { c.pc = 0x00127100u; return; } if (c.pc != 0x003E4AB0u) [[unlikely]] return; }
L_003E4AB0:
    st32((c.r[20].w[0] + 20u), 0u);
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_003E4AC4; }
    set32(c.r[16], ld32((c.r[2].w[0] + 172u)));
    c.budget -= 1;
L_003E4AC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4ACCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x003E4ACCu) [[unlikely]] return; }
L_003E4ACC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 92u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4ADCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003E4ADCu) [[unlikely]] return; }
L_003E4ADC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 20u), c.r[2].w[0]);  goto L_003E4AF0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4AECu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 298u, depth + 1u); else { c.pc = 0x001272E0u; return; } if (c.pc != 0x003E4AECu) [[unlikely]] return; }
L_003E4AEC:
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 1;
L_003E4AF0:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4AFCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003E4AFCu) [[unlikely]] return; }
L_003E4AFC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[20].w[0] + 20u)));  goto L_003E4B24; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 26496u);
    set32(c.r[3], c.r[3].w[0] + 22656u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[19].w[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 8;
L_003E4B24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4B2Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 275u, depth + 1u); else { c.pc = 0x00127050u; return; } if (c.pc != 0x003E4B2Cu) [[unlikely]] return; }
L_003E4B2C:
    set32(c.r[4], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4B38u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003E4B38u) [[unlikely]] return; }
L_003E4B38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003E4B6C; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4B4Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 341u, depth + 1u); else { c.pc = 0x00127A70u; return; } if (c.pc != 0x003E4B4Cu) [[unlikely]] return; }
L_003E4B4C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 22560u);
    set32(c.r[2], c.r[2].w[0] + 22592u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[19].w[0]);
    st32((c.r[17].w[0] + 28u), c.r[16].w[0]);
    c.budget -= 8;
L_003E4B6C:
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4B78u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 277u, depth + 1u); else { c.pc = 0x00127070u; return; } if (c.pc != 0x003E4B78u) [[unlikely]] return; }
L_003E4B78:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4B84u); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003E4B84u) [[unlikely]] return; }
L_003E4B84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003E4BF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4B94u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 106u, depth + 1u); else { c.pc = 0x003E4D00u; return; } if (c.pc != 0x003E4B94u) [[unlikely]] return; }
L_003E4B94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 20u);
    set32(c.r[2], c.r[2].w[0] + 22528u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[19].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4BB0u); st32((c.r[17].w[0] + 16u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_00B9(c, 105u, depth + 1u); else { c.pc = 0x003E4CF0u; return; } if (c.pc != 0x003E4BB0u) [[unlikely]] return; }
L_003E4BB0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4BC0u); set32(c.r[5], c.r[5].w[0] - 10048u);  if (depth < kMaxDepth) unit_0059(c, 151u, depth + 1u); else { c.pc = 0x00265870u; return; } if (c.pc != 0x003E4BC0u) [[unlikely]] return; }
L_003E4BC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4BC8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 104u, depth + 1u); else { c.pc = 0x003E4CE0u; return; } if (c.pc != 0x003E4BC8u) [[unlikely]] return; }
L_003E4BC8:
    set32(c.r[4], c.r[29].w[0] + 108u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4BD8u); set32(c.r[6], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_00B9(c, 100u, depth + 1u); else { c.pc = 0x003E4C40u; return; } if (c.pc != 0x003E4BD8u) [[unlikely]] return; }
L_003E4BD8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4BE4u); set32(c.r[4], c.r[17].w[0] + 20u);  if (depth < kMaxDepth) unit_00B9(c, 99u, depth + 1u); else { c.pc = 0x003E4C30u; return; } if (c.pc != 0x003E4BE4u) [[unlikely]] return; }
L_003E4BE4:
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4BF0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0030(c, 165u, depth + 1u); else { c.pc = 0x001C1B20u; return; } if (c.pc != 0x003E4BF0u) [[unlikely]] return; }
L_003E4BF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E900000u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_003E4BF8:
    set32(c.r[4], ld32((c.r[20].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4C04u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 272u, depth + 1u); else { c.pc = 0x00127030u; return; } if (c.pc != 0x003E4C04u) [[unlikely]] return; }
L_003E4C04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003E4C30:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_003E4C40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4C60u); c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 120u, depth + 1u); else { c.pc = 0x002BCF90u; return; } if (c.pc != 0x003E4C60u) [[unlikely]] return; }
L_003E4C60:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_003E4C74; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003E4CB8; } }
L_003E4C74:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4C80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E4C80u) [[unlikely]] return; }
L_003E4C80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 19464u);  if (t) { goto L_003E4C9C; } }
L_003E4C8C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_003E4C9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003E4CA8; } }
L_003E4C9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E4C8Cu | kUnwind; return; } goto L_003E4C8C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003E4CA8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_003E4CB8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E4CB8; } }
L_003E4CB8:
    st32((c.r[17].w[0]), c.r[16].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E4CE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 28u)));  c.pc = t; return; }
L_003E4CF0:
    st32((c.r[4].w[0]), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003E4D00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26464u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003E4D20:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[4].w[0] + 12u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[18].d[0] == c.r[16].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003E4DA8; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 12u), c.r[16].w[0]);  goto L_003E4D88; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4D58u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E4D58u) [[unlikely]] return; }
L_003E4D58:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4D68u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E4D68u) [[unlikely]] return; }
L_003E4D68:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003E4D84; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4D84u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E4D84u) [[unlikely]] return; }
L_003E4D84:
    st32((c.r[17].w[0] + 12u), c.r[16].w[0]);
    c.budget -= 1;
L_003E4D88:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003E4DA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4D98u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E4D98u) [[unlikely]] return; }
L_003E4D98:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4DA8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E4DA8u) [[unlikely]] return; }
L_003E4DA8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003E4F98; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 10022u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003E4DCC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_003E4DD4; } }
L_003E4DCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4DD4u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x003E4DD4u) [[unlikely]] return; }
L_003E4DD4:
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4DE4u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_006F(c, 120u, depth + 1u); else { c.pc = 0x002BCF90u; return; } if (c.pc != 0x003E4DE4u) [[unlikely]] return; }
L_003E4DE4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { set32(c.r[25], ld32((c.r[18].w[0])));  goto L_003E4DF8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003E4E3C; } }
L_003E4DF8:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4E04u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E4E04u) [[unlikely]] return; }
L_003E4E04:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 19464u);  if (t) { goto L_003E4E20; } }
L_003E4E10:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_003E4E20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003E4E2C; } }
L_003E4E20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E4E10u | kUnwind; return; } goto L_003E4E10; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003E4E2C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_003E4E3C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E4E3C; } }
L_003E4E3C:
    st32((c.r[17].w[0] + 28u), c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003E4E9C; } }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4E6Cu); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E4E6Cu) [[unlikely]] return; }
L_003E4E6C:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4E7Cu); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E4E7Cu) [[unlikely]] return; }
L_003E4E7C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003E4E9C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4E9Cu); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x003E4E9Cu) [[unlikely]] return; }
L_003E4E9C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 10006u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_003E4EB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_003E4EC0; } }
L_003E4EB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4EC0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x003E4EC0u) [[unlikely]] return; }
L_003E4EC0:
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4ED0u); set32(c.r[5], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_006F(c, 120u, depth + 1u); else { c.pc = 0x002BCF90u; return; } if (c.pc != 0x003E4ED0u) [[unlikely]] return; }
L_003E4ED0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { set32(c.r[25], ld32((c.r[18].w[0])));  goto L_003E4EE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003E4F28; } }
L_003E4EE4:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4EF0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E4EF0u) [[unlikely]] return; }
L_003E4EF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 19464u);  if (t) { goto L_003E4F0C; } }
L_003E4EFC:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_003E4F0C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003E4F18; } }
L_003E4F0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E4EFCu | kUnwind; return; } goto L_003E4EFC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003E4F18:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_003E4F28; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E4F28; } }
L_003E4F28:
    st32((c.r[17].w[0] + 32u), c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003E4F8C; }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4F58u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E4F58u) [[unlikely]] return; }
L_003E4F58:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4F68u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E4F68u) [[unlikely]] return; }
L_003E4F68:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003E4F88; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4F88u); set32(c.r[5], c.r[29].w[0] + 88u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x003E4F88u) [[unlikely]] return; }
L_003E4F88:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003E4F8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E4F94u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 80u, depth + 1u); else { c.pc = 0x003E4A80u; return; } if (c.pc != 0x003E4F94u) [[unlikely]] return; }
L_003E4F94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003E4F98:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003E4FB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003E4FC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_003E4FD0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.f[21] = c.f[12];  if (t) { goto L_003E500C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E500Cu); c.f[12] = ld32((c.r[28].w[0] - 29052u));  if (depth < kMaxDepth) unit_0060(c, 572u, depth + 1u); else { c.pc = 0x00283B30u; return; } if (c.pc != 0x003E500Cu) [[unlikely]] return; }
L_003E500C:
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_003E5038; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_003E5028; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[3].w[0] + 12u));  if (t) { goto L_003E502C; } }
L_003E5028:
    c.f[12] = ld32((c.r[2].w[0] + 14472u));
    c.budget -= 1;
L_003E502C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5034u);  if (depth < kMaxDepth) unit_0010(c, 363u, depth + 1u); else { c.pc = 0x00142D00u; return; } if (c.pc != 0x003E5034u) [[unlikely]] return; }
L_003E5034:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_003E5038:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 12u)));  goto L_003E507C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5048u);  if (depth < kMaxDepth) unit_0009(c, 276u, depth + 1u); else { c.pc = 0x00127060u; return; } if (c.pc != 0x003E5048u) [[unlikely]] return; }
L_003E5048:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E505Cu); c.f[12] = c.f[21];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E505Cu) [[unlikely]] return; }
L_003E505C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5064u); set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  if (depth < kMaxDepth) unit_0009(c, 274u, depth + 1u); else { c.pc = 0x00127040u; return; } if (c.pc != 0x003E5064u) [[unlikely]] return; }
L_003E5064:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5078u); c.f[12] = c.f[21];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E5078u) [[unlikely]] return; }
L_003E5078:
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_003E507C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003E5410; }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 60u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5094u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E5094u) [[unlikely]] return; }
L_003E5094:
    c.f[2] = ld32((c.r[17].w[0] + 40u));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.f[1] = ld32((c.r[28].w[0] - 29052u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_003E50B8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003E50B8:
    st8((c.r[17].w[0] + 44u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[18], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E50C8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 276u, depth + 1u); else { c.pc = 0x00127060u; return; } if (c.pc != 0x003E50C8u) [[unlikely]] return; }
L_003E50C8:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E50E0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E50E0u) [[unlikely]] return; }
L_003E50E0:
    set32(c.r[18], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E50ECu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 276u, depth + 1u); else { c.pc = 0x00127060u; return; } if (c.pc != 0x003E50ECu) [[unlikely]] return; }
L_003E50EC:
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5104u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E5104u) [[unlikely]] return; }
L_003E5104:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5110u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 280u, depth + 1u); else { c.pc = 0x001270B0u; return; } if (c.pc != 0x003E5110u) [[unlikely]] return; }
L_003E5110:
    set32(c.r[25], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5124u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E5124u) [[unlikely]] return; }
L_003E5124:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E512Cu); c.f[12] = ld32((c.r[29].w[0] + 144u));  if (depth < kMaxDepth) unit_00AB(c, 396u, depth + 1u); else { c.pc = 0x003AF3D0u; return; } if (c.pc != 0x003E512Cu) [[unlikely]] return; }
L_003E512C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[29].w[0] + 144u), 0u);  goto L_003E5188; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E513Cu); c.f[12] = ld32((c.r[29].w[0] + 144u));  if (depth < kMaxDepth) unit_00AB(c, 391u, depth + 1u); else { c.pc = 0x003AF2A0u; return; } if (c.pc != 0x003E513Cu) [[unlikely]] return; }
L_003E513C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E5184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E514Cu); c.f[12] = ld32((c.r[29].w[0] + 148u));  if (depth < kMaxDepth) unit_00AB(c, 396u, depth + 1u); else { c.pc = 0x003AF3D0u; return; } if (c.pc != 0x003E514Cu) [[unlikely]] return; }
L_003E514C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E5184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E515Cu); c.f[12] = ld32((c.r[29].w[0] + 148u));  if (depth < kMaxDepth) unit_00AB(c, 391u, depth + 1u); else { c.pc = 0x003AF2A0u; return; } if (c.pc != 0x003E515Cu) [[unlikely]] return; }
L_003E515C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E5184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E516Cu); c.f[12] = ld32((c.r[29].w[0] + 152u));  if (depth < kMaxDepth) unit_00AB(c, 396u, depth + 1u); else { c.pc = 0x003AF3D0u; return; } if (c.pc != 0x003E516Cu) [[unlikely]] return; }
L_003E516C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E5184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E517Cu); c.f[12] = ld32((c.r[29].w[0] + 152u));  if (depth < kMaxDepth) unit_00AB(c, 391u, depth + 1u); else { c.pc = 0x003AF2A0u; return; } if (c.pc != 0x003E517Cu) [[unlikely]] return; }
L_003E517C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[12] = ld32((c.r[29].w[0] + 128u));  goto L_003E5194; }
L_003E5184:
    st32((c.r[29].w[0] + 144u), 0u);
    c.budget -= 1;
L_003E5188:
    st32((c.r[29].w[0] + 148u), 0u);
    st32((c.r[29].w[0] + 152u), 0u);
    c.f[12] = ld32((c.r[29].w[0] + 128u));
    c.budget -= 3;
L_003E5194:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E519Cu);  if (depth < kMaxDepth) unit_00AB(c, 396u, depth + 1u); else { c.pc = 0x003AF3D0u; return; } if (c.pc != 0x003E519Cu) [[unlikely]] return; }
L_003E519C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[29].w[0] + 128u), 0u);  goto L_003E51F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E51ACu); c.f[12] = ld32((c.r[29].w[0] + 128u));  if (depth < kMaxDepth) unit_00AB(c, 391u, depth + 1u); else { c.pc = 0x003AF2A0u; return; } if (c.pc != 0x003E51ACu) [[unlikely]] return; }
L_003E51AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E51F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E51BCu); c.f[12] = ld32((c.r[29].w[0] + 132u));  if (depth < kMaxDepth) unit_00AB(c, 396u, depth + 1u); else { c.pc = 0x003AF3D0u; return; } if (c.pc != 0x003E51BCu) [[unlikely]] return; }
L_003E51BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E51F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E51CCu); c.f[12] = ld32((c.r[29].w[0] + 132u));  if (depth < kMaxDepth) unit_00AB(c, 391u, depth + 1u); else { c.pc = 0x003AF2A0u; return; } if (c.pc != 0x003E51CCu) [[unlikely]] return; }
L_003E51CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E51F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E51DCu); c.f[12] = ld32((c.r[29].w[0] + 136u));  if (depth < kMaxDepth) unit_00AB(c, 396u, depth + 1u); else { c.pc = 0x003AF3D0u; return; } if (c.pc != 0x003E51DCu) [[unlikely]] return; }
L_003E51DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E51F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E51ECu); c.f[12] = ld32((c.r[29].w[0] + 136u));  if (depth < kMaxDepth) unit_00AB(c, 391u, depth + 1u); else { c.pc = 0x003AF2A0u; return; } if (c.pc != 0x003E51ECu) [[unlikely]] return; }
L_003E51EC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[12] = ld32((c.r[29].w[0] + 112u));  goto L_003E5204; }
L_003E51F4:
    st32((c.r[29].w[0] + 128u), 0u);
    c.budget -= 1;
L_003E51F8:
    st32((c.r[29].w[0] + 132u), 0u);
    st32((c.r[29].w[0] + 136u), 0u);
    c.f[12] = ld32((c.r[29].w[0] + 112u));
    c.budget -= 3;
L_003E5204:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E520Cu);  if (depth < kMaxDepth) unit_00AB(c, 396u, depth + 1u); else { c.pc = 0x003AF3D0u; return; } if (c.pc != 0x003E520Cu) [[unlikely]] return; }
L_003E520C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[29].w[0] + 112u), 0u);  goto L_003E5268; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E521Cu); c.f[12] = ld32((c.r[29].w[0] + 112u));  if (depth < kMaxDepth) unit_00AB(c, 391u, depth + 1u); else { c.pc = 0x003AF2A0u; return; } if (c.pc != 0x003E521Cu) [[unlikely]] return; }
L_003E521C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E5264; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E522Cu); c.f[12] = ld32((c.r[29].w[0] + 116u));  if (depth < kMaxDepth) unit_00AB(c, 396u, depth + 1u); else { c.pc = 0x003AF3D0u; return; } if (c.pc != 0x003E522Cu) [[unlikely]] return; }
L_003E522C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E5264; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E523Cu); c.f[12] = ld32((c.r[29].w[0] + 116u));  if (depth < kMaxDepth) unit_00AB(c, 391u, depth + 1u); else { c.pc = 0x003AF2A0u; return; } if (c.pc != 0x003E523Cu) [[unlikely]] return; }
L_003E523C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E5264; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E524Cu); c.f[12] = ld32((c.r[29].w[0] + 120u));  if (depth < kMaxDepth) unit_00AB(c, 396u, depth + 1u); else { c.pc = 0x003AF3D0u; return; } if (c.pc != 0x003E524Cu) [[unlikely]] return; }
L_003E524C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E5264; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E525Cu); c.f[12] = ld32((c.r[29].w[0] + 120u));  if (depth < kMaxDepth) unit_00AB(c, 391u, depth + 1u); else { c.pc = 0x003AF2A0u; return; } if (c.pc != 0x003E525Cu) [[unlikely]] return; }
L_003E525C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 104u);  goto L_003E5274; }
L_003E5264:
    st32((c.r[29].w[0] + 112u), 0u);
    c.budget -= 1;
L_003E5268:
    st32((c.r[29].w[0] + 116u), 0u);
    st32((c.r[29].w[0] + 120u), 0u);
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.budget -= 3;
L_003E5274:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E527Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 179u, depth + 1u); else { c.pc = 0x003E5520u; return; } if (c.pc != 0x003E527Cu) [[unlikely]] return; }
L_003E527C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5284u); set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  if (depth < kMaxDepth) unit_0009(c, 274u, depth + 1u); else { c.pc = 0x00127040u; return; } if (c.pc != 0x003E5284u) [[unlikely]] return; }
L_003E5284:
    c.f[2] = ld32((c.r[29].w[0] + 104u));
    c.f[1] = ld32((c.r[29].w[0] + 108u));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    fpu_div(c, 1u, c.f[2], c.f[1]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    st32((c.r[29].w[0] + 108u), c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 104u), c.f[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 12;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_003E52BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = ld32((c.r[2].w[0] + 12u));  if (t) { goto L_003E52C0; } }
L_003E52BC:
    c.f[20] = ld32((c.r[2].w[0] + 14472u));
    c.budget -= 1;
L_003E52C0:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003E53DC; }
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E53D8; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E52ECu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_00FF(c, 253u, depth + 1u); else { c.pc = 0x004FE210u; return; } if (c.pc != 0x003E52ECu) [[unlikely]] return; }
L_003E52EC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[25], ld32((c.r[17].w[0])));  goto L_003E5300; }
    set32(c.r[17], c.r[17].w[0] - 8u);
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.budget -= 2;
L_003E5300:
    c.f[12] = c.f[21];
    set32(c.r[25], ld32((c.r[25].w[0] + 164u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5310u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E5310u) [[unlikely]] return; }
L_003E5310:
    c.f[8] = ld32((c.r[29].w[0] + 152u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[3] = ld32((c.r[17].w[0] + 732u));
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.f[1] = ld32((c.r[17].w[0] + 728u));
    c.f[7] = ld32((c.r[29].w[0] + 148u));
    c.f[3] = fp::sub(c.f[3], c.f[8]);
    c.f[6] = fp::sub(c.f[1], c.f[7]);
    c.f[6] = fp::mul(c.f[6], c.f[20]);
    c.f[3] = fp::mul(c.f[3], c.f[20]);
    c.f[2] = ld32((c.r[29].w[0] + 144u));
    c.f[0] = ld32((c.r[17].w[0] + 724u));
    c.f[6] = fp::add(c.f[7], c.f[6]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[3] = fp::add(c.f[8], c.f[3]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 148u), c.f[6]);
    st32((c.r[29].w[0] + 152u), c.f[3]);
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[5] = ld32((c.r[29].w[0] + 120u));
    c.f[2] = ld32((c.r[17].w[0] + 744u));
    c.f[4] = ld32((c.r[29].w[0] + 116u));
    c.f[3] = ld32((c.r[17].w[0] + 740u));
    c.f[0] = ld32((c.r[17].w[0] + 736u));
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    c.f[3] = fp::sub(c.f[3], c.f[4]);
    st32((c.r[29].w[0] + 96u), 0u);
    st32((c.r[29].w[0] + 100u), 0u);
    c.f[2] = fp::sub(c.f[2], c.f[5]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[3] = fp::mul(c.f[3], c.f[20]);
    c.f[2] = fp::mul(c.f[2], c.f[20]);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[3] = fp::add(c.f[4], c.f[3]);
    c.f[2] = fp::add(c.f[5], c.f[2]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 116u), c.f[3]);
    st32((c.r[29].w[0] + 120u), c.f[2]);
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E53B4u); st32((c.r[29].w[0] + 112u), c.f[0]);  if (depth < kMaxDepth) unit_00F0(c, 137u, depth + 1u); else { c.pc = 0x004C1140u; return; } if (c.pc != 0x003E53B4u) [[unlikely]] return; }
L_003E53B4:
    c.f[12] = c.f[20];
    set32(c.r[4], c.r[29].w[0] + 88u);
    set32(c.r[5], c.r[29].w[0] + 104u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E53C8u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_00B9(c, 172u, depth + 1u); else { c.pc = 0x003E5430u; return; } if (c.pc != 0x003E53C8u) [[unlikely]] return; }
L_003E53C8:
    c.f[1] = ld32((c.r[29].w[0] + 88u));
    c.f[0] = ld32((c.r[29].w[0] + 92u));
    st32((c.r[29].w[0] + 104u), c.f[1]);
    st32((c.r[29].w[0] + 108u), c.f[0]);
    c.budget -= 4;
L_003E53D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003E53DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E53E4u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_002F(c, 95u, depth + 1u); else { c.pc = 0x001BD800u; return; } if (c.pc != 0x003E53E4u) [[unlikely]] return; }
L_003E53E4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E53F0u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_002F(c, 101u, depth + 1u); else { c.pc = 0x001BD880u; return; } if (c.pc != 0x003E53F0u) [[unlikely]] return; }
L_003E53F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E53FCu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_002F(c, 98u, depth + 1u); else { c.pc = 0x001BD840u; return; } if (c.pc != 0x003E53FCu) [[unlikely]] return; }
L_003E53FC:
    c.f[12] = ld32((c.r[29].w[0] + 104u));
    c.f[13] = ld32((c.r[29].w[0] + 108u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E540Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 115u, depth + 1u); else { c.pc = 0x001BDB00u; return; } if (c.pc != 0x003E540Cu) [[unlikely]] return; }
L_003E540C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003E5410:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003E5430:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 72u);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.f[20] = c.f[12];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5460u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 178u, depth + 1u); else { c.pc = 0x003E54F0u; return; } if (c.pc != 0x003E5460u) [[unlikely]] return; }
L_003E5460:
    c.f[12] = c.f[20];
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5470u); set32(c.r[5], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_00B9(c, 177u, depth + 1u); else { c.pc = 0x003E54D0u; return; } if (c.pc != 0x003E5470u) [[unlikely]] return; }
L_003E5470:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5480u); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_00B9(c, 176u, depth + 1u); else { c.pc = 0x003E54A0u; return; } if (c.pc != 0x003E5480u) [[unlikely]] return; }
L_003E5480:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003E54A0:
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[3] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[2] = fp::add(c.f[3], c.f[2]);
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.f[2]);  c.pc = t; return; }
L_003E54D0:
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = fp::mul(c.f[0], c.f[12]);
    c.f[1] = fp::mul(c.f[1], c.f[12]);
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.f[1]);  c.pc = t; return; }
L_003E54F0:
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[3] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.f[2]);  c.pc = t; return; }
L_003E5520:
    c.f[0] = ld32((c.r[5].w[0] + 84u));
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 88u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.f[0]);  c.pc = t; return; }
L_003E5540:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));  goto L_003E5568; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5564u);  if (depth < kMaxDepth) unit_0087(c, 196u, depth + 1u); else { c.pc = 0x0031DE20u; return; } if (c.pc != 0x003E5564u) [[unlikely]] return; }
L_003E5564:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    c.budget -= 1;
L_003E5568:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5578u); set32(c.r[4], c.r[2].w[0] + 56u);  if (depth < kMaxDepth) unit_00B7(c, 378u, depth + 1u); else { c.pc = 0x003DF540u; return; } if (c.pc != 0x003E5578u) [[unlikely]] return; }
L_003E5578:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5588u);  if (depth < kMaxDepth) unit_0010(c, 363u, depth + 1u); else { c.pc = 0x00142D00u; return; } if (c.pc != 0x003E5588u) [[unlikely]] return; }
L_003E5588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5590u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 58u, depth + 1u); else { c.pc = 0x0014C6F0u; return; } if (c.pc != 0x003E5590u) [[unlikely]] return; }
L_003E5590:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003E55B0; }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E55ACu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E55ACu) [[unlikely]] return; }
L_003E55AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003E55B0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E55C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E55D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 59u, depth + 1u); else { c.pc = 0x0014C700u; return; } if (c.pc != 0x003E55D4u) [[unlikely]] return; }
L_003E55D4:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.f[0] = ld32((c.r[28].w[0] - 29052u));  goto L_003E55F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E55E8u);  if (depth < kMaxDepth) unit_0087(c, 218u, depth + 1u); else { c.pc = 0x0031E110u; return; } if (c.pc != 0x003E55E8u) [[unlikely]] return; }
L_003E55E8:
    c.f[12] = ld32((c.r[28].w[0] - 29052u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E55F4u); set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  if (depth < kMaxDepth) unit_0060(c, 572u, depth + 1u); else { c.pc = 0x00283B30u; return; } if (c.pc != 0x003E55F4u) [[unlikely]] return; }
L_003E55F4:
    c.f[0] = ld32((c.r[28].w[0] - 29052u));
    c.budget -= 1;
L_003E55F8:
    c.f[12] = 0u;
    st32((c.r[16].w[0] + 40u), c.f[0]);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5610u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E5610u) [[unlikely]] return; }
L_003E5610:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E5620:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E5668; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E564Cu);  if (depth < kMaxDepth) unit_000E(c, 59u, depth + 1u); else { c.pc = 0x00138D10u; return; } if (c.pc != 0x003E564Cu) [[unlikely]] return; }
L_003E564C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5658u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x003E5658u) [[unlikely]] return; }
L_003E5658:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_003E577C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5668u); set32(c.r[4], ld32((c.r[18].w[0] + 8u)));  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x003E5668u) [[unlikely]] return; }
L_003E5668:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5670u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x003E5670u) [[unlikely]] return; }
L_003E5670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5678u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 36u, depth + 1u); else { c.pc = 0x003E0400u; return; } if (c.pc != 0x003E5678u) [[unlikely]] return; }
L_003E5678:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[18].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_003E5778; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E568Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 67u, depth + 1u); else { c.pc = 0x00138E10u; return; } if (c.pc != 0x003E568Cu) [[unlikely]] return; }
L_003E568C:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[16].d[0] == c.r[17].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003E5708; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[18].w[0] + 16u), c.r[17].w[0]);  goto L_003E56E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E56B4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E56B4u) [[unlikely]] return; }
L_003E56B4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E56C4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E56C4u) [[unlikely]] return; }
L_003E56C4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E56E0; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E56E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E56E0u) [[unlikely]] return; }
L_003E56E0:
    st32((c.r[18].w[0] + 16u), c.r[17].w[0]);
    c.budget -= 1;
L_003E56E4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003E5704; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E56F4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E56F4u) [[unlikely]] return; }
L_003E56F4:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5704u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E5704u) [[unlikely]] return; }
L_003E5704:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003E5708:
    set32(c.r[5], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 64u), 0u);
    st32((c.r[29].w[0] + 72u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E571Cu); st32((c.r[29].w[0] + 68u), 0u);  if (depth < kMaxDepth) unit_00B9(c, 259u, depth + 1u); else { c.pc = 0x003E5E00u; return; } if (c.pc != 0x003E571Cu) [[unlikely]] return; }
L_003E571C:
    set32(c.r[16], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003E5730; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003E5740; } }
L_003E5730:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5738u);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x003E5738u) [[unlikely]] return; }
L_003E5738:
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 2;
L_003E5740:
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5754u); st32((c.r[29].w[0] + 68u), 0u);  if (depth < kMaxDepth) unit_00B9(c, 259u, depth + 1u); else { c.pc = 0x003E5E00u; return; } if (c.pc != 0x003E5754u) [[unlikely]] return; }
L_003E5754:
    set32(c.r[5], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5760u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 107u, depth + 1u); else { c.pc = 0x003E4D20u; return; } if (c.pc != 0x003E5760u) [[unlikely]] return; }
L_003E5760:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 76u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5770u); st32((c.r[29].w[0] + 76u), 0u);  if (depth < kMaxDepth) unit_00B9(c, 279u, depth + 1u); else { c.pc = 0x003E6110u; return; } if (c.pc != 0x003E5770u) [[unlikely]] return; }
L_003E5770:
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    st32((c.r[18].w[0] + 36u), c.f[0]);
    c.budget -= 2;
L_003E5778:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003E577C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003E5790:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E58E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 22448u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 20u)));  goto L_003E57D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E57D0u);  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x003E57D0u) [[unlikely]] return; }
L_003E57D0:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_003E57D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_003E5824; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003E580C; } }
L_003E57E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E57ECu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 280u, depth + 1u); else { c.pc = 0x001270B0u; return; } if (c.pc != 0x003E57ECu) [[unlikely]] return; }
L_003E57EC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_003E580C; }
    set32(c.r[25], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5808u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E5808u) [[unlikely]] return; }
L_003E5808:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_003E580C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5814u); set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  if (depth < kMaxDepth) unit_0009(c, 281u, depth + 1u); else { c.pc = 0x001270D0u; return; } if (c.pc != 0x003E5814u) [[unlikely]] return; }
L_003E5814:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E57E4u | kUnwind; return; } goto L_003E57E4; }
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_003E5824:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E582Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 284u, depth + 1u); else { c.pc = 0x00127100u; return; } if (c.pc != 0x003E582Cu) [[unlikely]] return; }
L_003E582C:
    set32(c.r[2], c.r[17].w[0] + 16u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 12u);  goto L_003E587C; }
    set32(c.r[18], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003E5878; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E584Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E584Cu) [[unlikely]] return; }
L_003E584C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E585Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E585Cu) [[unlikely]] return; }
L_003E585C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E5878; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5878u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E5878u) [[unlikely]] return; }
L_003E5878:
    set32(c.r[2], c.r[17].w[0] + 12u);
    c.budget -= 1;
L_003E587C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003E58C8; }
    set32(c.r[18], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_003E58C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5898u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E5898u) [[unlikely]] return; }
L_003E5898:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E58A8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E58A8u) [[unlikely]] return; }
L_003E58A8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E58C4; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E58C4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E58C4u) [[unlikely]] return; }
L_003E58C4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003E58C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E58D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0013(c, 61u, depth + 1u); else { c.pc = 0x0014C720u; return; } if (c.pc != 0x003E58D0u) [[unlikely]] return; }
L_003E58D0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003E58EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E58E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003E58E8u) [[unlikely]] return; }
L_003E58E8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003E58EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E5910:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5930u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 63u, depth + 1u); else { c.pc = 0x0014C790u; return; } if (c.pc != 0x003E5930u) [[unlikely]] return; }
L_003E5930:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 22448u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 8u), 0u);
    c.budget -= 7;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 12u), 0u);  if (t) { goto L_003E5964; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5954u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E5954u) [[unlikely]] return; }
L_003E5954:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5964u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E5964u) [[unlikely]] return; }
L_003E5964:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0] + 16u), c.r[16].w[0]);  if (t) { goto L_003E5984; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5974u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E5974u) [[unlikely]] return; }
L_003E5974:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5984u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E5984u) [[unlikely]] return; }
L_003E5984:
    st32((c.r[17].w[0] + 20u), 0u);
    c.f[0] = ld32((c.r[28].w[0] - 31728u));
    st32((c.r[17].w[0] + 24u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 28u), 0u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    st32((c.r[17].w[0] + 32u), 0u);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    st32((c.r[17].w[0] + 40u), 0u);
    st8((c.r[17].w[0] + 44u), static_cast<std::uint8_t>(0u));
    st32((c.r[29].w[0] + 64u), 0u);
    st32((c.r[29].w[0] + 72u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E59BCu); st32((c.r[29].w[0] + 68u), 0u);  if (depth < kMaxDepth) unit_00B9(c, 259u, depth + 1u); else { c.pc = 0x003E5E00u; return; } if (c.pc != 0x003E59BCu) [[unlikely]] return; }
L_003E59BC:
    set32(c.r[5], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E59C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 107u, depth + 1u); else { c.pc = 0x003E4D20u; return; } if (c.pc != 0x003E59C8u) [[unlikely]] return; }
L_003E59C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 76u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E59D8u); st32((c.r[29].w[0] + 76u), 0u);  if (depth < kMaxDepth) unit_00B9(c, 279u, depth + 1u); else { c.pc = 0x003E6110u; return; } if (c.pc != 0x003E59D8u) [[unlikely]] return; }
L_003E59D8:
    c.f[0] = ld32((c.r[29].w[0] + 76u));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003E5A00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5A20u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0013(c, 63u, depth + 1u); else { c.pc = 0x0014C790u; return; } if (c.pc != 0x003E5A20u) [[unlikely]] return; }
L_003E5A20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 22448u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 8u), 0u);
    c.budget -= 7;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 12u), 0u);  if (t) { goto L_003E5A54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5A44u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E5A44u) [[unlikely]] return; }
L_003E5A44:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5A54u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E5A54u) [[unlikely]] return; }
L_003E5A54:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 16u), 0u);  if (t) { goto L_003E5A78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5A68u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x003E5A68u) [[unlikely]] return; }
L_003E5A68:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5A78u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x003E5A78u) [[unlikely]] return; }
L_003E5A78:
    st32((c.r[17].w[0] + 20u), 0u);
    c.f[0] = ld32((c.r[28].w[0] - 31728u));
    st32((c.r[17].w[0] + 24u), 0u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 28u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 32u), 0u);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    st32((c.r[17].w[0] + 40u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5AA4u); st8((c.r[17].w[0] + 44u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00B9(c, 191u, depth + 1u); else { c.pc = 0x003E5620u; return; } if (c.pc != 0x003E5AA4u) [[unlikely]] return; }
L_003E5AA4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003E5AC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003E5B10; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 22528u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003E5AF4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26464u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_003E5AF4:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003E5B0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5B0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003E5B0Cu) [[unlikely]] return; }
L_003E5B0C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003E5B10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E5B20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003E5B30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003E5B40:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003E5B90; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_003E5B5C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[3] = ld32((c.r[3].w[0] + 12u));  if (t) { goto L_003E5B60; } }
L_003E5B5C:
    c.f[3] = ld32((c.r[3].w[0] + 14472u));
    c.budget -= 1;
L_003E5B60:
    c.f[1] = ld32((c.r[28].w[0] - 31724u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = ld32((c.r[28].w[0] - 31720u));
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[1] = fp::max(c.f[0], c.f[2]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::min(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.budget -= 12;
L_003E5B90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003E5BA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[5].w[0] + 24u)));
    c.f[5] = ld32((c.r[3].w[0] + 112u));
    c.f[0] = ld32((c.r[3].w[0] + 160u));
    c.f[4] = ld32((c.r[3].w[0] + 116u));
    c.f[1] = ld32((c.r[3].w[0] + 164u));
    c.f[0] = fp::add(c.f[0], c.f[5]);
    c.f[1] = fp::add(c.f[1], c.f[4]);
    c.f[3] = ld32((c.r[3].w[0] + 120u));
    c.f[2] = ld32((c.r[3].w[0] + 168u));
    st32((c.r[29].w[0] + 4u), c.f[1]);
    st32((c.r[29].w[0]), c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[3]);
    st32((c.r[29].w[0] + 8u), c.f[2]);
    c.f[0] = ld32((c.r[29].w[0]));
    c.f[2] = ld32((c.r[29].w[0] + 4u));
    c.f[1] = ld32((c.r[29].w[0] + 8u));
    st32((c.r[4].w[0]), c.f[0]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    st32((c.r[4].w[0] + 8u), c.f[1]);
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E5C00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[0] = ld32((c.r[3].w[0] - 2632u));
    st32((c.r[4].w[0]), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[0] = ld32((c.r[5].w[0] - 2628u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] - 2624u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.f[0]);  c.pc = t; return; }
L_003E5C30:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[0] = ld32((c.r[3].w[0] - 2568u));
    st32((c.r[4].w[0]), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.f[0] = ld32((c.r[5].w[0] - 2564u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] - 2560u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.f[0]);  c.pc = t; return; }
L_003E5C60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[25], ld32((c.r[5].w[0])));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5C80u); set32(c.r[4], c.r[29].w[0] + 32u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E5C80u) [[unlikely]] return; }
L_003E5C80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5C94u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C1B0u; return; } if (c.pc != 0x003E5C94u) [[unlikely]] return; }
L_003E5C94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E5CB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_003E5CC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003E5CD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E5D24; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 22560u);
    set32(c.r[2], c.r[2].w[0] + 22592u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5D0Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 338u, depth + 1u); else { c.pc = 0x001279D0u; return; } if (c.pc != 0x003E5D0Cu) [[unlikely]] return; }
L_003E5D0C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_003E5D28; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5D24u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003E5D24u) [[unlikely]] return; }
L_003E5D24:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003E5D28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E5D40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003E5D90; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 22656u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_003E5D74; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26496u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_003E5D74:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_003E5D8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5D8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003E5D8Cu) [[unlikely]] return; }
L_003E5D8C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003E5D90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E5DA0:
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.f[0] = ld32((c.r[3].w[0] + 160u));
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 164u));
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 168u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.f[0]);  c.pc = t; return; }
L_003E5DC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.f[1] = ld32((c.r[3].w[0] + 132u));
    c.f[0] = ld32((c.r[3].w[0] + 136u));
    c.f[2] = ld32((c.r[3].w[0] + 128u));
    st32((c.r[29].w[0] + 4u), c.f[1]);
    st32((c.r[29].w[0] + 8u), c.f[0]);
    st32((c.r[29].w[0]), c.f[2]);
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    st32((c.r[4].w[0]), c.f[2]);
    c.f[0] = ld32((c.r[29].w[0] + 8u));
    st32((c.r[4].w[0] + 4u), c.f[1]);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003E5E00:
    set32(c.r[29], c.r[29].w[0] - 176u);
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
    { const bool t = c.r[21].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_003E6028; } }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[21].w[0] + 196u));  goto L_003E5EC4; }
    c.budget -= 2;
    if (c.r[21].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_003E5E50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003E5E98; } }
L_003E5E50:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5E5Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E5E5Cu) [[unlikely]] return; }
L_003E5E5C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 17928u);  if (t) { goto L_003E5E7C; } }
L_003E5E6C:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_003E5E7C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003E5E88; } }
L_003E5E7C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E5E6Cu | kUnwind; return; } goto L_003E5E6C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003E5E88:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[5].d[0] = 0ull + 0ull;  goto L_003E5E98; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_003E5E98; } }
L_003E5E98:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_003E5EC0; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[20].w[0] + 4u)));  goto L_003E5EB8; }
    st32((c.r[20].w[0]), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 2;
L_003E5EB8:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 2;
L_003E5EC0:
    c.r[3].d[0] = ld16((c.r[21].w[0] + 196u));
    c.budget -= 1;
L_003E5EC4:
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  goto L_003E602C; }
    c.r[30].d[0] = ld16((c.r[21].w[0] + 218u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003E601C; } }
L_003E5EDC:
    c.r[1].d[0] = c.r[19].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[3], ld32((c.r[21].w[0] + 212u)));  goto L_003E5EF0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_003E5EFC; } }
L_003E5EF0:
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0])));
    c.budget -= 3;
L_003E5EFC:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[19], c.r[19].w[0] + 1u);  goto L_003E601C; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_003E5F48; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5F1Cu); set32(c.r[4], c.r[4].w[0] + 17928u);  if (depth < kMaxDepth) unit_004E(c, 128u, depth + 1u); else { c.pc = 0x00239870u; return; } if (c.pc != 0x003E5F1Cu) [[unlikely]] return; }
L_003E5F1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E5F44; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 4u)));  goto L_003E5F3C; }
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 2;
L_003E5F3C:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_003E5F44:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003E5F48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5F50u); set32(c.r[5], 0u + 256u);  if (depth < kMaxDepth) unit_00B8(c, 125u, depth + 1u); else { c.pc = 0x003E0E90u; return; } if (c.pc != 0x003E5F50u) [[unlikely]] return; }
L_003E5F50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E6018; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5F60u); set32(c.r[4], c.r[18].w[0] + 208u);  if (depth < kMaxDepth) unit_004E(c, 133u, depth + 1u); else { c.pc = 0x00239910u; return; } if (c.pc != 0x003E5F60u) [[unlikely]] return; }
L_003E5F60:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003E600C; } }
L_003E5F6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5F74u); set32(c.r[4], c.r[18].w[0] + 208u);  if (depth < kMaxDepth) unit_004E(c, 133u, depth + 1u); else { c.pc = 0x00239910u; return; } if (c.pc != 0x003E5F74u) [[unlikely]] return; }
L_003E5F74:
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[4], c.r[18].w[0] + 208u);  goto L_003E5F88; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003E5F9C; } }
L_003E5F88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5F90u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 132u, depth + 1u); else { c.pc = 0x00239900u; return; } if (c.pc != 0x003E5F90u) [[unlikely]] return; }
L_003E5F90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5F98u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 131u, depth + 1u); else { c.pc = 0x002398F0u; return; } if (c.pc != 0x003E5F98u) [[unlikely]] return; }
L_003E5F98:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003E5F9C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_003E600C; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_003E5FBC; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5FB8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 276u, depth + 1u); else { c.pc = 0x003E6060u; return; } if (c.pc != 0x003E5FB8u) [[unlikely]] return; }
L_003E5FB8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003E5FBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5FC4u);  if (depth < kMaxDepth) unit_00B8(c, 119u, depth + 1u); else { c.pc = 0x003E0DC0u; return; } if (c.pc != 0x003E5FC4u) [[unlikely]] return; }
L_003E5FC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E6008; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5FD4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 126u, depth + 1u); else { c.pc = 0x00239830u; return; } if (c.pc != 0x003E5FD4u) [[unlikely]] return; }
L_003E5FD4:
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = 0ull + 0ull;  if (t) { goto L_003E5FF8; } }
L_003E5FE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5FE8u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_004E(c, 127u, depth + 1u); else { c.pc = 0x00239840u; return; } if (c.pc != 0x003E5FE8u) [[unlikely]] return; }
L_003E5FE8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E5FF4u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 259u, depth + 1u); else { c.pc = 0x003E5E00u; return; } if (c.pc != 0x003E5FF4u) [[unlikely]] return; }
L_003E5FF4:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_003E5FF8:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[3]);
    c.r[3].d[0] = c.r[22].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E5FE0u | kUnwind; return; } goto L_003E5FE0; }
L_003E6008:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_003E600C:
    c.r[3].d[0] = c.r[17].d[0] < c.r[23].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E5F6Cu | kUnwind; return; } goto L_003E5F6C; } }
L_003E6018:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_003E601C:
    c.r[3].d[0] = c.r[19].d[0] < c.r[30].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld16((c.r[21].w[0] + 218u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E5EDCu | kUnwind; return; } goto L_003E5EDC; }
L_003E6028:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 1;
L_003E602C:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003E6060:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003E6084; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003E60D0; } }
L_003E6084:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6094u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E6094u) [[unlikely]] return; }
L_003E6094:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 17928u);  if (t) { goto L_003E60B4; } }
L_003E60A4:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  goto L_003E60B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_003E60C0; } }
L_003E60B4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E60A4u | kUnwind; return; } goto L_003E60A4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003E60C0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_003E60D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E60D0; } }
L_003E60D0:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003E60FC; }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_003E60F0; }
    st32((c.r[17].w[0]), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 2;
L_003E60F0:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 3;
L_003E60FC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E6110:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[19].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_003E61D0; } }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[19].w[0] + 196u));  goto L_003E6180; }
    set32(c.r[5], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 2u);  if (t) { goto L_003E6174; } }
L_003E6148:
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[5].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 8u));
    c.r[3].d[0] = c.r[3].d[0] & 65527ull;
    st16((c.r[5].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[18].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 24u));
    c.f[0] = fp::max(c.f[1], c.f[0]);
    st32((c.r[18].w[0]), c.f[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 48u)));
    c.budget -= 11;
L_003E6174:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { c.r[3].d[0] = ld16((c.r[5].w[0] + 8u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E6148u | kUnwind; return; } goto L_003E6148; }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 196u));
    c.budget -= 1;
L_003E6180:
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_003E61D4; }
    c.r[16].d[0] = ld16((c.r[19].w[0] + 218u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003E61C4; } }
L_003E6198:
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 212u)));  goto L_003E61AC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003E61B8; } }
L_003E61AC:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 3;
L_003E61B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E61C0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 279u, depth + 1u); else { c.pc = 0x003E6110u; return; } if (c.pc != 0x003E61C0u) [[unlikely]] return; }
L_003E61C0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_003E61C4:
    c.r[3].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[19].w[0] + 218u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E6198u | kUnwind; return; } goto L_003E6198; }
L_003E61D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_003E61D4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003E61F0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003E5CD0u | kUnwind; return; } goto L_003E5CD0; }
L_003E6200:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 124u)));
    c.f[21] = c.f[12];
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6240u); c.f[20] = c.f[13];  if (depth < kMaxDepth) unit_00F4(c, 331u, depth + 1u); else { c.pc = 0x004D3FA0u; return; } if (c.pc != 0x003E6240u) [[unlikely]] return; }
L_003E6240:
    set32(c.r[4], ld32((c.r[18].w[0] + 124u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6250u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F4(c, 331u, depth + 1u); else { c.pc = 0x004D3FA0u; return; } if (c.pc != 0x003E6250u) [[unlikely]] return; }
L_003E6250:
    st32((c.r[29].w[0] + 160u), c.r[19].w[0]);
    st32((c.r[29].w[0] + 188u), c.f[21]);
    st32((c.r[29].w[0] + 168u), c.r[16].w[0]);
    set32(c.r[3], 0u + 4u);
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 176u), 0u);
    st32((c.r[29].w[0] + 180u), 0u);
    st32((c.r[29].w[0] + 184u), 0u);
    st32((c.r[29].w[0] + 164u), c.r[18].w[0]);
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[29].w[0] + 176u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[29].w[0] + 180u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[29].w[0] + 184u), c.f[0]);
    st32((c.r[29].w[0] + 144u), 0u);
    st32((c.r[29].w[0] + 192u), c.f[20]);
    st32((c.r[29].w[0] + 148u), 0u);
    st32((c.r[29].w[0] + 152u), 0u);
    st32((c.r[29].w[0] + 156u), 0u);
    st32((c.r[29].w[0] + 128u), 0u);
    st32((c.r[29].w[0] + 132u), 0u);
    st32((c.r[29].w[0] + 136u), 0u);
    st32((c.r[29].w[0] + 140u), 0u);
    st32((c.r[29].w[0] + 112u), 0u);
    st32((c.r[29].w[0] + 116u), 0u);
    st32((c.r[29].w[0] + 120u), 0u);
    st32((c.r[29].w[0] + 124u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 424u)));
    c.budget -= 31;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 124u)));  goto L_003E62DC; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.f[0] = ld32((c.r[29].w[0] + 192u));  goto L_003E6358; }
    set32(c.r[3], ld32((c.r[18].w[0] + 124u)));
    c.budget -= 1;
L_003E62DC:
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], ld32((c.r[3].w[0] + 1052u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003E6354; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003E62F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 31472u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6310u); set32(c.r[5], c.r[29].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E6310u) [[unlikely]] return; }
L_003E6310:
    c.f[1] = ld32((c.r[29].w[0] + 120u));
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_003E6348; }
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    set32(c.r[3], ld32((c.r[29].w[0] + 112u)));
    st32((c.r[29].w[0] + 148u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 152u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    st32((c.r[29].w[0] + 144u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 9;
L_003E6348:
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E62F0u | kUnwind; return; } goto L_003E62F0; } }
L_003E6354:
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    c.budget -= 1;
L_003E6358:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[6], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[2], 0u + 4u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 168u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 172u)));
    st32((c.r[29].w[0] + 96u), 0u);
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 104u), 0u);
    st32((c.r[29].w[0] + 192u), c.f[0]);
    st32((c.r[29].w[0] + 108u), 0u);
    st32((c.r[29].w[0] + 160u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 164u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 168u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 172u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 424u)));
    c.budget -= 20;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[6].w[0] + 124u)));  goto L_003E63B8; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.f[3] = ld32((c.r[29].w[0] + 136u));  goto L_003E6434; }
    set32(c.r[3], ld32((c.r[6].w[0] + 124u)));
    c.budget -= 1;
L_003E63B8:
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], ld32((c.r[3].w[0] + 1052u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003E6430; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003E63CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 31472u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E63ECu); set32(c.r[5], c.r[29].w[0] + 96u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E63ECu) [[unlikely]] return; }
L_003E63EC:
    c.f[1] = ld32((c.r[29].w[0] + 104u));
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_003E6424; }
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    c.f[0] = ld32((c.r[29].w[0] + 104u));
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 136u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    st32((c.r[29].w[0] + 128u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 9;
L_003E6424:
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003E63CCu | kUnwind; return; } goto L_003E63CC; } }
L_003E6430:
    c.f[3] = ld32((c.r[29].w[0] + 136u));
    c.budget -= 1;
L_003E6434:
    c.f[2] = ld32((c.r[29].w[0] + 152u));
    c.f[0] = 0u;
    c.f[1] = fp::add(c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003E6488; } }
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[3]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003E646C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 156u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6464u); set32(c.r[4], c.r[29].w[0] + 144u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E6464u) [[unlikely]] return; }
L_003E6464:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003E6488; } }
L_003E646C:
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[3]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003E6488; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6484u); set32(c.r[4], c.r[29].w[0] + 128u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E6484u) [[unlikely]] return; }
L_003E6484:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003E6488:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003E653C; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], ld32((c.r[3].w[0] + 124u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 1052u)));
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 160u)));  goto L_003E64C4; }
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 12u), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 7;
L_003E64C4:
    set32(c.r[3], 0u + 1u);
    c.f[1] = fp::mul(c.f[20], c.f[21]);
    set32(c.r[2], ld32((c.r[2].w[0] + 124u)));
    st8((c.r[2].w[0] + 2316u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 2318u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[2].w[0] + 2320u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[2].w[0] + 2324u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[2].w[0] + 2328u), c.f[0]);
    st32((c.r[2].w[0] + 2332u), c.f[1]);
    st32((c.r[2].w[0] + 2336u), 0u);
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 124u)));
    st8((c.r[2].w[0] + 2316u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 2318u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[2].w[0] + 2320u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[2].w[0] + 2324u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    st32((c.r[2].w[0] + 2328u), c.f[0]);
    st32((c.r[2].w[0] + 2332u), c.f[1]);
    st32((c.r[2].w[0] + 2336u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 29;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6538u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E6538u) [[unlikely]] return; }
L_003E6538:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003E653C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_003E6560:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6578u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 363u, depth + 1u); else { c.pc = 0x003E6E70u; return; } if (c.pc != 0x003E6578u) [[unlikely]] return; }
L_003E6578:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] + 48u);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[8], c.r[3].w[0] + 1u);  goto L_003E6594; }
    set32(c.r[8], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_003E6594:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[2].w[0] + 48u);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[3].w[0] + 1u);  goto L_003E65B0; }
    set32(c.r[7], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_003E65B0:
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 9870u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E65C4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003E65C4u) [[unlikely]] return; }
L_003E65C4:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E65D0u); set32(c.r[4], ld32((c.r[2].w[0] + 124u)));  if (depth < kMaxDepth) unit_00F5(c, 592u, depth + 1u); else { c.pc = 0x004D7EB0u; return; } if (c.pc != 0x003E65D0u) [[unlikely]] return; }
L_003E65D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1200u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003E6644; }
    set32(c.r[5], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E65FCu); set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));  if (depth < kMaxDepth) unit_00B3(c, 85u, depth + 1u); else { c.pc = 0x003CCC70u; return; } if (c.pc != 0x003E65FCu) [[unlikely]] return; }
L_003E65FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E6640; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003E6640; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E662Cu); set32(c.r[16], ld32((c.r[2].w[0] + 92u)));  if (depth < kMaxDepth) unit_00EE(c, 275u, depth + 1u); else { c.pc = 0x004BA5A0u; return; } if (c.pc != 0x003E662Cu) [[unlikely]] return; }
L_003E662C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 15u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6640u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 14u, depth + 1u); else { c.pc = 0x0044C290u; return; } if (c.pc != 0x003E6640u) [[unlikely]] return; }
L_003E6640:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003E6644:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E6660:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6678u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 363u, depth + 1u); else { c.pc = 0x003E6E70u; return; } if (c.pc != 0x003E6678u) [[unlikely]] return; }
L_003E6678:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] + 48u);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[8], c.r[3].w[0] + 1u);  goto L_003E6694; }
    set32(c.r[8], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_003E6694:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[2].w[0] + 48u);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[3].w[0] + 1u);  goto L_003E66B0; }
    set32(c.r[7], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_003E66B0:
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 9841u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E66C4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003E66C4u) [[unlikely]] return; }
L_003E66C4:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E66D0u); set32(c.r[4], ld32((c.r[2].w[0] + 124u)));  if (depth < kMaxDepth) unit_00F6(c, 46u, depth + 1u); else { c.pc = 0x004D8930u; return; } if (c.pc != 0x003E66D0u) [[unlikely]] return; }
L_003E66D0:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E66DCu); set32(c.r[4], ld32((c.r[2].w[0] + 124u)));  if (depth < kMaxDepth) unit_00F7(c, 61u, depth + 1u); else { c.pc = 0x004DCA10u; return; } if (c.pc != 0x003E66DCu) [[unlikely]] return; }
L_003E66DC:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1200u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003E6750; }
    set32(c.r[5], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6708u); set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));  if (depth < kMaxDepth) unit_00B3(c, 85u, depth + 1u); else { c.pc = 0x003CCC70u; return; } if (c.pc != 0x003E6708u) [[unlikely]] return; }
L_003E6708:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E674C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003E674C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6738u); set32(c.r[16], ld32((c.r[2].w[0] + 92u)));  if (depth < kMaxDepth) unit_00EE(c, 275u, depth + 1u); else { c.pc = 0x004BA5A0u; return; } if (c.pc != 0x003E6738u) [[unlikely]] return; }
L_003E6738:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 5u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E674Cu); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 14u, depth + 1u); else { c.pc = 0x0044C290u; return; } if (c.pc != 0x003E674Cu) [[unlikely]] return; }
L_003E674C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003E6750:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E6760:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6778u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 363u, depth + 1u); else { c.pc = 0x003E6E70u; return; } if (c.pc != 0x003E6778u) [[unlikely]] return; }
L_003E6778:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] + 48u);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[8], c.r[3].w[0] + 1u);  goto L_003E6794; }
    set32(c.r[8], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_003E6794:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[2].w[0] + 48u);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[3].w[0] + 1u);  goto L_003E67B0; }
    set32(c.r[7], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_003E67B0:
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 9811u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E67C4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003E67C4u) [[unlikely]] return; }
L_003E67C4:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E67D0u); set32(c.r[4], ld32((c.r[2].w[0] + 124u)));  if (depth < kMaxDepth) unit_00F7(c, 61u, depth + 1u); else { c.pc = 0x004DCA10u; return; } if (c.pc != 0x003E67D0u) [[unlikely]] return; }
L_003E67D0:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E67DCu); set32(c.r[4], ld32((c.r[2].w[0] + 124u)));  if (depth < kMaxDepth) unit_00F5(c, 592u, depth + 1u); else { c.pc = 0x004D7EB0u; return; } if (c.pc != 0x003E67DCu) [[unlikely]] return; }
L_003E67DC:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 124u)));
    st8((c.r[3].w[0] + 1186u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1200u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003E685C; }
    set32(c.r[5], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6814u); set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));  if (depth < kMaxDepth) unit_00B3(c, 85u, depth + 1u); else { c.pc = 0x003CCC70u; return; } if (c.pc != 0x003E6814u) [[unlikely]] return; }
L_003E6814:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E6858; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003E6858; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6844u); set32(c.r[16], ld32((c.r[2].w[0] + 92u)));  if (depth < kMaxDepth) unit_00EE(c, 275u, depth + 1u); else { c.pc = 0x004BA5A0u; return; } if (c.pc != 0x003E6844u) [[unlikely]] return; }
L_003E6844:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 9u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6858u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 14u, depth + 1u); else { c.pc = 0x0044C290u; return; } if (c.pc != 0x003E6858u) [[unlikely]] return; }
L_003E6858:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003E685C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E6870:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6888u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 363u, depth + 1u); else { c.pc = 0x003E6E70u; return; } if (c.pc != 0x003E6888u) [[unlikely]] return; }
L_003E6888:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] + 48u);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[8], c.r[3].w[0] + 1u);  goto L_003E68A4; }
    set32(c.r[8], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_003E68A4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[2].w[0] + 48u);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[3].w[0] + 1u);  goto L_003E68C0; }
    set32(c.r[7], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_003E68C0:
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 9780u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E68D4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003E68D4u) [[unlikely]] return; }
L_003E68D4:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E68E0u); set32(c.r[4], ld32((c.r[2].w[0] + 124u)));  if (depth < kMaxDepth) unit_00F6(c, 46u, depth + 1u); else { c.pc = 0x004D8930u; return; } if (c.pc != 0x003E68E0u) [[unlikely]] return; }
L_003E68E0:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E68ECu); set32(c.r[4], ld32((c.r[2].w[0] + 124u)));  if (depth < kMaxDepth) unit_00F7(c, 61u, depth + 1u); else { c.pc = 0x004DCA10u; return; } if (c.pc != 0x003E68ECu) [[unlikely]] return; }
L_003E68EC:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1200u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003E6960; }
    set32(c.r[5], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6918u); set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));  if (depth < kMaxDepth) unit_00B3(c, 85u, depth + 1u); else { c.pc = 0x003CCC70u; return; } if (c.pc != 0x003E6918u) [[unlikely]] return; }
L_003E6918:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E695C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003E695C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6948u); set32(c.r[16], ld32((c.r[2].w[0] + 92u)));  if (depth < kMaxDepth) unit_00EE(c, 275u, depth + 1u); else { c.pc = 0x004BA5A0u; return; } if (c.pc != 0x003E6948u) [[unlikely]] return; }
L_003E6948:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 11u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E695Cu); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 14u, depth + 1u); else { c.pc = 0x0044C290u; return; } if (c.pc != 0x003E695Cu) [[unlikely]] return; }
L_003E695C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003E6960:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E6970:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6988u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 363u, depth + 1u); else { c.pc = 0x003E6E70u; return; } if (c.pc != 0x003E6988u) [[unlikely]] return; }
L_003E6988:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] + 48u);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[8], c.r[3].w[0] + 1u);  goto L_003E69A4; }
    set32(c.r[8], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_003E69A4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[2].w[0] + 48u);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[3].w[0] + 1u);  goto L_003E69C0; }
    set32(c.r[7], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_003E69C0:
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 9750u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E69D4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003E69D4u) [[unlikely]] return; }
L_003E69D4:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E69E0u); set32(c.r[4], ld32((c.r[2].w[0] + 124u)));  if (depth < kMaxDepth) unit_00F6(c, 46u, depth + 1u); else { c.pc = 0x004D8930u; return; } if (c.pc != 0x003E69E0u) [[unlikely]] return; }
L_003E69E0:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1200u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003E6A54; }
    set32(c.r[5], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6A0Cu); set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));  if (depth < kMaxDepth) unit_00B3(c, 85u, depth + 1u); else { c.pc = 0x003CCC70u; return; } if (c.pc != 0x003E6A0Cu) [[unlikely]] return; }
L_003E6A0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E6A50; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003E6A50; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6A3Cu); set32(c.r[16], ld32((c.r[2].w[0] + 92u)));  if (depth < kMaxDepth) unit_00EE(c, 275u, depth + 1u); else { c.pc = 0x004BA5A0u; return; } if (c.pc != 0x003E6A3Cu) [[unlikely]] return; }
L_003E6A3C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 12u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6A50u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 14u, depth + 1u); else { c.pc = 0x0044C290u; return; } if (c.pc != 0x003E6A50u) [[unlikely]] return; }
L_003E6A50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003E6A54:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E6A70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6A88u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 363u, depth + 1u); else { c.pc = 0x003E6E70u; return; } if (c.pc != 0x003E6A88u) [[unlikely]] return; }
L_003E6A88:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] + 48u);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[8], c.r[3].w[0] + 1u);  goto L_003E6AA4; }
    set32(c.r[8], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_003E6AA4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[2].w[0] + 48u);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[3].w[0] + 1u);  goto L_003E6AC0; }
    set32(c.r[7], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_003E6AC0:
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 9724u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6AD4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003E6AD4u) [[unlikely]] return; }
L_003E6AD4:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6AE0u); set32(c.r[4], ld32((c.r[2].w[0] + 124u)));  if (depth < kMaxDepth) unit_00F6(c, 46u, depth + 1u); else { c.pc = 0x004D8930u; return; } if (c.pc != 0x003E6AE0u) [[unlikely]] return; }
L_003E6AE0:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6AECu); set32(c.r[4], ld32((c.r[2].w[0] + 124u)));  if (depth < kMaxDepth) unit_00F7(c, 61u, depth + 1u); else { c.pc = 0x004DCA10u; return; } if (c.pc != 0x003E6AECu) [[unlikely]] return; }
L_003E6AEC:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1200u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003E6B60; }
    set32(c.r[5], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6B18u); set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));  if (depth < kMaxDepth) unit_00B3(c, 85u, depth + 1u); else { c.pc = 0x003CCC70u; return; } if (c.pc != 0x003E6B18u) [[unlikely]] return; }
L_003E6B18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E6B5C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003E6B5C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6B48u); set32(c.r[16], ld32((c.r[2].w[0] + 92u)));  if (depth < kMaxDepth) unit_00EE(c, 275u, depth + 1u); else { c.pc = 0x004BA5A0u; return; } if (c.pc != 0x003E6B48u) [[unlikely]] return; }
L_003E6B48:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 10u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6B5Cu); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 14u, depth + 1u); else { c.pc = 0x0044C290u; return; } if (c.pc != 0x003E6B5Cu) [[unlikely]] return; }
L_003E6B5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003E6B60:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E6B70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6B88u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 363u, depth + 1u); else { c.pc = 0x003E6E70u; return; } if (c.pc != 0x003E6B88u) [[unlikely]] return; }
L_003E6B88:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] + 48u);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[8], c.r[3].w[0] + 1u);  goto L_003E6BA4; }
    set32(c.r[8], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_003E6BA4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[2].w[0] + 48u);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[3].w[0] + 1u);  goto L_003E6BC0; }
    set32(c.r[7], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_003E6BC0:
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 9695u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6BD4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003E6BD4u) [[unlikely]] return; }
L_003E6BD4:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6BE0u); set32(c.r[4], ld32((c.r[2].w[0] + 124u)));  if (depth < kMaxDepth) unit_00F6(c, 46u, depth + 1u); else { c.pc = 0x004D8930u; return; } if (c.pc != 0x003E6BE0u) [[unlikely]] return; }
L_003E6BE0:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6BECu); set32(c.r[4], ld32((c.r[2].w[0] + 124u)));  if (depth < kMaxDepth) unit_00F7(c, 61u, depth + 1u); else { c.pc = 0x004DCA10u; return; } if (c.pc != 0x003E6BECu) [[unlikely]] return; }
L_003E6BEC:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1200u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003E6C60; }
    set32(c.r[5], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6C18u); set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));  if (depth < kMaxDepth) unit_00B3(c, 85u, depth + 1u); else { c.pc = 0x003CCC70u; return; } if (c.pc != 0x003E6C18u) [[unlikely]] return; }
L_003E6C18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E6C5C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003E6C5C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6C48u); set32(c.r[16], ld32((c.r[2].w[0] + 92u)));  if (depth < kMaxDepth) unit_00EE(c, 275u, depth + 1u); else { c.pc = 0x004BA5A0u; return; } if (c.pc != 0x003E6C48u) [[unlikely]] return; }
L_003E6C48:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 13u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6C5Cu); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 14u, depth + 1u); else { c.pc = 0x0044C290u; return; } if (c.pc != 0x003E6C5Cu) [[unlikely]] return; }
L_003E6C5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003E6C60:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E6C70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6C88u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 363u, depth + 1u); else { c.pc = 0x003E6E70u; return; } if (c.pc != 0x003E6C88u) [[unlikely]] return; }
L_003E6C88:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] + 48u);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[8], c.r[3].w[0] + 1u);  goto L_003E6CA4; }
    set32(c.r[8], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_003E6CA4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[2].w[0] + 48u);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[3].w[0] + 1u);  goto L_003E6CC0; }
    set32(c.r[7], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_003E6CC0:
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 9666u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6CD4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003E6CD4u) [[unlikely]] return; }
L_003E6CD4:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6CE0u); set32(c.r[4], ld32((c.r[2].w[0] + 124u)));  if (depth < kMaxDepth) unit_00F6(c, 46u, depth + 1u); else { c.pc = 0x004D8930u; return; } if (c.pc != 0x003E6CE0u) [[unlikely]] return; }
L_003E6CE0:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6CECu); set32(c.r[4], ld32((c.r[2].w[0] + 124u)));  if (depth < kMaxDepth) unit_00F7(c, 61u, depth + 1u); else { c.pc = 0x004DCA10u; return; } if (c.pc != 0x003E6CECu) [[unlikely]] return; }
L_003E6CEC:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1200u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003E6D60; }
    set32(c.r[5], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6D18u); set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));  if (depth < kMaxDepth) unit_00B3(c, 85u, depth + 1u); else { c.pc = 0x003CCC70u; return; } if (c.pc != 0x003E6D18u) [[unlikely]] return; }
L_003E6D18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E6D5C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003E6D5C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6D48u); set32(c.r[16], ld32((c.r[2].w[0] + 92u)));  if (depth < kMaxDepth) unit_00EE(c, 275u, depth + 1u); else { c.pc = 0x004BA5A0u; return; } if (c.pc != 0x003E6D48u) [[unlikely]] return; }
L_003E6D48:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 14u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6D5Cu); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 14u, depth + 1u); else { c.pc = 0x0044C290u; return; } if (c.pc != 0x003E6D5Cu) [[unlikely]] return; }
L_003E6D5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003E6D60:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E6D70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6D88u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 363u, depth + 1u); else { c.pc = 0x003E6E70u; return; } if (c.pc != 0x003E6D88u) [[unlikely]] return; }
L_003E6D88:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[2].w[0] + 48u);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[8], c.r[3].w[0] + 1u);  goto L_003E6DA4; }
    set32(c.r[8], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_003E6DA4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[2].w[0] + 48u);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[3].w[0] + 1u);  goto L_003E6DC0; }
    set32(c.r[7], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_003E6DC0:
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 9640u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6DD4u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x003E6DD4u) [[unlikely]] return; }
L_003E6DD4:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6DE0u); set32(c.r[4], ld32((c.r[2].w[0] + 124u)));  if (depth < kMaxDepth) unit_00F6(c, 46u, depth + 1u); else { c.pc = 0x004D8930u; return; } if (c.pc != 0x003E6DE0u) [[unlikely]] return; }
L_003E6DE0:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1200u));
    c.r[3].d[0] = c.r[3].d[0] << 57;
    c.r[3].d[0] = c.r[3].d[0] >> 63;
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_003E6E54; }
    set32(c.r[5], ld32((c.r[4].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6E0Cu); set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));  if (depth < kMaxDepth) unit_00B3(c, 85u, depth + 1u); else { c.pc = 0x003CCC70u; return; } if (c.pc != 0x003E6E0Cu) [[unlikely]] return; }
L_003E6E0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003E6E50; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003E6E50; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6E3Cu); set32(c.r[16], ld32((c.r[2].w[0] + 92u)));  if (depth < kMaxDepth) unit_00EE(c, 275u, depth + 1u); else { c.pc = 0x004BA5A0u; return; } if (c.pc != 0x003E6E3Cu) [[unlikely]] return; }
L_003E6E3C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 7u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6E50u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 14u, depth + 1u); else { c.pc = 0x0044C290u; return; } if (c.pc != 0x003E6E50u) [[unlikely]] return; }
L_003E6E50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003E6E54:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E6E70:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.f[1] = ld32((c.r[28].w[0] - 32232u));
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[4].w[0] + 12u));
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 420u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6EA4u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00F9(c, 69u, depth + 1u); else { c.pc = 0x004E4DF0u; return; } if (c.pc != 0x003E6EA4u) [[unlikely]] return; }
L_003E6EA4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 4u)));  goto L_003E6F2C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[16], ld32((c.r[28].w[0] - 27036u)));
    set32(c.r[2], c.r[2].w[0] - 9586u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6ED0u); st32((c.r[29].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B1(c, 160u, depth + 1u); else { c.pc = 0x003C5A20u; return; } if (c.pc != 0x003E6ED0u) [[unlikely]] return; }
L_003E6ED0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 88u);  goto L_003E6EE4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003E6F08; } }
L_003E6EE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6EECu); set32(c.r[5], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_00B1(c, 159u, depth + 1u); else { c.pc = 0x003C5A10u; return; } if (c.pc != 0x003E6EECu) [[unlikely]] return; }
L_003E6EEC:
    set32(c.r[5], c.r[16].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 84u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6EFCu); set32(c.r[6], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_00B1(c, 153u, depth + 1u); else { c.pc = 0x003C5910u; return; } if (c.pc != 0x003E6EFCu) [[unlikely]] return; }
L_003E6EFC:
    set32(c.r[4], c.r[29].w[0] + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6F08u); set32(c.r[5], c.r[29].w[0] + 84u);  if (depth < kMaxDepth) unit_00B1(c, 152u, depth + 1u); else { c.pc = 0x003C58F0u; return; } if (c.pc != 0x003E6F08u) [[unlikely]] return; }
L_003E6F08:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E6F28; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0400000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6F28u); set32(c.r[4], ld32((c.r[3].w[0] + 420u)));  if (depth < kMaxDepth) unit_00F9(c, 69u, depth + 1u); else { c.pc = 0x004E4DF0u; return; } if (c.pc != 0x003E6F28u) [[unlikely]] return; }
L_003E6F28:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_003E6F2C:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 92u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6F40u); set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));  if (depth < kMaxDepth) unit_00B3(c, 85u, depth + 1u); else { c.pc = 0x003CCC70u; return; } if (c.pc != 0x003E6F40u) [[unlikely]] return; }
L_003E6F40:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 4u)));  goto L_003E7034; }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[4], ld32((c.r[3].w[0] + 420u)));
    c.f[0] = ld32((c.r[4].w[0] + 48u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E6F64u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00F9(c, 71u, depth + 1u); else { c.pc = 0x004E4E50u; return; } if (c.pc != 0x003E6F64u) [[unlikely]] return; }
L_003E6F64:
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[1] = fp::min(c.f[0], c.f[2]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 13;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[1], c.f[0]);  goto L_003E6FA8; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 4u)));  if (t) { goto L_003E6FC0; } }
L_003E6FA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 6;
L_003E6FC0:
    set32(c.r[3], ld32((c.r[2].w[0] + 132u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    c.r[1].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);  goto L_003E6FD8; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003E6FD8:
    st32((c.r[3].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 4u)));  goto L_003E71BC; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_003E71B8; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7018u); set32(c.r[16], ld32((c.r[3].w[0] + 92u)));  if (depth < kMaxDepth) unit_00EE(c, 275u, depth + 1u); else { c.pc = 0x004BA5A0u; return; } if (c.pc != 0x003E7018u) [[unlikely]] return; }
L_003E7018:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E702Cu); set32(c.r[6], 0u + 17u);  if (depth < kMaxDepth) unit_00D3(c, 14u, depth + 1u); else { c.pc = 0x0044C290u; return; } if (c.pc != 0x003E702Cu) [[unlikely]] return; }
L_003E702C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E71B8; } }
L_003E7034:
    set32(c.r[2], ld32((c.r[3].w[0] + 124u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 1197u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003E7048; } }
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003E7048:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 92u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E705Cu); set32(c.r[5], ld32((c.r[3].w[0] + 92u)));  if (depth < kMaxDepth) unit_00B3(c, 75u, depth + 1u); else { c.pc = 0x003CCAE0u; return; } if (c.pc != 0x003E705Cu) [[unlikely]] return; }
L_003E705C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E7068; } }
    c.r[17].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003E7068:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.f[1] = ld32((c.r[28].w[0] - 32340u));  goto L_003E708C; }
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 12u), c.f[0]);
    c.f[1] = ld32((c.r[28].w[0] - 32340u));
    c.budget -= 7;
L_003E708C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    set32(c.r[4], ld32((c.r[2].w[0] + 420u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E70A0u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00F9(c, 71u, depth + 1u); else { c.pc = 0x004E4E50u; return; } if (c.pc != 0x003E70A0u) [[unlikely]] return; }
L_003E70A0:
    c.f[1] = ld32((c.r[18].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[1], c.f[0]);  goto L_003E70CC; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[4], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 4u)));  if (t) { goto L_003E70E4; } }
L_003E70CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[0]);
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 6;
L_003E70E4:
    set32(c.r[3], ld32((c.r[2].w[0] + 132u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1200u));
    c.r[2].d[0] = c.r[2].d[0] << 57;
    c.r[2].d[0] = c.r[2].d[0] >> 63;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E71B8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E71B8; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003E71B8; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  goto L_003E7158; }
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7140u); set32(c.r[17], ld32((c.r[3].w[0] + 92u)));  if (depth < kMaxDepth) unit_00EE(c, 275u, depth + 1u); else { c.pc = 0x004BA5A0u; return; } if (c.pc != 0x003E7140u) [[unlikely]] return; }
L_003E7140:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7154u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00D3(c, 14u, depth + 1u); else { c.pc = 0x0044C290u; return; } if (c.pc != 0x003E7154u) [[unlikely]] return; }
L_003E7154:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_003E7158:
    c.f[1] = ld32((c.r[18].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[19], ld32((c.r[4].w[0] + 92u)));  if (t) { goto L_003E7184; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[17], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E719C; } }
L_003E7184:
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[0]);
    c.r[17].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.budget -= 6;
L_003E719C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E71A4u);  if (depth < kMaxDepth) unit_00EE(c, 275u, depth + 1u); else { c.pc = 0x004BA5A0u; return; } if (c.pc != 0x003E71A4u) [[unlikely]] return; }
L_003E71A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E71B8u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 6u, depth + 1u); else { c.pc = 0x0044C080u; return; } if (c.pc != 0x003E71B8u) [[unlikely]] return; }
L_003E71B8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_003E71BC:
    set32(c.r[4], ld32((c.r[2].w[0] + 124u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E71C8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F6(c, 71u, depth + 1u); else { c.pc = 0x004D8D90u; return; } if (c.pc != 0x003E71C8u) [[unlikely]] return; }
L_003E71C8:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 124u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E71D8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F6(c, 71u, depth + 1u); else { c.pc = 0x004D8D90u; return; } if (c.pc != 0x003E71D8u) [[unlikely]] return; }
L_003E71D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003E7200:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[0] = c.r[3].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E72E8; } }
    c.f[1] = ld32((c.r[17].w[0] + 28u));
    c.f[0] = ld32((c.r[28].w[0] - 30380u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[16].w[0] + 8u), 0u);  goto L_003E72EC; }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E724Cu); set32(c.r[4], ld32((c.r[2].w[0] + 124u)));  if (depth < kMaxDepth) unit_00F4(c, 314u, depth + 1u); else { c.pc = 0x004D3C00u; return; } if (c.pc != 0x003E724Cu) [[unlikely]] return; }
L_003E724C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E72E8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7260u); set32(c.r[4], ld32((c.r[2].w[0] + 124u)));  if (depth < kMaxDepth) unit_00F4(c, 314u, depth + 1u); else { c.pc = 0x004D3C00u; return; } if (c.pc != 0x003E7260u) [[unlikely]] return; }
L_003E7260:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E72E8; } }
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[4], ld32((c.r[5].w[0] + 124u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 1052u)));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003E72A0; } }
    c.f[1] = ld32((c.r[4].w[0] + 1332u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_003E72A0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003E72A0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003E72E8; } }
    st32((c.r[16].w[0]), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003E0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42480000u);
    set32(c.r[4], c.r[4].w[0] + 30720u);
    c.f[1] = c.r[3].w[0];
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 12u), c.r[4].w[0]);
    c.f[2] = ld32((c.r[28].w[0] - 30376u));
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[0]));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.f[0]);  if (t) { goto L_003E72EC; } }
L_003E72E8:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_003E72EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E7300:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] + 124u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7324u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F4(c, 314u, depth + 1u); else { c.pc = 0x004D3C00u; return; } if (c.pc != 0x003E7324u) [[unlikely]] return; }
L_003E7324:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), 0u);  goto L_003E73DC; }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7338u); set32(c.r[4], ld32((c.r[2].w[0] + 124u)));  if (depth < kMaxDepth) unit_00F4(c, 314u, depth + 1u); else { c.pc = 0x004D3C00u; return; } if (c.pc != 0x003E7338u) [[unlikely]] return; }
L_003E7338:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E73D8; } }
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[4], ld32((c.r[5].w[0] + 124u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1169u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003E73D8; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1194u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003E736C; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1163u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_003E736C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003E73AC; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1956u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003E738C; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1957u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_003E738C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003E739C; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1958u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_003E739C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003E73AC; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1959u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_003E73AC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003E73D8; } }
    st32((c.r[16].w[0]), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003E0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + 30832u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437A0000u);
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_003E73DC; } }
L_003E73D8:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_003E73DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E73F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] + 124u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7414u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F4(c, 314u, depth + 1u); else { c.pc = 0x004D3C00u; return; } if (c.pc != 0x003E7414u) [[unlikely]] return; }
L_003E7414:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), 0u);  goto L_003E7474; }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7428u); set32(c.r[4], ld32((c.r[2].w[0] + 124u)));  if (depth < kMaxDepth) unit_00F4(c, 314u, depth + 1u); else { c.pc = 0x004D3C00u; return; } if (c.pc != 0x003E7428u) [[unlikely]] return; }
L_003E7428:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E7470; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.f[0] = 0u;
    set32(c.r[3], ld32((c.r[4].w[0] + 124u)));
    c.f[1] = ld32((c.r[3].w[0] + 1340u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003E7470; } }
    st32((c.r[16].w[0]), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43160000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003E0000u);
    set32(c.r[4], c.r[4].w[0] + 30944u);
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_003E7474; } }
L_003E7470:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_003E7474:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E7490:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] + 124u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E74B4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F4(c, 314u, depth + 1u); else { c.pc = 0x004D3C00u; return; } if (c.pc != 0x003E74B4u) [[unlikely]] return; }
L_003E74B4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), 0u);  goto L_003E750C; }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E74C8u); set32(c.r[4], ld32((c.r[2].w[0] + 124u)));  if (depth < kMaxDepth) unit_00F4(c, 314u, depth + 1u); else { c.pc = 0x004D3C00u; return; } if (c.pc != 0x003E74C8u) [[unlikely]] return; }
L_003E74C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E7508; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 124u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1185u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003E7508; } }
    st32((c.r[16].w[0]), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437A0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003E0000u);
    set32(c.r[4], c.r[4].w[0] + 31056u);
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_003E750C; } }
L_003E7508:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_003E750C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E7520:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] + 124u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7544u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F4(c, 314u, depth + 1u); else { c.pc = 0x004D3C00u; return; } if (c.pc != 0x003E7544u) [[unlikely]] return; }
L_003E7544:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), 0u);  goto L_003E75C0; }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7558u); set32(c.r[4], ld32((c.r[2].w[0] + 124u)));  if (depth < kMaxDepth) unit_00F4(c, 314u, depth + 1u); else { c.pc = 0x004D3C00u; return; } if (c.pc != 0x003E7558u) [[unlikely]] return; }
L_003E7558:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E75BC; } }
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[4], ld32((c.r[5].w[0] + 124u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1188u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003E7590; } }
    c.f[1] = ld32((c.r[4].w[0] + 1116u));
    c.f[0] = ld32((c.r[28].w[0] - 32228u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_003E7590; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003E7590:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003E75BC; } }
    st32((c.r[16].w[0]), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003E0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + 31168u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43480000u);
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_003E75C0; } }
L_003E75BC:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_003E75C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E75E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] + 124u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7604u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F4(c, 314u, depth + 1u); else { c.pc = 0x004D3C00u; return; } if (c.pc != 0x003E7604u) [[unlikely]] return; }
L_003E7604:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), 0u);  goto L_003E7680; }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7618u); set32(c.r[4], ld32((c.r[2].w[0] + 124u)));  if (depth < kMaxDepth) unit_00F4(c, 314u, depth + 1u); else { c.pc = 0x004D3C00u; return; } if (c.pc != 0x003E7618u) [[unlikely]] return; }
L_003E7618:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E767C; } }
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[4], ld32((c.r[5].w[0] + 124u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1188u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003E7650; } }
    c.f[1] = ld32((c.r[4].w[0] + 1116u));
    c.f[0] = ld32((c.r[28].w[0] - 32288u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_003E7650; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003E7650:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003E767C; } }
    st32((c.r[16].w[0]), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003E0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + 31280u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43480000u);
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_003E7680; } }
L_003E767C:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_003E7680:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E76A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] + 124u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E76C4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F4(c, 314u, depth + 1u); else { c.pc = 0x004D3C00u; return; } if (c.pc != 0x003E76C4u) [[unlikely]] return; }
L_003E76C4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), 0u);  goto L_003E771C; }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E76D8u); set32(c.r[4], ld32((c.r[2].w[0] + 124u)));  if (depth < kMaxDepth) unit_00F4(c, 314u, depth + 1u); else { c.pc = 0x004D3C00u; return; } if (c.pc != 0x003E76D8u) [[unlikely]] return; }
L_003E76D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E7718; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 124u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1187u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003E7718; } }
    st32((c.r[16].w[0]), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437A0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003E0000u);
    set32(c.r[4], c.r[4].w[0] + 31392u);
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[3].w[0]);  if (t) { goto L_003E771C; } }
L_003E7718:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_003E771C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E7730:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] + 124u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7754u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F4(c, 314u, depth + 1u); else { c.pc = 0x004D3C00u; return; } if (c.pc != 0x003E7754u) [[unlikely]] return; }
L_003E7754:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 8u), 0u);  goto L_003E77E4; }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7768u); set32(c.r[4], ld32((c.r[2].w[0] + 124u)));  if (depth < kMaxDepth) unit_00F4(c, 314u, depth + 1u); else { c.pc = 0x004D3C00u; return; } if (c.pc != 0x003E7768u) [[unlikely]] return; }
L_003E7768:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E77E0; } }
    c.f[1] = ld32((c.r[17].w[0] + 28u));
    c.f[0] = ld32((c.r[28].w[0] - 30388u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003E77E0; } }
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.f[0] = ld32((c.r[4].w[0] + 120u));
    c.f[1] = ld32((c.r[3].w[0] + 120u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003E77E0; } }
    st32((c.r[16].w[0]), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42480000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003E0000u);
    set32(c.r[4], c.r[4].w[0] + 31504u);
    c.f[1] = c.r[3].w[0];
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    c.f[0] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 12u), c.r[4].w[0]);
    c.f[2] = ld32((c.r[28].w[0] - 30384u));
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[0]));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.f[0]);  if (t) { goto L_003E77E4; } }
L_003E77E0:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_003E77E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E7800:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E781Cu); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003E781Cu) [[unlikely]] return; }
L_003E781C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003E7864; }
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], ld32((c.r[16].w[0])));
    set32(c.r[5], c.r[5].w[0] + 22832u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + 22704u);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 16;
L_003E7864:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E7870:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E788Cu); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003E788Cu) [[unlikely]] return; }
L_003E788C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003E78D4; }
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], ld32((c.r[16].w[0])));
    set32(c.r[5], c.r[5].w[0] + 22832u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 22736u);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 16;
L_003E78D4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E78E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E78FCu); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003E78FCu) [[unlikely]] return; }
L_003E78FC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003E7940; }
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[4].w[0] + 22832u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 22752u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 15;
L_003E7940:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E7950:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E796Cu); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003E796Cu) [[unlikely]] return; }
L_003E796C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003E79B4; }
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], ld32((c.r[16].w[0])));
    set32(c.r[5], c.r[5].w[0] + 22832u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] + 22720u);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 16;
L_003E79B4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E79C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E79DCu); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003E79DCu) [[unlikely]] return; }
L_003E79DC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003E7A24; }
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], ld32((c.r[16].w[0])));
    set32(c.r[5], c.r[5].w[0] + 22832u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], 0u + 6u);
    set32(c.r[3], c.r[3].w[0] + 22784u);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 16;
L_003E7A24:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E7A30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7A4Cu); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003E7A4Cu) [[unlikely]] return; }
L_003E7A4C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003E7A94; }
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], ld32((c.r[16].w[0])));
    set32(c.r[5], c.r[5].w[0] + 22832u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], 0u + 5u);
    set32(c.r[3], c.r[3].w[0] + 22768u);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 16;
L_003E7A94:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E7AA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7ABCu); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003E7ABCu) [[unlikely]] return; }
L_003E7ABC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003E7B04; }
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], ld32((c.r[16].w[0])));
    set32(c.r[5], c.r[5].w[0] + 22832u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], 0u + 7u);
    set32(c.r[3], c.r[3].w[0] + 22800u);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 16;
L_003E7B04:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E7B10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 6u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7B2Cu); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x003E7B2Cu) [[unlikely]] return; }
L_003E7B2C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003E7B74; }
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    set32(c.r[7], ld32((c.r[16].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], ld32((c.r[16].w[0])));
    set32(c.r[5], c.r[5].w[0] + 22832u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], 0u + 9u);
    set32(c.r[3], c.r[3].w[0] + 22816u);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[2].w[0] + 12u), c.f[0]);
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 16;
L_003E7B74:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E7B80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 26u)));
    c.r[3].d[0] = c.r[6].d[0] & 512ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E7BB0; } }
    c.r[3].d[0] = c.r[6].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[7], c.r[4].w[0] + 20u);  if (t) { goto L_003E7BB0; } }
    set32(c.r[7], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 1;
L_003E7BB0:
    set32(c.r[5], 0u - 1025u);
    set32(c.r[3], 0u + 128u);
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.budget -= 5;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 20u)));  goto L_003E7CC8; }
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_003E7CB8; }
    set32(c.r[3], 0u + 32u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_003E7CA8; }
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_003E7C98; }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_003E7C88; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_003E7C78; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_003E7C68; }
    set32(c.r[3], 0u + 512u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[7].d[0] + 0ull;  goto L_003E7C58; }
    set32(c.r[3], 0u + 256u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_003E7C38; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003E7CE0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E7CDC; } }
L_003E7C38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7C40u);  if (depth < kMaxDepth) unit_0004(c, 302u, depth + 1u); else { c.pc = 0x00113640u; return; } if (c.pc != 0x003E7C40u) [[unlikely]] return; }
L_003E7C40:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7C50u); set32(c.r[4], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_000A(c, 293u, depth + 1u); else { c.pc = 0x0012A6B0u; return; } if (c.pc != 0x003E7C50u) [[unlikely]] return; }
L_003E7C50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E7CDC; } }
L_003E7C58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7C60u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 293u, depth + 1u); else { c.pc = 0x0012A6B0u; return; } if (c.pc != 0x003E7C60u) [[unlikely]] return; }
L_003E7C60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E7CDC; } }
L_003E7C68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7C70u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 292u, depth + 1u); else { c.pc = 0x0012A680u; return; } if (c.pc != 0x003E7C70u) [[unlikely]] return; }
L_003E7C70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E7CDC; } }
L_003E7C78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7C80u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 291u, depth + 1u); else { c.pc = 0x0012A660u; return; } if (c.pc != 0x003E7C80u) [[unlikely]] return; }
L_003E7C80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E7CDC; } }
L_003E7C88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7C90u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 290u, depth + 1u); else { c.pc = 0x0012A650u; return; } if (c.pc != 0x003E7C90u) [[unlikely]] return; }
L_003E7C90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E7CDC; } }
L_003E7C98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7CA0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 289u, depth + 1u); else { c.pc = 0x0012A640u; return; } if (c.pc != 0x003E7CA0u) [[unlikely]] return; }
L_003E7CA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E7CDC; } }
L_003E7CA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7CB0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 288u, depth + 1u); else { c.pc = 0x0012A630u; return; } if (c.pc != 0x003E7CB0u) [[unlikely]] return; }
L_003E7CB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E7CDC; } }
L_003E7CB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7CC0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 287u, depth + 1u); else { c.pc = 0x0012A620u; return; } if (c.pc != 0x003E7CC0u) [[unlikely]] return; }
L_003E7CC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003E7CDC; } }
L_003E7CC8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[4], c.r[29].w[0] + 44u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7CDCu); st32((c.r[29].w[0] + 44u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000A(c, 286u, depth + 1u); else { c.pc = 0x0012A610u; return; } if (c.pc != 0x003E7CDCu) [[unlikely]] return; }
L_003E7CDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003E7CE0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E7CF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003E7D00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003E7D10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003E7D7C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 22848u);
    set32(c.r[3], c.r[3].w[0] + 22876u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 24u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 24u), c.r[3].w[0]);  if (t) { goto L_003E7D58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 22912u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 3;
L_003E7D58:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7D64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 403u, depth + 1u); else { c.pc = 0x003BF300u; return; } if (c.pc != 0x003E7D64u) [[unlikely]] return; }
L_003E7D64:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_003E7D80; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7D7Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x003E7D7Cu) [[unlikely]] return; }
L_003E7D7C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_003E7D80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E7DA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 9536u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7DBCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x003E7DBCu) [[unlikely]] return; }
L_003E7DBC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003E7E1C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7DD0u); set32(c.r[4], c.r[4].w[0] - 9508u);  if (depth < kMaxDepth) unit_00FD(c, 60u, depth + 1u); else { c.pc = 0x004F4600u; return; } if (c.pc != 0x003E7DD0u) [[unlikely]] return; }
L_003E7DD0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003E7E18; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7DE8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x003E7DE8u) [[unlikely]] return; }
L_003E7DE8:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7DF4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E0(c, 520u, depth + 1u); else { c.pc = 0x00483F20u; return; } if (c.pc != 0x003E7DF4u) [[unlikely]] return; }
L_003E7DF4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7E00u); set32(c.r[4], c.r[4].w[0] - 9455u);  if (depth < kMaxDepth) unit_00FD(c, 60u, depth + 1u); else { c.pc = 0x004F4600u; return; } if (c.pc != 0x003E7E00u) [[unlikely]] return; }
L_003E7E00:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7E0Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x003E7E0Cu) [[unlikely]] return; }
L_003E7E0C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7E18u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x003E7E18u) [[unlikely]] return; }
L_003E7E18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003E7E1C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E7E30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 28u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003E7E98; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 29u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[16].w[0] + 30u));  goto L_003E7E9C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E7E98; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7E6Cu); set32(c.r[4], c.r[4].w[0] - 9455u);  if (depth < kMaxDepth) unit_00FD(c, 60u, depth + 1u); else { c.pc = 0x004F4600u; return; } if (c.pc != 0x003E7E6Cu) [[unlikely]] return; }
L_003E7E6C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_003E7EC0; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7E80u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x003E7E80u) [[unlikely]] return; }
L_003E7E80:
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7E8Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E0(c, 520u, depth + 1u); else { c.pc = 0x00483F20u; return; } if (c.pc != 0x003E7E8Cu) [[unlikely]] return; }
L_003E7E8C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 29u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003E7EBC; } }
L_003E7E98:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 30u));
    c.budget -= 1;
L_003E7E9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003E7EBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7EACu); st8((c.r[16].w[0] + 30u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00B4(c, 393u, depth + 1u); else { c.pc = 0x003D3FC0u; return; } if (c.pc != 0x003E7EACu) [[unlikely]] return; }
L_003E7EAC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7EBCu); set32(c.r[5], c.r[5].w[0] - 9405u);  if (depth < kMaxDepth) unit_00AF(c, 318u, depth + 1u); else { c.pc = 0x003BE9A0u; return; } if (c.pc != 0x003E7EBCu) [[unlikely]] return; }
L_003E7EBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003E7EC0:
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003E7ED0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 25072u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7EECu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00CD(c, 460u, depth + 1u); else { c.pc = 0x004379E0u; return; } if (c.pc != 0x003E7EECu) [[unlikely]] return; }
L_003E7EEC:
    set32(c.r[2], ld32((c.r[28].w[0] - 26860u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7F04u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E7F04u) [[unlikely]] return; }
L_003E7F04:
    set32(c.r[2], ld32((c.r[28].w[0] - 26860u)));
    st32((c.r[29].w[0] + 44u), 0u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7F20u); set32(c.r[5], c.r[29].w[0] + 44u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003E7F20u) [[unlikely]] return; }
L_003E7F20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7F28u); set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  if (depth < kMaxDepth) unit_010E(c, 66u, depth + 1u); else { c.pc = 0x005387A0u; return; } if (c.pc != 0x003E7F28u) [[unlikely]] return; }
L_003E7F28:
    set32(c.r[4], ld32((c.r[28].w[0] - 26860u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7F34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 178u, depth + 1u); else { c.pc = 0x003D9DB0u; return; } if (c.pc != 0x003E7F34u) [[unlikely]] return; }
L_003E7F34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7F3Cu);  if (depth < kMaxDepth) unit_00B4(c, 393u, depth + 1u); else { c.pc = 0x003D3FC0u; return; } if (c.pc != 0x003E7F3Cu) [[unlikely]] return; }
L_003E7F3C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7F4Cu); set32(c.r[5], c.r[5].w[0] - 9385u);  if (depth < kMaxDepth) unit_00AF(c, 284u, depth + 1u); else { c.pc = 0x003BE640u; return; } if (c.pc != 0x003E7F4Cu) [[unlikely]] return; }
L_003E7F4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7F54u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 34u, depth + 1u); else { c.pc = 0x003E83A0u; return; } if (c.pc != 0x003E7F54u) [[unlikely]] return; }
L_003E7F54:
    set32(c.r[2], 0u + 1u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st8((c.r[16].w[0] + 29u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003E7F6C; } }
    set32(c.r[5], c.r[16].w[0] + 24u);
    c.budget -= 1;
L_003E7F6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7F74u); set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  if (depth < kMaxDepth) unit_00FC(c, 507u, depth + 1u); else { c.pc = 0x004F3BE0u; return; } if (c.pc != 0x003E7F74u) [[unlikely]] return; }
L_003E7F74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7F7Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 401u, depth + 1u); else { c.pc = 0x003BF2E0u; return; } if (c.pc != 0x003E7F7Cu) [[unlikely]] return; }
L_003E7F7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003E7F90:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7FACu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00AF(c, 402u, depth + 1u); else { c.pc = 0x003BF2F0u; return; } if (c.pc != 0x003E7FACu) [[unlikely]] return; }
L_003E7FAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7FB4u); set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));  if (depth < kMaxDepth) unit_00BA(c, 18u, depth + 1u); else { c.pc = 0x003E81D0u; return; } if (c.pc != 0x003E7FB4u) [[unlikely]] return; }
L_003E7FB4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  [[clang::musttail]] return unit_00BA(c, 10u, depth); }
    set32(c.r[2], ld32((c.r[17].w[0] + 188u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] + 188u);  if (t) { goto L_003E7FD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_003E7FDC; } }
L_003E7FD8:
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_003E7FDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7FE4u); set32(c.r[4], ld32((c.r[28].w[0] - 24272u)));  if (depth < kMaxDepth) unit_00DB(c, 265u, depth + 1u); else { c.pc = 0x0046FBB0u; return; } if (c.pc != 0x003E7FE4u) [[unlikely]] return; }
L_003E7FE4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7FF0u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x003E7FF0u) [[unlikely]] return; }
L_003E7FF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E7FF8u);  if (depth < kMaxDepth) unit_00C1(c, 416u, depth + 1u); else { c.pc = 0x00406B50u; return; } if (c.pc != 0x003E7FF8u) [[unlikely]] return; }
L_003E7FF8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003E8004u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 372u, depth + 1u); else { c.pc = 0x0040E780u; return; } if (c.pc != 0x003E8004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_00BA(c, 2u, depth);
}

}
