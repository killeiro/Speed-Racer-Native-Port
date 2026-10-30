#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0054[4096] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0,
    0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0,
    0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0,
    0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0,
    26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 31,
    0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36,
    0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0,
    0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0,
    0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55,
    0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59,
    0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66,
    0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0,
    0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85,
    0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0,
    0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0,
    0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0,
    0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0,
    0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0,
    0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0,
    0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 129,
    0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0,
    0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0,
    141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0,
    0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0,
    0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0,
    0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0,
    0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186,
    0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0,
    0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 199, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    206, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 210, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214,
    0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0,
    0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 232,
    0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 236, 0, 0, 0, 0,
    0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0,
    240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 246, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0,
    0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 269, 0, 0,
    0, 0, 0, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 273, 0, 0, 0,
    0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 280, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0,
    283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0,
    286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0,
    0, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0,
    307, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 312,
    0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0,
    0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0,
    0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331,
    0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0,
    0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 341, 0, 0, 0, 0, 0, 0,
    342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 344, 0, 0, 345, 0, 0, 346, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0,
    0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 354, 0, 0,
    0, 355, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 361, 0,
    0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0,
    0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 369, 0, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 372, 0, 0, 0, 373, 0, 0,
    0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 380, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0,
    0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0,
    389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 396,
    0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0,
    0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 405, 0, 406, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 0, 0,
    0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 0,
    417, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0,
    0, 0, 0, 0, 0, 0, 421, 0, 0, 422, 0, 423, 0, 0, 424, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0,
    0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 436,
    0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 440, 0, 0, 0, 441, 0, 0, 442, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0,
    0, 446, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 451, 0, 0,
    0, 0, 0, 0, 452, 0, 0, 0, 0, 453, 0, 0, 0, 454, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 457, 0, 0, 0,
    0, 0, 0, 458, 0, 0, 0, 0, 459, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 463,
    0, 0, 0, 0, 0, 0, 0, 464, 0, 465, 0, 0, 466, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 469, 0, 0, 470, 0,
    0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0,
    475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0,
    479, 0, 0, 0, 0, 480, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 484, 0, 0,
    0, 0, 485, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 491, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494,
    0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 498, 0, 0,
    0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 502, 0,
    0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505,
    0, 506, 0, 507, 0, 508, 0, 509, 0, 510, 0, 0, 511, 0, 0, 512, 0, 0, 513, 0, 0, 514, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0,
    0, 516, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 520, 0, 0, 0, 0, 0,
};

void unit_0054(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00250000;
    case 2u: goto L_0025000C;
    case 3u: goto L_00250024;
    case 4u: goto L_00250034;
    case 5u: goto L_00250044;
    case 6u: goto L_0025004C;
    case 7u: goto L_00250064;
    case 8u: goto L_00250088;
    case 9u: goto L_00250098;
    case 10u: goto L_002500B8;
    case 11u: goto L_002500F0;
    case 12u: goto L_00250110;
    case 13u: goto L_0025012C;
    case 14u: goto L_00250130;
    case 15u: goto L_00250150;
    case 16u: goto L_00250160;
    case 17u: goto L_00250188;
    case 18u: goto L_00250198;
    case 19u: goto L_002501B0;
    case 20u: goto L_002501E8;
    case 21u: goto L_002501F8;
    case 22u: goto L_00250214;
    case 23u: goto L_00250228;
    case 24u: goto L_00250238;
    case 25u: goto L_00250260;
    case 26u: goto L_00250280;
    case 27u: goto L_002502A8;
    case 28u: goto L_002502B8;
    case 29u: goto L_002502D0;
    case 30u: goto L_002502F0;
    case 31u: goto L_002502FC;
    case 32u: goto L_00250310;
    case 33u: goto L_00250330;
    case 34u: goto L_00250350;
    case 35u: goto L_00250360;
    case 36u: goto L_0025037C;
    case 37u: goto L_00250390;
    case 38u: goto L_002503A0;
    case 39u: goto L_002503C0;
    case 40u: goto L_002503D4;
    case 41u: goto L_002503E4;
    case 42u: goto L_002503F0;
    case 43u: goto L_00250410;
    case 44u: goto L_00250424;
    case 45u: goto L_00250438;
    case 46u: goto L_00250440;
    case 47u: goto L_00250464;
    case 48u: goto L_0025048C;
    case 49u: goto L_002504B0;
    case 50u: goto L_002504D0;
    case 51u: goto L_002504E0;
    case 52u: goto L_00250504;
    case 53u: goto L_00250534;
    case 54u: goto L_00250550;
    case 55u: goto L_0025057C;
    case 56u: goto L_00250584;
    case 57u: goto L_002505AC;
    case 58u: goto L_002505B8;
    case 59u: goto L_002505FC;
    case 60u: goto L_00250620;
    case 61u: goto L_00250658;
    case 62u: goto L_00250690;
    case 63u: goto L_002506A4;
    case 64u: goto L_002506C8;
    case 65u: goto L_002506E8;
    case 66u: goto L_002506FC;
    case 67u: goto L_00250710;
    case 68u: goto L_00250730;
    case 69u: goto L_00250758;
    case 70u: goto L_00250778;
    case 71u: goto L_002507A8;
    case 72u: goto L_002507D0;
    case 73u: goto L_00250800;
    case 74u: goto L_0025081C;
    case 75u: goto L_0025083C;
    case 76u: goto L_00250848;
    case 77u: goto L_00250874;
    case 78u: goto L_00250884;
    case 79u: goto L_002508A0;
    case 80u: goto L_002508B8;
    case 81u: goto L_002508C8;
    case 82u: goto L_002508F8;
    case 83u: goto L_00250930;
    case 84u: goto L_00250964;
    case 85u: goto L_0025097C;
    case 86u: goto L_002509A0;
    case 87u: goto L_002509B8;
    case 88u: goto L_002509DC;
    case 89u: goto L_002509EC;
    case 90u: goto L_00250A0C;
    case 91u: goto L_00250A3C;
    case 92u: goto L_00250A5C;
    case 93u: goto L_00250A6C;
    case 94u: goto L_00250A88;
    case 95u: goto L_00250A9C;
    case 96u: goto L_00250AAC;
    case 97u: goto L_00250AE0;
    case 98u: goto L_00250B08;
    case 99u: goto L_00250B1C;
    case 100u: goto L_00250B30;
    case 101u: goto L_00250B50;
    case 102u: goto L_00250B78;
    case 103u: goto L_00250B84;
    case 104u: goto L_00250BB0;
    case 105u: goto L_00250BC0;
    case 106u: goto L_00250BE0;
    case 107u: goto L_00250BF0;
    case 108u: goto L_00250C10;
    case 109u: goto L_00250C20;
    case 110u: goto L_00250C40;
    case 111u: goto L_00250C50;
    case 112u: goto L_00250CE8;
    case 113u: goto L_00250CF8;
    case 114u: goto L_00250D1C;
    case 115u: goto L_00250D2C;
    case 116u: goto L_00250D4C;
    case 117u: goto L_00250D64;
    case 118u: goto L_00250DA8;
    case 119u: goto L_00250DB8;
    case 120u: goto L_00250DDC;
    case 121u: goto L_00250DEC;
    case 122u: goto L_00250E0C;
    case 123u: goto L_00250E24;
    case 124u: goto L_00250E38;
    case 125u: goto L_00250E44;
    case 126u: goto L_00250E50;
    case 127u: goto L_00250E60;
    case 128u: goto L_00250E70;
    case 129u: goto L_00250E7C;
    case 130u: goto L_00250E90;
    case 131u: goto L_00250EA0;
    case 132u: goto L_00250EB8;
    case 133u: goto L_00250EE4;
    case 134u: goto L_00250EFC;
    case 135u: goto L_00250F40;
    case 136u: goto L_00250F48;
    case 137u: goto L_00250F70;
    case 138u: goto L_00250F90;
    case 139u: goto L_00250FCC;
    case 140u: goto L_00250FE0;
    case 141u: goto L_00251000;
    case 142u: goto L_00251030;
    case 143u: goto L_00251040;
    case 144u: goto L_002510A4;
    case 145u: goto L_002510AC;
    case 146u: goto L_002510C4;
    case 147u: goto L_002510D4;
    case 148u: goto L_002510E8;
    case 149u: goto L_002510F8;
    case 150u: goto L_00251104;
    case 151u: goto L_00251144;
    case 152u: goto L_00251150;
    case 153u: goto L_00251164;
    case 154u: goto L_00251188;
    case 155u: goto L_00251190;
    case 156u: goto L_002511A8;
    case 157u: goto L_002511B4;
    case 158u: goto L_002511E8;
    case 159u: goto L_0025120C;
    case 160u: goto L_00251218;
    case 161u: goto L_00251228;
    case 162u: goto L_00251248;
    case 163u: goto L_00251254;
    case 164u: goto L_00251264;
    case 165u: goto L_00251278;
    case 166u: goto L_0025128C;
    case 167u: goto L_0025129C;
    case 168u: goto L_002512BC;
    case 169u: goto L_002512D0;
    case 170u: goto L_002512E0;
    case 171u: goto L_00251308;
    case 172u: goto L_00251340;
    case 173u: goto L_00251360;
    case 174u: goto L_002513B4;
    case 175u: goto L_002513D0;
    case 176u: goto L_002513F0;
    case 177u: goto L_00251434;
    case 178u: goto L_00251450;
    case 179u: goto L_00251470;
    case 180u: goto L_002514A0;
    case 181u: goto L_002514C0;
    case 182u: goto L_002514F0;
    case 183u: goto L_0025152C;
    case 184u: goto L_0025153C;
    case 185u: goto L_0025154C;
    case 186u: goto L_0025157C;
    case 187u: goto L_0025158C;
    case 188u: goto L_002515A8;
    case 189u: goto L_002515BC;
    case 190u: goto L_002515CC;
    case 191u: goto L_002515E0;
    case 192u: goto L_002515F0;
    case 193u: goto L_0025160C;
    case 194u: goto L_00251650;
    case 195u: goto L_00251660;
    case 196u: goto L_0025167C;
    case 197u: goto L_002516AC;
    case 198u: goto L_002516CC;
    case 199u: goto L_00251710;
    case 200u: goto L_0025171C;
    case 201u: goto L_00251738;
    case 202u: goto L_00251760;
    case 203u: goto L_002517A4;
    case 204u: goto L_002517B4;
    case 205u: goto L_002517C4;
    case 206u: goto L_00251800;
    case 207u: goto L_0025180C;
    case 208u: goto L_00251828;
    case 209u: goto L_00251850;
    case 210u: goto L_0025188C;
    case 211u: goto L_00251894;
    case 212u: goto L_002518B0;
    case 213u: goto L_002518C4;
    case 214u: goto L_002518FC;
    case 215u: goto L_00251918;
    case 216u: goto L_00251940;
    case 217u: goto L_00251964;
    case 218u: goto L_0025196C;
    case 219u: goto L_00251988;
    case 220u: goto L_0025199C;
    case 221u: goto L_002519F0;
    case 222u: goto L_00251A44;
    case 223u: goto L_00251A54;
    case 224u: goto L_00251A64;
    case 225u: goto L_00251A90;
    case 226u: goto L_00251AAC;
    case 227u: goto L_00251AD0;
    case 228u: goto L_00251B14;
    case 229u: goto L_00251B24;
    case 230u: goto L_00251B34;
    case 231u: goto L_00251B70;
    case 232u: goto L_00251B7C;
    case 233u: goto L_00251B98;
    case 234u: goto L_00251BC0;
    case 235u: goto L_00251BE4;
    case 236u: goto L_00251BEC;
    case 237u: goto L_00251C08;
    case 238u: goto L_00251C1C;
    case 239u: goto L_00251C70;
    case 240u: goto L_00251C80;
    case 241u: goto L_00251CBC;
    case 242u: goto L_00251CC4;
    case 243u: goto L_00251CE0;
    case 244u: goto L_00251CF4;
    case 245u: goto L_00251D38;
    case 246u: goto L_00251D40;
    case 247u: goto L_00251D5C;
    case 248u: goto L_00251D70;
    case 249u: goto L_00251DA8;
    case 250u: goto L_00251DC4;
    case 251u: goto L_00251DF0;
    case 252u: goto L_00251E2C;
    case 253u: goto L_00251E34;
    case 254u: goto L_00251E50;
    case 255u: goto L_00251E64;
    case 256u: goto L_00251E9C;
    case 257u: goto L_00251EB8;
    case 258u: goto L_00251EE0;
    case 259u: goto L_00251F10;
    case 260u: goto L_00251F2C;
    case 261u: goto L_00251F50;
    case 262u: goto L_00251FA4;
    case 263u: goto L_00251FB4;
    case 264u: goto L_00251FC4;
    case 265u: goto L_00251FF0;
    case 266u: goto L_0025200C;
    case 267u: goto L_00252030;
    case 268u: goto L_0025206C;
    case 269u: goto L_00252074;
    case 270u: goto L_00252090;
    case 271u: goto L_002520A4;
    case 272u: goto L_002520E8;
    case 273u: goto L_002520F0;
    case 274u: goto L_0025210C;
    case 275u: goto L_00252120;
    case 276u: goto L_00252158;
    case 277u: goto L_00252174;
    case 278u: goto L_002521A0;
    case 279u: goto L_002521BC;
    case 280u: goto L_00252204;
    case 281u: goto L_00252224;
    case 282u: goto L_00252268;
    case 283u: goto L_00252280;
    case 284u: goto L_002522CC;
    case 285u: goto L_002522DC;
    case 286u: goto L_00252300;
    case 287u: goto L_00252338;
    case 288u: goto L_00252348;
    case 289u: goto L_00252358;
    case 290u: goto L_00252374;
    case 291u: goto L_002523B0;
    case 292u: goto L_002523D0;
    case 293u: goto L_002523E0;
    case 294u: goto L_00252418;
    case 295u: goto L_00252428;
    case 296u: goto L_00252438;
    case 297u: goto L_00252454;
    case 298u: goto L_00252490;
    case 299u: goto L_002524B0;
    case 300u: goto L_002524C0;
    case 301u: goto L_002524D0;
    case 302u: goto L_002524F0;
    case 303u: goto L_0025250C;
    case 304u: goto L_00252520;
    case 305u: goto L_00252538;
    case 306u: goto L_00252568;
    case 307u: goto L_00252580;
    case 308u: goto L_002525A0;
    case 309u: goto L_0025262C;
    case 310u: goto L_00252640;
    case 311u: goto L_00252660;
    case 312u: goto L_0025267C;
    case 313u: goto L_00252690;
    case 314u: goto L_002526A8;
    case 315u: goto L_002526D8;
    case 316u: goto L_002526F0;
    case 317u: goto L_00252710;
    case 318u: goto L_0025279C;
    case 319u: goto L_002527B0;
    case 320u: goto L_002527D0;
    case 321u: goto L_0025281C;
    case 322u: goto L_00252830;
    case 323u: goto L_00252934;
    case 324u: goto L_002529EC;
    case 325u: goto L_00252A40;
    case 326u: goto L_00252A70;
    case 327u: goto L_00252A84;
    case 328u: goto L_00252AA0;
    case 329u: goto L_00252AD0;
    case 330u: goto L_00252AE0;
    case 331u: goto L_00252AFC;
    case 332u: goto L_00252B10;
    case 333u: goto L_00252B20;
    case 334u: goto L_00252B50;
    case 335u: goto L_00252C0C;
    case 336u: goto L_00252C64;
    case 337u: goto L_00252C84;
    case 338u: goto L_00252CAC;
    case 339u: goto L_00252CC8;
    case 340u: goto L_00252CD8;
    case 341u: goto L_00252CE4;
    case 342u: goto L_00252D00;
    case 343u: goto L_00252DA4;
    case 344u: goto L_00252DB0;
    case 345u: goto L_00252DBC;
    case 346u: goto L_00252DC8;
    case 347u: goto L_00252DD4;
    case 348u: goto L_00252DF4;
    case 349u: goto L_00252E08;
    case 350u: goto L_00252E2C;
    case 351u: goto L_00252E38;
    case 352u: goto L_00252E48;
    case 353u: goto L_00252E68;
    case 354u: goto L_00252E74;
    case 355u: goto L_00252E84;
    case 356u: goto L_00252E98;
    case 357u: goto L_00252EA8;
    case 358u: goto L_00252EB8;
    case 359u: goto L_00252ED8;
    case 360u: goto L_00252EE8;
    case 361u: goto L_00252EF8;
    case 362u: goto L_00252F1C;
    case 363u: goto L_00252F30;
    case 364u: goto L_00252F44;
    case 365u: goto L_00252F64;
    case 366u: goto L_00252F88;
    case 367u: goto L_00252F98;
    case 368u: goto L_00252FA8;
    case 369u: goto L_00252FB4;
    case 370u: goto L_00252FC8;
    case 371u: goto L_00252FD8;
    case 372u: goto L_00252FE4;
    case 373u: goto L_00252FF4;
    case 374u: goto L_00253004;
    case 375u: goto L_00253020;
    case 376u: goto L_00253034;
    case 377u: goto L_00253044;
    case 378u: goto L_00253068;
    case 379u: goto L_002530E0;
    case 380u: goto L_002530EC;
    case 381u: goto L_00253154;
    case 382u: goto L_00253170;
    case 383u: goto L_00253184;
    case 384u: goto L_002531C0;
    case 385u: goto L_002531D8;
    case 386u: goto L_00253200;
    case 387u: goto L_00253244;
    case 388u: goto L_00253260;
    case 389u: goto L_00253280;
    case 390u: goto L_002532B4;
    case 391u: goto L_002532D0;
    case 392u: goto L_002532F0;
    case 393u: goto L_0025331C;
    case 394u: goto L_0025334C;
    case 395u: goto L_0025335C;
    case 396u: goto L_0025337C;
    case 397u: goto L_002533A0;
    case 398u: goto L_002533CC;
    case 399u: goto L_002533EC;
    case 400u: goto L_0025340C;
    case 401u: goto L_0025341C;
    case 402u: goto L_00253438;
    case 403u: goto L_0025344C;
    case 404u: goto L_0025345C;
    case 405u: goto L_00253468;
    case 406u: goto L_00253470;
    case 407u: goto L_0025349C;
    case 408u: goto L_002534AC;
    case 409u: goto L_002534C8;
    case 410u: goto L_002534DC;
    case 411u: goto L_002534EC;
    case 412u: goto L_00253510;
    case 413u: goto L_00253530;
    case 414u: goto L_00253540;
    case 415u: goto L_0025355C;
    case 416u: goto L_00253570;
    case 417u: goto L_00253580;
    case 418u: goto L_0025358C;
    case 419u: goto L_002535C0;
    case 420u: goto L_002535F4;
    case 421u: goto L_00253618;
    case 422u: goto L_00253624;
    case 423u: goto L_0025362C;
    case 424u: goto L_00253638;
    case 425u: goto L_00253654;
    case 426u: goto L_00253674;
    case 427u: goto L_00253694;
    case 428u: goto L_002536B4;
    case 429u: goto L_002536C8;
    case 430u: goto L_002536D4;
    case 431u: goto L_00253708;
    case 432u: goto L_00253718;
    case 433u: goto L_0025373C;
    case 434u: goto L_0025374C;
    case 435u: goto L_0025376C;
    case 436u: goto L_0025377C;
    case 437u: goto L_002537A0;
    case 438u: goto L_002537B0;
    case 439u: goto L_002537D0;
    case 440u: goto L_00253808;
    case 441u: goto L_00253818;
    case 442u: goto L_00253824;
    case 443u: goto L_00253830;
    case 444u: goto L_00253844;
    case 445u: goto L_00253864;
    case 446u: goto L_00253884;
    case 447u: goto L_002538A4;
    case 448u: goto L_002538B4;
    case 449u: goto L_002538C4;
    case 450u: goto L_002538E4;
    case 451u: goto L_002538F4;
    case 452u: goto L_00253910;
    case 453u: goto L_00253924;
    case 454u: goto L_00253934;
    case 455u: goto L_00253940;
    case 456u: goto L_00253960;
    case 457u: goto L_00253970;
    case 458u: goto L_0025398C;
    case 459u: goto L_002539A0;
    case 460u: goto L_002539B0;
    case 461u: goto L_002539D0;
    case 462u: goto L_002539DC;
    case 463u: goto L_002539FC;
    case 464u: goto L_00253A1C;
    case 465u: goto L_00253A24;
    case 466u: goto L_00253A30;
    case 467u: goto L_00253A3C;
    case 468u: goto L_00253A60;
    case 469u: goto L_00253A6C;
    case 470u: goto L_00253A78;
    case 471u: goto L_00253A9C;
    case 472u: goto L_00253AA8;
    case 473u: goto L_00253ACC;
    case 474u: goto L_00253ADC;
    case 475u: goto L_00253B00;
    case 476u: goto L_00253B34;
    case 477u: goto L_00253B54;
    case 478u: goto L_00253B64;
    case 479u: goto L_00253B80;
    case 480u: goto L_00253B94;
    case 481u: goto L_00253BA4;
    case 482u: goto L_00253BC8;
    case 483u: goto L_00253BD8;
    case 484u: goto L_00253BF4;
    case 485u: goto L_00253C08;
    case 486u: goto L_00253C18;
    case 487u: goto L_00253C50;
    case 488u: goto L_00253CAC;
    case 489u: goto L_00253CBC;
    case 490u: goto L_00253CDC;
    case 491u: goto L_00253D14;
    case 492u: goto L_00253D24;
    case 493u: goto L_00253D44;
    case 494u: goto L_00253D7C;
    case 495u: goto L_00253D8C;
    case 496u: goto L_00253DAC;
    case 497u: goto L_00253DE4;
    case 498u: goto L_00253DF4;
    case 499u: goto L_00253E14;
    case 500u: goto L_00253E48;
    case 501u: goto L_00253E58;
    case 502u: goto L_00253E78;
    case 503u: goto L_00253E94;
    case 504u: goto L_00253EC0;
    case 505u: goto L_00253EFC;
    case 506u: goto L_00253F04;
    case 507u: goto L_00253F0C;
    case 508u: goto L_00253F14;
    case 509u: goto L_00253F1C;
    case 510u: goto L_00253F24;
    case 511u: goto L_00253F30;
    case 512u: goto L_00253F3C;
    case 513u: goto L_00253F48;
    case 514u: goto L_00253F54;
    case 515u: goto L_00253F60;
    case 516u: goto L_00253F84;
    case 517u: goto L_00253F94;
    case 518u: goto L_00253FB4;
    case 519u: goto L_00253FD8;
    case 520u: goto L_00253FE8;
    default: bad_entry(c, 0x00250000u); return;
    }
