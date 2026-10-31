#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00AA[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 9, 10, 11, 0, 12, 0, 0, 0,
    0, 13, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 16, 0, 0, 17, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 20, 0, 0, 21, 0, 0,
    22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0,
    0, 30, 0, 0, 31, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 41,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 46, 47, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 50, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 51, 0, 0, 0, 0, 0, 0, 52, 53, 0, 0, 0, 0, 0, 54, 55, 0, 0, 0, 0, 0, 0, 56, 57, 0, 0, 0, 0, 0, 58, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 67, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0,
    0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    74, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0,
    0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 83, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0,
    0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0,
    0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 102,
    0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 105, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 110, 0,
    0, 111, 0, 0, 112, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 118, 0, 119, 0, 120, 0,
    0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0,
    128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130,
    0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    135, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 138, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 142, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 145, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148,
    0, 149, 0, 150, 0, 0, 0, 0, 151, 152, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0,
    155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0,
    0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 161, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0,
    165, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 168, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0,
    173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 176, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 178, 0, 0, 179, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 187, 0, 188, 0, 0, 189, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0,
    0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 199, 0, 0,
    0, 200, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 208,
    0, 0, 209, 0, 0, 0, 210, 0, 0, 211, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 216, 0, 0, 217,
    0, 0, 218, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 230, 0, 0, 231, 0, 0, 0, 232, 0, 0, 233, 0, 0, 0, 234, 0, 0, 235, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0,
    238, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0, 244, 0, 0, 245, 0, 0, 0, 246, 0,
    0, 247, 0, 0, 0, 248, 0, 0, 249, 0, 0, 0, 250, 0, 0, 251, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 255, 0, 0,
    0, 0, 256, 0, 0, 257, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 264,
    0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0,
    0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 274, 0, 0, 0, 275, 0, 0, 276, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 283, 0, 0, 0, 284, 0, 0, 285, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0,
    0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 289, 0, 0, 0, 290, 0, 0, 291, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 296, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 299, 0, 0, 0, 0, 300,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0,
    0, 0, 304, 0, 0, 0, 305, 0, 0, 306, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 310, 0,
    0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 313, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 317, 0, 0, 0, 0, 0, 0,
    318, 0, 0, 319, 0, 320, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323,
    0, 0, 324, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0,
    330, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0,
    0, 334, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 338, 0, 0,
    0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347,
    0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 353, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 360, 361, 0, 0, 0,
    0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 363, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 369, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 384, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 391, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 396, 397, 0, 0, 398, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 403, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 405, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00AA(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003A8000;
    case 2u: goto L_003A8084;
    case 3u: goto L_003A80AC;
    case 4u: goto L_003A80B4;
    case 5u: goto L_003A80CC;
    case 6u: goto L_003A80EC;
    case 7u: goto L_003A8134;
    case 8u: goto L_003A8154;
    case 9u: goto L_003A8160;
    case 10u: goto L_003A8164;
    case 11u: goto L_003A8168;
    case 12u: goto L_003A8170;
    case 13u: goto L_003A8184;
    case 14u: goto L_003A8194;
    case 15u: goto L_003A81A0;
    case 16u: goto L_003A81B0;
    case 17u: goto L_003A81BC;
    case 18u: goto L_003A81CC;
    case 19u: goto L_003A81D8;
    case 20u: goto L_003A81E8;
    case 21u: goto L_003A81F4;
    case 22u: goto L_003A8200;
    case 23u: goto L_003A8214;
    case 24u: goto L_003A8228;
    case 25u: goto L_003A8234;
    case 26u: goto L_003A8240;
    case 27u: goto L_003A8250;
    case 28u: goto L_003A8264;
    case 29u: goto L_003A8278;
    case 30u: goto L_003A8284;
    case 31u: goto L_003A8290;
    case 32u: goto L_003A829C;
    case 33u: goto L_003A82AC;
    case 34u: goto L_003A8304;
    case 35u: goto L_003A8318;
    case 36u: goto L_003A8334;
    case 37u: goto L_003A833C;
    case 38u: goto L_003A8348;
    case 39u: goto L_003A835C;
    case 40u: goto L_003A8368;
    case 41u: goto L_003A837C;
    case 42u: goto L_003A83B0;
    case 43u: goto L_003A83BC;
    case 44u: goto L_003A83D0;
    case 45u: goto L_003A8454;
    case 46u: goto L_003A8460;
    case 47u: goto L_003A8464;
    case 48u: goto L_003A84BC;
    case 49u: goto L_003A84D8;
    case 50u: goto L_003A84DC;
    case 51u: goto L_003A8504;
    case 52u: goto L_003A8520;
    case 53u: goto L_003A8524;
    case 54u: goto L_003A853C;
    case 55u: goto L_003A8540;
    case 56u: goto L_003A855C;
    case 57u: goto L_003A8560;
    case 58u: goto L_003A8578;
    case 59u: goto L_003A85A4;
    case 60u: goto L_003A85EC;
    case 61u: goto L_003A8678;
    case 62u: goto L_003A86C0;
    case 63u: goto L_003A86D0;
    case 64u: goto L_003A875C;
    case 65u: goto L_003A878C;
    case 66u: goto L_003A87B0;
    case 67u: goto L_003A8818;
    case 68u: goto L_003A881C;
    case 69u: goto L_003A8854;
    case 70u: goto L_003A8860;
    case 71u: goto L_003A8874;
    case 72u: goto L_003A8890;
    case 73u: goto L_003A8898;
    case 74u: goto L_003A8900;
    case 75u: goto L_003A8924;
    case 76u: goto L_003A893C;
    case 77u: goto L_003A8950;
    case 78u: goto L_003A8964;
    case 79u: goto L_003A8978;
    case 80u: goto L_003A898C;
    case 81u: goto L_003A899C;
    case 82u: goto L_003A89A8;
    case 83u: goto L_003A89B8;
    case 84u: goto L_003A89C0;
    case 85u: goto L_003A89D0;
    case 86u: goto L_003A89E4;
    case 87u: goto L_003A89F8;
    case 88u: goto L_003A8A04;
    case 89u: goto L_003A8A10;
    case 90u: goto L_003A8A2C;
    case 91u: goto L_003A8A38;
    case 92u: goto L_003A8A44;
    case 93u: goto L_003A8A54;
    case 94u: goto L_003A8A70;
    case 95u: goto L_003A8A94;
    case 96u: goto L_003A8AA4;
    case 97u: goto L_003A8AB0;
    case 98u: goto L_003A8AC0;
    case 99u: goto L_003A8ACC;
    case 100u: goto L_003A8AE0;
    case 101u: goto L_003A8AF0;
    case 102u: goto L_003A8AFC;
    case 103u: goto L_003A8B0C;
    case 104u: goto L_003A8B18;
    case 105u: goto L_003A8B28;
    case 106u: goto L_003A8B34;
    case 107u: goto L_003A8B40;
    case 108u: goto L_003A8B58;
    case 109u: goto L_003A8B64;
    case 110u: goto L_003A8B78;
    case 111u: goto L_003A8B84;
    case 112u: goto L_003A8B90;
    case 113u: goto L_003A8B94;
    case 114u: goto L_003A8BAC;
    case 115u: goto L_003A8BBC;
    case 116u: goto L_003A8BC8;
    case 117u: goto L_003A8BDC;
    case 118u: goto L_003A8BE8;
    case 119u: goto L_003A8BF0;
    case 120u: goto L_003A8BF8;
    case 121u: goto L_003A8C04;
    case 122u: goto L_003A8C24;
    case 123u: goto L_003A8C30;
    case 124u: goto L_003A8C44;
    case 125u: goto L_003A8C54;
    case 126u: goto L_003A8C60;
    case 127u: goto L_003A8C74;
    case 128u: goto L_003A8C80;
    case 129u: goto L_003A8CD8;
    case 130u: goto L_003A8CFC;
    case 131u: goto L_003A8D08;
    case 132u: goto L_003A8D1C;
    case 133u: goto L_003A8D40;
    case 134u: goto L_003A8D48;
    case 135u: goto L_003A8D80;
    case 136u: goto L_003A8DA4;
    case 137u: goto L_003A8DB0;
    case 138u: goto L_003A8DC0;
    case 139u: goto L_003A8DCC;
    case 140u: goto L_003A8DE0;
    case 141u: goto L_003A8DF0;
    case 142u: goto L_003A8EA0;
    case 143u: goto L_003A8EA4;
    case 144u: goto L_003A8EF0;
    case 145u: goto L_003A8F1C;
    case 146u: goto L_003A8F24;
    case 147u: goto L_003A8F44;
    case 148u: goto L_003A8F7C;
    case 149u: goto L_003A8F84;
    case 150u: goto L_003A8F8C;
    case 151u: goto L_003A8FA0;
    case 152u: goto L_003A8FA4;
    case 153u: goto L_003A8FAC;
    case 154u: goto L_003A8FF8;
    case 155u: goto L_003A9000;
    case 156u: goto L_003A903C;
    case 157u: goto L_003A906C;
    case 158u: goto L_003A9078;
    case 159u: goto L_003A9098;
    case 160u: goto L_003A90C4;
    case 161u: goto L_003A9108;
    case 162u: goto L_003A9110;
    case 163u: goto L_003A915C;
    case 164u: goto L_003A916C;
    case 165u: goto L_003A9180;
    case 166u: goto L_003A9190;
    case 167u: goto L_003A919C;
    case 168u: goto L_003A91AC;
    case 169u: goto L_003A91B8;
    case 170u: goto L_003A91CC;
    case 171u: goto L_003A91E0;
    case 172u: goto L_003A91F4;
    case 173u: goto L_003A9200;
    case 174u: goto L_003A9210;
    case 175u: goto L_003A9228;
    case 176u: goto L_003A9230;
    case 177u: goto L_003A9238;
    case 178u: goto L_003A9284;
    case 179u: goto L_003A9290;
    case 180u: goto L_003A92A0;
    case 181u: goto L_003A92AC;
    case 182u: goto L_003A92BC;
    case 183u: goto L_003A92CC;
    case 184u: goto L_003A9310;
    case 185u: goto L_003A9320;
    case 186u: goto L_003A932C;
    case 187u: goto L_003A9340;
    case 188u: goto L_003A9348;
    case 189u: goto L_003A9354;
    case 190u: goto L_003A9358;
    case 191u: goto L_003A93E8;
    case 192u: goto L_003A93F8;
    case 193u: goto L_003A9418;
    case 194u: goto L_003A9428;
    case 195u: goto L_003A9434;
    case 196u: goto L_003A9444;
    case 197u: goto L_003A9458;
    case 198u: goto L_003A9464;
    case 199u: goto L_003A9474;
    case 200u: goto L_003A9484;
    case 201u: goto L_003A9490;
    case 202u: goto L_003A94A0;
    case 203u: goto L_003A94B4;
    case 204u: goto L_003A94C4;
    case 205u: goto L_003A94D0;
    case 206u: goto L_003A94E0;
    case 207u: goto L_003A94EC;
    case 208u: goto L_003A94FC;
    case 209u: goto L_003A9508;
    case 210u: goto L_003A9518;
    case 211u: goto L_003A9524;
    case 212u: goto L_003A9530;
    case 213u: goto L_003A9540;
    case 214u: goto L_003A9554;
    case 215u: goto L_003A9560;
    case 216u: goto L_003A9570;
    case 217u: goto L_003A957C;
    case 218u: goto L_003A9588;
    case 219u: goto L_003A9594;
    case 220u: goto L_003A95A4;
    case 221u: goto L_003A95CC;
    case 222u: goto L_003A95D0;
    case 223u: goto L_003A9628;
    case 224u: goto L_003A9634;
    case 225u: goto L_003A9678;
    case 226u: goto L_003A9724;
    case 227u: goto L_003A9734;
    case 228u: goto L_003A9744;
    case 229u: goto L_003A9754;
    case 230u: goto L_003A9790;
    case 231u: goto L_003A979C;
    case 232u: goto L_003A97AC;
    case 233u: goto L_003A97B8;
    case 234u: goto L_003A97C8;
    case 235u: goto L_003A97D4;
    case 236u: goto L_003A97E0;
    case 237u: goto L_003A97F0;
    case 238u: goto L_003A9800;
    case 239u: goto L_003A9814;
    case 240u: goto L_003A9824;
    case 241u: goto L_003A9830;
    case 242u: goto L_003A9840;
    case 243u: goto L_003A984C;
    case 244u: goto L_003A985C;
    case 245u: goto L_003A9868;
    case 246u: goto L_003A9878;
    case 247u: goto L_003A9884;
    case 248u: goto L_003A9894;
    case 249u: goto L_003A98A0;
    case 250u: goto L_003A98B0;
    case 251u: goto L_003A98BC;
    case 252u: goto L_003A98C8;
    case 253u: goto L_003A98D8;
    case 254u: goto L_003A98E8;
    case 255u: goto L_003A98F4;
    case 256u: goto L_003A9908;
    case 257u: goto L_003A9914;
    case 258u: goto L_003A9920;
    case 259u: goto L_003A9930;
    case 260u: goto L_003A9940;
    case 261u: goto L_003A9950;
    case 262u: goto L_003A995C;
    case 263u: goto L_003A996C;
    case 264u: goto L_003A997C;
    case 265u: goto L_003A9988;
    case 266u: goto L_003A999C;
    case 267u: goto L_003A99B0;
    case 268u: goto L_003A99C4;
    case 269u: goto L_003A99D0;
    case 270u: goto L_003A99E8;
    case 271u: goto L_003A99F4;
    case 272u: goto L_003A9A04;
    case 273u: goto L_003A9A20;
    case 274u: goto L_003A9A2C;
    case 275u: goto L_003A9A3C;
    case 276u: goto L_003A9A48;
    case 277u: goto L_003A9A54;
    case 278u: goto L_003A9AA4;
    case 279u: goto L_003A9AD8;
    case 280u: goto L_003A9B34;
    case 281u: goto L_003A9B8C;
    case 282u: goto L_003A9BA8;
    case 283u: goto L_003A9BB0;
    case 284u: goto L_003A9BC0;
    case 285u: goto L_003A9BCC;
    case 286u: goto L_003A9BE8;
    case 287u: goto L_003A9C04;
    case 288u: goto L_003A9C20;
    case 289u: goto L_003A9C28;
    case 290u: goto L_003A9C38;
    case 291u: goto L_003A9C44;
    case 292u: goto L_003A9C60;
    case 293u: goto L_003A9C90;
    case 294u: goto L_003A9CA4;
    case 295u: goto L_003A9CB4;
    case 296u: goto L_003A9CBC;
    case 297u: goto L_003A9CC8;
    case 298u: goto L_003A9CDC;
    case 299u: goto L_003A9CE8;
    case 300u: goto L_003A9CFC;
    case 301u: goto L_003A9D30;
    case 302u: goto L_003A9D60;
    case 303u: goto L_003A9D70;
    case 304u: goto L_003A9D88;
    case 305u: goto L_003A9D98;
    case 306u: goto L_003A9DA4;
    case 307u: goto L_003A9DB0;
    case 308u: goto L_003A9DC0;
    case 309u: goto L_003A9DE8;
    case 310u: goto L_003A9DF8;
    case 311u: goto L_003A9E0C;
    case 312u: goto L_003A9E1C;
    case 313u: goto L_003A9E28;
    case 314u: goto L_003A9E34;
    case 315u: goto L_003A9E44;
    case 316u: goto L_003A9E58;
    case 317u: goto L_003A9E64;
    case 318u: goto L_003A9E80;
    case 319u: goto L_003A9E8C;
    case 320u: goto L_003A9E94;
    case 321u: goto L_003A9EA0;
    case 322u: goto L_003A9EC0;
    case 323u: goto L_003A9EFC;
    case 324u: goto L_003A9F08;
    case 325u: goto L_003A9F10;
    case 326u: goto L_003A9F20;
    case 327u: goto L_003A9F34;
    case 328u: goto L_003A9F4C;
    case 329u: goto L_003A9F5C;
    case 330u: goto L_003A9F80;
    case 331u: goto L_003A9F94;
    case 332u: goto L_003A9FB0;
    case 333u: goto L_003A9FF8;
    case 334u: goto L_003AA004;
    case 335u: goto L_003AA008;
    case 336u: goto L_003AA058;
    case 337u: goto L_003AA068;
    case 338u: goto L_003AA074;
    case 339u: goto L_003AA094;
    case 340u: goto L_003AA0CC;
    case 341u: goto L_003AA160;
    case 342u: goto L_003AA198;
    case 343u: goto L_003AA21C;
    case 344u: goto L_003AA238;
    case 345u: goto L_003AA290;
    case 346u: goto L_003AA2B8;
    case 347u: goto L_003AA2FC;
    case 348u: goto L_003AA304;
    case 349u: goto L_003AA45C;
    case 350u: goto L_003AA558;
    case 351u: goto L_003AA5B4;
    case 352u: goto L_003AA6C8;
    case 353u: goto L_003AA720;
    case 354u: goto L_003AA724;
    case 355u: goto L_003AA7B4;
    case 356u: goto L_003AA8A0;
    case 357u: goto L_003AA8F0;
    case 358u: goto L_003AAA60;
    case 359u: goto L_003AAAE8;
    case 360u: goto L_003AAAEC;
    case 361u: goto L_003AAAF0;
    case 362u: goto L_003AAB04;
    case 363u: goto L_003AAB8C;
    case 364u: goto L_003AAB94;
    case 365u: goto L_003AABB8;
    case 366u: goto L_003AAC28;
    case 367u: goto L_003AAC54;
    case 368u: goto L_003AACD0;
    case 369u: goto L_003AACD4;
    case 370u: goto L_003AACD8;
    case 371u: goto L_003AAD74;
    case 372u: goto L_003AAE98;
    case 373u: goto L_003AAED8;
    case 374u: goto L_003AAF14;
    case 375u: goto L_003AAF34;
    case 376u: goto L_003AAF48;
    case 377u: goto L_003AAF8C;
    case 378u: goto L_003AAFC8;
    case 379u: goto L_003AB020;
    case 380u: goto L_003AB068;
    case 381u: goto L_003AB160;
    case 382u: goto L_003AB260;
    case 383u: goto L_003AB2D8;
    case 384u: goto L_003AB310;
    case 385u: goto L_003AB314;
    case 386u: goto L_003AB384;
    case 387u: goto L_003AB3B0;
    case 388u: goto L_003AB430;
    case 389u: goto L_003AB434;
    case 390u: goto L_003AB45C;
    case 391u: goto L_003AB460;
    case 392u: goto L_003AB4D4;
    case 393u: goto L_003AB53C;
    case 394u: goto L_003AB5A4;
    case 395u: goto L_003AB66C;
    case 396u: goto L_003AB718;
    case 397u: goto L_003AB71C;
    case 398u: goto L_003AB728;
    case 399u: goto L_003AB72C;
    case 400u: goto L_003AB8D4;
    case 401u: goto L_003ABBB0;
    case 402u: goto L_003ABBF4;
    case 403u: goto L_003ABBF8;
    case 404u: goto L_003ABC58;
    case 405u: goto L_003ABC70;
    case 406u: goto L_003ABCCC;
    case 407u: goto L_003ABD28;
    case 408u: goto L_003ABDB0;
    case 409u: goto L_003ABDCC;
    case 410u: goto L_003ABEB0;
    case 411u: goto L_003ABF00;
    case 412u: goto L_003ABF2C;
    case 413u: goto L_003ABF48;
    case 414u: goto L_003ABF88;
    case 415u: goto L_003ABFBC;
    default: bad_entry(c, 0x003A8000u); return;
    }
L_003A8000:
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x40860000u);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[17], c.r[16].w[0] >> 31);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[14].d[0] = c.r[14].d[0] | 11841ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[16].d[0] = c.r[16].d[0] & c.r[15].d[0];
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[14].d[0] = c.r[14].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[14].d[0] == 0ull; c.r[18].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A80F4; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x7FEF0000u);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[15].d[0] = c.r[15].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] == 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x000F0000u);  if (t) { goto L_003A80BC; } }
    c.r[14].d[0] = c.r[4].d[0] << 32;
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[14].d[0] = static_cast<std::uint64_t>(c.r[14].sd[0] >> 32);
    c.r[15].d[0] = c.r[16].d[0] & c.r[15].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[14].d[0];
    c.budget -= 7;
    { const bool t = c.r[15].d[0] != 0ull; c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A80AC; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003A8080; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003A8080:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003A8084:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003A80AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A80B4u);  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A80B4u) [[unlikely]] return; }
L_003A80B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8084u | kUnwind; return; } goto L_003A8084; } }
L_003A80BC:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A80CCu); c.r[4].d[0] = ld64((c.r[15].w[0] + 28144u));  if (depth < kMaxDepth) unit_00AC(c, 94u, depth + 1u); else { c.pc = 0x003B23D0u; return; } if (c.pc != 0x003A80CCu) [[unlikely]] return; }
L_003A80CC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003A80E0; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld64((c.r[15].w[0] + 28152u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8084u | kUnwind; return; } goto L_003A8084; } }
L_003A80E0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A80ECu); c.r[5].d[0] = ld64((c.r[15].w[0] + 28160u));  if (depth < kMaxDepth) unit_00AC(c, 94u, depth + 1u); else { c.pc = 0x003B23D0u; return; } if (c.pc != 0x003A80ECu) [[unlikely]] return; }
L_003A80EC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[4].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8084u | kUnwind; return; } goto L_003A8084; } }
L_003A80F4:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x3FD60000u);
    c.r[15].d[0] = c.r[15].d[0] | 11842ull;
    c.r[15].d[0] = c.r[15].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] == 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x3FF00000u);  if (t) { goto L_003A8384; } }
    c.r[15].d[0] = c.r[15].d[0] | 41649ull;
    c.r[15].d[0] = c.r[15].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] != 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003A830C; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[16], c.r[17].w[0] << 3);
    set32(c.r[15], c.r[15].w[0] + 28064u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[15], c.r[16].w[0] + c.r[15].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8134u); c.r[5].d[0] = ld64((c.r[15].w[0]));  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A8134u) [[unlikely]] return; }
L_003A8134:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[14], 0u - c.r[17].w[0]);
    set32(c.r[15], c.r[15].w[0] + 28080u);
    set32(c.r[14], c.r[14].w[0] - c.r[17].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[15].w[0]);
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[20].d[0] = ld64((c.r[16].w[0]));
    set32(c.r[19], c.r[14].w[0] + 1u);
    c.budget -= 8;
L_003A8154:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8160u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A8160u) [[unlikely]] return; }
L_003A8160:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003A8164:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003A8168:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8170u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A8170u) [[unlikely]] return; }
L_003A8170:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[15].w[0] + 28200u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8184u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A8184u) [[unlikely]] return; }
L_003A8184:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8194u); c.r[5].d[0] = ld64((c.r[15].w[0] + 28208u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A8194u) [[unlikely]] return; }
L_003A8194:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A81A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A81A0u) [[unlikely]] return; }
L_003A81A0:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A81B0u); c.r[5].d[0] = ld64((c.r[15].w[0] + 28216u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A81B0u) [[unlikely]] return; }
L_003A81B0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A81BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A81BCu) [[unlikely]] return; }
L_003A81BC:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A81CCu); c.r[5].d[0] = ld64((c.r[15].w[0] + 28224u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A81CCu) [[unlikely]] return; }
L_003A81CC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A81D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A81D8u) [[unlikely]] return; }
L_003A81D8:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A81E8u); c.r[5].d[0] = ld64((c.r[15].w[0] + 28232u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A81E8u) [[unlikely]] return; }
L_003A81E8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A81F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A81F4u) [[unlikely]] return; }
L_003A81F4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8200u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A8200u) [[unlikely]] return; }
L_003A8200:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A8258; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8214u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A8214u) [[unlikely]] return; }
L_003A8214:
    set32(c.r[5], 0u + 1u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8228u); c.r[5].d[0] = c.r[5].d[0] << 62;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A8228u) [[unlikely]] return; }
