#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00D5[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 3, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 14,
    0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0,
    0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0,
    29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0,
    35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0,
    40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 45,
    0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0,
    0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 67, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0,
    0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 76, 0, 0, 77, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0,
    0, 83, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0,
    0, 0, 89, 0, 0, 90, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0,
    96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0,
    100, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0,
    0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141,
    0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 153, 0, 154, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 157,
    0, 0, 158, 0, 159, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0,
    0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0,
    0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 174, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0,
    0, 0, 180, 0, 0, 181, 0, 182, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0,
    193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0,
    0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204,
    0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 0,
    212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 218, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 220, 0, 0, 221, 0,
    0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0,
    0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0, 229, 0, 0, 0, 0,
    0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237,
    0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 240, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 244, 0,
    0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0,
    0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0,
    0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0,
    0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266,
    0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0,
    0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0,
    0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0,
    0, 0, 283, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0,
    0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293,
    0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 300, 0, 0, 301,
    0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 305, 0, 0, 306, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 0, 310, 0,
    0, 311, 0, 0, 312, 0, 0, 313, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 316, 0, 0, 317, 0, 318, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0,
    0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0,
    0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0,
    333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 0, 336, 0, 337, 0, 338, 0, 339, 0, 340, 0, 341, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 345, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 350, 0, 0,
    0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0,
    0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 359, 0,
    0, 0, 360, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0,
    0, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0,
    370, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0,
    0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0,
    379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 383,
    0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 386, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0,
    0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0, 0,
    0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    403, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 0, 0, 412,
    0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0,
    0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0, 0, 424, 0, 0, 0, 0,
    0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 0, 0, 428, 0, 0, 0, 429, 0, 0, 0,
    0, 0, 430, 0, 0, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434,
    0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 436, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 439, 0, 0, 0, 440, 0,
    0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 442, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 447, 0, 0, 0, 448, 0, 0, 0, 0, 449, 0, 0,
    0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 453, 0, 0, 0, 454, 0, 0, 0, 0, 0,
    455, 0, 0, 0, 0, 0, 456, 0, 0, 0, 457, 0, 0, 458, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0,
    0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 463, 0, 0, 0, 464, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0,
    0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0,
    0, 471, 0, 0, 472, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 476, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 479, 0, 0, 0, 480, 0, 0, 0, 0, 0, 481, 0,
    0, 0, 0, 482, 0, 0, 483, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 487, 0,
    0, 0, 488, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 490, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 492, 0, 0, 493, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 496, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 498, 0, 0, 0, 0,
    0, 0, 499, 0, 0, 500, 0, 0, 501, 0, 0, 502, 0, 0, 503, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 508, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 510, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00D5(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00454000;
    case 2u: goto L_00454018;
    case 3u: goto L_00454020;
    case 4u: goto L_00454024;
    case 5u: goto L_00454040;
    case 6u: goto L_004540C4;
    case 7u: goto L_004540D4;
    case 8u: goto L_00454100;
    case 9u: goto L_00454114;
    case 10u: goto L_00454130;
    case 11u: goto L_00454140;
    case 12u: goto L_0045415C;
    case 13u: goto L_0045416C;
    case 14u: goto L_0045417C;
    case 15u: goto L_00454198;
    case 16u: goto L_004541A4;
    case 17u: goto L_004541B0;
    case 18u: goto L_004541E0;
    case 19u: goto L_00454218;
    case 20u: goto L_00454224;
    case 21u: goto L_00454250;
    case 22u: goto L_00454260;
    case 23u: goto L_0045426C;
    case 24u: goto L_00454290;
    case 25u: goto L_004542C0;
    case 26u: goto L_004542CC;
    case 27u: goto L_004542DC;
    case 28u: goto L_004542E8;
    case 29u: goto L_00454300;
    case 30u: goto L_00454324;
    case 31u: goto L_00454330;
    case 32u: goto L_00454344;
    case 33u: goto L_0045435C;
    case 34u: goto L_00454374;
    case 35u: goto L_00454380;
    case 36u: goto L_004543B4;
    case 37u: goto L_004543C0;
    case 38u: goto L_004543D4;
    case 39u: goto L_004543E8;
    case 40u: goto L_00454400;
    case 41u: goto L_00454428;
    case 42u: goto L_00454438;
    case 43u: goto L_00454464;
    case 44u: goto L_00454474;
    case 45u: goto L_0045447C;
    case 46u: goto L_00454490;
    case 47u: goto L_004544AC;
    case 48u: goto L_004544C0;
    case 49u: goto L_00454500;
    case 50u: goto L_00454514;
    case 51u: goto L_00454528;
    case 52u: goto L_00454548;
    case 53u: goto L_00454554;
    case 54u: goto L_00454560;
    case 55u: goto L_00454574;
    case 56u: goto L_00454590;
    case 57u: goto L_004545D0;
    case 58u: goto L_00454600;
    case 59u: goto L_0045462C;
    case 60u: goto L_00454664;
    case 61u: goto L_00454698;
    case 62u: goto L_004546C0;
    case 63u: goto L_004546DC;
    case 64u: goto L_004546F0;
    case 65u: goto L_0045472C;
    case 66u: goto L_00454738;
    case 67u: goto L_00454744;
    case 68u: goto L_0045474C;
    case 69u: goto L_0045476C;
    case 70u: goto L_00454778;
    case 71u: goto L_00454784;
    case 72u: goto L_00454798;
    case 73u: goto L_004547B0;
    case 74u: goto L_004547C8;
    case 75u: goto L_004547D8;
    case 76u: goto L_004547E4;
    case 77u: goto L_004547F0;
    case 78u: goto L_00454828;
    case 79u: goto L_00454838;
    case 80u: goto L_00454848;
    case 81u: goto L_0045486C;
    case 82u: goto L_00454878;
    case 83u: goto L_00454884;
    case 84u: goto L_00454894;
    case 85u: goto L_004548A4;
    case 86u: goto L_004548C8;
    case 87u: goto L_004548D8;
    case 88u: goto L_004548F0;
    case 89u: goto L_00454908;
    case 90u: goto L_00454914;
    case 91u: goto L_0045491C;
    case 92u: goto L_00454930;
    case 93u: goto L_00454940;
    case 94u: goto L_00454950;
    case 95u: goto L_00454968;
    case 96u: goto L_00454980;
    case 97u: goto L_00454998;
    case 98u: goto L_004549B0;
    case 99u: goto L_004549F4;
    case 100u: goto L_00454A00;
    case 101u: goto L_00454A08;
    case 102u: goto L_00454A20;
    case 103u: goto L_00454A34;
    case 104u: goto L_00454A44;
    case 105u: goto L_00454A60;
    case 106u: goto L_00454A88;
    case 107u: goto L_00454AB8;
    case 108u: goto L_00454AD8;
    case 109u: goto L_00454AE4;
    case 110u: goto L_00454B20;
    case 111u: goto L_00454D34;
    case 112u: goto L_00454D60;
    case 113u: goto L_00454D90;
    case 114u: goto L_00454DA0;
    case 115u: goto L_00454DD0;
    case 116u: goto L_00454DE0;
    case 117u: goto L_00454E14;
    case 118u: goto L_00454E24;
    case 119u: goto L_00454E40;
    case 120u: goto L_00454E54;
    case 121u: goto L_00454E64;
    case 122u: goto L_00454E70;
    case 123u: goto L_00454EA8;
    case 124u: goto L_00454EC0;
    case 125u: goto L_00454EE0;
    case 126u: goto L_00454F08;
    case 127u: goto L_00454F14;
    case 128u: goto L_00454F40;
    case 129u: goto L_00454FA0;
    case 130u: goto L_00454FB0;
    case 131u: goto L_00454FD0;
    case 132u: goto L_00455018;
    case 133u: goto L_00455028;
    case 134u: goto L_00455044;
    case 135u: goto L_00455064;
    case 136u: goto L_00455074;
    case 137u: goto L_00455090;
    case 138u: goto L_0045509C;
    case 139u: goto L_004550B8;
    case 140u: goto L_004550E0;
    case 141u: goto L_004550FC;
    case 142u: goto L_00455118;
    case 143u: goto L_00455128;
    case 144u: goto L_0045513C;
    case 145u: goto L_0045514C;
    case 146u: goto L_00455170;
    case 147u: goto L_004551AC;
    case 148u: goto L_004551B8;
    case 149u: goto L_004551D0;
    case 150u: goto L_004551E8;
    case 151u: goto L_00455330;
    case 152u: goto L_0045533C;
    case 153u: goto L_00455344;
    case 154u: goto L_0045534C;
    case 155u: goto L_0045535C;
    case 156u: goto L_00455364;
    case 157u: goto L_0045537C;
    case 158u: goto L_00455388;
    case 159u: goto L_00455390;
    case 160u: goto L_0045539C;
    case 161u: goto L_004553A8;
    case 162u: goto L_00455404;
    case 163u: goto L_00455420;
    case 164u: goto L_0045542C;
    case 165u: goto L_00455460;
    case 166u: goto L_00455484;
    case 167u: goto L_004554BC;
    case 168u: goto L_004554E0;
    case 169u: goto L_00455568;
    case 170u: goto L_00455578;
    case 171u: goto L_00455594;
    case 172u: goto L_004555A8;
    case 173u: goto L_004555B8;
    case 174u: goto L_00455608;
    case 175u: goto L_00455610;
    case 176u: goto L_00455674;
    case 177u: goto L_004556D0;
    case 178u: goto L_0045572C;
    case 179u: goto L_00455778;
    case 180u: goto L_00455788;
    case 181u: goto L_00455794;
    case 182u: goto L_0045579C;
    case 183u: goto L_004557A8;
    case 184u: goto L_004559C0;
    case 185u: goto L_004559D8;
    case 186u: goto L_00455A30;
    case 187u: goto L_00455A90;
    case 188u: goto L_00455AB0;
    case 189u: goto L_00455ACC;
    case 190u: goto L_00455B08;
    case 191u: goto L_00455BB0;
    case 192u: goto L_00455BF0;
    case 193u: goto L_00455C00;
    case 194u: goto L_00455C18;
    case 195u: goto L_00455C38;
    case 196u: goto L_00455C48;
    case 197u: goto L_00455C64;
    case 198u: goto L_00455C78;
    case 199u: goto L_00455C88;
    case 200u: goto L_00455CA0;
    case 201u: goto L_00455CB8;
    case 202u: goto L_00455D2C;
    case 203u: goto L_00455D60;
    case 204u: goto L_00455D7C;
    case 205u: goto L_00455D88;
    case 206u: goto L_00455D98;
    case 207u: goto L_00455DB8;
    case 208u: goto L_00455DC4;
    case 209u: goto L_00455DD0;
    case 210u: goto L_00455DE8;
    case 211u: goto L_00455DF4;
    case 212u: goto L_00455E00;
    case 213u: goto L_00455E1C;
    case 214u: goto L_00455E28;
    case 215u: goto L_00455E34;
    case 216u: goto L_00455E5C;
    case 217u: goto L_00455E68;
    case 218u: goto L_00455E74;
    case 219u: goto L_00455EE0;
    case 220u: goto L_00455EEC;
    case 221u: goto L_00455EF8;
    case 222u: goto L_00455F18;
    case 223u: goto L_00455F74;
    case 224u: goto L_00455F84;
    case 225u: goto L_00455FB0;
    case 226u: goto L_00455FBC;
    case 227u: goto L_00455FD8;
    case 228u: goto L_00455FE4;
    case 229u: goto L_00455FEC;
    case 230u: goto L_00456010;
    case 231u: goto L_0045602C;
    case 232u: goto L_00456038;
    case 233u: goto L_00456048;
    case 234u: goto L_004560B0;
    case 235u: goto L_004560D0;
    case 236u: goto L_004560E0;
    case 237u: goto L_004560FC;
    case 238u: goto L_00456110;
    case 239u: goto L_00456120;
    case 240u: goto L_0045612C;
    case 241u: goto L_00456134;
    case 242u: goto L_00456150;
    case 243u: goto L_0045616C;
    case 244u: goto L_00456178;
    case 245u: goto L_00456188;
    case 246u: goto L_004561AC;
    case 247u: goto L_004561CC;
    case 248u: goto L_004561DC;
    case 249u: goto L_004561F8;
    case 250u: goto L_0045620C;
    case 251u: goto L_0045621C;
    case 252u: goto L_00456234;
    case 253u: goto L_00456240;
    case 254u: goto L_00456254;
    case 255u: goto L_00456274;
    case 256u: goto L_00456284;
    case 257u: goto L_004562A0;
    case 258u: goto L_004562B4;
    case 259u: goto L_004562C4;
    case 260u: goto L_004562D8;
    case 261u: goto L_004562F0;
    case 262u: goto L_00456310;
    case 263u: goto L_00456320;
    case 264u: goto L_00456344;
    case 265u: goto L_00456354;
    case 266u: goto L_0045637C;
    case 267u: goto L_0045638C;
    case 268u: goto L_004563A8;
    case 269u: goto L_004563BC;
    case 270u: goto L_004563CC;
    case 271u: goto L_004563D8;
    case 272u: goto L_004563F0;
    case 273u: goto L_00456410;
    case 274u: goto L_00456420;
    case 275u: goto L_0045643C;
    case 276u: goto L_00456450;
    case 277u: goto L_00456460;
    case 278u: goto L_00456484;
    case 279u: goto L_00456494;
    case 280u: goto L_004564C0;
    case 281u: goto L_004564D0;
    case 282u: goto L_004564F0;
    case 283u: goto L_00456508;
    case 284u: goto L_00456514;
    case 285u: goto L_0045652C;
    case 286u: goto L_0045654C;
    case 287u: goto L_0045655C;
    case 288u: goto L_00456578;
    case 289u: goto L_0045658C;
    case 290u: goto L_0045659C;
    case 291u: goto L_004565C0;
    case 292u: goto L_004565D0;
    case 293u: goto L_004565FC;
    case 294u: goto L_0045660C;
    case 295u: goto L_0045662C;
    case 296u: goto L_00456654;
    case 297u: goto L_00456660;
    case 298u: goto L_00456670;
    case 299u: goto L_004566E4;
    case 300u: goto L_004566F0;
    case 301u: goto L_004566FC;
    case 302u: goto L_00456708;
    case 303u: goto L_00456718;
    case 304u: goto L_0045679C;
    case 305u: goto L_004567A8;
    case 306u: goto L_004567B4;
    case 307u: goto L_004567C0;
    case 308u: goto L_004567D0;
    case 309u: goto L_004567EC;
    case 310u: goto L_004567F8;
    case 311u: goto L_00456804;
    case 312u: goto L_00456810;
    case 313u: goto L_0045681C;
    case 314u: goto L_00456828;
    case 315u: goto L_0045689C;
    case 316u: goto L_004568A8;
    case 317u: goto L_004568B4;
    case 318u: goto L_004568BC;
    case 319u: goto L_004568D8;
    case 320u: goto L_004568E8;
    case 321u: goto L_00456904;
    case 322u: goto L_00456918;
    case 323u: goto L_00456928;
    case 324u: goto L_00456944;
    case 325u: goto L_00456954;
    case 326u: goto L_00456970;
    case 327u: goto L_00456984;
    case 328u: goto L_00456994;
    case 329u: goto L_004569B0;
    case 330u: goto L_004569C0;
    case 331u: goto L_004569DC;
    case 332u: goto L_004569F0;
    case 333u: goto L_00456A00;
    case 334u: goto L_00456A28;
    case 335u: goto L_00456A38;
    case 336u: goto L_00456A50;
    case 337u: goto L_00456A58;
    case 338u: goto L_00456A60;
    case 339u: goto L_00456A68;
    case 340u: goto L_00456A70;
    case 341u: goto L_00456A78;
    case 342u: goto L_00456AA0;
    case 343u: goto L_00456AC8;
    case 344u: goto L_00456ADC;
    case 345u: goto L_00456B04;
    case 346u: goto L_00456B20;
    case 347u: goto L_00456B34;
    case 348u: goto L_00456B48;
    case 349u: goto L_00456B68;
    case 350u: goto L_00456B74;
    case 351u: goto L_00456B90;
    case 352u: goto L_00456BC0;
    case 353u: goto L_00456BE0;
    case 354u: goto L_00456BF0;
    case 355u: goto L_00456C0C;
    case 356u: goto L_00456C2C;
    case 357u: goto L_00456C3C;
    case 358u: goto L_00456C58;
    case 359u: goto L_00456C78;
    case 360u: goto L_00456C88;
    case 361u: goto L_00456CA4;
    case 362u: goto L_00456CC4;
    case 363u: goto L_00456CD4;
    case 364u: goto L_00456CF0;
    case 365u: goto L_00456D10;
    case 366u: goto L_00456D20;
    case 367u: goto L_00456D3C;
    case 368u: goto L_00456D50;
    case 369u: goto L_00456D70;
    case 370u: goto L_00456D80;
    case 371u: goto L_00456D9C;
    case 372u: goto L_00456DBC;
    case 373u: goto L_00456DCC;
    case 374u: goto L_00456DE8;
    case 375u: goto L_00456E08;
    case 376u: goto L_00456E18;
    case 377u: goto L_00456E34;
    case 378u: goto L_00456E60;
    case 379u: goto L_00456E80;
    case 380u: goto L_00456EC8;
    case 381u: goto L_00456ED8;
    case 382u: goto L_00456EEC;
    case 383u: goto L_00456EFC;
    case 384u: goto L_00456F10;
    case 385u: goto L_00456F20;
    case 386u: goto L_00456F28;
    case 387u: goto L_00456F3C;
    case 388u: goto L_00456F4C;
    case 389u: goto L_00456F60;
    case 390u: goto L_00456F70;
    case 391u: goto L_00456F84;
    case 392u: goto L_00456F94;
    case 393u: goto L_00456FA8;
    case 394u: goto L_00456FB8;
    case 395u: goto L_00456FCC;
    case 396u: goto L_00456FDC;
    case 397u: goto L_00456FEC;
    case 398u: goto L_00457010;
    case 399u: goto L_00457090;
    case 400u: goto L_004570B0;
    case 401u: goto L_0045714C;
    case 402u: goto L_00457234;
    case 403u: goto L_00457280;
    case 404u: goto L_00457288;
    case 405u: goto L_004573D4;
    case 406u: goto L_004573E0;
    case 407u: goto L_00457434;
    case 408u: goto L_004574A0;
    case 409u: goto L_004574B0;
    case 410u: goto L_004574D8;
    case 411u: goto L_004574E8;
    case 412u: goto L_004574FC;
    case 413u: goto L_0045750C;
    case 414u: goto L_00457574;
    case 415u: goto L_00457584;
    case 416u: goto L_004575A0;
    case 417u: goto L_004575AC;
    case 418u: goto L_004575E0;
    case 419u: goto L_004575F0;
    case 420u: goto L_00457620;
    case 421u: goto L_00457634;
    case 422u: goto L_00457644;
    case 423u: goto L_00457658;
    case 424u: goto L_0045766C;
    case 425u: goto L_0045768C;
    case 426u: goto L_004576B8;
    case 427u: goto L_004576C8;
    case 428u: goto L_004576E0;
    case 429u: goto L_004576F0;
    case 430u: goto L_00457708;
    case 431u: goto L_0045771C;
    case 432u: goto L_00457730;
    case 433u: goto L_00457750;
    case 434u: goto L_0045777C;
    case 435u: goto L_0045778C;
    case 436u: goto L_004577A8;
    case 437u: goto L_004577B4;
    case 438u: goto L_004577D4;
    case 439u: goto L_004577E8;
    case 440u: goto L_004577F8;
    case 441u: goto L_00457814;
    case 442u: goto L_00457828;
    case 443u: goto L_00457838;
    case 444u: goto L_00457854;
    case 445u: goto L_00457880;
    case 446u: goto L_004578BC;
    case 447u: goto L_004578D0;
    case 448u: goto L_004578E0;
    case 449u: goto L_004578F4;
    case 450u: goto L_00457908;
    case 451u: goto L_00457928;
    case 452u: goto L_00457948;
    case 453u: goto L_00457958;
    case 454u: goto L_00457968;
    case 455u: goto L_00457980;
    case 456u: goto L_00457998;
    case 457u: goto L_004579A8;
    case 458u: goto L_004579B4;
    case 459u: goto L_004579CC;
    case 460u: goto L_004579E4;
    case 461u: goto L_004579F4;
    case 462u: goto L_00457A18;
    case 463u: goto L_00457A2C;
    case 464u: goto L_00457A3C;
    case 465u: goto L_00457A50;
    case 466u: goto L_00457A74;
    case 467u: goto L_00457A84;
    case 468u: goto L_00457AB0;
    case 469u: goto L_00457AC0;
    case 470u: goto L_00457AE0;
    case 471u: goto L_00457B04;
    case 472u: goto L_00457B10;
    case 473u: goto L_00457B1C;
    case 474u: goto L_00457B3C;
    case 475u: goto L_00457B4C;
    case 476u: goto L_00457B90;
    case 477u: goto L_00457BA0;
    case 478u: goto L_00457BBC;
    case 479u: goto L_00457BD0;
    case 480u: goto L_00457BE0;
    case 481u: goto L_00457BF8;
    case 482u: goto L_00457C0C;
    case 483u: goto L_00457C18;
    case 484u: goto L_00457C30;
    case 485u: goto L_00457C44;
    case 486u: goto L_00457C64;
    case 487u: goto L_00457C78;
    case 488u: goto L_00457C88;
    case 489u: goto L_00457CA4;
    case 490u: goto L_00457CB8;
    case 491u: goto L_00457CC8;
    case 492u: goto L_00457CE4;
    case 493u: goto L_00457CF0;
    case 494u: goto L_00457D20;
    case 495u: goto L_00457D5C;
    case 496u: goto L_00457D6C;
    case 497u: goto L_00457DDC;
    case 498u: goto L_00457DEC;
    case 499u: goto L_00457E08;
    case 500u: goto L_00457E14;
    case 501u: goto L_00457E20;
    case 502u: goto L_00457E2C;
    case 503u: goto L_00457E38;
    case 504u: goto L_00457E44;
    case 505u: goto L_00457EB0;
    case 506u: goto L_00457EC0;
    case 507u: goto L_00457F3C;
    case 508u: goto L_00457F4C;
    case 509u: goto L_00457F60;
    case 510u: goto L_00457F94;
    case 511u: goto L_00457FA4;
    default: bad_entry(c, 0x00454000u); return;
    }