L_00250000:
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = ld16((c.r[16].w[0] + 60u));
    c.budget -= 3;
L_0025000C:
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 128u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0024FFD4u | kUnwind; return; } [[clang::musttail]] return unit_0053(c, 440u, depth); }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0025002C; } }
L_00250024:
    st32((c.r[16].w[0] + 56u), 0u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 2;
L_0025002C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250034u);  if (depth < kMaxDepth) unit_0054(c, 11u, depth + 1u); else { c.pc = 0x002500F0u; return; } if (c.pc != 0x00250034u) [[unlikely]] return; }
L_00250034:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_002500BC; } }
L_00250044:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025004Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x0025004Cu) [[unlikely]] return; }
L_0025004C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 140u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250064u); st32((c.r[29].w[0] + 140u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0054(c, 111u, depth + 1u); else { c.pc = 0x00250C50u; return; } if (c.pc != 0x00250064u) [[unlikely]] return; }
L_00250064:
    set32(c.r[3], ld32((c.r[29].w[0] + 140u)));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[18].d[0]) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_002500BC; }
    set32(c.r[17], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250088u); set32(c.r[22], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00250088u) [[unlikely]] return; }
L_00250088:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250098u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00250098u) [[unlikely]] return; }
L_00250098:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002500B8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002500B8u); set32(c.r[5], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002500B8u) [[unlikely]] return; }
L_002500B8:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_002500BC:
    c.r[3].d[0] = c.r[20].d[0] < c.r[19].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00250044u | kUnwind; return; } goto L_00250044; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_002500F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] - 28224u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 6;
    { set32(c.r[7], 0u + 1u);  [[clang::musttail]] return unit_00A5(c, 164u, depth); }
L_00250110:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250130u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x00250130u) [[unlikely]] return; }
    goto L_00250130;
L_0025012C:
    set32(c.r[4], c.r[2].w[0] + 16u);
    c.budget -= 1;
L_00250130:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00250000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 352u);
    set32(c.r[6], c.r[6].w[0] - 28224u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250150u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x00250150u) [[unlikely]] return; }
L_00250150:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00250160:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), 0u);  if (t) { goto L_00250198; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250188u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00250188u) [[unlikely]] return; }
L_00250188:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250198u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00250198u) [[unlikely]] return; }
L_00250198:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002501B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00250238; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[18].w[0])));  goto L_00250218; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002501E8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002501E8u) [[unlikely]] return; }
L_002501E8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002501F8u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002501F8u) [[unlikely]] return; }
L_002501F8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00250214; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00250214u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00250214u) [[unlikely]] return; }
L_00250214:
    set32(c.r[17], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_00250218:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0]), c.r[17].w[0]);  if (t) { goto L_00250238; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250228u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00250228u) [[unlikely]] return; }
L_00250228:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250238u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00250238u) [[unlikely]] return; }
L_00250238:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00250260:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_00250280:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_002502B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002502A8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002502A8u) [[unlikely]] return; }
L_002502A8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002502B8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002502B8u) [[unlikely]] return; }
L_002502B8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002502D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002502F0u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 159u, depth + 1u); else { c.pc = 0x0031D9F0u; return; } if (c.pc != 0x002502F0u) [[unlikely]] return; }
L_002502F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002502FCu); set32(c.r[5], c.r[29].w[0] + 79u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x002502FCu) [[unlikely]] return; }
L_002502FC:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 79u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250310u); st8((c.r[17].w[0] + 88u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0083(c, 105u, depth + 1u); else { c.pc = 0x0030CB00u; return; } if (c.pc != 0x00250310u) [[unlikely]] return; }
L_00250310:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0A010000u);
    c.r[3].d[0] = c.r[3].d[0] | 104ull;
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_002503A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250330u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 116u, depth + 1u); else { c.pc = 0x0030CD00u; return; } if (c.pc != 0x00250330u) [[unlikely]] return; }
L_00250330:
    set32(c.r[18], ld32((c.r[17].w[0] + 104u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[16].d[0];  if (t) { goto L_002503A0; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[17].w[0] + 104u), c.r[16].w[0]);  goto L_00250380; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250350u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00250350u) [[unlikely]] return; }
L_00250350:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250360u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00250360u) [[unlikely]] return; }
L_00250360:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0025037C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025037Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025037Cu) [[unlikely]] return; }
L_0025037C:
    st32((c.r[17].w[0] + 104u), c.r[16].w[0]);
    c.budget -= 1;
L_00250380:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002503A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250390u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00250390u) [[unlikely]] return; }
L_00250390:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002503A0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002503A0u) [[unlikely]] return; }
L_002503A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_002503A4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002503C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 108u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002503D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x002503D4u) [[unlikely]] return; }
L_002503D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002503E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002503E4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 278u, depth + 1u); else { c.pc = 0x002521A0u; return; } if (c.pc != 0x002503E4u) [[unlikely]] return; }
L_002503E4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002503E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002503F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250410u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0087(c, 137u, depth + 1u); else { c.pc = 0x0031D7F0u; return; } if (c.pc != 0x00250410u) [[unlikely]] return; }
L_00250410:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 88u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 79u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250424u); st8((c.r[29].w[0] + 79u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003D(c, 357u, depth + 1u); else { c.pc = 0x001F6DE0u; return; } if (c.pc != 0x00250424u) [[unlikely]] return; }
L_00250424:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 62u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 72u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250438u); st32((c.r[29].w[0] + 72u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_003D(c, 358u, depth + 1u); else { c.pc = 0x001F6DF0u; return; } if (c.pc != 0x00250438u) [[unlikely]] return; }
L_00250438:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00250468; } }
L_00250440:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[5].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00250468; }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00250464u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00250464u) [[unlikely]] return; }
L_00250464:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00250468:
    set32(c.r[2], ld32((c.r[29].w[0] + 72u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 56u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00250440u | kUnwind; return; } goto L_00250440; }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 56u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025048Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025048Cu) [[unlikely]] return; }
L_0025048C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002504B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002504D0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0087(c, 148u, depth + 1u); else { c.pc = 0x0031D8C0u; return; } if (c.pc != 0x002504D0u) [[unlikely]] return; }
L_002504D0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_00250508; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00250538; } }
L_002504E0:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00250508; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00250504u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00250504u) [[unlikely]] return; }
L_00250504:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00250508:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 62u));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 56u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002504E0u | kUnwind; return; } goto L_002504E0; }
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_00250538; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 32u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00250534u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00250534u) [[unlikely]] return; }
L_00250534:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00250538:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00250550:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025057Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0087(c, 168u, depth + 1u); else { c.pc = 0x0031DAB0u; return; } if (c.pc != 0x0025057Cu) [[unlikely]] return; }
L_0025057C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002505BC; } }
L_00250584:
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[19], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[19].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_002505BC; }
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002505ACu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002505ACu) [[unlikely]] return; }
L_002505AC:
    set32(c.r[5], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002505B8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 439u, depth + 1u); else { c.pc = 0x00257730u; return; } if (c.pc != 0x002505B8u) [[unlikely]] return; }