L_003A8228:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8234u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x003A8234u) [[unlikely]] return; }
L_003A8234:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8240u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A8240u) [[unlikely]] return; }
L_003A8240:
    set32(c.r[4], 0u + 1023u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8250u); c.r[4].d[0] = c.r[4].d[0] << 52;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A8250u) [[unlikely]] return; }
L_003A8250:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8084u | kUnwind; return; } goto L_003A8084; } }
L_003A8258:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8264u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A8264u) [[unlikely]] return; }
L_003A8264:
    set32(c.r[4], 0u + 1u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8278u); c.r[4].d[0] = c.r[4].d[0] << 62;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A8278u) [[unlikely]] return; }
L_003A8278:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8284u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x003A8284u) [[unlikely]] return; }
L_003A8284:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8290u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A8290u) [[unlikely]] return; }
L_003A8290:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A829Cu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A829Cu) [[unlikely]] return; }
L_003A829C:
    set32(c.r[4], 0u + 1023u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A82ACu); c.r[4].d[0] = c.r[4].d[0] << 52;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A82ACu) [[unlikely]] return; }
L_003A82AC:
    c.r[15].d[0] = c.r[19].sd[0] < -1021ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[13], c.r[19].w[0] + 1000u);  if (t) { goto L_003A82D8; } }
    set32(c.r[13], c.r[19].w[0] << 20);
    c.r[15].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[15], c.r[15].w[0] + c.r[13].w[0]);
    c.r[14].d[0] = c.r[2].d[0] << 32;
    c.r[14].d[0] = c.r[14].d[0] >> 32;
    c.r[15].d[0] = c.r[15].d[0] << 32;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[14].d[0] | c.r[15].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8084u | kUnwind; return; } goto L_003A8084; } }
L_003A82D8:
    c.r[15].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[13], c.r[13].w[0] << 20);
    c.r[14].d[0] = c.r[2].d[0] << 32;
    set32(c.r[15], c.r[15].w[0] + c.r[13].w[0]);
    c.r[14].d[0] = c.r[14].d[0] >> 32;
    c.r[15].d[0] = c.r[15].d[0] << 32;
    c.r[2].d[0] = c.r[14].d[0] | c.r[15].d[0];
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8304u); c.r[5].d[0] = ld64((c.r[15].w[0] + 28240u));  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A8304u) [[unlikely]] return; }
L_003A8304:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8084u | kUnwind; return; } goto L_003A8084; } }
L_003A830C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8318u); c.r[5].d[0] = ld64((c.r[15].w[0] + 28168u));  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A8318u) [[unlikely]] return; }
L_003A8318:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[14], c.r[17].w[0] << 3);
    set32(c.r[15], c.r[15].w[0] + 28016u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[14], c.r[14].w[0] + c.r[15].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8334u); c.r[5].d[0] = ld64((c.r[14].w[0]));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A8334u) [[unlikely]] return; }
L_003A8334:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A833Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 103u, depth + 1u); else { c.pc = 0x003B24D0u; return; } if (c.pc != 0x003A833Cu) [[unlikely]] return; }
L_003A833C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8348u); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x003A8348u) [[unlikely]] return; }
L_003A8348:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[15].w[0] + 28176u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A835Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A835Cu) [[unlikely]] return; }
L_003A835C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8368u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A8368u) [[unlikely]] return; }
L_003A8368:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[15].w[0] + 28184u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A837Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A837Cu) [[unlikely]] return; }
L_003A837C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8154u | kUnwind; return; } goto L_003A8154; } }
L_003A8384:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x3E2F0000u);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[15].d[0] = c.r[15].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[15].d[0] != 0ull) { c.r[19].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8164u | kUnwind; return; } goto L_003A8164; }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[15].w[0] + 28192u));
    set32(c.r[16], 0u + 1023u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A83B0u); c.r[16].d[0] = c.r[16].d[0] << 52;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A83B0u) [[unlikely]] return; }
L_003A83B0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A83BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 94u, depth + 1u); else { c.pc = 0x003B23D0u; return; } if (c.pc != 0x003A83BCu) [[unlikely]] return; }
L_003A83BC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8168u | kUnwind; return; } goto L_003A8168; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A80ACu | kUnwind; return; } goto L_003A80AC; } }
    c.budget -= 1;
L_003A83D0:
    c.r[14].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[6].d[0] = c.r[4].d[0] << 32;
    c.r[15].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[14].d[0] = c.r[14].d[0] | 65535ull;
    c.r[7].d[0] = c.r[5].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[4].d[0] = c.r[11].d[0] & c.r[15].d[0];
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[10].d[0] = c.r[10].d[0] & c.r[14].d[0];
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    c.r[15].d[0] = c.r[10].d[0] | c.r[7].d[0];
    c.budget -= 19;
    { const bool t = c.r[15].d[0] == 0ull; c.r[11].d[0] = c.r[11].d[0] ^ c.r[4].d[0];  if (t) { goto L_003A844C; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x7FEF0000u);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[15], 0u - c.r[7].w[0]);  if (t) { goto L_003A844C; } }
    c.r[14].sd[0] = static_cast<std::int32_t>(0x7FF00000u);
    c.r[15].d[0] = c.r[7].d[0] | c.r[15].d[0];
    set32(c.r[15], c.r[15].w[0] >> 31);
    c.r[15].d[0] = c.r[10].d[0] | c.r[15].d[0];
    c.r[14].d[0] = c.r[14].d[0] < c.r[15].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[14].d[0] == 0ull; c.r[15].d[0] = c.r[10].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;  if (t) { goto L_003A846C; } }
L_003A844C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8454u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A8454u) [[unlikely]] return; }
L_003A8454:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8460u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x003A8460u) [[unlikely]] return; }
L_003A8460:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003A8464:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003A846C:
    c.budget -= 2;
    { const bool t = c.r[15].d[0] != 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x000F0000u);  if (t) { goto L_003A8494; } }
    c.r[15].d[0] = c.r[11].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8464u | kUnwind; return; } goto L_003A8464; } }
    c.r[15].d[0] = c.r[6].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8464u | kUnwind; return; } goto L_003A8464; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == c.r[7].d[0]; c.r[15].sd[0] = static_cast<std::int32_t>(0x000F0000u);  if (t) { goto L_003A86D0; } }
L_003A8494:
    set32(c.r[14], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> 20));
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[12], c.r[14].w[0] - 1023u);  if (t) { goto L_003A84D8; } }
    c.budget -= 2;
    { const bool t = c.r[11].d[0] != 0ull; set32(c.r[15], c.r[11].w[0] << 11);  if (t) { goto L_003A8780; } }
    set32(c.r[12], 0u - 1043u);
    c.budget -= 3;
    { const bool t = c.r[9].sd[0] <= 0; c.r[15].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_003A84D8; } }
L_003A84BC:
    set32(c.r[15], c.r[15].w[0] << 1);
    c.budget -= 7;
    { const bool t = c.r[15].sd[0] > 0; set32(c.r[12], c.r[12].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A84BCu | kUnwind; return; } goto L_003A84BC; } }
L_003A84D8:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.budget -= 1;
L_003A84DC:
    set32(c.r[14], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 20));
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[5], c.r[14].w[0] - 1023u);  if (t) { goto L_003A8520; } }
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != 0ull; set32(c.r[15], c.r[10].w[0] << 11);  if (t) { goto L_003A8754; } }
    set32(c.r[5], 0u - 1043u);
    c.budget -= 3;
    { const bool t = c.r[8].sd[0] <= 0; c.r[15].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003A8520; } }
L_003A8504:
    set32(c.r[15], c.r[15].w[0] << 1);
    c.budget -= 7;
    { const bool t = c.r[15].sd[0] > 0; set32(c.r[5], c.r[5].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8504u | kUnwind; return; } goto L_003A8504; } }
L_003A8520:
    c.r[15].d[0] = c.r[12].sd[0] < -1022ll ? 1ull : 0ull;
    c.budget -= 1;
L_003A8524:
    c.budget -= 2;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[15], 0u - 1022u);  if (t) { goto L_003A8728; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[15].d[0] = c.r[11].d[0] & c.r[15].d[0];
    c.budget -= 4;
L_003A853C:
    c.r[11].d[0] = c.r[14].d[0] | c.r[15].d[0];
    c.budget -= 1;
L_003A8540:
    c.r[2].d[0] = c.r[5].sd[0] < -1022ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[15], 0u - 1022u);  if (t) { goto L_003A86FC; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[15].d[0] = c.r[10].d[0] & c.r[15].d[0];
    c.budget -= 4;
L_003A855C:
    c.r[10].d[0] = c.r[14].d[0] | c.r[15].d[0];
    c.budget -= 1;
L_003A8560:
    set32(c.r[13], c.r[12].w[0] - c.r[5].w[0]);
    set32(c.r[15], 0u - 1u);
    set32(c.r[13], c.r[13].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[13].d[0] == c.r[15].d[0]; c.r[15].d[0] = c.r[6].d[0] < c.r[7].d[0] ? 1ull : 0ull;  if (t) { goto L_003A85B0; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_003A8578:
    set32(c.r[14], c.r[11].w[0] - c.r[10].w[0]);
    set32(c.r[14], c.r[14].w[0] - c.r[15].w[0]);
    set32(c.r[15], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[8], c.r[14].w[0] << 1);
    set32(c.r[9], c.r[15].w[0] >> 31);
    c.budget -= 7;
    { const bool t = c.r[14].sd[0] >= 0; c.r[12].d[0] = c.r[14].d[0] | c.r[15].d[0];  if (t) { goto L_003A86EC; } }
    set32(c.r[15], c.r[6].w[0] >> 31);
    set32(c.r[14], c.r[11].w[0] << 1);
    set32(c.r[11], c.r[14].w[0] + c.r[15].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    c.budget -= 4;
L_003A85A4:
    set32(c.r[13], c.r[13].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[13].d[0] != c.r[3].d[0]; c.r[15].d[0] = c.r[6].d[0] < c.r[7].d[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8578u | kUnwind; return; } goto L_003A8578; } }
L_003A85B0:
    set32(c.r[14], c.r[11].w[0] - c.r[10].w[0]);
    set32(c.r[14], c.r[14].w[0] - c.r[15].w[0]);
    c.budget -= 4;
    { const bool t = c.r[14].sd[0] < 0; set32(c.r[15], c.r[6].w[0] - c.r[7].w[0]);  if (t) { goto L_003A85C8; } }
    c.r[11].d[0] = c.r[14].d[0] + 0ull;
    c.r[6].d[0] = c.r[15].d[0] + 0ull;
    c.budget -= 2;
L_003A85C8:
    c.r[15].d[0] = c.r[11].d[0] | c.r[6].d[0];
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x000F0000u);  if (t) { goto L_003A86D0; } }
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] != 0ull;  if (t) { goto L_003A860C; } }
    c.r[12].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[12].d[0] = c.r[12].d[0] | 65535ull;
    c.budget -= 2;
L_003A85EC:
    set32(c.r[15], c.r[11].w[0] << 1);
    set32(c.r[14], c.r[6].w[0] >> 31);
    set32(c.r[11], c.r[15].w[0] + c.r[14].w[0]);
    set32(c.r[6], c.r[6].w[0] << 1);
    c.r[15].d[0] = c.r[12].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A85ECu | kUnwind; return; } goto L_003A85EC; } }
    c.r[2].d[0] = c.r[5].sd[0] < -1022ll ? 1ull : 0ull;
    c.budget -= 1;
L_003A860C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[15], 0u - 1022u);  if (t) { goto L_003A8658; } }
    set32(c.r[14], c.r[5].w[0] + 1023u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0xFFF00000u);
    set32(c.r[15], c.r[11].w[0] + c.r[15].w[0]);
    set32(c.r[14], c.r[14].w[0] << 20);
    c.r[11].d[0] = c.r[15].d[0] | c.r[14].d[0];
    c.r[24].d[0] = c.r[24].d[0] << 32;
    c.r[15].d[0] = c.r[11].d[0] | c.r[4].d[0];
    c.r[24].d[0] = c.r[24].d[0] >> 32;
    c.r[15].d[0] = c.r[15].d[0] << 32;
    c.r[14].d[0] = c.r[6].d[0] << 32;
    c.r[24].d[0] = c.r[24].d[0] | c.r[15].d[0];
    c.r[14].d[0] = c.r[14].d[0] >> 32;
    set32(c.r[15], 0u - 1u);
    c.r[15].d[0] = c.r[15].d[0] << 32;
    c.r[24].d[0] = c.r[24].d[0] & c.r[15].d[0];
    c.budget -= 17;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[24].d[0] | c.r[14].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8460u | kUnwind; return; } goto L_003A8460; } }
L_003A8658:
    set32(c.r[13], c.r[15].w[0] - c.r[5].w[0]);
    c.r[14].d[0] = c.r[13].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[14].d[0] == 0ull; set32(c.r[15], 0u - c.r[13].w[0]);  if (t) { goto L_003A86A8; } }
    set32(c.r[14], c.r[6].w[0] >> (c.r[13].w[0] & 31u));
    set32(c.r[15], c.r[11].w[0] << (c.r[15].w[0] & 31u));
    c.r[6].d[0] = c.r[14].d[0] | c.r[15].d[0];
    set32(c.r[11], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> (c.r[13].w[0] & 31u)));
    c.budget -= 4;
L_003A8678:
    c.r[15].d[0] = c.r[11].d[0] | c.r[4].d[0];
    c.r[24].d[0] = c.r[24].d[0] << 32;
    c.r[24].d[0] = c.r[24].d[0] >> 32;
    c.r[15].d[0] = c.r[15].d[0] << 32;
    set32(c.r[14], 0u - 1u);
    c.r[13].d[0] = c.r[6].d[0] << 32;
    c.r[24].d[0] = c.r[24].d[0] | c.r[15].d[0];
    c.r[14].d[0] = c.r[14].d[0] << 32;
    c.r[24].d[0] = c.r[24].d[0] & c.r[14].d[0];
    c.r[13].d[0] = c.r[13].d[0] >> 32;
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[24].d[0] | c.r[13].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8460u | kUnwind; return; } goto L_003A8460; } }
L_003A86A8:
    c.r[15].d[0] = c.r[13].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], 0u - c.r[13].w[0]);  if (t) { goto L_003A86C8; } }
    set32(c.r[14], c.r[6].w[0] >> (c.r[13].w[0] & 31u));
    set32(c.r[15], c.r[11].w[0] << (c.r[15].w[0] & 31u));
    c.r[6].d[0] = c.r[15].d[0] | c.r[14].d[0];
    c.budget -= 3;
L_003A86C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[11].d[0] = c.r[4].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8678u | kUnwind; return; } goto L_003A8678; } }
L_003A86C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> (c.r[13].w[0] & 31u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A86C0u | kUnwind; return; } goto L_003A86C0; } }
L_003A86D0:
    set32(c.r[14], c.r[4].w[0] >> 31);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[14], c.r[14].w[0] << 3);
    set32(c.r[15], c.r[15].w[0] + 28256u);
    set32(c.r[14], c.r[14].w[0] + c.r[15].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld64((c.r[14].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8460u | kUnwind; return; } goto L_003A8460; } }
L_003A86EC:
    c.budget -= 2;
    { const bool t = c.r[12].d[0] == 0ull; set32(c.r[11], c.r[8].w[0] + c.r[9].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A86D0u | kUnwind; return; } goto L_003A86D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[15].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A85A4u | kUnwind; return; } goto L_003A85A4; } }
L_003A86FC:
    set32(c.r[13], c.r[15].w[0] - c.r[5].w[0]);
    c.r[14].d[0] = c.r[13].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[14].d[0] == 0ull; set32(c.r[15], 0u - c.r[13].w[0]);  if (t) { goto L_003A871C; } }
    set32(c.r[14], c.r[10].w[0] << (c.r[13].w[0] & 31u));
    set32(c.r[15], c.r[8].w[0] >> (c.r[15].w[0] & 31u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[8].w[0] << (c.r[13].w[0] & 31u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A855Cu | kUnwind; return; } goto L_003A855C; } }
L_003A871C:
    set32(c.r[10], c.r[8].w[0] << (c.r[13].w[0] & 31u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8560u | kUnwind; return; } goto L_003A8560; } }
L_003A8728:
    set32(c.r[13], c.r[15].w[0] - c.r[12].w[0]);
    c.r[14].d[0] = c.r[13].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[14].d[0] == 0ull; set32(c.r[15], 0u - c.r[13].w[0]);  if (t) { goto L_003A8748; } }
    set32(c.r[14], c.r[11].w[0] << (c.r[13].w[0] & 31u));
    set32(c.r[15], c.r[9].w[0] >> (c.r[15].w[0] & 31u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[9].w[0] << (c.r[13].w[0] & 31u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A853Cu | kUnwind; return; } goto L_003A853C; } }
L_003A8748:
    set32(c.r[11], c.r[9].w[0] << (c.r[13].w[0] & 31u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8540u | kUnwind; return; } goto L_003A8540; } }
L_003A8754:
    c.budget -= 2;
    { const bool t = c.r[15].sd[0] <= 0; set32(c.r[5], 0u - 1022u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8520u | kUnwind; return; } goto L_003A8520; } }
L_003A875C:
    set32(c.r[15], c.r[15].w[0] << 1);
    c.budget -= 7;
    { const bool t = c.r[15].sd[0] > 0; set32(c.r[5], c.r[5].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A875Cu | kUnwind; return; } goto L_003A875C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[15].d[0] = c.r[12].sd[0] < -1022ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8524u | kUnwind; return; } goto L_003A8524; } }
L_003A8780:
    c.budget -= 2;
    { const bool t = c.r[15].sd[0] <= 0; set32(c.r[12], 0u - 1022u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A84D8u | kUnwind; return; } goto L_003A84D8; } }
    c.r[13].d[0] = c.r[15].d[0] + 0ull;
    c.budget -= 1;
L_003A878C:
    set32(c.r[13], c.r[13].w[0] << 1);
    c.budget -= 7;
    { const bool t = c.r[13].sd[0] > 0; set32(c.r[12], c.r[12].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A878Cu | kUnwind; return; } goto L_003A878C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x000F0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A84DCu | kUnwind; return; } goto L_003A84DC; } }
L_003A87B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[14].d[0] = c.r[4].d[0] << 32;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[14].d[0] = static_cast<std::uint64_t>(c.r[14].sd[0] >> 32);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[15].d[0] = c.r[15].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    st64((c.r[29].w[0] + 48u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 19;
    { const bool t = c.r[15].d[0] != 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_003A8878; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[15].d[0] = c.r[18].d[0] & c.r[15].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[14].d[0];
    c.budget -= 6;
    { const bool t = c.r[15].d[0] != 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003A8844; } }
    c.r[2].d[0] = ld64((c.r[15].w[0] + 28360u));
    c.budget -= 1;
L_003A8818:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003A881C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003A8844:
    c.budget -= 2;
    if (c.r[18].sd[0] >= 0) { set32(c.r[5], 0u + 1077u);  goto L_003A8868; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8854u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A8854u) [[unlikely]] return; }
L_003A8854:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8860u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x003A8860u) [[unlikely]] return; }
L_003A8860:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A881Cu | kUnwind; return; } goto L_003A881C; } }
L_003A8868:
    set32(c.r[21], 0u - 54u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8874u); c.r[5].d[0] = c.r[5].d[0] << 52;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A8874u) [[unlikely]] return; }
L_003A8874:
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 1;
L_003A8878:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x7FEF0000u);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A88A0; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003A8890:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8898u);  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A8898u) [[unlikely]] return; }
L_003A8898:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A881Cu | kUnwind; return; } goto L_003A881C; } }
L_003A88A0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    set32(c.r[12], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[18].w[0]) >> 20));
    c.r[16].d[0] = c.r[16].d[0] | 65535ull;
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00090000u);
    c.r[18].d[0] = c.r[18].d[0] & c.r[16].d[0];
    c.r[14].d[0] = c.r[14].d[0] | 24420ull;
    set32(c.r[14], c.r[18].w[0] + c.r[14].w[0]);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[19].d[0] = c.r[14].d[0] & c.r[13].d[0];
    c.r[15].sd[0] = static_cast<std::int32_t>(0x3FF00000u);
    c.r[15].d[0] = c.r[19].d[0] ^ c.r[15].d[0];
    c.r[14].d[0] = c.r[2].d[0] << 32;
    c.r[15].d[0] = c.r[18].d[0] | c.r[15].d[0];
    c.r[14].d[0] = c.r[14].d[0] >> 32;
    c.r[15].d[0] = c.r[15].d[0] << 32;
    set32(c.r[12], c.r[21].w[0] + c.r[12].w[0]);
    c.r[2].d[0] = c.r[14].d[0] | c.r[15].d[0];
    set32(c.r[21], c.r[12].w[0] - 1023u);
    set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[19].w[0]) >> 20));
    set32(c.r[5], 0u + 1023u);
    set32(c.r[21], c.r[21].w[0] + c.r[15].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8900u); c.r[5].d[0] = c.r[5].d[0] << 52;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A8900u) [[unlikely]] return; }
L_003A8900:
    set32(c.r[15], c.r[18].w[0] + 2u);
    c.r[15].d[0] = c.r[15].d[0] & c.r[16].d[0];
    c.r[15].d[0] = c.r[15].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] == 0ull; c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A8A1C; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8924u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 94u, depth + 1u); else { c.pc = 0x003B23D0u; return; } if (c.pc != 0x003A8924u) [[unlikely]] return; }
L_003A8924:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003A8970; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8818u | kUnwind; return; } goto L_003A8818; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A893Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x003A893Cu) [[unlikely]] return; }
L_003A893C:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[15].w[0] + 28368u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8950u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A8950u) [[unlikely]] return; }
L_003A8950:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[15].w[0] + 28376u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8964u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A8964u) [[unlikely]] return; }
L_003A8964:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8890u | kUnwind; return; } goto L_003A8890; } }
L_003A8970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8978u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A8978u) [[unlikely]] return; }
L_003A8978:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[15].w[0] + 28384u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A898Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A898Cu) [[unlikely]] return; }
L_003A898C:
    set32(c.r[4], 0u + 511u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A899Cu); c.r[4].d[0] = c.r[4].d[0] << 53;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A899Cu) [[unlikely]] return; }
L_003A899C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A89A8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A89A8u) [[unlikely]] return; }
L_003A89A8:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A89C8; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_003A89B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A89C0u);  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A89C0u) [[unlikely]] return; }
L_003A89C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A881Cu | kUnwind; return; } goto L_003A881C; } }
L_003A89C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A89D0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x003A89D0u) [[unlikely]] return; }
L_003A89D0:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[15].w[0] + 28368u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A89E4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A89E4u) [[unlikely]] return; }
L_003A89E4:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[15].w[0] + 28376u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A89F8u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A89F8u) [[unlikely]] return; }
L_003A89F8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8A04u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A8A04u) [[unlikely]] return; }
L_003A8A04:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8A10u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A8A10u) [[unlikely]] return; }
L_003A8A10:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A89B8u | kUnwind; return; } goto L_003A89B8; } }
L_003A8A1C:
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8A2Cu); c.r[5].d[0] = c.r[5].d[0] << 62;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A8A2Cu) [[unlikely]] return; }
L_003A8A2C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8A38u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x003A8A38u) [[unlikely]] return; }
L_003A8A38:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8A44u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x003A8A44u) [[unlikely]] return; }
L_003A8A44:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8A54u); c.r[22].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A8A54u) [[unlikely]] return; }
L_003A8A54:
    c.r[15].sd[0] = static_cast<std::int32_t>(0xFFF90000u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[15].d[0] = c.r[15].d[0] | 60294ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[19], c.r[18].w[0] + c.r[15].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8A70u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A8A70u) [[unlikely]] return; }
L_003A8A70:
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00060000u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[14].d[0] = c.r[14].d[0] | 47185ull;
    c.r[5].d[0] = ld64((c.r[15].w[0] + 28392u));
    set32(c.r[14], c.r[14].w[0] - c.r[18].w[0]);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[19].d[0] = c.r[19].d[0] | c.r[14].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8A94u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A8A94u) [[unlikely]] return; }