L_00454000:
    set32(c.r[2], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[5], c.r[29].w[0] + 72u);
    st32((c.r[2].w[0] + 24u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24680u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454018u); set32(c.r[4], c.r[2].w[0] + 12u);  if (depth < kMaxDepth) unit_0009(c, 107u, depth + 1u); else { c.pc = 0x00124E90u; return; } if (c.pc != 0x00454018u) [[unlikely]] return; }
L_00454018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454020u); set32(c.r[4], ld32((c.r[28].w[0] - 24680u)));  if (depth < kMaxDepth) unit_000C(c, 222u, depth + 1u); else { c.pc = 0x001328D0u; return; } if (c.pc != 0x00454020u) [[unlikely]] return; }
L_00454020:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00454024:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00454040:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 24680u)));
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 10;
    { c.r[8].d[0] = c.r[2].d[0] + 0ull;  goto L_00454070; }
L_00454070:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], 0u + 7u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 14;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00454164; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[28].w[0] - 24680u)));  goto L_004540BC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_004541B4; } }
L_004540BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004540C4u);  if (depth < kMaxDepth) unit_000C(c, 225u, depth + 1u); else { c.pc = 0x00132910u; return; } if (c.pc != 0x004540C4u) [[unlikely]] return; }
L_004540C4:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 8u)));  goto L_004540DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004540D4u); set32(c.r[4], ld32((c.r[28].w[0] - 24680u)));  if (depth < kMaxDepth) unit_000C(c, 222u, depth + 1u); else { c.pc = 0x001328D0u; return; } if (c.pc != 0x004540D4u) [[unlikely]] return; }
L_004540D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 81u);  if (t) { goto L_004541B4; } }
L_004540DC:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[17].w[0] + 9u);  goto L_004540EC; }
    set32(c.r[7], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_004540EC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 512u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454100u); set32(c.r[6], c.r[6].w[0] + 30077u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00454100u) [[unlikely]] return; }
L_00454100:
    set32(c.r[4], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[5], c.r[29].w[0] + 104u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454114u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_010B(c, 239u, depth + 1u); else { c.pc = 0x0052F510u; return; } if (c.pc != 0x00454114u) [[unlikely]] return; }
L_00454114:
    set32(c.r[2], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], 0u + 54u);  goto L_00454150; }
    set32(c.r[4], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454130u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_010B(c, 251u, depth + 1u); else { c.pc = 0x0052F6C0u; return; } if (c.pc != 0x00454130u) [[unlikely]] return; }
L_00454130:
    st32((c.r[28].w[0] - 24684u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454140u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 312u, depth + 1u); else { c.pc = 0x003DA8C0u; return; } if (c.pc != 0x00454140u) [[unlikely]] return; }
L_00454140:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 24680u)));  goto L_00454154; }
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_00454150:
    set32(c.r[4], ld32((c.r[28].w[0] - 24680u)));
    c.budget -= 1;
L_00454154:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045415Cu);  if (depth < kMaxDepth) unit_000C(c, 222u, depth + 1u); else { c.pc = 0x001328D0u; return; } if (c.pc != 0x0045415Cu) [[unlikely]] return; }
L_0045415C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004541B0; } }
L_00454164:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045416Cu); set32(c.r[4], ld32((c.r[28].w[0] - 24680u)));  if (depth < kMaxDepth) unit_000C(c, 225u, depth + 1u); else { c.pc = 0x00132910u; return; } if (c.pc != 0x0045416Cu) [[unlikely]] return; }
L_0045416C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045417Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0112(c, 116u, depth + 1u); else { c.pc = 0x00549610u; return; } if (c.pc != 0x0045417Cu) [[unlikely]] return; }
L_0045417C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 24680u)));  goto L_004541A8; }
    set32(c.r[4], c.r[17].w[0] + 8u);
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0045419C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454198u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00454198u) [[unlikely]] return; }
L_00454198:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0045419C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004541A4u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004541A4u) [[unlikely]] return; }
L_004541A4:
    set32(c.r[4], ld32((c.r[28].w[0] - 24680u)));
    c.budget -= 1;
L_004541A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004541B0u);  if (depth < kMaxDepth) unit_000C(c, 222u, depth + 1u); else { c.pc = 0x001328D0u; return; } if (c.pc != 0x004541B0u) [[unlikely]] return; }
L_004541B0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004541B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_004541E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[7], c.r[29].w[0] + 60u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 24680u)));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00454218u); set32(c.r[6], 0u + 2u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00454218u) [[unlikely]] return; }
L_00454218:
    st32((c.r[28].w[0] - 24684u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454224u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 312u, depth + 1u); else { c.pc = 0x003DA8C0u; return; } if (c.pc != 0x00454224u) [[unlikely]] return; }
L_00454224:
    c.f[2] = ld32((c.r[17].w[0]));
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 48u), c.f[2]);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 52u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454250u); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_0112(c, 101u, depth + 1u); else { c.pc = 0x00549460u; return; } if (c.pc != 0x00454250u) [[unlikely]] return; }
L_00454250:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 60u)));  goto L_00454270; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454260u); set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  if (depth < kMaxDepth) unit_0112(c, 131u, depth + 1u); else { c.pc = 0x00549800u; return; } if (c.pc != 0x00454260u) [[unlikely]] return; }
L_00454260:
    st32((c.r[28].w[0] - 24684u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045426Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 312u, depth + 1u); else { c.pc = 0x003DA8C0u; return; } if (c.pc != 0x0045426Cu) [[unlikely]] return; }
L_0045426C:
    set32(c.r[2], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 1;
L_00454270:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00454290:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24680u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004542C0u); set32(c.r[7], c.r[29].w[0] + 44u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004542C0u) [[unlikely]] return; }
L_004542C0:
    st32((c.r[28].w[0] - 24684u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004542CCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 312u, depth + 1u); else { c.pc = 0x003DA8C0u; return; } if (c.pc != 0x004542CCu) [[unlikely]] return; }
L_004542CC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 44u)));  goto L_004542EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004542DCu); set32(c.r[4], ld32((c.r[29].w[0] + 44u)));  if (depth < kMaxDepth) unit_0112(c, 131u, depth + 1u); else { c.pc = 0x00549800u; return; } if (c.pc != 0x004542DCu) [[unlikely]] return; }
L_004542DC:
    st32((c.r[28].w[0] - 24684u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004542E8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 312u, depth + 1u); else { c.pc = 0x003DA8C0u; return; } if (c.pc != 0x004542E8u) [[unlikely]] return; }
L_004542E8:
    set32(c.r[2], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 1;
L_004542EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00454300:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 30106u);
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00454324u); set32(c.r[6], c.r[29].w[0] + 28u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00454324u) [[unlikely]] return; }
L_00454324:
    st32((c.r[28].w[0] - 24684u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454330u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 312u, depth + 1u); else { c.pc = 0x003DA8C0u; return; } if (c.pc != 0x00454330u) [[unlikely]] return; }
L_00454330:
    set32(c.r[4], ld32((c.r[29].w[0] + 28u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00454344u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00454344u) [[unlikely]] return; }
L_00454344:
    set32(c.r[2], ld32((c.r[28].w[0] - 24680u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045435Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045435Cu) [[unlikely]] return; }
L_0045435C:
    set32(c.r[2], ld32((c.r[28].w[0] - 24680u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00454374u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00454374u) [[unlikely]] return; }
L_00454374:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00454380:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 60u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004543B4u); set32(c.r[5], c.r[5].w[0] + 30106u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004543B4u) [[unlikely]] return; }
L_004543B4:
    st32((c.r[28].w[0] - 24684u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004543C0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 312u, depth + 1u); else { c.pc = 0x003DA8C0u; return; } if (c.pc != 0x004543C0u) [[unlikely]] return; }
L_004543C0:
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004543D4u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004543D4u) [[unlikely]] return; }
L_004543D4:
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004543E8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004543E8u) [[unlikely]] return; }
L_004543E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00454400:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 60u), 0u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00454428u); set32(c.r[5], c.r[29].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00454428u) [[unlikely]] return; }
L_00454428:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454438u); set32(c.r[5], c.r[5].w[0] + 30111u);  if (depth < kMaxDepth) unit_000A(c, 398u, depth + 1u); else { c.pc = 0x0012B320u; return; } if (c.pc != 0x00454438u) [[unlikely]] return; }
L_00454438:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 33u);  goto L_0045444C; }
    set32(c.r[5], ld32((c.r[29].w[0] + 40u)));
    c.budget -= 1;
L_0045444C:
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[8], c.r[16].w[0] + 56u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454464u); c.r[6].d[0] = c.r[2].d[0] | 40ull;  if (depth < kMaxDepth) unit_010E(c, 42u, depth + 1u); else { c.pc = 0x00538480u; return; } if (c.pc != 0x00454464u) [[unlikely]] return; }
L_00454464:
    st32((c.r[28].w[0] - 24684u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454474u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00454474u) [[unlikely]] return; }
L_00454474:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045447Cu); set32(c.r[4], ld32((c.r[28].w[0] - 24684u)));  if (depth < kMaxDepth) unit_00B6(c, 312u, depth + 1u); else { c.pc = 0x003DA8C0u; return; } if (c.pc != 0x0045447Cu) [[unlikely]] return; }
L_0045447C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00454490:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004544ACu); set32(c.r[5], c.r[29].w[0] + 28u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004544ACu) [[unlikely]] return; }
L_004544AC:
    c.f[0] = ld32((c.r[29].w[0] + 28u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004544C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.f[12] = fp::max(c.f[12], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::min(c.f[12], c.f[0]);
    st32((c.r[29].w[0] + 44u), c.f[12]);
    set32(c.r[4], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00454500u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00454500u) [[unlikely]] return; }
L_00454500:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00454578; }
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454514u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x00454514u) [[unlikely]] return; }
L_00454514:
    set32(c.r[16], c.r[2].w[0] + 28u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] + 30129u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454528u); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_0008(c, 148u, depth + 1u); else { c.pc = 0x00121220u; return; } if (c.pc != 0x00454528u) [[unlikely]] return; }
L_00454528:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00454568; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] + 30129u);
    set32(c.r[6], c.r[29].w[0] + 44u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454548u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_00D5(c, 58u, depth + 1u); else { c.pc = 0x00454600u; return; } if (c.pc != 0x00454548u) [[unlikely]] return; }
L_00454548:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454554u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x00454554u) [[unlikely]] return; }
L_00454554:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454560u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x00454560u) [[unlikely]] return; }
L_00454560:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00454574; } }
L_00454568:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454574u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_00D5(c, 56u, depth + 1u); else { c.pc = 0x00454590u; return; } if (c.pc != 0x00454574u) [[unlikely]] return; }
L_00454574:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00454578:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00454590:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], c.r[5].w[0] << 5);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], 0u + 8u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[4].w[0] + 16u)));
    c.f[20] = ld32((c.r[6].w[0]));
    set32(c.r[16], c.r[4].w[0] + c.r[5].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], c.r[16].w[0] + 4u);
    c.budget -= 14;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 20u)));  goto L_004545DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004545D0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004545D0u) [[unlikely]] return; }
L_004545D0:
    set32(c.r[3], c.r[16].w[0] + 4u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
L_004545DC:
    st32((c.r[3].w[0]), c.f[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00454600:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045462Cu); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x0045462Cu) [[unlikely]] return; }
L_0045462C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], c.r[17].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st16((c.r[17].w[0] + 24u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 8u);
    st32((c.r[17].w[0] + 20u), c.r[5].w[0]);
    c.f[20] = ld32((c.r[18].w[0]));
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 12;
    if (c.r[4].d[0] == c.r[5].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 20u)));  goto L_00454670; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454664u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00454664u) [[unlikely]] return; }