L_002505B8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002505BC:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 62u));
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 56u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00250584u | kUnwind; return; } goto L_00250584; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; mmi::divu(c, 0, c.r[17].w[0], c.r[3].w[0]);  if (t) { goto L_002505E4; } }
    breakpoint(c, 0x002505E0u);
    c.budget -= 1;
L_002505E4:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[3].w[0])));  if (t) { goto L_0025060C; } }
L_002505FC:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0])));  goto L_0025060C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], ld32((c.r[4].w[0] + 8u)));  if (t) { goto L_00250614; } }
L_0025060C:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002505FCu | kUnwind; return; } goto L_002505FC; }
L_00250614:
    c.r[20].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0025077C; } }
L_00250620:
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[19], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; mmi::divu(c, 0, c.r[4].w[0], c.r[2].w[0]);  if (t) { goto L_00250640; } }
    breakpoint(c, 0x0025063Cu);
    c.budget -= 1;
L_00250640:
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[2].w[0])));  if (t) { goto L_0025066C; } }
L_00250658:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[3], ld32((c.r[3].w[0])));  goto L_0025066C; }
    set32(c.r[21], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00250678; } }
L_0025066C:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00250658u | kUnwind; return; } goto L_00250658; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00250678:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 96u)));  goto L_00250738; }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; st32((c.r[29].w[0] + 124u), c.r[21].w[0]);  if (t) { goto L_002506A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250690u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00250690u) [[unlikely]] return; }
L_00250690:
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002506A4u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002506A4u) [[unlikely]] return; }
L_002506A4:
    set32(c.r[3], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[20].w[0] + 100u)));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[20].w[0] + 100u)));  goto L_002506CC; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], 0u + 1u);  goto L_002506C0; }
    set32(c.r[5], c.r[3].w[0] << 1);
    c.budget -= 1;
L_002506C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002506C8u); set32(c.r[4], c.r[20].w[0] + 92u);  if (depth < kMaxDepth) unit_0054(c, 72u, depth + 1u); else { c.pc = 0x002507D0u; return; } if (c.pc != 0x002506C8u) [[unlikely]] return; }
L_002506C8:
    set32(c.r[3], ld32((c.r[20].w[0] + 100u)));
    c.budget -= 1;
L_002506CC:
    set32(c.r[5], c.r[29].w[0] + 124u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[20].w[0] + 92u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002506E8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0054(c, 19u, depth + 1u); else { c.pc = 0x002501B0u; return; } if (c.pc != 0x002506E8u) [[unlikely]] return; }
L_002506E8:
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0025077C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002506FCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002506FCu) [[unlikely]] return; }
L_002506FC:
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250710u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00250710u) [[unlikely]] return; }
L_00250710:
    set32(c.r[4], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00250778; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00250730u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00250730u) [[unlikely]] return; }
L_00250730:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00250778; } }
L_00250738:
    set32(c.r[2], ld32((c.r[20].w[0] + 100u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[20].w[0] + 100u)));  goto L_0025075C; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], 0u + 1u);  goto L_00250750; }
    set32(c.r[5], c.r[3].w[0] << 1);
    c.budget -= 1;
L_00250750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250758u); set32(c.r[4], c.r[20].w[0] + 92u);  if (depth < kMaxDepth) unit_0054(c, 72u, depth + 1u); else { c.pc = 0x002507D0u; return; } if (c.pc != 0x00250758u) [[unlikely]] return; }
L_00250758:
    set32(c.r[3], ld32((c.r[20].w[0] + 100u)));
    c.budget -= 1;
L_0025075C:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[20].w[0] + 92u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250778u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0054(c, 19u, depth + 1u); else { c.pc = 0x002501B0u; return; } if (c.pc != 0x00250778u) [[unlikely]] return; }
L_00250778:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0025077C:
    set32(c.r[3], ld32((c.r[17].w[0] + 100u)));
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 92u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00250620u | kUnwind; return; } goto L_00250620; }
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_002507AC; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 52u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002507A8u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002507A8u) [[unlikely]] return; }
L_002507A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_002507AC:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002507D0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 13;
    { const bool t = c.r[20].d[0] == c.r[3].d[0]; c.r[21].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00250900; } }
    goto L_00250804;
L_00250800:
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_00250804:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { c.r[19].d[0] = 0ull + 0ull;  goto L_002508DC; }
    set32(c.r[2], c.r[20].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025081Cu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x0025081Cu) [[unlikely]] return; }
L_0025081C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00250000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 352u);
    set32(c.r[6], c.r[6].w[0] - 28224u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025083Cu); c.r[8].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x0025083Cu) [[unlikely]] return; }
L_0025083C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002508CC; } }
L_00250848:
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    set32(c.r[22], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[22].w[0])));
    c.budget -= 7;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_002508CC; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);  goto L_002508A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250874u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00250874u) [[unlikely]] return; }
L_00250874:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250884u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00250884u) [[unlikely]] return; }
L_00250884:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002508A0; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002508A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002508A0u) [[unlikely]] return; }
L_002508A0:
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    c.budget -= 1;
L_002508A4:
    set32(c.r[16], ld32((c.r[22].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[2].w[0]), c.r[16].w[0]);  if (t) { goto L_002508C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002508B8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002508B8u) [[unlikely]] return; }
L_002508B8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002508C8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002508C8u) [[unlikely]] return; }
L_002508C8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002508CC:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00250848u | kUnwind; return; } goto L_00250848; }
L_002508DC:
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] - 28224u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002508F8u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002508F8u) [[unlikely]] return; }
L_002508F8:
    st32((c.r[21].w[0]), c.r[19].w[0]);
    st32((c.r[21].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 2;
L_00250900:
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
L_00250930:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250964u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0087(c, 171u, depth + 1u); else { c.pc = 0x0031DB00u; return; } if (c.pc != 0x00250964u) [[unlikely]] return; }
L_00250964:
    c.r[4].d[0] = ld8((c.r[20].w[0] + 88u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[21], ld32((c.r[3].w[0] + 20312u)));
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 88u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00250A10; } }
L_0025097C:
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00250A10; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002509A0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002509A0u) [[unlikely]] return; }
L_002509A0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 140u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002509B8u); st32((c.r[29].w[0] + 140u), c.r[21].w[0]);  if (depth < kMaxDepth) unit_0054(c, 111u, depth + 1u); else { c.pc = 0x00250C50u; return; } if (c.pc != 0x002509B8u) [[unlikely]] return; }
L_002509B8:
    set32(c.r[3], ld32((c.r[29].w[0] + 140u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[21].d[0];  if (t) { goto L_00250A0C; } }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002509DCu); set32(c.r[22], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002509DCu) [[unlikely]] return; }
L_002509DC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002509ECu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002509ECu) [[unlikely]] return; }
L_002509EC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00250A0C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250A0Cu); set32(c.r[5], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00250A0Cu) [[unlikely]] return; }
L_00250A0C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00250A10:
    c.r[3].d[0] = ld16((c.r[20].w[0] + 62u));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[20].w[0] + 56u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0025097Cu | kUnwind; return; } goto L_0025097C; }
    set32(c.r[4], ld32((c.r[20].w[0] + 104u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  goto L_00250AB0; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00250A3Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00250A3Cu) [[unlikely]] return; }
L_00250A3C:
    set32(c.r[17], ld32((c.r[19].w[0] + 104u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[16].d[0];  if (t) { goto L_00250AAC; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[19].w[0] + 104u), c.r[16].w[0]);  goto L_00250A8C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250A5Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00250A5Cu) [[unlikely]] return; }
L_00250A5C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250A6Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00250A6Cu) [[unlikely]] return; }
L_00250A6C:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00250A88; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00250A88u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00250A88u) [[unlikely]] return; }
L_00250A88:
    st32((c.r[19].w[0] + 104u), c.r[16].w[0]);
    c.budget -= 1;
L_00250A8C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00250AAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250A9Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00250A9Cu) [[unlikely]] return; }
L_00250A9C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250AACu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00250AACu) [[unlikely]] return; }
L_00250AAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_00250AB0:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00250AE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 108u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250B08u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00250B08u) [[unlikely]] return; }
L_00250B08:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00250B24; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250B1Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 278u, depth + 1u); else { c.pc = 0x002521A0u; return; } if (c.pc != 0x00250B1Cu) [[unlikely]] return; }
L_00250B1C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_00250B24:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250B30u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 83u, depth + 1u); else { c.pc = 0x00250930u; return; } if (c.pc != 0x00250B30u) [[unlikely]] return; }
L_00250B30:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00250B50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 5;
    if (c.r[4].d[0] != 0ull) { set32(c.r[25], ld32((c.r[4].w[0])));  goto L_00250B6C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00250BA4; } }
L_00250B6C:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00250B78u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00250B78u) [[unlikely]] return; }
L_00250B78:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 17288u);  if (t) { goto L_00250B94; } }
L_00250B84:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_00250B94; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00250BA0; } }
L_00250B94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00250B84u | kUnwind; return; } goto L_00250B84; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00250BA0:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_00250BA4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00250BB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[4].w[0] + 32u));  c.pc = t; return; }
L_00250BC0:
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_00250BD8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00250BD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00250BE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 16u);  c.pc = t; return; }
L_00250BF0:
    c.f[1] = ld32((c.r[4].w[0] + 20u));
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_00250C08; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00250C08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00250C10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_00250C20:
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[1] = ld32((c.r[28].w[0] - 32644u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_00250C38; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00250C38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00250C40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00250C50:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 14;
    { const bool t = c.r[20].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00250C9C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 64u), c.r[20].w[0]);  goto L_00250CA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00250CA4; } }
L_00250C9C:
    st32((c.r[19].w[0] + 64u), c.r[20].w[0]);
    c.budget -= 1;
L_00250CA0:
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00250CA4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 112u)));  goto L_00250CB4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00251004; } }
L_00250CB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00250D50; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 112u)));
    set32(c.r[17], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_00250D50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 112u)));  goto L_00250CFC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250CE8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00250CE8u) [[unlikely]] return; }
L_00250CE8:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250CF8u); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00250CF8u) [[unlikely]] return; }
L_00250CF8:
    set32(c.r[2], ld32((c.r[19].w[0] + 112u)));
    c.budget -= 1;
L_00250CFC:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[16].d[0]) { st32((c.r[19].w[0] + 112u), c.r[17].w[0]);  goto L_00250D50; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250D1Cu); set32(c.r[21], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00250D1Cu) [[unlikely]] return; }
L_00250D1C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250D2Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00250D2Cu) [[unlikely]] return; }
L_00250D2C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00250D4C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250D4Cu); set32(c.r[5], c.r[19].w[0] + 112u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00250D4Cu) [[unlikely]] return; }
L_00250D4C:
    st32((c.r[19].w[0] + 112u), c.r[17].w[0]);
    c.budget -= 1;
L_00250D50:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_00250D78; } }
    set32(c.r[5], ld32((c.r[20].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250D64u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 439u, depth + 1u); else { c.pc = 0x00257730u; return; } if (c.pc != 0x00250D64u) [[unlikely]] return; }
L_00250D64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00250D78; } }
    st32((c.r[19].w[0] + 64u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00251004; } }
L_00250D78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[17], ld32((c.r[18].w[0])));
    set32(c.r[16], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[17].d[0] == c.r[16].d[0]) { st32((c.r[29].w[0] + 140u), c.r[19].w[0]);  goto L_00250E14; }
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_00250E10; } }
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[16].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 8u)));  goto L_00250DBC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250DA8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00250DA8u) [[unlikely]] return; }
L_00250DA8:
    set32(c.r[2], ld32((c.r[17].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250DB8u); st32((c.r[17].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00250DB8u) [[unlikely]] return; }
L_00250DB8:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_00250DBC:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[16].d[0]) { st32((c.r[19].w[0] + 8u), c.r[17].w[0]);  goto L_00250E10; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[16], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250DDCu); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00250DDCu) [[unlikely]] return; }
L_00250DDC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250DECu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00250DECu) [[unlikely]] return; }
L_00250DEC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00250E0C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250E0Cu); set32(c.r[5], c.r[19].w[0] + 8u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00250E0Cu) [[unlikely]] return; }
L_00250E0C:
    st32((c.r[19].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 1;
L_00250E10:
    st32((c.r[29].w[0] + 140u), c.r[19].w[0]);
    c.budget -= 1;
L_00250E14:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 136u);  goto L_00250E3C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250E24u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00250E24u) [[unlikely]] return; }
L_00250E24:
    set32(c.r[3], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250E38u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00250E38u) [[unlikely]] return; }
L_00250E38:
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 1;
L_00250E3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250E44u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0054(c, 26u, depth + 1u); else { c.pc = 0x00250280u; return; } if (c.pc != 0x00250E44u) [[unlikely]] return; }
L_00250E44:
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250E50u); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_0054(c, 172u, depth + 1u); else { c.pc = 0x00251340u; return; } if (c.pc != 0x00250E50u) [[unlikely]] return; }
L_00250E50:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250E60u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_004E(c, 74u, depth + 1u); else { c.pc = 0x002391C0u; return; } if (c.pc != 0x00250E60u) [[unlikely]] return; }
L_00250E60:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[18].d[0] = ld16((c.r[20].w[0] + 62u));  goto L_00250EC8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u - 1u);  if (t) { goto L_00250EE8; } }
L_00250E70:
    set32(c.r[4], c.r[29].w[0] + 132u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250E7Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0054(c, 26u, depth + 1u); else { c.pc = 0x00250280u; return; } if (c.pc != 0x00250E7Cu) [[unlikely]] return; }
L_00250E7C:
    set32(c.r[2], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[16], c.r[18].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 132u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250E90u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0054(c, 172u, depth + 1u); else { c.pc = 0x00251340u; return; } if (c.pc != 0x00250E90u) [[unlikely]] return; }
L_00250E90:
    c.r[17].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 132u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250EA0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_004E(c, 74u, depth + 1u); else { c.pc = 0x002391C0u; return; } if (c.pc != 0x00250EA0u) [[unlikely]] return; }
L_00250EA0:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_00250ECC; }
    set32(c.r[2], ld32((c.r[20].w[0] + 56u)));
    set32(c.r[5], c.r[29].w[0] + 140u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250EB8u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0054(c, 19u, depth + 1u); else { c.pc = 0x002501B0u; return; } if (c.pc != 0x00250EB8u) [[unlikely]] return; }
L_00250EB8:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 64u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[20].w[0] + 64u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00250EE8; } }
L_00250EC8:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00250ECC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00250E70u | kUnwind; return; } goto L_00250E70; } }
    c.r[5].d[0] = ld16((c.r[20].w[0] + 62u));
    set32(c.r[4], c.r[20].w[0] + 52u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250EE4u); set32(c.r[6], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_0054(c, 143u, depth + 1u); else { c.pc = 0x00251040u; return; } if (c.pc != 0x00250EE4u) [[unlikely]] return; }