L_003A8A94:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8AA4u); c.r[5].d[0] = ld64((c.r[15].w[0] + 28400u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A8AA4u) [[unlikely]] return; }
L_003A8AA4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8AB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A8AB0u) [[unlikely]] return; }
L_003A8AB0:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8AC0u); c.r[5].d[0] = ld64((c.r[15].w[0] + 28408u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A8AC0u) [[unlikely]] return; }
L_003A8AC0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8ACCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A8ACCu) [[unlikely]] return; }
L_003A8ACC:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[15].w[0] + 28416u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8AE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A8AE0u) [[unlikely]] return; }
L_003A8AE0:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8AF0u); c.r[5].d[0] = ld64((c.r[15].w[0] + 28424u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A8AF0u) [[unlikely]] return; }
L_003A8AF0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8AFCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A8AFCu) [[unlikely]] return; }
L_003A8AFC:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8B0Cu); c.r[5].d[0] = ld64((c.r[15].w[0] + 28432u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A8B0Cu) [[unlikely]] return; }
L_003A8B0C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8B18u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A8B18u) [[unlikely]] return; }
L_003A8B18:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8B28u); c.r[5].d[0] = ld64((c.r[15].w[0] + 28440u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A8B28u) [[unlikely]] return; }
L_003A8B28:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8B34u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A8B34u) [[unlikely]] return; }
L_003A8B34:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8B40u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A8B40u) [[unlikely]] return; }
L_003A8B40:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A8C10; } }
    set32(c.r[5], 0u + 511u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8B58u); c.r[5].d[0] = c.r[5].d[0] << 53;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A8B58u) [[unlikely]] return; }
L_003A8B58:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8B64u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A8B64u) [[unlikely]] return; }
L_003A8B64:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A8B9C; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8B78u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A8B78u) [[unlikely]] return; }
L_003A8B78:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8B84u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A8B84u) [[unlikely]] return; }
L_003A8B84:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8B90u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A8B90u) [[unlikely]] return; }
L_003A8B90:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003A8B94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A89B8u | kUnwind; return; } goto L_003A89B8; } }
L_003A8B9C:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8BACu); c.r[5].d[0] = ld64((c.r[15].w[0] + 28368u));  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A8BACu) [[unlikely]] return; }
L_003A8BAC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8BBCu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A8BBCu) [[unlikely]] return; }
L_003A8BBC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8BC8u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A8BC8u) [[unlikely]] return; }
L_003A8BC8:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[15].w[0] + 28376u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8BDCu); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A8BDCu) [[unlikely]] return; }
L_003A8BDC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8BE8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A8BE8u) [[unlikely]] return; }
L_003A8BE8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_003A8BF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8BF8u);  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A8BF8u) [[unlikely]] return; }
L_003A8BF8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8C04u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A8C04u) [[unlikely]] return; }
L_003A8C04:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A89B8u | kUnwind; return; } goto L_003A89B8; } }
L_003A8C10:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003A8C38; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8C24u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A8C24u) [[unlikely]] return; }
L_003A8C24:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8C30u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A8C30u) [[unlikely]] return; }
L_003A8C30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8B94u | kUnwind; return; } goto L_003A8B94; } }
L_003A8C38:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8C44u); c.r[5].d[0] = ld64((c.r[15].w[0] + 28368u));  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A8C44u) [[unlikely]] return; }
L_003A8C44:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8C54u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A8C54u) [[unlikely]] return; }
L_003A8C54:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8C60u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A8C60u) [[unlikely]] return; }
L_003A8C60:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[15].w[0] + 28376u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8C74u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A8C74u) [[unlikely]] return; }
L_003A8C74:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8BF0u | kUnwind; return; } goto L_003A8BF0; } }
L_003A8C80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[14].d[0] = c.r[4].d[0] << 32;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.r[14].d[0] = static_cast<std::uint64_t>(c.r[14].sd[0] >> 32);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[15].d[0] != 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003A8D24; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[15].d[0] = c.r[16].d[0] & c.r[15].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[14].d[0];
    c.budget -= 6;
    { const bool t = c.r[15].d[0] != 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003A8CEC; } }
    c.r[2].d[0] = ld64((c.r[15].w[0] + 28488u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_003A8CD8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003A8CEC:
    c.budget -= 2;
    if (c.r[16].sd[0] >= 0) { set32(c.r[5], 0u + 1077u);  goto L_003A8D10; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8CFCu); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A8CFCu) [[unlikely]] return; }
L_003A8CFC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8D08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x003A8D08u) [[unlikely]] return; }
L_003A8D08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8CD8u | kUnwind; return; } goto L_003A8CD8; } }
L_003A8D10:
    set32(c.r[17], 0u - 54u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8D1Cu); c.r[5].d[0] = c.r[5].d[0] << 52;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A8D1Cu) [[unlikely]] return; }
L_003A8D1C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 2;
L_003A8D24:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x7FEF0000u);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 20));  if (t) { goto L_003A8D50; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_003A8D40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8D48u);  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A8D48u) [[unlikely]] return; }
L_003A8D48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8CD8u | kUnwind; return; } goto L_003A8CD8; } }
L_003A8D50:
    c.r[14].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    set32(c.r[15], c.r[17].w[0] + c.r[15].w[0]);
    c.r[14].d[0] = c.r[14].d[0] | 65535ull;
    set32(c.r[17], c.r[15].w[0] - 1023u);
    c.r[14].d[0] = c.r[16].d[0] & c.r[14].d[0];
    set32(c.r[4], c.r[17].w[0] >> 31);
    set32(c.r[15], 0u + 1023u);
    set32(c.r[15], c.r[15].w[0] - c.r[4].w[0]);
    set32(c.r[15], c.r[15].w[0] << 20);
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8D80u); c.r[16].d[0] = c.r[14].d[0] | c.r[15].d[0];  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x003A8D80u) [[unlikely]] return; }
L_003A8D80:
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[15].d[0] = c.r[18].d[0] << 32;
    c.r[13].d[0] = c.r[16].d[0] << 32;
    c.r[5].d[0] = ld64((c.r[14].w[0] + 28496u));
    c.r[15].d[0] = c.r[15].d[0] >> 32;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[18].d[0] = c.r[15].d[0] | c.r[13].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8DA4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A8DA4u) [[unlikely]] return; }
L_003A8DA4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8DB0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AA(c, 66u, depth + 1u); else { c.pc = 0x003A87B0u; return; } if (c.pc != 0x003A8DB0u) [[unlikely]] return; }
L_003A8DB0:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8DC0u); c.r[5].d[0] = ld64((c.r[15].w[0] + 28504u));  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A8DC0u) [[unlikely]] return; }
L_003A8DC0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8DCCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A8DCCu) [[unlikely]] return; }
L_003A8DCC:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[15].w[0] + 28512u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8DE0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A8DE0u) [[unlikely]] return; }
L_003A8DE0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8D40u | kUnwind; return; } goto L_003A8D40; } }
    c.budget -= 1;
L_003A8DF0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[11].d[0] = c.r[5].d[0] << 32;
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 32);
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    c.r[16].d[0] = c.r[18].d[0] & c.r[15].d[0];
    st64((c.r[29].w[0] + 88u), c.r[21].d[0]);
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st64((c.r[29].w[0] + 104u), c.r[23].d[0]);
    c.r[22].d[0] = c.r[4].d[0] << 32;
    set32(c.r[2], 0u + 1023u);
    st64((c.r[29].w[0] + 72u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[30].d[0]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 120u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 32);
    c.r[21].d[0] = c.r[20].d[0] & c.r[15].d[0];
    c.r[14].d[0] = c.r[16].d[0] | c.r[11].d[0];
    c.budget -= 27;
    { const bool t = c.r[14].d[0] == 0ull; c.r[2].d[0] = c.r[2].d[0] << 52;  if (t) { goto L_003A8EA0; } }
    c.r[14].sd[0] = static_cast<std::int32_t>(0x7FF00000u);
    c.r[15].d[0] = c.r[14].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[15].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_003A8E98; }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[14].d[0]; c.r[15].d[0] = c.r[14].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;  if (t) { goto L_003A8E80; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A8E98; } }
    c.r[15].d[0] = c.r[14].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_003A8E80:
    c.budget -= 2;
    { const bool t = c.r[15].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A8E98; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[14].d[0];  if (t) { goto L_003A8ED0; } }
    c.budget -= 2;
    { const bool t = c.r[11].d[0] == 0ull;  if (t) { goto L_003A8ED0; } }
L_003A8E98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8EA0u); c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A8EA0u) [[unlikely]] return; }
L_003A8EA0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_003A8EA4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 104u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 120u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003A8ED0:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] >= 0; st32((c.r[29].w[0] + 28u), 0u);  if (t) { goto L_003A8EF0; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x433F0000u);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[12], 0u + 2u);  if (t) { goto L_003A9A60; } }
    st32((c.r[29].w[0] + 28u), c.r[12].w[0]);
    c.budget -= 1;
L_003A8EF0:
    c.budget -= 2;
    { const bool t = c.r[11].d[0] != 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x7FF00000u);  if (t) { goto L_003A8FF8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[15].d[0]; c.r[15].sd[0] = static_cast<std::int32_t>(0x3FF00000u);  if (t) { goto L_003A8F60; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0xC0100000u);
    set32(c.r[15], c.r[21].w[0] + c.r[15].w[0]);
    c.r[15].d[0] = c.r[15].d[0] | c.r[22].d[0];
    c.budget -= 5;
    { const bool t = c.r[15].d[0] != 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x3FEF0000u);  if (t) { goto L_003A8F2C; } }
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 2;
L_003A8F1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8F24u);  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A8F24u) [[unlikely]] return; }
L_003A8F24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8EA4u | kUnwind; return; } goto L_003A8EA4; } }
L_003A8F2C:
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] == 0ull;  if (t) { goto L_003A8F4C; } }
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0; c.r[2].d[0] = c.r[23].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8EA0u | kUnwind; return; } goto L_003A8EA0; } }
L_003A8F44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8EA0u | kUnwind; return; } goto L_003A8EA0; } }
L_003A8F4C:
    c.budget -= 2;
    if (c.r[18].sd[0] >= 0) { c.r[2].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8EA0u | kUnwind; return; } goto L_003A8EA0; }
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8F1Cu | kUnwind; return; } goto L_003A8F1C; } }
L_003A8F60:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[15].d[0]; c.r[15].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (t) { goto L_003A8F94; } }
    c.budget -= 2;
    if (c.r[18].sd[0] >= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8EA0u | kUnwind; return; } goto L_003A8EA0; }
    set32(c.r[4], 0u + 1023u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[4].d[0] << 52;
    c.budget -= 3;
L_003A8F7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8F84u);  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x003A8F84u) [[unlikely]] return; }
L_003A8F84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8EA4u | kUnwind; return; } goto L_003A8EA4; } }
L_003A8F8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8EA0u | kUnwind; return; } goto L_003A8EA0; } }
L_003A8F94:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[15].d[0]; c.r[15].sd[0] = static_cast<std::int32_t>(0x3FE00000u);  if (t) { goto L_003A8FB4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003A8FA0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003A8FA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A8FACu);  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A8FACu) [[unlikely]] return; }
L_003A8FAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8EA4u | kUnwind; return; } goto L_003A8EA4; } }
L_003A8FB4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[15].d[0];  if (t) { goto L_003A8FF8; } }
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] < 0; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003A8FF8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 104u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 120u));
    c.budget -= 12;
    { set32(c.r[29], c.r[29].w[0] + 128u);  goto L_003A9FB0; }
L_003A8FF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9000u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 321u, depth + 1u); else { c.pc = 0x003AE720u; return; } if (c.pc != 0x003A9000u) [[unlikely]] return; }
L_003A9000:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull; c.r[30].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A90A0; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x7FF00000u);
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == c.r[15].d[0];  if (t) { goto L_003A9024; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x3FF00000u);  if (t) { goto L_003A9024; } }
    c.budget -= 2;
    if (c.r[21].d[0] != c.r[15].d[0]) { set32(c.r[20], c.r[20].w[0] >> 31);  goto L_003A90A4; }
L_003A9024:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0; c.r[17].d[0] = c.r[30].d[0] + 0ull;  if (t) { goto L_003A9040; } }
    set32(c.r[4], 0u + 1023u);
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A903Cu); c.r[4].d[0] = c.r[4].d[0] << 52;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x003A903Cu) [[unlikely]] return; }
L_003A903C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003A9040:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] >= 0; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8EA0u | kUnwind; return; } goto L_003A8EA0; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0xC0100000u);
    set32(c.r[11], ld32((c.r[29].w[0] + 28u)));
    set32(c.r[15], c.r[21].w[0] + c.r[15].w[0]);
    c.r[15].d[0] = c.r[15].d[0] | c.r[11].d[0];
    c.budget -= 6;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[12], ld32((c.r[29].w[0] + 28u)));  if (t) { goto L_003A9080; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A906Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A906Cu) [[unlikely]] return; }
L_003A906C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9078u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x003A9078u) [[unlikely]] return; }
L_003A9078:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8F8Cu | kUnwind; return; } goto L_003A8F8C; } }
L_003A9080:
    set32(c.r[15], 0u + 1u);
    c.budget -= 3;
    if (c.r[12].d[0] != c.r[15].d[0]) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8EA0u | kUnwind; return; } goto L_003A8EA0; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9098u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A9098u) [[unlikely]] return; }
L_003A9098:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8F8Cu | kUnwind; return; } goto L_003A8F8C; } }
L_003A90A0:
    set32(c.r[20], c.r[20].w[0] >> 31);
    c.budget -= 1;
L_003A90A4:
    set32(c.r[13], ld32((c.r[29].w[0] + 28u)));
    set32(c.r[15], c.r[20].w[0] - 1u);
    c.r[15].d[0] = c.r[15].d[0] | c.r[13].d[0];
    c.budget -= 5;
    { const bool t = c.r[15].d[0] != 0ull; st32((c.r[29].w[0] + 36u), c.r[20].w[0]);  if (t) { goto L_003A90D0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A90C4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A90C4u) [[unlikely]] return; }
L_003A90C4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8F7Cu | kUnwind; return; } goto L_003A8F7C; } }
L_003A90D0:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    c.r[15].d[0] = c.r[15].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] == 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x43F00000u);  if (t) { goto L_003A964C; } }
    c.r[15].d[0] = c.r[15].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x3FEF0000u);  if (t) { goto L_003A9120; } }
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] == 0ull;  if (t) { goto L_003A9110; } }
    c.budget -= 2;
    if (c.r[18].sd[0] <= 0) { c.r[2].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8EA0u | kUnwind; return; } goto L_003A8EA0; }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 1;
L_003A9108:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld64((c.r[15].w[0] + 28784u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8EA0u | kUnwind; return; } goto L_003A8EA0; } }
L_003A9110:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] < 0; c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9108u | kUnwind; return; } goto L_003A9108; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8EA0u | kUnwind; return; } goto L_003A8EA0; } }
L_003A9120:
    c.r[15].d[0] = c.r[15].d[0] | 65534ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] == 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x3FF00000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9110u | kUnwind; return; } goto L_003A9110; } }
    c.r[15].d[0] = c.r[15].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[5], 0u + 1023u);  if (t) { goto L_003A9150; } }
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8F44u | kUnwind; return; } goto L_003A8F44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld64((c.r[15].w[0] + 28784u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8EA0u | kUnwind; return; } goto L_003A8EA0; } }
    c.budget -= 1;
L_003A9150:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A915Cu); c.r[5].d[0] = c.r[5].d[0] << 52;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A915Cu) [[unlikely]] return; }
L_003A915C:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A916Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A916Cu) [[unlikely]] return; }
L_003A916C:
    set32(c.r[5], 0u + 1021u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9180u); c.r[5].d[0] = c.r[5].d[0] << 52;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A9180u) [[unlikely]] return; }
L_003A9180:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9190u); c.r[4].d[0] = ld64((c.r[15].w[0] + 28792u));  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A9190u) [[unlikely]] return; }
L_003A9190:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A919Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A919Cu) [[unlikely]] return; }
L_003A919C:
    set32(c.r[4], 0u + 511u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A91ACu); c.r[4].d[0] = c.r[4].d[0] << 53;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A91ACu) [[unlikely]] return; }
L_003A91AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A91B8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A91B8u) [[unlikely]] return; }
L_003A91B8:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[15].w[0] + 28800u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A91CCu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A91CCu) [[unlikely]] return; }
L_003A91CC:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    c.r[5].d[0] = ld64((c.r[15].w[0] + 28808u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A91E0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A91E0u) [[unlikely]] return; }
L_003A91E0:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[15].w[0] + 28816u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A91F4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A91F4u) [[unlikely]] return; }
L_003A91F4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9200u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A9200u) [[unlikely]] return; }
L_003A9200:
    c.r[4].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9210u); st64((c.r[29].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A9210u) [[unlikely]] return; }
L_003A9210:
    set32(c.r[15], 0u - 1u);
    c.r[5].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[15].d[0] = c.r[15].d[0] << 32;
    c.r[19].d[0] = c.r[2].d[0] & c.r[15].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9228u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A9228u) [[unlikely]] return; }
L_003A9228:
    c.r[4].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_003A9230:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9238u);  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A9238u) [[unlikely]] return; }
L_003A9238:
    set32(c.r[12], ld32((c.r[29].w[0] + 36u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[13], ld32((c.r[29].w[0] + 28u)));
    set32(c.r[15], c.r[12].w[0] - 1u);
    set32(c.r[14], c.r[13].w[0] - 1u);
    c.r[15].d[0] = c.r[15].d[0] | c.r[14].d[0];
    set32(c.r[14], 0u + 1023u);
    c.r[14].d[0] = c.r[14].d[0] << 52;
    c.budget -= 10;
    { const bool t = c.r[15].d[0] != 0ull; st64((c.r[29].w[0]), c.r[14].d[0]);  if (t) { goto L_003A926C; } }
    set32(c.r[15], 0u - 1025u);
    c.r[15].d[0] = c.r[15].d[0] << 52;
    st64((c.r[29].w[0]), c.r[15].d[0]);
    c.budget -= 3;
L_003A926C:
    set32(c.r[15], 0u - 1u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[15].d[0] = c.r[15].d[0] << 32;
    c.r[17].d[0] = c.r[23].d[0] & c.r[15].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9284u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A9284u) [[unlikely]] return; }
L_003A9284:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9290u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A9290u) [[unlikely]] return; }
L_003A9290:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A92A0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A92A0u) [[unlikely]] return; }
L_003A92A0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A92ACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A92ACu) [[unlikely]] return; }
L_003A92AC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A92BCu); c.r[30].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A92BCu) [[unlikely]] return; }
L_003A92BC:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A92CCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A92CCu) [[unlikely]] return; }
L_003A92CC:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x408F0000u);
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[13].d[0] = c.r[2].d[0] << 32;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[15].d[0] == 0ull; c.r[13].d[0] = static_cast<std::uint64_t>(c.r[13].sd[0] >> 32);  if (t) { goto L_003A95E8; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0xBF700000u);
    set32(c.r[15], c.r[19].w[0] + c.r[15].w[0]);
    c.r[15].d[0] = c.r[15].d[0] | c.r[13].d[0];
    c.budget -= 5;
    { const bool t = c.r[15].d[0] != 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003A9338; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9310u); c.r[5].d[0] = ld64((c.r[15].w[0] + 28904u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A9310u) [[unlikely]] return; }
L_003A9310:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9320u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A9320u) [[unlikely]] return; }
L_003A9320:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A932Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 94u, depth + 1u); else { c.pc = 0x003B23D0u; return; } if (c.pc != 0x003A932Cu) [[unlikely]] return; }
L_003A932C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[11].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (t) { goto L_003A9358; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 1;
L_003A9338:
    c.r[4].d[0] = ld64((c.r[29].w[0]));
    c.r[16].d[0] = ld64((c.r[15].w[0] + 28896u));
    c.budget -= 2;
L_003A9340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9348u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A9348u) [[unlikely]] return; }
L_003A9348:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8FA4u | kUnwind; return; } goto L_003A8FA4; } }
L_003A9354:
    c.r[11].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.budget -= 1;
L_003A9358:
    st32((c.r[29].w[0] + 32u), 0u);
    c.r[11].d[0] = c.r[11].d[0] | 65535ull;
    c.r[15].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    c.r[13].d[0] = c.r[19].d[0] & c.r[11].d[0];
    c.r[15].d[0] = c.r[15].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[14], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[13].w[0]) >> 20));  if (t) { goto L_003A93EC; } }
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[15], c.r[14].w[0] - 1022u);
    set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[12].w[0]) >> (c.r[15].w[0] & 31u)));
    c.r[14].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    set32(c.r[15], c.r[19].w[0] + c.r[15].w[0]);
    c.r[14].d[0] = c.r[14].d[0] | 65535ull;
    st32((c.r[29].w[0] + 32u), c.r[15].w[0]);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[15].d[0] = c.r[15].d[0] & c.r[11].d[0];
    set32(c.r[11], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[15].w[0]) >> 20));
    set32(c.r[15], c.r[15].w[0] - 1023u);
    c.r[13].d[0] = c.r[11].d[0] & c.r[14].d[0];
    st32((c.r[29].w[0] + 24u), c.r[15].w[0]);
    c.r[13].d[0] = c.r[13].d[0] | c.r[12].d[0];
    set32(c.r[14], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[14].w[0]) >> (c.r[15].w[0] & 31u)));
    set32(c.r[12], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[15], 0u + 20u);
    c.r[14].d[0] = ~(0ull | c.r[14].d[0]);
    set32(c.r[15], c.r[15].w[0] - c.r[12].w[0]);
    c.r[14].d[0] = c.r[11].d[0] & c.r[14].d[0];
    set32(c.r[13], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[13].w[0]) >> (c.r[15].w[0] & 31u)));
    c.r[12].d[0] = c.r[19].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[15], 0u - c.r[13].w[0]);
    c.r[21].d[0] = c.r[14].d[0] << 32;
    if (c.r[12].d[0] != 0) c.r[13].d[0] = c.r[15].d[0];
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A93E8u); st32((c.r[29].w[0] + 32u), c.r[13].w[0]);  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A93E8u) [[unlikely]] return; }
L_003A93E8:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003A93EC:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A93F8u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A93F8u) [[unlikely]] return; }
L_003A93F8:
    set32(c.r[15], 0u - 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3FE60000u);
    c.r[15].d[0] = c.r[15].d[0] << 32;
    c.r[5].d[0] = c.r[5].d[0] | 11843ull;
    c.r[21].d[0] = c.r[2].d[0] & c.r[15].d[0];
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9418u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A9418u) [[unlikely]] return; }
L_003A9418:
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9428u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A9428u) [[unlikely]] return; }
L_003A9428:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9434u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A9434u) [[unlikely]] return; }
L_003A9434:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9444u); c.r[5].d[0] = ld64((c.r[15].w[0] + 28920u));  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A9444u) [[unlikely]] return; }
L_003A9444:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[15].w[0] + 28928u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9458u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A9458u) [[unlikely]] return; }
L_003A9458:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9464u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A9464u) [[unlikely]] return; }
L_003A9464:
    c.r[4].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9474u); st64((c.r[29].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A9474u) [[unlikely]] return; }
L_003A9474:
    c.r[5].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9484u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A9484u) [[unlikely]] return; }
L_003A9484:
    c.r[4].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9490u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A9490u) [[unlikely]] return; }
L_003A9490:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A94A0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A94A0u) [[unlikely]] return; }
L_003A94A0:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[15].w[0] + 28936u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A94B4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A94B4u) [[unlikely]] return; }
L_003A94B4:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A94C4u); c.r[5].d[0] = ld64((c.r[15].w[0] + 28944u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A94C4u) [[unlikely]] return; }
L_003A94C4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A94D0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A94D0u) [[unlikely]] return; }
L_003A94D0:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A94E0u); c.r[5].d[0] = ld64((c.r[15].w[0] + 28952u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A94E0u) [[unlikely]] return; }
L_003A94E0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A94ECu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A94ECu) [[unlikely]] return; }
L_003A94EC:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A94FCu); c.r[5].d[0] = ld64((c.r[15].w[0] + 28960u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A94FCu) [[unlikely]] return; }
L_003A94FC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9508u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A9508u) [[unlikely]] return; }
L_003A9508:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9518u); c.r[5].d[0] = ld64((c.r[15].w[0] + 28968u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A9518u) [[unlikely]] return; }
L_003A9518:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9524u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A9524u) [[unlikely]] return; }
L_003A9524:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9530u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A9530u) [[unlikely]] return; }
L_003A9530:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9540u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A9540u) [[unlikely]] return; }
L_003A9540:
    set32(c.r[5], 0u + 1u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9554u); c.r[5].d[0] = c.r[5].d[0] << 62;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A9554u) [[unlikely]] return; }