L_00454664:
    set32(c.r[2], c.r[17].w[0] + 4u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
L_00454670:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[3].w[0]), c.f[20]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00454698u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00454698u) [[unlikely]] return; }
L_00454698:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004546C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004546DCu); set32(c.r[5], c.r[29].w[0] + 28u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004546DCu) [[unlikely]] return; }
L_004546DC:
    c.f[0] = ld32((c.r[29].w[0] + 28u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004546F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[0] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[12] = fp::max(c.f[12], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = fp::min(c.f[12], c.f[0]);
    st32((c.r[29].w[0] + 44u), c.f[12]);
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 36u)));
    c.budget -= 15;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045472Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045472Cu) [[unlikely]] return; }
L_0045472C:
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454738u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x00454738u) [[unlikely]] return; }
L_00454738:
    set32(c.r[16], c.r[2].w[0] + 28u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] + 30143u);
    c.budget -= 3;
L_00454744:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045474Cu); set32(c.r[4], c.r[16].w[0] + 36u);  if (depth < kMaxDepth) unit_0008(c, 148u, depth + 1u); else { c.pc = 0x00121220u; return; } if (c.pc != 0x0045474Cu) [[unlikely]] return; }
L_0045474C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0045478C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[5].w[0] + 30143u);
    set32(c.r[6], c.r[29].w[0] + 44u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045476Cu); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_00D5(c, 58u, depth + 1u); else { c.pc = 0x00454600u; return; } if (c.pc != 0x0045476Cu) [[unlikely]] return; }
L_0045476C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454778u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x00454778u) [[unlikely]] return; }
L_00454778:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454784u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x00454784u) [[unlikely]] return; }
L_00454784:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0045479C; } }
L_0045478C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454798u); set32(c.r[6], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_00D5(c, 56u, depth + 1u); else { c.pc = 0x00454590u; return; } if (c.pc != 0x00454798u) [[unlikely]] return; }
L_00454798:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0045479C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004547B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004547C8u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 231u, depth + 1u); else { c.pc = 0x001329D0u; return; } if (c.pc != 0x004547C8u) [[unlikely]] return; }
L_004547C8:
    set32(c.r[17], c.r[16].w[0] + 12u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004547D8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D5(c, 94u, depth + 1u); else { c.pc = 0x00454950u; return; } if (c.pc != 0x004547D8u) [[unlikely]] return; }
L_004547D8:
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004547E4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D5(c, 93u, depth + 1u); else { c.pc = 0x00454940u; return; } if (c.pc != 0x004547E4u) [[unlikely]] return; }
L_004547E4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004547F0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D5(c, 88u, depth + 1u); else { c.pc = 0x004548F0u; return; } if (c.pc != 0x004547F0u) [[unlikely]] return; }
L_004547F0:
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26860u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454828u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x00454828u) [[unlikely]] return; }
L_00454828:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[2].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454838u); set32(c.r[5], c.r[5].w[0] + 30143u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00454838u) [[unlikely]] return; }
L_00454838:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454848u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x00454848u) [[unlikely]] return; }
L_00454848:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[12] = ld32((c.r[29].w[0] + 56u));  goto L_00454870; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0045486C; } }
    c.f[12] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045486Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x0045486Cu) [[unlikely]] return; }
L_0045486C:
    c.f[12] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 1;
L_00454870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454878u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D5(c, 64u, depth + 1u); else { c.pc = 0x004546F0u; return; } if (c.pc != 0x00454878u) [[unlikely]] return; }
L_00454878:
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454884u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x00454884u) [[unlikely]] return; }
L_00454884:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[2].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454894u); set32(c.r[5], c.r[5].w[0] + 30129u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00454894u) [[unlikely]] return; }
L_00454894:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 52u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004548A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 229u, depth + 1u); else { c.pc = 0x00126A10u; return; } if (c.pc != 0x004548A4u) [[unlikely]] return; }
L_004548A4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[12] = ld32((c.r[29].w[0] + 52u));  goto L_004548CC; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_004548C8; } }
    c.f[12] = ld32((c.r[29].w[0] + 52u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004548C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 227u, depth + 1u); else { c.pc = 0x001269B0u; return; } if (c.pc != 0x004548C8u) [[unlikely]] return; }
L_004548C8:
    c.f[12] = ld32((c.r[29].w[0] + 52u));
    c.budget -= 1;
L_004548CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004548D8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00D5(c, 48u, depth + 1u); else { c.pc = 0x004544C0u; return; } if (c.pc != 0x004548D8u) [[unlikely]] return; }
L_004548D8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004548F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454908u); set32(c.r[4], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_00D5(c, 92u, depth + 1u); else { c.pc = 0x00454930u; return; } if (c.pc != 0x00454908u) [[unlikely]] return; }
L_00454908:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454914u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 461u, depth + 1u); else { c.pc = 0x001238F0u; return; } if (c.pc != 0x00454914u) [[unlikely]] return; }
L_00454914:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045491Cu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0008(c, 460u, depth + 1u); else { c.pc = 0x001238E0u; return; } if (c.pc != 0x0045491Cu) [[unlikely]] return; }
L_0045491C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00454930:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_00454940:
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_00454950:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0045499C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454968u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x00454968u) [[unlikely]] return; }
L_00454968:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u - 1u);  goto L_00454988; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454980u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x00454980u) [[unlikely]] return; }
L_00454980:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_00454988:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_004549A0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454998u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x00454998u) [[unlikely]] return; }
L_00454998:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0045499C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_004549A0:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004549B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[28].w[0] - 24680u)));
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { st32((c.r[28].w[0] - 24680u), 0u);  goto L_00454A0C; }
    set32(c.r[4], c.r[16].w[0] + 12u);
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004549F8; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004549F4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004549F4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004549F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004549F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 120u, depth + 1u); else { c.pc = 0x001251B0u; return; } if (c.pc != 0x004549F4u) [[unlikely]] return; }
L_004549F4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004549F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454A00u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 228u, depth + 1u); else { c.pc = 0x00132970u; return; } if (c.pc != 0x00454A00u) [[unlikely]] return; }
L_00454A00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454A08u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00454A08u) [[unlikely]] return; }
L_00454A08:
    st32((c.r[28].w[0] - 24680u), 0u);
    c.budget -= 1;
L_00454A0C:
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00454A20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 60u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454A34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x00454A34u) [[unlikely]] return; }
L_00454A34:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[28].w[0] - 24680u), c.r[2].w[0]);  goto L_00454A48; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454A44u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D5(c, 73u, depth + 1u); else { c.pc = 0x004547B0u; return; } if (c.pc != 0x00454A44u) [[unlikely]] return; }
L_00454A44:
    st32((c.r[28].w[0] - 24680u), c.r[2].w[0]);
    c.budget -= 1;
L_00454A48:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00454A60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00454A90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454A88u);  if (depth < kMaxDepth) unit_0009(c, 148u, depth + 1u); else { c.pc = 0x001258C0u; return; } if (c.pc != 0x00454A88u) [[unlikely]] return; }
L_00454A88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00454B04; } }
L_00454A90:
    set32(c.r[3], c.r[5].w[0] - 1u);
    st32((c.r[17].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00454B00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[17].w[0] + 4u);  if (t) { goto L_00454AF0; } }
L_00454AB8:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 4u);  goto L_00454ADC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454AD8u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00454AD8u) [[unlikely]] return; }
L_00454AD8:
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_00454ADC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454AE4u);  if (depth < kMaxDepth) unit_0009(c, 154u, depth + 1u); else { c.pc = 0x00125A40u; return; } if (c.pc != 0x00454AE4u) [[unlikely]] return; }
L_00454AE4:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] - 128u);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 3;
L_00454AF0:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00454AB8u | kUnwind; return; } goto L_00454AB8; }
L_00454B00:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00454B04:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00454B20:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[2], c.r[5].w[0] << 2);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    c.f[20] = ld32((c.r[3].w[0] + 36u));
    c.f[21] = ld32((c.r[3].w[0] + 40u));
    c.f[22] = ld32((c.r[3].w[0] + 44u));
    st32((c.r[29].w[0] + 112u), c.f[20]);
    st32((c.r[29].w[0] + 116u), c.f[21]);
    st32((c.r[29].w[0] + 120u), c.f[22]);
    c.f[2] = ld32((c.r[3].w[0] + 56u));
    c.f[1] = ld32((c.r[3].w[0] + 52u));
    c.f[0] = ld32((c.r[3].w[0] + 48u));
    c.f[2] = fp::sub(c.f[2], c.f[22]);
    c.f[1] = fp::sub(c.f[1], c.f[21]);
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 56u), c.f[2]);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[3] = fp::sqrt(c.f[3]);
    c.f[0] = ld32((c.r[28].w[0] - 32484u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 35;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00454BD8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 3u, c.f[0], c.f[3]);
    c.f[2] = ld32((c.r[29].w[0] + 48u));
    c.f[1] = ld32((c.r[29].w[0] + 52u));
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    c.f[4] = fp::mul(c.f[2], c.f[3]);
    c.f[5] = fp::mul(c.f[1], c.f[3]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.f[3] = fp::mul(c.f[0], c.f[3]);  if (t) { goto L_00454BE8; } }
L_00454BD8:
    c.f[4] = 0u;
    c.f[5] = c.f[4];
    c.f[3] = c.f[4];
    c.budget -= 4;
L_00454BE8:
    st32((c.r[29].w[0] + 96u), c.f[4]);
    st32((c.r[29].w[0] + 100u), c.f[5]);
    st32((c.r[29].w[0] + 104u), c.f[3]);
    c.f[1] = ld32((c.r[3].w[0] + 64u));
    c.f[0] = ld32((c.r[3].w[0] + 68u));
    c.f[2] = ld32((c.r[3].w[0] + 60u));
    c.facc = fp::mul(c.f[1], c.f[3]);
    c.f[7] = fp::sub(c.facc, fp::mul(c.f[0], c.f[5]));
    c.facc = fp::mul(c.f[0], c.f[4]);
    c.f[6] = fp::sub(c.facc, fp::mul(c.f[2], c.f[3]));
    c.facc = fp::mul(c.f[2], c.f[5]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[1], c.f[4]));
    c.facc = fp::mul(c.f[5], c.f[0]);
    c.f[8] = fp::sub(c.facc, fp::mul(c.f[3], c.f[6]));
    c.facc = fp::mul(c.f[3], c.f[7]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[4], c.f[0]));
    c.facc = fp::mul(c.f[4], c.f[6]);
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[5], c.f[7]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[2].w[0];
    c.facc = fp::mul(c.f[8], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    fpu_rsqrt(c, 3u, c.f[4], c.f[3]);
    c.f[0] = fp::mul(c.f[8], c.f[3]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[0] = fp::mul(c.f[2], c.f[3]);
    st32((c.r[29].w[0] + 88u), c.f[0]);
    st32((c.r[29].w[0] + 84u), c.f[1]);
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = 0u;
    c.f[0] = fp::sub(c.f[12], c.f[0]);
    c.f[5] = c.f[0] & fp::kAbs;
    c.f[3] = fp::sub(c.f[20], c.f[2]);
    c.f[1] = ld32((c.r[16].w[0] + 12u));
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.f[2] = fp::sub(c.f[21], c.f[1]);
    c.f[1] = fp::sub(c.f[22], c.f[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    fpu_compare(c, fp::key(c.f[5]) < fp::key(c.f[0]));
    c.budget -= 44;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00454CA8; } }
    c.f[0] = ld32((c.r[28].w[0] - 32480u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00454CBC; } }
L_00454CA8:
    c.f[3] = 0u;
    c.f[2] = c.f[3];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[1] = c.f[3];  if (t) { goto L_00454CD4; } }
L_00454CBC:
    fpu_div(c, 0u, c.f[4], c.f[12]);
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 6;
L_00454CD4:
    c.facc = fp::mul(c.f[3], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[4] = fp::sqrt(c.f[4]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[0]));
    c.budget -= 11;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[28].w[0] - 26860u)));  goto L_00454D14; }
    c.f[3] = 0u;
    c.f[2] = c.f[3];
    c.f[1] = c.f[3];
    set32(c.r[4], ld32((c.r[28].w[0] - 26860u)));
    c.budget -= 5;
L_00454D14:
    st32((c.r[29].w[0] + 64u), c.f[3]);
    set32(c.r[6], c.r[29].w[0] + 112u);
    set32(c.r[7], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 68u), c.f[2]);
    set32(c.r[8], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 72u), c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454D34u); set32(c.r[9], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_00B6(c, 164u, depth + 1u); else { c.pc = 0x003D9C70u; return; } if (c.pc != 0x00454D34u) [[unlikely]] return; }
L_00454D34:
    st32((c.r[16].w[0] + 8u), c.f[20]);
    st32((c.r[16].w[0] + 12u), c.f[21]);
    st32((c.r[16].w[0] + 16u), c.f[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00454D60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    if (c.r[6].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00454D94; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00454D88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00454D90; } }
L_00454D88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454D90u);  if (depth < kMaxDepth) unit_00D5(c, 110u, depth + 1u); else { c.pc = 0x00454B20u; return; } if (c.pc != 0x00454D90u) [[unlikely]] return; }
L_00454D90:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00454D94:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00454DA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 22168u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 8u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  c.pc = t; return; }
L_00454DD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 30328u);  c.pc = t; return; }
L_00454DE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[18], ld32((c.r[4].w[0] + 56u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == c.r[16].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00454E64; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 56u), c.r[16].w[0]);  goto L_00454E44; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454E14u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00454E14u) [[unlikely]] return; }
L_00454E14:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454E24u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00454E24u) [[unlikely]] return; }
L_00454E24:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00454E40; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00454E40u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00454E40u) [[unlikely]] return; }
L_00454E40:
    st32((c.r[17].w[0] + 56u), c.r[16].w[0]);
    c.budget -= 1;
L_00454E44:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 56u)));  goto L_00454E90; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454E54u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00454E54u) [[unlikely]] return; }
L_00454E54:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454E64u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00454E64u) [[unlikely]] return; }
L_00454E64:
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00454E90; } }
L_00454E70:
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    c.f[0] = fp::min(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    c.f[0] = fp::max(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 24u), c.f[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 8;
L_00454E90:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[1] = ld32((c.r[17].w[0] + 20u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00454E70u | kUnwind; return; } goto L_00454E70; }
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = ld32((c.r[17].w[0] + 20u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454EA8u); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x00454EA8u) [[unlikely]] return; }
L_00454EA8:
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] + 30336u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00454EC0u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00454EC0u) [[unlikely]] return; }
L_00454EC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00454EE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 5;
    if (c.r[4].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_00454EFC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00454F34; } }
L_00454EFC:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00454F08u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00454F08u) [[unlikely]] return; }
L_00454F08:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 17288u);  if (t) { goto L_00454F24; } }
L_00454F14:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_00454F24; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00454F30; } }
L_00454F24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00454F14u | kUnwind; return; } goto L_00454F14; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00454F30:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00454F34:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00454F40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[3] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.f[2] = ld32((c.r[3].w[0] + 24u));
    c.f[1] = ld32((c.r[3].w[0] + 20u));
    c.f[0] = ld32((c.r[3].w[0] + 28u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[1] = fp::max(c.f[0], c.f[3]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[4] = fp::min(c.f[1], c.f[0]);
    set32(c.r[16], ld32((c.r[4].w[0] + 56u)));
    c.f[2] = ld32((c.r[4].w[0] + 24u));
    c.f[1] = ld32((c.r[4].w[0] + 20u));
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.facc = fp::add(c.f[3], c.f[0]);
    c.budget -= 24;
    { const bool t = 0ull == 0ull; c.f[20] = fp::add(c.facc, fp::mul(c.f[1], c.f[4]));  if (t) { goto L_00454FB4; } }
L_00454FA0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 88u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00454FB0u); c.f[12] = c.f[20];  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00454FB0u) [[unlikely]] return; }
L_00454FB0:
    set32(c.r[16], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 1;
L_00454FB4:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00454FA0u | kUnwind; return; } goto L_00454FA0; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00454FD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004550B8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[17].w[0] + 56u);
    set32(c.r[3], c.r[3].w[0] + 29008u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_00455044; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 52u);  goto L_00455048; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455018u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00455018u) [[unlikely]] return; }
L_00455018:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455028u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00455028u) [[unlikely]] return; }
L_00455028:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00455044; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00455044u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00455044u) [[unlikely]] return; }
L_00455044:
    set32(c.r[2], c.r[17].w[0] + 52u);
    c.budget -= 1;
L_00455048:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00455094; }
    set32(c.r[18], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00455090; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455064u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00455064u) [[unlikely]] return; }
