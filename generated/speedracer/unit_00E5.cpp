#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00E5[4096] = {
    1, 0, 2, 3, 0, 4, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0,
    0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0,
    0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0,
    29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0,
    0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0,
    0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43,
    0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0,
    48, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0,
    55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 60,
    0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0,
    0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98,
    0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0,
    105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0,
    111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0,
    0, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0,
    121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0,
    0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0,
    0, 130, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 0,
    0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0,
    140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0,
    147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0,
    0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 159,
    0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0,
    165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0,
    167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0,
    0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0,
    0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 187, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0,
    0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0,
    0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 214,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0,
    0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 225, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0,
    0, 234, 0, 0, 235, 0, 0, 236, 0, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 246, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0,
    0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0,
    0, 259, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267,
    0, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 277,
    0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    283, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 288, 0, 0, 0,
    0, 0, 0, 0, 0, 289, 0, 0, 290, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0,
    0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0,
    306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0,
    0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 316, 0, 0, 0, 0,
    0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0,
    327, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 332, 0, 0, 0, 0, 333, 0, 0, 334, 0, 0, 335, 0, 0, 0, 0, 0, 336, 0,
    0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    340, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0,
    0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0,
    0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0,
    0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 354, 0, 0, 0,
    355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0,
    0, 0, 359, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 368, 0, 0,
    0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0,
    373, 0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 376, 0, 0, 377, 0, 0, 378, 0, 0, 379, 0, 0, 380, 0, 0, 0, 0,
    0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 382, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    385, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0,
    0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 397, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0,
    401, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 413,
    0, 0, 414, 0, 0, 0, 415, 0, 0, 416, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 419,
    0, 0, 420, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0,
    423, 0, 0, 424, 0, 0, 425, 0, 0, 426, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 430, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 435, 0, 436, 0, 0, 0, 0, 437, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 440, 0,
    0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 443, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0,
    0, 446, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 452, 0, 0, 453, 0, 0, 0,
    0, 0, 454, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0,
    464, 0, 0, 0, 0, 0, 465, 0, 0, 466, 0, 0, 0, 467, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 473, 0, 0, 0, 474, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 478, 0,
    0, 0, 0, 479, 0, 0, 0, 480, 0, 0, 481, 0, 482, 0, 0, 0, 0, 483, 0, 0, 0, 484, 0, 0, 485, 0, 0, 0, 0, 486, 0, 0,
    0, 0, 0, 0, 0, 487, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 492, 0, 0, 0,
    493, 0, 0, 0, 494, 0, 0, 495, 0, 0, 496, 0, 0, 497, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 499, 0, 0, 500, 0, 0, 501, 0,
    0, 502, 0, 0, 503, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 506, 0, 0, 507, 0,
    0, 508, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 510, 0, 0, 511, 0, 0, 512, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 516, 0, 0, 0, 517, 0,
};

void unit_00E5(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00494000;
    case 2u: goto L_00494008;
    case 3u: goto L_0049400C;
    case 4u: goto L_00494014;
    case 5u: goto L_00494020;
    case 6u: goto L_00494034;
    case 7u: goto L_0049404C;
    case 8u: goto L_0049407C;
    case 9u: goto L_004940DC;
    case 10u: goto L_004940F8;
    case 11u: goto L_00494104;
    case 12u: goto L_00494128;
    case 13u: goto L_00494134;
    case 14u: goto L_00494170;
    case 15u: goto L_004941A0;
    case 16u: goto L_004941D8;
    case 17u: goto L_004941F0;
    case 18u: goto L_00494208;
    case 19u: goto L_0049421C;
    case 20u: goto L_00494234;
    case 21u: goto L_00494264;
    case 22u: goto L_00494290;
    case 23u: goto L_004942B8;
    case 24u: goto L_004942C8;
    case 25u: goto L_004942DC;
    case 26u: goto L_004942E8;
    case 27u: goto L_00494314;
    case 28u: goto L_00494368;
    case 29u: goto L_00494380;
    case 30u: goto L_00494398;
    case 31u: goto L_004943AC;
    case 32u: goto L_004943C4;
    case 33u: goto L_004943F4;
    case 34u: goto L_00494410;
    case 35u: goto L_00494434;
    case 36u: goto L_00494454;
    case 37u: goto L_00494460;
    case 38u: goto L_00494478;
    case 39u: goto L_0049448C;
    case 40u: goto L_00494498;
    case 41u: goto L_004944A8;
    case 42u: goto L_004944E4;
    case 43u: goto L_004944FC;
    case 44u: goto L_00494510;
    case 45u: goto L_0049451C;
    case 46u: goto L_0049452C;
    case 47u: goto L_00494568;
    case 48u: goto L_00494580;
    case 49u: goto L_00494594;
    case 50u: goto L_004945A0;
    case 51u: goto L_004945B4;
    case 52u: goto L_004945C8;
    case 53u: goto L_004945D4;
    case 54u: goto L_004945F0;
    case 55u: goto L_00494600;
    case 56u: goto L_00494620;
    case 57u: goto L_0049464C;
    case 58u: goto L_00494658;
    case 59u: goto L_00494670;
    case 60u: goto L_0049467C;
    case 61u: goto L_00494694;
    case 62u: goto L_004946A0;
    case 63u: goto L_004946B8;
    case 64u: goto L_004946C4;
    case 65u: goto L_004946DC;
    case 66u: goto L_00494708;
    case 67u: goto L_00494718;
    case 68u: goto L_00494730;
    case 69u: goto L_00494750;
    case 70u: goto L_00494760;
    case 71u: goto L_00494770;
    case 72u: goto L_004947AC;
    case 73u: goto L_004947B8;
    case 74u: goto L_004947D4;
    case 75u: goto L_004947F8;
    case 76u: goto L_00494804;
    case 77u: goto L_00494824;
    case 78u: goto L_00494850;
    case 79u: goto L_00494888;
    case 80u: goto L_004948A0;
    case 81u: goto L_004948B8;
    case 82u: goto L_004948CC;
    case 83u: goto L_004948E4;
    case 84u: goto L_00494914;
    case 85u: goto L_00494940;
    case 86u: goto L_00494968;
    case 87u: goto L_004949A0;
    case 88u: goto L_004949B8;
    case 89u: goto L_004949D0;
    case 90u: goto L_004949E4;
    case 91u: goto L_004949FC;
    case 92u: goto L_00494A2C;
    case 93u: goto L_00494A58;
    case 94u: goto L_00494A80;
    case 95u: goto L_00494AB8;
    case 96u: goto L_00494AD0;
    case 97u: goto L_00494AE8;
    case 98u: goto L_00494AFC;
    case 99u: goto L_00494B14;
    case 100u: goto L_00494B44;
    case 101u: goto L_00494B70;
    case 102u: goto L_00494B98;
    case 103u: goto L_00494BD0;
    case 104u: goto L_00494BE8;
    case 105u: goto L_00494C00;
    case 106u: goto L_00494C14;
    case 107u: goto L_00494C2C;
    case 108u: goto L_00494C5C;
    case 109u: goto L_00494C88;
    case 110u: goto L_00494CE8;
    case 111u: goto L_00494D00;
    case 112u: goto L_00494D18;
    case 113u: goto L_00494D2C;
    case 114u: goto L_00494D44;
    case 115u: goto L_00494D74;
    case 116u: goto L_00494D98;
    case 117u: goto L_00494DA4;
    case 118u: goto L_00494DB4;
    case 119u: goto L_00494DC4;
    case 120u: goto L_00494DE8;
    case 121u: goto L_00494E00;
    case 122u: goto L_00494E1C;
    case 123u: goto L_00494E28;
    case 124u: goto L_00494E44;
    case 125u: goto L_00494E50;
    case 126u: goto L_00494E6C;
    case 127u: goto L_00494E78;
    case 128u: goto L_00494E94;
    case 129u: goto L_00494EF0;
    case 130u: goto L_00494F04;
    case 131u: goto L_00494F14;
    case 132u: goto L_00494F24;
    case 133u: goto L_00494F48;
    case 134u: goto L_00494F60;
    case 135u: goto L_00494F6C;
    case 136u: goto L_00494F90;
    case 137u: goto L_00494FC4;
    case 138u: goto L_00494FD8;
    case 139u: goto L_00494FEC;
    case 140u: goto L_00495000;
    case 141u: goto L_0049502C;
    case 142u: goto L_00495050;
    case 143u: goto L_00495098;
    case 144u: goto L_004950A4;
    case 145u: goto L_004950B0;
    case 146u: goto L_004950E0;
    case 147u: goto L_00495100;
    case 148u: goto L_00495138;
    case 149u: goto L_0049515C;
    case 150u: goto L_00495178;
    case 151u: goto L_004951B0;
    case 152u: goto L_004951D4;
    case 153u: goto L_004951F0;
    case 154u: goto L_0049520C;
    case 155u: goto L_00495218;
    case 156u: goto L_00495234;
    case 157u: goto L_0049525C;
    case 158u: goto L_00495268;
    case 159u: goto L_0049527C;
    case 160u: goto L_00495298;
    case 161u: goto L_004952A4;
    case 162u: goto L_004952B8;
    case 163u: goto L_004952D4;
    case 164u: goto L_004952E0;
    case 165u: goto L_00495300;
    case 166u: goto L_0049536C;
    case 167u: goto L_00495380;
    case 168u: goto L_004953A8;
    case 169u: goto L_004953B4;
    case 170u: goto L_004953C4;
    case 171u: goto L_004953CC;
    case 172u: goto L_00495418;
    case 173u: goto L_00495458;
    case 174u: goto L_00495470;
    case 175u: goto L_00495498;
    case 176u: goto L_004954A4;
    case 177u: goto L_004954D8;
    case 178u: goto L_004954F0;
    case 179u: goto L_00495508;
    case 180u: goto L_00495528;
    case 181u: goto L_00495574;
    case 182u: goto L_0049558C;
    case 183u: goto L_00495598;
    case 184u: goto L_004955C0;
    case 185u: goto L_00495600;
    case 186u: goto L_00495634;
    case 187u: goto L_0049563C;
    case 188u: goto L_00495644;
    case 189u: goto L_00495660;
    case 190u: goto L_0049569C;
    case 191u: goto L_004956A8;
    case 192u: goto L_004956B8;
    case 193u: goto L_004956D0;
    case 194u: goto L_004956E4;
    case 195u: goto L_004956F0;
    case 196u: goto L_00495710;
    case 197u: goto L_0049571C;
    case 198u: goto L_0049572C;
    case 199u: goto L_0049573C;
    case 200u: goto L_00495750;
    case 201u: goto L_0049575C;
    case 202u: goto L_004957BC;
    case 203u: goto L_004957C8;
    case 204u: goto L_004957D8;
    case 205u: goto L_004957EC;
    case 206u: goto L_00495820;
    case 207u: goto L_0049583C;
    case 208u: goto L_00495848;
    case 209u: goto L_0049586C;
    case 210u: goto L_00495890;
    case 211u: goto L_004958A0;
    case 212u: goto L_004958D4;
    case 213u: goto L_004958F0;
    case 214u: goto L_004958FC;
    case 215u: goto L_0049593C;
    case 216u: goto L_00495954;
    case 217u: goto L_00495984;
    case 218u: goto L_004959A0;
    case 219u: goto L_004959BC;
    case 220u: goto L_004959C8;
    case 221u: goto L_004959D8;
    case 222u: goto L_004959F0;
    case 223u: goto L_00495A0C;
    case 224u: goto L_00495A24;
    case 225u: goto L_00495A30;
    case 226u: goto L_00495A3C;
    case 227u: goto L_00495A4C;
    case 228u: goto L_00495A98;
    case 229u: goto L_00495AA4;
    case 230u: goto L_00495AB0;
    case 231u: goto L_00495AC4;
    case 232u: goto L_00495AE0;
    case 233u: goto L_00495AF8;
    case 234u: goto L_00495B04;
    case 235u: goto L_00495B10;
    case 236u: goto L_00495B1C;
    case 237u: goto L_00495B28;
    case 238u: goto L_00495B34;
    case 239u: goto L_00495B60;
    case 240u: goto L_00495B98;
    case 241u: goto L_00495BAC;
    case 242u: goto L_00495BC0;
    case 243u: goto L_00495BD8;
    case 244u: goto L_00495BF0;
    case 245u: goto L_00495C24;
    case 246u: goto L_00495C30;
    case 247u: goto L_00495C3C;
    case 248u: goto L_00495C80;
    case 249u: goto L_00495C98;
    case 250u: goto L_00495CB0;
    case 251u: goto L_00495CF0;
    case 252u: goto L_00495D04;
    case 253u: goto L_00495D18;
    case 254u: goto L_00495D28;
    case 255u: goto L_00495D34;
    case 256u: goto L_00495D44;
    case 257u: goto L_00495D6C;
    case 258u: goto L_00495D78;
    case 259u: goto L_00495D84;
    case 260u: goto L_00495D90;
    case 261u: goto L_00495DA0;
    case 262u: goto L_00495DC8;
    case 263u: goto L_00495DD4;
    case 264u: goto L_00495DE0;
    case 265u: goto L_00495DF0;
    case 266u: goto L_00495E20;
    case 267u: goto L_00495E7C;
    case 268u: goto L_00495E8C;
    case 269u: goto L_00495EA4;
    case 270u: goto L_00495EE0;
    case 271u: goto L_00495F38;
    case 272u: goto L_00495F48;
    case 273u: goto L_00495F80;
    case 274u: goto L_00495FB8;
    case 275u: goto L_00495FE4;
    case 276u: goto L_00495FF0;
    case 277u: goto L_00495FFC;
    case 278u: goto L_00496018;
    case 279u: goto L_00496064;
    case 280u: goto L_00496090;
    case 281u: goto L_004960C0;
    case 282u: goto L_004960D0;
    case 283u: goto L_00496100;
    case 284u: goto L_00496110;
    case 285u: goto L_004961B4;
    case 286u: goto L_004961D0;
    case 287u: goto L_00496264;
    case 288u: goto L_00496270;
    case 289u: goto L_00496294;
    case 290u: goto L_004962A0;
    case 291u: goto L_004962AC;
    case 292u: goto L_004962C0;
    case 293u: goto L_004962CC;
    case 294u: goto L_004962DC;
    case 295u: goto L_004963D8;
    case 296u: goto L_00496428;
    case 297u: goto L_00496440;
    case 298u: goto L_00496458;
    case 299u: goto L_0049646C;
    case 300u: goto L_00496484;
    case 301u: goto L_004964B4;
    case 302u: goto L_004964E0;
    case 303u: goto L_0049653C;
    case 304u: goto L_00496554;
    case 305u: goto L_0049656C;
    case 306u: goto L_00496580;
    case 307u: goto L_00496598;
    case 308u: goto L_004965C8;
    case 309u: goto L_00496600;
    case 310u: goto L_00496654;
    case 311u: goto L_0049666C;
    case 312u: goto L_00496684;
    case 313u: goto L_00496698;
    case 314u: goto L_004966B0;
    case 315u: goto L_004966E0;
    case 316u: goto L_004966EC;
    case 317u: goto L_00496708;
    case 318u: goto L_00496740;
    case 319u: goto L_00496790;
    case 320u: goto L_004967A8;
    case 321u: goto L_004967C0;
    case 322u: goto L_004967D4;
    case 323u: goto L_004967EC;
    case 324u: goto L_0049681C;
    case 325u: goto L_00496850;
    case 326u: goto L_00496870;
    case 327u: goto L_00496880;
    case 328u: goto L_00496890;
    case 329u: goto L_004968B0;
    case 330u: goto L_00496904;
    case 331u: goto L_00496928;
    case 332u: goto L_00496934;
    case 333u: goto L_00496948;
    case 334u: goto L_00496954;
    case 335u: goto L_00496960;
    case 336u: goto L_00496978;
    case 337u: goto L_0049699C;
    case 338u: goto L_004969C0;
    case 339u: goto L_004969D8;
    case 340u: goto L_00496A00;
    case 341u: goto L_00496A20;
    case 342u: goto L_00496A64;
    case 343u: goto L_00496A78;
    case 344u: goto L_00496A8C;
    case 345u: goto L_00496AF4;
    case 346u: goto L_00496B10;
    case 347u: goto L_00496B34;
    case 348u: goto L_00496B50;
    case 349u: goto L_00496B74;
    case 350u: goto L_00496B8C;
    case 351u: goto L_00496BB0;
    case 352u: goto L_00496BC0;
    case 353u: goto L_00496BE4;
    case 354u: goto L_00496BF0;
    case 355u: goto L_00496C00;
    case 356u: goto L_00496C3C;
    case 357u: goto L_00496C50;
    case 358u: goto L_00496C6C;
    case 359u: goto L_00496C88;
    case 360u: goto L_00496C94;
    case 361u: goto L_00496CB8;
    case 362u: goto L_00496CC4;
    case 363u: goto L_00496CE4;
    case 364u: goto L_00496CFC;
    case 365u: goto L_00496D48;
    case 366u: goto L_00496D58;
    case 367u: goto L_00496D68;
    case 368u: goto L_00496D74;
    case 369u: goto L_00496D8C;
    case 370u: goto L_00496DBC;
    case 371u: goto L_00496DD0;
    case 372u: goto L_00496DE8;
    case 373u: goto L_00496E00;
    case 374u: goto L_00496E10;
    case 375u: goto L_00496E24;
    case 376u: goto L_00496E3C;
    case 377u: goto L_00496E48;
    case 378u: goto L_00496E54;
    case 379u: goto L_00496E60;
    case 380u: goto L_00496E6C;
    case 381u: goto L_00496E90;
    case 382u: goto L_00496F08;
    case 383u: goto L_00496F20;
    case 384u: goto L_00496F40;
    case 385u: goto L_00496F80;
    case 386u: goto L_00496F90;
    case 387u: goto L_00496FA0;
    case 388u: goto L_00496FB0;
    case 389u: goto L_00496FC0;
    case 390u: goto L_00497028;
    case 391u: goto L_00497040;
    case 392u: goto L_00497060;
    case 393u: goto L_004970A0;
    case 394u: goto L_004970B0;
    case 395u: goto L_004970F8;
    case 396u: goto L_0049710C;
    case 397u: goto L_00497128;
    case 398u: goto L_00497130;
    case 399u: goto L_00497148;
    case 400u: goto L_00497174;
    case 401u: goto L_00497180;
    case 402u: goto L_00497190;
    case 403u: goto L_004971C4;
    case 404u: goto L_00497214;
    case 405u: goto L_0049722C;
    case 406u: goto L_00497244;
    case 407u: goto L_00497258;
    case 408u: goto L_00497270;
    case 409u: goto L_004972A0;
    case 410u: goto L_004972AC;
    case 411u: goto L_004972C4;
    case 412u: goto L_004972E8;
    case 413u: goto L_004972FC;
    case 414u: goto L_00497308;
    case 415u: goto L_00497318;
    case 416u: goto L_00497324;
    case 417u: goto L_0049733C;
    case 418u: goto L_00497360;
    case 419u: goto L_0049737C;
    case 420u: goto L_00497388;
    case 421u: goto L_004973A0;
    case 422u: goto L_004973EC;
    case 423u: goto L_00497400;
    case 424u: goto L_0049740C;
    case 425u: goto L_00497418;
    case 426u: goto L_00497424;
    case 427u: goto L_00497430;
    case 428u: goto L_00497460;
    case 429u: goto L_004974B4;
    case 430u: goto L_004974D0;
    case 431u: goto L_004974DC;
    case 432u: goto L_00497594;
    case 433u: goto L_004975AC;
    case 434u: goto L_004975C4;
    case 435u: goto L_004975DC;
    case 436u: goto L_004975E4;
    case 437u: goto L_004975F8;
    case 438u: goto L_00497634;
    case 439u: goto L_004976DC;
    case 440u: goto L_004976F8;
    case 441u: goto L_00497714;
    case 442u: goto L_00497730;
    case 443u: goto L_00497748;
    case 444u: goto L_00497754;
    case 445u: goto L_00497778;
    case 446u: goto L_00497784;
    case 447u: goto L_00497798;
    case 448u: goto L_004977D0;
    case 449u: goto L_004977F0;
    case 450u: goto L_00497830;
    case 451u: goto L_0049784C;
    case 452u: goto L_00497864;
    case 453u: goto L_00497870;
    case 454u: goto L_00497888;
    case 455u: goto L_004978A0;
    case 456u: goto L_004978BC;
    case 457u: goto L_00497918;
    case 458u: goto L_00497930;
    case 459u: goto L_0049794C;
    case 460u: goto L_00497960;
    case 461u: goto L_004979B0;
    case 462u: goto L_004979D8;
    case 463u: goto L_00497A64;
    case 464u: goto L_00497A80;
    case 465u: goto L_00497A98;
    case 466u: goto L_00497AA4;
    case 467u: goto L_00497AB4;
    case 468u: goto L_00497ABC;
    case 469u: goto L_00497AE0;
    case 470u: goto L_00497B0C;
    case 471u: goto L_00497B34;
    case 472u: goto L_00497B4C;
    case 473u: goto L_00497B84;
    case 474u: goto L_00497B94;
    case 475u: goto L_00497BAC;
    case 476u: goto L_00497BCC;
    case 477u: goto L_00497BDC;
    case 478u: goto L_00497BF8;
    case 479u: goto L_00497C0C;
    case 480u: goto L_00497C1C;
    case 481u: goto L_00497C28;
    case 482u: goto L_00497C30;
    case 483u: goto L_00497C44;
    case 484u: goto L_00497C54;
    case 485u: goto L_00497C60;
    case 486u: goto L_00497C74;
    case 487u: goto L_00497C94;
    case 488u: goto L_00497CA4;
    case 489u: goto L_00497D30;
    case 490u: goto L_00497D40;
    case 491u: goto L_00497D5C;
    case 492u: goto L_00497D70;
    case 493u: goto L_00497D80;
    case 494u: goto L_00497D90;
    case 495u: goto L_00497D9C;
    case 496u: goto L_00497DA8;
    case 497u: goto L_00497DB4;
    case 498u: goto L_00497DC4;
    case 499u: goto L_00497DE0;
    case 500u: goto L_00497DEC;
    case 501u: goto L_00497DF8;
    case 502u: goto L_00497E04;
    case 503u: goto L_00497E10;
    case 504u: goto L_00497E1C;
    case 505u: goto L_00497E60;
    case 506u: goto L_00497E6C;
    case 507u: goto L_00497E78;
    case 508u: goto L_00497E84;
    case 509u: goto L_00497E94;
    case 510u: goto L_00497F08;
    case 511u: goto L_00497F14;
    case 512u: goto L_00497F20;
    case 513u: goto L_00497F3C;
    case 514u: goto L_00497F4C;
    case 515u: goto L_00497FD4;
    case 516u: goto L_00497FE8;
    case 517u: goto L_00497FF8;
    default: bad_entry(c, 0x00494000u); return;
    }