L_003A9554:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9560u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x003A9560u) [[unlikely]] return; }
L_003A9560:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9570u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A9570u) [[unlikely]] return; }
L_003A9570:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A957Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A957Cu) [[unlikely]] return; }
L_003A957C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9588u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A9588u) [[unlikely]] return; }
L_003A9588:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9594u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A9594u) [[unlikely]] return; }
L_003A9594:
    set32(c.r[4], 0u + 1023u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A95A4u); c.r[4].d[0] = c.r[4].d[0] << 52;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A95A4u) [[unlikely]] return; }
L_003A95A4:
    set32(c.r[13], ld32((c.r[29].w[0] + 32u)));
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[14], c.r[13].w[0] << 20);
    set32(c.r[19], c.r[19].w[0] + c.r[14].w[0]);
    set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[19].w[0]) >> 20));
    c.budget -= 7;
    { const bool t = c.r[15].sd[0] > 0; c.r[15].d[0] = c.r[2].d[0] << 32;  if (t) { goto L_003A95D8; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A95CCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 347u, depth + 1u); else { c.pc = 0x003AEB30u; return; } if (c.pc != 0x003A95CCu) [[unlikely]] return; }
L_003A95CC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003A95D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld64((c.r[29].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8FA0u | kUnwind; return; } goto L_003A8FA0; } }
L_003A95D8:
    c.r[14].d[0] = c.r[19].d[0] << 32;
    c.r[15].d[0] = c.r[15].d[0] >> 32;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = c.r[15].d[0] | c.r[14].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A95D0u | kUnwind; return; } goto L_003A95D0; } }
L_003A95E8:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x40900000u);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[14].d[0] = c.r[14].d[0] | 52223ull;
    c.r[15].d[0] = c.r[19].d[0] & c.r[15].d[0];
    c.r[14].d[0] = c.r[14].sd[0] < c.r[15].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[14].d[0] == 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x3F6F0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9354u | kUnwind; return; } goto L_003A9354; } }
    c.r[15].d[0] = c.r[15].d[0] | 13312ull;
    set32(c.r[15], c.r[19].w[0] + c.r[15].w[0]);
    c.r[15].d[0] = c.r[15].d[0] | c.r[13].d[0];
    c.budget -= 5;
    { const bool t = c.r[15].d[0] != 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003A9640; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9628u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A9628u) [[unlikely]] return; }
L_003A9628:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9634u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 94u, depth + 1u); else { c.pc = 0x003B23D0u; return; } if (c.pc != 0x003A9634u) [[unlikely]] return; }
L_003A9634:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0; c.r[11].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9358u | kUnwind; return; } goto L_003A9358; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 1;
L_003A9640:
    c.r[4].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[15].w[0] + 28912u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9340u | kUnwind; return; } goto L_003A9340; } }
L_003A964C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[16].d[0] = c.r[16].d[0] | 65535ull;
    c.r[15].d[0] = c.r[16].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] != 0ull; st32((c.r[29].w[0] + 32u), 0u);  if (t) { goto L_003A9680; } }
    set32(c.r[14], 0u - 53u);
    set32(c.r[5], 0u + 269u);
    st32((c.r[29].w[0] + 32u), c.r[14].w[0]);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9678u); c.r[5].d[0] = c.r[5].d[0] << 54;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A9678u) [[unlikely]] return; }
L_003A9678:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 2;
L_003A9680:
    set32(c.r[11], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[21].w[0]) >> 20));
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00030000u);
    st32((c.r[29].w[0] + 24u), 0u);
    set32(c.r[13], c.r[11].w[0] + c.r[15].w[0]);
    c.r[19].d[0] = c.r[21].d[0] & c.r[16].d[0];
    set32(c.r[12], c.r[13].w[0] - 1023u);
    c.r[14].d[0] = c.r[14].d[0] | 39054ull;
    c.r[15].sd[0] = static_cast<std::int32_t>(0x3FF00000u);
    st32((c.r[29].w[0] + 32u), c.r[12].w[0]);
    c.r[14].d[0] = c.r[14].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[14].d[0] == 0ull; c.r[21].d[0] = c.r[19].d[0] | c.r[15].d[0];  if (t) { goto L_003A96E0; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x000B0000u);
    set32(c.r[14], 0u + 1u);
    c.r[15].d[0] = c.r[15].d[0] | 46713ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[15].d[0] == 0ull; st32((c.r[29].w[0] + 24u), c.r[14].w[0]);  if (t) { goto L_003A96E0; } }
    set32(c.r[13], c.r[13].w[0] - 1022u);
    st32((c.r[29].w[0] + 24u), 0u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0xFFF00000u);
    st32((c.r[29].w[0] + 32u), c.r[13].w[0]);
    set32(c.r[21], c.r[21].w[0] + c.r[15].w[0]);
    c.budget -= 5;
L_003A96E0:
    set32(c.r[15], ld32((c.r[29].w[0] + 24u)));
    c.r[13].d[0] = c.r[30].d[0] << 32;
    c.r[14].d[0] = c.r[21].d[0] << 32;
    c.r[13].d[0] = c.r[13].d[0] >> 32;
    set32(c.r[19], c.r[15].w[0] << 3);
    c.r[30].d[0] = c.r[13].d[0] | c.r[14].d[0];
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[15], c.r[15].w[0] + 28520u);
    set32(c.r[20], 0u - 1u);
    set32(c.r[15], c.r[19].w[0] + c.r[15].w[0]);
    c.r[20].d[0] = c.r[20].d[0] << 32;
    c.r[16].d[0] = ld64((c.r[15].w[0]));
    set32(c.r[22], 0u + 2049u);
    c.r[22].d[0] = c.r[22].d[0] << 51;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9724u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A9724u) [[unlikely]] return; }
L_003A9724:
    st64((c.r[29].w[0] + 8u), c.r[2].d[0]);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9734u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A9734u) [[unlikely]] return; }
L_003A9734:
    set32(c.r[4], 0u + 1023u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9744u); c.r[4].d[0] = c.r[4].d[0] << 52;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x003A9744u) [[unlikely]] return; }
L_003A9744:
    c.r[4].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9754u); st64((c.r[29].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A9754u) [[unlikely]] return; }
L_003A9754:
    set32(c.r[11], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[21].w[0]) >> 1));
    c.r[14].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0]), c.r[2].d[0]);
    set32(c.r[13], c.r[11].w[0] << 18);
    c.r[15].d[0] = c.r[15].d[0] | c.r[14].d[0];
    set32(c.r[15], c.r[15].w[0] + c.r[13].w[0]);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00080000u);
    set32(c.r[15], c.r[15].w[0] + c.r[14].w[0]);
    c.r[18].d[0] = c.r[2].d[0] & c.r[20].d[0];
    c.r[15].d[0] = c.r[15].d[0] << 32;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[15].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9790u); c.r[4].d[0] = ld64((c.r[29].w[0] + 40u));  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A9790u) [[unlikely]] return; }
L_003A9790:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A979Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A979Cu) [[unlikely]] return; }
L_003A979C:
    c.r[5].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A97ACu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A97ACu) [[unlikely]] return; }
L_003A97AC:
    c.r[4].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A97B8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A97B8u) [[unlikely]] return; }
L_003A97B8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A97C8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A97C8u) [[unlikely]] return; }
L_003A97C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A97D4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A97D4u) [[unlikely]] return; }
L_003A97D4:
    c.r[4].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A97E0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A97E0u) [[unlikely]] return; }
L_003A97E0:
    c.r[4].d[0] = ld64((c.r[29].w[0]));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A97F0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A97F0u) [[unlikely]] return; }
L_003A97F0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9800u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A9800u) [[unlikely]] return; }
L_003A9800:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[15].w[0] + 28824u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9814u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A9814u) [[unlikely]] return; }
L_003A9814:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9824u); c.r[5].d[0] = ld64((c.r[15].w[0] + 28832u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A9824u) [[unlikely]] return; }
L_003A9824:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9830u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A9830u) [[unlikely]] return; }
L_003A9830:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9840u); c.r[5].d[0] = ld64((c.r[15].w[0] + 28840u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A9840u) [[unlikely]] return; }
L_003A9840:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A984Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A984Cu) [[unlikely]] return; }
L_003A984C:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A985Cu); c.r[5].d[0] = ld64((c.r[15].w[0] + 28848u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A985Cu) [[unlikely]] return; }
L_003A985C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9868u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A9868u) [[unlikely]] return; }
L_003A9868:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9878u); c.r[5].d[0] = ld64((c.r[15].w[0] + 28856u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A9878u) [[unlikely]] return; }
L_003A9878:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9884u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A9884u) [[unlikely]] return; }
L_003A9884:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9894u); c.r[5].d[0] = ld64((c.r[15].w[0] + 28864u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A9894u) [[unlikely]] return; }
L_003A9894:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A98A0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A98A0u) [[unlikely]] return; }
L_003A98A0:
    c.r[5].d[0] = ld64((c.r[29].w[0]));
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A98B0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A98B0u) [[unlikely]] return; }
L_003A98B0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A98BCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A98BCu) [[unlikely]] return; }
L_003A98BC:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A98C8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A98C8u) [[unlikely]] return; }
L_003A98C8:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A98D8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A98D8u) [[unlikely]] return; }
L_003A98D8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A98E8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A98E8u) [[unlikely]] return; }
L_003A98E8:
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A98F4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A98F4u) [[unlikely]] return; }
L_003A98F4:
    c.r[15].d[0] = c.r[2].d[0] & c.r[20].d[0];
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[15].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9908u); c.r[4].d[0] = ld64((c.r[29].w[0] + 40u));  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A9908u) [[unlikely]] return; }
L_003A9908:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9914u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A9914u) [[unlikely]] return; }
L_003A9914:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9920u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A9920u) [[unlikely]] return; }
L_003A9920:
    c.r[5].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9930u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A9930u) [[unlikely]] return; }
L_003A9930:
    c.r[5].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9940u); st64((c.r[29].w[0] + 8u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A9940u) [[unlikely]] return; }
L_003A9940:
    c.r[5].d[0] = ld64((c.r[29].w[0]));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9950u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A9950u) [[unlikely]] return; }
L_003A9950:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A995Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A995Cu) [[unlikely]] return; }
L_003A995C:
    c.r[4].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A996Cu); st64((c.r[29].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A996Cu) [[unlikely]] return; }
L_003A996C:
    c.r[22].d[0] = c.r[2].d[0] & c.r[20].d[0];
    c.r[5].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A997Cu); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A997Cu) [[unlikely]] return; }
L_003A997C:
    c.r[4].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9988u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A9988u) [[unlikely]] return; }
L_003A9988:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[15].w[0] + 28872u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A999Cu); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A999Cu) [[unlikely]] return; }
L_003A999C:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[15].w[0] + 28880u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A99B0u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A99B0u) [[unlikely]] return; }
L_003A99B0:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[15].w[0] + 28888u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A99C4u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A99C4u) [[unlikely]] return; }
L_003A99C4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A99D0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A99D0u) [[unlikely]] return; }
L_003A99D0:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[15], c.r[15].w[0] + 28552u);
    set32(c.r[15], c.r[19].w[0] + c.r[15].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A99E8u); c.r[5].d[0] = ld64((c.r[15].w[0]));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A99E8u) [[unlikely]] return; }
L_003A99E8:
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A99F4u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x003A99F4u) [[unlikely]] return; }
L_003A99F4:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9A04u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A9A04u) [[unlikely]] return; }
L_003A9A04:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[15], c.r[15].w[0] + 28536u);
    set32(c.r[19], c.r[19].w[0] + c.r[15].w[0]);
    c.r[16].d[0] = ld64((c.r[19].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9A20u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A9A20u) [[unlikely]] return; }
L_003A9A20:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9A2Cu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A9A2Cu) [[unlikely]] return; }
L_003A9A2C:
    c.r[19].d[0] = c.r[2].d[0] & c.r[20].d[0];
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9A3Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A9A3Cu) [[unlikely]] return; }
L_003A9A3C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9A48u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A9A48u) [[unlikely]] return; }
L_003A9A48:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9A54u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A9A54u) [[unlikely]] return; }
L_003A9A54:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9230u | kUnwind; return; } goto L_003A9230; } }
L_003A9A60:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x3FEF0000u);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 20));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8EF0u | kUnwind; return; } goto L_003A8EF0; } }
    set32(c.r[15], c.r[15].w[0] - 1023u);
    c.r[14].d[0] = c.r[15].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[14].d[0] != 0ull; st32((c.r[29].w[0] + 24u), c.r[15].w[0]);  if (t) { goto L_003A9AB0; } }
    set32(c.r[13], ld32((c.r[29].w[0] + 24u)));
    set32(c.r[15], 0u + 52u);
    set32(c.r[15], c.r[15].w[0] - c.r[13].w[0]);
    set32(c.r[19], c.r[11].w[0] >> (c.r[15].w[0] & 31u));
    set32(c.r[15], c.r[19].w[0] << (c.r[15].w[0] & 31u));
    c.budget -= 7;
    { const bool t = c.r[15].d[0] != c.r[11].d[0]; c.r[14].d[0] = c.r[19].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8EF0u | kUnwind; return; } goto L_003A8EF0; } }
    set32(c.r[15], 0u + 2u);
    c.budget -= 1;
L_003A9AA4:
    set32(c.r[15], c.r[15].w[0] - c.r[14].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 28u), c.r[15].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8EF0u | kUnwind; return; } goto L_003A8EF0; } }
L_003A9AB0:
    c.budget -= 2;
    { const bool t = c.r[11].d[0] != 0ull; set32(c.r[14], ld32((c.r[29].w[0] + 24u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8FF8u | kUnwind; return; } goto L_003A8FF8; } }
    set32(c.r[15], 0u + 20u);
    set32(c.r[15], c.r[15].w[0] - c.r[14].w[0]);
    set32(c.r[19], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> (c.r[15].w[0] & 31u)));
    set32(c.r[15], c.r[19].w[0] << (c.r[15].w[0] & 31u));
    c.budget -= 6;
    { const bool t = c.r[15].d[0] != c.r[16].d[0]; c.r[14].d[0] = c.r[19].d[0] & 1ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A8EF0u | kUnwind; return; } goto L_003A8EF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[15], 0u + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9AA4u | kUnwind; return; } goto L_003A9AA4; } }
L_003A9AD8:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x3FE90000u);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[16].d[0] = c.r[20].d[0] & c.r[15].d[0];
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    c.r[14].d[0] = c.r[14].d[0] | 8699ull;
    st64((c.r[29].w[0] + 72u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    c.r[14].d[0] = c.r[14].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    st64((c.r[29].w[0] + 104u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 120u), c.r[31].d[0]);
    c.budget -= 20;
    { const bool t = c.r[14].d[0] != 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003A9B68; } }
    st64((c.r[18].w[0]), c.r[4].d[0]);
    st64((c.r[5].w[0] + 8u), 0ull);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_003A9B34:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 88u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 104u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 120u));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003A9B68:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x40020000u);
    c.r[15].d[0] = c.r[15].d[0] | 55675ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] != 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x41390000u);  if (t) { goto L_003A9C78; } }
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] <= 0; c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003A9BFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9B8Cu); c.r[5].d[0] = ld64((c.r[15].w[0] + 29448u));  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A9B8Cu) [[unlikely]] return; }
L_003A9B8C:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x3FF90000u);
    c.r[15].d[0] = c.r[15].d[0] | 8699ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[15].d[0]; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A9BD8; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[15].w[0] + 29456u));
    c.budget -= 3;
L_003A9BA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9BB0u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A9BB0u) [[unlikely]] return; }
L_003A9BB0:
    st64((c.r[18].w[0]), c.r[2].d[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9BC0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A9BC0u) [[unlikely]] return; }
L_003A9BC0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9BCCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A9BCCu) [[unlikely]] return; }
L_003A9BCC:
    st64((c.r[18].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9B34u | kUnwind; return; } goto L_003A9B34; } }
L_003A9BD8:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9BE8u); c.r[5].d[0] = ld64((c.r[15].w[0] + 29464u));  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A9BE8u) [[unlikely]] return; }
L_003A9BE8:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[15].w[0] + 29472u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9BA8u | kUnwind; return; } goto L_003A9BA8; } }
L_003A9BFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9C04u); c.r[5].d[0] = ld64((c.r[15].w[0] + 29448u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A9C04u) [[unlikely]] return; }
L_003A9C04:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x3FF90000u);
    c.r[15].d[0] = c.r[15].d[0] | 8699ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[15].d[0]; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A9C50; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[15].w[0] + 29456u));
    c.budget -= 3;
L_003A9C20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9C28u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A9C28u) [[unlikely]] return; }
L_003A9C28:
    st64((c.r[18].w[0]), c.r[2].d[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9C38u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A9C38u) [[unlikely]] return; }
L_003A9C38:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9C44u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A9C44u) [[unlikely]] return; }
L_003A9C44:
    st64((c.r[18].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9B34u | kUnwind; return; } goto L_003A9B34; } }
L_003A9C50:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9C60u); c.r[5].d[0] = ld64((c.r[15].w[0] + 29464u));  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A9C60u) [[unlikely]] return; }
L_003A9C60:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[15].w[0] + 29472u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9C20u | kUnwind; return; } goto L_003A9C20; } }
    c.budget -= 1;
L_003A9C78:
    c.r[15].d[0] = c.r[15].d[0] | 8699ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] != 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x7FEF0000u);  if (t) { goto L_003A9EA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9C90u);  if (depth < kMaxDepth) unit_00AB(c, 321u, depth + 1u); else { c.pc = 0x003AE720u; return; } if (c.pc != 0x003A9C90u) [[unlikely]] return; }
L_003A9C90:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[15].w[0] + 29480u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9CA4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A9CA4u) [[unlikely]] return; }
L_003A9CA4:
    set32(c.r[5], 0u + 511u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9CB4u); c.r[5].d[0] = c.r[5].d[0] << 53;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003A9CB4u) [[unlikely]] return; }
L_003A9CB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9CBCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 103u, depth + 1u); else { c.pc = 0x003B24D0u; return; } if (c.pc != 0x003A9CBCu) [[unlikely]] return; }
L_003A9CBC:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9CC8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x003A9CC8u) [[unlikely]] return; }
L_003A9CC8:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[15].w[0] + 29448u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9CDCu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A9CDCu) [[unlikely]] return; }
L_003A9CDC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9CE8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A9CE8u) [[unlikely]] return; }
L_003A9CE8:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[15].w[0] + 29456u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9CFCu); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A9CFCu) [[unlikely]] return; }
L_003A9CFC:
    c.r[15].d[0] = c.r[22].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A9D24; } }
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[22].w[0] << 2);
    set32(c.r[14], c.r[14].w[0] + 29240u);
    set32(c.r[15], c.r[15].w[0] + c.r[14].w[0]);
    set32(c.r[13], ld32((c.r[15].w[0] - 4u)));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != c.r[13].d[0]; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_003A9E3C; } }
L_003A9D24:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9D30u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A9D30u) [[unlikely]] return; }
L_003A9D30:
    set32(c.r[30], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 20));
    c.r[15].d[0] = c.r[2].d[0] >> 52;
    c.r[15].d[0] = c.r[15].d[0] & 2047ull;
    set32(c.r[16], c.r[30].w[0] - c.r[15].w[0]);
    c.r[14].d[0] = c.r[16].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[14].d[0] != 0ull; st64((c.r[18].w[0]), c.r[2].d[0]);  if (t) { goto L_003A9E48; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[15].w[0] + 29464u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9D60u); c.r[19].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A9D60u) [[unlikely]] return; }
L_003A9D60:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9D70u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A9D70u) [[unlikely]] return; }
L_003A9D70:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0] + 32u), c.r[2].d[0]);
    c.r[5].d[0] = ld64((c.r[15].w[0] + 29472u));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9D88u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A9D88u) [[unlikely]] return; }
L_003A9D88:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9D98u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A9D98u) [[unlikely]] return; }
L_003A9D98:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9DA4u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A9DA4u) [[unlikely]] return; }
L_003A9DA4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9DB0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A9DB0u) [[unlikely]] return; }
L_003A9DB0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9DC0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A9DC0u) [[unlikely]] return; }
L_003A9DC0:
    c.r[15].d[0] = c.r[2].d[0] >> 52;
    c.r[15].d[0] = c.r[15].d[0] & 2047ull;
    set32(c.r[16], c.r[30].w[0] - c.r[15].w[0]);
    c.r[14].d[0] = c.r[16].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[14].d[0] != 0ull; st64((c.r[18].w[0]), c.r[2].d[0]);  if (t) { goto L_003A9E48; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9DE8u); c.r[5].d[0] = ld64((c.r[15].w[0] + 29488u));  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A9DE8u) [[unlikely]] return; }
L_003A9DE8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9DF8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A9DF8u) [[unlikely]] return; }
L_003A9DF8:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = ld64((c.r[15].w[0] + 29496u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9E0Cu); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A9E0Cu) [[unlikely]] return; }
L_003A9E0C:
    c.r[4].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9E1Cu); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A9E1Cu) [[unlikely]] return; }
L_003A9E1C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9E28u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A9E28u) [[unlikely]] return; }
L_003A9E28:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9E34u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A9E34u) [[unlikely]] return; }
L_003A9E34:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 2;
L_003A9E3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9E44u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A9E44u) [[unlikely]] return; }
L_003A9E44:
    st64((c.r[18].w[0]), c.r[2].d[0]);
    c.budget -= 1;
L_003A9E48:
    c.r[19].d[0] = ld64((c.r[18].w[0]));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9E58u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A9E58u) [[unlikely]] return; }
L_003A9E58:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9E64u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A9E64u) [[unlikely]] return; }
L_003A9E64:
    st64((c.r[18].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 3;
    { const bool t = c.r[20].sd[0] >= 0; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003A9EA0; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9E80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A9E80u) [[unlikely]] return; }
L_003A9E80:
    st64((c.r[18].w[0]), c.r[2].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
L_003A9E8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9E94u);  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A9E94u) [[unlikely]] return; }
L_003A9E94:
    st64((c.r[18].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u - c.r[22].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9B34u | kUnwind; return; } goto L_003A9B34; } }
L_003A9EA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9B34u | kUnwind; return; } goto L_003A9B34; } }
L_003A9EA8:
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 20));  if (t) { goto L_003A9ED0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9EC0u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A9EC0u) [[unlikely]] return; }
L_003A9EC0:
    st64((c.r[18].w[0]), c.r[2].d[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st64((c.r[18].w[0] + 8u), c.r[2].d[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9B34u | kUnwind; return; } goto L_003A9B34; } }
L_003A9ED0:
    c.r[14].d[0] = c.r[4].d[0] << 32;
    set32(c.r[21], c.r[15].w[0] - 1046u);
    c.r[14].d[0] = static_cast<std::uint64_t>(c.r[14].sd[0] >> 32);
    set32(c.r[15], c.r[21].w[0] << 20);
    c.r[14].d[0] = c.r[14].d[0] << 32;
    set32(c.r[15], c.r[16].w[0] - c.r[15].w[0]);
    c.r[14].d[0] = c.r[14].d[0] >> 32;
    c.r[15].d[0] = c.r[15].d[0] << 32;
    c.r[19].d[0] = c.r[29].d[0] + 0ull;
    c.r[17].d[0] = c.r[14].d[0] | c.r[15].d[0];
    set32(c.r[16], 0u + 1u);
    c.budget -= 11;
L_003A9EFC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9F08u); set32(c.r[16], c.r[16].w[0] - 1u);  if (depth < kMaxDepth) unit_00AC(c, 103u, depth + 1u); else { c.pc = 0x003B24D0u; return; } if (c.pc != 0x003A9F08u) [[unlikely]] return; }
L_003A9F08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9F10u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x003A9F10u) [[unlikely]] return; }
L_003A9F10:
    st64((c.r[19].w[0]), c.r[2].d[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9F20u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A9F20u) [[unlikely]] return; }