L_00250EE4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00250EE8:
    set32(c.r[19], ld32((c.r[19].w[0] + 8u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00250F10; } }
L_00250EFC:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], c.r[5].w[0] << 5);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_00250F10:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = c.r[2].d[0] << 56;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00250EFCu | kUnwind; return; } goto L_00250EFC; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; mmi::divu(c, 0, c.r[5].w[0], c.r[4].w[0]);  if (t) { goto L_00250F28; } }
    breakpoint(c, 0x00250F24u);
    c.budget -= 1;
L_00250F28:
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[16], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[2].w[0])));  if (t) { goto L_00250F58; } }
L_00250F40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250F48u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00250F48u) [[unlikely]] return; }
L_00250F48:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], ld32((c.r[17].w[0])));  goto L_00250F58; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[18].w[0]);  if (t) { goto L_00250FB8; } }
L_00250F58:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00250F40u | kUnwind; return; } goto L_00250F40; }
    set32(c.r[25], ld32((c.r[20].w[0] + 68u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00250F70u); set32(c.r[4], c.r[20].w[0] + 68u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00250F70u) [[unlikely]] return; }
L_00250F70:
    set32(c.r[25], ld32((c.r[20].w[0] + 68u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] + 68u);
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00250F90u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00250F90u) [[unlikely]] return; }
L_00250F90:
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0]), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 10;
L_00250FB8:
    set32(c.r[2], ld32((c.r[29].w[0] + 140u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_00251004; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250FCCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00250FCCu) [[unlikely]] return; }
L_00250FCC:
    set32(c.r[3], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00250FE0u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00250FE0u) [[unlikely]] return; }
L_00250FE0:
    set32(c.r[4], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00251000; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00251000u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00251000u) [[unlikely]] return; }
L_00251000:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00251004:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00251030:
    st32((c.r[5].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 8u), c.r[7].w[0]);  c.pc = t; return; }
L_00251040:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 8u));
    c.r[2].d[0] = c.r[20].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_002511E8; } }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 14u));
    set32(c.r[17], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    if (c.r[17].d[0] == c.r[3].d[0]) { c.r[2].d[0] = ld16((c.r[21].w[0] + 10u));  goto L_002511EC; }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 10u));
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[16], ld32((c.r[21].w[0] + 4u)));  goto L_00251134; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[17].d[0] & 65535ull;  if (t) { goto L_00251118; } }
L_002510A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002510ACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0054(c, 26u, depth + 1u); else { c.pc = 0x00250280u; return; } if (c.pc != 0x002510ACu) [[unlikely]] return; }
L_002510AC:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[16], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 156u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002510C4u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0054(c, 25u, depth + 1u); else { c.pc = 0x00250260u; return; } if (c.pc != 0x002510C4u) [[unlikely]] return; }
L_002510C4:
    c.r[22].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 156u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002510D4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_004E(c, 74u, depth + 1u); else { c.pc = 0x002391C0u; return; } if (c.pc != 0x002510D4u) [[unlikely]] return; }
L_002510D4:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[2], c.r[18].w[0] + 1u);  goto L_00251114; }
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002510E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0054(c, 26u, depth + 1u); else { c.pc = 0x00250280u; return; } if (c.pc != 0x002510E8u) [[unlikely]] return; }
L_002510E8:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[5], c.r[29].w[0] + 152u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002510F8u); set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);  if (depth < kMaxDepth) unit_0054(c, 19u, depth + 1u); else { c.pc = 0x002501B0u; return; } if (c.pc != 0x002510F8u) [[unlikely]] return; }
L_002510F8:
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251104u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_004E(c, 74u, depth + 1u); else { c.pc = 0x002391C0u; return; } if (c.pc != 0x00251104u) [[unlikely]] return; }
L_00251104:
    c.r[2].d[0] = ld16((c.r[21].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[21].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.budget -= 4;
L_00251114:
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_00251118:
    c.r[2].d[0] = ld16((c.r[21].w[0] + 10u));
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 156u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002510A4u | kUnwind; return; } goto L_002510A4; }
    st16((c.r[21].w[0] + 10u), static_cast<std::uint16_t>(c.r[17].w[0]));
    set32(c.r[16], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 2;
L_00251134:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st16((c.r[21].w[0] + 8u), static_cast<std::uint16_t>(c.r[17].w[0]));  if (t) { goto L_002511D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251144u); c.r[4].d[0] = ld16((c.r[21].w[0] + 8u));  if (depth < kMaxDepth) unit_0054(c, 12u, depth + 1u); else { c.pc = 0x00250110u; return; } if (c.pc != 0x00251144u) [[unlikely]] return; }
L_00251144:
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0025116C; } }
L_00251150:
    c.r[3].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251164u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0054(c, 19u, depth + 1u); else { c.pc = 0x002501B0u; return; } if (c.pc != 0x00251164u) [[unlikely]] return; }
L_00251164:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 2;
L_0025116C:
    c.r[18].d[0] = ld16((c.r[21].w[0] + 10u));
    c.r[2].d[0] = c.r[17].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00251150u | kUnwind; return; } goto L_00251150; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld16((c.r[21].w[0] + 8u));  if (t) { goto L_002511C0; } }
L_00251188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251190u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0054(c, 26u, depth + 1u); else { c.pc = 0x00250280u; return; } if (c.pc != 0x00251190u) [[unlikely]] return; }
L_00251190:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 148u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002511A8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0054(c, 19u, depth + 1u); else { c.pc = 0x002501B0u; return; } if (c.pc != 0x002511A8u) [[unlikely]] return; }
L_002511A8:
    set32(c.r[4], c.r[29].w[0] + 148u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002511B4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_004E(c, 74u, depth + 1u); else { c.pc = 0x002391C0u; return; } if (c.pc != 0x002511B4u) [[unlikely]] return; }
L_002511B4:
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.r[18].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = ld16((c.r[21].w[0] + 8u));
    c.budget -= 3;
L_002511C0:
    c.r[3].d[0] = c.r[18].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 148u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00251188u | kUnwind; return; } goto L_00251188; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_002511E0; } }
L_002511D8:
    st32((c.r[21].w[0] + 4u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_002511E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002511E8u);  if (depth < kMaxDepth) unit_0054(c, 11u, depth + 1u); else { c.pc = 0x002500F0u; return; } if (c.pc != 0x002511E8u) [[unlikely]] return; }
L_002511E8:
    c.r[2].d[0] = ld16((c.r[21].w[0] + 10u));
    c.budget -= 1;
L_002511EC:
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 140u);  goto L_00251240; }
    set32(c.r[2], c.r[20].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    st16((c.r[21].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025120Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0054(c, 26u, depth + 1u); else { c.pc = 0x00250280u; return; } if (c.pc != 0x0025120Cu) [[unlikely]] return; }
L_0025120C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251218u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0054(c, 25u, depth + 1u); else { c.pc = 0x00250260u; return; } if (c.pc != 0x00251218u) [[unlikely]] return; }
L_00251218:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251228u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_004E(c, 74u, depth + 1u); else { c.pc = 0x002391C0u; return; } if (c.pc != 0x00251228u) [[unlikely]] return; }
L_00251228:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 4u)));  goto L_002512F8; }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002512F4; } }
L_00251240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251248u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0054(c, 26u, depth + 1u); else { c.pc = 0x00250280u; return; } if (c.pc != 0x00251248u) [[unlikely]] return; }
L_00251248:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251254u); set32(c.r[5], c.r[29].w[0] + 140u);  if (depth < kMaxDepth) unit_0054(c, 25u, depth + 1u); else { c.pc = 0x00250260u; return; } if (c.pc != 0x00251254u) [[unlikely]] return; }
L_00251254:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251264u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_004E(c, 74u, depth + 1u); else { c.pc = 0x002391C0u; return; } if (c.pc != 0x00251264u) [[unlikely]] return; }
L_00251264:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 132u);  goto L_002512B4; }
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251278u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0054(c, 26u, depth + 1u); else { c.pc = 0x00250280u; return; } if (c.pc != 0x00251278u) [[unlikely]] return; }
L_00251278:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 136u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025128Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0054(c, 172u, depth + 1u); else { c.pc = 0x00251340u; return; } if (c.pc != 0x0025128Cu) [[unlikely]] return; }
L_0025128C:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025129Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_004E(c, 74u, depth + 1u); else { c.pc = 0x002391C0u; return; } if (c.pc != 0x0025129Cu) [[unlikely]] return; }
L_0025129C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002512F4; } }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002512F4; } }
L_002512B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002512BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0054(c, 26u, depth + 1u); else { c.pc = 0x00250280u; return; } if (c.pc != 0x002512BCu) [[unlikely]] return; }
L_002512BC:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[5], c.r[29].w[0] + 132u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002512D0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0054(c, 25u, depth + 1u); else { c.pc = 0x00250260u; return; } if (c.pc != 0x002512D0u) [[unlikely]] return; }
L_002512D0:
    c.r[16].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 132u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002512E0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_004E(c, 74u, depth + 1u); else { c.pc = 0x002391C0u; return; } if (c.pc != 0x002512E0u) [[unlikely]] return; }
L_002512E0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002512F4; } }
    c.r[2].d[0] = ld16((c.r[21].w[0] + 12u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[21].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002512F4:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 1;
L_002512F8:
    set32(c.r[3], c.r[20].w[0] << 2);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251308u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0054(c, 19u, depth + 1u); else { c.pc = 0x002501B0u; return; } if (c.pc != 0x00251308u) [[unlikely]] return; }
L_00251308:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00251340:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_00251360:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002513D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 400u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_002513B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[2], c.r[2].w[0] + 416u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 28224u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002513B4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002513B4u) [[unlikely]] return; }
L_002513B4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002513D4; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002513D0u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002513D0u) [[unlikely]] return; }
L_002513D0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002513D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002513F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00251450; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[2], c.r[2].w[0] + 416u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 28224u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251434u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x00251434u) [[unlikely]] return; }
L_00251434:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00251454; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251450u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00251450u) [[unlikely]] return; }
L_00251450:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00251454:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00251470:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 8u));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_002514D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002514C4; } }
L_002514A0:
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002514C4; }
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002514C0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0055(c, 484u, depth + 1u); else { c.pc = 0x00257D00u; return; } if (c.pc != 0x002514C0u) [[unlikely]] return; }
L_002514C0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002514C4:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 62u));
    c.r[3].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 56u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002514A0u | kUnwind; return; } goto L_002514A0; }
L_002514D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002514F0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00251738; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 16u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { goto L_00251614; } }
L_0025152C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[29].w[0] + 108u), 0u);  if (t) { goto L_0025154C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025153Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0025153Cu) [[unlikely]] return; }
L_0025153C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025154Cu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0025154Cu) [[unlikely]] return; }
L_0025154C:
    set32(c.r[3], ld32((c.r[18].w[0] + 56u)));
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    set32(c.r[20], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[19], ld32((c.r[20].w[0])));
    c.budget -= 8;
    if (c.r[19].d[0] == c.r[2].d[0]) { set32(c.r[19], ld32((c.r[29].w[0] + 108u)));  goto L_002515D0; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[19], ld32((c.r[29].w[0] + 108u)));  goto L_002515AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025157Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0025157Cu) [[unlikely]] return; }
L_0025157C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025158Cu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0025158Cu) [[unlikely]] return; }
L_0025158C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002515A8; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002515A8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002515A8u) [[unlikely]] return; }
L_002515A8:
    set32(c.r[19], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 1;
L_002515AC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[20].w[0]), c.r[19].w[0]);  if (t) { goto L_002515CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002515BCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002515BCu) [[unlikely]] return; }
L_002515BC:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002515CCu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002515CCu) [[unlikely]] return; }
L_002515CC:
    set32(c.r[19], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 1;
L_002515D0:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[2], c.r[16].w[0] + 1u);  goto L_00251610; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002515E0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002515E0u) [[unlikely]] return; }
L_002515E0:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002515F0u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002515F0u) [[unlikely]] return; }
L_002515F0:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025160C; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025160Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025160Cu) [[unlikely]] return; }
L_0025160C:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00251610:
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_00251614:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 62u));
    c.r[3].d[0] = c.r[16].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { c.r[19].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0025152Cu | kUnwind; return; } goto L_0025152C; }
    st16((c.r[18].w[0] + 62u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[18].w[0] + 104u);
    st16((c.r[18].w[0] + 64u), static_cast<std::uint16_t>(0u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0] + 100u), 0u);  if (t) { goto L_0025167C; } }
    set32(c.r[16], ld32((c.r[18].w[0] + 104u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], c.r[18].w[0] + 92u);  goto L_00251680; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251650u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00251650u) [[unlikely]] return; }
L_00251650:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251660u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00251660u) [[unlikely]] return; }
L_00251660:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025167C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025167Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025167Cu) [[unlikely]] return; }
L_0025167C:
    set32(c.r[2], c.r[18].w[0] + 92u);
    c.budget -= 1;
L_00251680:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[18].w[0] + 68u);  goto L_002516B0; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002516AC; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 92u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    set32(c.r[5], c.r[5].w[0] - 28224u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002516ACu); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002516ACu) [[unlikely]] return; }
L_002516AC:
    set32(c.r[4], c.r[18].w[0] + 68u);
    c.budget -= 1;
L_002516B0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], c.r[18].w[0] + 52u);  goto L_002516D0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 368u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002516CCu); st32((c.r[18].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0054(c, 202u, depth + 1u); else { c.pc = 0x00251760u; return; } if (c.pc != 0x002516CCu) [[unlikely]] return; }
L_002516CC:
    set32(c.r[3], c.r[18].w[0] + 52u);
    c.budget -= 1;
L_002516D0:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00251714; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 400u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[18].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00251710; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[2], c.r[2].w[0] + 416u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st32((c.r[18].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 28224u);
    set32(c.r[4], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251710u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x00251710u) [[unlikely]] return; }
L_00251710:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00251714:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025171Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0087(c, 245u, depth + 1u); else { c.pc = 0x0031E610u; return; } if (c.pc != 0x0025171Cu) [[unlikely]] return; }
L_0025171C:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_0025173C; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251738u); set32(c.r[5], 0u + 108u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00251738u) [[unlikely]] return; }
L_00251738:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0025173C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00251760:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00251828; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 336u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 16u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002517E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_002517D4; } }
L_002517A4:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[2].w[0])));  if (t) { goto L_002517C4; } }
L_002517B4:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[19], ld32((c.r[19].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002517C4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002517C4u) [[unlikely]] return; }
L_002517C4:
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002517B4u | kUnwind; return; } goto L_002517B4; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002517D4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002517A4u | kUnwind; return; } goto L_002517A4; }
L_002517E4:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_00251810; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 304u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251800u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0054(c, 216u, depth + 1u); else { c.pc = 0x00251940u; return; } if (c.pc != 0x00251800u) [[unlikely]] return; }
L_00251800:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025180Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0054(c, 209u, depth + 1u); else { c.pc = 0x00251850u; return; } if (c.pc != 0x0025180Cu) [[unlikely]] return; }
L_0025180C:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 1;
L_00251810:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_0025182C; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251828u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00251828u) [[unlikely]] return; }
L_00251828:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0025182C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00251850:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { const bool t = c.r[20].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00251918; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 272u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[2].w[0]);  if (t) { goto L_002518DC; } }
L_0025188C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[18].w[0] << 2);  if (t) { goto L_002518C4; } }
L_00251894:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002518B0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002518B0u) [[unlikely]] return; }
L_002518B0:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002518C4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002518C4u) [[unlikely]] return; }
L_002518C4:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00251894u | kUnwind; return; } goto L_00251894; }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002518DC:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025188Cu | kUnwind; return; } goto L_0025188C; } }
    st32((c.r[20].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002518FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002518FCu) [[unlikely]] return; }