L_00455064:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455074u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00455074u) [[unlikely]] return; }
L_00455074:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00455090; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00455090u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00455090u) [[unlikely]] return; }
L_00455090:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00455094:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045509Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 245u, depth + 1u); else { c.pc = 0x0031E610u; return; } if (c.pc != 0x0045509Cu) [[unlikely]] return; }
L_0045509C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004550BC; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004550B8u); set32(c.r[5], 0u + 60u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x004550B8u) [[unlikely]] return; }
L_004550B8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004550BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_004550E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004550FCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 251u, depth + 1u); else { c.pc = 0x0031E6D0u; return; } if (c.pc != 0x004550FCu) [[unlikely]] return; }
L_004550FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 29008u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 52u), c.r[17].w[0]);  if (t) { goto L_00455128; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455118u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00455118u) [[unlikely]] return; }
L_00455118:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455128u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00455128u) [[unlikely]] return; }
L_00455128:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 56u), 0u);  if (t) { goto L_0045514C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045513Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0045513Cu) [[unlikely]] return; }
L_0045513C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045514Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045514Cu) [[unlikely]] return; }
L_0045514C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00455170:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004551ACu); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x004551ACu) [[unlikely]] return; }
L_004551AC:
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004551B8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004551B8u) [[unlikely]] return; }
L_004551B8:
    st32((c.r[29].w[0] + 168u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004551D0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00BE(c, 256u, depth + 1u); else { c.pc = 0x003FA980u; return; } if (c.pc != 0x004551D0u) [[unlikely]] return; }
L_004551D0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 168u)));  goto L_00455424; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004551E8u); set32(c.r[4], ld32((c.r[2].w[0] + 52u)));  if (depth < kMaxDepth) unit_002F(c, 118u, depth + 1u); else { c.pc = 0x001BDBC0u; return; } if (c.pc != 0x004551E8u) [[unlikely]] return; }
L_004551E8:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 46u));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_00455200; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00455218; } }
L_00455200:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_00455218:
    c.f[1] = fp::mul(c.f[0], c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[1], c.f[0]);  goto L_00455244; }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_0045525C; } }
L_00455244:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 6;
L_0045525C:
    c.r[16].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] <= 0; c.f[20] = ld32((c.r[28].w[0] - 29052u));  if (t) { goto L_00455420; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40200000u);
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] & 65534ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    c.f[1] = ld32((c.r[18].w[0]));
    st32((c.r[2].w[0] + 96u), c.f[1]);
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    st32((c.r[2].w[0] + 100u), c.f[1]);
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    st32((c.r[2].w[0] + 104u), c.f[1]);
    c.f[3] = ld32((c.r[17].w[0]));
    st32((c.r[29].w[0] + 152u), c.f[3]);
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    st32((c.r[29].w[0] + 156u), c.f[2]);
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 160u), c.f[1]);
    st32((c.r[29].w[0] + 156u), c.f[0]);
    c.facc = fp::mul(c.f[3], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    fpu_rsqrt(c, 4u, c.f[14], c.f[4]);
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    st32((c.r[29].w[0] + 156u), c.f[0]);
    c.f[0] = fp::mul(c.f[3], c.f[4]);
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[4]);
    st32((c.r[29].w[0] + 160u), c.f[0]);
    c.facc = fp::mul(c.f[3], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[21] = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    set32(c.r[4], c.r[29].w[0] + 120u);
    c.f[21] = fp::sqrt(c.f[21]);
    c.f[12] = 0u;
    c.budget -= 50;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455330u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_00BB(c, 112u, depth + 1u); else { c.pc = 0x003ED5E0u; return; } if (c.pc != 0x00455330u) [[unlikely]] return; }
L_00455330:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045533Cu); set32(c.r[4], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_0046(c, 279u, depth + 1u); else { c.pc = 0x0021AB00u; return; } if (c.pc != 0x0045533Cu) [[unlikely]] return; }
L_0045533C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455344u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00BB(c, 111u, depth + 1u); else { c.pc = 0x003ED5D0u; return; } if (c.pc != 0x00455344u) [[unlikely]] return; }
L_00455344:
    c.f[12] = ld32((c.r[29].w[0] + 152u));
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 2;
L_0045534C:
    c.f[13] = ld32((c.r[29].w[0] + 156u));
    c.f[14] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045535Cu); c.f[23] = c.f[0];  if (depth < kMaxDepth) unit_00BB(c, 112u, depth + 1u); else { c.pc = 0x003ED5E0u; return; } if (c.pc != 0x0045535Cu) [[unlikely]] return; }
L_0045535C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455364u); set32(c.r[4], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_003E(c, 272u, depth + 1u); else { c.pc = 0x001FA100u; return; } if (c.pc != 0x00455364u) [[unlikely]] return; }
L_00455364:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.f[13] = 0u;
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045537Cu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_00BB(c, 112u, depth + 1u); else { c.pc = 0x003ED5E0u; return; } if (c.pc != 0x0045537Cu) [[unlikely]] return; }
L_0045537C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455388u); set32(c.r[4], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_0046(c, 279u, depth + 1u); else { c.pc = 0x0021AB00u; return; } if (c.pc != 0x00455388u) [[unlikely]] return; }
L_00455388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455390u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00BB(c, 111u, depth + 1u); else { c.pc = 0x003ED5D0u; return; } if (c.pc != 0x00455390u) [[unlikely]] return; }
L_00455390:
    c.f[12] = ld32((c.r[29].w[0] + 140u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045539Cu); c.f[22] = c.f[0];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x0045539Cu) [[unlikely]] return; }
L_0045539C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004553A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 216u, depth + 1u); else { c.pc = 0x003BDD40u; return; } if (c.pc != 0x004553A8u) [[unlikely]] return; }
L_004553A8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[2] = ld32((c.r[28].w[0] - 32620u));  goto L_004553B8; }
    c.f[22] = c.f[22] ^ fp::kSign;
    c.f[2] = ld32((c.r[28].w[0] - 32620u));
    c.budget -= 2;
L_004553B8:
    set32(c.r[2], ld32((c.r[19].w[0] + 40u)));
    c.f[1] = ld32((c.r[28].w[0] - 32344u));
    c.f[0] = ld32((c.r[28].w[0] - 32136u));
    c.f[2] = fp::mul(c.f[2], c.f[21]);
    st32((c.r[2].w[0] + 24u), c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[21]);
    set32(c.r[2], ld32((c.r[19].w[0] + 40u)));
    st32((c.r[2].w[0] + 28u), c.f[1]);
    set32(c.r[2], ld32((c.r[19].w[0] + 40u)));
    st32((c.r[2].w[0] + 32u), c.f[23]);
    set32(c.r[2], ld32((c.r[19].w[0] + 40u)));
    st32((c.r[2].w[0] + 36u), c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 40u)));
    st32((c.r[2].w[0] + 40u), c.f[22]);
    set32(c.r[2], ld32((c.r[19].w[0] + 40u)));
    st32((c.r[2].w[0] + 44u), c.f[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 60u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455404u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0060(c, 572u, depth + 1u); else { c.pc = 0x00283B30u; return; } if (c.pc != 0x00455404u) [[unlikely]] return; }
L_00455404:
    set32(c.r[4], ld32((c.r[19].w[0] + 40u)));
    c.f[12] = c.f[20];
    set32(c.r[6], ld32((c.r[19].w[0] + 48u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 100u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00455420u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00455420u) [[unlikely]] return; }
L_00455420:
    set32(c.r[4], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_00455424:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045542Cu);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x0045542Cu) [[unlikely]] return; }
L_0045542C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00455460:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455484u); c.f[20] = c.f[12];  if (depth < kMaxDepth) unit_002F(c, 118u, depth + 1u); else { c.pc = 0x001BDBC0u; return; } if (c.pc != 0x00455484u) [[unlikely]] return; }
L_00455484:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 220u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 48u));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] > 0; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004554AC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 220u)));
    c.r[3].d[0] = ld16((c.r[3].w[0] + 48u));
    c.budget -= 5;
    if (c.r[3].sd[0] <= 0) { st32((c.r[16].w[0] + 72u), c.f[20]);  goto L_004554C0; }
L_004554AC:
    c.f[0] = ld32((c.r[16].w[0] + 72u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004554BCu); c.f[12] = fp::sub(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_00D5(c, 168u, depth + 1u); else { c.pc = 0x004554E0u; return; } if (c.pc != 0x004554BCu) [[unlikely]] return; }
L_004554BC:
    st32((c.r[16].w[0] + 72u), c.f[20]);
    c.budget -= 1;
L_004554C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004554E0:
    set32(c.r[29], c.r[29].w[0] - 416u);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 36u), c.f[29]);
    st32((c.r[29].w[0] + 32u), c.f[28]);
    st32((c.r[29].w[0] + 28u), c.f[27]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 212u)));
    set32(c.r[18], ld32((c.r[16].w[0] + 212u)));
    c.budget -= 30;
    { const bool t = c.r[18].d[0] == c.r[17].d[0]; c.f[29] = c.f[12];  if (t) { goto L_004555B8; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0] + 212u), c.r[17].w[0]);  goto L_00455598; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455568u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00455568u) [[unlikely]] return; }
L_00455568:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455578u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00455578u) [[unlikely]] return; }
L_00455578:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00455594; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00455594u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00455594u) [[unlikely]] return; }
L_00455594:
    st32((c.r[16].w[0] + 212u), c.r[17].w[0]);
    c.budget -= 1;
L_00455598:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 16u)));  goto L_004555BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004555A8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004555A8u) [[unlikely]] return; }
L_004555A8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004555B8u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004555B8u) [[unlikely]] return; }
L_004555B8:
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 1;
L_004555BC:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 44u));
    set32(c.r[20], ld32((c.r[2].w[0] + 220u)));
    c.r[2].d[0] = ld16((c.r[20].w[0] + 48u));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], ld32((c.r[19].w[0] + 8u)));  if (t) { goto L_004555DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[20].w[0] + 112u)));  if (t) { goto L_004555E4; } }
L_004555DC:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[20].w[0] + 112u)));
    c.budget -= 2;
L_004555E4:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[4].w[0] + 220u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455608u);  if (depth < kMaxDepth) unit_0048(c, 59u, depth + 1u); else { c.pc = 0x00220730u; return; } if (c.pc != 0x00455608u) [[unlikely]] return; }
L_00455608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455610u);  if (depth < kMaxDepth) unit_0048(c, 57u, depth + 1u); else { c.pc = 0x00220700u; return; } if (c.pc != 0x00455610u) [[unlikely]] return; }
L_00455610:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.f[2] = ld32((c.r[22].w[0] + 116u));
    c.f[1] = ld32((c.r[22].w[0] + 120u));
    set32(c.r[21], ld32((c.r[20].w[0] + 32u)));
    c.f[0] = ld32((c.r[22].w[0] + 112u));
    set32(c.r[16], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 220u)));
    c.f[3] = ld32((c.r[19].w[0] + 4u));
    set32(c.r[23], ld32((c.r[20].w[0] + 84u)));
    c.r[17].d[0] = 0ull + 0ull;
    c.r[30].d[0] = 0ull + 0ull;
    set32(c.r[22], ld32((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 80u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    c.f[23] = ld32((c.r[3].w[0] + 172u));
    set32(c.r[2], c.r[3].w[0] + 112u);
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + 160u);
    c.f[28] = fp::mul(c.f[23], c.f[3]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 400u), c.f[0]);
    st32((c.r[29].w[0] + 404u), c.f[2]);
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 408u), c.f[1]);  if (t) { goto L_00455950; } }
L_00455674:
    c.f[21] = ld32((c.r[18].w[0] + 4u));
    c.f[22] = ld32((c.r[18].w[0] + 8u));
    c.facc = fp::mul(c.f[20], c.f[20]);
    c.facc = fp::add(c.facc, fp::mul(c.f[21], c.f[21]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[22], c.f[22]));
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    c.f[2] = ld32((c.r[23].w[0]));
    set32(c.r[5], ld32((c.r[29].w[0] + 256u)));
    c.f[1] = ld32((c.r[21].w[0] + 8u));
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.f[3] = ld32((c.r[2].w[0]));
    set32(c.r[6], c.r[29].w[0] + 336u);
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[27] = fp::mul(c.f[23], c.f[2]);
    c.f[2] = fp::mul(c.f[23], c.f[1]);
    c.f[1] = fp::mul(c.f[23], c.f[0]);
    c.f[0] = ld32((c.r[21].w[0]));
    c.f[0] = fp::mul(c.f[23], c.f[0]);
    st32((c.r[29].w[0] + 340u), c.f[1]);
    st32((c.r[29].w[0] + 344u), c.f[2]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004556D0u); st32((c.r[29].w[0] + 336u), c.f[0]);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x004556D0u) [[unlikely]] return; }
L_004556D0:
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    c.f[3] = ld32((c.r[29].w[0] + 356u));
    c.f[1] = ld32((c.r[29].w[0] + 352u));
    set32(c.r[5], ld32((c.r[29].w[0] + 256u)));
    c.f[5] = ld32((c.r[29].w[0] + 360u));
    set32(c.r[4], c.r[29].w[0] + 384u);
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    set32(c.r[6], c.r[29].w[0] + 320u);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[4] = ld32((c.r[2].w[0] + 8u));
    c.f[25] = fp::add(c.f[3], c.f[2]);
    c.f[26] = fp::add(c.f[1], c.f[0]);
    c.f[2] = ld32((c.r[18].w[0] + 8u));
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[2] = fp::mul(c.f[28], c.f[2]);
    c.f[1] = fp::mul(c.f[28], c.f[1]);
    c.f[0] = fp::mul(c.f[28], c.f[0]);
    c.f[24] = fp::add(c.f[5], c.f[4]);
    st32((c.r[29].w[0] + 328u), c.f[2]);
    st32((c.r[29].w[0] + 324u), c.f[1]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045572Cu); st32((c.r[29].w[0] + 320u), c.f[0]);  if (depth < kMaxDepth) unit_005F(c, 72u, depth + 1u); else { c.pc = 0x0027D190u; return; } if (c.pc != 0x0045572Cu) [[unlikely]] return; }
L_0045572C:
    c.f[2] = ld32((c.r[29].w[0] + 384u));
    c.f[1] = ld32((c.r[29].w[0] + 388u));
    c.f[0] = ld32((c.r[29].w[0] + 392u));
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[0] = ld32((c.r[28].w[0] - 32564u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], ld32((c.r[19].w[0] + 12u)));  goto L_0045575C; }
    c.f[27] = 0u;
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 2;
L_0045575C:
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455778u); set32(c.r[20], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 197u, depth + 1u); else { c.pc = 0x001BE690u; return; } if (c.pc != 0x00455778u) [[unlikely]] return; }
L_00455778:
    set32(c.r[4], c.r[29].w[0] + 288u);
    set32(c.r[5], c.r[29].w[0] + 400u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455788u); set32(c.r[6], c.r[29].w[0] + 384u);  if (depth < kMaxDepth) unit_005A(c, 350u, depth + 1u); else { c.pc = 0x0026B3E0u; return; } if (c.pc != 0x00455788u) [[unlikely]] return; }