L_003A9F20:
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[5], 0u + 1047u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9F34u); c.r[5].d[0] = c.r[5].d[0] << 52;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A9F34u) [[unlikely]] return; }
L_003A9F34:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9EFCu | kUnwind; return; } goto L_003A9EFC; } }
    st64((c.r[29].w[0] + 16u), c.r[2].d[0]);
    set32(c.r[17], 0u + 3u);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.budget -= 4;
L_003A9F4C:
    c.r[4].d[0] = ld64((c.r[16].w[0]));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9F5Cu); set32(c.r[16], c.r[16].w[0] - 8u);  if (depth < kMaxDepth) unit_00AC(c, 94u, depth + 1u); else { c.pc = 0x003B23D0u; return; } if (c.pc != 0x003A9F5Cu) [[unlikely]] return; }
L_003A9F5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[9].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003A9FA8; } }
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] + 28976u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9F80u); set32(c.r[8], 0u + 2u);  if (depth < kMaxDepth) unit_00AB(c, 32u, depth + 1u); else { c.pc = 0x003AC280u; return; } if (c.pc != 0x003A9F80u) [[unlikely]] return; }
L_003A9F80:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] >= 0; c.r[22].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9EA0u | kUnwind; return; } goto L_003A9EA0; } }
    c.r[5].d[0] = ld64((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9F94u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003A9F94u) [[unlikely]] return; }
L_003A9F94:
    c.r[5].d[0] = ld64((c.r[18].w[0] + 8u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st64((c.r[18].w[0]), c.r[2].d[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9E8Cu | kUnwind; return; } goto L_003A9E8C; } }
    c.budget -= 1;
L_003A9FA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003A9F4Cu | kUnwind; return; } goto L_003A9F4C; } }
L_003A9FB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x7FF00000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[11].d[0] = c.r[4].d[0] << 32;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[15].d[0] = c.r[12].d[0] & c.r[13].d[0];
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 16;
    { const bool t = c.r[15].d[0] != c.r[13].d[0]; c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 32);  if (t) { goto L_003AA028; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003A9FF8u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x003A9FF8u) [[unlikely]] return; }
L_003A9FF8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA004u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x003AA004u) [[unlikely]] return; }
L_003AA004:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003AA008:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003AA028:
    c.budget -= 2;
    { const bool t = c.r[12].sd[0] > 0; set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[12].w[0]) >> 20));  if (t) { goto L_003AA07C; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[15].d[0] = c.r[12].d[0] & c.r[15].d[0];
    c.r[15].d[0] = c.r[15].d[0] | c.r[11].d[0];
    c.budget -= 6;
    { const bool t = c.r[15].d[0] == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA004u | kUnwind; return; } goto L_003AA004; } }
    c.budget -= 2;
    { const bool t = c.r[12].sd[0] >= 0;  if (t) { goto L_003AA07C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA058u); c.r[5].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003AA058u) [[unlikely]] return; }
L_003AA058:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA068u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 66u, depth + 1u); else { c.pc = 0x003B1EC8u; return; } if (c.pc != 0x003AA068u) [[unlikely]] return; }
L_003AA068:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA074u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x003AA074u) [[unlikely]] return; }
L_003AA074:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA008u | kUnwind; return; } goto L_003AA008; } }
L_003AA07C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x000F0000u);  if (t) { goto L_003AA104; } }
    c.budget -= 2;
    { const bool t = c.r[12].d[0] != 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { goto L_003AA0BC; } }
    c.r[14].d[0] = c.r[11].d[0] + 0ull;
    c.r[13].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_003AA094:
    set32(c.r[15], c.r[14].w[0] >> 11);
    set32(c.r[13], c.r[13].w[0] - 21u);
    c.r[12].d[0] = c.r[12].d[0] | c.r[15].d[0];
    c.budget -= 7;
    { const bool t = c.r[12].d[0] == 0ull; set32(c.r[14], c.r[14].w[0] << 21);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA094u | kUnwind; return; } goto L_003AA094; } }
    c.r[18].d[0] = c.r[13].d[0] + 0ull;
    c.r[11].d[0] = c.r[14].d[0] + 0ull;
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 3;
L_003AA0BC:
    c.r[15].d[0] = c.r[12].d[0] & c.r[15].d[0];
    c.budget -= 3;
    { const bool t = c.r[15].d[0] != 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_003AA0E8; } }
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 1;
L_003AA0CC:
    set32(c.r[12], c.r[12].w[0] << 1);
    c.r[15].d[0] = c.r[12].d[0] & c.r[14].d[0];
    c.budget -= 7;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[10], c.r[10].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA0CCu | kUnwind; return; } goto L_003AA0CC; } }
L_003AA0E8:
    set32(c.r[15], 0u - c.r[10].w[0]);
    set32(c.r[14], c.r[18].w[0] - c.r[10].w[0]);
    set32(c.r[15], c.r[11].w[0] >> (c.r[15].w[0] & 31u));
    set32(c.r[18], c.r[14].w[0] + 1u);
    c.r[12].d[0] = c.r[12].d[0] | c.r[15].d[0];
    set32(c.r[11], c.r[11].w[0] << (c.r[10].w[0] & 31u));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.budget -= 7;
L_003AA104:
    set32(c.r[18], c.r[18].w[0] - 1023u);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[15].d[0] = c.r[12].d[0] & c.r[15].d[0];
    c.r[13].d[0] = c.r[18].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[13].d[0] == 0ull; c.r[12].d[0] = c.r[15].d[0] | c.r[14].d[0];  if (t) { goto L_003AA134; } }
    c.r[15].d[0] = c.r[11].d[0] & c.r[16].d[0];
    set32(c.r[15], c.r[15].w[0] >> 31);
    set32(c.r[11], c.r[11].w[0] << 1);
    set32(c.r[15], c.r[12].w[0] + c.r[15].w[0]);
    set32(c.r[12], c.r[12].w[0] + c.r[15].w[0]);
    c.budget -= 5;
L_003AA134:
    c.r[15].d[0] = c.r[11].d[0] & c.r[16].d[0];
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[18].w[0]) >> 1));
    set32(c.r[15], c.r[15].w[0] >> 31);
    set32(c.r[14], c.r[11].w[0] << 1);
    set32(c.r[15], c.r[12].w[0] + c.r[15].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[12], c.r[12].w[0] + c.r[15].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 11;
L_003AA160:
    set32(c.r[11], c.r[6].w[0] + c.r[10].w[0]);
    c.r[15].d[0] = c.r[12].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] != 0ull; c.r[15].d[0] = c.r[14].d[0] & c.r[16].d[0];  if (t) { goto L_003AA17C; } }
    set32(c.r[12], c.r[12].w[0] - c.r[11].w[0]);
    set32(c.r[6], c.r[11].w[0] + c.r[10].w[0]);
    set32(c.r[17], c.r[17].w[0] + c.r[10].w[0]);
    c.budget -= 3;
L_003AA17C:
    set32(c.r[10], c.r[10].w[0] >> 1);
    set32(c.r[15], c.r[15].w[0] >> 31);
    set32(c.r[14], c.r[14].w[0] << 1);
    set32(c.r[15], c.r[12].w[0] + c.r[15].w[0]);
    c.budget -= 6;
    { const bool t = c.r[10].d[0] != 0ull; set32(c.r[12], c.r[12].w[0] + c.r[15].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA160u | kUnwind; return; } goto L_003AA160; } }
    c.r[10].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 1;
L_003AA198:
    set32(c.r[13], c.r[5].w[0] + c.r[10].w[0]);
    c.r[11].d[0] = c.r[6].d[0] + 0ull;
    c.r[9].d[0] = c.r[14].d[0] < c.r[13].d[0] ? 1ull : 0ull;
    c.r[15].d[0] = c.r[6].sd[0] < c.r[12].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[15].d[0] != 0ull; c.r[8].d[0] = c.r[13].d[0] & c.r[16].d[0];  if (t) { goto L_003AA1C0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[12].d[0]; c.r[15].d[0] = c.r[14].d[0] & c.r[16].d[0];  if (t) { goto L_003AA1E8; } }
    c.budget -= 2;
    if (c.r[9].d[0] != 0ull) { set32(c.r[10], c.r[10].w[0] >> 1);  goto L_003AA1EC; }
L_003AA1C0:
    set32(c.r[5], c.r[13].w[0] + c.r[10].w[0]);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[16].d[0]; c.r[7].d[0] = c.r[5].d[0] & c.r[16].d[0];  if (t) { goto L_003AA1D4; } }
    set32(c.r[15], c.r[6].w[0] + 1u);
    if (c.r[7].d[0] == 0) c.r[6].d[0] = c.r[15].d[0];
    c.budget -= 2;
L_003AA1D4:
    set32(c.r[12], c.r[12].w[0] - c.r[11].w[0]);
    set32(c.r[14], c.r[14].w[0] - c.r[13].w[0]);
    set32(c.r[19], c.r[19].w[0] + c.r[10].w[0]);
    set32(c.r[12], c.r[12].w[0] - c.r[9].w[0]);
    c.r[15].d[0] = c.r[14].d[0] & c.r[16].d[0];
    c.budget -= 5;
L_003AA1E8:
    set32(c.r[10], c.r[10].w[0] >> 1);
    c.budget -= 1;
L_003AA1EC:
    set32(c.r[15], c.r[15].w[0] >> 31);
    set32(c.r[14], c.r[14].w[0] << 1);
    set32(c.r[15], c.r[12].w[0] + c.r[15].w[0]);
    c.budget -= 5;
    { const bool t = c.r[10].d[0] != 0ull; set32(c.r[12], c.r[12].w[0] + c.r[15].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA198u | kUnwind; return; } goto L_003AA198; } }
    c.r[15].d[0] = c.r[12].d[0] | c.r[14].d[0];
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[20], 0u + 1023u);  if (t) { goto L_003AA238; } }
    c.r[20].d[0] = c.r[20].d[0] << 52;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA21Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 94u, depth + 1u); else { c.pc = 0x003B23D0u; return; } if (c.pc != 0x003AA21Cu) [[unlikely]] return; }
L_003AA21C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0; set32(c.r[14], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 1));  if (t) { goto L_003AA23C; } }
    set32(c.r[15], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[15].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003AA288; } }
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_003AA238:
    set32(c.r[14], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 1));
    c.budget -= 1;
L_003AA23C:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    set32(c.r[12], c.r[14].w[0] + c.r[15].w[0]);
    set32(c.r[11], c.r[19].w[0] >> 1);
    set32(c.r[14], c.r[18].w[0] << 20);
    c.r[15].d[0] = c.r[11].d[0] | c.r[16].d[0];
    c.r[13].d[0] = c.r[17].d[0] & 1ull;
    set32(c.r[12], c.r[12].w[0] + c.r[14].w[0]);
    if (c.r[13].d[0] != 0) c.r[11].d[0] = c.r[15].d[0];
    c.r[21].d[0] = c.r[21].d[0] << 32;
    c.r[12].d[0] = c.r[12].d[0] << 32;
    c.r[21].d[0] = c.r[21].d[0] >> 32;
    set32(c.r[15], 0u - 1u);
    c.r[14].d[0] = c.r[11].d[0] << 32;
    c.r[21].d[0] = c.r[21].d[0] | c.r[12].d[0];
    c.r[15].d[0] = c.r[15].d[0] << 32;
    c.r[21].d[0] = c.r[21].d[0] & c.r[15].d[0];
    c.r[14].d[0] = c.r[14].d[0] >> 32;
    c.budget -= 19;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[21].d[0] | c.r[14].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA004u | kUnwind; return; } goto L_003AA004; } }
L_003AA288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA290u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 94u, depth + 1u); else { c.pc = 0x003B23D0u; return; } if (c.pc != 0x003AA290u) [[unlikely]] return; }
L_003AA290:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[15].d[0] = c.r[19].d[0] & 1ull;  if (t) { goto L_003AA2B0; } }
    set32(c.r[15], 0u - 2u);
    set32(c.r[14], c.r[17].w[0] + 1u);
    c.r[15].d[0] = c.r[19].d[0] ^ c.r[15].d[0];
    if (c.r[15].d[0] == 0) c.r[17].d[0] = c.r[14].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA238u | kUnwind; return; } goto L_003AA238; } }