L_00494000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494008u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00494008u) [[unlikely]] return; }
L_00494008:
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_0049400C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00494038; } }
L_00494014:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494020u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x00494020u) [[unlikely]] return; }
L_00494020:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494034u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00494034u) [[unlikely]] return; }
L_00494034:
    st32((c.r[17].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 1;
L_00494038:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049404Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049404Cu) [[unlikely]] return; }
L_0049404C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 170u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 144u), c.r[3].w[0]);  if (t) { goto L_0049407C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[2], c.r[29].w[0] + 148u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.f[2] = ld32((c.r[16].w[0] + 56u));  goto L_00494080; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049407Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049407Cu) [[unlikely]] return; }
L_0049407C:
    c.f[2] = ld32((c.r[16].w[0] + 56u));
    c.budget -= 1;
L_00494080:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[1]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[3] = ld32((c.r[16].w[0] + 56u));  goto L_004940A8; }
    c.f[0] = ld32((c.r[29].w[0] + 336u));
    c.facc = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[20], c.f[2]));
    st32((c.r[29].w[0] + 336u), c.f[0]);
    c.f[3] = ld32((c.r[16].w[0] + 56u));
    c.budget -= 5;
L_004940A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[1] = ld32((c.r[29].w[0] + 336u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.f[2] = c.r[2].w[0];
    c.facc = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[2], c.f[3]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 336u), c.f[0]);  if (t) { goto L_00494144; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004940DCu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x004940DCu) [[unlikely]] return; }
L_004940DC:
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[5], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004940F8u); set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x004940F8u) [[unlikely]] return; }
L_004940F8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494104u); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x00494104u) [[unlikely]] return; }
L_00494104:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 304u);  goto L_0049412C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00494128; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494128u); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x00494128u) [[unlikely]] return; }
L_00494128:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 1;
L_0049412C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494134u); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x00494134u) [[unlikely]] return; }
L_00494134:
    c.f[1] = ld32((c.r[29].w[0] + 336u));
    c.f[0] = ld32((c.r[29].w[0] + 304u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 336u), c.f[0]);
    c.budget -= 4;
L_00494144:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 116u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 136u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[2], 0u + 16u);
    st32((c.r[29].w[0] + 132u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 138u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00494178; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494170u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00494170u) [[unlikely]] return; }
L_00494170:
    set32(c.r[2], c.r[29].w[0] + 116u);
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    c.budget -= 2;
L_00494178:
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    c.f[0] = ld32((c.r[29].w[0] + 336u));
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 340u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 344u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004941A0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x004941A0u) [[unlikely]] return; }
L_004941A0:
    set32(c.r[18], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[5], c.r[29].w[0] + 116u);
    set32(c.r[17], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    set32(c.r[4], c.r[17].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 11;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[19], ld32((c.r[29].w[0] + 116u)));  goto L_004941FC; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004941D8u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004941D8u) [[unlikely]] return; }
L_004941D8:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_004941F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004941F0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004941F0u) [[unlikely]] return; }
L_004941F0:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_004941F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00494220; } }
L_004941FC:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494208u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x00494208u) [[unlikely]] return; }
L_00494208:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049421Cu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0049421Cu) [[unlikely]] return; }
L_0049421C:
    st32((c.r[16].w[0] + 4u), c.r[19].w[0]);
    c.budget -= 1;
L_00494220:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00494234u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00494234u) [[unlikely]] return; }
L_00494234:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 26768u);
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 112u), c.r[4].w[0]);  if (t) { goto L_00494264; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[3], c.r[29].w[0] + 116u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  goto L_00494268; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494264u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00494264u) [[unlikely]] return; }
L_00494264:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_00494268:
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 368u);  c.pc = t; return; }
L_00494290:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 60u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004942B8u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x004942B8u) [[unlikely]] return; }
L_004942B8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004942C8u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004942C8u) [[unlikely]] return; }
L_004942C8:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 116u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004942DCu); set32(c.r[5], c.r[29].w[0] + 80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004942DCu) [[unlikely]] return; }
L_004942DC:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004942E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004942E8u) [[unlikely]] return; }
L_004942E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 100u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 120u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    set32(c.r[2], 0u + 64u);
    st32((c.r[29].w[0] + 116u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0049431C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494314u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00494314u) [[unlikely]] return; }
L_00494314:
    set32(c.r[2], c.r[29].w[0] + 100u);
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    c.budget -= 2;
L_0049431C:
    set32(c.r[3], ld32((c.r[29].w[0] + 116u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[29].w[0] + 100u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[18].w[0] + 120u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 122u)));
    set32(c.r[4], c.r[17].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 16;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[19], ld32((c.r[29].w[0] + 100u)));  goto L_0049438C; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494368u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00494368u) [[unlikely]] return; }
L_00494368:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_00494384; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494380u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00494380u) [[unlikely]] return; }
L_00494380:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_00494384:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_004943B0; } }
L_0049438C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494398u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x00494398u) [[unlikely]] return; }
L_00494398:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004943ACu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004943ACu) [[unlikely]] return; }
L_004943AC:
    st32((c.r[16].w[0] + 4u), c.r[19].w[0]);
    c.budget -= 1;
L_004943B0:
    set32(c.r[25], ld32((c.r[18].w[0] + 60u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004943C4u); set32(c.r[4], c.r[18].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004943C4u) [[unlikely]] return; }
L_004943C4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 122u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 26768u);
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 96u), c.r[4].w[0]);  if (t) { goto L_004943F4; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 116u)));
    set32(c.r[3], c.r[29].w[0] + 100u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_004943F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004943F4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004943F4u) [[unlikely]] return; }
L_004943F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_004943F8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00494410:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494434u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x00494434u) [[unlikely]] return; }
L_00494434:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_004945D8; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 320u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494454u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F4(c, 210u, depth + 1u); else { c.pc = 0x004D1E00u; return; } if (c.pc != 0x00494454u) [[unlikely]] return; }
L_00494454:
    set32(c.r[4], c.r[2].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494460u); set32(c.r[5], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x00494460u) [[unlikely]] return; }
L_00494460:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004944A0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494478u); set32(c.r[5], c.r[5].w[0] - 14560u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00494478u) [[unlikely]] return; }
L_00494478:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 116u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0049448Cu); set32(c.r[5], c.r[29].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0049448Cu) [[unlikely]] return; }
L_0049448C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494498u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00494498u) [[unlikely]] return; }
L_00494498:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004945D4; } }
L_004944A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004944A8u);  if (depth < kMaxDepth) unit_00F4(c, 210u, depth + 1u); else { c.pc = 0x004D1E00u; return; } if (c.pc != 0x004944A8u) [[unlikely]] return; }
L_004944A8:
    set32(c.r[3], c.r[2].w[0] + 48u);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[3].w[0] + 1u);  goto L_004944C0; }
    set32(c.r[6], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_004944C0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[18].w[0] + 4u);  if (t) { goto L_004944D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_004944DC; } }
L_004944D8:
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_004944DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004944E4u); set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));  if (depth < kMaxDepth) unit_00B3(c, 88u, depth + 1u); else { c.pc = 0x003CCD20u; return; } if (c.pc != 0x004944E4u) [[unlikely]] return; }
L_004944E4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00494524; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004944FCu); set32(c.r[5], c.r[5].w[0] - 14540u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004944FCu) [[unlikely]] return; }
L_004944FC:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 116u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00494510u); set32(c.r[5], c.r[29].w[0] + 96u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00494510u) [[unlikely]] return; }
L_00494510:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049451Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049451Cu) [[unlikely]] return; }
L_0049451C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004945D4; } }
L_00494524:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049452Cu);  if (depth < kMaxDepth) unit_00F4(c, 210u, depth + 1u); else { c.pc = 0x004D1E00u; return; } if (c.pc != 0x0049452Cu) [[unlikely]] return; }
L_0049452C:
    set32(c.r[3], c.r[2].w[0] + 48u);
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[3].w[0] + 1u);  goto L_00494544; }
    set32(c.r[6], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 1;
L_00494544:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[18].w[0] + 4u);  if (t) { goto L_0049455C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_00494560; } }
L_0049455C:
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00494560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494568u); set32(c.r[4], ld32((c.r[28].w[0] - 26976u)));  if (depth < kMaxDepth) unit_00B3(c, 78u, depth + 1u); else { c.pc = 0x003CCB90u; return; } if (c.pc != 0x00494568u) [[unlikely]] return; }
L_00494568:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_004945A8; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494580u); set32(c.r[5], c.r[5].w[0] - 14523u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00494580u) [[unlikely]] return; }
L_00494580:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 116u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00494594u); set32(c.r[5], c.r[29].w[0] + 80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00494594u) [[unlikely]] return; }
L_00494594:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004945A0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004945A0u) [[unlikely]] return; }
L_004945A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004945D4; } }
L_004945A8:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004945B4u); set32(c.r[5], c.r[5].w[0] - 14560u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004945B4u) [[unlikely]] return; }
L_004945B4:
    set32(c.r[25], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 116u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004945C8u); set32(c.r[5], c.r[29].w[0] + 64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004945C8u) [[unlikely]] return; }
L_004945C8:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004945D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004945D4u) [[unlikely]] return; }
L_004945D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_004945D8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004945F0:
    st8((c.r[4].w[0] + 92u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 4;
    { c.r[5].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A2160u | kUnwind; return; } [[clang::musttail]] return unit_0028(c, 130u, depth); }
L_00494600:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494620u); set32(c.r[4], c.r[17].w[0] + 40u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x00494620u) [[unlikely]] return; }
L_00494620:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_00494710; }
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.f[12] = ld32((c.r[28].w[0] - 32020u));  goto L_0049463C; }
    set32(c.r[4], c.r[4].w[0] + 72u);
    c.f[12] = ld32((c.r[28].w[0] - 32020u));
    c.budget -= 2;
L_0049463C:
    set32(c.r[5], c.r[17].w[0] + 76u);
    c.f[13] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049464Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 216u, depth + 1u); else { c.pc = 0x00489E00u; return; } if (c.pc != 0x0049464Cu) [[unlikely]] return; }
L_0049464C:
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494658u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x00494658u) [[unlikely]] return; }
L_00494658:
    c.f[13] = ld32((c.r[28].w[0] - 32020u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494670u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_00E2(c, 175u, depth + 1u); else { c.pc = 0x004899C0u; return; } if (c.pc != 0x00494670u) [[unlikely]] return; }
L_00494670:
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049467Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x0049467Cu) [[unlikely]] return; }
L_0049467C:
    c.f[13] = ld32((c.r[28].w[0] - 32020u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494694u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_00E2(c, 175u, depth + 1u); else { c.pc = 0x004899C0u; return; } if (c.pc != 0x00494694u) [[unlikely]] return; }
L_00494694:
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004946A0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x004946A0u) [[unlikely]] return; }
L_004946A0:
    c.f[13] = ld32((c.r[28].w[0] - 32020u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004946B8u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_00E2(c, 175u, depth + 1u); else { c.pc = 0x004899C0u; return; } if (c.pc != 0x004946B8u) [[unlikely]] return; }
L_004946B8:
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004946C4u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x004946C4u) [[unlikely]] return; }
L_004946C4:
    c.f[13] = ld32((c.r[28].w[0] - 32020u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[12] = 0u;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004946DCu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_00E2(c, 175u, depth + 1u); else { c.pc = 0x004899C0u; return; } if (c.pc != 0x004946DCu) [[unlikely]] return; }
L_004946DC:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[17].w[0] + 25u);  goto L_004946F0; }
    set32(c.r[5], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 1;
L_004946F0:
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494708u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00FC(c, 522u, depth + 1u); else { c.pc = 0x004F3D40u; return; } if (c.pc != 0x00494708u) [[unlikely]] return; }
L_00494708:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00494734; } }
L_00494710:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494718u); set32(c.r[4], c.r[17].w[0] + 24u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x00494718u) [[unlikely]] return; }
L_00494718:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00494730; } }
    st8((c.r[17].w[0] + 92u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[17].w[0] + 60u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494730u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x00494730u) [[unlikely]] return; }