L_002518FC:
    c.r[2].d[0] = c.r[19].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[20].d[0] + 0ull;  goto L_0025191C; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251918u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00251918u) [[unlikely]] return; }
L_00251918:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0025191C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00251940:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_002519B4; } }
L_00251964:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[17].w[0] << 2);  if (t) { goto L_0025199C; } }
L_0025196C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00251988u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00251988u) [[unlikely]] return; }
L_00251988:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025199Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025199Cu) [[unlikely]] return; }
L_0025199C:
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[6], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[19], ld32((c.r[6].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0025196Cu | kUnwind; return; } goto L_0025196C; }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002519B4:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00251964u | kUnwind; return; } goto L_00251964; } }
    st32((c.r[18].w[0] + 12u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002519F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00251AAC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 144u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { goto L_00251A90; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 176u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 16u));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00251A88; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00251A74; } }
L_00251A44:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[2].w[0])));  if (t) { goto L_00251A64; } }
L_00251A54:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[19], ld32((c.r[19].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251A64u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x00251A64u) [[unlikely]] return; }
L_00251A64:
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00251A54u | kUnwind; return; } goto L_00251A54; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00251A74:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00251A44u | kUnwind; return; } goto L_00251A44; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00251A88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251A90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0054(c, 240u, depth + 1u); else { c.pc = 0x00251C80u; return; } if (c.pc != 0x00251A90u) [[unlikely]] return; }
L_00251A90:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_00251AB0; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251AACu); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00251AACu) [[unlikely]] return; }
L_00251AAC:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00251AB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00251AD0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00251B98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 176u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 16u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00251B54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00251B44; } }
L_00251B14:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[2].w[0])));  if (t) { goto L_00251B34; } }
L_00251B24:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[19], ld32((c.r[19].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251B34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x00251B34u) [[unlikely]] return; }
L_00251B34:
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00251B24u | kUnwind; return; } goto L_00251B24; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00251B44:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00251B14u | kUnwind; return; } goto L_00251B14; }
L_00251B54:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_00251B80; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251B70u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0054(c, 234u, depth + 1u); else { c.pc = 0x00251BC0u; return; } if (c.pc != 0x00251B70u) [[unlikely]] return; }
L_00251B70:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251B7Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0054(c, 251u, depth + 1u); else { c.pc = 0x00251DF0u; return; } if (c.pc != 0x00251B7Cu) [[unlikely]] return; }
L_00251B7C:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 1;
L_00251B80:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_00251B9C; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251B98u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00251B98u) [[unlikely]] return; }
L_00251B98:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00251B9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00251BC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00251C34; } }
L_00251BE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[17].w[0] << 2);  if (t) { goto L_00251C1C; } }
L_00251BEC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00251C08u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00251C08u) [[unlikely]] return; }
L_00251C08:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00251C1Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00251C1Cu) [[unlikely]] return; }
L_00251C1C:
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[6], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[19], ld32((c.r[6].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00251BECu | kUnwind; return; } goto L_00251BEC; }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00251C34:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00251BE4u | kUnwind; return; } goto L_00251BE4; } }
    st32((c.r[18].w[0] + 12u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00251C70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00251C80:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00251DC4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 208u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00251D0C; } }
L_00251CBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[20].w[0] << 2);  if (t) { goto L_00251CF4; } }
L_00251CC4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00251CE0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00251CE0u) [[unlikely]] return; }
L_00251CE0:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00251CF4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00251CF4u) [[unlikely]] return; }
L_00251CF4:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00251CC4u | kUnwind; return; } goto L_00251CC4; }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_00251D0C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00251CBCu | kUnwind; return; } goto L_00251CBC; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 12u), 0u);  if (t) { goto L_00251DA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 240u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00251D88; } }
L_00251D38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[20].w[0] << 2);  if (t) { goto L_00251D70; } }
L_00251D40:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00251D5Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00251D5Cu) [[unlikely]] return; }
L_00251D5C:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00251D70u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00251D70u) [[unlikely]] return; }
L_00251D70:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00251D40u | kUnwind; return; } goto L_00251D40; }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_00251D88:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00251D38u | kUnwind; return; } goto L_00251D38; } }
    st32((c.r[17].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251DA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x00251DA8u) [[unlikely]] return; }
L_00251DA8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00251DC8; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251DC4u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00251DC4u) [[unlikely]] return; }
L_00251DC4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00251DC8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00251DF0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 10;
    { const bool t = c.r[20].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00251EB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 240u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[2].w[0]);  if (t) { goto L_00251E7C; } }
L_00251E2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[18].w[0] << 2);  if (t) { goto L_00251E64; } }
L_00251E34:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00251E50u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00251E50u) [[unlikely]] return; }
L_00251E50:
    set32(c.r[25], ld32((c.r[20].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00251E64u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00251E64u) [[unlikely]] return; }
L_00251E64:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00251E34u | kUnwind; return; } goto L_00251E34; }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00251E7C:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00251E2Cu | kUnwind; return; } goto L_00251E2C; } }
    st32((c.r[20].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251E9Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x00251E9Cu) [[unlikely]] return; }
L_00251E9C:
    c.r[2].d[0] = c.r[19].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[20].d[0] + 0ull;  goto L_00251EBC; }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251EB8u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00251EB8u) [[unlikely]] return; }
L_00251EB8:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_00251EBC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00251EE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00251F2C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 7136u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251F10u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006E(c, 472u, depth + 1u); else { c.pc = 0x002BB890u; return; } if (c.pc != 0x00251F10u) [[unlikely]] return; }
L_00251F10:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00251F30; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251F2Cu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00251F2Cu) [[unlikely]] return; }
L_00251F2C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00251F30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00251F50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0025200C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 368u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { goto L_00251FF0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 336u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 16u));
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00251FE8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00251FD4; } }
L_00251FA4:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[2].w[0])));  if (t) { goto L_00251FC4; } }
L_00251FB4:
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[19], ld32((c.r[19].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251FC4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x00251FC4u) [[unlikely]] return; }
L_00251FC4:
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00251FB4u | kUnwind; return; } goto L_00251FB4; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00251FD4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00251FA4u | kUnwind; return; } goto L_00251FA4; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00251FE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00251FF0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0054(c, 267u, depth + 1u); else { c.pc = 0x00252030u; return; } if (c.pc != 0x00251FF0u) [[unlikely]] return; }
L_00251FF0:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_00252010; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025200Cu); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x0025200Cu) [[unlikely]] return; }
L_0025200C:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00252010:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00252030:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00252174; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 304u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_002520BC; } }
L_0025206C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[20].w[0] << 2);  if (t) { goto L_002520A4; } }
L_00252074:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00252090u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00252090u) [[unlikely]] return; }
L_00252090:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002520A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002520A4u) [[unlikely]] return; }
L_002520A4:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00252074u | kUnwind; return; } goto L_00252074; }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_002520BC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0025206Cu | kUnwind; return; } goto L_0025206C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0] + 12u), 0u);  if (t) { goto L_00252158; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 272u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00252138; } }
L_002520E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[20].w[0] << 2);  if (t) { goto L_00252120; } }
L_002520F0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025210Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025210Cu) [[unlikely]] return; }
L_0025210C:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 24u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00252120u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00252120u) [[unlikely]] return; }
L_00252120:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[19], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002520F0u | kUnwind; return; } goto L_002520F0; }
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_00252138:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[20].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002520E8u | kUnwind; return; } goto L_002520E8; } }
    st32((c.r[17].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252158u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x00252158u) [[unlikely]] return; }
L_00252158:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00252178; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252174u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00252174u) [[unlikely]] return; }
L_00252174:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00252178:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002521A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002521BCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0087(c, 251u, depth + 1u); else { c.pc = 0x0031E6D0u; return; } if (c.pc != 0x002521BCu) [[unlikely]] return; }
L_002521BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 416u);
    st32((c.r[18].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st16((c.r[18].w[0] + 60u), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0] + 66u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[18].w[0] + 62u), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0] + 64u), static_cast<std::uint16_t>(0u));
    c.r[16].d[0] = ld16((c.r[18].w[0] + 60u));
    c.budget -= 14;
    { const bool t = c.r[16].sd[0] <= 0; set32(c.r[17], c.r[18].w[0] + 52u);  if (t) { goto L_0025222C; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252204u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x00252204u) [[unlikely]] return; }
L_00252204:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00250000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 352u);
    set32(c.r[6], c.r[6].w[0] - 28224u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252224u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x00252224u) [[unlikely]] return; }
L_00252224:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00252230; } }
L_0025222C:
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 1;
L_00252230:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 400u);
    set32(c.r[16], c.r[18].w[0] + 68u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 272u);
    st32((c.r[18].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[2], 0u + 37u);
    st32((c.r[18].w[0] + 72u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 80u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 72u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252268u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x00252268u) [[unlikely]] return; }
L_00252268:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252280u); set32(c.r[6], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x00252280u) [[unlikely]] return; }
L_00252280:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 304u);
    set32(c.r[3], c.r[3].w[0] + 336u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 368u);
    st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st8((c.r[18].w[0] + 88u), static_cast<std::uint8_t>(0u));
    st32((c.r[18].w[0] + 92u), 0u);
    st32((c.r[18].w[0] + 96u), 0u);
    st32((c.r[18].w[0] + 100u), 0u);
    c.budget -= 17;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[18].w[0] + 104u), 0u);  if (t) { goto L_002522DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002522CCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002522CCu) [[unlikely]] return; }
L_002522CC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002522DCu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002522DCu) [[unlikely]] return; }
L_002522DC:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00252300:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 16u));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00252380; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252338u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00252338u) [[unlikely]] return; }
L_00252338:
    set32(c.r[18], c.r[2].w[0] + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252348u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x00252348u) [[unlikely]] return; }
L_00252348:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252358u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00252358u) [[unlikely]] return; }
L_00252358:
    c.r[1].d[0] = c.r[2].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[6], c.r[2].w[0] + 1u);  goto L_00252368; }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00252368:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252374u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x00252374u) [[unlikely]] return; }
L_00252374:
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] - 1u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00252384; } }
L_00252380:
    st32((c.r[16].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 1;
L_00252384:
    st32((c.r[16].w[0] + 8u), c.r[19].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002523B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 16u));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002523D4; }
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002523D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002523D0u) [[unlikely]] return; }
L_002523D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002523D4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002523E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 16u));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00252460; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252418u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00252418u) [[unlikely]] return; }
L_00252418:
    set32(c.r[18], c.r[2].w[0] + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252428u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x00252428u) [[unlikely]] return; }
L_00252428:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252438u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00252438u) [[unlikely]] return; }
L_00252438:
    c.r[1].d[0] = c.r[2].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[6], c.r[2].w[0] + 1u);  goto L_00252448; }
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00252448:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252454u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x00252454u) [[unlikely]] return; }
L_00252454:
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] - 1u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00252464; } }
L_00252460:
    st32((c.r[16].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 1;
L_00252464:
    st32((c.r[16].w[0] + 8u), c.r[19].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00252490:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 16u));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_002524B4; }
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002524B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002524B0u) [[unlikely]] return; }
L_002524B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_002524B4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002524C0:
    st32((c.r[5].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 8u), c.r[7].w[0]);  c.pc = t; return; }
L_002524D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 16912u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[5].w[0] + 8u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002524F0u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x002524F0u) [[unlikely]] return; }
L_002524F0:
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    set32(c.r[4], c.r[4].w[0] + 16912u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025250Cu); st32((c.r[28].w[0] - 27476u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x0025250Cu) [[unlikely]] return; }
L_0025250C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00252520:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 16912u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252538u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x00252538u) [[unlikely]] return; }
L_00252538:
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[28].w[0] - 27476u)));  goto L_0025260C; }
    set32(c.r[16], ld32((c.r[28].w[0] - 30596u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252568u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x00252568u) [[unlikely]] return; }
L_00252568:
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252580u); set32(c.r[7], 0u + 12u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x00252580u) [[unlikely]] return; }
L_00252580:
    set32(c.r[4], ld32((c.r[28].w[0] - 30596u)));
    set32(c.r[5], 0u + 1u);
    st32((c.r[28].w[0] - 27476u), c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] - 12u), 0u);
    c.budget -= 8;
L_002525A0:
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[4].w[0] + 12u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30596u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002525A0u | kUnwind; return; } goto L_002525A0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 27480u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));  goto L_002525F4; }
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 27480u), c.r[2].w[0]);  if (t) { goto L_002525FC; } }
L_002525F4:
    st32((c.r[28].w[0] - 27480u), c.r[2].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 2;
L_002525FC:
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    set32(c.r[2], c.r[2].w[0] + 12u);
    st32((c.r[28].w[0] - 27476u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[28].w[0] - 27476u)));
    c.budget -= 4;
L_0025260C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 16912u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[28].w[0] - 27476u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0]), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025262Cu); st32((c.r[16].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x0025262Cu) [[unlikely]] return; }
L_0025262C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00252640:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 16912u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[5].w[0] + 8u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252660u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x00252660u) [[unlikely]] return; }
L_00252660:
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    set32(c.r[4], c.r[4].w[0] + 16912u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025267Cu); st32((c.r[28].w[0] - 27476u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x0025267Cu) [[unlikely]] return; }
L_0025267C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00252690:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 16912u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002526A8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0047(c, 215u, depth + 1u); else { c.pc = 0x0021DE20u; return; } if (c.pc != 0x002526A8u) [[unlikely]] return; }
L_002526A8:
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[28].w[0] - 27476u)));  goto L_0025277C; }
    set32(c.r[16], ld32((c.r[28].w[0] - 30596u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002526D8u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x002526D8u) [[unlikely]] return; }
L_002526D8:
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002526F0u); set32(c.r[7], 0u + 12u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002526F0u) [[unlikely]] return; }
L_002526F0:
    set32(c.r[4], ld32((c.r[28].w[0] - 30596u)));
    set32(c.r[5], 0u + 1u);
    st32((c.r[28].w[0] - 27476u), c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] - 12u), 0u);
    c.budget -= 8;