L_003AA2B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[19], c.r[19].w[0] + c.r[15].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA238u | kUnwind; return; } goto L_003AA238; } }
L_003AA2B8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[13], c.f[12]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    st32((c.r[29].w[0] + 16u), c.f[22]);
    st32((c.r[29].w[0] + 12u), c.f[21]);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 8u), c.f[20]);
    c.r[14].d[0] = c.r[13].d[0] & c.r[15].d[0];
    c.budget -= 12;
    { const bool t = c.r[14].d[0] != c.r[12].d[0]; c.r[15].d[0] = c.r[12].sd[0] < c.r[14].sd[0] ? 1ull : 0ull;  if (t) { goto L_003AA314; } }
    c.budget -= 2;
    { const bool t = c.r[13].sd[0] > 0; c.f[0] = 0u;  if (t) { goto L_003AA2FC; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 29560u);
    c.f[0] = ld32((c.r[15].w[0]));
    c.budget -= 3;
L_003AA2FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[22] = ld32((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_003AA304:
    c.f[21] = ld32((c.r[29].w[0] + 12u));
    c.f[20] = ld32((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003AA314:
    c.budget -= 2;
    { const bool t = c.r[15].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003AA334; } }
    c.f[0] = fp::sub(c.f[12], c.f[12]);
    fpu_div(c, 0u, c.f[0], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.f[22] = ld32((c.r[29].w[0] + 16u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA304u | kUnwind; return; } goto L_003AA304; } }
L_003AA334:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x3EFF0000u);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[14].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] != 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003AA468; } }
    set32(c.r[15], c.r[15].w[0] + 29564u);
    c.f[0] = ld32((c.r[15].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x23000000u);
    c.r[15].d[0] = c.r[15].sd[0] < c.r[14].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[15].d[0] == 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA2FCu | kUnwind; return; } goto L_003AA2FC; } }
    c.f[21] = fp::mul(c.f[12], c.f[12]);
    set32(c.r[15], c.r[15].w[0] + 29568u);
    c.f[0] = ld32((c.r[15].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    set32(c.r[15], c.r[15].w[0] + 29572u);
    c.f[1] = ld32((c.r[15].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = fp::mul(c.f[21], c.f[1]);
    set32(c.r[15], c.r[15].w[0] + 29576u);
    c.f[2] = ld32((c.r[15].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    set32(c.r[15], c.r[15].w[0] + 29580u);
    c.f[3] = ld32((c.r[15].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = fp::add(c.f[1], c.f[3]);
    set32(c.r[15], c.r[15].w[0] + 29584u);
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.f[2] = ld32((c.r[15].w[0]));
    c.f[1] = fp::mul(c.f[21], c.f[1]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 29588u);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[3] = ld32((c.r[15].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = fp::add(c.f[1], c.f[3]);
    set32(c.r[15], c.r[15].w[0] + 29592u);
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.f[2] = ld32((c.r[15].w[0]));
    c.f[1] = fp::mul(c.f[21], c.f[1]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 29596u);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[3] = ld32((c.r[15].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = fp::add(c.f[1], c.f[3]);
    set32(c.r[15], c.r[15].w[0] + 29600u);
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.f[2] = ld32((c.r[15].w[0]));
    c.f[1] = fp::mul(c.f[21], c.f[1]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 29604u);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[3] = ld32((c.r[15].w[0]));
    c.f[22] = fp::add(c.f[1], c.f[3]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    set32(c.r[15], c.r[15].w[0] + 29608u);
    c.f[1] = ld32((c.r[15].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 29612u);
    c.f[20] = fp::mul(c.f[21], c.f[0]);
    fpu_div(c, 0u, c.f[20], c.f[22]);
    c.f[1] = fp::mul(c.f[12], c.f[0]);
    c.f[0] = ld32((c.r[15].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 29564u);
    c.f[0] = fp::sub(c.f[12], c.f[0]);
    c.budget -= 63;
L_003AA45C:
    c.f[1] = ld32((c.r[15].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.f[1], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA2FCu | kUnwind; return; } goto L_003AA2FC; } }
L_003AA468:
    c.budget -= 2;
    { const bool t = c.r[13].sd[0] >= 0; c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003AA590; } }
    set32(c.r[15], c.r[15].w[0] + 29604u);
    c.f[4] = ld32((c.r[15].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[2] = fp::add(c.f[12], c.f[4]);
    set32(c.r[15], c.r[15].w[0] + 29616u);
    c.f[1] = ld32((c.r[15].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[21] = fp::mul(c.f[2], c.f[1]);
    set32(c.r[15], c.r[15].w[0] + 29568u);
    c.f[0] = ld32((c.r[15].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    set32(c.r[15], c.r[15].w[0] + 29572u);
    c.f[12] = c.f[21];
    c.f[1] = ld32((c.r[15].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = fp::mul(c.f[21], c.f[1]);
    set32(c.r[15], c.r[15].w[0] + 29576u);
    c.f[2] = ld32((c.r[15].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    set32(c.r[15], c.r[15].w[0] + 29580u);
    c.f[3] = ld32((c.r[15].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = fp::add(c.f[1], c.f[3]);
    set32(c.r[15], c.r[15].w[0] + 29584u);
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.f[2] = ld32((c.r[15].w[0]));
    c.f[1] = fp::mul(c.f[21], c.f[1]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 29588u);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[3] = ld32((c.r[15].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = fp::add(c.f[1], c.f[3]);
    set32(c.r[15], c.r[15].w[0] + 29592u);
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.f[2] = ld32((c.r[15].w[0]));
    c.f[1] = fp::mul(c.f[21], c.f[1]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 29596u);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[3] = ld32((c.r[15].w[0]));
    c.f[1] = fp::add(c.f[1], c.f[3]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    set32(c.r[15], c.r[15].w[0] + 29600u);
    c.f[2] = ld32((c.r[15].w[0]));
    c.f[1] = fp::mul(c.f[21], c.f[1]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    set32(c.r[15], c.r[15].w[0] + 29608u);
    c.f[22] = fp::add(c.f[1], c.f[4]);
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.f[1] = ld32((c.r[15].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 58;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA558u); c.f[20] = fp::mul(c.f[21], c.f[0]);  if (depth < kMaxDepth) unit_00AA(c, 413u, depth + 1u); else { c.pc = 0x003ABF48u; return; } if (c.pc != 0x003AA558u) [[unlikely]] return; }
L_003AA558:
    c.f[12] = c.f[0];
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 29612u);
    c.f[1] = ld32((c.r[15].w[0]));
    fpu_div(c, 0u, c.f[20], c.f[22]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 29560u);
    c.f[2] = fp::mul(c.f[0], c.f[12]);
    c.f[0] = fp::sub(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[12], c.f[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; c.f[0] = fp::add(c.f[0], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA45Cu | kUnwind; return; } goto L_003AA45C; } }
L_003AA590:
    set32(c.r[15], c.r[15].w[0] + 29604u);
    c.f[20] = ld32((c.r[15].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = fp::sub(c.f[20], c.f[12]);
    set32(c.r[15], c.r[15].w[0] + 29616u);
    c.f[0] = ld32((c.r[15].w[0]));
    c.f[21] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA5B4u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_00AA(c, 413u, depth + 1u); else { c.pc = 0x003ABF48u; return; } if (c.pc != 0x003AA5B4u) [[unlikely]] return; }
L_003AA5B4:
    c.f[12] = c.f[0];
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[14], c.f[0]);
    set32(c.r[15], c.r[15].w[0] + 29568u);
    c.f[0] = ld32((c.r[15].w[0]));
    set32(c.r[15], 0u - 4096u);
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.r[13].d[0] = c.r[14].d[0] & c.r[15].d[0];
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 29572u);
    c.f[1] = ld32((c.r[15].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = fp::mul(c.f[21], c.f[1]);
    set32(c.r[15], c.r[15].w[0] + 29576u);
    c.f[2] = ld32((c.r[15].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 29580u);
    c.f[2] = c.r[13].w[0];
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.f[3] = fp::add(c.f[12], c.f[2]);
    c.f[4] = fp::mul(c.f[2], c.f[2]);
    c.f[2] = ld32((c.r[15].w[0]));
    c.f[4] = fp::sub(c.f[21], c.f[4]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 29584u);
    fpu_div(c, 4u, c.f[4], c.f[3]);
    c.f[2] = ld32((c.r[15].w[0]));
    c.f[1] = fp::mul(c.f[21], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 29588u);
    c.f[2] = ld32((c.r[15].w[0]));
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 29592u);
    c.f[2] = ld32((c.r[15].w[0]));
    c.f[1] = fp::mul(c.f[21], c.f[1]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    set32(c.r[15], c.r[15].w[0] + 29596u);
    c.f[3] = ld32((c.r[15].w[0]));
    c.f[1] = fp::add(c.f[1], c.f[3]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    set32(c.r[15], c.r[15].w[0] + 29600u);
    c.f[2] = ld32((c.r[15].w[0]));
    c.f[1] = fp::mul(c.f[21], c.f[1]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    set32(c.r[15], c.r[15].w[0] + 29608u);
    c.f[22] = fp::add(c.f[1], c.f[20]);
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.f[1] = ld32((c.r[15].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[20] = fp::mul(c.f[21], c.f[0]);
    fpu_div(c, 0u, c.f[20], c.f[22]);
    c.f[1] = fp::mul(c.f[0], c.f[12]);
    c.f[0] = fp::add(c.f[1], c.f[4]);
    c.f[1] = c.r[13].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 69;
    { const bool t = 0ull == 0ull; c.f[0] = fp::add(c.f[0], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA2FCu | kUnwind; return; } goto L_003AA2FC; } }
L_003AA6C8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[17], c.f[12]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 32u), c.f[22]);
    c.r[16].d[0] = c.r[17].d[0] & c.r[15].d[0];
    st32((c.r[29].w[0] + 28u), c.f[21]);
    st32((c.r[29].w[0] + 24u), c.f[20]);
    c.budget -= 14;
    { const bool t = c.r[16].d[0] != c.r[14].d[0]; c.r[15].d[0] = c.r[14].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;  if (t) { goto L_003AA744; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 29684u);
    c.f[0] = ld32((c.r[15].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.facc = fp::mul(c.f[12], c.f[0]);
    set32(c.r[15], c.r[15].w[0] + 29688u);
    c.f[1] = ld32((c.r[15].w[0]));
    c.f[4] = fp::add(c.facc, fp::mul(c.f[12], c.f[1]));
    c.budget -= 8;
L_003AA720:
    c.f[0] = c.f[4];
    c.budget -= 1;
L_003AA724:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[22] = ld32((c.r[29].w[0] + 32u));
    c.f[21] = ld32((c.r[29].w[0] + 28u));
    c.f[20] = ld32((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003AA744:
    c.budget -= 2;
    { const bool t = c.r[15].d[0] == 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x3EFF0000u);  if (t) { goto L_003AA764; } }
    c.f[0] = fp::sub(c.f[12], c.f[12]);
    fpu_div(c, 4u, c.f[0], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[4];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA724u | kUnwind; return; } goto L_003AA724; } }
L_003AA764:
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] != 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x31FF0000u);  if (t) { goto L_003AA7AC; } }
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] != 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003AA978; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 29692u);
    c.f[0] = ld32((c.r[15].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = fp::add(c.f[12], c.f[0]);
    set32(c.r[15], c.r[15].w[0] + 29696u);
    c.f[1] = ld32((c.r[15].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[4] = c.f[12];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA720u | kUnwind; return; } goto L_003AA720; } }
L_003AA7AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA7B4u);  if (depth < kMaxDepth) unit_00AB(c, 390u, depth + 1u); else { c.pc = 0x003AF288u; return; } if (c.pc != 0x003AA7B4u) [[unlikely]] return; }
L_003AA7B4:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 29696u);
    c.f[4] = ld32((c.r[15].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = fp::sub(c.f[4], c.f[0]);
    set32(c.r[15], c.r[15].w[0] + 29740u);
    c.f[1] = ld32((c.r[15].w[0]));
    c.f[20] = fp::mul(c.f[0], c.f[1]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 29700u);
    c.f[0] = ld32((c.r[15].w[0]));
    c.f[12] = c.f[20];
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    set32(c.r[15], c.r[15].w[0] + 29704u);
    c.f[1] = ld32((c.r[15].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = fp::mul(c.f[20], c.f[1]);
    set32(c.r[15], c.r[15].w[0] + 29708u);
    c.f[2] = ld32((c.r[15].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    set32(c.r[15], c.r[15].w[0] + 29712u);
    c.f[3] = ld32((c.r[15].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = fp::add(c.f[1], c.f[3]);
    set32(c.r[15], c.r[15].w[0] + 29716u);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.f[2] = ld32((c.r[15].w[0]));
    c.f[1] = fp::mul(c.f[20], c.f[1]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 29720u);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[3] = ld32((c.r[15].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = fp::add(c.f[1], c.f[3]);
    set32(c.r[15], c.r[15].w[0] + 29724u);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.f[2] = ld32((c.r[15].w[0]));
    c.f[1] = fp::mul(c.f[20], c.f[1]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 29728u);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[3] = ld32((c.r[15].w[0]));
    c.f[1] = fp::add(c.f[1], c.f[3]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    set32(c.r[15], c.r[15].w[0] + 29732u);
    c.f[2] = ld32((c.r[15].w[0]));
    c.f[1] = fp::mul(c.f[20], c.f[1]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    set32(c.r[15], c.r[15].w[0] + 29736u);
    c.f[22] = fp::add(c.f[1], c.f[4]);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.f[1] = ld32((c.r[15].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 59;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AA8A0u); c.f[21] = fp::mul(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_00AA(c, 413u, depth + 1u); else { c.pc = 0x003ABF48u; return; } if (c.pc != 0x003AA8A0u) [[unlikely]] return; }
L_003AA8A0:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x3F790000u);
    c.r[15].d[0] = c.r[15].d[0] | 39321ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[13], c.f[0]);  if (t) { goto L_003AA900; } }
    fpu_div(c, 21u, c.f[21], c.f[22]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = c.r[13].w[0];
    set32(c.r[15], c.r[15].w[0] + 29688u);
    c.f[0] = fp::mul(c.f[0], c.f[21]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.f[1] = ld32((c.r[15].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    set32(c.r[15], c.r[15].w[0] + 29684u);
    c.f[2] = ld32((c.r[15].w[0]));
    c.f[20] = fp::sub(c.f[2], c.f[0]);
    c.budget -= 15;
L_003AA8F0:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] > 0; c.f[4] = c.f[20];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA720u | kUnwind; return; } goto L_003AA720; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[4] = c.f[20] ^ fp::kSign;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA720u | kUnwind; return; } goto L_003AA720; } }
L_003AA900:
    set32(c.r[15], 0u - 4096u);
    c.f[2] = c.r[13].w[0];
    c.r[14].d[0] = c.r[13].d[0] & c.r[15].d[0];
    fpu_div(c, 4u, c.f[21], c.f[22]);
    c.f[0] = c.r[14].w[0];
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[6] = c.r[14].w[0];
    set32(c.r[15], c.r[15].w[0] + 29744u);
    c.f[1] = fp::mul(c.f[0], c.f[0]);
    c.f[3] = fp::add(c.f[2], c.f[0]);
    c.f[5] = ld32((c.r[15].w[0]));
    c.f[1] = fp::sub(c.f[20], c.f[1]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = fp::add(c.f[6], c.f[6]);
    set32(c.r[15], c.r[15].w[0] + 29688u);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    fpu_div(c, 1u, c.f[1], c.f[3]);
    c.f[22] = fp::sub(c.f[5], c.f[0]);
    c.f[2] = fp::mul(c.f[2], c.f[4]);
    c.f[0] = ld32((c.r[15].w[0]));
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[21] = fp::sub(c.f[2], c.f[0]);
    c.f[1] = fp::sub(c.f[21], c.f[22]);
    c.budget -= 30;
    { const bool t = 0ull == 0ull; c.f[20] = fp::sub(c.f[5], c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA8F0u | kUnwind; return; } goto L_003AA8F0; } }
L_003AA978:
    c.f[20] = fp::mul(c.f[12], c.f[12]);
    set32(c.r[15], c.r[15].w[0] + 29700u);
    c.f[0] = ld32((c.r[15].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    set32(c.r[15], c.r[15].w[0] + 29704u);
    c.f[1] = ld32((c.r[15].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = fp::mul(c.f[20], c.f[1]);
    set32(c.r[15], c.r[15].w[0] + 29708u);
    c.f[2] = ld32((c.r[15].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    set32(c.r[15], c.r[15].w[0] + 29712u);
    c.f[3] = ld32((c.r[15].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = fp::add(c.f[1], c.f[3]);
    set32(c.r[15], c.r[15].w[0] + 29716u);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.f[2] = ld32((c.r[15].w[0]));
    c.f[1] = fp::mul(c.f[20], c.f[1]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 29720u);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[3] = ld32((c.r[15].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = fp::add(c.f[1], c.f[3]);
    set32(c.r[15], c.r[15].w[0] + 29724u);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.f[2] = ld32((c.r[15].w[0]));
    c.f[1] = fp::mul(c.f[20], c.f[1]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 29728u);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[3] = ld32((c.r[15].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = fp::add(c.f[1], c.f[3]);
    set32(c.r[15], c.r[15].w[0] + 29732u);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.f[2] = ld32((c.r[15].w[0]));
    c.f[1] = fp::mul(c.f[20], c.f[1]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 29696u);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[3] = ld32((c.r[15].w[0]));
    c.f[22] = fp::add(c.f[1], c.f[3]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    set32(c.r[15], c.r[15].w[0] + 29736u);
    c.f[1] = ld32((c.r[15].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[21] = fp::mul(c.f[20], c.f[0]);
    fpu_div(c, 21u, c.f[21], c.f[22]);
    c.f[0] = fp::mul(c.f[12], c.f[21]);
    c.budget -= 58;
    { const bool t = 0ull == 0ull; c.f[4] = fp::add(c.f[12], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AA720u | kUnwind; return; } goto L_003AA720; } }
L_003AAA60:
    c.f[0] = c.f[12];
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[12], c.f[13]);
    set32(c.r[11], c.f[12]);
    c.r[14].d[0] = c.r[14].d[0] | 65535ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[9].d[0] = c.r[12].d[0] & c.r[14].d[0];
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 12;
    { const bool t = c.r[12].d[0] != c.r[15].d[0]; c.r[10].d[0] = c.r[11].d[0] & c.r[14].d[0];  if (t) { goto L_003AAAA0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00AB(c, 372u, depth); }
L_003AAAA0:
    set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[12].w[0]) >> 30));
    c.r[14].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[15].d[0] = c.r[15].d[0] & 2ull;
    set32(c.r[13], c.r[11].w[0] >> 31);
    c.r[14].d[0] = c.r[14].d[0] | 65535ull;
    c.r[14].d[0] = c.r[14].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[14].d[0] != 0ull; c.r[16].d[0] = c.r[13].d[0] | c.r[15].d[0];  if (t) { goto L_003AAB00; } }
    c.r[14].sd[0] = static_cast<std::int32_t>(0x40490000u);
    set32(c.r[15], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[15].d[0]; c.r[14].d[0] = c.r[14].d[0] | 4058ull;  if (t) { goto L_003AAAEC; } }
    c.r[15].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[15].d[0] == 0ull) { c.r[14].sd[0] = static_cast<std::int32_t>(0xC0490000u);  goto L_003AAC14; }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0; c.r[15].sd[0] = static_cast<std::int32_t>(0x007F0000u);  if (t) { goto L_003AAB04; } }
    c.budget -= 1;
L_003AAAE8:
    set32(c.r[14], c.f[0]);
    c.budget -= 1;
L_003AAAEC:
    c.f[0] = c.r[14].w[0];
    c.budget -= 1;
L_003AAAF0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AAB00:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.budget -= 1;
L_003AAB04:
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] != 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003AAB4C; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0xBFC90000u);
    c.r[15].d[0] = c.r[15].d[0] | 4058ull;
    ctc2(c, 22u, c.r[15].w[0]);
    c.budget -= 6;
    { const bool t = c.r[11].sd[0] < 0; c.r[15].sd[0] = static_cast<std::int32_t>(0x3FC90000u);  if (t) { goto L_003AAB38; } }
    c.r[15].d[0] = c.r[15].d[0] | 4058ull;
    ctc2(c, 22u, c.r[15].w[0]);
    c.budget -= 3;
L_003AAB38:
    set32(c.r[14], cfc2(c, 22u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[0] = c.r[14].w[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAAF0u | kUnwind; return; } goto L_003AAAF0; } }
L_003AAB4C:
    set32(c.r[14], c.r[10].w[0] - c.r[9].w[0]);
    set32(c.r[15], c.r[15].w[0] + 29776u);
    set32(c.r[14], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[14].w[0]) >> 23));
    c.f[1] = ld32((c.r[15].w[0]));
    c.r[15].d[0] = c.r[14].sd[0] < 61ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], 0u + 1u);  if (t) { goto L_003AAB9C; } }
    c.budget -= 2;
    { const bool t = c.r[12].sd[0] >= 0; c.r[15].d[0] = c.r[14].sd[0] < -60ll ? 1ull : 0ull;  if (t) { goto L_003AAB78; } }
    c.budget -= 2;
    { const bool t = c.r[15].d[0] != 0ull; c.f[1] = 0u;  if (t) { goto L_003AAB98; } }
L_003AAB78:
    fpu_div(c, 12u, c.f[0], c.f[13]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAB8Cu);  if (depth < kMaxDepth) unit_00AB(c, 390u, depth + 1u); else { c.pc = 0x003AF288u; return; } if (c.pc != 0x003AAB8Cu) [[unlikely]] return; }
L_003AAB8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AAB94u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_00AB(c, 372u, depth + 1u); else { c.pc = 0x003AEE10u; return; } if (c.pc != 0x003AAB94u) [[unlikely]] return; }
L_003AAB94:
    c.f[1] = c.f[0];
    c.budget -= 1;
L_003AAB98:
    set32(c.r[15], 0u + 1u);
    c.budget -= 1;
L_003AAB9C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[15].d[0]; c.r[15].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_003AAC04; } }
    c.budget -= 2;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], 0u + 2u);  if (t) { goto L_003AABD8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[14], c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAAECu | kUnwind; return; } goto L_003AAAEC; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 1;
L_003AABB8:
    set32(c.r[15], c.r[15].w[0] + 29780u);
    c.f[0] = ld32((c.r[15].w[0]));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 29784u);
    c.f[1] = ld32((c.r[15].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.f[0], c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAAE8u | kUnwind; return; } goto L_003AAAE8; } }
L_003AABD8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[15].d[0]; c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AABB8u | kUnwind; return; } goto L_003AABB8; } }
    set32(c.r[15], c.r[15].w[0] + 29780u);
    c.f[0] = ld32((c.r[15].w[0]));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 29784u);
    c.f[1] = ld32((c.r[15].w[0]));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[14], c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAAECu | kUnwind; return; } goto L_003AAAEC; } }
L_003AAC04:
    set32(c.r[14], c.f[1]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[14].d[0] = c.r[14].d[0] ^ c.r[15].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAAECu | kUnwind; return; } goto L_003AAAEC; } }
L_003AAC14:
    set32(c.r[15], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[15].d[0]; c.r[14].d[0] = c.r[14].d[0] | 4058ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAAECu | kUnwind; return; } goto L_003AAAEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x007F0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAB04u | kUnwind; return; } goto L_003AAB04; } }
L_003AAC28:
    set32(c.r[12], c.f[12]);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x42B20000u);
    c.r[14].d[0] = c.r[14].d[0] | 65535ull;
    c.r[15].d[0] = c.r[15].d[0] | 54524ull;
    c.r[11].d[0] = c.r[12].d[0] & c.r[14].d[0];
    c.r[15].d[0] = c.r[15].sd[0] < c.r[12].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[10], c.r[12].w[0] >> 31);  if (t) { goto L_003AAC5C; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[13], ld32((c.r[15].w[0] + 29856u)));
    c.budget -= 2;
L_003AAC54:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = c.r[13].w[0];  c.pc = t; return; }
L_003AAC5C:
    c.budget -= 2;
    { const bool t = c.r[12].sd[0] >= 0; c.r[15].sd[0] = static_cast<std::int32_t>(0x3EB10000u);  if (t) { goto L_003AAC7C; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x42AE0000u);
    c.r[15].d[0] = c.r[15].d[0] | 44112ull;
    c.r[15].d[0] = c.r[15].d[0] < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] != 0ull; c.r[13].d[0] = 0ull + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAC54u | kUnwind; return; } goto L_003AAC54; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x3EB10000u);
    c.budget -= 1;
L_003AAC7C:
    c.r[15].d[0] = c.r[15].d[0] | 29208ull;
    c.r[15].d[0] = c.r[15].d[0] < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] == 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x3F850000u);  if (t) { goto L_003AAE50; } }
    c.r[15].d[0] = c.r[15].d[0] | 5521ull;
    c.r[15].d[0] = c.r[15].d[0] < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] != 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003AADF4; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[13], c.r[10].w[0] << 2);
    set32(c.r[15], c.r[15].w[0] + 29816u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[13].w[0] + c.r[15].w[0]);
    set32(c.r[14], c.r[14].w[0] + 29824u);
    c.f[0] = ld32((c.r[15].w[0]));
    set32(c.r[13], c.r[13].w[0] + c.r[14].w[0]);
    c.f[4] = ld32((c.r[13].w[0]));
    c.f[3] = fp::sub(c.f[12], c.f[0]);
    set32(c.r[15], 0u - c.r[10].w[0]);
    set32(c.r[15], c.r[15].w[0] - c.r[10].w[0]);
    set32(c.r[9], c.r[15].w[0] + 1u);
    c.budget -= 13;
L_003AACD0:
    c.f[12] = fp::sub(c.f[3], c.f[4]);
    c.budget -= 1;
L_003AACD4:
    c.f[2] = fp::mul(c.f[12], c.f[12]);
    c.budget -= 1;
L_003AACD8:
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[14], c.r[14].w[0] + 29880u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = ld32((c.r[14].w[0]));
    set32(c.r[15], c.r[15].w[0] + 29884u);
    c.f[1] = ld32((c.r[15].w[0]));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[14], c.r[14].w[0] + 29888u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 29892u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = ld32((c.r[14].w[0]));
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    set32(c.r[14], c.r[14].w[0] + 29896u);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = ld32((c.r[15].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = ld32((c.r[14].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.budget -= 26;
    { const bool t = c.r[9].d[0] != 0ull; c.f[2] = fp::sub(c.f[12], c.f[0]);  if (t) { goto L_003AAD7C; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = fp::mul(c.f[12], c.f[2]);
    set32(c.r[15], c.r[15].w[0] + 29900u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = ld32((c.r[15].w[0]));
    set32(c.r[14], c.r[14].w[0] + 29872u);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[12]);
    c.f[1] = ld32((c.r[14].w[0]));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 13;
L_003AAD74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[13], c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAC54u | kUnwind; return; } goto L_003AAC54; } }
L_003AAD7C:
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = fp::mul(c.f[12], c.f[2]);
    set32(c.r[14], c.r[14].w[0] + 29900u);
    c.r[15].d[0] = c.r[9].sd[0] < -125ll ? 1ull : 0ull;
    c.f[0] = ld32((c.r[14].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[14], c.r[14].w[0] + 29872u);
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.f[1] = fp::sub(c.f[4], c.f[1]);
    c.f[0] = ld32((c.r[14].w[0]));
    c.f[1] = fp::sub(c.f[1], c.f[3]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 17;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[14], c.f[0]);  if (t) { goto L_003AADCC; } }
    set32(c.r[15], c.r[9].w[0] << 23);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[13], c.r[14].w[0] + c.r[15].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAC54u | kUnwind; return; } goto L_003AAC54; } }
L_003AADCC:
    set32(c.r[15], c.f[0]);
    set32(c.r[14], c.r[9].w[0] + 100u);
    set32(c.r[14], c.r[14].w[0] << 23);
    set32(c.r[14], c.r[15].w[0] + c.r[14].w[0]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = c.r[14].w[0];
    set32(c.r[15], c.r[15].w[0] + 29904u);
    c.f[0] = ld32((c.r[15].w[0]));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.f[1] = fp::mul(c.f[1], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAD74u | kUnwind; return; } goto L_003AAD74; } }
L_003AADF4:
    set32(c.r[14], c.r[10].w[0] << 2);
    set32(c.r[15], c.r[15].w[0] + 29860u);
    c.f[1] = ld32((c.r[15].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = fp::mul(c.f[12], c.f[1]);
    set32(c.r[15], c.r[15].w[0] + 29800u);
    set32(c.r[14], c.r[14].w[0] + c.r[15].w[0]);
    c.f[0] = ld32((c.r[14].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 29868u);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[14], c.r[14].w[0] + 29864u);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[9], c.f[0]);
    c.f[1] = ld32((c.r[15].w[0]));
    c.f[2] = c.r[9].w[0];
    c.f[0] = ld32((c.r[14].w[0]));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[4] = fp::mul(c.f[2], c.f[1]);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; c.f[3] = fp::sub(c.f[12], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AACD0u | kUnwind; return; } goto L_003AACD0; } }
L_003AAE50:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x317F0000u);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[15].d[0] = c.r[15].d[0] < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[15].d[0] != 0ull) { c.r[9].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AACD4u | kUnwind; return; } goto L_003AACD4; }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 29876u);
    set32(c.r[14], c.r[14].w[0] + 29872u);
    c.f[0] = ld32((c.r[15].w[0]));
    c.f[1] = ld32((c.r[14].w[0]));
    c.f[0] = fp::add(c.f[12], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    if (!(c.fcr31 & kFpuCondition)) { c.f[2] = fp::mul(c.f[12], c.f[12]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AACD8u | kUnwind; return; } goto L_003AACD8; }
    c.f[12] = fp::add(c.f[12], c.f[1]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[13], c.f[12]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAC54u | kUnwind; return; } goto L_003AAC54; } }
L_003AAE98:
    set32(c.r[10], c.f[12]);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[14], c.f[13]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[13].d[0] = c.r[13].d[0] | 65535ull;
    c.r[9].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[8].d[0] = c.r[10].d[0] & c.r[15].d[0];
    c.r[9].d[0] = c.r[9].d[0] | 65535ull;
    c.r[11].d[0] = c.r[14].d[0] & c.r[13].d[0];
    c.r[15].d[0] = c.r[9].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[15].d[0] != 0ull; c.r[12].d[0] = c.r[10].d[0] ^ c.r[8].d[0];  if (t) { goto L_003AAEE0; } }
    c.f[0] = fp::mul(c.f[12], c.f[13]);
    fpu_div(c, 0u, c.f[0], c.f[0]);
    c.budget -= 4;
L_003AAED8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003AAEE0:
    c.r[15].d[0] = c.r[12].sd[0] < c.r[11].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] != 0ull; c.f[0] = c.f[12];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAED8u | kUnwind; return; } goto L_003AAED8; } }
    c.budget -= 2;
    { const bool t = c.r[12].d[0] == c.r[11].d[0]; set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[12].w[0]) >> 23));  if (t) { goto L_003AAFE4; } }
    set32(c.r[7], c.r[15].w[0] - 127u);
    set32(c.r[14], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> 23));
    c.r[15].d[0] = c.r[7].sd[0] < -126ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[10], c.r[14].w[0] - 127u);  if (t) { goto L_003AB00C; } }
    c.r[14].d[0] = c.r[12].d[0] & c.r[9].d[0];
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[12].d[0] = c.r[14].d[0] | c.r[15].d[0];
    c.budget -= 3;
L_003AAF14:
    c.r[9].d[0] = c.r[10].sd[0] < -126ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[15], 0u - 126u);  if (t) { goto L_003AB000; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[15].d[0] = c.r[11].d[0] & c.r[15].d[0];
    c.r[11].d[0] = c.r[15].d[0] | c.r[14].d[0];
    c.budget -= 5;
L_003AAF34:
    set32(c.r[13], c.r[7].w[0] - c.r[10].w[0]);
    set32(c.r[15], 0u - 1u);
    set32(c.r[13], c.r[13].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[13].d[0] == c.r[15].d[0]; set32(c.r[14], c.r[12].w[0] - c.r[11].w[0]);  if (t) { goto L_003AAF64; } }
L_003AAF48:
    c.budget -= 2;
    { const bool t = c.r[14].sd[0] < 0; set32(c.r[12], c.r[12].w[0] << 1);  if (t) { goto L_003AAF58; } }
    c.budget -= 2;
    { const bool t = c.r[14].d[0] == 0ull; set32(c.r[12], c.r[14].w[0] << 1);  if (t) { goto L_003AAFE4; } }
L_003AAF58:
    set32(c.r[13], c.r[13].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[13].d[0] != c.r[15].d[0]; set32(c.r[14], c.r[12].w[0] - c.r[11].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAF48u | kUnwind; return; } goto L_003AAF48; } }
L_003AAF64:
    c.r[15].d[0] = c.r[14].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[15].d[0] == 0) c.r[12].d[0] = c.r[14].d[0];
    c.budget -= 4;
    { const bool t = c.r[12].d[0] == 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x007F0000u);  if (t) { goto L_003AAFE4; } }
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[12].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] != 0ull;  if (t) { goto L_003AAFAC; } }
    c.r[13].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[13].d[0] = c.r[13].d[0] | 65535ull;
    c.budget -= 2;
L_003AAF8C:
    set32(c.r[12], c.r[12].w[0] << 1);
    c.r[15].d[0] = c.r[13].sd[0] < c.r[12].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[10], c.r[10].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAF8Cu | kUnwind; return; } goto L_003AAF8C; } }
    c.r[9].d[0] = c.r[10].sd[0] < -126ll ? 1ull : 0ull;
    c.budget -= 1;
L_003AAFAC:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[15], 0u - 126u);  if (t) { goto L_003AAFD8; } }
    set32(c.r[14], c.r[10].w[0] + 127u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0xFF800000u);
    set32(c.r[15], c.r[12].w[0] + c.r[15].w[0]);
    set32(c.r[14], c.r[14].w[0] << 23);
    c.r[12].d[0] = c.r[15].d[0] | c.r[14].d[0];
    c.budget -= 5;
L_003AAFC8:
    c.r[10].d[0] = c.r[12].d[0] | c.r[8].d[0];
    c.f[0] = c.r[10].w[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003AAFD8:
    set32(c.r[13], c.r[15].w[0] - c.r[10].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[12], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[12].w[0]) >> (c.r[13].w[0] & 31u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAFC8u | kUnwind; return; } goto L_003AAFC8; } }
L_003AAFE4:
    set32(c.r[14], c.r[8].w[0] >> 31);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[14], c.r[14].w[0] << 2);
    set32(c.r[15], c.r[15].w[0] + 29920u);
    set32(c.r[14], c.r[14].w[0] + c.r[15].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[14].w[0]));  c.pc = t; return; }
L_003AB000:
    set32(c.r[13], c.r[15].w[0] - c.r[10].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[11], c.r[11].w[0] << (c.r[13].w[0] & 31u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAF34u | kUnwind; return; } goto L_003AAF34; } }
L_003AB00C:
    set32(c.r[15], 0u - 126u);
    set32(c.r[13], c.r[15].w[0] - c.r[7].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[12], c.r[12].w[0] << (c.r[13].w[0] & 31u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AAF14u | kUnwind; return; } goto L_003AAF14; } }
    c.budget -= 1;
L_003AB020:
    set32(c.r[13], c.f[12]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[10].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[10].d[0] = c.r[10].d[0] | 65535ull;
    c.r[15].d[0] = c.r[13].d[0] & c.r[15].d[0];
    c.r[15].d[0] = c.r[10].sd[0] < c.r[15].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[15].d[0] != 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003AB04C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = ld32((c.r[15].w[0] + 29972u));  c.pc = t; return; }