L_00494730:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00494734:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00494750:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00494760:
    st8((c.r[4].w[0] + 92u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 4;
    { c.r[5].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001A2160u | kUnwind; return; } [[clang::musttail]] return unit_0028(c, 130u, depth); }
L_00494770:
    set32(c.r[29], c.r[29].w[0] - 304u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[5], c.r[5].w[0] - 14505u);
    set32(c.r[6], c.r[19].w[0] + 4u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004947ACu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0010(c, 434u, depth + 1u); else { c.pc = 0x001433D0u; return; } if (c.pc != 0x004947ACu) [[unlikely]] return; }
L_004947AC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004947B8u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E5(c, 34u, depth + 1u); else { c.pc = 0x00494410u; return; } if (c.pc != 0x004947B8u) [[unlikely]] return; }
L_004947B8:
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 273u);  goto L_004947CC; }
    set32(c.r[5], ld32((c.r[29].w[0] + 280u)));
    c.budget -= 1;
L_004947CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004947D4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E5(c, 22u, depth + 1u); else { c.pc = 0x00494290u; return; } if (c.pc != 0x004947D4u) [[unlikely]] return; }
L_004947D4:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[19].w[0] + 20u);  if (t) { goto L_004947EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_004947F0; } }
L_004947EC:
    set32(c.r[5], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_004947F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004947F8u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E4(c, 635u, depth + 1u); else { c.pc = 0x00493AD0u; return; } if (c.pc != 0x004947F8u) [[unlikely]] return; }
L_004947F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 244u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    c.budget -= 3;
L_00494804:
    st16((c.r[29].w[0] + 264u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    set32(c.r[2], 0u + 64u);
    st32((c.r[29].w[0] + 260u), c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 266u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0049482C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494824u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00494824u) [[unlikely]] return; }
L_00494824:
    set32(c.r[2], c.r[29].w[0] + 244u);
    st32((c.r[29].w[0] + 260u), c.r[2].w[0]);
    c.budget -= 2;
L_0049482C:
    set32(c.r[3], ld32((c.r[29].w[0] + 260u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[20].w[0] + 60u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494850u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x00494850u) [[unlikely]] return; }
L_00494850:
    set32(c.r[18], ld32((c.r[2].w[0] + 120u)));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 76u)));
    set32(c.r[5], c.r[29].w[0] + 244u);
    set32(c.r[4], c.r[18].w[0] << 5);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 266u)));
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 260u)));
    c.budget -= 11;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[17], ld32((c.r[29].w[0] + 244u)));  goto L_004948AC; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494888u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00494888u) [[unlikely]] return; }
L_00494888:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_004948A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004948A0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004948A0u) [[unlikely]] return; }
L_004948A0:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_004948A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_004948D0; } }
L_004948AC:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004948B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004948B8u) [[unlikely]] return; }
L_004948B8:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 260u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004948CCu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004948CCu) [[unlikely]] return; }
L_004948CC:
    st32((c.r[16].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 1;
L_004948D0:
    set32(c.r[25], ld32((c.r[21].w[0] + 60u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004948E4u); set32(c.r[4], c.r[21].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004948E4u) [[unlikely]] return; }
L_004948E4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 266u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 240u), c.r[3].w[0]);  if (t) { goto L_00494914; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 260u)));
    set32(c.r[2], c.r[29].w[0] + 244u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00494914; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494914u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00494914u) [[unlikely]] return; }
L_00494914:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 212u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 232u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[2], 0u + 64u);
    st32((c.r[29].w[0] + 228u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 234u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00494948; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494940u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00494940u) [[unlikely]] return; }
L_00494940:
    set32(c.r[2], c.r[29].w[0] + 212u);
    st32((c.r[29].w[0] + 228u), c.r[2].w[0]);
    c.budget -= 2;
L_00494948:
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[20].w[0] + 60u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494968u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x00494968u) [[unlikely]] return; }
L_00494968:
    set32(c.r[18], ld32((c.r[2].w[0] + 120u)));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 76u)));
    set32(c.r[5], c.r[29].w[0] + 212u);
    set32(c.r[4], c.r[18].w[0] << 5);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 234u)));
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    c.budget -= 11;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[17], ld32((c.r[29].w[0] + 212u)));  goto L_004949C4; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004949A0u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004949A0u) [[unlikely]] return; }
L_004949A0:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_004949BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004949B8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004949B8u) [[unlikely]] return; }
L_004949B8:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_004949BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_004949E8; } }
L_004949C4:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004949D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004949D0u) [[unlikely]] return; }
L_004949D0:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 228u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004949E4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004949E4u) [[unlikely]] return; }
L_004949E4:
    st32((c.r[16].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 1;
L_004949E8:
    set32(c.r[25], ld32((c.r[21].w[0] + 60u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004949FCu); set32(c.r[4], c.r[21].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004949FCu) [[unlikely]] return; }
L_004949FC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 234u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 208u), c.r[3].w[0]);  if (t) { goto L_00494A2C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[2], c.r[29].w[0] + 212u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00494A2C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494A2Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00494A2Cu) [[unlikely]] return; }
L_00494A2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 180u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 200u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], 0u + 64u);
    st32((c.r[29].w[0] + 196u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 202u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00494A60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494A58u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00494A58u) [[unlikely]] return; }
L_00494A58:
    set32(c.r[2], c.r[29].w[0] + 180u);
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    c.budget -= 2;
L_00494A60:
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[20].w[0] + 60u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494A80u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x00494A80u) [[unlikely]] return; }
L_00494A80:
    set32(c.r[18], ld32((c.r[2].w[0] + 120u)));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 76u)));
    set32(c.r[5], c.r[29].w[0] + 180u);
    set32(c.r[4], c.r[18].w[0] << 5);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 202u)));
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 11;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[17], ld32((c.r[29].w[0] + 180u)));  goto L_00494ADC; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494AB8u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00494AB8u) [[unlikely]] return; }
L_00494AB8:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_00494AD4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494AD0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00494AD0u) [[unlikely]] return; }
L_00494AD0:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_00494AD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00494B00; } }
L_00494ADC:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494AE8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x00494AE8u) [[unlikely]] return; }
L_00494AE8:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494AFCu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00494AFCu) [[unlikely]] return; }
L_00494AFC:
    st32((c.r[16].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 1;
L_00494B00:
    set32(c.r[25], ld32((c.r[21].w[0] + 60u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00494B14u); set32(c.r[4], c.r[21].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00494B14u) [[unlikely]] return; }
L_00494B14:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 202u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 176u), c.r[3].w[0]);  if (t) { goto L_00494B44; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 196u)));
    set32(c.r[2], c.r[29].w[0] + 180u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00494B44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494B44u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00494B44u) [[unlikely]] return; }
L_00494B44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 148u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 168u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[2], 0u + 64u);
    st32((c.r[29].w[0] + 164u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 170u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00494B78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494B70u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00494B70u) [[unlikely]] return; }
L_00494B70:
    set32(c.r[2], c.r[29].w[0] + 148u);
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 2;
L_00494B78:
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[4], ld32((c.r[20].w[0] + 60u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494B98u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x00494B98u) [[unlikely]] return; }
L_00494B98:
    set32(c.r[18], ld32((c.r[2].w[0] + 120u)));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 76u)));
    set32(c.r[5], c.r[29].w[0] + 148u);
    set32(c.r[4], c.r[18].w[0] << 5);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 170u)));
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 11;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[17], ld32((c.r[29].w[0] + 148u)));  goto L_00494BF4; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494BD0u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00494BD0u) [[unlikely]] return; }
L_00494BD0:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_00494BEC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494BE8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00494BE8u) [[unlikely]] return; }
L_00494BE8:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_00494BEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00494C18; } }
L_00494BF4:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494C00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x00494C00u) [[unlikely]] return; }
L_00494C00:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494C14u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00494C14u) [[unlikely]] return; }
L_00494C14:
    st32((c.r[16].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 1;
L_00494C18:
    set32(c.r[25], ld32((c.r[21].w[0] + 60u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00494C2Cu); set32(c.r[4], c.r[21].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00494C2Cu) [[unlikely]] return; }
L_00494C2C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 170u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 144u), c.r[3].w[0]);  if (t) { goto L_00494C5C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[2], c.r[29].w[0] + 148u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00494C5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494C5Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00494C5Cu) [[unlikely]] return; }
L_00494C5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 116u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 136u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[2], 0u + 16u);
    st32((c.r[29].w[0] + 132u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 138u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00494C90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494C88u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00494C88u) [[unlikely]] return; }
L_00494C88:
    set32(c.r[2], c.r[29].w[0] + 116u);
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    c.budget -= 2;
L_00494C90:
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    c.f[0] = ld32((c.r[20].w[0] + 76u));
    set32(c.r[5], c.r[29].w[0] + 116u);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 80u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 84u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 60u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    set32(c.r[21], ld32((c.r[3].w[0] + 80u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 124u)));
    set32(c.r[4], c.r[21].w[0] << 5);
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 19;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[17], ld32((c.r[29].w[0] + 116u)));  goto L_00494D0C; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494CE8u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00494CE8u) [[unlikely]] return; }
L_00494CE8:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_00494D04; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494D00u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00494D00u) [[unlikely]] return; }
L_00494D00:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_00494D04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00494D30; } }
L_00494D0C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494D18u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x00494D18u) [[unlikely]] return; }
L_00494D18:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494D2Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00494D2Cu) [[unlikely]] return; }
L_00494D2C:
    st32((c.r[16].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 1;
L_00494D30:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00494D44u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00494D44u) [[unlikely]] return; }
L_00494D44:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 112u), c.r[3].w[0]);  if (t) { goto L_00494D74; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[2], c.r[29].w[0] + 116u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[20].w[0] + 60u)));  goto L_00494D78; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494D74u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00494D74u) [[unlikely]] return; }
L_00494D74:
    set32(c.r[4], ld32((c.r[20].w[0] + 60u)));
    c.budget -= 1;
L_00494D78:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.f[12] = ld32((c.r[28].w[0] - 32020u));  goto L_00494D88; }
    set32(c.r[4], c.r[4].w[0] + 72u);
    c.f[12] = ld32((c.r[28].w[0] - 32020u));
    c.budget -= 2;
L_00494D88:
    set32(c.r[5], c.r[20].w[0] + 64u);
    c.f[13] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494D98u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 216u, depth + 1u); else { c.pc = 0x00489E00u; return; } if (c.pc != 0x00494D98u) [[unlikely]] return; }
L_00494D98:
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494DA4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x00494DA4u) [[unlikely]] return; }
L_00494DA4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[2].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494DB4u); set32(c.r[5], c.r[5].w[0] - 14495u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00494DB4u) [[unlikely]] return; }
L_00494DB4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 303u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494DC4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x00494DC4u) [[unlikely]] return; }
L_00494DC4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 303u));  goto L_00494DEC; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00494DE8; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 303u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494DE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x00494DE8u) [[unlikely]] return; }
L_00494DE8:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 303u));
    c.budget -= 1;
L_00494DEC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[2] = ld32((c.r[19].w[0] + 56u));  goto L_00494E98; }
    set32(c.r[4], ld32((c.r[20].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494E00u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x00494E00u) [[unlikely]] return; }
L_00494E00:
    c.f[13] = ld32((c.r[28].w[0] - 32020u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494E1Cu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_00E2(c, 175u, depth + 1u); else { c.pc = 0x004899C0u; return; } if (c.pc != 0x00494E1Cu) [[unlikely]] return; }
L_00494E1C:
    set32(c.r[4], ld32((c.r[20].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494E28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x00494E28u) [[unlikely]] return; }
L_00494E28:
    c.f[13] = ld32((c.r[28].w[0] - 32020u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494E44u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_00E2(c, 175u, depth + 1u); else { c.pc = 0x004899C0u; return; } if (c.pc != 0x00494E44u) [[unlikely]] return; }
L_00494E44:
    set32(c.r[4], ld32((c.r[20].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494E50u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x00494E50u) [[unlikely]] return; }
L_00494E50:
    c.f[13] = ld32((c.r[28].w[0] - 32020u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494E6Cu); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_00E2(c, 175u, depth + 1u); else { c.pc = 0x004899C0u; return; } if (c.pc != 0x00494E6Cu) [[unlikely]] return; }
L_00494E6C:
    set32(c.r[4], ld32((c.r[20].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494E78u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0028(c, 70u, depth + 1u); else { c.pc = 0x001A0F50u; return; } if (c.pc != 0x00494E78u) [[unlikely]] return; }
L_00494E78:
    c.f[13] = ld32((c.r[28].w[0] - 32020u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494E94u); c.f[14] = c.f[13];  if (depth < kMaxDepth) unit_00E2(c, 175u, depth + 1u); else { c.pc = 0x004899C0u; return; } if (c.pc != 0x00494E94u) [[unlikely]] return; }
L_00494E94:
    c.f[2] = ld32((c.r[19].w[0] + 56u));
    c.budget -= 1;
L_00494E98:
    c.f[1] = ld32((c.r[28].w[0] - 31492u));
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00494EBC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[2].w[0];
    c.budget -= 2;
L_00494EBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[3], ld32((c.r[20].w[0] + 40u)));
    c.f[0] = ld32((c.r[2].w[0] - 14576u));
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.f[12] = fp::add(c.f[0], c.f[2]);  if (t) { goto L_00494EDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[20].w[0] + 48u)));  if (t) { goto L_00494EE0; } }
L_00494EDC:
    set32(c.r[5], c.r[20].w[0] + 41u);
    c.budget -= 1;
L_00494EE0:
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494EF0u); c.r[7].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FC(c, 522u, depth + 1u); else { c.pc = 0x004F3D40u; return; } if (c.pc != 0x00494EF0u) [[unlikely]] return; }
L_00494EF0:
    set32(c.r[2], 0u + 1u);
    st8((c.r[20].w[0] + 92u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494F04u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 364u, depth + 1u); else { c.pc = 0x0043EDA0u; return; } if (c.pc != 0x00494F04u) [[unlikely]] return; }
L_00494F04:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[2].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494F14u); set32(c.r[5], c.r[5].w[0] - 14468u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00494F14u) [[unlikely]] return; }
L_00494F14:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 302u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494F24u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x00494F24u) [[unlikely]] return; }
L_00494F24:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 302u));  goto L_00494F4C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00494F48; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 302u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494F48u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x00494F48u) [[unlikely]] return; }
L_00494F48:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 302u));
    c.budget -= 1;
L_00494F4C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 272u);  goto L_00494F64; }
    set32(c.r[4], ld32((c.r[20].w[0] + 60u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494F60u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0028(c, 130u, depth + 1u); else { c.pc = 0x001A2160u; return; } if (c.pc != 0x00494F60u) [[unlikely]] return; }
L_00494F60:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 1;
L_00494F64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494F6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00494F6Cu) [[unlikely]] return; }
L_00494F6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_00494F90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0049502C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 29776u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494FC4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00FC(c, 507u, depth + 1u); else { c.pc = 0x004F3BE0u; return; } if (c.pc != 0x00494FC4u) [[unlikely]] return; }
L_00494FC4:
    set32(c.r[4], c.r[17].w[0] + 40u);
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 24u);  goto L_00494FDC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494FD8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00494FD8u) [[unlikely]] return; }
L_00494FD8:
    set32(c.r[4], c.r[17].w[0] + 24u);
    c.budget -= 1;
L_00494FDC:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 8u);  goto L_00494FF0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00494FECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00494FECu) [[unlikely]] return; }
L_00494FEC:
    set32(c.r[4], c.r[17].w[0] + 8u);
    c.budget -= 1;
L_00494FF0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00495000; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495000u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00495000u) [[unlikely]] return; }
L_00495000:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00495018; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 22912u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 4;
L_00495018:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00495030; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049502Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0049502Cu) [[unlikely]] return; }
L_0049502C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00495030:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00495050:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 22912u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 29776u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[18].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495098u); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00495098u) [[unlikely]] return; }
L_00495098:
    set32(c.r[4], c.r[16].w[0] + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004950A4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 243u, depth + 1u); else { c.pc = 0x0013E740u; return; } if (c.pc != 0x004950A4u) [[unlikely]] return; }
L_004950A4:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004950B0u); set32(c.r[4], c.r[16].w[0] + 40u);  if (depth < kMaxDepth) unit_000F(c, 243u, depth + 1u); else { c.pc = 0x0013E740u; return; } if (c.pc != 0x004950B0u) [[unlikely]] return; }
L_004950B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 72u), 0u);
    st32((c.r[16].w[0] + 76u), 0u);
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    st8((c.r[16].w[0] + 92u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004950E0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x004950E0u) [[unlikely]] return; }
L_004950E0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[6], c.r[6].w[0] - 14450u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495100u); set32(c.r[7], c.r[7].w[0] - 14431u);  if (depth < kMaxDepth) unit_0027(c, 263u, depth + 1u); else { c.pc = 0x0019FE40u; return; } if (c.pc != 0x00495100u) [[unlikely]] return; }
L_00495100:
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 145u);  goto L_00495114; }
    set32(c.r[4], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 1;
L_00495114:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[29].w[0] + 188u);
    set32(c.r[5], c.r[5].w[0] - 12192u);
    set32(c.r[7], c.r[29].w[0] + 184u);
    set32(c.r[8], c.r[29].w[0] + 180u);
    st32((c.r[29].w[0] + 188u), 0u);
    st32((c.r[29].w[0] + 184u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495138u); st32((c.r[29].w[0] + 180u), 0u);  if (depth < kMaxDepth) unit_00AE(c, 125u, depth + 1u); else { c.pc = 0x003B95E0u; return; } if (c.pc != 0x00495138u) [[unlikely]] return; }
L_00495138:
    c.f[2] = ld32((c.r[29].w[0] + 180u));
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.f[1] = ld32((c.r[29].w[0] + 184u));
    c.r[5].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 188u));
    st32((c.r[16].w[0] + 76u), c.f[0]);
    st32((c.r[16].w[0] + 80u), c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049515Cu); st32((c.r[16].w[0] + 84u), c.f[2]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049515Cu) [[unlikely]] return; }