L_00252710:
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[4].w[0] + 12u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30596u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00252710u | kUnwind; return; } goto L_00252710; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 27480u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));  goto L_00252764; }
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 27480u), c.r[2].w[0]);  if (t) { goto L_0025276C; } }
L_00252764:
    st32((c.r[28].w[0] - 27480u), c.r[2].w[0]);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 2;
L_0025276C:
    set32(c.r[2], ld32((c.r[28].w[0] - 27476u)));
    set32(c.r[2], c.r[2].w[0] + 12u);
    st32((c.r[28].w[0] - 27476u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[28].w[0] - 27476u)));
    c.budget -= 4;
L_0025277C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[4].w[0] + 16912u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[28].w[0] - 27476u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0]), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025279Cu); st32((c.r[16].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_0047(c, 211u, depth + 1u); else { c.pc = 0x0021DDB0u; return; } if (c.pc != 0x0025279Cu) [[unlikely]] return; }
L_0025279C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002527B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002527D0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006E(c, 418u, depth + 1u); else { c.pc = 0x002BB240u; return; } if (c.pc != 0x002527D0u) [[unlikely]] return; }
L_002527D0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 8u)));  goto L_002527E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00252A24; } }
L_002527E0:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 12u)));  goto L_002527F4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00252A24; } }
L_002527F4:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00252A24; }
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[16].d[0] = 0ull + 0ull;  goto L_002528BC; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00252A24; } }
L_0025281C:
    set32(c.r[5], c.r[16].w[0] << 4);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252830u); set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_0055(c, 161u, depth + 1u); else { c.pc = 0x00255190u; return; } if (c.pc != 0x00252830u) [[unlikely]] return; }
L_00252830:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00252A24; }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[4], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 11;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_002528A8; }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002528A4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002528A4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002528A4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_002528A8; }
L_002528A4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002528A8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_002528BC; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00252A24; } }
L_002528BC:
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0025281Cu | kUnwind; return; } goto L_0025281C; }
    c.f[1] = ld32((c.r[18].w[0] + 28u));
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[18].w[0] + 32u)));  goto L_002528E8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00252A24; } }
L_002528E8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002528FC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00252A24; }
L_002528FC:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00252910; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025293C; } }
L_00252910:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 36u)));  goto L_0025294C; }
    set32(c.r[5], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00252948; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00252934u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00252934u) [[unlikely]] return; }
L_00252934:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00252948; } }
L_0025293C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00252A24; } }
L_00252948:
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 1;
L_0025294C:
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00252A24; }
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00252994; } }
    c.f[1] = ld32((c.r[18].w[0] + 44u));
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00252994; } }
    c.f[1] = ld32((c.r[18].w[0] + 48u));
    c.f[0] = ld32((c.r[17].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[18].w[0] + 64u)));  goto L_002529A0; }
L_00252994:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00252A24; } }
L_002529A0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002529B4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00252A24; }
L_002529B4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002529C8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002529F4; } }
L_002529C8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 112u)));  goto L_00252A04; }
    set32(c.r[5], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00252A00; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 40u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002529ECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002529ECu) [[unlikely]] return; }
L_002529EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00252A00; } }
L_002529F4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00252A24; } }
L_00252A00:
    set32(c.r[3], ld32((c.r[18].w[0] + 112u)));
    c.budget -= 1;
L_00252A04:
    set32(c.r[2], ld32((c.r[17].w[0] + 112u)));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[18].w[0] + 120u)));  goto L_00252A18; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00252A24; } }
L_00252A18:
    set32(c.r[2], ld32((c.r[17].w[0] + 120u)));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_00252A24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00252A40:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252A70u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 426u, depth + 1u); else { c.pc = 0x002BB300u; return; } if (c.pc != 0x00252A70u) [[unlikely]] return; }
L_00252A70:
    set32(c.r[3], ld32((c.r[16].w[0] + 108u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 20u)));  goto L_00252B24; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00252AA4; } }
L_00252A84:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252AA0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0055(c, 115u, depth + 1u); else { c.pc = 0x00254C70u; return; } if (c.pc != 0x00252AA0u) [[unlikely]] return; }
L_00252AA0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00252AA4:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[3].d[0] = c.r[17].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[17].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00252A84u | kUnwind; return; } goto L_00252A84; }
    set32(c.r[17], ld32((c.r[16].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00252B20; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_00252B00; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252AD0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00252AD0u) [[unlikely]] return; }
L_00252AD0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252AE0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00252AE0u) [[unlikely]] return; }
L_00252AE0:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00252AFC; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00252AFCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00252AFCu) [[unlikely]] return; }
L_00252AFC:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00252B00:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[16].w[0] + 108u), 0u);  if (t) { goto L_00252B20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252B10u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00252B10u) [[unlikely]] return; }
L_00252B10:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252B20u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00252B20u) [[unlikely]] return; }
L_00252B20:
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 1;
L_00252B24:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x0A010000u);
    c.r[1].d[0] = c.r[1].d[0] | 104ull;
    c.r[1].d[0] = c.r[3].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  goto L_002531DC; }
    c.f[1] = ld32((c.r[28].w[0] - 32640u));
    c.r[4].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    st32((c.r[16].w[0] + 44u), c.f[1]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 48u), c.f[0]);  if (t) { goto L_00252B90; } }
L_00252B50:
    set32(c.r[3], c.r[4].w[0] << 4);
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.f[1] = ld32((c.r[2].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[2].w[0] + 24u));  goto L_00252B78; }
    st32((c.r[16].w[0] + 44u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 24u));
    c.budget -= 2;
L_00252B78:
    c.f[0] = ld32((c.r[16].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_00252B90; }
    st32((c.r[16].w[0] + 48u), c.f[1]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 2;
L_00252B90:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00252B50u | kUnwind; return; } goto L_00252B50; }
    c.f[1] = ld32((c.r[16].w[0] + 44u));
    c.f[0] = ld32((c.r[28].w[0] - 32640u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00252BD0; } }
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = ld32((c.r[28].w[0] - 32644u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00252BD0; } }
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    c.budget -= 2;
L_00252BD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st16((c.r[29].w[0] + 154u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 480u);
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st16((c.r[29].w[0] + 158u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    st16((c.r[29].w[0] + 152u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[29].w[0] + 152u));
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] <= 0; st16((c.r[29].w[0] + 156u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00252C14; } }
    c.r[2].d[0] = ld16((c.r[29].w[0] + 152u));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252C0Cu); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x00252C0Cu) [[unlikely]] return; }
L_00252C0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 148u), c.r[2].w[0]);  if (t) { goto L_00252C18; } }
L_00252C14:
    st32((c.r[29].w[0] + 148u), 0u);
    c.budget -= 1;
L_00252C18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st16((c.r[29].w[0] + 138u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 464u);
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 4752u);
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st16((c.r[29].w[0] + 142u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    st16((c.r[29].w[0] + 136u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[29].w[0] + 136u));
    c.budget -= 14;
    { const bool t = c.r[2].sd[0] <= 0; st16((c.r[29].w[0] + 140u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00252C8C; } }
    c.r[17].d[0] = ld16((c.r[29].w[0] + 136u));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252C64u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x00252C64u) [[unlikely]] return; }
L_00252C64:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 27312u);
    set32(c.r[6], c.r[6].w[0] - 27472u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252C84u); set32(c.r[7], 0u + 4u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x00252C84u) [[unlikely]] return; }
L_00252C84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 132u), c.r[2].w[0]);  if (t) { goto L_00252C90; } }
L_00252C8C:
    st32((c.r[29].w[0] + 132u), 0u);
    c.budget -= 1;
L_00252C90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 4768u);
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[22].d[0] = ld8((c.r[2].w[0] + 10064u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00253050; } }
L_00252CAC:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[17], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252CC8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00252CC8u) [[unlikely]] return; }
L_00252CC8:
    set32(c.r[21], c.r[2].w[0] + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252CD8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x00252CD8u) [[unlikely]] return; }
L_00252CD8:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252CE4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00252CE4u) [[unlikely]] return; }
L_00252CE4:
    c.r[1].d[0] = c.r[2].d[0] < c.r[21].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[6], c.r[2].w[0] + 1u);  goto L_00252CF4; }
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_00252CF4:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252D00u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 275u, depth + 1u); else { c.pc = 0x003BA878u; return; } if (c.pc != 0x00252D00u) [[unlikely]] return; }
L_00252D00:
    set32(c.r[3], c.r[2].w[0] + c.r[21].w[0]);
    c.r[2].d[0] = ld16((c.r[29].w[0] + 154u));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[3].w[0] - 1u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00252D30; } }
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull; st16((c.r[29].w[0] + 154u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00252D80; } }
    c.r[2].d[0] = ld16((c.r[29].w[0] + 156u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 156u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00252D80; } }
L_00252D30:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 148u)));  goto L_00252D60; }
    set32(c.r[2], ld32((c.r[29].w[0] + 148u)));
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 148u)));  goto L_00252D84; }
    c.r[2].d[0] = ld16((c.r[29].w[0] + 156u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 156u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00252D80; } }
L_00252D60:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00252D80; } }
    c.r[2].d[0] = ld16((c.r[29].w[0] + 156u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[29].w[0] + 156u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00252D80:
    set32(c.r[2], ld32((c.r[29].w[0] + 148u)));
    c.budget -= 1;
L_00252D84:
    set32(c.r[19], c.r[18].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0]), c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[17], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252DA4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0054(c, 392u, depth + 1u); else { c.pc = 0x002532F0u; return; } if (c.pc != 0x00252DA4u) [[unlikely]] return; }
L_00252DA4:
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252DB0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0054(c, 392u, depth + 1u); else { c.pc = 0x002532F0u; return; } if (c.pc != 0x00252DB0u) [[unlikely]] return; }
L_00252DB0:
    set32(c.r[4], c.r[17].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252DBCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0054(c, 392u, depth + 1u); else { c.pc = 0x002532F0u; return; } if (c.pc != 0x00252DBCu) [[unlikely]] return; }
L_00252DBC:
    set32(c.r[4], c.r[17].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252DC8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0054(c, 392u, depth + 1u); else { c.pc = 0x002532F0u; return; } if (c.pc != 0x00252DC8u) [[unlikely]] return; }
L_00252DC8:
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252DD4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0054(c, 392u, depth + 1u); else { c.pc = 0x002532F0u; return; } if (c.pc != 0x00252DD4u) [[unlikely]] return; }
L_00252DD4:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[17], c.r[18].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 188u), c.r[2].w[0]);  if (t) { goto L_00252E08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252DF4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00252DF4u) [[unlikely]] return; }
L_00252DF4:
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252E08u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00252E08u) [[unlikely]] return; }
L_00252E08:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 138u));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 180u);  goto L_00252E60; }
    set32(c.r[2], c.r[18].w[0] + 1u);
    set32(c.r[4], c.r[29].w[0] + 184u);
    st16((c.r[29].w[0] + 138u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252E2Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 93u, depth + 1u); else { c.pc = 0x00239460u; return; } if (c.pc != 0x00252E2Cu) [[unlikely]] return; }
L_00252E2C:
    set32(c.r[4], c.r[29].w[0] + 188u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252E38u); set32(c.r[5], c.r[29].w[0] + 184u);  if (depth < kMaxDepth) unit_004E(c, 92u, depth + 1u); else { c.pc = 0x00239440u; return; } if (c.pc != 0x00252E38u) [[unlikely]] return; }
L_00252E38:
    c.r[20].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 184u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252E48u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_004E(c, 96u, depth + 1u); else { c.pc = 0x002394B0u; return; } if (c.pc != 0x00252E48u) [[unlikely]] return; }
L_00252E48:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 132u)));  goto L_00252F10; }
    c.r[2].d[0] = ld16((c.r[29].w[0] + 140u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 140u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00252F0C; } }
L_00252E60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252E68u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 93u, depth + 1u); else { c.pc = 0x00239460u; return; } if (c.pc != 0x00252E68u) [[unlikely]] return; }
L_00252E68:
    set32(c.r[4], c.r[29].w[0] + 188u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252E74u); set32(c.r[5], c.r[29].w[0] + 180u);  if (depth < kMaxDepth) unit_004E(c, 92u, depth + 1u); else { c.pc = 0x00239440u; return; } if (c.pc != 0x00252E74u) [[unlikely]] return; }
L_00252E74:
    c.r[20].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 180u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252E84u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_004E(c, 96u, depth + 1u); else { c.pc = 0x002394B0u; return; } if (c.pc != 0x00252E84u) [[unlikely]] return; }
L_00252E84:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 172u);  goto L_00252ED0; }
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252E98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 93u, depth + 1u); else { c.pc = 0x00239460u; return; } if (c.pc != 0x00252E98u) [[unlikely]] return; }
L_00252E98:
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252EA8u); set32(c.r[4], c.r[2].w[0] + c.r[19].w[0]);  if (depth < kMaxDepth) unit_004E(c, 85u, depth + 1u); else { c.pc = 0x00239370u; return; } if (c.pc != 0x00252EA8u) [[unlikely]] return; }
L_00252EA8:
    c.r[20].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252EB8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_004E(c, 96u, depth + 1u); else { c.pc = 0x002394B0u; return; } if (c.pc != 0x00252EB8u) [[unlikely]] return; }
L_00252EB8:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00252F0C; } }
    c.r[2].d[0] = ld16((c.r[29].w[0] + 140u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[29].w[0] + 140u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00252F0C; } }
L_00252ED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252ED8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_004E(c, 93u, depth + 1u); else { c.pc = 0x00239460u; return; } if (c.pc != 0x00252ED8u) [[unlikely]] return; }
L_00252ED8:
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[5], c.r[29].w[0] + 172u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252EE8u); set32(c.r[4], c.r[2].w[0] + c.r[19].w[0]);  if (depth < kMaxDepth) unit_004E(c, 92u, depth + 1u); else { c.pc = 0x00239440u; return; } if (c.pc != 0x00252EE8u) [[unlikely]] return; }
L_00252EE8:
    c.r[20].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[4], c.r[29].w[0] + 172u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252EF8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_004E(c, 96u, depth + 1u); else { c.pc = 0x002394B0u; return; } if (c.pc != 0x00252EF8u) [[unlikely]] return; }
L_00252EF8:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00252F0C; } }
    c.r[2].d[0] = ld16((c.r[29].w[0] + 140u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[29].w[0] + 140u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00252F0C:
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 1;
L_00252F10:
    set32(c.r[5], c.r[29].w[0] + 188u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252F1Cu); set32(c.r[4], c.r[2].w[0] + c.r[19].w[0]);  if (depth < kMaxDepth) unit_004E(c, 86u, depth + 1u); else { c.pc = 0x00239390u; return; } if (c.pc != 0x00252F1Cu) [[unlikely]] return; }
L_00252F1C:
    set32(c.r[2], ld32((c.r[29].w[0] + 188u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 20u)));  goto L_00252F68; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252F30u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00252F30u) [[unlikely]] return; }
L_00252F30:
    set32(c.r[3], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252F44u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00252F44u) [[unlikely]] return; }