L_00455788:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455794u); set32(c.r[5], c.r[29].w[0] + 288u);  if (depth < kMaxDepth) unit_003E(c, 273u, depth + 1u); else { c.pc = 0x001FA150u; return; } if (c.pc != 0x00455794u) [[unlikely]] return; }
L_00455794:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045579Cu); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_003E(c, 272u, depth + 1u); else { c.pc = 0x001FA100u; return; } if (c.pc != 0x0045579Cu) [[unlikely]] return; }
L_0045579C:
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004557A8u); set32(c.r[5], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0046(c, 276u, depth + 1u); else { c.pc = 0x0021AA70u; return; } if (c.pc != 0x004557A8u) [[unlikely]] return; }
L_004557A8:
    c.f[5] = ld32((c.r[29].w[0] + 372u));
    c.f[2] = ld32((c.r[29].w[0] + 408u));
    c.f[4] = ld32((c.r[29].w[0] + 376u));
    c.f[1] = ld32((c.r[29].w[0] + 404u));
    c.facc = fp::mul(c.f[5], c.f[2]);
    c.f[6] = fp::sub(c.facc, fp::mul(c.f[4], c.f[1]));
    c.f[0] = ld32((c.r[29].w[0] + 400u));
    c.f[3] = ld32((c.r[29].w[0] + 368u));
    c.facc = fp::mul(c.f[4], c.f[0]);
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[3], c.f[2]));
    c.facc = fp::mul(c.f[3], c.f[1]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[5], c.f[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[4].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.f[1] = fp::mul(c.f[1], c.f[27]);
    set32(c.r[3], c.r[17].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    set32(c.r[17], c.r[17].w[0] + 48u);
    c.r[1].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(16337ll) ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 28u);
    set32(c.r[21], c.r[21].w[0] + 12u);
    set32(c.r[23], c.r[23].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.f[9] = fp::mul(c.f[27], c.f[2]);
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    c.f[7] = fp::mul(c.f[27], c.f[6]);
    c.f[6] = fp::mul(c.f[1], c.f[4]);
    c.f[0] = fp::mul(c.f[27], c.f[0]);
    c.f[2] = fp::mul(c.f[29], c.f[20]);
    c.f[5] = fp::mul(c.f[1], c.f[5]);
    c.f[3] = fp::mul(c.f[1], c.f[3]);
    c.f[1] = fp::sub(c.f[26], c.f[2]);
    c.f[4] = fp::add(c.f[26], c.f[7]);
    c.f[2] = fp::add(c.f[4], c.f[3]);
    c.f[1] = fp::sub(c.f[1], c.f[7]);
    c.f[7] = fp::add(c.f[25], c.f[9]);
    c.f[4] = fp::sub(c.f[4], c.f[3]);
    st32((c.r[20].w[0]), c.f[2]);
    c.f[2] = fp::add(c.f[7], c.f[5]);
    c.f[8] = fp::add(c.f[24], c.f[0]);
    c.f[3] = fp::sub(c.f[7], c.f[5]);
    st32((c.r[20].w[0] + 4u), c.f[2]);
    c.f[5] = fp::add(c.f[8], c.f[6]);
    st32((c.r[20].w[0] + 8u), c.f[5]);
    st32((c.r[20].w[0] + 12u), c.f[4]);
    c.f[2] = fp::sub(c.f[8], c.f[6]);
    st32((c.r[20].w[0] + 16u), c.f[3]);
    st32((c.r[20].w[0] + 20u), c.f[2]);
    st32((c.r[20].w[0] + 24u), c.f[1]);
    c.f[1] = 0u;
    c.facc = fp::add(c.f[1], c.f[25]);
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[29], c.f[21]));
    c.facc = fp::add(c.f[1], c.f[24]);
    c.f[1] = fp::sub(c.f[2], c.f[9]);
    st32((c.r[20].w[0] + 28u), c.f[1]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[29], c.f[22]));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[20].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[3].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[3].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[3].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[3].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    st32((c.r[3].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[3].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    st32((c.r[3].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[3].w[0] + 44u), c.f[0]);
    set32(c.r[16], c.r[16].w[0] + 16u);
    st32((c.r[3].w[0] + 44u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 90;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[19].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_00455938; } }
    set32(c.r[3], c.r[17].w[0] >> 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10010000u);
    st32((c.r[2].w[0] - 12256u), c.r[3].w[0]);
    st32((c.r[2].w[0] - 12272u), c.r[22].w[0]);
    set32(c.r[3], 0u + 257u);
    st32((c.r[2].w[0] - 12160u), 0u);
    st32((c.r[2].w[0] - 12288u), c.r[3].w[0]);
    set32(c.r[22], c.r[22].w[0] + c.r[17].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 10;
L_00455938:
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    c.r[2].d[0] = ld16((c.r[19].w[0] + 44u));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00455960; } }
    set32(c.r[30], c.r[30].w[0] + 1u);
    c.budget -= 1;
L_00455950:
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[30].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.f[20] = ld32((c.r[18].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00455674u | kUnwind; return; } goto L_00455674; }
L_00455960:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 8u)));  goto L_0045598C; }
    set32(c.r[3], c.r[17].w[0] >> 4);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10010000u);
    st32((c.r[2].w[0] - 12256u), c.r[3].w[0]);
    st32((c.r[2].w[0] - 12272u), c.r[22].w[0]);
    set32(c.r[3], 0u + 257u);
    st32((c.r[2].w[0] - 12160u), 0u);
    st32((c.r[2].w[0] - 12288u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 9;
L_0045598C:
    set32(c.r[3], ld32((c.r[2].w[0] + 220u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 52u));
    c.r[2].d[0] = c.r[2].d[0] | 37ull;
    st16((c.r[3].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 220u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004559C0u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004559C0u) [[unlikely]] return; }
L_004559C0:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 220u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 96u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004559D8u); c.r[5].d[0] = ld16((c.r[19].w[0] + 12u));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004559D8u) [[unlikely]] return; }
L_004559D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    c.f[29] = ld32((c.r[29].w[0] + 36u));
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[30]);
    c.f[28] = ld32((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    c.f[27] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 416u);  c.pc = t; return; }
L_00455A30:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[2], 0u - 16u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    set32(c.r[5], 0u + 16u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 12u), 0u);
    c.r[4].d[0] = ld16((c.r[4].w[0] + 44u));
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[18], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[18].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 15u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455A90u); c.r[4].d[0] = c.r[3].d[0] & c.r[2].d[0];  if (depth < kMaxDepth) unit_0047(c, 102u, depth + 1u); else { c.pc = 0x0021D0A0u; return; } if (c.pc != 0x00455A90u) [[unlikely]] return; }
L_00455A90:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 16u);
    set32(c.r[2], c.r[18].w[0] << 4);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] + 15u);
    set32(c.r[2], 0u - 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455AB0u); c.r[4].d[0] = c.r[3].d[0] & c.r[2].d[0];  if (depth < kMaxDepth) unit_0047(c, 102u, depth + 1u); else { c.pc = 0x0021D0A0u; return; } if (c.pc != 0x00455AB0u) [[unlikely]] return; }
L_00455AB0:
    c.r[17].d[0] = ld16((c.r[20].w[0] + 44u));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455ACCu); set32(c.r[4], c.r[2].w[0] << 1);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x00455ACCu) [[unlikely]] return; }
L_00455ACC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[22].d[0] = 0ull + 0ull;
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_00455B94; } }
L_00455B08:
    set32(c.r[21], c.r[14].w[0] + c.r[22].w[0]);
    set32(c.r[15], c.r[21].w[0] << 4);
    set32(c.r[14], c.r[21].w[0] << 1);
    set32(c.r[25], c.r[19].w[0] + c.r[15].w[0]);
    set32(c.r[24], c.r[16].w[0] + c.r[14].w[0]);
    c.f[0] = ld32((c.r[13].w[0] + 18144u));
    set32(c.r[15], c.r[21].w[0] + 1u);
    set32(c.r[14], c.r[21].w[0] + 2u);
    set32(c.r[22], c.r[22].w[0] + 1u);
    st32((c.r[25].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[12].w[0] + 18148u));
    st32((c.r[25].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[11].w[0] + 18152u));
    st32((c.r[25].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[10].w[0] + 18156u));
    st32((c.r[25].w[0] + 12u), c.f[0]);
    c.f[0] = ld32((c.r[9].w[0] + 18144u));
    st32((c.r[25].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[8].w[0] + 18148u));
    st32((c.r[25].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 18152u));
    st32((c.r[25].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 18156u));
    st32((c.r[25].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 18144u));
    st32((c.r[25].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 18148u));
    st32((c.r[25].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 18152u));
    st32((c.r[25].w[0] + 40u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 18156u));
    st32((c.r[25].w[0] + 44u), c.f[0]);
    st16((c.r[24].w[0]), static_cast<std::uint16_t>(c.r[21].w[0]));
    st16((c.r[24].w[0] + 2u), static_cast<std::uint16_t>(c.r[15].w[0]));
    st16((c.r[24].w[0] + 4u), static_cast<std::uint16_t>(c.r[14].w[0]));
    c.budget -= 35;
L_00455B94:
    c.r[14].d[0] = ld16((c.r[20].w[0] + 44u));
    c.r[14].d[0] = c.r[22].d[0] < c.r[14].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[14].d[0] != 0ull) { set32(c.r[14], c.r[22].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00455B08u | kUnwind; return; } goto L_00455B08; }
    set32(c.r[4], 0u + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455BB0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00455BB0u) [[unlikely]] return; }
L_00455BB0:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[21].d[0] == 0ull) { set32(c.r[4], 0u + 256u);  goto L_00455BF8; }
    st64((c.r[29].w[0]), c.r[17].d[0]);
    c.r[5].d[0] = c.r[18].d[0] & 65535ull;
    st64((c.r[29].w[0] + 8u), c.r[16].d[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), 0ull);
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455BF0u); st64((c.r[29].w[0] + 24u), 0ull);  if (depth < kMaxDepth) unit_0087(c, 457u, depth + 1u); else { c.pc = 0x0031FEE0u; return; } if (c.pc != 0x00455BF0u) [[unlikely]] return; }
L_00455BF0:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 256u);
    c.budget -= 2;
L_00455BF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455C00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00455C00u) [[unlikely]] return; }
L_00455C00:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[17], ld32((c.r[20].w[0] + 8u)));  goto L_00455C20; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455C18u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 342u, depth + 1u); else { c.pc = 0x0031F1B0u; return; } if (c.pc != 0x00455C18u) [[unlikely]] return; }
L_00455C18:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 2;
L_00455C20:
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[2], ld32((c.r[20].w[0] + 8u)));  goto L_00455C8C; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[20].w[0] + 8u), c.r[16].w[0]);  goto L_00455C68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455C38u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00455C38u) [[unlikely]] return; }
L_00455C38:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455C48u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00455C48u) [[unlikely]] return; }
L_00455C48:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00455C64; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00455C64u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00455C64u) [[unlikely]] return; }
L_00455C64:
    st32((c.r[20].w[0] + 8u), c.r[16].w[0]);
    c.budget -= 1;
L_00455C68:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00455C88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455C78u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00455C78u) [[unlikely]] return; }
L_00455C78:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455C88u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00455C88u) [[unlikely]] return; }
L_00455C88:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 1;
L_00455C8C:
    set32(c.r[4], ld32((c.r[2].w[0] + 220u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00455CA0u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00455CA0u) [[unlikely]] return; }
L_00455CA0:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 220u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 96u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00455CB8u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00455CB8u) [[unlikely]] return; }
L_00455CB8:
    set32(c.r[5], ld32((c.r[20].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[7].d[0] = c.r[2].d[0] | 4095ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[8], ld32((c.r[5].w[0] + 220u)));
    set32(c.r[5], 0u + 10000u);
    c.f[0] = c.r[5].w[0];
    c.r[5].d[0] = ld16((c.r[8].w[0] + 52u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[5].d[0] = c.r[5].d[0] & c.r[7].d[0];
    c.r[5].d[0] = c.r[5].d[0] | 32768ull;
    st16((c.r[8].w[0] + 52u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 31024u));
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 220u)));
    st32((c.r[4].w[0] + 16u), c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 31028u));
    st32((c.r[4].w[0] + 20u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 31032u));
    st32((c.r[4].w[0] + 24u), c.f[1]);
    st32((c.r[4].w[0] + 28u), c.f[0]);
    set32(c.r[4], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 29;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00455D2Cu); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00455D2Cu) [[unlikely]] return; }
L_00455D2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00455D60:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455D7Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x00455D7Cu) [[unlikely]] return; }
L_00455D7C:
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455D88u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00455D88u) [[unlikely]] return; }
L_00455D88:
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[4], 0u + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455D98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00455D98u) [[unlikely]] return; }
L_00455D98:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  goto L_00455DBC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 30400u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455DB8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003E(c, 152u, depth + 1u); else { c.pc = 0x001F94E0u; return; } if (c.pc != 0x00455DB8u) [[unlikely]] return; }
L_00455DB8:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_00455DBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455DC4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x00455DC4u) [[unlikely]] return; }
L_00455DC4:
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455DD0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00455DD0u) [[unlikely]] return; }
L_00455DD0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  goto L_00455DEC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455DE8u); set32(c.r[5], c.r[5].w[0] + 30416u);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214210u; return; } if (c.pc != 0x00455DE8u) [[unlikely]] return; }
L_00455DE8:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_00455DEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455DF4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x00455DF4u) [[unlikely]] return; }
L_00455DF4:
    set32(c.r[4], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455E00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00455E00u) [[unlikely]] return; }
L_00455E00:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  goto L_00455E20; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 30431u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455E1Cu); set32(c.r[6], 0u - 1u);  if (depth < kMaxDepth) unit_003F(c, 82u, depth + 1u); else { c.pc = 0x001FD180u; return; } if (c.pc != 0x00455E1Cu) [[unlikely]] return; }
L_00455E1C:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_00455E20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455E28u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x00455E28u) [[unlikely]] return; }
L_00455E28:
    set32(c.r[4], 0u + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455E34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00455E34u) [[unlikely]] return; }
L_00455E34:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  goto L_00455E60; }
    c.f[12] = ld32((c.r[28].w[0] - 32252u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 30449u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455E5Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0042(c, 177u, depth + 1u); else { c.pc = 0x00209CD0u; return; } if (c.pc != 0x00455E5Cu) [[unlikely]] return; }
L_00455E5C:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_00455E60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455E68u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x00455E68u) [[unlikely]] return; }
L_00455E68:
    set32(c.r[4], 0u + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455E74u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00455E74u) [[unlikely]] return; }
L_00455E74:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  goto L_00455EE4; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[2] = ld32((c.r[3].w[0] + 31056u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = ld32((c.r[4].w[0] + 31060u));
    set32(c.r[7], c.r[29].w[0] + 72u);
    c.f[13] = c.r[5].w[0];
    c.r[8].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.f[0] = ld32((c.r[3].w[0] + 31064u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[2] = c.f[2] ^ fp::kSign;
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[0] = c.f[0] ^ fp::kSign;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[29].w[0] + 72u), c.f[2]);
    st32((c.r[29].w[0] + 76u), c.f[1]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 56u)));
    c.f[15] = ld32((c.r[28].w[0] - 32564u));
    c.f[14] = c.r[3].w[0];
    c.f[12] = 0u;
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455EE0u); set32(c.r[5], c.r[5].w[0] + 30465u);  if (depth < kMaxDepth) unit_0042(c, 98u, depth + 1u); else { c.pc = 0x002092F0u; return; } if (c.pc != 0x00455EE0u) [[unlikely]] return; }
L_00455EE0:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_00455EE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455EECu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x00455EECu) [[unlikely]] return; }
L_00455EEC:
    set32(c.r[4], 0u + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455EF8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x00455EF8u) [[unlikely]] return; }
L_00455EF8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00260000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00260000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 13328u);
    set32(c.r[6], c.r[6].w[0] + 13248u);
    set32(c.r[7], 0u + 32u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455F18u); set32(c.r[8], 0u + 3u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x00455F18u) [[unlikely]] return; }
L_00455F18:
    st32((c.r[2].w[0]), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.f[2] = ld32((c.r[28].w[0] - 32620u));
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    c.f[1] = ld32((c.r[28].w[0] - 32304u));
    st32((c.r[2].w[0] + 24u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[28].w[0] - 32272u));
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 32u), c.f[2]);
    set32(c.r[4], 0u + 24u);
    st32((c.r[2].w[0] + 48u), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 52u), c.f[1]);
    st32((c.r[2].w[0] + 56u), 0u);
    st32((c.r[2].w[0] + 60u), c.f[0]);
    st32((c.r[2].w[0] + 64u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 80u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 84u), c.f[1]);
    st32((c.r[2].w[0] + 88u), 0u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455F74u); st32((c.r[2].w[0] + 92u), 0u);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00455F74u) [[unlikely]] return; }
L_00455F74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00455F9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455F84u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 476u, depth + 1u); else { c.pc = 0x002BB910u; return; } if (c.pc != 0x00455F84u) [[unlikely]] return; }
L_00455F84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 432u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0] + 8u), 0u);
    st32((c.r[18].w[0] + 12u), 0u);
    st32((c.r[18].w[0] + 16u), 0u);
    c.budget -= 6;
L_00455F9C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455FB0u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0053(c, 233u, depth + 1u); else { c.pc = 0x0024E040u; return; } if (c.pc != 0x00455FB0u) [[unlikely]] return; }
L_00455FB0:
    set32(c.r[4], 0u + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455FBCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00455FBCu) [[unlikely]] return; }
L_00455FBC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  goto L_00455FDC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455FD8u); set32(c.r[5], c.r[5].w[0] + 30479u);  if (depth < kMaxDepth) unit_003F(c, 336u, depth + 1u); else { c.pc = 0x001FF0E0u; return; } if (c.pc != 0x00455FD8u) [[unlikely]] return; }
L_00455FD8:
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 1;
L_00455FDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455FE4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x00455FE4u) [[unlikely]] return; }
L_00455FE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00455FECu); set32(c.r[4], ld32((c.r[29].w[0] + 88u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00455FECu) [[unlikely]] return; }
L_00455FEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00456010:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045602Cu); st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x0045602Cu) [[unlikely]] return; }
L_0045602C:
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456038u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00456038u) [[unlikely]] return; }
L_00456038:
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[4], 0u + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456048u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00456048u) [[unlikely]] return; }
L_00456048:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 40u)));  goto L_004560B8; }
    set32(c.r[6], ld32((c.r[17].w[0] + 60u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[0] = ld32((c.r[28].w[0] - 31796u));
    st32((c.r[29].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 10;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[17].w[0] + 25u);  goto L_00456080; }
    set32(c.r[5], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 1;
L_00456080:
    c.f[12] = ld32((c.r[28].w[0] - 31848u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[13] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[19] = ld32((c.r[28].w[0] - 32244u));
    set32(c.r[7], c.r[7].w[0] + 18144u);
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[16] = c.f[13];
    c.f[17] = c.f[13];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004560B0u); c.f[18] = c.f[13];  if (depth < kMaxDepth) unit_0045(c, 300u, depth + 1u); else { c.pc = 0x00216FE0u; return; } if (c.pc != 0x004560B0u) [[unlikely]] return; }
L_004560B0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 2;
L_004560B8:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[16].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 16u)));  goto L_00456124; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 40u), c.r[16].w[0]);  goto L_00456100; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004560D0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004560D0u) [[unlikely]] return; }
L_004560D0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004560E0u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004560E0u) [[unlikely]] return; }
L_004560E0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004560FC; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004560FCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004560FCu) [[unlikely]] return; }
L_004560FC:
    st32((c.r[17].w[0] + 40u), c.r[16].w[0]);
    c.budget -= 1;