L_0049515C:
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[6], c.r[6].w[0] - 14430u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495178u); set32(c.r[7], c.r[7].w[0] - 14431u);  if (depth < kMaxDepth) unit_0027(c, 263u, depth + 1u); else { c.pc = 0x0019FE40u; return; } if (c.pc != 0x00495178u) [[unlikely]] return; }
L_00495178:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 129u);  goto L_0049518C; }
    set32(c.r[4], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_0049518C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[5].w[0] - 12192u);
    set32(c.r[7], c.r[29].w[0] + 172u);
    set32(c.r[8], c.r[29].w[0] + 168u);
    st32((c.r[29].w[0] + 176u), 0u);
    st32((c.r[29].w[0] + 172u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004951B0u); st32((c.r[29].w[0] + 168u), 0u);  if (depth < kMaxDepth) unit_00AE(c, 125u, depth + 1u); else { c.pc = 0x003B95E0u; return; } if (c.pc != 0x004951B0u) [[unlikely]] return; }
L_004951B0:
    c.f[2] = ld32((c.r[29].w[0] + 168u));
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.f[1] = ld32((c.r[29].w[0] + 172u));
    c.r[5].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    st32((c.r[16].w[0] + 64u), c.f[0]);
    st32((c.r[16].w[0] + 68u), c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004951D4u); st32((c.r[16].w[0] + 72u), c.f[2]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004951D4u) [[unlikely]] return; }
L_004951D4:
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[6].w[0] - 14412u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004951F0u); set32(c.r[7], c.r[7].w[0] - 14431u);  if (depth < kMaxDepth) unit_0027(c, 263u, depth + 1u); else { c.pc = 0x0019FE40u; return; } if (c.pc != 0x004951F0u) [[unlikely]] return; }
L_004951F0:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 113u);  goto L_00495204; }
    set32(c.r[4], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 1;
L_00495204:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049520Cu); set32(c.r[5], c.r[16].w[0] + 56u);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x0049520Cu) [[unlikely]] return; }
L_0049520C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495218u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00495218u) [[unlikely]] return; }
L_00495218:
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[6], c.r[6].w[0] - 14398u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495234u); set32(c.r[7], c.r[7].w[0] - 14431u);  if (depth < kMaxDepth) unit_0027(c, 263u, depth + 1u); else { c.pc = 0x0019FE40u; return; } if (c.pc != 0x00495234u) [[unlikely]] return; }
L_00495234:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 97u);  goto L_00495248; }
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_00495248:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[16].w[0] + 88u);
    set32(c.r[5], c.r[5].w[0] - 12168u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049525Cu); st32((c.r[16].w[0] + 88u), 0u);  if (depth < kMaxDepth) unit_00AE(c, 125u, depth + 1u); else { c.pc = 0x003B95E0u; return; } if (c.pc != 0x0049525Cu) [[unlikely]] return; }
L_0049525C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495268u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00495268u) [[unlikely]] return; }
L_00495268:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[16].w[0] + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049527Cu); set32(c.r[6], c.r[6].w[0] - 14382u);  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104500u; return; } if (c.pc != 0x0049527Cu) [[unlikely]] return; }
L_0049527C:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 81u);  goto L_00495290; }
    set32(c.r[5], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_00495290:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495298u); set32(c.r[4], c.r[16].w[0] + 24u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x00495298u) [[unlikely]] return; }
L_00495298:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004952A4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004952A4u) [[unlikely]] return; }
L_004952A4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[16].w[0] + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004952B8u); set32(c.r[6], c.r[6].w[0] - 14371u);  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104500u; return; } if (c.pc != 0x004952B8u) [[unlikely]] return; }
L_004952B8:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 65u);  goto L_004952CC; }
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_004952CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004952D4u); set32(c.r[4], c.r[16].w[0] + 40u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004952D4u) [[unlikely]] return; }
L_004952D4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004952E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004952E0u) [[unlikely]] return; }
L_004952E0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00495300:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[4].w[0] + 228u));
    c.f[1] = fp::add(c.f[1], c.f[12]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 228u), c.f[1]);  if (t) { goto L_00495338; } }
    set32(c.r[5], c.r[4].w[0] + 28u);
    set32(c.r[3], c.r[4].w[0] + 124u);
    st32((c.r[4].w[0] + 220u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 224u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 228u), 0u);
    c.budget -= 5;
L_00495338:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_00495370; }
    set32(c.r[5], ld32((c.r[4].w[0] + 220u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 92u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0049536C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 224u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 92u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0049536C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049536Cu);  if (depth < kMaxDepth) unit_00E5(c, 167u, depth + 1u); else { c.pc = 0x00495380u; return; } if (c.pc != 0x0049536Cu) [[unlikely]] return; }
L_0049536C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_00495370:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00495380:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00495418; } }
L_004953A8:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004953B4u); set32(c.r[19], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_0010(c, 299u, depth + 1u); else { c.pc = 0x00142610u; return; } if (c.pc != 0x004953B4u) [[unlikely]] return; }
L_004953B4:
    set32(c.r[4], c.r[29].w[0] + 104u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004953C4u); set32(c.r[6], c.r[19].w[0] + 64u);  if (depth < kMaxDepth) unit_0010(c, 291u, depth + 1u); else { c.pc = 0x00142440u; return; } if (c.pc != 0x004953C4u) [[unlikely]] return; }
L_004953C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004953CCu); set32(c.r[4], c.r[29].w[0] + 104u);  if (depth < kMaxDepth) unit_0010(c, 296u, depth + 1u); else { c.pc = 0x001425D0u; return; } if (c.pc != 0x004953CCu) [[unlikely]] return; }
L_004953CC:
    c.f[3] = ld32((c.r[19].w[0] + 56u));
    c.f[2] = ld32((c.r[28].w[0] - 31492u));
    c.f[1] = ld32((c.r[28].w[0] - 32636u));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[2] = c.f[2] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004953F4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = c.r[3].w[0];
    c.budget -= 2;
L_004953F4:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[16].d[0] = c.r[19].d[0] + 0ull;  goto L_00495418; }
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[4], c.r[29].w[0] + 140u);
    set32(c.r[5], c.r[18].w[0] + 8u);
    set32(c.r[6], c.r[29].w[0] + 136u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495418u); st32((c.r[29].w[0] + 136u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00E5(c, 270u, depth + 1u); else { c.pc = 0x00495EE0u; return; } if (c.pc != 0x00495418u) [[unlikely]] return; }
L_00495418:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0049542C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 24u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004953A8u | kUnwind; return; } goto L_004953A8; }
L_0049542C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0049559C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 25072u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 76u));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  goto L_00495478; }
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], c.r[6].w[0] - 14243u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495458u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00495458u) [[unlikely]] return; }
L_00495458:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[5], c.r[18].w[0] + 8u);
    set32(c.r[4], c.r[29].w[0] + 132u);
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495470u); st32((c.r[29].w[0] + 128u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00E5(c, 270u, depth + 1u); else { c.pc = 0x00495EE0u; return; } if (c.pc != 0x00495470u) [[unlikely]] return; }
L_00495470:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00495598; } }
L_00495478:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + 4u);  if (t) { goto L_0049548C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], ld32((c.r[3].w[0] + 8u)));  if (t) { goto L_00495490; } }
L_0049548C:
    set32(c.r[19], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00495490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495498u);  if (depth < kMaxDepth) unit_00B3(c, 282u, depth + 1u); else { c.pc = 0x003CE3F0u; return; } if (c.pc != 0x00495498u) [[unlikely]] return; }
L_00495498:
    set32(c.r[4], ld32((c.r[2].w[0] + 320u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004954A4u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F4(c, 205u, depth + 1u); else { c.pc = 0x004D1D60u; return; } if (c.pc != 0x004954A4u) [[unlikely]] return; }
L_004954A4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00495500; }
    c.f[1] = ld32((c.r[2].w[0] + 384u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = ld32((c.r[2].w[0] + 388u));  goto L_004954F8; }
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[6], c.r[6].w[0] - 14191u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004954D8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x004954D8u) [[unlikely]] return; }
L_004954D8:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[5], c.r[18].w[0] + 8u);
    set32(c.r[4], c.r[29].w[0] + 124u);
    set32(c.r[6], c.r[29].w[0] + 120u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004954F0u); st32((c.r[29].w[0] + 120u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00E5(c, 270u, depth + 1u); else { c.pc = 0x00495EE0u; return; } if (c.pc != 0x004954F0u) [[unlikely]] return; }
L_004954F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00495598; } }
L_004954F8:
    st32((c.r[2].w[0] + 384u), c.f[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00495500:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495508u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E5(c, 71u, depth + 1u); else { c.pc = 0x00494770u; return; } if (c.pc != 0x00495508u) [[unlikely]] return; }
L_00495508:
    set32(c.r[3], ld32((c.r[18].w[0] + 220u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[2], ld32((c.r[18].w[0] + 224u)));
    set32(c.r[5], c.r[16].w[0] + 36u);
    st32((c.r[18].w[0] + 220u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 224u), c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495528u); st32((c.r[18].w[0] + 228u), 0u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00495528u) [[unlikely]] return; }
L_00495528:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 84u)));  goto L_00495550; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 80u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_00495550:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 24u)));  goto L_00495578; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] + 52u);  if (t) { goto L_00495568; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 81u);  if (t) { goto L_0049556C; } }
L_00495568:
    set32(c.r[4], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_0049556C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495574u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00D4(c, 536u, depth + 1u); else { c.pc = 0x00453F60u; return; } if (c.pc != 0x00495574u) [[unlikely]] return; }
L_00495574:
    set32(c.r[2], ld32((c.r[18].w[0] + 24u)));
    c.budget -= 1;
L_00495578:
    set32(c.r[5], c.r[18].w[0] + 8u);
    set32(c.r[4], c.r[29].w[0] + 116u);
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049558Cu); st32((c.r[29].w[0] + 112u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00E5(c, 270u, depth + 1u); else { c.pc = 0x00495EE0u; return; } if (c.pc != 0x0049558Cu) [[unlikely]] return; }
L_0049558C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495598u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00495598u) [[unlikely]] return; }
L_00495598:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0049559C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_004955C0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 120u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004955D8; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 216u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004955D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004955F0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
L_004955F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00495600:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], c.r[29].w[0] + 40u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], c.r[29].w[0] + 36u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] + 20u);
    set32(c.r[5], c.r[16].w[0] + 8u);
    st32((c.r[29].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495634u); set32(c.r[4], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_00E5(c, 266u, depth + 1u); else { c.pc = 0x00495E20u; return; } if (c.pc != 0x00495634u) [[unlikely]] return; }
L_00495634:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049563Cu); set32(c.r[4], c.r[16].w[0] + 28u);  if (depth < kMaxDepth) unit_00E5(c, 70u, depth + 1u); else { c.pc = 0x00494760u; return; } if (c.pc != 0x0049563Cu) [[unlikely]] return; }
L_0049563C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495644u); set32(c.r[4], c.r[16].w[0] + 124u);  if (depth < kMaxDepth) unit_00E5(c, 70u, depth + 1u); else { c.pc = 0x00494760u; return; } if (c.pc != 0x00495644u) [[unlikely]] return; }
L_00495644:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00495660:
    set32(c.r[29], c.r[29].w[0] - 416u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.f[20] = c.f[12];
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049569Cu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_000F(c, 243u, depth + 1u); else { c.pc = 0x0013E740u; return; } if (c.pc != 0x0049569Cu) [[unlikely]] return; }
L_0049569C:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004956A8u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_000F(c, 243u, depth + 1u); else { c.pc = 0x0013E740u; return; } if (c.pc != 0x004956A8u) [[unlikely]] return; }
L_004956A8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004956B8u); set32(c.r[5], c.r[5].w[0] - 14130u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x004956B8u) [[unlikely]] return; }
L_004956B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 336u);  goto L_004956DC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004956D0u); set32(c.r[5], c.r[5].w[0] - 14127u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x004956D0u) [[unlikely]] return; }
L_004956D0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 12u)));  goto L_004956F8; }
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 1;
L_004956DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004956E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004956E4u) [[unlikely]] return; }
L_004956E4:
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004956F0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004956F0u) [[unlikely]] return; }
L_004956F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_00495B38; } }
L_004956F8:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[20], ld32((c.r[18].w[0] + 24u)));  goto L_00495724; }
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495710u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00495710u) [[unlikely]] return; }
L_00495710:
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049571Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049571Cu) [[unlikely]] return; }
L_0049571C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00495B34; } }
L_00495724:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[18].w[0] + 20u);  if (t) { goto L_0049576C; } }
L_0049572C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049573Cu); set32(c.r[4], c.r[2].w[0] + 12u);  if (depth < kMaxDepth) unit_0000(c, 293u, depth + 1u); else { c.pc = 0x001033C0u; return; } if (c.pc != 0x0049573Cu) [[unlikely]] return; }
L_0049573C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = c.r[20].d[0] << 32;  goto L_00495764; }
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495750u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00495750u) [[unlikely]] return; }
L_00495750:
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049575Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049575Cu) [[unlikely]] return; }
L_0049575C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00495B34; } }
L_00495764:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[20], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 2;
L_0049576C:
    c.r[2].d[0] = c.r[20].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[19].d[0]) { c.r[2].d[0] = c.r[20].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0049572Cu | kUnwind; return; } goto L_0049572C; }
    set32(c.r[3], ld32((c.r[28].w[0] - 25072u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 73u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00495798; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 72u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_00495798:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004957A8; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 74u));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_004957A8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 22676u)));  goto L_004957D0; }
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004957BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004957BCu) [[unlikely]] return; }
L_004957BC:
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004957C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004957C8u) [[unlikely]] return; }
L_004957C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00495B34; } }
L_004957D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004957D8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00F9(c, 217u, depth + 1u); else { c.pc = 0x004E5F30u; return; } if (c.pc != 0x004957D8u) [[unlikely]] return; }
L_004957D8:
    set32(c.r[19], c.r[2].w[0] + 132u);
    set32(c.r[4], c.r[29].w[0] + 320u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004957ECu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x004957ECu) [[unlikely]] return; }
L_004957EC:
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 320u));  goto L_00495804; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 324u)));  if (t) { goto L_0049580C; } }
L_00495804:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_0049580C:
    set32(c.r[6], c.r[2].w[0] - 2u);
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 320u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495820u); set32(c.r[7], 0u + 2u);  if (depth < kMaxDepth) unit_000A(c, 295u, depth + 1u); else { c.pc = 0x0012A6E0u; return; } if (c.pc != 0x00495820u) [[unlikely]] return; }
L_00495820:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 129u);  goto L_00495834; }
    set32(c.r[5], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_00495834:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049583Cu); set32(c.r[4], c.r[29].w[0] + 320u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0049583Cu) [[unlikely]] return; }
L_0049583C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495848u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00495848u) [[unlikely]] return; }
L_00495848:
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_00495860; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 328u)));  if (t) { goto L_00495864; } }
L_00495860:
    set32(c.r[4], c.r[29].w[0] + 321u);
    c.budget -= 1;
L_00495864:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049586Cu);  if (depth < kMaxDepth) unit_000F(c, 339u, depth + 1u); else { c.pc = 0x0013F390u; return; } if (c.pc != 0x0049586Cu) [[unlikely]] return; }
L_0049586C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0])));  goto L_0049595C; }
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 321u);  goto L_00495888; }
    set32(c.r[4], ld32((c.r[29].w[0] + 328u)));
    c.budget -= 1;
L_00495888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495890u); set32(c.r[5], c.r[29].w[0] + 404u);  if (depth < kMaxDepth) unit_000F(c, 313u, depth + 1u); else { c.pc = 0x0013F0D0u; return; } if (c.pc != 0x00495890u) [[unlikely]] return; }
L_00495890:
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004958A0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 268u, depth + 1u); else { c.pc = 0x0013E9F0u; return; } if (c.pc != 0x004958A0u) [[unlikely]] return; }
L_004958A0:
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 304u));  goto L_004958B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 308u)));  if (t) { goto L_004958C0; } }
L_004958B8:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_004958C0:
    set32(c.r[7], c.r[2].w[0] - 3u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 304u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004958D4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 295u, depth + 1u); else { c.pc = 0x0012A6E0u; return; } if (c.pc != 0x004958D4u) [[unlikely]] return; }
L_004958D4:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 113u);  goto L_004958E8; }
    set32(c.r[5], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 1;
L_004958E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004958F0u); set32(c.r[4], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004958F0u) [[unlikely]] return; }
L_004958F0:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004958FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004958FCu) [[unlikely]] return; }
L_004958FC:
    set32(c.r[2], ld32((c.r[29].w[0] + 304u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 305u);  goto L_00495910; }
    set32(c.r[6], ld32((c.r[29].w[0] + 312u)));
    c.budget -= 1;
L_00495910:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[19].w[0] + 1u);  goto L_00495924; }
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_00495924:
    set32(c.r[4], ld32((c.r[28].w[0] - 26332u)));
    set32(c.r[8], c.r[29].w[0] + 336u);
    set32(c.r[7], ld32((c.r[29].w[0] + 404u)));
    set32(c.r[9], c.r[29].w[0] + 352u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049593Cu); set32(c.r[10], c.r[29].w[0] + 412u);  if (depth < kMaxDepth) unit_00BF(c, 95u, depth + 1u); else { c.pc = 0x003FCD40u; return; } if (c.pc != 0x0049593Cu) [[unlikely]] return; }
L_0049593C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 304u);  goto L_0049594C; }
    c.r[20].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 2;