L_00252F44:
    set32(c.r[4], ld32((c.r[29].w[0] + 188u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00252F64; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00252F64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00252F64u) [[unlikely]] return; }
L_00252F64:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_00252F68:
    set32(c.r[17], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[19], ld32((c.r[17].w[0])));
    c.budget -= 4;
    if (c.r[19].d[0] == 0ull) { set32(c.r[19], ld32((c.r[17].w[0] + 4u)));  goto L_00252FDC; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[19].d[0] = 0ull + 0ull;  goto L_00252FB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252F88u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00252F88u) [[unlikely]] return; }
L_00252F88:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252F98u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00252F98u) [[unlikely]] return; }
L_00252F98:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00252FB4; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_00252FA8:
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00252FB4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00252FB4u) [[unlikely]] return; }
L_00252FB4:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00252FB8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[17].w[0]), 0u);  if (t) { goto L_00252FD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252FC8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00252FC8u) [[unlikely]] return; }
L_00252FC8:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252FD8u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00252FD8u) [[unlikely]] return; }
L_00252FD8:
    set32(c.r[19], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_00252FDC:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[17].w[0] + 8u), 0u);  goto L_00253048; }
L_00252FE4:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { c.r[19].d[0] = 0ull + 0ull;  goto L_00253024; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00252FF4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00252FF4u) [[unlikely]] return; }
L_00252FF4:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253004u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00253004u) [[unlikely]] return; }
L_00253004:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00253020; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00253020u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00253020u) [[unlikely]] return; }
L_00253020:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00253024:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[17].w[0] + 4u), 0u);  if (t) { goto L_00253044; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253034u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00253034u) [[unlikely]] return; }
L_00253034:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253044u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00253044u) [[unlikely]] return; }
L_00253044:
    st32((c.r[17].w[0] + 8u), 0u);
    c.budget -= 1;
L_00253048:
    set32(c.r[18], c.r[18].w[0] + 1u);
    st8((c.r[17].w[0] + 12u), static_cast<std::uint8_t>(c.r[22].w[0]));
    c.budget -= 2;
L_00253050:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] << 2);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00252CACu | kUnwind; return; } goto L_00252CAC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00253158; } }
L_00253068:
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[18], ld32((c.r[2].w[0])));  if (t) { goto L_002530A8; } }
    c.r[3].d[0] = ld16((c.r[18].w[0] + 8u));
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = c.r[3].d[0] & 6ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; st32((c.r[16].w[0] + 36u), c.r[3].w[0]);  if (t) { goto L_002530A0; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.f[0] = ld32((c.r[18].w[0] + 12u));  goto L_002530A4; }
    st32((c.r[16].w[0] + 36u), 0u);
    c.budget -= 1;
L_002530A0:
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    c.budget -= 1;
L_002530A4:
    st32((c.r[16].w[0] + 40u), c.f[0]);
    c.budget -= 1;
L_002530A8:
    set32(c.r[2], ld32((c.r[29].w[0] + 148u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0])));
    c.budget -= 5;
    if (c.r[19].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00253158; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00253154; } }
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[25], ld32((c.r[18].w[0])));  goto L_002530D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0025310C; } }
L_002530D4:
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002530E0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002530E0u) [[unlikely]] return; }
L_002530E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 13512u);  if (t) { goto L_002530FC; } }
L_002530EC:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_002530FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_00253108; } }
L_002530FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002530ECu | kUnwind; return; } goto L_002530EC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00253108:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_0025310C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00253154; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 36u));
    set32(c.r[3], 0u - 7u);
    c.r[7].d[0] = ld16((c.r[18].w[0] + 8u));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st16((c.r[18].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    st32((c.r[18].w[0] + 12u), c.f[0]);
    c.r[2].d[0] = ld16((c.r[18].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] & 65519ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253154u); st16((c.r[18].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0055(c, 273u, depth + 1u); else { c.pc = 0x002562A0u; return; } if (c.pc != 0x00253154u) [[unlikely]] return; }
L_00253154:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00253158:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 138u));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 132u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00253068u | kUnwind; return; } goto L_00253068; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00253188; } }
L_00253170:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253184u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x00253184u) [[unlikely]] return; }
L_00253184:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00253188:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 154u));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 148u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00253170u | kUnwind; return; } goto L_00253170; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[2], c.r[2].w[0] - 4752u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00240000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00220000u);
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 27472u);
    set32(c.r[6], c.r[6].w[0] - 12752u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002531C0u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_00A5(c, 164u, depth + 1u); else { c.pc = 0x00397FD0u; return; } if (c.pc != 0x002531C0u) [[unlikely]] return; }
L_002531C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 148u)));
    set32(c.r[2], c.r[2].w[0] + 480u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002531D8u); st32((c.r[29].w[0] + 144u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002531D8u) [[unlikely]] return; }
L_002531D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_002531DC:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00253200:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00253260; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 464u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00253244; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 480u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253244u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x00253244u) [[unlikely]] return; }
L_00253244:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00253264; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253260u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00253260u) [[unlikely]] return; }
L_00253260:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00253264:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00253280:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_002532D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 480u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002532B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 96u, depth + 1u); else { c.pc = 0x0021CFD0u; return; } if (c.pc != 0x002532B4u) [[unlikely]] return; }
L_002532B4:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_002532D4; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002532D0u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x002532D0u) [[unlikely]] return; }
L_002532D0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002532D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002532F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0025337C; } }
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025331Cu); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x0025331Cu) [[unlikely]] return; }
L_0025331C:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 6;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_00253380; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025334Cu); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0025334Cu) [[unlikely]] return; }
L_0025334C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025335Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0025335Cu) [[unlikely]] return; }
L_0025335C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0025337C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025337Cu); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x0025337Cu) [[unlikely]] return; }
L_0025337C:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00253380:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002533A0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002533CCu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_006E(c, 427u, depth + 1u); else { c.pc = 0x002BB310u; return; } if (c.pc != 0x002533CCu) [[unlikely]] return; }
L_002533CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x0A010000u);
    c.r[1].d[0] = c.r[1].d[0] | 104ull;
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00253508; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002533ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x002533ECu) [[unlikely]] return; }
L_002533EC:
    set32(c.r[19], ld32((c.r[17].w[0] + 32u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[19].d[0] == c.r[18].d[0]) { c.r[21].d[0] = 0ull + 0ull;  goto L_002534F0; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[17].w[0] + 32u), c.r[18].w[0]);  goto L_0025343C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025340Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0025340Cu) [[unlikely]] return; }
L_0025340C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025341Cu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0025341Cu) [[unlikely]] return; }
L_0025341C:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00253438; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00253438u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00253438u) [[unlikely]] return; }
L_00253438:
    st32((c.r[17].w[0] + 32u), c.r[18].w[0]);
    c.budget -= 1;
L_0025343C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0025345C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025344Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0025344Cu) [[unlikely]] return; }
L_0025344C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025345Cu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0025345Cu) [[unlikely]] return; }
L_0025345C:
    c.r[21].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002534F0; } }
L_00253468:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253470u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x00253470u) [[unlikely]] return; }
L_00253470:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[4], c.r[21].w[0] << 4);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[20], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[20].d[0] == c.r[19].d[0]; set32(c.r[18], c.r[3].w[0] + 4u);  if (t) { goto L_002534EC; } }
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { st32((c.r[18].w[0]), c.r[19].w[0]);  goto L_002534CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025349Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0025349Cu) [[unlikely]] return; }
L_0025349C:
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002534ACu); st32((c.r[20].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002534ACu) [[unlikely]] return; }
L_002534AC:
    set32(c.r[3], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002534C8; } }
    set32(c.r[25], ld32((c.r[20].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002534C8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002534C8u) [[unlikely]] return; }
L_002534C8:
    st32((c.r[18].w[0]), c.r[19].w[0]);
    c.budget -= 1;
L_002534CC:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[21], c.r[21].w[0] + 1u);  goto L_002534F0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002534DCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002534DCu) [[unlikely]] return; }
L_002534DC:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002534ECu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002534ECu) [[unlikely]] return; }
L_002534EC:
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 1;
L_002534F0:
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[3].d[0] = c.r[21].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00253468u | kUnwind; return; } goto L_00253468; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_00253594; } }
L_00253508:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253510u);  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x00253510u) [[unlikely]] return; }
L_00253510:
    set32(c.r[19], ld32((c.r[17].w[0] + 32u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[19].d[0] == c.r[18].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00253584; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { st32((c.r[17].w[0] + 32u), c.r[18].w[0]);  goto L_00253560; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253530u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00253530u) [[unlikely]] return; }
L_00253530:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253540u); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00253540u) [[unlikely]] return; }
L_00253540:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025355C; } }
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025355Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025355Cu) [[unlikely]] return; }
L_0025355C:
    st32((c.r[17].w[0] + 32u), c.r[18].w[0]);
    c.budget -= 1;
L_00253560:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00253580; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253570u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00253570u) [[unlikely]] return; }
L_00253570:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253580u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00253580u) [[unlikely]] return; }
L_00253580:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00253584:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025358Cu);  if (depth < kMaxDepth) unit_0083(c, 115u, depth + 1u); else { c.pc = 0x0030CCB0u; return; } if (c.pc != 0x0025358Cu) [[unlikely]] return; }
L_0025358C:
    st32((c.r[17].w[0] + 64u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 2;
L_00253594:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002535C0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002535F4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_006E(c, 428u, depth + 1u); else { c.pc = 0x002BB320u; return; } if (c.pc != 0x002535F4u) [[unlikely]] return; }
L_002535F4:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x0A010000u);
    c.r[1].d[0] = c.r[1].d[0] | 104ull;
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x14010000u);  goto L_002537EC; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253618u); set32(c.r[5], c.r[20].w[0] + 8u);  if (depth < kMaxDepth) unit_0081(c, 672u, depth + 1u); else { c.pc = 0x00307FD0u; return; } if (c.pc != 0x00253618u) [[unlikely]] return; }
L_00253618:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253624u); set32(c.r[5], c.r[20].w[0] + 112u);  if (depth < kMaxDepth) unit_0081(c, 672u, depth + 1u); else { c.pc = 0x00307FD0u; return; } if (c.pc != 0x00253624u) [[unlikely]] return; }
L_00253624:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025362Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 118u, depth + 1u); else { c.pc = 0x0030CD50u; return; } if (c.pc != 0x0025362Cu) [[unlikely]] return; }
L_0025362C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253638u); set32(c.r[5], c.r[20].w[0] + 12u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x00253638u) [[unlikely]] return; }
L_00253638:
    set32(c.r[2], 0u + 12u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[20].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[2], c.r[16].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253654u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x00253654u) [[unlikely]] return; }
L_00253654:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00250000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00250000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 18624u);
    set32(c.r[6], c.r[6].w[0] + 18384u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253674u); set32(c.r[7], 0u + 16u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x00253674u) [[unlikely]] return; }
L_00253674:
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253694u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x00253694u) [[unlikely]] return; }
L_00253694:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00250000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00250000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 16064u);
    set32(c.r[6], c.r[6].w[0] + 15440u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002536B4u); set32(c.r[7], 0u + 20u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002536B4u) [[unlikely]] return; }
L_002536B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[21], ld32((c.r[3].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_002537D4; } }
L_002536C8:
    set32(c.r[5], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002536D4u); st32((c.r[29].w[0] + 152u), c.r[21].w[0]);  if (depth < kMaxDepth) unit_0081(c, 672u, depth + 1u); else { c.pc = 0x00307FD0u; return; } if (c.pc != 0x002536D4u) [[unlikely]] return; }
L_002536D4:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[16], ld32((c.r[29].w[0] + 152u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 9;
    if (c.r[2].d[0] == c.r[16].d[0]) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00253774; }
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[21].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_0025371C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253708u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00253708u) [[unlikely]] return; }
L_00253708:
    set32(c.r[2], ld32((c.r[16].w[0] - 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253718u); st32((c.r[16].w[0] - 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00253718u) [[unlikely]] return; }
L_00253718:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_0025371C:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[21].d[0]) { st32((c.r[17].w[0]), c.r[16].w[0]);  goto L_00253770; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[22], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025373Cu); set32(c.r[23], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0025373Cu) [[unlikely]] return; }
L_0025373C:
    set32(c.r[2], ld32((c.r[22].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025374Cu); st32((c.r[22].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0025374Cu) [[unlikely]] return; }
L_0025374C:
    set32(c.r[3], ld32((c.r[22].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0025376C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025376Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x0025376Cu) [[unlikely]] return; }
L_0025376C:
    st32((c.r[17].w[0]), c.r[16].w[0]);
    c.budget -= 1;
L_00253770:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00253774:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0025377Cu);  if (depth < kMaxDepth) unit_0083(c, 118u, depth + 1u); else { c.pc = 0x0030CD50u; return; } if (c.pc != 0x0025377Cu) [[unlikely]] return; }
L_0025377C:
    set32(c.r[3], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[21].d[0]) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_002537D4; }
    set32(c.r[16], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002537A0u); set32(c.r[17], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002537A0u) [[unlikely]] return; }
L_002537A0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002537B0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002537B0u) [[unlikely]] return; }
L_002537B0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002537D0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002537D0u); set32(c.r[5], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x002537D0u) [[unlikely]] return; }
L_002537D0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002537D4:
    set32(c.r[3], ld32((c.r[20].w[0] + 12u)));
    c.r[3].d[0] = c.r[18].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x002536C8u | kUnwind; return; } goto L_002536C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_00253C1C; } }
L_002537EC:
    c.r[1].d[0] = c.r[1].d[0] | 1ull;
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00253810; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253808u); set32(c.r[5], c.r[20].w[0] + 8u);  if (depth < kMaxDepth) unit_0081(c, 672u, depth + 1u); else { c.pc = 0x00307FD0u; return; } if (c.pc != 0x00253808u) [[unlikely]] return; }
L_00253808:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0025381C; } }
L_00253810:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253818u); set32(c.r[5], c.r[20].w[0] + 8u);  if (depth < kMaxDepth) unit_0082(c, 20u, depth + 1u); else { c.pc = 0x00308230u; return; } if (c.pc != 0x00253818u) [[unlikely]] return; }
L_00253818:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0025381C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253824u); set32(c.r[5], c.r[20].w[0] + 12u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x00253824u) [[unlikely]] return; }
L_00253824:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253830u); set32(c.r[5], c.r[20].w[0] + 16u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x00253830u) [[unlikely]] return; }
L_00253830:
    set32(c.r[16], ld32((c.r[20].w[0] + 12u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[16].w[0] << 4);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253844u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x00253844u) [[unlikely]] return; }
L_00253844:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00250000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00250000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 18624u);
    set32(c.r[6], c.r[6].w[0] + 18384u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253864u); set32(c.r[7], 0u + 16u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x00253864u) [[unlikely]] return; }
L_00253864:
    st32((c.r[20].w[0] + 20u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], ld32((c.r[20].w[0] + 12u)));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253884u); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x00253884u) [[unlikely]] return; }