L_003AB04C:
    c.budget -= 2;
    { const bool t = c.r[13].sd[0] >= 0; c.r[14].sd[0] = static_cast<std::int32_t>(0x004A0000u);  if (t) { goto L_003AB070; } }
    c.f[1] = fp::sub(c.f[12], c.f[12]);
    c.f[0] = 0u;
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 5;
L_003AB068:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003AB070:
    c.r[11].d[0] = c.r[13].d[0] & c.r[10].d[0];
    set32(c.r[12], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[13].w[0]) >> 23));
    c.r[14].d[0] = c.r[14].d[0] | 64288ull;
    set32(c.r[14], c.r[11].w[0] + c.r[14].w[0]);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[9].d[0] = c.r[14].d[0] & c.r[13].d[0];
    c.r[15].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[15].d[0] = c.r[9].d[0] ^ c.r[15].d[0];
    set32(c.r[14], c.r[11].w[0] + 15u);
    c.r[13].d[0] = c.r[11].d[0] | c.r[15].d[0];
    c.r[14].d[0] = c.r[14].d[0] & c.r[10].d[0];
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = c.r[13].w[0];
    set32(c.r[15], c.r[15].w[0] + 29976u);
    set32(c.r[12], c.r[12].w[0] - 127u);
    c.f[0] = ld32((c.r[15].w[0]));
    c.r[14].d[0] = c.r[14].sd[0] < 16ll ? 1ull : 0ull;
    c.f[12] = fp::sub(c.f[1], c.f[0]);
    set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 23));
    c.budget -= 21;
    { const bool t = c.r[14].d[0] == 0ull; set32(c.r[12], c.r[12].w[0] + c.r[15].w[0]);  if (t) { goto L_003AB16C; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[13].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003AB104; } }
    c.budget -= 2;
    { const bool t = c.r[12].d[0] == 0ull; c.r[13].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB068u | kUnwind; return; } goto L_003AB068; } }
    c.f[6] = c.r[12].w[0];
    set32(c.r[13], c.r[13].w[0] + 29980u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[6] = fp::cvt_s_w(c.f[6]);
    set32(c.r[15], c.r[15].w[0] + 29984u);
    c.f[0] = ld32((c.r[13].w[0]));
    c.f[1] = ld32((c.r[15].w[0]));
    c.facc = fp::mul(c.f[6], c.f[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::add(c.facc, fp::mul(c.f[6], c.f[1]));  c.pc = t; return; }
L_003AB104:
    c.f[2] = fp::mul(c.f[12], c.f[12]);
    set32(c.r[13], c.r[13].w[0] + 29988u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = ld32((c.r[13].w[0]));
    set32(c.r[15], c.r[15].w[0] + 29992u);
    c.f[0] = ld32((c.r[15].w[0]));
    c.f[1] = fp::mul(c.f[12], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 10;
    { const bool t = c.r[12].d[0] != 0ull; c.f[2] = fp::mul(c.f[2], c.f[0]);  if (t) { goto L_003AB134; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::sub(c.f[12], c.f[2]);  c.pc = t; return; }
L_003AB134:
    c.f[6] = c.r[12].w[0];
    c.r[13].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[13], c.r[13].w[0] + 29984u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[6] = fp::cvt_s_w(c.f[6]);
    set32(c.r[15], c.r[15].w[0] + 29980u);
    c.f[0] = ld32((c.r[13].w[0]));
    c.f[1] = ld32((c.r[15].w[0]));
    c.f[0] = fp::mul(c.f[6], c.f[0]);
    c.f[1] = fp::mul(c.f[6], c.f[1]);
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    c.budget -= 11;
L_003AB160:
    c.f[0] = fp::sub(c.f[0], c.f[12]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::sub(c.f[1], c.f[0]);  c.pc = t; return; }
L_003AB16C:
    c.r[13].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[6] = c.r[12].w[0];
    set32(c.r[13], c.r[13].w[0] + 29996u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0xFFCF0000u);
    c.f[0] = ld32((c.r[13].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00350000u);
    c.r[14].d[0] = c.r[14].d[0] | 23600ull;
    c.f[6] = fp::cvt_s_w(c.f[6]);
    c.f[0] = fp::add(c.f[12], c.f[0]);
    c.r[15].d[0] = c.r[15].d[0] | 49800ull;
    set32(c.r[15], c.r[15].w[0] - c.r[11].w[0]);
    set32(c.r[9], c.r[11].w[0] + c.r[14].w[0]);
    c.r[9].d[0] = c.r[9].d[0] | c.r[15].d[0];
    c.r[13].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[13], c.r[13].w[0] + 30004u);
    fpu_div(c, 7u, c.f[12], c.f[0]);
    set32(c.r[15], c.r[15].w[0] + 30000u);
    c.f[1] = ld32((c.r[13].w[0]));
    c.r[13].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[13], c.r[13].w[0] + 30012u);
    c.f[3] = ld32((c.r[13].w[0]));
    c.r[13].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[5] = fp::mul(c.f[7], c.f[7]);
    set32(c.r[13], c.r[13].w[0] + 30020u);
    c.f[0] = ld32((c.r[15].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[4] = fp::mul(c.f[5], c.f[5]);
    set32(c.r[15], c.r[15].w[0] + 30008u);
    c.f[2] = ld32((c.r[15].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = fp::mul(c.f[4], c.f[0]);
    set32(c.r[15], c.r[15].w[0] + 30016u);
    c.f[1] = fp::mul(c.f[4], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[3]);
    c.f[0] = fp::mul(c.f[4], c.f[0]);
    c.f[2] = ld32((c.r[15].w[0]));
    c.f[1] = fp::mul(c.f[4], c.f[1]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[3] = ld32((c.r[13].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    set32(c.r[15], c.r[15].w[0] + 30024u);
    c.f[1] = fp::add(c.f[1], c.f[3]);
    c.f[0] = fp::mul(c.f[4], c.f[0]);
    c.f[2] = ld32((c.r[15].w[0]));
    c.facc = fp::mul(c.f[4], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.budget -= 52;
    { const bool t = c.r[9].sd[0] <= 0; c.f[2] = fp::add(c.facc, fp::mul(c.f[5], c.f[0]));  if (t) { goto L_003AB298; } }
    c.r[13].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[13], c.r[13].w[0] + 29992u);
    c.f[0] = ld32((c.r[13].w[0]));
    c.f[0] = fp::mul(c.f[12], c.f[0]);
    c.budget -= 6;
    { const bool t = c.r[12].d[0] != 0ull; c.f[3] = fp::mul(c.f[0], c.f[12]);  if (t) { goto L_003AB268; } }
    c.f[0] = fp::add(c.f[3], c.f[2]);
    c.f[0] = fp::mul(c.f[7], c.f[0]);
    c.f[0] = fp::sub(c.f[3], c.f[0]);
    c.budget -= 3;
L_003AB260:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::sub(c.f[12], c.f[0]);  c.pc = t; return; }
L_003AB268:
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[13], c.r[13].w[0] + 29984u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = ld32((c.r[13].w[0]));
    set32(c.r[15], c.r[15].w[0] + 29980u);
    c.f[1] = ld32((c.r[15].w[0]));
    c.facc = fp::mul(c.f[7], c.f[2]);
    c.f[0] = fp::add(c.facc, fp::mul(c.f[6], c.f[0]));
    c.f[1] = fp::mul(c.f[6], c.f[1]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; c.f[0] = fp::sub(c.f[3], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB160u | kUnwind; return; } goto L_003AB160; } }
L_003AB298:
    c.budget -= 2;
    { const bool t = c.r[12].d[0] != 0ull; c.f[0] = fp::sub(c.f[12], c.f[2]);  if (t) { goto L_003AB2A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = fp::mul(c.f[7], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB260u | kUnwind; return; } goto L_003AB260; } }
L_003AB2A8:
    c.r[13].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[13], c.r[13].w[0] + 29984u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = ld32((c.r[13].w[0]));
    set32(c.r[15], c.r[15].w[0] + 29980u);
    c.facc = fp::mul(c.f[7], c.f[0]);
    c.f[0] = fp::sub(c.facc, fp::mul(c.f[6], c.f[1]));
    c.f[2] = ld32((c.r[15].w[0]));
    c.f[2] = fp::mul(c.f[6], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[12]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = fp::sub(c.f[2], c.f[0]);  c.pc = t; return; }
L_003AB2D8:
    set32(c.r[13], c.f[12]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[11].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[11].d[0] = c.r[11].d[0] | 65535ull;
    st32((c.r[29].w[0] + 12u), c.f[21]);
    c.r[15].d[0] = c.r[13].d[0] & c.r[15].d[0];
    st32((c.r[29].w[0] + 8u), c.f[20]);
    c.r[15].d[0] = c.r[11].sd[0] < c.r[15].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[15].d[0] != 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003AB324; } }
    c.f[0] = ld32((c.r[15].w[0] + 30052u));
    c.budget -= 1;
L_003AB310:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003AB314:
    c.f[21] = ld32((c.r[29].w[0] + 12u));
    c.f[20] = ld32((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003AB324:
    c.budget -= 2;
    { const bool t = c.r[13].sd[0] >= 0; set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[13].w[0]) >> 23));  if (t) { goto L_003AB348; } }
    c.f[1] = fp::sub(c.f[12], c.f[12]);
    c.f[0] = 0u;
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB314u | kUnwind; return; } goto L_003AB314; } }
L_003AB348:
    c.r[12].d[0] = c.r[13].d[0] & c.r[11].d[0];
    set32(c.r[15], c.r[15].w[0] - 127u);
    set32(c.r[14], 0u + 127u);
    set32(c.r[13], c.r[15].w[0] >> 31);
    set32(c.r[15], c.r[15].w[0] + c.r[13].w[0]);
    set32(c.r[14], c.r[14].w[0] - c.r[13].w[0]);
    c.f[21] = c.r[15].w[0];
    set32(c.r[14], c.r[14].w[0] << 23);
    c.r[13].d[0] = c.r[12].d[0] | c.r[14].d[0];
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[12] = c.r[13].w[0];
    set32(c.r[15], c.r[15].w[0] + 30056u);
    c.f[21] = fp::cvt_s_w(c.f[21]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB384u); c.f[20] = ld32((c.r[15].w[0]));  if (depth < kMaxDepth) unit_00AA(c, 379u, depth + 1u); else { c.pc = 0x003AB020u; return; } if (c.pc != 0x003AB384u) [[unlikely]] return; }
L_003AB384:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[20] = fp::mul(c.f[21], c.f[20]);
    set32(c.r[15], c.r[15].w[0] + 30060u);
    c.f[1] = ld32((c.r[15].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 30064u);
    c.facc = fp::add(c.f[20], c.f[0]);
    c.f[0] = ld32((c.r[15].w[0]));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.f[0] = fp::add(c.facc, fp::mul(c.f[21], c.f[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB310u | kUnwind; return; } goto L_003AB310; } }
L_003AB3B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[29].w[0] + 52u), c.f[21]);
    c.r[14].d[0] = c.r[14].d[0] | 65535ull;
    st32((c.r[29].w[0] + 48u), c.f[20]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.f[21] = c.f[13];
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.f[20] = c.f[12];
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    set32(c.r[13], c.r[13].w[0] + 30208u);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    set32(c.r[17], c.f[13]);
    set32(c.r[18], c.f[12]);
    c.r[16].d[0] = c.r[17].d[0] & c.r[14].d[0];
    c.f[0] = ld32((c.r[13].w[0]));
    c.r[15].d[0] = c.r[15].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 24;
    { const bool t = c.r[15].d[0] == 0ull; c.r[19].d[0] = c.r[18].d[0] & c.r[14].d[0];  if (t) { goto L_003AB45C; } }
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_003AB430; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x4B7F0000u);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] == 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x3F7F0000u);  if (t) { goto L_003ABB74; } }
    set32(c.r[20], 0u + 2u);
    c.budget -= 1;
L_003AB430:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_003AB434:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[15].d[0]) { c.r[15].sd[0] = static_cast<std::int32_t>(0x40000000u);  goto L_003AB484; }
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; c.f[0] = c.f[20];  if (t) { goto L_003AB45C; } }
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[14], c.r[14].w[0] + 30208u);
    c.f[0] = ld32((c.r[14].w[0]));
    fpu_div(c, 0u, c.f[0], c.f[20]);
    c.budget -= 6;
L_003AB45C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_003AB460:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.f[21] = ld32((c.r[29].w[0] + 52u));
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003AB484:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[15].d[0]; c.r[15].sd[0] = static_cast<std::int32_t>(0x3F000000u);  if (t) { goto L_003AB494; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = fp::mul(c.f[20], c.f[20]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB45Cu | kUnwind; return; } goto L_003AB45C; } }
L_003AB494:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[15].d[0];  if (t) { goto L_003AB4CC; } }
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] < 0; c.f[12] = c.f[20];  if (t) { goto L_003AB4CC; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.f[21] = ld32((c.r[29].w[0] + 52u));
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 64u);  goto L_003ABF48; }
L_003AB4CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB4D4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00AB(c, 390u, depth + 1u); else { c.pc = 0x003AF288u; return; } if (c.pc != 0x003AB4D4u) [[unlikely]] return; }
L_003AB4D4:
    c.r[14].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[14].d[0] = c.r[14].d[0] | 65535ull;
    c.r[15].d[0] = c.r[14].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] == 0ull; c.f[12] = c.f[0];  if (t) { goto L_003AB4F4; } }
    c.r[13].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[13].d[0]; set32(c.r[8], c.r[18].w[0] >> 31);  if (t) { goto L_003AB558; } }
L_003AB4F4:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003AB510; } }
    set32(c.r[15], c.r[15].w[0] + 30208u);
    c.f[0] = ld32((c.r[15].w[0]));
    fpu_div(c, 12u, c.f[0], c.f[12]);
    c.budget -= 5;
L_003AB510:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0; c.f[0] = c.f[12];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB45Cu | kUnwind; return; } goto L_003AB45C; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0xC0800000u);
    set32(c.r[15], c.r[19].w[0] + c.r[15].w[0]);
    c.r[15].d[0] = c.r[15].d[0] | c.r[20].d[0];
    c.budget -= 5;
    { const bool t = c.r[15].d[0] != 0ull; set32(c.r[15], 0u + 1u);  if (t) { goto L_003AB544; } }
    c.f[0] = fp::sub(c.f[12], c.f[12]);
    fpu_div(c, 12u, c.f[0], c.f[0]);
    c.budget -= 4;
L_003AB53C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[12];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB45Cu | kUnwind; return; } goto L_003AB45C; } }
L_003AB544:
    c.budget -= 2;
    if (c.r[20].d[0] == c.r[15].d[0]) { c.f[12] = c.f[12] ^ fp::kSign;  if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB53Cu | kUnwind; return; } goto L_003AB53C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = c.f[12];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB45Cu | kUnwind; return; } goto L_003AB45C; } }
    c.budget -= 1;
L_003AB558:
    set32(c.r[15], c.r[8].w[0] - 1u);
    c.r[15].d[0] = c.r[15].d[0] | c.r[20].d[0];
    c.budget -= 4;
    { const bool t = c.r[15].d[0] != 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x4D000000u);  if (t) { goto L_003AB580; } }
    c.f[0] = fp::sub(c.f[20], c.f[20]);
    fpu_div(c, 0u, c.f[0], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB460u | kUnwind; return; } goto L_003AB460; } }
L_003AB580:
    c.r[15].d[0] = c.r[15].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x3F7F0000u);  if (t) { goto L_003AB928; } }
    c.r[15].d[0] = c.r[15].d[0] | 65527ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[15].d[0] != 0ull) { c.r[15].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_003AB5B4; }
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0; c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003AB5AC; } }
L_003AB5A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = 0u;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB45Cu | kUnwind; return; } goto L_003AB45C; } }
L_003AB5AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[15].w[0] + 30204u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB45Cu | kUnwind; return; } goto L_003AB45C; } }
L_003AB5B4:
    c.r[15].d[0] = c.r[15].d[0] | 7ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] == 0ull; c.r[13].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003AB5D8; } }
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0; c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB5A4u | kUnwind; return; } goto L_003AB5A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[15].w[0] + 30204u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB45Cu | kUnwind; return; } goto L_003AB45C; } }
    c.budget -= 1;
L_003AB5D8:
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[13], c.r[13].w[0] + 30208u);
    set32(c.r[14], c.r[14].w[0] + 30212u);
    c.f[0] = ld32((c.r[13].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[3] = ld32((c.r[14].w[0]));
    set32(c.r[15], c.r[15].w[0] + 30216u);
    c.f[20] = fp::sub(c.f[20], c.f[0]);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[13], c.r[13].w[0] + 30220u);
    set32(c.r[14], c.r[14].w[0] + 30224u);
    c.f[2] = ld32((c.r[13].w[0]));
    c.f[1] = ld32((c.r[14].w[0]));
    c.f[3] = fp::mul(c.f[20], c.f[3]);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = ld32((c.r[15].w[0]));
    set32(c.r[13], c.r[13].w[0] + 30232u);
    c.f[4] = fp::mul(c.f[20], c.f[20]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.facc = fp::mul(c.f[20], c.f[0]);
    c.f[1] = fp::sub(c.f[1], c.f[3]);
    set32(c.r[15], c.r[15].w[0] + 30228u);
    c.f[0] = ld32((c.r[15].w[0]));
    c.f[11] = fp::mul(c.f[20], c.f[2]);
    set32(c.r[15], 0u - 4096u);
    c.f[1] = fp::mul(c.f[20], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[3] = fp::mul(c.f[4], c.f[0]);
    c.f[1] = ld32((c.r[13].w[0]));
    c.f[10] = fp::sub(c.facc, fp::mul(c.f[3], c.f[1]));
    c.f[0] = fp::add(c.f[11], c.f[10]);
    set32(c.r[14], c.f[0]);
    c.r[11].d[0] = c.r[14].d[0] & c.r[15].d[0];
    c.f[1] = c.r[11].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[11]);
    c.f[1] = fp::sub(c.f[10], c.f[0]);
    c.budget -= 37;
L_003AB66C:
    c.r[13].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[8].w[0] - 1u);
    set32(c.r[13], c.r[13].w[0] + 30208u);
    set32(c.r[14], c.r[20].w[0] - 1u);
    c.r[15].d[0] = c.r[15].d[0] | c.r[14].d[0];
    c.budget -= 7;
    { const bool t = c.r[15].d[0] != 0ull; c.f[20] = ld32((c.r[13].w[0]));  if (t) { goto L_003AB694; } }
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[14], c.r[14].w[0] + 30276u);
    c.f[20] = ld32((c.r[14].w[0]));
    c.budget -= 3;
L_003AB694:
    set32(c.r[12], c.f[21]);
    set32(c.r[15], 0u - 4096u);
    c.f[3] = c.r[11].w[0];
    c.r[13].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[14].d[0] = c.r[12].d[0] & c.r[15].d[0];
    c.r[13].d[0] = c.r[13].d[0] | 65535ull;
    c.f[2] = c.r[14].w[0];
    c.f[0] = fp::sub(c.f[21], c.f[2]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.facc = fp::mul(c.f[0], c.f[3]);
    c.f[3] = fp::add(c.facc, fp::mul(c.f[21], c.f[1]));
    set32(c.r[9], c.f[2]);
    c.f[12] = fp::add(c.f[3], c.f[2]);
    set32(c.r[11], c.f[12]);
    set32(c.r[14], c.f[12]);
    c.budget -= 17;
    { const bool t = c.r[11].sd[0] <= 0; c.r[13].d[0] = c.r[11].d[0] & c.r[13].d[0];  if (t) { goto L_003AB8E0; } }
    c.r[12].sd[0] = static_cast<std::int32_t>(0x43010000u);
    c.r[15].d[0] = c.r[12].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[15].d[0] != 0ull) { c.r[13].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_003AB714; }
    c.budget -= 2;
    { const bool t = c.r[13].d[0] != c.r[12].d[0]; c.r[15].sd[0] = static_cast<std::int32_t>(0x3F000000u);  if (t) { goto L_003AB728; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = fp::sub(c.f[12], c.f[2]);
    set32(c.r[15], c.r[15].w[0] + 30284u);
    c.f[0] = ld32((c.r[15].w[0]));
    c.f[0] = fp::add(c.f[3], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[15].sd[0] = static_cast<std::int32_t>(0x3F000000u);  if (t) { goto L_003AB728; } }
    c.r[13].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 1;
L_003AB714:
    set32(c.r[13], c.r[13].w[0] + 30280u);
    c.budget -= 1;
L_003AB718:
    c.f[1] = ld32((c.r[13].w[0]));
    c.budget -= 1;
L_003AB71C:
    c.f[0] = fp::mul(c.f[20], c.f[1]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::mul(c.f[0], c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB45Cu | kUnwind; return; } goto L_003AB45C; } }
L_003AB728:
    set32(c.r[12], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[13].w[0]) >> 23));
    c.budget -= 1;
L_003AB72C:
    c.r[15].d[0] = c.r[15].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[15].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003AB7A0; } }
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.f[0] = c.r[9].w[0];
    set32(c.r[15], c.r[12].w[0] - 126u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[13].w[0]) >> (c.r[15].w[0] & 31u)));
    c.r[14].d[0] = c.r[14].d[0] | 65535ull;
    set32(c.r[4], c.r[11].w[0] + c.r[15].w[0]);
    set32(c.r[15], c.r[4].w[0] >> 23);
    c.r[12].d[0] = c.r[4].d[0] & c.r[14].d[0];
    c.r[15].d[0] = c.r[15].d[0] & 255ull;
    c.r[12].d[0] = c.r[12].d[0] | c.r[13].d[0];
    set32(c.r[10], c.r[15].w[0] - 127u);
    set32(c.r[13], 0u + 23u);
    set32(c.r[14], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[14].w[0]) >> (c.r[10].w[0] & 31u)));
    set32(c.r[13], c.r[13].w[0] - c.r[10].w[0]);
    c.r[14].d[0] = ~(0ull | c.r[14].d[0]);
    c.r[11].d[0] = c.r[11].sd[0] < 0ll ? 1ull : 0ull;
    c.r[10].d[0] = c.r[4].d[0] & c.r[14].d[0];
    c.f[1] = c.r[10].w[0];
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[12].w[0]) >> (c.r[13].w[0] & 31u)));
    set32(c.r[15], 0u - c.r[4].w[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    if (c.r[11].d[0] != 0) c.r[4].d[0] = c.r[15].d[0];
    set32(c.r[9], c.f[0]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    set32(c.r[14], c.f[0]);
    c.budget -= 26;
L_003AB7A0:
    set32(c.r[15], 0u - 4096u);
    c.f[0] = c.r[9].w[0];
    c.r[10].d[0] = c.r[14].d[0] & c.r[15].d[0];
    set32(c.r[13], c.r[4].w[0] << 23);
    c.f[4] = c.r[10].w[0];
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[14], c.r[14].w[0] + 30292u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[2] = fp::sub(c.f[4], c.f[0]);
    set32(c.r[15], c.r[15].w[0] + 30296u);
    c.f[0] = ld32((c.r[14].w[0]));
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[11] = fp::mul(c.f[4], c.f[0]);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[14], c.r[14].w[0] + 30300u);
    c.f[1] = ld32((c.r[14].w[0]));
    c.f[0] = ld32((c.r[15].w[0]));
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[14], c.r[14].w[0] + 30304u);
    c.facc = fp::mul(c.f[2], c.f[0]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[10] = fp::add(c.facc, fp::mul(c.f[4], c.f[1]));
    set32(c.r[15], c.r[15].w[0] + 30208u);
    c.f[12] = fp::add(c.f[11], c.f[10]);
    c.f[0] = fp::mul(c.f[12], c.f[12]);
    c.f[2] = fp::sub(c.f[12], c.f[11]);
    set32(c.r[10], c.f[0]);
    c.f[3] = fp::sub(c.f[10], c.f[2]);
    c.f[0] = ld32((c.r[14].w[0]));
    c.f[1] = c.r[10].w[0];
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[14], c.r[14].w[0] + 30308u);
    c.f[2] = fp::mul(c.f[12], c.f[3]);
    c.f[1] = ld32((c.r[14].w[0]));
    c.f[2] = fp::add(c.f[3], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[14], c.r[14].w[0] + 30312u);
    c.f[1] = c.r[10].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[14].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[14], c.r[14].w[0] + 30316u);
    c.f[1] = c.r[10].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[14].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[14], c.r[14].w[0] + 30320u);
    c.f[1] = c.r[10].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[14].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[14], c.r[14].w[0] + 30324u);
    c.f[1] = c.r[10].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[12], c.f[0]);
    c.f[1] = ld32((c.r[14].w[0]));
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[12], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[1] = fp::sub(c.f[0], c.f[2]);
    c.f[1] = fp::sub(c.f[1], c.f[12]);
    c.f[0] = ld32((c.r[15].w[0]));
    c.f[12] = fp::sub(c.f[0], c.f[1]);
    set32(c.r[15], c.f[12]);
    set32(c.r[12], c.r[15].w[0] + c.r[13].w[0]);
    set32(c.r[14], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[12].w[0]) >> 23));
    c.budget -= 75;
    if (c.r[14].sd[0] > 0) { c.f[12] = c.r[12].w[0];  goto L_003AB8D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003AB8D4u);  if (depth < kMaxDepth) unit_00AB(c, 402u, depth + 1u); else { c.pc = 0x003AF460u; return; } if (c.pc != 0x003AB8D4u) [[unlikely]] return; }