L_0049594C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495954u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00495954u) [[unlikely]] return; }
L_00495954:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00495990; } }
L_0049595C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[19].w[0] + 1u);  goto L_0049596C; }
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_0049596C:
    set32(c.r[4], ld32((c.r[28].w[0] - 26332u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 336u);
    set32(c.r[8], c.r[29].w[0] + 352u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495984u); set32(c.r[9], c.r[29].w[0] + 412u);  if (depth < kMaxDepth) unit_00BF(c, 112u, depth + 1u); else { c.pc = 0x003FCF60u; return; } if (c.pc != 0x00495984u) [[unlikely]] return; }
L_00495984:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00495990; } }
    c.r[20].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00495990:
    c.budget -= 2;
    if (c.r[20].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 368u);  goto L_00495A44; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004959A0u); set32(c.r[4], c.r[29].w[0] + 376u);  if (depth < kMaxDepth) unit_0010(c, 299u, depth + 1u); else { c.pc = 0x00142610u; return; } if (c.pc != 0x004959A0u) [[unlikely]] return; }
L_004959A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 29736u);
    set32(c.r[4], c.r[29].w[0] + 228u);
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004959BCu); set32(c.r[17], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004959BCu) [[unlikely]] return; }
L_004959BC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004959C8u); set32(c.r[4], c.r[29].w[0] + 244u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004959C8u) [[unlikely]] return; }
L_004959C8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[17].w[0] + 36u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004959D8u); set32(c.r[5], c.r[5].w[0] - 14113u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004959D8u) [[unlikely]] return; }
L_004959D8:
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], c.r[17].w[0] + 64u);
    st32((c.r[29].w[0] + 276u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 376u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004959F0u); st32((c.r[29].w[0] + 280u), c.f[20]);  if (depth < kMaxDepth) unit_0010(c, 312u, depth + 1u); else { c.pc = 0x001427C0u; return; } if (c.pc != 0x004959F0u) [[unlikely]] return; }
L_004959F0:
    set32(c.r[2], c.r[18].w[0] + 20u);
    set32(c.r[5], c.r[18].w[0] + 8u);
    st32((c.r[29].w[0] + 396u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 400u);
    set32(c.r[6], c.r[29].w[0] + 396u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495A0Cu); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E5(c, 273u, depth + 1u); else { c.pc = 0x00495F80u; return; } if (c.pc != 0x00495A0Cu) [[unlikely]] return; }
L_00495A0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[29].w[0] + 260u);
    set32(c.r[2], c.r[2].w[0] - 29736u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495A24u); st32((c.r[29].w[0] + 224u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00495A24u) [[unlikely]] return; }
L_00495A24:
    set32(c.r[4], c.r[29].w[0] + 244u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495A30u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00495A30u) [[unlikely]] return; }
L_00495A30:
    set32(c.r[4], c.r[29].w[0] + 228u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495A3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00495A3Cu) [[unlikely]] return; }
L_00495A3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 320u);  if (t) { goto L_00495B14; } }
L_00495A44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495A4Cu);  if (depth < kMaxDepth) unit_0010(c, 299u, depth + 1u); else { c.pc = 0x00142610u; return; } if (c.pc != 0x00495A4Cu) [[unlikely]] return; }
L_00495A4C:
    set32(c.r[2], ld32((c.r[29].w[0] + 352u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[19], ld32((c.r[29].w[0] + 412u)));  if (t) { goto L_00495A64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[20], ld32((c.r[29].w[0] + 360u)));  if (t) { goto L_00495A68; } }
L_00495A64:
    set32(c.r[20], c.r[29].w[0] + 353u);
    c.budget -= 1;
L_00495A68:
    set32(c.r[2], ld32((c.r[29].w[0] + 336u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[29].w[0] + 337u);  goto L_00495A7C; }
    set32(c.r[16], ld32((c.r[29].w[0] + 344u)));
    c.budget -= 1;
L_00495A7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 29736u);
    set32(c.r[4], c.r[29].w[0] + 148u);
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495A98u); set32(c.r[17], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00495A98u) [[unlikely]] return; }
L_00495A98:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495AA4u); set32(c.r[4], c.r[29].w[0] + 164u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00495AA4u) [[unlikely]] return; }
L_00495AA4:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495AB0u); set32(c.r[4], c.r[17].w[0] + 36u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00495AB0u) [[unlikely]] return; }
L_00495AB0:
    st32((c.r[29].w[0] + 196u), c.r[19].w[0]);
    set32(c.r[4], c.r[17].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 368u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495AC4u); st32((c.r[29].w[0] + 200u), c.f[20]);  if (depth < kMaxDepth) unit_0010(c, 312u, depth + 1u); else { c.pc = 0x001427C0u; return; } if (c.pc != 0x00495AC4u) [[unlikely]] return; }
L_00495AC4:
    set32(c.r[2], c.r[18].w[0] + 20u);
    set32(c.r[5], c.r[18].w[0] + 8u);
    st32((c.r[29].w[0] + 388u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 392u);
    set32(c.r[6], c.r[29].w[0] + 388u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495AE0u); c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E5(c, 273u, depth + 1u); else { c.pc = 0x00495F80u; return; } if (c.pc != 0x00495AE0u) [[unlikely]] return; }
L_00495AE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[29].w[0] + 180u);
    set32(c.r[2], c.r[2].w[0] - 29736u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495AF8u); st32((c.r[29].w[0] + 144u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00495AF8u) [[unlikely]] return; }
L_00495AF8:
    set32(c.r[4], c.r[29].w[0] + 164u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495B04u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00495B04u) [[unlikely]] return; }
L_00495B04:
    set32(c.r[4], c.r[29].w[0] + 148u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495B10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00495B10u) [[unlikely]] return; }
L_00495B10:
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 1;
L_00495B14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495B1Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00495B1Cu) [[unlikely]] return; }
L_00495B1C:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495B28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00495B28u) [[unlikely]] return; }
L_00495B28:
    set32(c.r[4], c.r[29].w[0] + 352u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495B34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00495B34u) [[unlikely]] return; }
L_00495B34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_00495B38:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 416u);  c.pc = t; return; }
L_00495B60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00495BD8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[17].w[0] + 36u);
    set32(c.r[2], c.r[2].w[0] - 29736u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00495B98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495B98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00495B98u) [[unlikely]] return; }
L_00495B98:
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 4u);  goto L_00495BB0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495BACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00495BACu) [[unlikely]] return; }
L_00495BAC:
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_00495BB0:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00495BC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495BC0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00495BC0u) [[unlikely]] return; }
L_00495BC0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00495BC4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00495BDC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495BD8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00495BD8u) [[unlikely]] return; }
L_00495BD8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00495BDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00495BF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00495C98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 29752u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 25572u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495C24u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 242u, depth + 1u); else { c.pc = 0x00429800u; return; } if (c.pc != 0x00495C24u) [[unlikely]] return; }
L_00495C24:
    set32(c.r[4], c.r[16].w[0] + 124u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495C30u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00E5(c, 136u, depth + 1u); else { c.pc = 0x00494F90u; return; } if (c.pc != 0x00495C30u) [[unlikely]] return; }
L_00495C30:
    set32(c.r[4], c.r[16].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495C3Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00E5(c, 136u, depth + 1u); else { c.pc = 0x00494F90u; return; } if (c.pc != 0x00495C3Cu) [[unlikely]] return; }
L_00495C3C:
    set32(c.r[5], c.r[16].w[0] + 8u);
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_00495C84; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00495C80; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00495C80; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00495C80; } }
    set32(c.r[2], c.r[16].w[0] + 20u);
    set32(c.r[4], c.r[29].w[0] + 60u);
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 56u);
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[7], c.r[29].w[0] + 52u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495C80u); st32((c.r[29].w[0] + 56u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00E5(c, 266u, depth + 1u); else { c.pc = 0x00495E20u; return; } if (c.pc != 0x00495C80u) [[unlikely]] return; }
L_00495C80:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 1;
L_00495C84:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00495C9C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495C98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00495C98u) [[unlikely]] return; }
L_00495C98:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00495C9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00495CB0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 29752u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[16], c.r[19].w[0] + 8u);
    st32((c.r[4].w[0] + 4u), c.r[18].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495CF0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x00495CF0u) [[unlikely]] return; }
L_00495CF0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_00495D08; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495D04u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x00495D04u) [[unlikely]] return; }
L_00495D04:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_00495D08:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[29].w[0] + 156u), c.r[2].w[0]);  goto L_00495D1C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495D18u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x00495D18u) [[unlikely]] return; }
L_00495D18:
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    c.budget -= 1;
L_00495D1C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495D28u); set32(c.r[5], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_00E5(c, 280u, depth + 1u); else { c.pc = 0x00496090u; return; } if (c.pc != 0x00495D28u) [[unlikely]] return; }
L_00495D28:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495D34u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00495D34u) [[unlikely]] return; }
L_00495D34:
    set32(c.r[6], ld32((c.r[28].w[0] - 29776u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495D44u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104500u; return; } if (c.pc != 0x00495D44u) [[unlikely]] return; }
L_00495D44:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[29].w[0] + 113u);  goto L_00495D58; }
    set32(c.r[7], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 1;
L_00495D58:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[19].w[0] + 28u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495D6Cu); set32(c.r[6], c.r[6].w[0] - 14112u);  if (depth < kMaxDepth) unit_00E5(c, 142u, depth + 1u); else { c.pc = 0x00495050u; return; } if (c.pc != 0x00495D6Cu) [[unlikely]] return; }
L_00495D6C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495D78u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00495D78u) [[unlikely]] return; }
L_00495D78:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495D84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00495D84u) [[unlikely]] return; }
L_00495D84:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495D90u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00495D90u) [[unlikely]] return; }
L_00495D90:
    set32(c.r[6], ld32((c.r[28].w[0] - 29772u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495DA0u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104500u; return; } if (c.pc != 0x00495DA0u) [[unlikely]] return; }
L_00495DA0:
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[29].w[0] + 81u);  goto L_00495DB4; }
    set32(c.r[7], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_00495DB4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 124u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495DC8u); set32(c.r[6], c.r[6].w[0] - 14098u);  if (depth < kMaxDepth) unit_00E5(c, 142u, depth + 1u); else { c.pc = 0x00495050u; return; } if (c.pc != 0x00495DC8u) [[unlikely]] return; }
L_00495DC8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495DD4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00495DD4u) [[unlikely]] return; }
L_00495DD4:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495DE0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00495DE0u) [[unlikely]] return; }
L_00495DE0:
    st32((c.r[19].w[0] + 228u), 0u);
    set32(c.r[4], ld32((c.r[28].w[0] - 25572u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495DF0u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CA(c, 245u, depth + 1u); else { c.pc = 0x00429890u; return; } if (c.pc != 0x00495DF0u) [[unlikely]] return; }
L_00495DF0:
    set32(c.r[2], c.r[19].w[0] + 28u);
    set32(c.r[3], c.r[19].w[0] + 124u);
    st32((c.r[19].w[0] + 220u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 224u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00495E20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], ld32((c.r[7].w[0])));
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.budget -= 13;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00495E5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0]), c.r[3].w[0]);  if (t) { goto L_00495EC4; } }
L_00495E5C:
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { goto L_00495EB0; } }
L_00495E7C:
    set32(c.r[4], c.r[3].w[0] + 8u);
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00495E8Cu); set32(c.r[5], 0u - 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00495E8Cu) [[unlikely]] return; }
L_00495E8C:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_00495EA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495EA4u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00495EA4u) [[unlikely]] return; }
L_00495EA4:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_00495EB0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[4].d[0]) { set32(c.r[25], ld32((c.r[3].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00495E7Cu | kUnwind; return; } goto L_00495E7C; }
    st32((c.r[19].w[0]), c.r[4].w[0]);
    c.budget -= 1;
L_00495EC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00495EE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[6].w[0])));
    set32(c.r[5], 0u - 1u);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[25], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 22;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00495F38u); set32(c.r[4], c.r[16].w[0] + 8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00495F38u) [[unlikely]] return; }
L_00495F38:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  goto L_00495F4C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495F48u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00495F48u) [[unlikely]] return; }
L_00495F48:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_00495F4C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[18].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00495F80:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495FB8u); set32(c.r[4], 0u + 80u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x00495FB8u) [[unlikely]] return; }
L_00495FB8:
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[16], c.r[2].w[0] + 8u);
    set32(c.r[2], c.r[19].w[0] + 8u);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_00496018; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 29736u);
    set32(c.r[5], c.r[17].w[0] + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495FE4u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00495FE4u) [[unlikely]] return; }
L_00495FE4:
    set32(c.r[4], c.r[16].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495FF0u); set32(c.r[5], c.r[17].w[0] + 20u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00495FF0u) [[unlikely]] return; }
L_00495FF0:
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00495FFCu); set32(c.r[5], c.r[17].w[0] + 36u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00495FFCu) [[unlikely]] return; }
L_00495FFC:
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[4], c.r[16].w[0] + 64u);
    set32(c.r[5], c.r[17].w[0] + 64u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 56u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496018u); st32((c.r[16].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_0010(c, 312u, depth + 1u); else { c.pc = 0x001427C0u; return; } if (c.pc != 0x00496018u) [[unlikely]] return; }
L_00496018:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 15;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[20].w[0]), c.r[5].w[0]);  if (t) { goto L_00496064; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_00496068; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496064u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00496064u) [[unlikely]] return; }
L_00496064:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_00496068:
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00496090:
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[4].w[0] + 12u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[5].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[5], ld32((c.r[4].w[0])));
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.r[3].w[0]);  c.pc = t; return; }
L_004960C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 13936u);  c.pc = t; return; }
L_004960D0:
    set32(c.r[5], ld32((c.r[6].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], 0u + 1u);  goto L_004960E8; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 368u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_004960F4; } }
L_004960E8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_004960F4; } }
    st8((c.r[4].w[0] + 368u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_004960F4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00496100:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x001C2D30u | kUnwind; return; } [[clang::musttail]] return unit_0030(c, 290u, depth); }
L_00496110:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 368u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004961BC; } }
    c.f[1] = ld32((c.r[16].w[0] + 352u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[12]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 352u), c.f[1]);  if (t) { goto L_004961BC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 340u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_004961C0; }
    set32(c.r[4], ld32((c.r[16].w[0] + 340u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 344u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 348u)));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 10;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 340u)));  goto L_0049618C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 348u)));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[16].w[0] + 348u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 340u)));
    c.budget -= 4;
L_0049618C:
    set32(c.r[4], ld32((c.r[16].w[0] + 344u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 348u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_004961AC; }
    st32((c.r[16].w[0] + 348u), c.r[4].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_004961AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004961B4u);  if (depth < kMaxDepth) unit_00E5(c, 286u, depth + 1u); else { c.pc = 0x004961D0u; return; } if (c.pc != 0x004961B4u) [[unlikely]] return; }
L_004961B4:
    c.f[0] = ld32((c.r[16].w[0] + 328u));
    st32((c.r[16].w[0] + 352u), c.f[0]);
    c.budget -= 2;
L_004961BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_004961C0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004961D0:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 340u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 344u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 348u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[5].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004966F4; } }
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[5].w[0]));  goto L_00496238; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[5].w[0] + 4u)));  if (t) { goto L_00496240; } }
L_00496238:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_00496240:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_004966F8; }
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496264u); set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x00496264u) [[unlikely]] return; }
L_00496264:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496270u); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x00496270u) [[unlikely]] return; }
L_00496270:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 272u);  goto L_00496298; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00496294; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496294u); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x00496294u) [[unlikely]] return; }
L_00496294:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 1;
L_00496298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004962A0u); set32(c.r[5], c.r[29].w[0] + 256u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x004962A0u) [[unlikely]] return; }
L_004962A0:
    set32(c.r[5], ld32((c.r[16].w[0] + 348u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004962ACu); set32(c.r[4], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004962ACu) [[unlikely]] return; }
L_004962AC:
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 348u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 116u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004962C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004962C0u) [[unlikely]] return; }
L_004962C0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004962CCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 98u, depth + 1u); else { c.pc = 0x001C13D0u; return; } if (c.pc != 0x004962CCu) [[unlikely]] return; }
L_004962CC:
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004962DCu); c.f[22] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 99u, depth + 1u); else { c.pc = 0x001C13F0u; return; } if (c.pc != 0x004962DCu) [[unlikely]] return; }
L_004962DC:
    c.f[0] = c.r[2].w[0];
    c.f[20] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = ld32((c.r[16].w[0] + 356u));
    c.f[21] = 0u;
    c.f[3] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[21]));
    c.budget -= 10;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[1] = ld32((c.r[16].w[0] + 360u));  goto L_00496320; }
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[21]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0049631C; } }
    fpu_div(c, 3u, c.f[0], c.f[20]);
    c.budget -= 3;
L_0049631C:
    c.f[1] = ld32((c.r[16].w[0] + 360u));
    c.budget -= 1;
L_00496320:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = 0u;
    c.f[2] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00496350; } }
    fpu_compare(c, fp::key(c.f[22]) <= fp::key(c.f[0]));
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00496350; } }
    fpu_div(c, 2u, c.f[1], c.f[22]);
    c.budget -= 3;
L_00496350:
    c.f[0] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.f[1] = c.r[2].w[0];
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0049637C; } }
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[2]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0049637C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = c.f[3];  if (t) { goto L_004963A0; } }
L_0049637C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_004963A0; } }
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[3]));
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_004963A0; } }
    c.f[1] = c.f[2];
    c.budget -= 1;