L_00456100:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00456120; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456110u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00456110u) [[unlikely]] return; }
L_00456110:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456120u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00456120u) [[unlikely]] return; }
L_00456120:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 1;
L_00456124:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045612Cu); set32(c.r[5], ld32((c.r[17].w[0] + 40u)));  if (depth < kMaxDepth) unit_003E(c, 44u, depth + 1u); else { c.pc = 0x001F8660u; return; } if (c.pc != 0x0045612Cu) [[unlikely]] return; }
L_0045612C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456134u); set32(c.r[4], ld32((c.r[29].w[0] + 104u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00456134u) [[unlikely]] return; }
L_00456134:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00456150:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045616Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x0045616Cu) [[unlikely]] return; }
L_0045616C:
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456178u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00456178u) [[unlikely]] return; }
L_00456178:
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[4], 0u + 352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456188u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00456188u) [[unlikely]] return; }
L_00456188:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 16u)));  goto L_004561B4; }
    c.r[5].d[0] = ld16((c.r[17].w[0] + 44u));
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004561ACu); c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_003E(c, 103u, depth + 1u); else { c.pc = 0x001F8DE0u; return; } if (c.pc != 0x004561ACu) [[unlikely]] return; }
L_004561AC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 2;
L_004561B4:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[16].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 56u)));  goto L_00456220; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 16u), c.r[16].w[0]);  goto L_004561FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004561CCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004561CCu) [[unlikely]] return; }
L_004561CC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004561DCu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004561DCu) [[unlikely]] return; }
L_004561DC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004561F8; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004561F8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004561F8u) [[unlikely]] return; }
L_004561F8:
    st32((c.r[17].w[0] + 16u), c.r[16].w[0]);
    c.budget -= 1;
L_004561FC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0045621C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045620Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0045620Cu) [[unlikely]] return; }
L_0045620C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045621Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045621Cu) [[unlikely]] return; }
L_0045621C:
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 1;
L_00456220:
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00456234u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00456234u) [[unlikely]] return; }
L_00456234:
    set32(c.r[4], 0u + 52u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456240u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00456240u) [[unlikely]] return; }
L_00456240:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 20u)));  goto L_0045625C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456254u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0046(c, 72u, depth + 1u); else { c.pc = 0x00218DC0u; return; } if (c.pc != 0x00456254u) [[unlikely]] return; }
L_00456254:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 2;
L_0045625C:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[16].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 20u)));  goto L_004562C8; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 20u), c.r[16].w[0]);  goto L_004562A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456274u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00456274u) [[unlikely]] return; }
L_00456274:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456284u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00456284u) [[unlikely]] return; }
L_00456284:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004562A0; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004562A0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004562A0u) [[unlikely]] return; }
L_004562A0:
    st32((c.r[17].w[0] + 20u), c.r[16].w[0]);
    c.budget -= 1;
L_004562A4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004562C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004562B4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004562B4u) [[unlikely]] return; }
L_004562B4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004562C4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004562C4u) [[unlikely]] return; }
L_004562C4:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_004562C8:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 92u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004562D8u); set32(c.r[5], ld32((c.r[17].w[0] + 16u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004562D8u) [[unlikely]] return; }
L_004562D8:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004562F0u); st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004562F0u) [[unlikely]] return; }
L_004562F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00456310:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 280u), static_cast<std::uint8_t>(c.r[4].w[0]));  c.pc = t; return; }
L_00456320:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456344u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x00456344u) [[unlikely]] return; }
L_00456344:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456354u); st32((c.r[29].w[0] + 84u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00456354u) [[unlikely]] return; }
L_00456354:
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 68u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[18], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 6;
    if (c.r[18].d[0] == c.r[19].d[0]) { set32(c.r[4], 0u + 256u);  goto L_004563D0; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 52u), c.r[19].w[0]);  goto L_004563AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045637Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0045637Cu) [[unlikely]] return; }
L_0045637C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045638Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045638Cu) [[unlikely]] return; }
L_0045638C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004563A8; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004563A8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004563A8u) [[unlikely]] return; }
L_004563A8:
    st32((c.r[17].w[0] + 52u), c.r[19].w[0]);
    c.budget -= 1;
L_004563AC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_004563CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004563BCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004563BCu) [[unlikely]] return; }
L_004563BC:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004563CCu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004563CCu) [[unlikely]] return; }
L_004563CC:
    set32(c.r[4], 0u + 256u);
    c.budget -= 1;
L_004563D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004563D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004563D8u) [[unlikely]] return; }
L_004563D8:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 56u)));  goto L_004563F8; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004563F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 407u, depth + 1u); else { c.pc = 0x002BB0A0u; return; } if (c.pc != 0x004563F0u) [[unlikely]] return; }
L_004563F0:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 2;
L_004563F8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[19].d[0];  if (t) { goto L_00456460; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 56u), c.r[19].w[0]);  goto L_00456440; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456410u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00456410u) [[unlikely]] return; }
L_00456410:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456420u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00456420u) [[unlikely]] return; }
L_00456420:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0045643C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045643Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045643Cu) [[unlikely]] return; }
L_0045643C:
    st32((c.r[17].w[0] + 56u), c.r[19].w[0]);
    c.budget -= 1;
L_00456440:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00456460; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456450u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00456450u) [[unlikely]] return; }
L_00456450:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456460u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00456460u) [[unlikely]] return; }
L_00456460:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 30491u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0045647C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_00456484; } }
L_0045647C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456484u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x00456484u) [[unlikely]] return; }
L_00456484:
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456494u); set32(c.r[5], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_006F(c, 166u, depth + 1u); else { c.pc = 0x002BD6C0u; return; } if (c.pc != 0x00456494u) [[unlikely]] return; }
L_00456494:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 52u)));  goto L_004564F4; }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004564C0u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004564C0u) [[unlikely]] return; }
L_004564C0:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004564D0u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004564D0u) [[unlikely]] return; }
L_004564D0:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004564F0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004564F0u); set32(c.r[5], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x004564F0u) [[unlikely]] return; }
L_004564F0:
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 1;
L_004564F4:
    set32(c.r[5], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00456508u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00456508u) [[unlikely]] return; }
L_00456508:
    set32(c.r[4], 0u + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456514u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00456514u) [[unlikely]] return; }
L_00456514:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 60u)));  goto L_00456534; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045652Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 407u, depth + 1u); else { c.pc = 0x002BB0A0u; return; } if (c.pc != 0x0045652Cu) [[unlikely]] return; }
L_0045652C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 2;
L_00456534:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[19].d[0];  if (t) { goto L_0045659C; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 60u), c.r[19].w[0]);  goto L_0045657C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045654Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0045654Cu) [[unlikely]] return; }
L_0045654C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045655Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045655Cu) [[unlikely]] return; }
L_0045655C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00456578; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00456578u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00456578u) [[unlikely]] return; }
L_00456578:
    st32((c.r[17].w[0] + 60u), c.r[19].w[0]);
    c.budget -= 1;
L_0045657C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0045659C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045658Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0045658Cu) [[unlikely]] return; }
L_0045658C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045659Cu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045659Cu) [[unlikely]] return; }
L_0045659C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 30503u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004565B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_004565C0; } }
L_004565B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004565C0u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x004565C0u) [[unlikely]] return; }
L_004565C0:
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004565D0u); set32(c.r[5], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_006F(c, 166u, depth + 1u); else { c.pc = 0x002BD6C0u; return; } if (c.pc != 0x004565D0u) [[unlikely]] return; }
L_004565D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 60u)));  goto L_00456630; }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004565FCu); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004565FCu) [[unlikely]] return; }
L_004565FC:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045660Cu); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045660Cu) [[unlikely]] return; }
L_0045660C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0045662C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045662Cu); set32(c.r[5], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x0045662Cu) [[unlikely]] return; }
L_0045662C:
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 1;
L_00456630:
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00456654u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00456654u) [[unlikely]] return; }
L_00456654:
    set32(c.r[4], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456660u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00456660u) [[unlikely]] return; }
L_00456660:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004566B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456670u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x00456670u) [[unlikely]] return; }
L_00456670:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 13520u);
    set32(c.r[2], c.r[2].w[0] + 19632u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u - 49u);
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u - 9u);
    c.r[4].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 16;
L_004566B0:
    c.r[6].d[0] = ld16((c.r[18].w[0] + 28u));
    set32(c.r[3], 0u - 9u);
    set32(c.r[2], 0u - 49u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[18], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004566E4u); set32(c.r[4], c.r[29].w[0] + 100u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x004566E4u) [[unlikely]] return; }
L_004566E4:
    set32(c.r[4], c.r[18].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004566F0u); set32(c.r[5], c.r[29].w[0] + 100u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004566F0u) [[unlikely]] return; }
L_004566F0:
    set32(c.r[4], c.r[29].w[0] + 100u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004566FCu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004566FCu) [[unlikely]] return; }
L_004566FC:
    set32(c.r[4], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456708u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00456708u) [[unlikely]] return; }
L_00456708:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00456760; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456718u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x00456718u) [[unlikely]] return; }
L_00456718:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 13520u);
    set32(c.r[3], c.r[3].w[0] + 19920u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[2], 0u - 61u);
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 12ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 18;
L_00456760:
    c.r[3].d[0] = ld16((c.r[18].w[0] + 28u));
    set32(c.r[2], 0u - 61u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 12ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] & 65533ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[18], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045679Cu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x0045679Cu) [[unlikely]] return; }
L_0045679C:
    set32(c.r[4], c.r[18].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004567A8u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004567A8u) [[unlikely]] return; }
L_004567A8:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004567B4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004567B4u) [[unlikely]] return; }
L_004567B4:
    set32(c.r[4], 0u + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004567C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004567C0u) [[unlikely]] return; }
L_004567C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00456830; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004567D0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 183u, depth + 1u); else { c.pc = 0x001BE4E0u; return; } if (c.pc != 0x004567D0u) [[unlikely]] return; }
L_004567D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6656u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004567ECu); st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_002F(c, 182u, depth + 1u); else { c.pc = 0x001BE4B0u; return; } if (c.pc != 0x004567ECu) [[unlikely]] return; }
L_004567EC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004567F8u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_002F(c, 181u, depth + 1u); else { c.pc = 0x001BE480u; return; } if (c.pc != 0x004567F8u) [[unlikely]] return; }
L_004567F8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456804u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_002F(c, 180u, depth + 1u); else { c.pc = 0x001BE450u; return; } if (c.pc != 0x00456804u) [[unlikely]] return; }
L_00456804:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456810u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 179u, depth + 1u); else { c.pc = 0x001BE420u; return; } if (c.pc != 0x00456810u) [[unlikely]] return; }
L_00456810:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045681Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 178u, depth + 1u); else { c.pc = 0x001BE400u; return; } if (c.pc != 0x0045681Cu) [[unlikely]] return; }
L_0045681C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456828u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 177u, depth + 1u); else { c.pc = 0x001BE3F0u; return; } if (c.pc != 0x00456828u) [[unlikely]] return; }
L_00456828:
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00456830:
    c.r[6].d[0] = ld16((c.r[18].w[0] + 28u));
    set32(c.r[5], 0u - 31u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[3], 0u - 481u);
    set32(c.r[2], 0u - 7169u);
    c.r[6].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[6].d[0] = c.r[6].d[0] | 12ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st8((c.r[18].w[0] + 40u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[6].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 224ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 40u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] & 65023ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[18], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045689Cu); set32(c.r[4], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x0045689Cu) [[unlikely]] return; }
L_0045689C:
    set32(c.r[4], c.r[18].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004568A8u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004568A8u) [[unlikely]] return; }
L_004568A8:
    set32(c.r[4], c.r[29].w[0] + 92u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004568B4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004568B4u) [[unlikely]] return; }
L_004568B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004568BCu); set32(c.r[4], ld32((c.r[17].w[0] + 56u)));  if (depth < kMaxDepth) unit_0060(c, 529u, depth + 1u); else { c.pc = 0x002836E0u; return; } if (c.pc != 0x004568BCu) [[unlikely]] return; }
L_004568BC:
    set32(c.r[18], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 20u)));  goto L_0045692C; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_00456908; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004568D8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004568D8u) [[unlikely]] return; }
L_004568D8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004568E8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004568E8u) [[unlikely]] return; }
L_004568E8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00456904; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00456904u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00456904u) [[unlikely]] return; }
L_00456904:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00456908:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 16u), 0u);  if (t) { goto L_00456928; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456918u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00456918u) [[unlikely]] return; }
L_00456918:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456928u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00456928u) [[unlikely]] return; }
L_00456928:
    set32(c.r[18], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_0045692C:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 40u)));  goto L_00456998; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_00456974; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456944u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00456944u) [[unlikely]] return; }
L_00456944:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456954u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00456954u) [[unlikely]] return; }
L_00456954:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00456970; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00456970u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00456970u) [[unlikely]] return; }
L_00456970:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00456974:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 20u), 0u);  if (t) { goto L_00456994; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456984u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00456984u) [[unlikely]] return; }
L_00456984:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456994u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00456994u) [[unlikely]] return; }
L_00456994:
    set32(c.r[18], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 1;
L_00456998:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[3], 0u + 350u);  goto L_00456A04; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_004569E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004569B0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004569B0u) [[unlikely]] return; }
L_004569B0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004569C0u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004569C0u) [[unlikely]] return; }
L_004569C0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004569DC; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004569DCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004569DCu) [[unlikely]] return; }
L_004569DC:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004569E0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 40u), 0u);  if (t) { goto L_00456A00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004569F0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004569F0u) [[unlikely]] return; }
L_004569F0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456A00u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00456A00u) [[unlikely]] return; }
L_00456A00:
    set32(c.r[3], 0u + 350u);
    c.budget -= 1;
L_00456A04:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.f[0] = ld32((c.r[28].w[0] - 32272u));
    set32(c.r[2], 0u + 36u);
    st16((c.r[17].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[17].w[0] + 24u);
    st16((c.r[17].w[0] + 46u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 30523u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456A28u); st32((c.r[17].w[0] + 4u), c.f[0]);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00456A28u) [[unlikely]] return; }
L_00456A28:
    c.r[2].d[0] = ld16((c.r[17].w[0] + 46u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456A38u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x00456A38u) [[unlikely]] return; }
L_00456A38:
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[17].w[0] + 46u));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456A50u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x00456A50u) [[unlikely]] return; }
L_00456A50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456A58u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D5(c, 242u, depth + 1u); else { c.pc = 0x00456150u; return; } if (c.pc != 0x00456A58u) [[unlikely]] return; }
L_00456A58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456A60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D5(c, 230u, depth + 1u); else { c.pc = 0x00456010u; return; } if (c.pc != 0x00456A60u) [[unlikely]] return; }
L_00456A60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456A68u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D5(c, 203u, depth + 1u); else { c.pc = 0x00455D60u; return; } if (c.pc != 0x00456A68u) [[unlikely]] return; }
L_00456A68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456A70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D5(c, 186u, depth + 1u); else { c.pc = 0x00455A30u; return; } if (c.pc != 0x00456A70u) [[unlikely]] return; }
L_00456A70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456A78u); set32(c.r[4], ld32((c.r[29].w[0] + 80u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00456A78u) [[unlikely]] return; }
L_00456A78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00456AA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00456B04; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 220u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456AC8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 94u, depth + 1u); else { c.pc = 0x0021CF90u; return; } if (c.pc != 0x00456AC8u) [[unlikely]] return; }
L_00456AC8:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 220u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456ADCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 94u, depth + 1u); else { c.pc = 0x0021CF90u; return; } if (c.pc != 0x00456ADCu) [[unlikely]] return; }
L_00456ADC:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 220u)));
    c.r[5].d[0] = ld16((c.r[4].w[0] + 12u));
    set32(c.r[7], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[9], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456B04u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0069(c, 436u, depth + 1u); else { c.pc = 0x002A78D0u; return; } if (c.pc != 0x00456B04u) [[unlikely]] return; }
L_00456B04:
    st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00456B20u); set32(c.r[4], c.r[29].w[0] + 44u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00456B20u) [[unlikely]] return; }
L_00456B20:
    set32(c.r[2], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 48u)));  goto L_00456B6C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456B34u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00456B34u) [[unlikely]] return; }
L_00456B34:
    set32(c.r[3], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456B48u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00456B48u) [[unlikely]] return; }
L_00456B48:
    set32(c.r[4], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00456B68; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00456B68u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00456B68u) [[unlikely]] return; }