L_003AB8D4:
    c.f[12] = c.f[0];
    c.budget -= 1;
L_003AB8D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = fp::mul(c.f[20], c.f[12]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB45Cu | kUnwind; return; } goto L_003AB45C; } }
L_003AB8E0:
    c.r[12].sd[0] = static_cast<std::int32_t>(0x42FC0000u);
    c.r[15].d[0] = c.r[12].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] == 0ull;  if (t) { goto L_003AB900; } }
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[14], c.r[14].w[0] + 30288u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[14].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB71Cu | kUnwind; return; } goto L_003AB71C; } }
L_003AB900:
    c.budget -= 2;
    { const bool t = c.r[13].d[0] != c.r[12].d[0]; c.r[15].sd[0] = static_cast<std::int32_t>(0x3F000000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB728u | kUnwind; return; } goto L_003AB728; } }
    c.f[0] = fp::sub(c.f[12], c.f[2]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[12], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[13].w[0]) >> 23));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB72Cu | kUnwind; return; } goto L_003AB72C; } }
    c.r[13].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[13], c.r[13].w[0] + 30288u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB718u | kUnwind; return; } goto L_003AB718; } }
    c.budget -= 1;
L_003AB928:
    c.r[12].d[0] = c.r[19].d[0] & c.r[14].d[0];
    c.r[15].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[14], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[19].w[0]) >> 23));
    c.r[15].d[0] = c.r[15].d[0] | 50289ull;
    c.r[19].d[0] = c.r[12].d[0] | c.r[13].d[0];
    c.r[15].d[0] = c.r[15].sd[0] < c.r[12].sd[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[14].w[0] - 127u);
    c.budget -= 9;
    { const bool t = c.r[15].d[0] == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_003AB970; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[15].d[0] = c.r[15].d[0] | 46038ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[12].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[10], 0u + 1u);  if (t) { goto L_003AB970; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0xFF800000u);
    set32(c.r[4], c.r[14].w[0] - 126u);
    set32(c.r[19], c.r[19].w[0] + c.r[15].w[0]);
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_003AB970:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[12] = c.r[19].w[0];
    set32(c.r[12], c.r[10].w[0] << 2);
    set32(c.r[15], c.r[15].w[0] + 30072u);
    set32(c.r[15], c.r[12].w[0] + c.r[15].w[0]);
    set32(c.r[14], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[19].w[0]) >> 1));
    c.f[1] = ld32((c.r[15].w[0]));
    set32(c.r[13], c.r[10].w[0] << 21);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.f[2] = fp::add(c.f[12], c.f[1]);
    c.r[14].d[0] = c.r[14].d[0] | c.r[15].d[0];
    c.f[11] = fp::sub(c.f[12], c.f[1]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[14], c.r[14].w[0] + c.r[13].w[0]);
    set32(c.r[15], c.r[15].w[0] + 30208u);
    set32(c.r[13], 0u - 4096u);
    c.f[0] = ld32((c.r[15].w[0]));
    fpu_div(c, 10u, c.f[0], c.f[2]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[11], c.r[14].w[0] + c.r[15].w[0]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[3] = c.r[11].w[0];
    set32(c.r[15], c.r[15].w[0] + 30088u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[12].w[0] + c.r[15].w[0]);
    set32(c.r[14], c.r[14].w[0] + 30236u);
    c.f[8] = ld32((c.r[15].w[0]));
    c.f[4] = ld32((c.r[14].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = c.r[11].w[0];
    set32(c.r[15], c.r[15].w[0] + 30080u);
    c.f[20] = fp::mul(c.f[11], c.f[10]);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    set32(c.r[12], c.r[12].w[0] + c.r[15].w[0]);
    set32(c.r[14], c.r[14].w[0] + 30240u);
    c.f[7] = ld32((c.r[12].w[0]));
    set32(c.r[15], c.f[20]);
    c.f[0] = c.r[4].w[0];
    c.f[12] = fp::sub(c.f[12], c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[9] = fp::mul(c.f[20], c.f[20]);
    set32(c.r[10], c.f[0]);
    c.f[6] = fp::mul(c.f[9], c.f[9]);
    c.f[0] = ld32((c.r[14].w[0]));
    c.r[14].d[0] = c.r[15].d[0] & c.r[13].d[0];
    c.f[0] = fp::mul(c.f[9], c.f[0]);
    c.f[1] = c.r[14].w[0];
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 30244u);
    c.f[2] = fp::mul(c.f[1], c.f[3]);
    c.f[5] = fp::add(c.f[1], c.f[20]);
    c.facc = fp::sub(c.f[11], c.f[2]);
    c.f[1] = ld32((c.r[15].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 30248u);
    c.f[1] = c.r[14].w[0];
    c.f[0] = fp::mul(c.f[9], c.f[0]);
    c.f[3] = fp::sub(c.facc, fp::mul(c.f[1], c.f[12]));
    c.f[1] = ld32((c.r[15].w[0]));
    c.f[3] = fp::mul(c.f[10], c.f[3]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 30252u);
    c.f[0] = fp::mul(c.f[9], c.f[0]);
    c.f[1] = ld32((c.r[15].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    set32(c.r[15], c.r[15].w[0] + 30256u);
    c.f[0] = fp::mul(c.f[9], c.f[0]);
    c.f[1] = ld32((c.r[15].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    set32(c.r[15], c.r[15].w[0] + 30260u);
    c.f[0] = fp::mul(c.f[9], c.f[0]);
    c.f[1] = ld32((c.r[15].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[1] = c.r[14].w[0];
    c.facc = fp::mul(c.f[6], c.f[0]);
    c.f[9] = fp::mul(c.f[1], c.f[1]);
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[5]));
    c.f[0] = fp::add(c.f[9], c.f[4]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    set32(c.r[15], c.f[0]);
    c.r[11].d[0] = c.r[15].d[0] & c.r[13].d[0];
    c.f[2] = c.r[11].w[0];
    c.f[4] = fp::sub(c.f[2], c.f[4]);
    c.facc = fp::mul(c.f[3], c.f[2]);
    c.f[3] = c.r[14].w[0];
    c.f[4] = fp::sub(c.f[4], c.f[9]);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[11] = fp::mul(c.f[3], c.f[2]);
    set32(c.r[14], c.r[14].w[0] + 30264u);
    c.f[12] = fp::sub(c.f[1], c.f[4]);
    c.f[10] = fp::add(c.facc, fp::mul(c.f[12], c.f[20]));
    c.f[4] = fp::add(c.f[11], c.f[10]);
    set32(c.r[15], c.f[4]);
    c.r[9].d[0] = c.r[15].d[0] & c.r[13].d[0];
    c.f[0] = c.r[9].w[0];
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = c.r[9].w[0];
    set32(c.r[15], c.r[15].w[0] + 30272u);
    c.f[3] = fp::sub(c.f[0], c.f[11]);
    c.f[0] = ld32((c.r[14].w[0]));
    c.f[3] = fp::sub(c.f[10], c.f[3]);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.facc = fp::mul(c.f[1], c.f[0]);
    set32(c.r[14], c.r[14].w[0] + 30268u);
    c.f[2] = ld32((c.r[14].w[0]));
    c.f[2] = fp::mul(c.f[1], c.f[2]);
    c.f[1] = ld32((c.r[15].w[0]));
    c.f[1] = fp::add(c.facc, fp::mul(c.f[3], c.f[1]));
    c.f[1] = fp::add(c.f[1], c.f[8]);
    c.f[3] = c.r[10].w[0];
    c.f[0] = fp::add(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[7]);
    c.f[3] = fp::add(c.f[0], c.f[3]);
    set32(c.r[15], c.f[3]);
    c.r[11].d[0] = c.r[15].d[0] & c.r[13].d[0];
    c.f[3] = c.r[10].w[0];
    c.f[4] = c.r[11].w[0];
    c.f[0] = fp::sub(c.f[4], c.f[3]);
    c.f[0] = fp::sub(c.f[0], c.f[7]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.budget -= 129;
    { const bool t = 0ull == 0ull; c.f[1] = fp::sub(c.f[1], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB66Cu | kUnwind; return; } goto L_003AB66C; } }
L_003ABB74:
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[15], 0u + 150u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB430u | kUnwind; return; } goto L_003AB430; } }
    set32(c.r[14], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 23));
    set32(c.r[15], c.r[15].w[0] - c.r[14].w[0]);
    set32(c.r[12], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> (c.r[15].w[0] & 31u)));
    set32(c.r[15], c.r[12].w[0] << (c.r[15].w[0] & 31u));
    c.budget -= 6;
    { const bool t = c.r[15].d[0] != c.r[16].d[0]; c.r[15].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB434u | kUnwind; return; } goto L_003AB434; } }
    c.r[14].d[0] = c.r[12].d[0] & 1ull;
    set32(c.r[15], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[20], c.r[15].w[0] - c.r[14].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003AB430u | kUnwind; return; } goto L_003AB430; } }
    c.budget -= 1;
L_003ABBB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[14].d[0] = c.r[14].d[0] | 65535ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x3F490000u);
    set32(c.r[18], c.f[12]);
    c.r[15].d[0] = c.r[15].d[0] | 4056ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[16].d[0] = c.r[18].d[0] & c.r[14].d[0];
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.r[15].d[0] = c.r[15].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[15].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003ABC0C; } }
    st32((c.r[17].w[0]), c.f[12]);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 3;
L_003ABBF4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_003ABBF8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003ABC0C:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x40160000u);
    c.r[15].d[0] = c.r[15].d[0] | 52195ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[15].d[0] != 0ull; c.r[15].sd[0] = static_cast<std::int32_t>(0x43490000u);  if (t) { goto L_003ABD10; } }
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; c.r[14].sd[0] = static_cast<std::int32_t>(0x3FC90000u);  if (t) { goto L_003ABC9C; } }
    c.r[13].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[13], c.r[13].w[0] + 31288u);
    set32(c.r[15], 0u - 16u);
    c.f[0] = ld32((c.r[13].w[0]));
    c.r[15].d[0] = c.r[16].d[0] & c.r[15].d[0];
    c.r[14].d[0] = c.r[14].d[0] | 4048ull;
    c.f[1] = fp::sub(c.f[12], c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[15].d[0] == c.r[14].d[0]; set32(c.r[13], c.f[1]);  if (t) { goto L_003ABC78; } }
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[14], c.r[14].w[0] + 31292u);
    c.f[2] = ld32((c.r[14].w[0]));
    c.budget -= 3;
L_003ABC58:
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    set32(c.r[2], 0u + 1u);
    c.f[3] = c.r[13].w[0];
    c.f[0] = fp::sub(c.f[3], c.f[1]);
    st32((c.r[17].w[0]), c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.budget -= 6;
L_003ABC70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 4u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ABBF4u | kUnwind; return; } goto L_003ABBF4; } }
L_003ABC78:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 31300u);
    set32(c.r[14], c.r[14].w[0] + 31296u);
    c.f[0] = ld32((c.r[15].w[0]));
    c.f[2] = ld32((c.r[14].w[0]));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[13], c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ABC58u | kUnwind; return; } goto L_003ABC58; } }
L_003ABC9C:
    c.r[13].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[13], c.r[13].w[0] + 31288u);
    set32(c.r[15], 0u - 16u);
    c.f[0] = ld32((c.r[13].w[0]));
    c.r[15].d[0] = c.r[16].d[0] & c.r[15].d[0];
    c.r[14].d[0] = c.r[14].d[0] | 4048ull;
    c.f[1] = fp::add(c.f[12], c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[15].d[0] == c.r[14].d[0]; set32(c.r[13], c.f[1]);  if (t) { goto L_003ABCE8; } }
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[14], c.r[14].w[0] + 31292u);
    c.f[2] = ld32((c.r[14].w[0]));
    c.budget -= 3;
L_003ABCCC:
    c.f[1] = fp::add(c.f[1], c.f[2]);
    set32(c.r[2], 0u - 1u);
    c.f[3] = c.r[13].w[0];
    c.f[0] = fp::sub(c.f[3], c.f[1]);
    st32((c.r[17].w[0]), c.f[1]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.f[0] = fp::add(c.f[0], c.f[2]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ABC70u | kUnwind; return; } goto L_003ABC70; } }
L_003ABCE8:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 31300u);
    set32(c.r[14], c.r[14].w[0] + 31296u);
    c.f[0] = ld32((c.r[15].w[0]));
    c.f[2] = ld32((c.r[14].w[0]));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[13], c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ABCCCu | kUnwind; return; } goto L_003ABCCC; } }
    c.budget -= 1;
L_003ABD10:
    c.r[15].d[0] = c.r[15].d[0] | 3968ull;
    c.r[15].d[0] = c.r[15].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[15].d[0] != 0ull; c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003ABE90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABD28u);  if (depth < kMaxDepth) unit_00AB(c, 390u, depth + 1u); else { c.pc = 0x003AF288u; return; } if (c.pc != 0x003ABD28u) [[unlikely]] return; }
L_003ABD28:
    c.f[4] = c.f[0];
    c.r[13].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[13], c.r[13].w[0] + 31304u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[14], c.r[14].w[0] + 31308u);
    c.f[1] = ld32((c.r[14].w[0]));
    c.f[0] = ld32((c.r[13].w[0]));
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = fp::mul(c.f[4], c.f[0]);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[13], c.r[13].w[0] + 31288u);
    set32(c.r[14], c.r[14].w[0] + 31292u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    c.f[0] = ld32((c.r[13].w[0]));
    c.f[6] = c.r[2].w[0];
    c.r[15].d[0] = c.r[2].sd[0] < 32ll ? 1ull : 0ull;
    c.f[1] = ld32((c.r[14].w[0]));
    c.f[6] = fp::cvt_s_w(c.f[6]);
    c.f[0] = fp::mul(c.f[6], c.f[0]);
    c.f[3] = fp::mul(c.f[6], c.f[1]);
    c.budget -= 24;
    { const bool t = c.r[15].d[0] == 0ull; c.f[5] = fp::sub(c.f[4], c.f[0]);  if (t) { goto L_003ABDD8; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[13], c.r[2].w[0] << 2);
    set32(c.r[15], c.r[15].w[0] + 31120u);
    set32(c.r[14], 0u - 256u);
    set32(c.r[13], c.r[13].w[0] + c.r[15].w[0]);
    c.r[14].d[0] = c.r[16].d[0] & c.r[14].d[0];
    set32(c.r[15], ld32((c.r[13].w[0] - 4u)));
    c.budget -= 9;
    { const bool t = c.r[14].d[0] == c.r[15].d[0]; c.f[0] = fp::sub(c.f[5], c.f[3]);  if (t) { goto L_003ABDDC; } }
    st32((c.r[17].w[0]), c.f[0]);
    c.budget -= 1;
L_003ABDB0:
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = fp::sub(c.f[5], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.budget -= 5;
    { const bool t = c.r[18].sd[0] >= 0; st32((c.r[17].w[0] + 4u), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ABBF4u | kUnwind; return; } goto L_003ABBF4; } }
    c.f[1] = c.f[1] ^ fp::kSign;
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 2;
L_003ABDCC:
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ABC70u | kUnwind; return; } goto L_003ABC70; } }
L_003ABDD8:
    c.f[0] = fp::sub(c.f[5], c.f[3]);
    c.budget -= 1;
L_003ABDDC:
    set32(c.r[13], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 23));
    set32(c.r[15], c.f[0]);
    set32(c.r[15], c.r[15].w[0] >> 23);
    c.r[15].d[0] = c.r[15].d[0] & 255ull;
    set32(c.r[14], c.r[13].w[0] - c.r[15].w[0]);
    c.r[14].d[0] = c.r[14].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[14].d[0] != 0ull; st32((c.r[17].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ABDB0u | kUnwind; return; } goto L_003ABDB0; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[4] = c.f[5];
    set32(c.r[15], c.r[15].w[0] + 31300u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = ld32((c.r[15].w[0]));
    set32(c.r[14], c.r[14].w[0] + 31296u);
    c.f[1] = ld32((c.r[14].w[0]));
    c.f[3] = fp::mul(c.f[6], c.f[0]);
    c.f[1] = fp::mul(c.f[6], c.f[1]);
    c.f[5] = fp::sub(c.f[5], c.f[3]);
    c.f[0] = fp::sub(c.f[4], c.f[5]);
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.f[3] = fp::sub(c.f[1], c.f[0]);
    c.f[2] = fp::sub(c.f[5], c.f[3]);
    set32(c.r[15], c.f[2]);
    set32(c.r[15], c.r[15].w[0] >> 23);
    c.r[15].d[0] = c.r[15].d[0] & 255ull;
    set32(c.r[14], c.r[13].w[0] - c.r[15].w[0]);
    c.r[14].d[0] = c.r[14].sd[0] < 26ll ? 1ull : 0ull;
    c.budget -= 21;
    { const bool t = c.r[14].d[0] != 0ull; st32((c.r[17].w[0]), c.f[2]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ABDB0u | kUnwind; return; } goto L_003ABDB0; } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[4] = c.f[5];
    set32(c.r[15], c.r[15].w[0] + 31312u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = ld32((c.r[15].w[0]));
    set32(c.r[13], c.r[13].w[0] + 31316u);
    c.f[2] = ld32((c.r[13].w[0]));
    c.f[3] = fp::mul(c.f[6], c.f[0]);
    c.f[2] = fp::mul(c.f[6], c.f[2]);
    c.f[5] = fp::sub(c.f[5], c.f[3]);
    c.f[0] = fp::sub(c.f[4], c.f[5]);
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.f[3] = fp::sub(c.f[2], c.f[0]);
    c.f[1] = fp::sub(c.f[5], c.f[3]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ABDB0u | kUnwind; return; } goto L_003ABDB0; } }
L_003ABE90:
    set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 23));
    set32(c.r[14], c.r[14].w[0] + 31320u);
    set32(c.r[6], c.r[15].w[0] - 134u);
    c.f[2] = ld32((c.r[14].w[0]));
    set32(c.r[15], c.r[6].w[0] << 23);
    c.r[12].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[13], c.r[16].w[0] - c.r[15].w[0]);
    set32(c.r[14], 0u + 1u);
    c.budget -= 8;
L_003ABEB0:
    c.f[0] = c.r[13].w[0];
    set32(c.r[14], c.r[14].w[0] - 1u);
    c.f[3] = c.r[13].w[0];
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[15], c.f[1]);
    c.f[0] = c.r[15].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::sub(c.f[3], c.f[0]);
    st32((c.r[12].w[0]), c.f[0]);
    set32(c.r[12], c.r[12].w[0] + 4u);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.budget -= 13;
    { const bool t = c.r[14].sd[0] >= 0; set32(c.r[13], c.f[1]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ABEB0u | kUnwind; return; } goto L_003ABEB0; } }
    c.f[1] = 0u;
    set32(c.r[7], 0u + 3u);
    c.f[0] = c.r[13].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 8u), c.r[13].w[0]);  if (t) { goto L_003ABF14; } }
    set32(c.r[15], c.r[29].w[0] + 8u);
    c.budget -= 1;
L_003ABF00:
    set32(c.r[15], c.r[15].w[0] - 4u);
    c.f[0] = ld32((c.r[15].w[0]));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[7], c.r[7].w[0] - 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ABF00u | kUnwind; return; } goto L_003ABF00; } }
L_003ABF14:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] + 30328u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ABF2Cu); set32(c.r[8], 0u + 2u);  if (depth < kMaxDepth) unit_00AB(c, 208u, depth + 1u); else { c.pc = 0x003AD458u; return; } if (c.pc != 0x003ABF2Cu) [[unlikely]] return; }
L_003ABF2C:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ABBF8u | kUnwind; return; } goto L_003ABBF8; } }
    c.f[1] = ld32((c.r[17].w[0]));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[1] = c.f[1] ^ fp::kSign;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ABDCCu | kUnwind; return; } goto L_003ABDCC; } }
L_003ABF48:
    c.r[15].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[14], c.f[12]);
    c.r[15].d[0] = c.r[15].d[0] | 65535ull;
    c.r[12].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[15].d[0] = c.r[14].d[0] & c.r[15].d[0];
    c.r[12].d[0] = c.r[12].d[0] | 65535ull;
    c.r[15].d[0] = c.r[12].d[0] < c.r[15].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[15].d[0] == 0ull; set32(c.r[13], c.f[12]);  if (t) { goto L_003ABF88; } }
    c.budget -= 2;
    if (c.r[14].sd[0] >= 0) { set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[14].w[0]) >> 23));  goto L_003ABF90; }
    c.f[0] = fp::sub(c.f[12], c.f[12]);
    fpu_div(c, 0u, c.f[0], c.f[0]);
    set32(c.r[13], c.f[0]);
    c.budget -= 5;
L_003ABF88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.f[0] = c.r[13].w[0];  c.pc = t; return; }
L_003ABF90:
    set32(c.r[9], c.r[9].w[0] - 127u);
    c.r[15].d[0] = c.r[14].d[0] & c.r[12].d[0];
    c.r[13].d[0] = c.r[9].d[0] & 1ull;
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00800000u);
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 1));
    c.r[14].d[0] = c.r[15].d[0] | c.r[14].d[0];
    c.r[11].d[0] = 0ull + 0ull;
    set32(c.r[14], c.r[14].w[0] << (c.r[13].w[0] & 31u));
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[14], c.r[14].w[0] << 1);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.budget -= 11;
L_003ABFBC:
    set32(c.r[13], c.r[11].w[0] + c.r[12].w[0]);
    c.r[15].d[0] = c.r[14].sd[0] < c.r[13].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[15].d[0] != 0ull) { set32(c.r[12], c.r[12].w[0] >> 1);  goto L_003ABFDC; }
    set32(c.r[14], c.r[14].w[0] - c.r[13].w[0]);
    set32(c.r[11], c.r[13].w[0] + c.r[12].w[0]);
    set32(c.r[10], c.r[10].w[0] + c.r[12].w[0]);
    set32(c.r[12], c.r[12].w[0] >> 1);
    c.budget -= 4;
L_003ABFDC:
    c.budget -= 2;
    { const bool t = c.r[12].d[0] != 0ull; set32(c.r[14], c.r[14].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ABFBCu | kUnwind; return; } goto L_003ABFBC; } }
    c.budget -= 2;
    { const bool t = c.r[14].d[0] == 0ull; set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 1));  if (t) { [[clang::musttail]] return unit_00AB(c, 3u, depth); } }
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[15], c.r[15].w[0] + 31336u);
    c.f[0] = ld32((c.r[15].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 1));  [[clang::musttail]] return unit_00AB(c, 3u, depth); }
    [[clang::musttail]] return unit_00AB(c, 2u, depth);
}

}