L_004963A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 212u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 232u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    c.f[20] = fp::mul(c.f[20], c.f[1]);
    set32(c.r[2], 0u + 16u);
    st32((c.r[29].w[0] + 228u), c.r[4].w[0]);
    st16((c.r[29].w[0] + 234u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[22] = fp::mul(c.f[22], c.f[1]);
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; c.f[21] = fp::mul(c.f[21], c.f[1]);  if (t) { goto L_004963E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004963D8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004963D8u) [[unlikely]] return; }
L_004963D8:
    set32(c.r[2], c.r[29].w[0] + 212u);
    st32((c.r[29].w[0] + 228u), c.r[2].w[0]);
    c.budget -= 2;
L_004963E0:
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[5], c.r[29].w[0] + 212u);
    st32((c.r[2].w[0]), c.f[20]);
    st32((c.r[2].w[0] + 4u), c.f[22]);
    st32((c.r[2].w[0] + 8u), c.f[21]);
    set32(c.r[19], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[18], ld32((c.r[16].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 234u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[4], c.r[18].w[0] << 5);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 228u)));
    c.budget -= 15;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[20], ld32((c.r[29].w[0] + 212u)));  goto L_0049644C; }
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496428u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00496428u) [[unlikely]] return; }
L_00496428:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[17].w[0] + 4u);  goto L_00496444; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496440u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00496440u) [[unlikely]] return; }
L_00496440:
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_00496444:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00496470; } }
L_0049644C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496458u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x00496458u) [[unlikely]] return; }
L_00496458:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 228u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049646Cu); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0049646Cu) [[unlikely]] return; }
L_0049646C:
    st32((c.r[17].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 1;
L_00496470:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00496484u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00496484u) [[unlikely]] return; }
L_00496484:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 234u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 208u), c.r[3].w[0]);  if (t) { goto L_004964B4; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 228u)));
    set32(c.r[2], c.r[29].w[0] + 212u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_004964B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004964B4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004964B4u) [[unlikely]] return; }
L_004964B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 180u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 200u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], 0u + 16u);
    st32((c.r[29].w[0] + 196u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 202u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_004964E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004964E0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004964E0u) [[unlikely]] return; }
L_004964E0:
    set32(c.r[2], c.r[29].w[0] + 180u);
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    c.budget -= 2;
L_004964E8:
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    c.f[0] = ld32((c.r[29].w[0] + 272u));
    set32(c.r[5], c.r[29].w[0] + 180u);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 276u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 280u));
    st32((c.r[2].w[0] + 8u), c.f[0]);
    set32(c.r[19], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[18], ld32((c.r[16].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 202u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[4], c.r[18].w[0] << 5);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 18;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[20], ld32((c.r[29].w[0] + 180u)));  goto L_00496560; }
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049653Cu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x0049653Cu) [[unlikely]] return; }
L_0049653C:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[17].w[0] + 4u);  goto L_00496558; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496554u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00496554u) [[unlikely]] return; }
L_00496554:
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_00496558:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_00496584; } }
L_00496560:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049656Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0049656Cu) [[unlikely]] return; }
L_0049656C:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496580u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00496580u) [[unlikely]] return; }
L_00496580:
    st32((c.r[17].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 1;
L_00496584:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00496598u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00496598u) [[unlikely]] return; }
L_00496598:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 202u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 176u), c.r[3].w[0]);  if (t) { goto L_004965C8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 196u)));
    set32(c.r[2], c.r[29].w[0] + 180u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[2].d[0] = ld8((c.r[16].w[0] + 369u));  goto L_004965CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004965C8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004965C8u) [[unlikely]] return; }
L_004965C8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 369u));
    c.budget -= 1;
L_004965CC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 240u);  goto L_004966E4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 148u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 168u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[2], 0u + 64u);
    st32((c.r[29].w[0] + 164u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 170u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00496608; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496600u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00496600u) [[unlikely]] return; }
L_00496600:
    set32(c.r[2], c.r[29].w[0] + 148u);
    st32((c.r[29].w[0] + 164u), c.r[2].w[0]);
    c.budget -= 2;
L_00496608:
    set32(c.r[3], ld32((c.r[29].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[29].w[0] + 148u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 170u)));
    set32(c.r[4], c.r[18].w[0] << 5);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 16;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[19], ld32((c.r[29].w[0] + 148u)));  goto L_00496678; }
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496654u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00496654u) [[unlikely]] return; }
L_00496654:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[17].w[0] + 4u);  goto L_00496670; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049666Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049666Cu) [[unlikely]] return; }
L_0049666C:
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_00496670:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0049669C; } }
L_00496678:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496684u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x00496684u) [[unlikely]] return; }
L_00496684:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 164u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496698u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00496698u) [[unlikely]] return; }
L_00496698:
    st32((c.r[17].w[0] + 4u), c.r[19].w[0]);
    c.budget -= 1;
L_0049669C:
    set32(c.r[25], ld32((c.r[16].w[0] + 60u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004966B0u); set32(c.r[4], c.r[16].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004966B0u) [[unlikely]] return; }
L_004966B0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 170u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 144u), c.r[3].w[0]);  if (t) { goto L_004966E0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 164u)));
    set32(c.r[2], c.r[29].w[0] + 148u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_004966E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004966E0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004966E0u) [[unlikely]] return; }
L_004966E0:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 1;
L_004966E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004966ECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004966ECu) [[unlikely]] return; }
L_004966EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_00496820; } }
L_004966F4:
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_004966F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00496708u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00496708u) [[unlikely]] return; }
L_00496708:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 369u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0049681C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[29].w[0] + 116u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 136u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[2], 0u + 64u);
    st32((c.r[29].w[0] + 132u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 138u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00496748; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496740u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00496740u) [[unlikely]] return; }
L_00496740:
    set32(c.r[2], c.r[29].w[0] + 116u);
    st32((c.r[29].w[0] + 132u), c.r[2].w[0]);
    c.budget -= 2;
L_00496748:
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[5], c.r[29].w[0] + 116u);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[18], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    set32(c.r[4], c.r[18].w[0] << 5);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[17].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 15;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[19], ld32((c.r[29].w[0] + 116u)));  goto L_004967B4; }
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496790u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00496790u) [[unlikely]] return; }
L_00496790:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[17].w[0] + 4u);  goto L_004967AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004967A8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004967A8u) [[unlikely]] return; }
L_004967A8:
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_004967AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_004967D8; } }
L_004967B4:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004967C0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004967C0u) [[unlikely]] return; }
L_004967C0:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 132u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004967D4u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004967D4u) [[unlikely]] return; }
L_004967D4:
    st32((c.r[17].w[0] + 4u), c.r[19].w[0]);
    c.budget -= 1;
L_004967D8:
    set32(c.r[25], ld32((c.r[16].w[0] + 60u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004967ECu); set32(c.r[4], c.r[16].w[0] + 60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004967ECu) [[unlikely]] return; }
L_004967EC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 138u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] - 26768u);
    c.r[3].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[29].w[0] + 112u), c.r[4].w[0]);  if (t) { goto L_0049681C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[3], c.r[29].w[0] + 116u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0049681C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049681Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049681Cu) [[unlikely]] return; }
L_0049681C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_00496820:
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_00496850:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496870u); set32(c.r[4], c.r[17].w[0] + 332u);  if (depth < kMaxDepth) unit_0007(c, 328u, depth + 1u); else { c.pc = 0x0011F4E0u; return; } if (c.pc != 0x00496870u) [[unlikely]] return; }
L_00496870:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 332u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496880u); set32(c.r[6], 0u + 44u);  if (depth < kMaxDepth) unit_000F(c, 408u, depth + 1u); else { c.pc = 0x0013FEF0u; return; } if (c.pc != 0x00496880u) [[unlikely]] return; }
L_00496880:
    set32(c.r[2], ld32((c.r[17].w[0] + 344u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496890u); st32((c.r[17].w[0] + 348u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00E5(c, 286u, depth + 1u); else { c.pc = 0x004961D0u; return; } if (c.pc != 0x00496890u) [[unlikely]] return; }
L_00496890:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004968B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004969D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 29712u);
    set32(c.r[3], c.r[3].w[0] - 29688u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[17].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 29592u);
    st32((c.r[17].w[0] + 320u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 112u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00496904u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00496904u) [[unlikely]] return; }
L_00496904:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00496910; } }
    set32(c.r[2], c.r[17].w[0] + 320u);
    c.budget -= 1;
L_00496910:
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 84u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[18], c.r[2].w[0] + 28u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496928u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B5(c, 165u, depth + 1u); else { c.pc = 0x003D5B00u; return; } if (c.pc != 0x00496928u) [[unlikely]] return; }
L_00496928:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496934u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 2u, depth + 1u); else { c.pc = 0x00418010u; return; } if (c.pc != 0x00496934u) [[unlikely]] return; }
L_00496934:
    set32(c.r[5], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[4], c.r[29].w[0] + 88u);
    set32(c.r[6], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496948u); set32(c.r[7], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_00C5(c, 601u, depth + 1u); else { c.pc = 0x00417FC0u; return; } if (c.pc != 0x00496948u) [[unlikely]] return; }
L_00496948:
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496954u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 2u, depth + 1u); else { c.pc = 0x00418010u; return; } if (c.pc != 0x00496954u) [[unlikely]] return; }
L_00496954:
    set32(c.r[4], c.r[29].w[0] + 88u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496960u); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_00C5(c, 600u, depth + 1u); else { c.pc = 0x00417FA0u; return; } if (c.pc != 0x00496960u) [[unlikely]] return; }
L_00496960:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 332u);  goto L_0049697C; }
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496978u); set32(c.r[4], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_00C5(c, 598u, depth + 1u); else { c.pc = 0x00417F70u; return; } if (c.pc != 0x00496978u) [[unlikely]] return; }
L_00496978:
    set32(c.r[4], c.r[17].w[0] + 332u);
    c.budget -= 1;
L_0049697C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 320u);  goto L_004969A0; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0049699C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0049699C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049699Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0007(c, 292u, depth + 1u); else { c.pc = 0x0011EEB0u; return; } if (c.pc != 0x0049699Cu) [[unlikely]] return; }
L_0049699C:
    set32(c.r[2], c.r[17].w[0] + 320u);
    c.budget -= 1;
L_004969A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004969B8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 25616u);
    st32((c.r[17].w[0] + 320u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
L_004969B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004969C0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0030(c, 315u, depth + 1u); else { c.pc = 0x001C32D0u; return; } if (c.pc != 0x004969C0u) [[unlikely]] return; }
L_004969C0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004969DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004969D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004969D8u) [[unlikely]] return; }
L_004969D8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004969DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00496A00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496A20u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0030(c, 319u, depth + 1u); else { c.pc = 0x001C3370u; return; } if (c.pc != 0x00496A20u) [[unlikely]] return; }
L_00496A20:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[3], c.r[3].w[0] + 25616u);
    set32(c.r[16], c.r[18].w[0] + 332u);
    st32((c.r[18].w[0] + 320u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 29712u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] - 29688u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.f[0] = ld32((c.r[28].w[0] - 32020u));
    set32(c.r[2], c.r[2].w[0] - 29592u);
    st32((c.r[18].w[0] + 60u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[18].w[0] + 320u), c.r[2].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496A64u); st32((c.r[18].w[0] + 328u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x00496A64u) [[unlikely]] return; }
L_00496A64:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_00496A7C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496A78u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x00496A78u) [[unlikely]] return; }
L_00496A78:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_00496A7C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_00496A90; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496A8Cu);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x00496A8Cu) [[unlikely]] return; }
L_00496A8C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00496A90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[18].w[0] + 352u), 0u);
    st32((c.r[18].w[0] + 356u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 360u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 364u), 0u);
    st32((c.r[18].w[0] + 324u), c.r[17].w[0]);
    st8((c.r[18].w[0] + 369u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 14;
    { const bool t = c.r[18].d[0] == 0ull; st8((c.r[18].w[0] + 368u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00496ACC; } }
    set32(c.r[4], c.r[18].w[0] + 320u);
    c.budget -= 1;
L_00496ACC:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 76u), c.r[4].w[0]);
    set32(c.r[7], c.r[29].w[0] + 76u);
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[2].w[0] + 28u);
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496AF4u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x00496AF4u) [[unlikely]] return; }
L_00496AF4:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00496B10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29768u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_00496B2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00496B3C; } }
L_00496B2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496B34u);  if (depth < kMaxDepth) unit_0030(c, 336u, depth + 1u); else { c.pc = 0x001C36F0u; return; } if (c.pc != 0x00496B34u) [[unlikely]] return; }
L_00496B34:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_00496B3C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00496B50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496B74u); set32(c.r[4], c.r[4].w[0] - 13968u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00496B74u) [[unlikely]] return; }
L_00496B74:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00496B84; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00496B94; } }
L_00496B84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496B8Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 338u, depth + 1u); else { c.pc = 0x001C3730u; return; } if (c.pc != 0x00496B8Cu) [[unlikely]] return; }
L_00496B8C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00496B94:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00496BB0:
    set32(c.r[2], ld32((c.r[28].w[0] - 30812u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_00496BC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29768u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00496BDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00496BE4; } }
L_00496BDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496BE4u);  if (depth < kMaxDepth) unit_0030(c, 342u, depth + 1u); else { c.pc = 0x001C37A0u; return; } if (c.pc != 0x00496BE4u) [[unlikely]] return; }
L_00496BE4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00496BF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29768u)));  c.pc = t; return; }
L_00496C00:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 13;
    { const bool t = c.r[16].d[0] != 0ull; c.r[17].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_00496C54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496C3Cu); set32(c.r[4], 0u + 384u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x00496C3Cu) [[unlikely]] return; }
L_00496C3C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = c.r[2].d[0] + 0ull;  goto L_00496C54; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496C50u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E5(c, 340u, depth + 1u); else { c.pc = 0x00496A00u; return; } if (c.pc != 0x00496C50u) [[unlikely]] return; }
L_00496C50:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00496C54:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496C6Cu); c.r[8].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 180u, depth + 1u); else { c.pc = 0x001C1DB0u; return; } if (c.pc != 0x00496C6Cu) [[unlikely]] return; }
L_00496C6C:
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496C88u); set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x00496C88u) [[unlikely]] return; }
L_00496C88:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496C94u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 327u, depth + 1u); else { c.pc = 0x00127740u; return; } if (c.pc != 0x00496C94u) [[unlikely]] return; }
L_00496C94:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 192u);  goto L_00496CBC; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 26u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00496CB8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496CB8u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 325u, depth + 1u); else { c.pc = 0x001276D0u; return; } if (c.pc != 0x00496CB8u) [[unlikely]] return; }
L_00496CB8:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 1;
L_00496CBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496CC4u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0009(c, 324u, depth + 1u); else { c.pc = 0x001276B0u; return; } if (c.pc != 0x00496CC4u) [[unlikely]] return; }
L_00496CC4:
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[4], c.r[29].w[0] + 160u);
    st32((c.r[16].w[0] + 356u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 196u));
    st32((c.r[16].w[0] + 360u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 200u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496CE4u); st32((c.r[16].w[0] + 364u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x00496CE4u) [[unlikely]] return; }
L_00496CE4:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[6], c.r[6].w[0] - 13696u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496CFCu); set32(c.r[7], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x00496CFCu) [[unlikely]] return; }
L_00496CFC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 144u);  goto L_00496D6C; }
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 164u)));  goto L_00496D2C; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 160u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_00496D2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00496D68; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[18], ld32((c.r[29].w[0] + 168u)));  goto L_00496D40; }
    set32(c.r[18], c.r[29].w[0] + 161u);
    c.budget -= 1;
L_00496D40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496D48u); set32(c.r[4], c.r[16].w[0] + 332u);  if (depth < kMaxDepth) unit_0007(c, 328u, depth + 1u); else { c.pc = 0x0011F4E0u; return; } if (c.pc != 0x00496D48u) [[unlikely]] return; }
L_00496D48:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 332u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496D58u); set32(c.r[6], 0u + 44u);  if (depth < kMaxDepth) unit_000F(c, 408u, depth + 1u); else { c.pc = 0x0013FEF0u; return; } if (c.pc != 0x00496D58u) [[unlikely]] return; }
L_00496D58:
    set32(c.r[2], ld32((c.r[16].w[0] + 344u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496D68u); st32((c.r[16].w[0] + 348u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00E5(c, 286u, depth + 1u); else { c.pc = 0x004961D0u; return; } if (c.pc != 0x00496D68u) [[unlikely]] return; }
L_00496D68:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 1;
L_00496D6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496D74u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x00496D74u) [[unlikely]] return; }
L_00496D74:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[6], c.r[6].w[0] - 13684u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496D8Cu); set32(c.r[7], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x00496D8Cu) [[unlikely]] return; }
L_00496D8C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 128u);  goto L_00496DC8; }
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 145u);  goto L_00496DA8; }
    set32(c.r[4], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 1;
L_00496DA8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[29].w[0] + 204u);
    set32(c.r[5], c.r[5].w[0] - 12168u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496DBCu); st32((c.r[29].w[0] + 204u), 0u);  if (depth < kMaxDepth) unit_00AE(c, 125u, depth + 1u); else { c.pc = 0x003B95E0u; return; } if (c.pc != 0x00496DBCu) [[unlikely]] return; }