L_00456B68:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 1;
L_00456B6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456B74u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00456B74u) [[unlikely]] return; }
L_00456B74:
    st32((c.r[16].w[0] + 48u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00456B90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00456E60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 29136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456BC0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00D5(c, 342u, depth + 1u); else { c.pc = 0x00456AA0u; return; } if (c.pc != 0x00456BC0u) [[unlikely]] return; }
L_00456BC0:
    set32(c.r[2], c.r[17].w[0] + 64u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 60u);  goto L_00456C10; }
    set32(c.r[18], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00456C0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456BE0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00456BE0u) [[unlikely]] return; }
L_00456BE0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456BF0u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00456BF0u) [[unlikely]] return; }
L_00456BF0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00456C0C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00456C0Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00456C0Cu) [[unlikely]] return; }
L_00456C0C:
    set32(c.r[2], c.r[17].w[0] + 60u);
    c.budget -= 1;
L_00456C10:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 56u);  goto L_00456C5C; }
    set32(c.r[18], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00456C58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456C2Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00456C2Cu) [[unlikely]] return; }
L_00456C2C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456C3Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00456C3Cu) [[unlikely]] return; }
L_00456C3C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00456C58; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00456C58u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00456C58u) [[unlikely]] return; }
L_00456C58:
    set32(c.r[2], c.r[17].w[0] + 56u);
    c.budget -= 1;
L_00456C5C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 52u);  goto L_00456CA8; }
    set32(c.r[18], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00456CA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456C78u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00456C78u) [[unlikely]] return; }
L_00456C78:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456C88u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00456C88u) [[unlikely]] return; }
L_00456C88:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00456CA4; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00456CA4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00456CA4u) [[unlikely]] return; }
L_00456CA4:
    set32(c.r[2], c.r[17].w[0] + 52u);
    c.budget -= 1;
L_00456CA8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 40u);  goto L_00456CF4; }
    set32(c.r[18], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00456CF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456CC4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00456CC4u) [[unlikely]] return; }
L_00456CC4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456CD4u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00456CD4u) [[unlikely]] return; }
L_00456CD4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00456CF0; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00456CF0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00456CF0u) [[unlikely]] return; }
L_00456CF0:
    set32(c.r[2], c.r[17].w[0] + 40u);
    c.budget -= 1;
L_00456CF4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 24u);  goto L_00456D40; }
    set32(c.r[18], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00456D3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456D10u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00456D10u) [[unlikely]] return; }
L_00456D10:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456D20u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00456D20u) [[unlikely]] return; }
L_00456D20:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00456D3C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00456D3Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00456D3Cu) [[unlikely]] return; }
L_00456D3C:
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.budget -= 1;
L_00456D40:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 20u);  goto L_00456D54; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456D50u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00456D50u) [[unlikely]] return; }
L_00456D50:
    set32(c.r[2], c.r[17].w[0] + 20u);
    c.budget -= 1;
L_00456D54:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 16u);  goto L_00456DA0; }
    set32(c.r[18], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00456D9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456D70u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00456D70u) [[unlikely]] return; }
L_00456D70:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456D80u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00456D80u) [[unlikely]] return; }
L_00456D80:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00456D9C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00456D9Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00456D9Cu) [[unlikely]] return; }
L_00456D9C:
    set32(c.r[2], c.r[17].w[0] + 16u);
    c.budget -= 1;
L_00456DA0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 8u);  goto L_00456DEC; }
    set32(c.r[18], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00456DE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456DBCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00456DBCu) [[unlikely]] return; }
L_00456DBC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456DCCu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00456DCCu) [[unlikely]] return; }
L_00456DCC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00456DE8; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00456DE8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00456DE8u) [[unlikely]] return; }
L_00456DE8:
    set32(c.r[2], c.r[17].w[0] + 8u);
    c.budget -= 1;
L_00456DEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00456E34; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00456E34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456E08u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00456E08u) [[unlikely]] return; }
L_00456E08:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456E18u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00456E18u) [[unlikely]] return; }
L_00456E18:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00456E34; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00456E34u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00456E34u) [[unlikely]] return; }
L_00456E34:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00456E4C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 22384u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 4;
L_00456E4C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00456E64; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456E60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00456E60u) [[unlikely]] return; }
L_00456E60:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00456E64:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00456E80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 22384u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 29136u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 16;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[4].w[0] + 8u), 0u);  if (t) { goto L_00456ED8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456EC8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00456EC8u) [[unlikely]] return; }
L_00456EC8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456ED8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00456ED8u) [[unlikely]] return; }
L_00456ED8:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 16u), 0u);  if (t) { goto L_00456EFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456EECu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00456EECu) [[unlikely]] return; }
L_00456EEC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456EFCu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00456EFCu) [[unlikely]] return; }
L_00456EFC:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 20u), 0u);  if (t) { goto L_00456F20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456F10u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00456F10u) [[unlikely]] return; }
L_00456F10:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456F20u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00456F20u) [[unlikely]] return; }
L_00456F20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456F28u); set32(c.r[4], c.r[17].w[0] + 24u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x00456F28u) [[unlikely]] return; }
L_00456F28:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 40u), 0u);  if (t) { goto L_00456F4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456F3Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00456F3Cu) [[unlikely]] return; }
L_00456F3C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456F4Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00456F4Cu) [[unlikely]] return; }
L_00456F4C:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 52u), 0u);  if (t) { goto L_00456F70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456F60u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00456F60u) [[unlikely]] return; }
L_00456F60:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456F70u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00456F70u) [[unlikely]] return; }
L_00456F70:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 56u), 0u);  if (t) { goto L_00456F94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456F84u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00456F84u) [[unlikely]] return; }
L_00456F84:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456F94u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00456F94u) [[unlikely]] return; }
L_00456F94:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 60u), 0u);  if (t) { goto L_00456FB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456FA8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00456FA8u) [[unlikely]] return; }
L_00456FA8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456FB8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00456FB8u) [[unlikely]] return; }
L_00456FB8:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 64u), 0u);  if (t) { goto L_00456FDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456FCCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00456FCCu) [[unlikely]] return; }
L_00456FCC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456FDCu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00456FDCu) [[unlikely]] return; }
L_00456FDC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00456FECu); st8((c.r[17].w[0] + 68u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00D5(c, 263u, depth + 1u); else { c.pc = 0x00456320u; return; } if (c.pc != 0x00456FECu) [[unlikely]] return; }
L_00456FEC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00457010:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 24u), c.f[26]);
    st32((c.r[29].w[0] + 20u), c.f[25]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26896u)));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    c.f[26] = c.f[12];
    set32(c.r[3], ld32((c.r[3].w[0] + 48u)));
    set32(c.r[30], ld32((c.r[3].w[0] + 320u)));
    set32(c.r[3], ld32((c.r[30].w[0] + 12u)));
    c.budget -= 27;
    { const bool t = c.r[3].d[0] == 0ull; c.f[25] = fp::sub(c.f[26], c.f[0]);  if (t) { goto L_00457448; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 32u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.f[20] = ld32((c.r[3].w[0] + 30608u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 284u), c.r[4].w[0]);  if (t) { goto L_00457434; } }
L_00457090:
    set32(c.r[4], c.r[30].w[0] + 4u);
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[17], c.r[3].w[0] + 4u);
    set32(c.r[19], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004570B0u); set32(c.r[16], c.r[2].w[0] + 112u);  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x004570B0u) [[unlikely]] return; }
L_004570B0:
    set32(c.r[21], ld32((c.r[2].w[0])));
    c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[3], ld32((c.r[21].w[0] + 124u)));
    c.f[24] = ld32((c.r[21].w[0] + 120u));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1184u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_004570F4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 1052u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_004570E8; } }
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004570E8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_004570E8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_004570F4; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004570F4:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 284u)));  goto L_00457114; }
    set32(c.r[3], ld32((c.r[3].w[0] + 1052u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00457110; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00457110:
    set32(c.r[3], ld32((c.r[29].w[0] + 284u)));
    c.budget -= 1;
L_00457114:
    set32(c.r[4], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[23], ld32((c.r[2].w[0] + 76u)));
    c.r[2].d[0] = 0ull < c.r[23].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[22].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0045715C; } }
    set32(c.r[2], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045714Cu); set32(c.r[4], ld32((c.r[2].w[0] + 52u)));  if (depth < kMaxDepth) unit_002F(c, 118u, depth + 1u); else { c.pc = 0x001BDBC0u; return; } if (c.pc != 0x0045714Cu) [[unlikely]] return; }
L_0045714C:
    set32(c.r[3], ld32((c.r[23].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0045715C; } }
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0045715C:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 284u)));  goto L_00457188; }
    fpu_compare(c, fp::key(c.f[24]) < fp::key(c.f[20]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00457184; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_00457184; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 424u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_004571AC; }
L_00457184:
    set32(c.r[2], ld32((c.r[29].w[0] + 284u)));
    c.budget -= 1;
L_00457188:
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld16((c.r[19].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] & 65533ull;
    st16((c.r[19].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[19].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0045742C; } }
L_004571AC:
    set32(c.r[3], ld32((c.r[29].w[0] + 284u)));
    c.f[3] = c.r[2].w[0];
    set32(c.r[4], 0u + 1u);
    fpu_div(c, 0u, c.f[3], c.f[25]);
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].d[0] = ld16((c.r[19].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st16((c.r[19].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[19].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] & 65534ull;
    st16((c.r[19].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[5] = ld32((c.r[16].w[0] + 56u));
    c.f[4] = ld32((c.r[17].w[0] + 8u));
    c.f[2] = ld32((c.r[16].w[0] + 52u));
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[2] = fp::mul(c.f[0], c.f[4]);
    c.f[5] = ld32((c.r[16].w[0] + 48u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    c.facc = fp::mul(c.f[0], c.f[0]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    fpu_rsqrt(c, 4u, c.f[3], c.f[4]);
    set32(c.r[5], 0u + 8u);
    c.f[21] = fp::mul(c.f[0], c.f[4]);
    c.f[22] = fp::mul(c.f[1], c.f[4]);
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457234u); c.f[23] = fp::mul(c.f[2], c.f[4]);  if (depth < kMaxDepth) unit_0061(c, 38u, depth + 1u); else { c.pc = 0x00284390u; return; } if (c.pc != 0x00457234u) [[unlikely]] return; }
L_00457234:
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[18], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    if (c.r[18].d[0] == 0ull) { c.f[3] = ld32((c.r[16].w[0] + 56u));  goto L_004572DC; }
    c.f[4] = ld32((c.r[18].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = ld32((c.r[20].w[0] + 48u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[0] = 0u;
    c.f[13] = c.r[3].w[0];
    c.facc = fp::add(c.f[0], c.f[4]);
    fpu_div(c, 0u, c.f[13], c.f[3]);
    c.f[2] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[24], c.f[25]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457280u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[1]));  if (depth < kMaxDepth) unit_00AB(c, 431u, depth + 1u); else { c.pc = 0x003AF758u; return; } if (c.pc != 0x00457280u) [[unlikely]] return; }
L_00457280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457288u); c.f[24] = c.f[0];  if (depth < kMaxDepth) unit_005F(c, 29u, depth + 1u); else { c.pc = 0x0027C870u; return; } if (c.pc != 0x00457288u) [[unlikely]] return; }
L_00457288:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 28u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { st8((c.r[18].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));  goto L_004572D0; }
    c.f[1] = ld32((c.r[18].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_004572AC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004572AC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[2].d[0] ^ 1ull;  goto L_004572CC; }
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[24]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_004572C8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004572C8:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 1;
L_004572CC:
    st8((c.r[18].w[0] + 28u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_004572D0:
    st32((c.r[18].w[0]), c.f[0]);
    st32((c.r[18].w[0] + 4u), c.f[24]);
    c.f[3] = ld32((c.r[16].w[0] + 56u));
    c.budget -= 3;
L_004572DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[7] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[3].w[0];
    c.facc = fp::add(c.f[7], c.f[3]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[4], c.f[23]));
    c.f[2] = ld32((c.r[16].w[0] + 52u));
    c.f[6] = fp::sub(c.f[1], c.f[3]);
    c.facc = fp::add(c.f[7], c.f[2]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[4], c.f[22]));
    c.f[3] = fp::sub(c.f[1], c.f[2]);
    c.f[2] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = c.r[2].w[0];
    c.facc = fp::add(c.f[7], c.f[2]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[4], c.f[21]));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 276u), c.f[3]);
    st32((c.r[29].w[0] + 280u), c.f[6]);
    st32((c.r[29].w[0] + 272u), c.f[1]);
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.facc = fp::add(c.facc, fp::mul(c.f[3], c.f[3]));
    c.f[2] = fp::add(c.facc, fp::mul(c.f[6], c.f[6]));
    fpu_rsqrt(c, 2u, c.f[0], c.f[2]);
    c.f[4] = fp::mul(c.f[3], c.f[2]);
    c.f[5] = fp::mul(c.f[1], c.f[2]);
    c.f[3] = fp::mul(c.f[6], c.f[2]);
    st32((c.r[29].w[0] + 272u), c.f[5]);
    st32((c.r[29].w[0] + 276u), c.f[4]);
    st32((c.r[29].w[0] + 280u), c.f[3]);
    c.facc = fp::mul(c.f[4], c.f[7]);
    c.f[2] = fp::sub(c.facc, fp::mul(c.f[3], c.f[0]));
    c.facc = fp::mul(c.f[3], c.f[7]);
    c.f[1] = fp::sub(c.facc, fp::mul(c.f[5], c.f[7]));
    c.facc = fp::mul(c.f[5], c.f[0]);
    c.f[7] = fp::sub(c.facc, fp::mul(c.f[4], c.f[7]));
    st32((c.r[29].w[0] + 256u), c.f[2]);
    st32((c.r[29].w[0] + 260u), c.f[1]);
    st32((c.r[29].w[0] + 264u), c.f[7]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[6] = fp::add(c.facc, fp::mul(c.f[7], c.f[7]));
    fpu_rsqrt(c, 6u, c.f[0], c.f[6]);
    c.f[2] = fp::mul(c.f[2], c.f[6]);
    c.f[1] = fp::mul(c.f[1], c.f[6]);
    c.f[0] = fp::mul(c.f[7], c.f[6]);
    st32((c.r[29].w[0] + 256u), c.f[2]);
    st32((c.r[29].w[0] + 260u), c.f[1]);
    st32((c.r[29].w[0] + 264u), c.f[0]);
    c.facc = fp::mul(c.f[1], c.f[3]);
    c.f[6] = fp::sub(c.facc, fp::mul(c.f[0], c.f[4]));
    c.facc = fp::mul(c.f[0], c.f[5]);
    c.f[3] = fp::sub(c.facc, fp::mul(c.f[2], c.f[3]));
    c.facc = fp::mul(c.f[2], c.f[4]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[1], c.f[5]));
    set32(c.r[4], c.r[29].w[0] + 192u);
    st32((c.r[29].w[0] + 240u), c.f[6]);
    set32(c.r[5], c.r[29].w[0] + 272u);
    st32((c.r[29].w[0] + 244u), c.f[3]);
    set32(c.r[6], c.r[29].w[0] + 240u);
    st32((c.r[29].w[0] + 248u), c.f[0]);
    c.budget -= 62;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004573D4u); set32(c.r[7], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_005F(c, 93u, depth + 1u); else { c.pc = 0x0027DBA0u; return; } if (c.pc != 0x004573D4u) [[unlikely]] return; }
L_004573D4:
    set32(c.r[5], c.r[29].w[0] + 192u);
    set32(c.r[4], c.r[19].w[0] + 48u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
L_004573E0:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004573E0u | kUnwind; return; } goto L_004573E0; } }
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    st32((c.r[19].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    st32((c.r[19].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    st32((c.r[19].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.budget -= 12;
L_0045742C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457434u); set32(c.r[4], c.r[29].w[0] + 284u);  if (depth < kMaxDepth) unit_0005(c, 13u, depth + 1u); else { c.pc = 0x00114160u; return; } if (c.pc != 0x00457434u) [[unlikely]] return; }
L_00457434:
    set32(c.r[4], ld32((c.r[29].w[0] + 284u)));
    set32(c.r[3], c.r[20].w[0] + 24u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 284u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00457090u | kUnwind; return; } goto L_00457090; }
    st32((c.r[20].w[0] + 44u), c.f[26]);
    c.budget -= 1;
L_00457448:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.f[26] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    c.f[25] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[23]);
    c.f[24] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.f[23] = ld32((c.r[29].w[0] + 12u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_004574A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004574B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 52u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004575BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004574D8u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 118u, depth + 1u); else { c.pc = 0x001BDBC0u; return; } if (c.pc != 0x004574D8u) [[unlikely]] return; }
L_004574D8:
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 76u), c.r[3].w[0]);  if (t) { goto L_004575AC; } }
L_004574E8:
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[29].w[0] + 72u), c.r[18].w[0]);  if (t) { goto L_0045750C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004574FCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004574FCu) [[unlikely]] return; }
L_004574FC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045750Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045750Cu) [[unlikely]] return; }
L_0045750C:
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[16].d[0]) { set32(c.r[2], ld32((c.r[3].w[0] + 16u)));  goto L_00457530; }
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00457560; } }
L_00457530:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 20u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 72u)));  if (t) { goto L_00457554; } }
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00457560; } }
L_00457554:
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] & 65534ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00457560:
    set32(c.r[18], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 76u);  goto L_004575A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457574u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00457574u) [[unlikely]] return; }