L_00253884:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00250000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00250000u);
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 16064u);
    set32(c.r[6], c.r[6].w[0] + 15440u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002538A4u); set32(c.r[7], 0u + 20u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x002538A4u) [[unlikely]] return; }
L_002538A4:
    st32((c.r[20].w[0] + 24u), c.r[2].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 148u), 0u);  if (t) { goto L_00253A00; } }
L_002538B4:
    set32(c.r[3], c.r[16].w[0] << 4);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002538C4u); set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0083(c, 116u, depth + 1u); else { c.pc = 0x0030CD00u; return; } if (c.pc != 0x002538C4u) [[unlikely]] return; }
L_002538C4:
    set32(c.r[21], ld32((c.r[18].w[0])));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[21].d[0] == c.r[17].d[0]) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00253938; }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { st32((c.r[18].w[0]), c.r[17].w[0]);  goto L_00253914; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002538E4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002538E4u) [[unlikely]] return; }
L_002538E4:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002538F4u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002538F4u) [[unlikely]] return; }
L_002538F4:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00253910; } }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00253910u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00253910u) [[unlikely]] return; }
L_00253910:
    st32((c.r[18].w[0]), c.r[17].w[0]);
    c.budget -= 1;
L_00253914:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00253934; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253924u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00253924u) [[unlikely]] return; }
L_00253924:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253934u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00253934u) [[unlikely]] return; }
L_00253934:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00253938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253940u);  if (depth < kMaxDepth) unit_0083(c, 116u, depth + 1u); else { c.pc = 0x0030CD00u; return; } if (c.pc != 0x00253940u) [[unlikely]] return; }
L_00253940:
    set32(c.r[21], ld32((c.r[18].w[0] + 4u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[21].d[0] == c.r[17].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 20u)));  goto L_002539B4; }
    c.budget -= 2;
    if (c.r[21].d[0] == 0ull) { st32((c.r[18].w[0] + 4u), c.r[17].w[0]);  goto L_00253990; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253960u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00253960u) [[unlikely]] return; }
L_00253960:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253970u); st32((c.r[21].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00253970u) [[unlikely]] return; }
L_00253970:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0025398C; } }
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0025398Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0025398Cu) [[unlikely]] return; }
L_0025398C:
    st32((c.r[18].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 1;
L_00253990:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002539B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002539A0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x002539A0u) [[unlikely]] return; }
L_002539A0:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002539B0u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x002539B0u) [[unlikely]] return; }
L_002539B0:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 1;
L_002539B4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x0A010000u);
    c.r[1].d[0] = c.r[1].d[0] | 111ull;
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], c.r[16].w[0] << 2);  goto L_002539E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002539D0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 116u, depth + 1u); else { c.pc = 0x0030CD00u; return; } if (c.pc != 0x002539D0u) [[unlikely]] return; }
L_002539D0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002539DCu); set32(c.r[5], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_003D(c, 390u, depth + 1u); else { c.pc = 0x001F71C0u; return; } if (c.pc != 0x002539DCu) [[unlikely]] return; }
L_002539DC:
    set32(c.r[3], c.r[16].w[0] << 2);
    c.budget -= 1;
L_002539E0:
    set32(c.r[2], ld32((c.r[20].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[6], c.r[29].w[0] + 148u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002539FCu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0055(c, 144u, depth + 1u); else { c.pc = 0x00255020u; return; } if (c.pc != 0x002539FCu) [[unlikely]] return; }
L_002539FC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00253A00:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.r[2].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[20].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x002538B4u | kUnwind; return; } goto L_002538B4; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253A1Cu); set32(c.r[5], c.r[20].w[0] + 28u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x00253A1Cu) [[unlikely]] return; }
L_00253A1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253A24u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 118u, depth + 1u); else { c.pc = 0x0030CD50u; return; } if (c.pc != 0x00253A24u) [[unlikely]] return; }
L_00253A24:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253A30u); set32(c.r[5], c.r[20].w[0] + 36u);  if (depth < kMaxDepth) unit_0056(c, 120u, depth + 1u); else { c.pc = 0x00258C10u; return; } if (c.pc != 0x00253A30u) [[unlikely]] return; }
L_00253A30:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253A3Cu); set32(c.r[5], c.r[20].w[0] + 40u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x00253A3Cu) [[unlikely]] return; }
L_00253A3C:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x0A030000u);
    c.r[1].d[0] = c.r[1].d[0] | 1ull;
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00253A64; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253A60u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x00253A60u) [[unlikely]] return; }
L_00253A60:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00253A64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253A6Cu); set32(c.r[5], c.r[20].w[0] + 44u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x00253A6Cu) [[unlikely]] return; }
L_00253A6C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253A78u); set32(c.r[5], c.r[20].w[0] + 48u);  if (depth < kMaxDepth) unit_003D(c, 391u, depth + 1u); else { c.pc = 0x001F71D0u; return; } if (c.pc != 0x00253A78u) [[unlikely]] return; }
L_00253A78:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x0A010000u);
    c.r[1].d[0] = c.r[1].d[0] | 107ull;
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00253AA0; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253A9Cu); set32(c.r[5], c.r[29].w[0] + 159u);  if (depth < kMaxDepth) unit_003D(c, 359u, depth + 1u); else { c.pc = 0x001F6E00u; return; } if (c.pc != 0x00253A9Cu) [[unlikely]] return; }
L_00253A9C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00253AA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253AA8u);  if (depth < kMaxDepth) unit_0083(c, 118u, depth + 1u); else { c.pc = 0x0030CD50u; return; } if (c.pc != 0x00253AA8u) [[unlikely]] return; }
L_00253AA8:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x14010000u);
    c.r[1].d[0] = c.r[1].d[0] | 1ull;
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00253AD4; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253ACCu); set32(c.r[5], c.r[20].w[0] + 112u);  if (depth < kMaxDepth) unit_0081(c, 672u, depth + 1u); else { c.pc = 0x00307FD0u; return; } if (c.pc != 0x00253ACCu) [[unlikely]] return; }
L_00253ACC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[19].w[0] + 20u)));  if (t) { goto L_00253AE0; } }
L_00253AD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253ADCu); set32(c.r[5], c.r[20].w[0] + 112u);  if (depth < kMaxDepth) unit_0082(c, 20u, depth + 1u); else { c.pc = 0x00308230u; return; } if (c.pc != 0x00253ADCu) [[unlikely]] return; }
L_00253ADC:
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 1;
L_00253AE0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x14030000u);
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 20u)));  goto L_00253B04; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253B00u); set32(c.r[5], c.r[20].w[0] + 120u);  if (depth < kMaxDepth) unit_003D(c, 360u, depth + 1u); else { c.pc = 0x001F6E10u; return; } if (c.pc != 0x00253B00u) [[unlikely]] return; }
L_00253B00:
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 1;
L_00253B04:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x0A010000u);
    c.r[3].d[0] = c.r[3].d[0] | 113ull;
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[16], ld32((c.r[20].w[0] + 108u)));  goto L_00253BB0; }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x14010000u);
    c.r[1].d[0] = c.r[1].d[0] | 1ull;
    c.r[1].d[0] = c.r[4].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00253BAC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253B34u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0083(c, 116u, depth + 1u); else { c.pc = 0x0030CD00u; return; } if (c.pc != 0x00253B34u) [[unlikely]] return; }
L_00253B34:
    set32(c.r[17], ld32((c.r[20].w[0] + 108u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[16].d[0];  if (t) { goto L_00253C18; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[20].w[0] + 108u), c.r[16].w[0]);  goto L_00253B84; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253B54u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00253B54u) [[unlikely]] return; }
L_00253B54:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253B64u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00253B64u) [[unlikely]] return; }
L_00253B64:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00253B80; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00253B80u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00253B80u) [[unlikely]] return; }
L_00253B80:
    st32((c.r[20].w[0] + 108u), c.r[16].w[0]);
    c.budget -= 1;
L_00253B84:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00253C18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253B94u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00253B94u) [[unlikely]] return; }
L_00253B94:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253BA4u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00253BA4u) [[unlikely]] return; }
L_00253BA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00253C18; } }
L_00253BAC:
    set32(c.r[16], ld32((c.r[20].w[0] + 108u)));
    c.budget -= 1;
L_00253BB0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00253C18; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_00253BF8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253BC8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00253BC8u) [[unlikely]] return; }
L_00253BC8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253BD8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00253BD8u) [[unlikely]] return; }
L_00253BD8:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00253BF4; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00253BF4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00253BF4u) [[unlikely]] return; }
L_00253BF4:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00253BF8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[20].w[0] + 108u), 0u);  if (t) { goto L_00253C18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253C08u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00253C08u) [[unlikely]] return; }
L_00253C08:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253C18u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00253C18u) [[unlikely]] return; }
L_00253C18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_00253C1C:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00253C50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00253E94; } }
    set32(c.r[2], c.r[17].w[0] + 16u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 12u);  goto L_00253CE0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00253CDC; } }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253CACu); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00253CACu) [[unlikely]] return; }
L_00253CAC:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253CBCu); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00253CBCu) [[unlikely]] return; }
L_00253CBC:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00253CDC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253CDCu); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00253CDCu) [[unlikely]] return; }
L_00253CDC:
    set32(c.r[2], c.r[17].w[0] + 12u);
    c.budget -= 1;
L_00253CE0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 8u);  goto L_00253D48; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00253D44; } }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253D14u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00253D14u) [[unlikely]] return; }
L_00253D14:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253D24u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00253D24u) [[unlikely]] return; }
L_00253D24:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00253D44; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253D44u); set32(c.r[5], c.r[17].w[0] + 12u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00253D44u) [[unlikely]] return; }
L_00253D44:
    set32(c.r[2], c.r[17].w[0] + 8u);
    c.budget -= 1;
L_00253D48:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 4u);  goto L_00253DB0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00253DAC; } }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253D7Cu); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00253D7Cu) [[unlikely]] return; }
L_00253D7C:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253D8Cu); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00253D8Cu) [[unlikely]] return; }
L_00253D8C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00253DAC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253DACu); set32(c.r[5], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00253DACu) [[unlikely]] return; }
L_00253DAC:
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_00253DB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00253E14; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00253E14; } }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253DE4u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00253DE4u) [[unlikely]] return; }
L_00253DE4:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253DF4u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00253DF4u) [[unlikely]] return; }
L_00253DF4:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00253E14; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253E14u); set32(c.r[5], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00253E14u) [[unlikely]] return; }
L_00253E14:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00253E7C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00253E78; } }
    set32(c.r[18], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253E48u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00253E48u) [[unlikely]] return; }
L_00253E48:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253E58u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00253E58u) [[unlikely]] return; }
L_00253E58:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00253E78; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253E78u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00253E78u) [[unlikely]] return; }
L_00253E78:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00253E7C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00253E98; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253E94u); set32(c.r[5], 0u + 20u);  if (depth < kMaxDepth) unit_0047(c, 87u, depth + 1u); else { c.pc = 0x0021CE70u; return; } if (c.pc != 0x00253E94u) [[unlikely]] return; }
L_00253E94:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00253E98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00253EC0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[2].w[0] + 20312u)));
    st32((c.r[29].w[0] + 108u), c.r[16].w[0]);
    st32((c.r[29].w[0] + 104u), c.r[16].w[0]);
    st32((c.r[29].w[0] + 100u), c.r[16].w[0]);
    st32((c.r[29].w[0] + 96u), c.r[16].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253EFCu); st32((c.r[29].w[0] + 92u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_004E(c, 172u, depth + 1u); else { c.pc = 0x00239E00u; return; } if (c.pc != 0x00253EFCu) [[unlikely]] return; }
L_00253EFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253F04u); set32(c.r[4], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_004E(c, 172u, depth + 1u); else { c.pc = 0x00239E00u; return; } if (c.pc != 0x00253F04u) [[unlikely]] return; }
L_00253F04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253F0Cu); set32(c.r[4], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_004E(c, 172u, depth + 1u); else { c.pc = 0x00239E00u; return; } if (c.pc != 0x00253F0Cu) [[unlikely]] return; }
L_00253F0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253F14u); set32(c.r[4], c.r[17].w[0] + 12u);  if (depth < kMaxDepth) unit_004E(c, 172u, depth + 1u); else { c.pc = 0x00239E00u; return; } if (c.pc != 0x00253F14u) [[unlikely]] return; }
L_00253F14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253F1Cu); set32(c.r[4], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_004E(c, 172u, depth + 1u); else { c.pc = 0x00239E00u; return; } if (c.pc != 0x00253F1Cu) [[unlikely]] return; }
L_00253F1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253F24u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0055(c, 43u, depth + 1u); else { c.pc = 0x00254540u; return; } if (c.pc != 0x00253F24u) [[unlikely]] return; }
L_00253F24:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253F30u); set32(c.r[5], c.r[29].w[0] + 108u);  if (depth < kMaxDepth) unit_0055(c, 37u, depth + 1u); else { c.pc = 0x00254470u; return; } if (c.pc != 0x00253F30u) [[unlikely]] return; }
L_00253F30:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253F3Cu); set32(c.r[5], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_0055(c, 31u, depth + 1u); else { c.pc = 0x002543A0u; return; } if (c.pc != 0x00253F3Cu) [[unlikely]] return; }
L_00253F3C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253F48u); set32(c.r[5], c.r[29].w[0] + 100u);  if (depth < kMaxDepth) unit_0055(c, 25u, depth + 1u); else { c.pc = 0x002542D0u; return; } if (c.pc != 0x00253F48u) [[unlikely]] return; }
L_00253F48:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253F54u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0055(c, 19u, depth + 1u); else { c.pc = 0x00254200u; return; } if (c.pc != 0x00253F54u) [[unlikely]] return; }
L_00253F54:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253F60u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_0055(c, 13u, depth + 1u); else { c.pc = 0x00254130u; return; } if (c.pc != 0x00253F60u) [[unlikely]] return; }
L_00253F60:
    set32(c.r[2], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[16].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 96u)));  goto L_00253FB8; }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253F84u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00253F84u) [[unlikely]] return; }
L_00253F84:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253F94u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00253F94u) [[unlikely]] return; }
L_00253F94:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00253FB4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253FB4u); set32(c.r[5], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x00253FB4u) [[unlikely]] return; }
L_00253FB4:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 1;
L_00253FB8:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[16].d[0]) { set32(c.r[2], ld32((c.r[29].w[0] + 100u)));  [[clang::musttail]] return unit_0055(c, 3u, depth); }
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    set32(c.r[18], c.r[2].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253FD8u); set32(c.r[19], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00253FD8u) [[unlikely]] return; }
L_00253FD8:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00253FE8u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00253FE8u) [[unlikely]] return; }
L_00253FE8:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_0055(c, 2u, depth); } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
    [[clang::musttail]] return unit_0055(c, 1u, depth);
}

}