L_00496DBC:
    c.f[0] = ld32((c.r[29].w[0] + 204u));
    st32((c.r[16].w[0] + 328u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
L_00496DC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496DD0u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x00496DD0u) [[unlikely]] return; }
L_00496DD0:
    set32(c.r[4], ld32((c.r[17].w[0] + 100u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[6], c.r[6].w[0] - 13663u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496DE8u); set32(c.r[7], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x00496DE8u) [[unlikely]] return; }
L_00496DE8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 128u);  goto L_00496E4C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496E00u); set32(c.r[5], c.r[5].w[0] - 13652u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00496E00u) [[unlikely]] return; }
L_00496E00:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496E10u); set32(c.r[5], c.r[5].w[0] - 13637u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x00496E10u) [[unlikely]] return; }
L_00496E10:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496E24u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 19u, depth + 1u); else { c.pc = 0x00140140u; return; } if (c.pc != 0x00496E24u) [[unlikely]] return; }
L_00496E24:
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496E3Cu); st8((c.r[16].w[0] + 369u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00496E3Cu) [[unlikely]] return; }
L_00496E3C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496E48u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00496E48u) [[unlikely]] return; }
L_00496E48:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_00496E4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496E54u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00496E54u) [[unlikely]] return; }
L_00496E54:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496E60u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00496E60u) [[unlikely]] return; }
L_00496E60:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496E6Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00496E6Cu) [[unlikely]] return; }
L_00496E6C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_00496E90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00496F20; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 29568u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00496F08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 15616u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00496F08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 17776u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00496F08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 18208u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00496F08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00496F08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496F08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00496F08u) [[unlikely]] return; }
L_00496F08:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00496F24; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00496F20u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00496F20u) [[unlikely]] return; }
L_00496F20:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00496F24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00496F40:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_00496F68; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 5u);  goto L_00496F60; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_00496F60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00496F6C; } }
L_00496F68:
    set32(c.r[2], c.r[2].w[0] - 13904u);
    c.budget -= 1;
L_00496F6C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00496F80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 13744u);  c.pc = t; return; }
L_00496F90:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 60u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004968B0u | kUnwind; return; } goto L_004968B0; }
L_00496FA0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 320u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004968B0u | kUnwind; return; } goto L_004968B0; }
L_00496FB0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 320u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004960D0u | kUnwind; return; } goto L_004960D0; }
L_00496FC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00497040; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[2], c.r[2].w[0] - 29536u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00497028; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 17776u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00497028; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 18208u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00497028; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_00497028; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497028u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00497028u) [[unlikely]] return; }
L_00497028:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00497044; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497040u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00497040u) [[unlikely]] return; }
L_00497040:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00497044:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00497060:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);  goto L_00497088; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 5u);  goto L_00497080; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_00497080:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0049708C; } }
L_00497088:
    set32(c.r[2], c.r[2].w[0] - 13544u);
    c.budget -= 1;
L_0049708C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004970A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 13536u);  c.pc = t; return; }
L_004970B0:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 16;
    { const bool t = c.r[19].d[0] != 0ull; st32((c.r[29].w[0]), c.f[20]);  if (t) { goto L_00497110; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004970F8u); set32(c.r[4], 0u + 168u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004970F8u) [[unlikely]] return; }
L_004970F8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[19].d[0] = c.r[2].d[0] + 0ull;  goto L_00497110; }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049710Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E6(c, 38u, depth + 1u); else { c.pc = 0x004983D0u; return; } if (c.pc != 0x0049710Cu) [[unlikely]] return; }
L_0049710C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00497110:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497128u); c.r[8].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0024(c, 155u, depth + 1u); else { c.pc = 0x00192610u; return; } if (c.pc != 0x00497128u) [[unlikely]] return; }
L_00497128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497130u); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x00497130u) [[unlikely]] return; }
L_00497130:
    set32(c.r[4], ld32((c.r[20].w[0] + 100u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[6], c.r[6].w[0] - 13504u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497148u); set32(c.r[7], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x00497148u) [[unlikely]] return; }
L_00497148:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 176u);  goto L_004972A4; }
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 225u);  goto L_00497164; }
    set32(c.r[5], ld32((c.r[29].w[0] + 232u)));
    c.budget -= 1;
L_00497164:
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 116u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00497174u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00497174u) [[unlikely]] return; }
L_00497174:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497180u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0030(c, 98u, depth + 1u); else { c.pc = 0x001C13D0u; return; } if (c.pc != 0x00497180u) [[unlikely]] return; }
L_00497180:
    c.f[0] = c.r[2].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497190u); c.f[21] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_0030(c, 99u, depth + 1u); else { c.pc = 0x001C13F0u; return; } if (c.pc != 0x00497190u) [[unlikely]] return; }
L_00497190:
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 196u);
    c.f[20] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st16((c.r[29].w[0] + 216u), static_cast<std::uint16_t>(0u));
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[2], 0u + 16u);
    st32((c.r[29].w[0] + 212u), c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == c.r[4].d[0]; st16((c.r[29].w[0] + 218u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_004971CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004971C4u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004971C4u) [[unlikely]] return; }
L_004971C4:
    set32(c.r[2], c.r[29].w[0] + 196u);
    st32((c.r[29].w[0] + 212u), c.r[2].w[0]);
    c.budget -= 2;
L_004971CC:
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[5], c.r[29].w[0] + 196u);
    st32((c.r[2].w[0]), c.f[20]);
    st32((c.r[2].w[0] + 4u), c.f[21]);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[18], ld32((c.r[19].w[0] + 52u)));
    set32(c.r[17], ld32((c.r[19].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 218u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[4], c.r[17].w[0] << 5);
    set32(c.r[16], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[16].w[0] + 26u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 15;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[21], ld32((c.r[29].w[0] + 196u)));  goto L_00497238; }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497214u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00497214u) [[unlikely]] return; }
L_00497214:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[16].w[0] + 4u);  goto L_00497230; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049722Cu);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x0049722Cu) [[unlikely]] return; }
L_0049722C:
    set32(c.r[2], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_00497230:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 20u), c.r[2].w[0]);  if (t) { goto L_0049725C; } }
L_00497238:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497244u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x00497244u) [[unlikely]] return; }
L_00497244:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 212u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497258u); c.r[6].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00497258u) [[unlikely]] return; }
L_00497258:
    st32((c.r[16].w[0] + 4u), c.r[21].w[0]);
    c.budget -= 1;
L_0049725C:
    set32(c.r[25], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00497270u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00497270u) [[unlikely]] return; }
L_00497270:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 218u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 26768u);
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 192u), c.r[3].w[0]);  if (t) { goto L_004972A0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 212u)));
    set32(c.r[2], c.r[29].w[0] + 196u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_004972A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004972A0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004972A0u) [[unlikely]] return; }
L_004972A0:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 1;
L_004972A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004972ACu);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004972ACu) [[unlikely]] return; }
L_004972AC:
    set32(c.r[4], ld32((c.r[20].w[0] + 100u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[6], c.r[6].w[0] - 13493u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004972C4u); set32(c.r[7], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x004972C4u) [[unlikely]] return; }
L_004972C4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_0049731C; }
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 177u);  goto L_004972E0; }
    set32(c.r[4], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 1;
L_004972E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004972E8u);  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x004972E8u) [[unlikely]] return; }
L_004972E8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004972FCu); set32(c.r[5], c.r[5].w[0] - 13481u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004972FCu) [[unlikely]] return; }
L_004972FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497308u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0004(c, 208u, depth + 1u); else { c.pc = 0x00112A90u; return; } if (c.pc != 0x00497308u) [[unlikely]] return; }
L_00497308:
    st32((c.r[19].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497318u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00497318u) [[unlikely]] return; }
L_00497318:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_0049731C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497324u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x00497324u) [[unlikely]] return; }
L_00497324:
    set32(c.r[4], ld32((c.r[20].w[0] + 100u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[6], c.r[6].w[0] - 13480u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049733Cu); set32(c.r[7], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x0049733Cu) [[unlikely]] return; }
L_0049733C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 144u);  goto L_00497380; }
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 161u);  goto L_00497358; }
    set32(c.r[4], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 1;
L_00497358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497360u); set32(c.r[5], c.r[29].w[0] + 252u);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x00497360u) [[unlikely]] return; }
L_00497360:
    c.f[0] = ld32((c.r[29].w[0] + 252u));
    st32((c.r[19].w[0] + 164u), c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 140u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0049737C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049737Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E5(c, 448u, depth + 1u); else { c.pc = 0x004977D0u; return; } if (c.pc != 0x0049737Cu) [[unlikely]] return; }
L_0049737C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 1;
L_00497380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497388u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x00497388u) [[unlikely]] return; }
L_00497388:
    set32(c.r[4], ld32((c.r[20].w[0] + 100u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[6], c.r[6].w[0] - 13466u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004973A0u); set32(c.r[7], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0023(c, 97u, depth + 1u); else { c.pc = 0x0018D7D0u; return; } if (c.pc != 0x004973A0u) [[unlikely]] return; }
L_004973A0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 144u);  goto L_00497404; }
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 148u)));  goto L_004973D0; }
    c.r[2].d[0] = ld8((c.r[29].w[0] + 144u));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 3;
L_004973D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00497400; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 152u)));  goto L_004973E4; }
    set32(c.r[4], c.r[29].w[0] + 145u);
    c.budget -= 1;
L_004973E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004973ECu); set32(c.r[5], c.r[29].w[0] + 248u);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x004973ECu) [[unlikely]] return; }
L_004973EC:
    set32(c.r[25], ld32((c.r[19].w[0])));
    c.f[12] = ld32((c.r[29].w[0] + 248u));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00497400u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00497400u) [[unlikely]] return; }
L_00497400:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 1;
L_00497404:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049740Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0049740Cu) [[unlikely]] return; }
L_0049740C:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497418u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00497418u) [[unlikely]] return; }
L_00497418:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497424u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00497424u) [[unlikely]] return; }
L_00497424:
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497430u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00497430u) [[unlikely]] return; }
L_00497430:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_00497460:
    set32(c.r[29], c.r[29].w[0] - 256u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    st8((c.r[28].w[0] - 28660u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[4].w[0] + 132u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004974B4u); st32((c.r[29].w[0] + 188u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004974B4u) [[unlikely]] return; }
L_004974B4:
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[5], 0u + 4u);
    set32(c.r[2], ld32((c.r[20].w[0] + 140u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 220u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004974D0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0073(c, 138u, depth + 1u); else { c.pc = 0x002CD2F0u; return; } if (c.pc != 0x004974D0u) [[unlikely]] return; }
L_004974D0:
    set32(c.r[4], ld32((c.r[29].w[0] + 184u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004974DCu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004974DCu) [[unlikely]] return; }
L_004974DC:
    set32(c.r[2], ld32((c.r[28].w[0] - 29204u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[28].w[0] - 28660u), static_cast<std::uint8_t>(0u));
    c.r[6].d[0] = 0ull + 0ull;
    c.f[3] = ld32((c.r[21].w[0] + 4u));
    c.f[4] = ld32((c.r[2].w[0] + 180u));
    c.f[0] = ld32((c.r[19].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 176u));
    c.f[5] = fp::cvt_s_w(c.f[4]);
    c.f[4] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    fpu_div(c, 1u, c.f[0], c.f[4]);
    c.f[2] = ld32((c.r[21].w[0]));
    c.f[0] = ld32((c.r[19].w[0]));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[5]);
    st32((c.r[29].w[0] + 252u), c.f[1]);
    st32((c.r[29].w[0] + 248u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[1] = fp::add(c.f[3], c.f[1]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    fpu_div(c, 1u, c.f[1], c.f[4]);
    fpu_div(c, 0u, c.f[0], c.f[5]);
    st32((c.r[29].w[0] + 244u), c.f[1]);
    st32((c.r[29].w[0] + 240u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = ld32((c.r[17].w[0]));
    c.f[1] = fp::add(c.f[3], c.f[1]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    fpu_div(c, 1u, c.f[1], c.f[4]);
    fpu_div(c, 0u, c.f[0], c.f[5]);
    st32((c.r[29].w[0] + 236u), c.f[1]);
    st32((c.r[29].w[0] + 232u), c.f[0]);
    c.f[1] = ld32((c.r[22].w[0] + 4u));
    c.f[0] = ld32((c.r[22].w[0]));
    c.f[1] = fp::add(c.f[3], c.f[1]);
    c.f[0] = fp::add(c.f[2], c.f[0]);
    fpu_div(c, 1u, c.f[1], c.f[4]);
    fpu_div(c, 0u, c.f[0], c.f[5]);
    st32((c.r[29].w[0] + 228u), c.f[1]);
    st32((c.r[29].w[0] + 224u), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 140u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 220u)));
    c.budget -= 46;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497594u); set32(c.r[7], c.r[29].w[0] + 248u);  if (depth < kMaxDepth) unit_0073(c, 133u, depth + 1u); else { c.pc = 0x002CD190u; return; } if (c.pc != 0x00497594u) [[unlikely]] return; }
L_00497594:
    set32(c.r[2], ld32((c.r[20].w[0] + 140u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 220u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004975ACu); set32(c.r[7], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_0073(c, 133u, depth + 1u); else { c.pc = 0x002CD190u; return; } if (c.pc != 0x004975ACu) [[unlikely]] return; }
L_004975AC:
    set32(c.r[2], ld32((c.r[20].w[0] + 140u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    set32(c.r[4], ld32((c.r[2].w[0] + 220u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004975C4u); set32(c.r[7], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_0073(c, 133u, depth + 1u); else { c.pc = 0x002CD190u; return; } if (c.pc != 0x004975C4u) [[unlikely]] return; }
L_004975C4:
    set32(c.r[2], ld32((c.r[20].w[0] + 140u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 3u);
    set32(c.r[4], ld32((c.r[2].w[0] + 220u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004975DCu); set32(c.r[7], c.r[29].w[0] + 232u);  if (depth < kMaxDepth) unit_0073(c, 133u, depth + 1u); else { c.pc = 0x002CD190u; return; } if (c.pc != 0x004975DCu) [[unlikely]] return; }
L_004975DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004975E4u); set32(c.r[4], ld32((c.r[20].w[0] + 136u)));  if (depth < kMaxDepth) unit_0030(c, 97u, depth + 1u); else { c.pc = 0x001C13C0u; return; } if (c.pc != 0x004975E4u) [[unlikely]] return; }
L_004975E4:
    set32(c.r[21], ld32((c.r[2].w[0])));
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004975F8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004975F8u) [[unlikely]] return; }
L_004975F8:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_0049760C; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[20] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00497624; } }
L_0049760C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[20] = fp::cvt_s_w(c.f[0]);
    c.f[20] = fp::add(c.f[20], c.f[20]);
    c.budget -= 6;
L_00497624:
    set32(c.r[25], ld32((c.r[21].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 84u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00497634u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00497634u) [[unlikely]] return; }
L_00497634:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_00497648; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00497660; } }
L_00497648:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 6;
L_00497660:
    c.f[1] = ld32((c.r[19].w[0] + 4u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[19].w[0]));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    fpu_div(c, 1u, c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 220u), c.f[1]);
    st32((c.r[29].w[0] + 216u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = ld32((c.r[18].w[0]));
    fpu_div(c, 1u, c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 212u), c.f[1]);
    st32((c.r[29].w[0] + 208u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 4u));
    c.f[0] = ld32((c.r[17].w[0]));
    fpu_div(c, 1u, c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 204u), c.f[1]);
    st32((c.r[29].w[0] + 200u), c.f[0]);
    c.f[1] = ld32((c.r[22].w[0] + 4u));
    c.f[0] = ld32((c.r[22].w[0]));
    fpu_div(c, 1u, c.f[1], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 196u), c.f[1]);
    st32((c.r[29].w[0] + 192u), c.f[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 140u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 220u)));
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004976DCu); set32(c.r[8], c.r[29].w[0] + 216u);  if (depth < kMaxDepth) unit_0073(c, 128u, depth + 1u); else { c.pc = 0x002CCE10u; return; } if (c.pc != 0x004976DCu) [[unlikely]] return; }
L_004976DC:
    set32(c.r[2], ld32((c.r[20].w[0] + 140u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 220u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004976F8u); set32(c.r[8], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_0073(c, 128u, depth + 1u); else { c.pc = 0x002CCE10u; return; } if (c.pc != 0x004976F8u) [[unlikely]] return; }
L_004976F8:
    set32(c.r[2], ld32((c.r[20].w[0] + 140u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 220u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497714u); set32(c.r[8], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_0073(c, 128u, depth + 1u); else { c.pc = 0x002CCE10u; return; } if (c.pc != 0x00497714u) [[unlikely]] return; }
L_00497714:
    set32(c.r[2], ld32((c.r[20].w[0] + 140u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 3u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 220u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497730u); set32(c.r[8], c.r[29].w[0] + 200u);  if (depth < kMaxDepth) unit_0073(c, 128u, depth + 1u); else { c.pc = 0x002CCE10u; return; } if (c.pc != 0x00497730u) [[unlikely]] return; }
L_00497730:
    set32(c.r[3], ld32((c.r[20].w[0] + 120u)));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[2], ld32((c.r[20].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497748u); set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0013(c, 344u, depth + 1u); else { c.pc = 0x0014EB90u; return; } if (c.pc != 0x00497748u) [[unlikely]] return; }
L_00497748:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497754u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0021(c, 30u, depth + 1u); else { c.pc = 0x00184600u; return; } if (c.pc != 0x00497754u) [[unlikely]] return; }
L_00497754:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 160u);  goto L_0049777C; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 26u)));
    set32(c.r[2], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00497778; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497778u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0021(c, 26u, depth + 1u); else { c.pc = 0x001844E0u; return; } if (c.pc != 0x00497778u) [[unlikely]] return; }
L_00497778:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_0049777C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497784u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0013(c, 342u, depth + 1u); else { c.pc = 0x0014EB30u; return; } if (c.pc != 0x00497784u) [[unlikely]] return; }
L_00497784:
    set32(c.r[2], ld32((c.r[20].w[0] + 140u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 220u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497798u); set32(c.r[6], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0073(c, 130u, depth + 1u); else { c.pc = 0x002CCF30u; return; } if (c.pc != 0x00497798u) [[unlikely]] return; }
L_00497798:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_004977D0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 140u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004977F0u); set32(c.r[4], ld32((c.r[2].w[0] + 220u)));  if (depth < kMaxDepth) unit_0073(c, 134u, depth + 1u); else { c.pc = 0x002CD270u; return; } if (c.pc != 0x004977F0u) [[unlikely]] return; }
L_004977F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 128u), 0u);
    c.f[20] = 0u;
    st32((c.r[29].w[0] + 132u), 0u);
    st32((c.r[29].w[0] + 136u), 0u);
    st32((c.r[29].w[0] + 112u), 0u);
    st32((c.r[29].w[0] + 116u), 0u);
    st32((c.r[29].w[0] + 120u), 0u);
    st32((c.r[29].w[0] + 96u), 0u);
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 104u), 0u);
    st32((c.r[29].w[0] + 80u), 0u);
    st32((c.r[29].w[0] + 84u), 0u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497830u); st32((c.r[29].w[0] + 88u), 0u);  if (depth < kMaxDepth) unit_0029(c, 112u, depth + 1u); else { c.pc = 0x001A5D90u; return; } if (c.pc != 0x00497830u) [[unlikely]] return; }