L_00457574:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457584u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00457584u) [[unlikely]] return; }
L_00457584:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004575A0; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004575A0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004575A0u) [[unlikely]] return; }
L_004575A0:
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.budget -= 1;
L_004575A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004575ACu);  if (depth < kMaxDepth) unit_0005(c, 13u, depth + 1u); else { c.pc = 0x00114160u; return; } if (c.pc != 0x004575ACu) [[unlikely]] return; }
L_004575AC:
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[3], c.r[17].w[0] + 24u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[4].w[0] + 16u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004574E8u | kUnwind; return; } goto L_004574E8; }
L_004575BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004575E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004575F0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[29].w[0] + 96u), c.r[5].w[0]);  if (t) { goto L_00457634; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457620u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00457620u) [[unlikely]] return; }
L_00457620:
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457634u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00457634u) [[unlikely]] return; }
L_00457634:
    set32(c.r[4], c.r[29].w[0] + 108u);
    set32(c.r[5], c.r[19].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457644u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_00D6(c, 122u, depth + 1u); else { c.pc = 0x00458F00u; return; } if (c.pc != 0x00457644u) [[unlikely]] return; }
L_00457644:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 108u)));  goto L_00457690; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457658u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00457658u) [[unlikely]] return; }
L_00457658:
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045766Cu); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045766Cu) [[unlikely]] return; }
L_0045766C:
    set32(c.r[4], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0045768C; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045768Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045768Cu) [[unlikely]] return; }
L_0045768C:
    set32(c.r[3], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 1;
L_00457690:
    set32(c.r[2], c.r[19].w[0] + 24u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[3].w[0] + 16u)));  goto L_004576A4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00457858; } }
L_004576A4:
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 104u), c.r[16].w[0]);  if (t) { goto L_004576C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004576B8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004576B8u) [[unlikely]] return; }
L_004576B8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004576C8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004576C8u) [[unlikely]] return; }
L_004576C8:
    set32(c.r[2], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 100u), c.r[16].w[0]);  if (t) { goto L_004576F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004576E0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004576E0u) [[unlikely]] return; }
L_004576E0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004576F0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004576F0u) [[unlikely]] return; }
L_004576F0:
    set32(c.r[5], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00457708u); set32(c.r[4], c.r[29].w[0] + 92u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00457708u) [[unlikely]] return; }
L_00457708:
    set32(c.r[2], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 108u)));  goto L_00457754; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045771Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0045771Cu) [[unlikely]] return; }
L_0045771C:
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457730u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00457730u) [[unlikely]] return; }
L_00457730:
    set32(c.r[4], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00457750; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00457750u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00457750u) [[unlikely]] return; }
L_00457750:
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 1;
L_00457754:
    set32(c.r[17], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 108u)));  goto L_004577B8; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004577AC; }
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_004577A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045777Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0045777Cu) [[unlikely]] return; }
L_0045777C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045778Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045778Cu) [[unlikely]] return; }
L_0045778C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004577A8; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004577A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004577A8u) [[unlikely]] return; }
L_004577A8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004577AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004577B4u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004577B4u) [[unlikely]] return; }
L_004577B4:
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 1;
L_004577B8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[2].w[0] + 16u), 0u);  if (t) { goto L_004577D4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[4], c.r[19].w[0] + 12u);
    set32(c.r[5], c.r[29].w[0] + 88u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004577D4u); st32((c.r[29].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00D6(c, 171u, depth + 1u); else { c.pc = 0x00459300u; return; } if (c.pc != 0x004577D4u) [[unlikely]] return; }
L_004577D4:
    set32(c.r[16], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 104u)));  goto L_00457818; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004577E8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004577E8u) [[unlikely]] return; }
L_004577E8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004577F8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004577F8u) [[unlikely]] return; }
L_004577F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00457814; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00457814u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00457814u) [[unlikely]] return; }
L_00457814:
    set32(c.r[16], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_00457818:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_00457858; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457828u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00457828u) [[unlikely]] return; }
L_00457828:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457838u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00457838u) [[unlikely]] return; }
L_00457838:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00457854; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00457854u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00457854u) [[unlikely]] return; }
L_00457854:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00457858:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00457880:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 13;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[29].w[0] + 128u), c.r[19].w[0]);  if (t) { goto L_004578D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004578BCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004578BCu) [[unlikely]] return; }
L_004578BC:
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004578D0u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004578D0u) [[unlikely]] return; }
L_004578D0:
    set32(c.r[4], c.r[29].w[0] + 140u);
    set32(c.r[5], c.r[20].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004578E0u); set32(c.r[6], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_00D6(c, 122u, depth + 1u); else { c.pc = 0x00458F00u; return; } if (c.pc != 0x004578E0u) [[unlikely]] return; }
L_004578E0:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 140u)));  goto L_0045792C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004578F4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004578F4u) [[unlikely]] return; }
L_004578F4:
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457908u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00457908u) [[unlikely]] return; }
L_00457908:
    set32(c.r[4], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00457928; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00457928u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00457928u) [[unlikely]] return; }
L_00457928:
    set32(c.r[3], ld32((c.r[29].w[0] + 140u)));
    c.budget -= 1;
L_0045792C:
    set32(c.r[2], c.r[20].w[0] + 24u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  goto L_00457940; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00457CF4; } }
L_00457940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457948u);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x00457948u) [[unlikely]] return; }
L_00457948:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457958u); st32((c.r[29].w[0] + 116u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00457958u) [[unlikely]] return; }
L_00457958:
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[4], 0u + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457968u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00457968u) [[unlikely]] return; }
L_00457968:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { st32((c.r[29].w[0] + 136u), c.r[16].w[0]);  goto L_00457988; }
    set32(c.r[5], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457980u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 342u, depth + 1u); else { c.pc = 0x0031F1B0u; return; } if (c.pc != 0x00457980u) [[unlikely]] return; }
L_00457980:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 136u), c.r[16].w[0]);
    c.budget -= 2;
L_00457988:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], 0u + 256u);  goto L_004579AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457998u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00457998u) [[unlikely]] return; }
L_00457998:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004579A8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004579A8u) [[unlikely]] return; }
L_004579A8:
    set32(c.r[4], 0u + 256u);
    c.budget -= 1;
L_004579AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004579B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004579B4u) [[unlikely]] return; }
L_004579B4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { st32((c.r[29].w[0] + 132u), c.r[16].w[0]);  goto L_004579D4; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004579CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 407u, depth + 1u); else { c.pc = 0x002BB0A0u; return; } if (c.pc != 0x004579CCu) [[unlikely]] return; }
L_004579CC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 132u), c.r[16].w[0]);
    c.budget -= 2;
L_004579D4:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[5], ld32((c.r[29].w[0] + 136u)));  goto L_004579F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004579E4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004579E4u) [[unlikely]] return; }
L_004579E4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004579F4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004579F4u) [[unlikely]] return; }
L_004579F4:
    set32(c.r[5], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_004579F8:
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.r[2].d[0] = ld16((c.r[5].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[5].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00457A18u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00457A18u) [[unlikely]] return; }
L_00457A18:
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457A2Cu); st16((c.r[4].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0060(c, 529u, depth + 1u); else { c.pc = 0x002836E0u; return; } if (c.pc != 0x00457A2Cu) [[unlikely]] return; }
L_00457A2C:
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457A3Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0060(c, 582u, depth + 1u); else { c.pc = 0x00283C30u; return; } if (c.pc != 0x00457A3Cu) [[unlikely]] return; }
L_00457A3C:
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00457A50u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00457A50u) [[unlikely]] return; }
L_00457A50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 30624u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00457A6C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_00457A74; } }
L_00457A6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457A74u);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x00457A74u) [[unlikely]] return; }
L_00457A74:
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[5], c.r[29].w[0] + 124u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457A84u); st32((c.r[29].w[0] + 124u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006F(c, 166u, depth + 1u); else { c.pc = 0x002BD6C0u; return; } if (c.pc != 0x00457A84u) [[unlikely]] return; }
L_00457A84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[5], ld32((c.r[29].w[0] + 132u)));  goto L_00457AE4; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457AB0u); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00457AB0u) [[unlikely]] return; }
L_00457AB0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457AC0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00457AC0u) [[unlikely]] return; }
L_00457AC0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00457AE0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457AE0u); set32(c.r[5], c.r[29].w[0] + 124u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00457AE0u) [[unlikely]] return; }
L_00457AE0:
    set32(c.r[5], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 1;
L_00457AE4:
    c.r[2].d[0] = ld16((c.r[5].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st16((c.r[5].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00457B04u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00457B04u) [[unlikely]] return; }
L_00457B04:
    set32(c.r[5], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457B10u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D5(c, 494u, depth + 1u); else { c.pc = 0x00457D20u; return; } if (c.pc != 0x00457B10u) [[unlikely]] return; }
L_00457B10:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457B1Cu); set32(c.r[4], 0u + 24u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x00457B1Cu) [[unlikely]] return; }
L_00457B1C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00457B4C; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0]), 0u);  if (t) { goto L_00457B4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457B3Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00457B3Cu) [[unlikely]] return; }
L_00457B3C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457B4Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00457B4Cu) [[unlikely]] return; }
L_00457B4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[2].w[0] + 31024u));
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    st32((c.r[17].w[0] + 4u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[3].w[0] + 31028u));
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 31032u));
    st32((c.r[17].w[0] + 12u), c.f[0]);
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 13;
    if (c.r[16].d[0] == c.r[4].d[0]) { st32((c.r[17].w[0] + 16u), c.r[18].w[0]);  goto L_00457BE4; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 132u)));  goto L_00457BC0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457B90u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00457B90u) [[unlikely]] return; }
L_00457B90:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457BA0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00457BA0u) [[unlikely]] return; }
L_00457BA0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00457BBC; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00457BBCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00457BBCu) [[unlikely]] return; }
L_00457BBC:
    set32(c.r[16], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 1;
L_00457BC0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0]), c.r[16].w[0]);  if (t) { goto L_00457BE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457BD0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00457BD0u) [[unlikely]] return; }
L_00457BD0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457BE0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00457BE0u) [[unlikely]] return; }
L_00457BE0:
    st32((c.r[17].w[0] + 16u), c.r[18].w[0]);
    c.budget -= 1;
L_00457BE4:
    st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[29].w[0] + 120u), c.r[19].w[0]);  if (t) { goto L_00457C0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457BF8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00457BF8u) [[unlikely]] return; }
L_00457BF8:
    set32(c.r[3], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457C0Cu); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00457C0Cu) [[unlikely]] return; }
L_00457C0C:
    set32(c.r[4], c.r[20].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457C18u); set32(c.r[5], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_00D6(c, 109u, depth + 1u); else { c.pc = 0x00458D20u; return; } if (c.pc != 0x00457C18u) [[unlikely]] return; }
L_00457C18:
    st32((c.r[2].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 132u)));  goto L_00457C68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457C30u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00457C30u) [[unlikely]] return; }
L_00457C30:
    set32(c.r[3], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457C44u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00457C44u) [[unlikely]] return; }
L_00457C44:
    set32(c.r[4], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00457C64; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00457C64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00457C64u) [[unlikely]] return; }
L_00457C64:
    set32(c.r[16], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 1;
L_00457C68:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[16], ld32((c.r[29].w[0] + 136u)));  goto L_00457CA8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457C78u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00457C78u) [[unlikely]] return; }
L_00457C78:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457C88u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00457C88u) [[unlikely]] return; }
L_00457C88:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00457CA4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00457CA4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00457CA4u) [[unlikely]] return; }
L_00457CA4:
    set32(c.r[16], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_00457CA8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 112u)));  goto L_00457CE8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457CB8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00457CB8u) [[unlikely]] return; }
L_00457CB8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457CC8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00457CC8u) [[unlikely]] return; }
L_00457CC8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00457CE4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00457CE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00457CE4u) [[unlikely]] return; }
L_00457CE4:
    set32(c.r[4], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 1;
L_00457CE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457CF0u);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00457CF0u) [[unlikely]] return; }
L_00457CF0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00457CF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00457D20:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457D5Cu); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00457D5Cu) [[unlikely]] return; }
L_00457D5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00457DAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457D6Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x00457D6Cu) [[unlikely]] return; }
L_00457D6C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 13520u);
    set32(c.r[2], c.r[2].w[0] + 19632u);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u - 49u);
    st16((c.r[20].w[0] + 28u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u - 9u);
    c.r[4].d[0] = ld16((c.r[20].w[0] + 28u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[20].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st16((c.r[20].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 16;
L_00457DAC:
    c.r[6].d[0] = ld16((c.r[20].w[0] + 28u));
    set32(c.r[3], 0u - 9u);
    set32(c.r[2], 0u - 49u);
    set32(c.r[4], 0u + 48u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st16((c.r[20].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 16ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457DDCu); st16((c.r[20].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00457DDCu) [[unlikely]] return; }
L_00457DDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00457E4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457DECu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 183u, depth + 1u); else { c.pc = 0x001BE4E0u; return; } if (c.pc != 0x00457DECu) [[unlikely]] return; }
L_00457DEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6656u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457E08u); st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_002F(c, 182u, depth + 1u); else { c.pc = 0x001BE4B0u; return; } if (c.pc != 0x00457E08u) [[unlikely]] return; }
L_00457E08:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457E14u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_002F(c, 181u, depth + 1u); else { c.pc = 0x001BE480u; return; } if (c.pc != 0x00457E14u) [[unlikely]] return; }
L_00457E14:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457E20u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_002F(c, 180u, depth + 1u); else { c.pc = 0x001BE450u; return; } if (c.pc != 0x00457E20u) [[unlikely]] return; }
L_00457E20:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457E2Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 179u, depth + 1u); else { c.pc = 0x001BE420u; return; } if (c.pc != 0x00457E2Cu) [[unlikely]] return; }
L_00457E2C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457E38u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 178u, depth + 1u); else { c.pc = 0x001BE400u; return; } if (c.pc != 0x00457E38u) [[unlikely]] return; }
L_00457E38:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457E44u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 177u, depth + 1u); else { c.pc = 0x001BE3F0u; return; } if (c.pc != 0x00457E44u) [[unlikely]] return; }
L_00457E44:
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00457E4C:
    c.r[6].d[0] = ld16((c.r[18].w[0] + 28u));
    set32(c.r[5], 0u - 31u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[3], 0u - 481u);
    set32(c.r[2], 0u - 7169u);
    set32(c.r[4], 0u + 32u);
    c.r[6].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[6].d[0] = c.r[6].d[0] | 12ull;
    c.r[5].d[0] = 0ull + 0ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st8((c.r[18].w[0] + 40u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[6].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 40u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[18].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457EB0u); st16((c.r[18].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00457EB0u) [[unlikely]] return; }
L_00457EB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00457F08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457EC0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x00457EC0u) [[unlikely]] return; }
L_00457EC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 13520u);
    set32(c.r[3], c.r[3].w[0] + 19920u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[2], 0u - 61u);
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 12ull;
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 18;
L_00457F08:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 28u));
    set32(c.r[2], 0u - 61u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 12ull;
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[19].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[19].w[0] + 28u));
    c.r[2].d[0] = c.r[2].d[0] & 65533ull;
    st16((c.r[19].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457F3Cu); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_0030(c, 97u, depth + 1u); else { c.pc = 0x001C13C0u; return; } if (c.pc != 0x00457F3Cu) [[unlikely]] return; }
L_00457F3C:
    set32(c.r[22], ld32((c.r[2].w[0])));
    set32(c.r[4], 0u + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457F4Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00457F4Cu) [[unlikely]] return; }
L_00457F4C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[17].w[0] + 28u));  goto L_00457F68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457F60u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 404u, depth + 1u); else { c.pc = 0x0031B9B0u; return; } if (c.pc != 0x00457F60u) [[unlikely]] return; }
L_00457F60:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[17].w[0] + 28u));
    c.budget -= 2;
L_00457F68:
    set32(c.r[2], 0u - 15u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = ld16((c.r[2].w[0]));  [[clang::musttail]] return unit_00D6(c, 4u, depth); }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457F94u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00457F94u) [[unlikely]] return; }
L_00457F94:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[17].w[0] + 42u));  goto L_00457FA8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00457FA4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x00457FA4u) [[unlikely]] return; }
L_00457FA4:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 42u));
    c.budget -= 1;
L_00457FA8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00457FCC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[17].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_00D6(c, 2u, depth); } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_00D6(c, 2u, depth); } }
L_00457FCC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 36u)));  goto L_00457FF4; }
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 36u)));  [[clang::musttail]] return unit_00D6(c, 3u, depth); }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { [[clang::musttail]] return unit_00D6(c, 2u, depth); } }
L_00457FF4:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_00D6(c, 2u, depth); } }
    [[clang::musttail]] return unit_00D6(c, 1u, depth);
}

}