L_00497830:
    set32(c.r[4], ld32((c.r[16].w[0] + 144u)));
    c.f[12] = c.f[20];
    set32(c.r[5], c.r[29].w[0] + 128u);
    set32(c.r[6], c.r[29].w[0] + 112u);
    set32(c.r[7], c.r[29].w[0] + 96u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049784Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0004(c, 44u, depth + 1u); else { c.pc = 0x00110690u; return; } if (c.pc != 0x0049784Cu) [[unlikely]] return; }
L_0049784C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 128u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    set32(c.r[7], c.r[29].w[0] + 72u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497864u); set32(c.r[8], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_00E5(c, 460u, depth + 1u); else { c.pc = 0x00497960u; return; } if (c.pc != 0x00497864u) [[unlikely]] return; }
L_00497864:
    c.f[0] = ld32((c.r[28].w[0] - 29756u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[20] = fp::add(c.f[20], c.f[0]);  if (t) { goto L_004978E4; } }
L_00497870:
    c.f[12] = c.f[20];
    set32(c.r[5], c.r[29].w[0] + 128u);
    set32(c.r[6], c.r[29].w[0] + 112u);
    set32(c.r[7], c.r[29].w[0] + 96u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497888u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0004(c, 44u, depth + 1u); else { c.pc = 0x00110690u; return; } if (c.pc != 0x00497888u) [[unlikely]] return; }
L_00497888:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 128u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    set32(c.r[7], c.r[29].w[0] + 56u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004978A0u); set32(c.r[8], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00E5(c, 460u, depth + 1u); else { c.pc = 0x00497960u; return; } if (c.pc != 0x004978A0u) [[unlikely]] return; }
L_004978A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[6], c.r[29].w[0] + 56u);
    set32(c.r[7], c.r[29].w[0] + 48u);
    set32(c.r[8], c.r[29].w[0] + 72u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004978BCu); set32(c.r[9], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_00E5(c, 428u, depth + 1u); else { c.pc = 0x00497460u; return; } if (c.pc != 0x004978BCu) [[unlikely]] return; }
L_004978BC:
    c.f[0] = ld32((c.r[28].w[0] - 29756u));
    c.f[3] = ld32((c.r[29].w[0] + 56u));
    c.f[2] = ld32((c.r[29].w[0] + 60u));
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 48u));
    c.f[0] = ld32((c.r[29].w[0] + 52u));
    st32((c.r[29].w[0] + 72u), c.f[3]);
    st32((c.r[29].w[0] + 76u), c.f[2]);
    st32((c.r[29].w[0] + 64u), c.f[1]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.budget -= 10;
L_004978E4:
    c.f[12] = ld32((c.r[16].w[0] + 148u));
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[12]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[16].w[0] + 144u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00497870u | kUnwind; return; } goto L_00497870; }
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[12]));
    c.budget -= 3;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00497950; }
    set32(c.r[4], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[5], c.r[29].w[0] + 128u);
    set32(c.r[6], c.r[29].w[0] + 112u);
    set32(c.r[7], c.r[29].w[0] + 96u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497918u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0004(c, 44u, depth + 1u); else { c.pc = 0x00110690u; return; } if (c.pc != 0x00497918u) [[unlikely]] return; }
L_00497918:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 128u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    set32(c.r[7], c.r[29].w[0] + 56u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497930u); set32(c.r[8], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00E5(c, 460u, depth + 1u); else { c.pc = 0x00497960u; return; } if (c.pc != 0x00497930u) [[unlikely]] return; }
L_00497930:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[6], c.r[29].w[0] + 56u);
    set32(c.r[7], c.r[29].w[0] + 48u);
    set32(c.r[8], c.r[29].w[0] + 72u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0049794Cu); set32(c.r[9], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_00E5(c, 428u, depth + 1u); else { c.pc = 0x00497460u; return; } if (c.pc != 0x0049794Cu) [[unlikely]] return; }
L_0049794C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00497950:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00497960:
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[2] = ld32((c.r[4].w[0] + 164u));
    c.f[0] = ld32((c.r[6].w[0]));
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[5] = fp::mul(c.f[1], c.f[2]);
    c.f[4] = fp::mul(c.f[0], c.f[2]);
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = 0u;
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[0] = fp::add(c.f[2], c.f[4]);
    c.f[6] = fp::max(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.f[2], c.f[4]);
    c.f[2] = fp::max(c.f[0], c.f[1]);
    c.f[1] = fp::add(c.f[3], c.f[5]);
    st32((c.r[7].w[0]), c.f[1]);
    c.f[0] = fp::sub(c.f[3], c.f[5]);
    st32((c.r[7].w[0] + 4u), c.f[6]);
    st32((c.r[8].w[0]), c.f[0]);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[8].w[0] + 4u), c.f[2]);  c.pc = t; return; }
L_004979B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 140u)));
    set32(c.r[16], ld32((c.r[28].w[0] - 27612u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004979D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004979D8u);  if (depth < kMaxDepth) unit_00E5(c, 469u, depth + 1u); else { c.pc = 0x00497AE0u; return; } if (c.pc != 0x004979D8u) [[unlikely]] return; }
L_004979D8:
    st32((c.r[29].w[0] + 60u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_004979FC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_004979FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00497A10; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 4ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_00497A10:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[16].w[0] + 96u));  goto L_00497A20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00497A40; } }
L_00497A20:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_00497A40; }
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00497A40; }
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_00497A40:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 132u)));  goto L_00497A9C; }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 132u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[25], ld32((c.r[16].w[0])));  goto L_00497A70; }
    set32(c.r[4], c.r[29].w[0] + 60u);
    set32(c.r[5], c.r[16].w[0] + 136u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497A64u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x00497A64u) [[unlikely]] return; }
L_00497A64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00497A98; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_00497A70:
    set32(c.r[5], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[25], ld32((c.r[25].w[0] + 352u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00497A80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00497A80u) [[unlikely]] return; }
L_00497A80:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 136u);
    st8((c.r[16].w[0] + 132u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[29].w[0] + 60u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497A98u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x00497A98u) [[unlikely]] return; }
L_00497A98:
    set32(c.r[4], ld32((c.r[17].w[0] + 132u)));
    c.budget -= 1;
L_00497A9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497AA4u); st32((c.r[29].w[0] + 52u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00497AA4u) [[unlikely]] return; }
L_00497AA4:
    set32(c.r[4], ld32((c.r[17].w[0] + 140u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 27612u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497AB4u); st32((c.r[29].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0073(c, 61u, depth + 1u); else { c.pc = 0x002CC700u; return; } if (c.pc != 0x00497AB4u) [[unlikely]] return; }
L_00497AB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497ABCu); set32(c.r[4], ld32((c.r[29].w[0] + 48u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00497ABCu) [[unlikely]] return; }
L_00497ABC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00497AE0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 132u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497B0Cu); st32((c.r[29].w[0] + 124u), c.r[4].w[0]);  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00497B0Cu) [[unlikely]] return; }
L_00497B0C:
    st32((c.r[29].w[0] + 120u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[28].w[0] - 29760u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497B34u);  if (depth < kMaxDepth) unit_00AB(c, 378u, depth + 1u); else { c.pc = 0x003AF0E0u; return; } if (c.pc != 0x00497B34u) [[unlikely]] return; }
L_00497B34:
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], 0u + 160u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497B4Cu); set32(c.r[17], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00497B4Cu) [[unlikely]] return; }
L_00497B4C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], 0u + 256u);  goto L_00497B8C; }
    set32(c.r[10], c.r[17].w[0] << 2);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0]), c.r[10].d[0]);
    set32(c.r[11], 0u + 4u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[11].d[0]);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497B84u); c.r[9].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 178u, depth + 1u); else { c.pc = 0x002CDAE0u; return; } if (c.pc != 0x00497B84u) [[unlikely]] return; }
L_00497B84:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 256u);
    c.budget -= 2;
L_00497B8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497B94u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00497B94u) [[unlikely]] return; }
L_00497B94:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { set32(c.r[18], ld32((c.r[16].w[0] + 140u)));  goto L_00497BB4; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497BACu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0073(c, 65u, depth + 1u); else { c.pc = 0x002CC790u; return; } if (c.pc != 0x00497BACu) [[unlikely]] return; }
L_00497BAC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 2;
L_00497BB4:
    c.budget -= 2;
    if (c.r[18].d[0] == c.r[17].d[0]) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_00497C20; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[16].w[0] + 140u), c.r[17].w[0]);  goto L_00497BFC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497BCCu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00497BCCu) [[unlikely]] return; }
L_00497BCC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497BDCu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00497BDCu) [[unlikely]] return; }
L_00497BDC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00497BF8; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00497BF8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00497BF8u) [[unlikely]] return; }
L_00497BF8:
    st32((c.r[16].w[0] + 140u), c.r[17].w[0]);
    c.budget -= 1;
L_00497BFC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00497C1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497C0Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00497C0Cu) [[unlikely]] return; }
L_00497C0C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497C1Cu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00497C1Cu) [[unlikely]] return; }
L_00497C1C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00497C20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497C28u);  if (depth < kMaxDepth) unit_00E5(c, 448u, depth + 1u); else { c.pc = 0x004977D0u; return; } if (c.pc != 0x00497C28u) [[unlikely]] return; }
L_00497C28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497C30u); set32(c.r[4], ld32((c.r[16].w[0] + 136u)));  if (depth < kMaxDepth) unit_0030(c, 97u, depth + 1u); else { c.pc = 0x001C13C0u; return; } if (c.pc != 0x00497C30u) [[unlikely]] return; }
L_00497C30:
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[29].w[0] + 140u), c.r[17].w[0]);  if (t) { goto L_00497C54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497C44u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00497C44u) [[unlikely]] return; }
L_00497C44:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497C54u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00497C54u) [[unlikely]] return; }
L_00497C54:
    set32(c.r[4], 0u + 56u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497C60u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00497C60u) [[unlikely]] return; }
L_00497C60:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 36u)));  goto L_00497C7C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497C74u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 404u, depth + 1u); else { c.pc = 0x0031B9B0u; return; } if (c.pc != 0x00497C74u) [[unlikely]] return; }
L_00497C74:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 2;
L_00497C7C:
    set32(c.r[20], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != 0ull; set32(c.r[17], ld32((c.r[29].w[0] + 140u)));  if (t) { goto L_00497D14; } }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497C94u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00497C94u) [[unlikely]] return; }
L_00497C94:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[19].w[0] + 42u));  goto L_00497CA8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497CA4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x00497CA4u) [[unlikely]] return; }
L_00497CA4:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 42u));
    c.budget -= 1;
L_00497CA8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00497CCC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[19].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00497D0C; } }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00497D0C; } }
L_00497CCC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 36u)));  goto L_00497CF4; }
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 36u)));  goto L_00497D10; }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00497D0C; } }
L_00497CF4:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00497D0C; } }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[19].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00497D0C:
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 1;
L_00497D10:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00497D14:
    set32(c.r[18], ld32((c.r[20].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[17].d[0]) { set32(c.r[17], ld32((c.r[16].w[0] + 140u)));  goto L_00497D84; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { st32((c.r[20].w[0] + 8u), c.r[17].w[0]);  goto L_00497D60; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497D30u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00497D30u) [[unlikely]] return; }
L_00497D30:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497D40u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00497D40u) [[unlikely]] return; }
L_00497D40:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00497D5C; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00497D5Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00497D5Cu) [[unlikely]] return; }
L_00497D5C:
    st32((c.r[20].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 1;
L_00497D60:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00497D80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497D70u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00497D70u) [[unlikely]] return; }
L_00497D70:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497D80u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00497D80u) [[unlikely]] return; }
L_00497D80:
    set32(c.r[17], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 1;
L_00497D84:
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497D90u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x00497D90u) [[unlikely]] return; }
L_00497D90:
    set32(c.r[4], c.r[17].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497D9Cu); set32(c.r[5], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x00497D9Cu) [[unlikely]] return; }
L_00497D9C:
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497DA8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x00497DA8u) [[unlikely]] return; }
L_00497DA8:
    set32(c.r[4], 0u + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497DB4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00497DB4u) [[unlikely]] return; }
L_00497DB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00497E24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497DC4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_002F(c, 183u, depth + 1u); else { c.pc = 0x001BE4E0u; return; } if (c.pc != 0x00497DC4u) [[unlikely]] return; }
L_00497DC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 6656u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497DE0u); st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_002F(c, 182u, depth + 1u); else { c.pc = 0x001BE4B0u; return; } if (c.pc != 0x00497DE0u) [[unlikely]] return; }
L_00497DE0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497DECu); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_002F(c, 181u, depth + 1u); else { c.pc = 0x001BE480u; return; } if (c.pc != 0x00497DECu) [[unlikely]] return; }
L_00497DEC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497DF8u); set32(c.r[5], 0u + 7u);  if (depth < kMaxDepth) unit_002F(c, 180u, depth + 1u); else { c.pc = 0x001BE450u; return; } if (c.pc != 0x00497DF8u) [[unlikely]] return; }
L_00497DF8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497E04u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 179u, depth + 1u); else { c.pc = 0x001BE420u; return; } if (c.pc != 0x00497E04u) [[unlikely]] return; }
L_00497E04:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497E10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 178u, depth + 1u); else { c.pc = 0x001BE400u; return; } if (c.pc != 0x00497E10u) [[unlikely]] return; }
L_00497E10:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497E1Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_002F(c, 177u, depth + 1u); else { c.pc = 0x001BE3F0u; return; } if (c.pc != 0x00497E1Cu) [[unlikely]] return; }
L_00497E1C:
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00497E24:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 28u));
    set32(c.r[2], 0u - 7169u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 512ull;
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[17], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497E60u); set32(c.r[4], c.r[29].w[0] + 132u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x00497E60u) [[unlikely]] return; }
L_00497E60:
    set32(c.r[4], c.r[17].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497E6Cu); set32(c.r[5], c.r[29].w[0] + 132u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x00497E6Cu) [[unlikely]] return; }
L_00497E6C:
    set32(c.r[4], c.r[29].w[0] + 132u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497E78u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x00497E78u) [[unlikely]] return; }
L_00497E78:
    set32(c.r[4], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497E84u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00497E84u) [[unlikely]] return; }
L_00497E84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00497ED4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497E94u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_006F(c, 223u, depth + 1u); else { c.pc = 0x002BDE00u; return; } if (c.pc != 0x00497E94u) [[unlikely]] return; }
L_00497E94:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 13520u);
    set32(c.r[2], c.r[2].w[0] + 19632u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u - 49u);
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u - 9u);
    c.r[4].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 16;
L_00497ED4:
    c.r[6].d[0] = ld16((c.r[17].w[0] + 28u));
    set32(c.r[3], 0u - 49u);
    set32(c.r[2], 0u - 9u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 16ull;
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 28u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[17].w[0] + 28u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[17], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497F08u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x00497F08u) [[unlikely]] return; }
L_00497F08:
    set32(c.r[4], c.r[17].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497F14u); set32(c.r[5], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x00497F14u) [[unlikely]] return; }
L_00497F14:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497F20u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x00497F20u) [[unlikely]] return; }
L_00497F20:
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = ld16((c.r[2].w[0]));  goto L_00497FC0; }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497F3Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00497F3Cu) [[unlikely]] return; }
L_00497F3C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[19].w[0] + 42u));  goto L_00497F50; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497F4Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x00497F4Cu) [[unlikely]] return; }
L_00497F4C:
    c.r[3].d[0] = ld16((c.r[19].w[0] + 42u));
    c.budget -= 1;
L_00497F50:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00497F74; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[19].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00497FB4; } }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00497FB4; } }
L_00497F74:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 36u)));  goto L_00497F9C; }
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 36u)));  goto L_00497FB8; }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00497FB4; } }
L_00497F9C:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00497FB4; } }
    c.r[3].d[0] = ld16((c.r[19].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[19].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00497FB4:
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 1;
L_00497FB8:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 2;
L_00497FC0:
    set32(c.r[3], 0u - 12289u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497FD4u); set32(c.r[4], ld32((c.r[16].w[0] + 140u)));  if (depth < kMaxDepth) unit_0060(c, 529u, depth + 1u); else { c.pc = 0x002836E0u; return; } if (c.pc != 0x00497FD4u) [[unlikely]] return; }
L_00497FD4:
    set32(c.r[16], ld32((c.r[29].w[0] + 140u)));
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 120u)));  [[clang::musttail]] return unit_00E6(c, 4u, depth); }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497FE8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00497FE8u) [[unlikely]] return; }
L_00497FE8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00497FF8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00497FF8u) [[unlikely]] return; }
L_00497FF8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_00E6(c, 3u, depth); } }
    [[clang::musttail]] return unit_00E6(c, 2u, depth);
}

}
