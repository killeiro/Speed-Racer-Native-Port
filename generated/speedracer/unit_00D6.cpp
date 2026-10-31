#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00D6[4096] = {
    1, 0, 0, 2, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0,
    0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 15, 0, 0, 16, 0, 0, 17, 0, 0,
    18, 0, 0, 19, 0, 0, 20, 0, 0, 21, 0, 0, 22, 0, 0, 23, 0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0,
    31, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0,
    0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0,
    0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0,
    54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58,
    0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0,
    64, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0,
    0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0,
    75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77,
    0, 0, 78, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0,
    84, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0,
    0, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0,
    0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 102,
    0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108,
    0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0,
    0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0,
    122, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 128, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0,
    0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 134, 0, 135, 0, 0, 0, 136, 0, 0, 137, 0, 0, 138, 0, 139, 0, 0, 0,
    140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 144, 0, 145, 0, 0, 0, 146, 0, 0, 0,
    0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 150, 0, 151, 0, 0, 0, 152, 0, 0, 153, 0, 0, 154, 0, 155, 0, 0,
    0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166,
    0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0,
    171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192,
    0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0,
    0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0,
    198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202,
    0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 210, 0,
    0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0,
    0, 221, 0, 0, 222, 0, 0, 223, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 227,
    0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0,
    0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 234,
    0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0,
    0, 0, 238, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0,
    0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0,
    247, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0,
    0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0,
    267, 0, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0,
    0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 277, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 286, 0, 0,
    0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0,
    292, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0,
    0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0,
    305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 311,
    0, 0, 312, 0, 0, 313, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0, 318, 0, 0, 319, 0,
    320, 0, 0, 0, 321, 0, 0, 322, 0, 0, 323, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0,
    327, 0, 0, 328, 0, 0, 329, 0, 330, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 0, 334, 0, 0, 335,
    0, 336, 0, 0, 0, 337, 0, 0, 338, 0, 0, 339, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 342, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 345, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0,
    0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 357, 0, 358, 0, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 369,
    0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 374, 0, 0, 0, 375, 0, 0, 376,
    0, 0, 0, 377, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0,
    0, 385, 0, 0, 386, 0, 0, 387, 0, 0, 388, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 391, 0, 392, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0,
    0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 399, 0, 0, 0, 0, 0,
    400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 0,
    0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 406,
    0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0,
    0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0,
    0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0,
    418, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0,
    432, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 435, 0, 0, 436, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441,
    0, 0, 0, 442, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 447, 0, 0, 448, 0, 0,
    449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 453, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 456, 0, 0, 0, 0, 457, 0, 0, 0, 0,
    0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0,
    461, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0,
    0, 0, 0, 466, 0, 0, 0, 0, 0, 467, 0, 468, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 481, 0,
    482, 0, 483, 0, 0, 0, 484, 0, 0, 485, 0, 486, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 489, 0, 0, 0, 490, 0, 0, 491, 0, 0, 492, 0, 0, 0, 493, 0, 0, 494, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00D6(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00458000;
    case 2u: goto L_0045800C;
    case 3u: goto L_00458010;
    case 4u: goto L_00458018;
    case 5u: goto L_00458044;
    case 6u: goto L_00458054;
    case 7u: goto L_004580E0;
    case 8u: goto L_004580F0;
    case 9u: goto L_0045810C;
    case 10u: goto L_00458120;
    case 11u: goto L_00458130;
    case 12u: goto L_0045813C;
    case 13u: goto L_00458244;
    case 14u: goto L_00458250;
    case 15u: goto L_0045825C;
    case 16u: goto L_00458268;
    case 17u: goto L_00458274;
    case 18u: goto L_00458280;
    case 19u: goto L_0045828C;
    case 20u: goto L_00458298;
    case 21u: goto L_004582A4;
    case 22u: goto L_004582B0;
    case 23u: goto L_004582BC;
    case 24u: goto L_004582C8;
    case 25u: goto L_004582D0;
    case 26u: goto L_00458300;
    case 27u: goto L_00458320;
    case 28u: goto L_0045832C;
    case 29u: goto L_00458354;
    case 30u: goto L_00458364;
    case 31u: goto L_00458380;
    case 32u: goto L_00458394;
    case 33u: goto L_004583A4;
    case 34u: goto L_004583B0;
    case 35u: goto L_004583C8;
    case 36u: goto L_004583E8;
    case 37u: goto L_004583F8;
    case 38u: goto L_00458414;
    case 39u: goto L_00458428;
    case 40u: goto L_00458438;
    case 41u: goto L_0045845C;
    case 42u: goto L_0045846C;
    case 43u: goto L_00458498;
    case 44u: goto L_004584A8;
    case 45u: goto L_004584C8;
    case 46u: goto L_004584F0;
    case 47u: goto L_004584F8;
    case 48u: goto L_00458504;
    case 49u: goto L_00458514;
    case 50u: goto L_00458528;
    case 51u: goto L_00458538;
    case 52u: goto L_00458548;
    case 53u: goto L_00458564;
    case 54u: goto L_00458580;
    case 55u: goto L_004585C4;
    case 56u: goto L_004585D0;
    case 57u: goto L_004585E0;
    case 58u: goto L_004585FC;
    case 59u: goto L_0045860C;
    case 60u: goto L_00458628;
    case 61u: goto L_00458638;
    case 62u: goto L_00458654;
    case 63u: goto L_00458664;
    case 64u: goto L_00458680;
    case 65u: goto L_00458688;
    case 66u: goto L_00458694;
    case 67u: goto L_00458700;
    case 68u: goto L_004588B0;
    case 69u: goto L_004588EC;
    case 70u: goto L_0045890C;
    case 71u: goto L_0045891C;
    case 72u: goto L_00458938;
    case 73u: goto L_0045894C;
    case 74u: goto L_0045895C;
    case 75u: goto L_00458980;
    case 76u: goto L_004589C0;
    case 77u: goto L_004589FC;
    case 78u: goto L_00458A08;
    case 79u: goto L_00458A10;
    case 80u: goto L_00458A28;
    case 81u: goto L_00458A40;
    case 82u: goto L_00458A54;
    case 83u: goto L_00458A64;
    case 84u: goto L_00458A80;
    case 85u: goto L_00458A8C;
    case 86u: goto L_00458AAC;
    case 87u: goto L_00458ABC;
    case 88u: goto L_00458AD8;
    case 89u: goto L_00458AF8;
    case 90u: goto L_00458B08;
    case 91u: goto L_00458B24;
    case 92u: goto L_00458B54;
    case 93u: goto L_00458B74;
    case 94u: goto L_00458B84;
    case 95u: goto L_00458BA0;
    case 96u: goto L_00458BCC;
    case 97u: goto L_00458BF0;
    case 98u: goto L_00458C38;
    case 99u: goto L_00458C48;
    case 100u: goto L_00458C54;
    case 101u: goto L_00458C68;
    case 102u: goto L_00458C7C;
    case 103u: goto L_00458C9C;
    case 104u: goto L_00458CB0;
    case 105u: goto L_00458CC0;
    case 106u: goto L_00458CD4;
    case 107u: goto L_00458CE4;
    case 108u: goto L_00458CFC;
    case 109u: goto L_00458D20;
    case 110u: goto L_00458D5C;
    case 111u: goto L_00458DC0;
    case 112u: goto L_00458DD0;
    case 113u: goto L_00458DEC;
    case 114u: goto L_00458E04;
    case 115u: goto L_00458E18;
    case 116u: goto L_00458E38;
    case 117u: goto L_00458E60;
    case 118u: goto L_00458E9C;
    case 119u: goto L_00458EAC;
    case 120u: goto L_00458EC8;
    case 121u: goto L_00458EE0;
    case 122u: goto L_00458F00;
    case 123u: goto L_00458F0C;
    case 124u: goto L_00458F60;
    case 125u: goto L_00458FA8;
    case 126u: goto L_00458FBC;
    case 127u: goto L_00458FC8;
    case 128u: goto L_00458FD4;
    case 129u: goto L_00458FDC;
    case 130u: goto L_00458FEC;
    case 131u: goto L_0045900C;
    case 132u: goto L_00459020;
    case 133u: goto L_0045902C;
    case 134u: goto L_00459038;
    case 135u: goto L_00459040;
    case 136u: goto L_00459050;
    case 137u: goto L_0045905C;
    case 138u: goto L_00459068;
    case 139u: goto L_00459070;
    case 140u: goto L_00459080;
    case 141u: goto L_004590AC;
    case 142u: goto L_004590C0;
    case 143u: goto L_004590CC;
    case 144u: goto L_004590D8;
    case 145u: goto L_004590E0;
    case 146u: goto L_004590F0;
    case 147u: goto L_00459110;
    case 148u: goto L_00459124;
    case 149u: goto L_00459130;
    case 150u: goto L_0045913C;
    case 151u: goto L_00459144;
    case 152u: goto L_00459154;
    case 153u: goto L_00459160;
    case 154u: goto L_0045916C;
    case 155u: goto L_00459174;
    case 156u: goto L_00459184;
    case 157u: goto L_004591AC;
    case 158u: goto L_004591BC;
    case 159u: goto L_004591D8;
    case 160u: goto L_004591E8;
    case 161u: goto L_00459210;
    case 162u: goto L_00459224;
    case 163u: goto L_00459230;
    case 164u: goto L_00459240;
    case 165u: goto L_0045926C;
    case 166u: goto L_0045927C;
    case 167u: goto L_00459298;
    case 168u: goto L_004592B0;
    case 169u: goto L_004592C0;
    case 170u: goto L_004592E0;
    case 171u: goto L_00459300;
    case 172u: goto L_00459338;
    case 173u: goto L_0045935C;
    case 174u: goto L_00459390;
    case 175u: goto L_004593B8;
    case 176u: goto L_004593C8;
    case 177u: goto L_004593E4;
    case 178u: goto L_004593F4;
    case 179u: goto L_00459420;
    case 180u: goto L_00459450;
    case 181u: goto L_004594B0;
    case 182u: goto L_004594B8;
    case 183u: goto L_004594C4;
    case 184u: goto L_004594E8;
    case 185u: goto L_004594F8;
    case 186u: goto L_00459540;
    case 187u: goto L_00459580;
    case 188u: goto L_004595B4;
    case 189u: goto L_00459638;
    case 190u: goto L_004596C0;
    case 191u: goto L_004596D0;
    case 192u: goto L_004596FC;
    case 193u: goto L_00459720;
    case 194u: goto L_00459778;
    case 195u: goto L_00459790;
    case 196u: goto L_004597B0;
    case 197u: goto L_004597F0;
    case 198u: goto L_00459800;
    case 199u: goto L_0045983C;
    case 200u: goto L_0045984C;
    case 201u: goto L_00459864;
    case 202u: goto L_0045987C;
    case 203u: goto L_00459890;
    case 204u: goto L_004598A4;
    case 205u: goto L_004598B0;
    case 206u: goto L_004598C0;
    case 207u: goto L_004598CC;
    case 208u: goto L_004598DC;
    case 209u: goto L_004598E8;
    case 210u: goto L_004598F8;
    case 211u: goto L_00459910;
    case 212u: goto L_00459934;
    case 213u: goto L_00459948;
    case 214u: goto L_00459970;
    case 215u: goto L_0045999C;
    case 216u: goto L_004599B4;
    case 217u: goto L_004599C0;
    case 218u: goto L_004599D0;
    case 219u: goto L_004599E0;
    case 220u: goto L_004599F8;
    case 221u: goto L_00459A04;
    case 222u: goto L_00459A10;
    case 223u: goto L_00459A1C;
    case 224u: goto L_00459A28;
    case 225u: goto L_00459A50;
    case 226u: goto L_00459A60;
    case 227u: goto L_00459A7C;
    case 228u: goto L_00459A98;
    case 229u: goto L_00459AB0;
    case 230u: goto L_00459ADC;
    case 231u: goto L_00459AEC;
    case 232u: goto L_00459B0C;
    case 233u: goto L_00459B58;
    case 234u: goto L_00459B7C;
    case 235u: goto L_00459BA0;
    case 236u: goto L_00459BE4;
    case 237u: goto L_00459BF4;
    case 238u: goto L_00459C08;
    case 239u: goto L_00459C14;
    case 240u: goto L_00459C2C;
    case 241u: goto L_00459C50;
    case 242u: goto L_00459C74;
    case 243u: goto L_00459C90;
    case 244u: goto L_00459CB4;
    case 245u: goto L_00459CCC;
    case 246u: goto L_00459CF0;
    case 247u: goto L_00459D00;
    case 248u: goto L_00459D24;
    case 249u: goto L_00459D30;
    case 250u: goto L_00459D40;
    case 251u: goto L_00459D50;
    case 252u: goto L_00459D9C;
    case 253u: goto L_00459DAC;
    case 254u: goto L_00459DC0;
    case 255u: goto L_00459DD0;
    case 256u: goto L_00459DEC;
    case 257u: goto L_00459E04;
    case 258u: goto L_00459E18;
    case 259u: goto L_00459E34;
    case 260u: goto L_00459EA0;
    case 261u: goto L_00459EC0;
    case 262u: goto L_00459F04;
    case 263u: goto L_00459F28;
    case 264u: goto L_00459F40;
    case 265u: goto L_00459F74;
    case 266u: goto L_00459FE0;
    case 267u: goto L_0045A000;
    case 268u: goto L_0045A010;
    case 269u: goto L_0045A01C;
    case 270u: goto L_0045A038;
    case 271u: goto L_0045A060;
    case 272u: goto L_0045A078;
    case 273u: goto L_0045A088;
    case 274u: goto L_0045A094;
    case 275u: goto L_0045A0B4;
    case 276u: goto L_0045A0D0;
    case 277u: goto L_0045A104;
    case 278u: goto L_0045A114;
    case 279u: goto L_0045A130;
    case 280u: goto L_0045A144;
    case 281u: goto L_0045A150;
    case 282u: goto L_0045A164;
    case 283u: goto L_0045A190;
    case 284u: goto L_0045A1BC;
    case 285u: goto L_0045A1E8;
    case 286u: goto L_0045A1F4;
    case 287u: goto L_0045A210;
    case 288u: goto L_0045A228;
    case 289u: goto L_0045A238;
    case 290u: goto L_0045A24C;
    case 291u: goto L_0045A260;
    case 292u: goto L_0045A280;
    case 293u: goto L_0045A288;
    case 294u: goto L_0045A2B0;
    case 295u: goto L_0045A2F8;
    case 296u: goto L_0045A304;
    case 297u: goto L_0045A340;
    case 298u: goto L_0045A358;
    case 299u: goto L_0045A380;
    case 300u: goto L_0045A3A8;
    case 301u: goto L_0045A3D0;
    case 302u: goto L_0045A400;
    case 303u: goto L_0045A450;
    case 304u: goto L_0045A468;
    case 305u: goto L_0045A480;
    case 306u: goto L_0045A4B4;
    case 307u: goto L_0045A4BC;
    case 308u: goto L_0045A4EC;
    case 309u: goto L_0045A520;
    case 310u: goto L_0045A568;
    case 311u: goto L_0045A57C;
    case 312u: goto L_0045A588;
    case 313u: goto L_0045A594;
    case 314u: goto L_0045A59C;
    case 315u: goto L_0045A5AC;
    case 316u: goto L_0045A5CC;
    case 317u: goto L_0045A5E0;
    case 318u: goto L_0045A5EC;
    case 319u: goto L_0045A5F8;
    case 320u: goto L_0045A600;
    case 321u: goto L_0045A610;
    case 322u: goto L_0045A61C;
    case 323u: goto L_0045A628;
    case 324u: goto L_0045A630;
    case 325u: goto L_0045A640;
    case 326u: goto L_0045A66C;
    case 327u: goto L_0045A680;
    case 328u: goto L_0045A68C;
    case 329u: goto L_0045A698;
    case 330u: goto L_0045A6A0;
    case 331u: goto L_0045A6B0;
    case 332u: goto L_0045A6D0;
    case 333u: goto L_0045A6E4;
    case 334u: goto L_0045A6F0;
    case 335u: goto L_0045A6FC;
    case 336u: goto L_0045A704;
    case 337u: goto L_0045A714;
    case 338u: goto L_0045A720;
    case 339u: goto L_0045A72C;
    case 340u: goto L_0045A734;
    case 341u: goto L_0045A744;
    case 342u: goto L_0045A784;
    case 343u: goto L_0045A794;
    case 344u: goto L_0045A7B0;
    case 345u: goto L_0045A7C4;
    case 346u: goto L_0045A7D0;
    case 347u: goto L_0045A7E0;
    case 348u: goto L_0045A820;
    case 349u: goto L_0045A830;
    case 350u: goto L_0045A840;
    case 351u: goto L_0045A870;
    case 352u: goto L_0045A884;
    case 353u: goto L_0045A8C4;
    case 354u: goto L_0045A8D4;
    case 355u: goto L_0045A900;
    case 356u: goto L_0045A930;
    case 357u: goto L_0045A98C;
    case 358u: goto L_0045A994;
    case 359u: goto L_0045A9A0;
    case 360u: goto L_0045A9BC;
    case 361u: goto L_0045AA0C;
    case 362u: goto L_0045AA50;
    case 363u: goto L_0045AAA8;
    case 364u: goto L_0045AAC0;
    case 365u: goto L_0045AAE0;
    case 366u: goto L_0045AB20;
    case 367u: goto L_0045AB30;
    case 368u: goto L_0045AB6C;
    case 369u: goto L_0045AB7C;
    case 370u: goto L_0045AB94;
    case 371u: goto L_0045ABAC;
    case 372u: goto L_0045ABC0;
    case 373u: goto L_0045ABD4;
    case 374u: goto L_0045ABE0;
    case 375u: goto L_0045ABF0;
    case 376u: goto L_0045ABFC;
    case 377u: goto L_0045AC0C;
    case 378u: goto L_0045AC18;
    case 379u: goto L_0045AC28;
    case 380u: goto L_0045AC40;
    case 381u: goto L_0045AC64;
    case 382u: goto L_0045AC74;
    case 383u: goto L_0045ACC8;
    case 384u: goto L_0045ACF8;
    case 385u: goto L_0045AD04;
    case 386u: goto L_0045AD10;
    case 387u: goto L_0045AD1C;
    case 388u: goto L_0045AD28;
    case 389u: goto L_0045AD34;
    case 390u: goto L_0045AD60;
    case 391u: goto L_0045AD94;
    case 392u: goto L_0045AD9C;
    case 393u: goto L_0045ADB4;
    case 394u: goto L_0045ADDC;
    case 395u: goto L_0045ADF0;
    case 396u: goto L_0045AE14;
    case 397u: goto L_0045AE38;
    case 398u: goto L_0045AE5C;
    case 399u: goto L_0045AE68;
    case 400u: goto L_0045AE80;
    case 401u: goto L_0045AEB0;
    case 402u: goto L_0045AEDC;
    case 403u: goto L_0045AEEC;
    case 404u: goto L_0045AF0C;
    case 405u: goto L_0045AF58;
    case 406u: goto L_0045AF7C;
    case 407u: goto L_0045AFA0;
    case 408u: goto L_0045AFE4;
    case 409u: goto L_0045AFF8;
    case 410u: goto L_0045B01C;
    case 411u: goto L_0045B034;
    case 412u: goto L_0045B050;
    case 413u: goto L_0045B074;
    case 414u: goto L_0045B090;
    case 415u: goto L_0045B0B4;
    case 416u: goto L_0045B0CC;
    case 417u: goto L_0045B0F0;
    case 418u: goto L_0045B100;
    case 419u: goto L_0045B124;
    case 420u: goto L_0045B130;
    case 421u: goto L_0045B140;
    case 422u: goto L_0045B150;
    case 423u: goto L_0045B160;
    case 424u: goto L_0045B170;
    case 425u: goto L_0045B1BC;
    case 426u: goto L_0045B1D0;
    case 427u: goto L_0045B1E0;
    case 428u: goto L_0045B1F0;
    case 429u: goto L_0045B234;
    case 430u: goto L_0045B244;
    case 431u: goto L_0045B274;
    case 432u: goto L_0045B280;
    case 433u: goto L_0045B294;
    case 434u: goto L_0045B2A4;
    case 435u: goto L_0045B2C0;
    case 436u: goto L_0045B2CC;
    case 437u: goto L_0045B2D8;
    case 438u: goto L_0045B2E8;
    case 439u: goto L_0045B424;
    case 440u: goto L_0045B440;
    case 441u: goto L_0045B57C;
    case 442u: goto L_0045B58C;
    case 443u: goto L_0045B5A4;
    case 444u: goto L_0045B718;
    case 445u: goto L_0045B730;
    case 446u: goto L_0045B758;
    case 447u: goto L_0045B768;
    case 448u: goto L_0045B774;
    case 449u: goto L_0045B780;
    case 450u: goto L_0045B7B0;
    case 451u: goto L_0045B7C0;
    case 452u: goto L_0045B82C;
    case 453u: goto L_0045B834;
    case 454u: goto L_0045B83C;
    case 455u: goto L_0045B8C4;
    case 456u: goto L_0045B8D8;
    case 457u: goto L_0045B8EC;
    case 458u: goto L_0045B910;
    case 459u: goto L_0045B94C;
    case 460u: goto L_0045B960;
    case 461u: goto L_0045B980;
    case 462u: goto L_0045B9A4;
    case 463u: goto L_0045B9C0;
    case 464u: goto L_0045B9D0;
    case 465u: goto L_0045B9F0;
    case 466u: goto L_0045BA0C;
    case 467u: goto L_0045BA24;
    case 468u: goto L_0045BA2C;
    case 469u: goto L_0045BA48;
    case 470u: goto L_0045BA64;
    case 471u: goto L_0045BB1C;
    case 472u: goto L_0045BB40;
    case 473u: goto L_0045BB90;
    case 474u: goto L_0045BBA8;
    case 475u: goto L_0045BBC4;
    case 476u: goto L_0045BC10;
    case 477u: goto L_0045BC2C;
    case 478u: goto L_0045BC48;
    case 479u: goto L_0045BC64;
    case 480u: goto L_0045BD70;
    case 481u: goto L_0045BD78;
    case 482u: goto L_0045BD80;
    case 483u: goto L_0045BD88;
    case 484u: goto L_0045BD98;
    case 485u: goto L_0045BDA4;
    case 486u: goto L_0045BDAC;
    case 487u: goto L_0045BDBC;
    case 488u: goto L_0045BDDC;
    case 489u: goto L_0045BE04;
    case 490u: goto L_0045BE14;
    case 491u: goto L_0045BE20;
    case 492u: goto L_0045BE2C;
    case 493u: goto L_0045BE3C;
    case 494u: goto L_0045BE48;
    case 495u: goto L_0045BE54;
    case 496u: goto L_0045BEE4;
    default: bad_entry(c, 0x00458000u); return;
    }
L_00458000:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0045800C:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 1;
L_00458010:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 2;
L_00458018:
    set32(c.r[3], 0u - 12289u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | 12288ull;
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[23], ld32((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[23].d[0] != 0ull) { set32(c.r[16], ld32((c.r[23].w[0] + 8u)));  goto L_004580C8; }
    set32(c.r[4], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458044u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x00458044u) [[unlikely]] return; }
L_00458044:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld16((c.r[17].w[0] + 42u));  goto L_00458058; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458054u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0086(c, 18u, depth + 1u); else { c.pc = 0x003182E0u; return; } if (c.pc != 0x00458054u) [[unlikely]] return; }
L_00458054:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 42u));
    c.budget -= 1;
L_00458058:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[23].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0045807C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[17].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004580BC; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004580BC; } }
L_0045807C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 36u)));  goto L_004580A4; }
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 36u)));  goto L_004580C0; }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_004580BC; } }
L_004580A4:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004580BC; } }
    c.r[3].d[0] = ld16((c.r[17].w[0] + 44u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_004580BC:
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 1;
L_004580C0:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[23].w[0] + 8u)));
    c.budget -= 2;
L_004580C8:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[22].d[0]) { set32(c.r[4], 0u + 96u);  goto L_00458134; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[23].w[0] + 8u), c.r[22].w[0]);  goto L_00458110; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004580E0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004580E0u) [[unlikely]] return; }
L_004580E0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004580F0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004580F0u) [[unlikely]] return; }
L_004580F0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0045810C; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045810Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045810Cu) [[unlikely]] return; }
L_0045810C:
    st32((c.r[23].w[0] + 8u), c.r[22].w[0]);
    c.budget -= 1;
L_00458110:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_00458130; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458120u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00458120u) [[unlikely]] return; }
L_00458120:
    set32(c.r[2], ld32((c.r[22].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458130u); st32((c.r[22].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00458130u) [[unlikely]] return; }
L_00458130:
    set32(c.r[4], 0u + 96u);
    c.budget -= 1;
L_00458134:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045813Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x0045813Cu) [[unlikely]] return; }
L_0045813C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 36u)));  goto L_00458198; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[0] = ld32((c.r[4].w[0] + 31000u));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    set32(c.r[5], 0u + 1u);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[4], 0u + 2u);
    c.f[0] = ld32((c.r[3].w[0] + 31004u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[2].w[0] + 16u), c.r[7].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 24u), c.r[6].w[0]);
    st8((c.r[2].w[0] + 28u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[2].w[0] + 44u), 0u);
    st32((c.r[2].w[0] + 60u), 0u);
    st32((c.r[2].w[0] + 76u), 0u);
    st32((c.r[2].w[0] + 80u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 21;
L_00458198:
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[3].w[0] + 20u), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 28u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { st8((c.r[2].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));  goto L_004581C0; }
    set32(c.r[3], ld32((c.r[2].w[0] + 80u)));
    c.r[3].d[0] = c.r[3].d[0] ^ 2ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    st8((c.r[2].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_004581C0:
    set32(c.r[3], 0u + 2u);
    st32((c.r[2].w[0] + 80u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 28u));
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { st8((c.r[2].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));  goto L_00458228; }
    c.f[1] = ld32((c.r[2].w[0] + 12u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_004581F8; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004581F8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[3].d[0] = c.r[3].d[0] ^ 1ull;  goto L_00458224; }
    c.f[1] = ld32((c.r[2].w[0] + 16u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_00458220; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00458220:
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 1;
L_00458224:
    st8((c.r[2].w[0] + 28u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00458228:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 156u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458244u); st32((c.r[2].w[0] + 16u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x00458244u) [[unlikely]] return; }
L_00458244:
    set32(c.r[4], c.r[21].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458250u); set32(c.r[5], c.r[29].w[0] + 156u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x00458250u) [[unlikely]] return; }
L_00458250:
    set32(c.r[4], c.r[29].w[0] + 156u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045825Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x0045825Cu) [[unlikely]] return; }
L_0045825C:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458268u); set32(c.r[4], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x00458268u) [[unlikely]] return; }
L_00458268:
    set32(c.r[4], c.r[21].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458274u); set32(c.r[5], c.r[29].w[0] + 152u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x00458274u) [[unlikely]] return; }
L_00458274:
    set32(c.r[4], c.r[29].w[0] + 152u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458280u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x00458280u) [[unlikely]] return; }
L_00458280:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045828Cu); set32(c.r[4], c.r[29].w[0] + 148u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x0045828Cu) [[unlikely]] return; }
L_0045828C:
    set32(c.r[4], c.r[21].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458298u); set32(c.r[5], c.r[29].w[0] + 148u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x00458298u) [[unlikely]] return; }
L_00458298:
    set32(c.r[4], c.r[29].w[0] + 148u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004582A4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004582A4u) [[unlikely]] return; }
L_004582A4:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004582B0u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_002F(c, 163u, depth + 1u); else { c.pc = 0x001BE1A0u; return; } if (c.pc != 0x004582B0u) [[unlikely]] return; }
L_004582B0:
    set32(c.r[4], c.r[21].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004582BCu); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_002F(c, 150u, depth + 1u); else { c.pc = 0x001BDF90u; return; } if (c.pc != 0x004582BCu) [[unlikely]] return; }
L_004582BC:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004582C8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_002F(c, 145u, depth + 1u); else { c.pc = 0x001BDEF0u; return; } if (c.pc != 0x004582C8u) [[unlikely]] return; }
L_004582C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004582D0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0060(c, 529u, depth + 1u); else { c.pc = 0x002836E0u; return; } if (c.pc != 0x004582D0u) [[unlikely]] return; }
L_004582D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00458300:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458320u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x00458320u) [[unlikely]] return; }
L_00458320:
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045832Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x0045832Cu) [[unlikely]] return; }
L_0045832C:
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 52u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[17], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 6;
    if (c.r[17].d[0] == c.r[18].d[0]) { set32(c.r[4], 0u + 256u);  goto L_004583A8; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 36u), c.r[18].w[0]);  goto L_00458384; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458354u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00458354u) [[unlikely]] return; }
L_00458354:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458364u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00458364u) [[unlikely]] return; }
L_00458364:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00458380; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00458380u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00458380u) [[unlikely]] return; }
L_00458380:
    st32((c.r[16].w[0] + 36u), c.r[18].w[0]);
    c.budget -= 1;
L_00458384:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004583A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458394u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00458394u) [[unlikely]] return; }
L_00458394:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004583A4u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004583A4u) [[unlikely]] return; }
L_004583A4:
    set32(c.r[4], 0u + 256u);
    c.budget -= 1;
L_004583A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004583B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004583B0u) [[unlikely]] return; }
L_004583B0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[17], ld32((c.r[16].w[0] + 40u)));  goto L_004583D0; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004583C8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_006E(c, 407u, depth + 1u); else { c.pc = 0x002BB0A0u; return; } if (c.pc != 0x004583C8u) [[unlikely]] return; }
L_004583C8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 2;
L_004583D0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[18].d[0];  if (t) { goto L_00458438; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 40u), c.r[18].w[0]);  goto L_00458418; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004583E8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004583E8u) [[unlikely]] return; }
L_004583E8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004583F8u); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004583F8u) [[unlikely]] return; }
L_004583F8:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00458414; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00458414u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00458414u) [[unlikely]] return; }
L_00458414:
    st32((c.r[16].w[0] + 40u), c.r[18].w[0]);
    c.budget -= 1;
L_00458418:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00458438; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458428u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00458428u) [[unlikely]] return; }
L_00458428:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458438u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00458438u) [[unlikely]] return; }
L_00458438:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 30636u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_00458454; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));  if (t) { goto L_0045845C; } }
L_00458454:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045845Cu);  if (depth < kMaxDepth) unit_006A(c, 47u, depth + 1u); else { c.pc = 0x002A87F0u; return; } if (c.pc != 0x0045845Cu) [[unlikely]] return; }
L_0045845C:
    st32((c.r[29].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045846Cu); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_006F(c, 166u, depth + 1u); else { c.pc = 0x002BD6C0u; return; } if (c.pc != 0x0045846Cu) [[unlikely]] return; }
L_0045846C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 20312u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 40u)));  goto L_004584CC; }
    set32(c.r[17], c.r[3].w[0] - 8u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 4u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458498u); set32(c.r[18], c.r[2].w[0] >> 16);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00458498u) [[unlikely]] return; }
L_00458498:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004584A8u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004584A8u) [[unlikely]] return; }
L_004584A8:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_004584C8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 27696u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004584C8u); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_006A(c, 25u, depth + 1u); else { c.pc = 0x002A8400u; return; } if (c.pc != 0x004584C8u) [[unlikely]] return; }
L_004584C8:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 1;
L_004584CC:
    c.r[2].d[0] = ld16((c.r[3].w[0] + 196u));
    c.r[2].d[0] = c.r[2].d[0] | 128ull;
    st16((c.r[3].w[0] + 196u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 144u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004584F0u); set32(c.r[6], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004584F0u) [[unlikely]] return; }
L_004584F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004584F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D6(c, 54u, depth + 1u); else { c.pc = 0x00458580u; return; } if (c.pc != 0x004584F8u) [[unlikely]] return; }
L_004584F8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458504u); set32(c.r[4], c.r[4].w[0] + 30658u);  if (depth < kMaxDepth) unit_000B(c, 77u, depth + 1u); else { c.pc = 0x0012CAA0u; return; } if (c.pc != 0x00458504u) [[unlikely]] return; }
L_00458504:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458514u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 67u, depth + 1u); else { c.pc = 0x00138E10u; return; } if (c.pc != 0x00458514u) [[unlikely]] return; }
L_00458514:
    set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 320u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0045854C; } }
L_00458528:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458538u); set32(c.r[4], ld32((c.r[2].w[0] + 52u)));  if (depth < kMaxDepth) unit_002F(c, 118u, depth + 1u); else { c.pc = 0x001BDBC0u; return; } if (c.pc != 0x00458538u) [[unlikely]] return; }
L_00458538:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458548u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D5(c, 445u, depth + 1u); else { c.pc = 0x00457880u; return; } if (c.pc != 0x00458548u) [[unlikely]] return; }
L_00458548:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_0045854C:
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.r[2].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[28].w[0] - 26896u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00458528u | kUnwind; return; } goto L_00458528; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458564u); set32(c.r[4], ld32((c.r[29].w[0] + 64u)));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00458564u) [[unlikely]] return; }
L_00458564:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00458580:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 28u), c.f[23]);
    st32((c.r[29].w[0] + 24u), c.f[22]);
    st32((c.r[29].w[0] + 20u), c.f[21]);
    st32((c.r[29].w[0] + 16u), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00458980; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004585C4u);  if (depth < kMaxDepth) unit_0000(c, 107u, depth + 1u); else { c.pc = 0x00101C90u; return; } if (c.pc != 0x004585C4u) [[unlikely]] return; }
L_004585C4:
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004585D0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x004585D0u) [[unlikely]] return; }
L_004585D0:
    st32((c.r[29].w[0] + 152u), c.r[2].w[0]);
    set32(c.r[4], 0u + 6412u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004585E0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x004585E0u) [[unlikely]] return; }
L_004585E0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 6512u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 12u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004585FCu); set32(c.r[8], 0u + 533u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x004585FCu) [[unlikely]] return; }
L_004585FC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 4280u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045860Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x0045860Cu) [[unlikely]] return; }
L_0045860C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 28784u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 8u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458628u); set32(c.r[8], 0u + 533u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x00458628u) [[unlikely]] return; }
L_00458628:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 8544u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458638u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0047(c, 89u, depth + 1u); else { c.pc = 0x0021CEB0u; return; } if (c.pc != 0x00458638u) [[unlikely]] return; }
L_00458638:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 6544u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458654u); set32(c.r[8], 0u + 533u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00397B40u; return; } if (c.pc != 0x00458654u) [[unlikely]] return; }
L_00458654:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 5760u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458664u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0047(c, 104u, depth + 1u); else { c.pc = 0x0021D100u; return; } if (c.pc != 0x00458664u) [[unlikely]] return; }
L_00458664:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.f[21] = ld32((c.r[2].w[0] + 30600u));
    c.f[23] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.f[20] = ld32((c.r[2].w[0] + 30592u));
    c.budget -= 7;
L_00458680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458688u); c.f[12] = c.f[23];  if (depth < kMaxDepth) unit_00AB(c, 406u, depth + 1u); else { c.pc = 0x003AF510u; return; } if (c.pc != 0x00458688u) [[unlikely]] return; }
L_00458688:
    c.f[22] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458694u); c.f[12] = c.f[23];  if (depth < kMaxDepth) unit_00AB(c, 382u, depth + 1u); else { c.pc = 0x003AF1D8u; return; } if (c.pc != 0x00458694u) [[unlikely]] return; }
L_00458694:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] < 0; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_004586A8; } }
    c.f[1] = c.r[19].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[2] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_004586C4; } }
L_004586A8:
    set32(c.r[3], c.r[19].w[0] >> 1);
    c.r[2].d[0] = c.r[19].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[1] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[1]);
    c.f[2] = fp::add(c.f[2], c.f[2]);
    c.budget -= 7;
L_004586C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    fpu_div(c, 10u, c.f[2], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[3], c.r[19].w[0] + 1u);
    c.f[7] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[5] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[6] = c.r[6].w[0];
    c.f[4] = c.r[4].w[0];
    c.f[2] = c.r[2].w[0];
    c.budget -= 15;
L_00458700:
    c.budget -= 2;
    if (c.r[7].sd[0] < 0) { set32(c.r[4], c.r[7].w[0] >> 1);  goto L_00458714; }
    c.f[1] = c.r[7].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_0045872C; } }
L_00458714:
    c.r[2].d[0] = c.r[7].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_0045872C:
    fpu_div(c, 8u, c.f[1], c.f[7]);
    set32(c.r[2], c.r[7].w[0] - 6u);
    c.f[1] = fp::sub(c.f[6], c.f[8]);
    c.facc = fp::mul(c.f[8], c.f[21]);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] >= 0; c.f[12] = fp::add(c.facc, fp::mul(c.f[1], c.f[20]));  if (t) { goto L_00458750; } }
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 1;
L_00458750:
    set32(c.r[4], c.r[5].w[0] - c.r[2].w[0]);
    c.f[1] = c.r[4].w[0];
    set32(c.r[2], c.r[7].w[0] << 2);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[4], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[10], c.r[19].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[10].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[10].w[0]);
    fpu_div(c, 11u, c.f[1], c.f[5]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[9], c.r[18].w[0] + c.r[2].w[0]);
    c.f[9] = ld32((c.r[20].w[0] + 48u));
    c.budget -= 16;
    { const bool t = c.r[7].sd[0] < 0; c.f[12] = fp::mul(c.f[12], c.f[11]);  if (t) { goto L_0045879C; } }
    c.f[1] = c.r[7].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[1]);  if (t) { goto L_004587B8; } }
L_0045879C:
    set32(c.r[8], c.r[7].w[0] >> 1);
    c.r[2].d[0] = c.r[7].d[0] & 1ull;
    c.r[8].d[0] = c.r[8].d[0] | c.r[2].d[0];
    c.f[1] = c.r[8].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_004587B8:
    fpu_div(c, 1u, c.f[1], c.f[7]);
    set32(c.r[2], c.r[10].w[0] << 3);
    set32(c.r[8], c.r[17].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(12ll) ? 1ull : 0ull;
    set32(c.r[2], c.r[10].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.f[3] = fp::mul(c.f[9], c.f[1]);
    fpu_div(c, 1u, c.f[9], c.f[4]);
    c.f[1] = fp::sub(c.f[3], c.f[1]);
    c.f[3] = fp::mul(c.f[12], c.f[0]);
    st32((c.r[9].w[0]), c.f[1]);
    st32((c.r[9].w[0] + 4u), c.f[3]);
    c.f[3] = fp::mul(c.f[12], c.f[22]);
    st32((c.r[9].w[0] + 8u), c.f[3]);
    st32((c.r[8].w[0]), c.f[10]);
    st32((c.r[8].w[0] + 4u), c.f[8]);
    st32((c.r[2].w[0]), c.r[6].w[0]);
    c.f[1] = fp::mul(c.f[2], c.f[11]);
    st32((c.r[2].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[6].w[0]);
    c.budget -= 24;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[2].w[0] + 12u), c.f[1]);  if (t) { goto L_00458880; } }
    c.r[1].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(40ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_00458884; }
    set32(c.r[11], c.r[7].w[0] + 1u);
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[8], c.r[19].w[0] + c.r[4].w[0]);
    set32(c.r[9], c.r[11].w[0] << 2);
    set32(c.r[4], c.r[7].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[11].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[10], c.r[9].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[11], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[9], c.r[19].w[0] + c.r[4].w[0]);
    set32(c.r[10], c.r[19].w[0] + c.r[11].w[0]);
    set32(c.r[4], c.r[9].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[4].w[0] << 2);
    set32(c.r[9], c.r[21].w[0] + c.r[9].w[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[11].w[0]);
    st16((c.r[9].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    st16((c.r[9].w[0] + 2u), static_cast<std::uint16_t>(c.r[10].w[0]));
    st16((c.r[9].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[9].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[9].w[0] + 8u), static_cast<std::uint16_t>(c.r[10].w[0]));
    st16((c.r[9].w[0] + 10u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 23;
L_00458880:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_00458884:
    c.r[1].d[0] = c.r[7].d[0] < static_cast<std::uint64_t>(13ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00458700u | kUnwind; return; } goto L_00458700; } }
    c.f[0] = ld32((c.r[28].w[0] - 31776u));
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[1].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(41ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.f[23] = fp::add(c.f[23], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00458680u | kUnwind; return; } goto L_00458680; } }
    set32(c.r[4], 0u + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004588B0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0047(c, 91u, depth + 1u); else { c.pc = 0x0021CF10u; return; } if (c.pc != 0x004588B0u) [[unlikely]] return; }
L_004588B0:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] == 0ull) { set32(c.r[16], ld32((c.r[20].w[0] + 4u)));  goto L_004588F4; }
    set32(c.r[2], 0u + 960u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[2].d[0]);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 533u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004588ECu); st64((c.r[29].w[0] + 8u), c.r[21].d[0]);  if (depth < kMaxDepth) unit_0087(c, 427u, depth + 1u); else { c.pc = 0x0031FBD0u; return; } if (c.pc != 0x004588ECu) [[unlikely]] return; }
L_004588EC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 2;
L_004588F4:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[19].d[0]) { set32(c.r[5], ld32((c.r[20].w[0] + 4u)));  goto L_00458960; }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { st32((c.r[20].w[0] + 4u), c.r[19].w[0]);  goto L_0045893C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045890Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0045890Cu) [[unlikely]] return; }
L_0045890C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045891Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045891Cu) [[unlikely]] return; }
L_0045891C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00458938; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00458938u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00458938u) [[unlikely]] return; }
L_00458938:
    st32((c.r[20].w[0] + 4u), c.r[19].w[0]);
    c.budget -= 1;
L_0045893C:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0045895C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045894Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0045894Cu) [[unlikely]] return; }
L_0045894C:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045895Cu); st32((c.r[19].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045895Cu) [[unlikely]] return; }
L_0045895C:
    set32(c.r[5], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 1;
L_00458960:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 4095ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 152u)));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 52u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458980u); st16((c.r[5].w[0] + 52u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_002D(c, 74u, depth + 1u); else { c.pc = 0x001B4B10u; return; } if (c.pc != 0x00458980u) [[unlikely]] return; }
L_00458980:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.f[23] = ld32((c.r[29].w[0] + 28u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.f[22] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[21] = ld32((c.r[29].w[0] + 20u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_004589C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00458BCC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 29168u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st8((c.r[17].w[0] + 52u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 72u), c.r[2].w[0]);  if (t) { goto L_00458A10; } }
L_004589FC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458A08u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D5(c, 419u, depth + 1u); else { c.pc = 0x004575F0u; return; } if (c.pc != 0x00458A08u) [[unlikely]] return; }
L_00458A08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458A10u); set32(c.r[4], c.r[29].w[0] + 72u);  if (depth < kMaxDepth) unit_0005(c, 13u, depth + 1u); else { c.pc = 0x00114160u; return; } if (c.pc != 0x00458A10u) [[unlikely]] return; }
L_00458A10:
    set32(c.r[3], ld32((c.r[29].w[0] + 72u)));
    set32(c.r[2], c.r[17].w[0] + 24u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[5], ld32((c.r[3].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004589FCu | kUnwind; return; } goto L_004589FC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458A28u); set32(c.r[4], c.r[17].w[0] + 12u);  if (depth < kMaxDepth) unit_00D6(c, 169u, depth + 1u); else { c.pc = 0x004592C0u; return; } if (c.pc != 0x00458A28u) [[unlikely]] return; }
L_00458A28:
    set32(c.r[5], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 148u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00458A40u); set32(c.r[4], c.r[29].w[0] + 76u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00458A40u) [[unlikely]] return; }
L_00458A40:
    set32(c.r[18], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  goto L_00458A84; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458A54u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00458A54u) [[unlikely]] return; }
L_00458A54:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458A64u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00458A64u) [[unlikely]] return; }
L_00458A64:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00458A80; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00458A80u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00458A80u) [[unlikely]] return; }
L_00458A80:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_00458A84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458A8Cu);  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x00458A8Cu) [[unlikely]] return; }
L_00458A8C:
    set32(c.r[2], c.r[17].w[0] + 40u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 36u);  goto L_00458ADC; }
    set32(c.r[18], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00458AD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458AACu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00458AACu) [[unlikely]] return; }
L_00458AAC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458ABCu); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00458ABCu) [[unlikely]] return; }
L_00458ABC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00458AD8; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00458AD8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00458AD8u) [[unlikely]] return; }
L_00458AD8:
    set32(c.r[2], c.r[17].w[0] + 36u);
    c.budget -= 1;
L_00458ADC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 12u);  goto L_00458B28; }
    set32(c.r[18], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00458B24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458AF8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00458AF8u) [[unlikely]] return; }
L_00458AF8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458B08u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00458B08u) [[unlikely]] return; }
L_00458B08:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00458B24; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00458B24u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00458B24u) [[unlikely]] return; }
L_00458B24:
    set32(c.r[4], c.r[17].w[0] + 12u);
    c.budget -= 1;
L_00458B28:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[17].w[0] + 4u);  goto L_00458B58; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00458B54; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00458B54; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00458B54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458B54u);  if (depth < kMaxDepth) unit_00D6(c, 124u, depth + 1u); else { c.pc = 0x00458F60u; return; } if (c.pc != 0x00458B54u) [[unlikely]] return; }
L_00458B54:
    set32(c.r[2], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_00458B58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00458BA0; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00458BA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458B74u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00458B74u) [[unlikely]] return; }
L_00458B74:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458B84u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00458B84u) [[unlikely]] return; }
L_00458B84:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00458BA0; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00458BA0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00458BA0u) [[unlikely]] return; }
L_00458BA0:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00458BB8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 22384u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 4;
L_00458BB8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00458BD0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458BCCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00458BCCu) [[unlikely]] return; }
L_00458BCC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00458BD0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00458BF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
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
    set32(c.r[2], c.r[2].w[0] + 29168u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 16;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[4].w[0] + 4u), 0u);  if (t) { goto L_00458C48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458C38u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00458C38u) [[unlikely]] return; }
L_00458C38:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458C48u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00458C48u) [[unlikely]] return; }
L_00458C48:
    set32(c.r[18], c.r[17].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458C54u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x00458C54u) [[unlikely]] return; }
L_00458C54:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_00458C6C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458C68u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x00458C68u) [[unlikely]] return; }
L_00458C68:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_00458C6C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[29].w[0] + 72u), c.r[2].w[0]);  goto L_00458C80; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458C7Cu);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x00458C7Cu) [[unlikely]] return; }
L_00458C7C:
    st32((c.r[29].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 1;
L_00458C80:
    set32(c.r[5], c.r[29].w[0] + 68u);
    set32(c.r[2], c.r[29].w[0] + 76u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[6], c.r[29].w[0] + 72u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458C9Cu); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00D6(c, 179u, depth + 1u); else { c.pc = 0x00459420u; return; } if (c.pc != 0x00458C9Cu) [[unlikely]] return; }
L_00458C9C:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 36u), 0u);  if (t) { goto L_00458CC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458CB0u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00458CB0u) [[unlikely]] return; }
L_00458CB0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458CC0u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00458CC0u) [[unlikely]] return; }
L_00458CC0:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[17].w[0] + 40u), 0u);  if (t) { goto L_00458CE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458CD4u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00458CD4u) [[unlikely]] return; }
L_00458CD4:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458CE4u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00458CE4u) [[unlikely]] return; }
L_00458CE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 48u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458CFCu); st8((c.r[17].w[0] + 52u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00D6(c, 26u, depth + 1u); else { c.pc = 0x00458300u; return; } if (c.pc != 0x00458CFCu) [[unlikely]] return; }
L_00458CFC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00458D20:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[19], c.r[20].w[0] + 12u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00458D88; } }
L_00458D5C:
    set32(c.r[3], ld32((c.r[6].w[0] + 12u)));
    c.r[1].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00458D78; } }
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00458D88; } }
L_00458D78:
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[6].w[0] + 4u)));
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_00458D88:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[4], ld32((c.r[5].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00458D5Cu | kUnwind; return; } goto L_00458D5C; }
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[2], ld32((c.r[5].w[0])));  goto L_00458DB0; }
    set32(c.r[3], ld32((c.r[7].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[7].w[0] + 12u);  goto L_00458E3C; }
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 1;
L_00458DB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_00458DD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458DC0u); set32(c.r[16], ld32((c.r[29].w[0] + 104u)));  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00458DC0u) [[unlikely]] return; }
L_00458DC0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458DD0u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00458DD0u) [[unlikely]] return; }
L_00458DD0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], c.r[29].w[0] + 104u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458DECu); st32((c.r[29].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_00D6(c, 180u, depth + 1u); else { c.pc = 0x00459450u; return; } if (c.pc != 0x00458DECu) [[unlikely]] return; }
L_00458DEC:
    set32(c.r[16], c.r[2].w[0] + 12u);
    set32(c.r[2], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00458E3C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458E04u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00458E04u) [[unlikely]] return; }
L_00458E04:
    set32(c.r[3], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458E18u); st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00458E18u) [[unlikely]] return; }
L_00458E18:
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00458E38; } }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00458E38u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00458E38u) [[unlikely]] return; }
L_00458E38:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00458E3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00458E60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00458EE0; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] << 48;  goto L_00458ECC; }
    set32(c.r[16], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00458EC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458E9Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x00458E9Cu) [[unlikely]] return; }
L_00458E9C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458EACu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x00458EACu) [[unlikely]] return; }
L_00458EAC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00458EC8; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00458EC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00458EC8u) [[unlikely]] return; }
L_00458EC8:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.budget -= 1;
L_00458ECC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_00458EE4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458EE0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00458EE0u) [[unlikely]] return; }
L_00458EE0:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00458EE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00458F00:
    set32(c.r[9], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[5].w[0] + 12u);  if (t) { goto L_00458F24; } }
L_00458F0C:
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[3].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[9], ld32((c.r[9].w[0] + 4u)));  goto L_00458F24; }
    c.r[8].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[9].w[0])));
    c.budget -= 2;
L_00458F24:
    c.budget -= 2;
    if (c.r[9].d[0] != 0ull) { set32(c.r[7], ld32((c.r[9].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00458F0Cu | kUnwind; return; } goto L_00458F0C; }
    set32(c.r[3], c.r[5].w[0] + 12u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[3].d[0]) { set32(c.r[3], c.r[5].w[0] + 12u);  goto L_00458F50; }
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[3], ld32((c.r[8].w[0] + 12u)));
    c.r[1].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { st32((c.r[4].w[0]), c.r[8].w[0]);  goto L_00458F54; }
    set32(c.r[3], c.r[5].w[0] + 12u);
    c.budget -= 1;
L_00458F50:
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_00458F54:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00458F60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00459080; } }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_00458FF0; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_00458FAC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458FA8u);  if (depth < kMaxDepth) unit_00D6(c, 124u, depth + 1u); else { c.pc = 0x00458F60u; return; } if (c.pc != 0x00458FA8u) [[unlikely]] return; }
L_00458FA8:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_00458FAC:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00458FC0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458FBCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D6(c, 124u, depth + 1u); else { c.pc = 0x00458F60u; return; } if (c.pc != 0x00458FBCu) [[unlikely]] return; }
L_00458FBC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00458FC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458FC8u);  if (depth < kMaxDepth) unit_00D6(c, 168u, depth + 1u); else { c.pc = 0x004592B0u; return; } if (c.pc != 0x00458FC8u) [[unlikely]] return; }
L_00458FC8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458FD4u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00D6(c, 164u, depth + 1u); else { c.pc = 0x00459240u; return; } if (c.pc != 0x00458FD4u) [[unlikely]] return; }
L_00458FD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458FDCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D6(c, 163u, depth + 1u); else { c.pc = 0x00459230u; return; } if (c.pc != 0x00458FDCu) [[unlikely]] return; }
L_00458FDC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00458FECu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00D6(c, 161u, depth + 1u); else { c.pc = 0x00459210u; return; } if (c.pc != 0x00458FECu) [[unlikely]] return; }
L_00458FEC:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_00458FF0:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00459054; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_00459010; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045900Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D6(c, 124u, depth + 1u); else { c.pc = 0x00458F60u; return; } if (c.pc != 0x0045900Cu) [[unlikely]] return; }
L_0045900C:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_00459010:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00459024; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459020u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D6(c, 124u, depth + 1u); else { c.pc = 0x00458F60u; return; } if (c.pc != 0x00459020u) [[unlikely]] return; }
L_00459020:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00459024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045902Cu);  if (depth < kMaxDepth) unit_00D6(c, 168u, depth + 1u); else { c.pc = 0x004592B0u; return; } if (c.pc != 0x0045902Cu) [[unlikely]] return; }
L_0045902C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459038u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00D6(c, 164u, depth + 1u); else { c.pc = 0x00459240u; return; } if (c.pc != 0x00459038u) [[unlikely]] return; }
L_00459038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459040u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D6(c, 163u, depth + 1u); else { c.pc = 0x00459230u; return; } if (c.pc != 0x00459040u) [[unlikely]] return; }
L_00459040:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459050u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00D6(c, 161u, depth + 1u); else { c.pc = 0x00459210u; return; } if (c.pc != 0x00459050u) [[unlikely]] return; }
L_00459050:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00459054:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045905Cu);  if (depth < kMaxDepth) unit_00D6(c, 168u, depth + 1u); else { c.pc = 0x004592B0u; return; } if (c.pc != 0x0045905Cu) [[unlikely]] return; }
L_0045905C:
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459068u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00D6(c, 117u, depth + 1u); else { c.pc = 0x00458E60u; return; } if (c.pc != 0x00459068u) [[unlikely]] return; }
L_00459068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459070u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D6(c, 163u, depth + 1u); else { c.pc = 0x00459230u; return; } if (c.pc != 0x00459070u) [[unlikely]] return; }
L_00459070:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[19], ld32((c.r[16].w[0] + 4u)));  goto L_00459084; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459080u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00459080u) [[unlikely]] return; }
L_00459080:
    set32(c.r[19], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_00459084:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[3], c.r[16].w[0] + 12u);  goto L_00459188; }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_004590F4; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_004590B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004590ACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D6(c, 124u, depth + 1u); else { c.pc = 0x00458F60u; return; } if (c.pc != 0x004590ACu) [[unlikely]] return; }
L_004590AC:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_004590B0:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004590C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004590C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D6(c, 124u, depth + 1u); else { c.pc = 0x00458F60u; return; } if (c.pc != 0x004590C0u) [[unlikely]] return; }
L_004590C0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004590C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004590CCu);  if (depth < kMaxDepth) unit_00D6(c, 168u, depth + 1u); else { c.pc = 0x004592B0u; return; } if (c.pc != 0x004590CCu) [[unlikely]] return; }
L_004590CC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004590D8u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00D6(c, 164u, depth + 1u); else { c.pc = 0x00459240u; return; } if (c.pc != 0x004590D8u) [[unlikely]] return; }
L_004590D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004590E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D6(c, 163u, depth + 1u); else { c.pc = 0x00459230u; return; } if (c.pc != 0x004590E0u) [[unlikely]] return; }
L_004590E0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004590F0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00D6(c, 161u, depth + 1u); else { c.pc = 0x00459210u; return; } if (c.pc != 0x004590F0u) [[unlikely]] return; }
L_004590F0:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_004590F4:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00459158; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_00459114; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459110u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D6(c, 124u, depth + 1u); else { c.pc = 0x00458F60u; return; } if (c.pc != 0x00459110u) [[unlikely]] return; }
L_00459110:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_00459114:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00459128; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459124u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D6(c, 124u, depth + 1u); else { c.pc = 0x00458F60u; return; } if (c.pc != 0x00459124u) [[unlikely]] return; }
L_00459124:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00459128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459130u);  if (depth < kMaxDepth) unit_00D6(c, 168u, depth + 1u); else { c.pc = 0x004592B0u; return; } if (c.pc != 0x00459130u) [[unlikely]] return; }
L_00459130:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045913Cu); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00D6(c, 164u, depth + 1u); else { c.pc = 0x00459240u; return; } if (c.pc != 0x0045913Cu) [[unlikely]] return; }
L_0045913C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459144u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D6(c, 163u, depth + 1u); else { c.pc = 0x00459230u; return; } if (c.pc != 0x00459144u) [[unlikely]] return; }
L_00459144:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459154u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00D6(c, 161u, depth + 1u); else { c.pc = 0x00459210u; return; } if (c.pc != 0x00459154u) [[unlikely]] return; }
L_00459154:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00459158:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459160u);  if (depth < kMaxDepth) unit_00D6(c, 168u, depth + 1u); else { c.pc = 0x004592B0u; return; } if (c.pc != 0x00459160u) [[unlikely]] return; }
L_00459160:
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045916Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00D6(c, 117u, depth + 1u); else { c.pc = 0x00458E60u; return; } if (c.pc != 0x0045916Cu) [[unlikely]] return; }
L_0045916C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459174u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D6(c, 163u, depth + 1u); else { c.pc = 0x00459230u; return; } if (c.pc != 0x00459174u) [[unlikely]] return; }
L_00459174:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00459184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459184u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00459184u) [[unlikely]] return; }
L_00459184:
    set32(c.r[3], c.r[16].w[0] + 12u);
    c.budget -= 1;
L_00459188:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004591D8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004591D8; } }
    set32(c.r[17], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_004591D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004591ACu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004591ACu) [[unlikely]] return; }
L_004591AC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004591BCu); st32((c.r[17].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004591BCu) [[unlikely]] return; }
L_004591BC:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004591D8; } }
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004591D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004591D8u) [[unlikely]] return; }
L_004591D8:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_004591EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004591E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004591E8u) [[unlikely]] return; }
L_004591E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_004591EC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00459210:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00459224; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459224u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00459224u) [[unlikely]] return; }
L_00459224:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00459230:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 8u);  c.pc = t; return; }
L_00459240:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00459298; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0045929C; }
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00459298; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045926Cu);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x0045926Cu) [[unlikely]] return; }
L_0045926C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045927Cu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x0045927Cu) [[unlikely]] return; }
L_0045927C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00459298; } }
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00459298u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00459298u) [[unlikely]] return; }
L_00459298:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0045929C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004592B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_004592C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004592F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004592E0u);  if (depth < kMaxDepth) unit_00D6(c, 124u, depth + 1u); else { c.pc = 0x00458F60u; return; } if (c.pc != 0x004592E0u) [[unlikely]] return; }
L_004592E0:
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[3], c.r[16].w[0] + 12u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 4;
L_004592F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00459300:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[16], ld32((c.r[5].w[0])));
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00459384; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[17].w[0] + 20u);  if (t) { goto L_0045935C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[3].w[0])));  if (t) { goto L_00459340; } }
L_00459338:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 2;
L_00459340:
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00459338u | kUnwind; return; } goto L_00459338; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_0045937C; } }
L_0045935C:
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[2], 0u - 2u);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    if (c.r[4].d[0] != c.r[2].d[0]) { st32((c.r[5].w[0]), c.r[3].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0045935Cu | kUnwind; return; } goto L_0045935C; }
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_0045937C:
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00459384:
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459390u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 45u, depth + 1u); else { c.pc = 0x001188B0u; return; } if (c.pc != 0x00459390u) [[unlikely]] return; }
L_00459390:
    set32(c.r[3], c.r[16].w[0] + 12u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004593E4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_004593E4; } }
    set32(c.r[18], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_004593E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004593B8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004593B8u) [[unlikely]] return; }
L_004593B8:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004593C8u); st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004593C8u) [[unlikely]] return; }
L_004593C8:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_004593E4; } }
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004593E4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004593E4u) [[unlikely]] return; }
L_004593E4:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_004593F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004593F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004593F4u) [[unlikely]] return; }
L_004593F4:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_004593F8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00459420:
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
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 20u), c.r[3].w[0]);  c.pc = t; return; }
L_00459450:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(-1ll) ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[1].d[0] != 0ull; c.r[19].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_004594B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004594B0u); set32(c.r[5], c.r[5].w[0] + 30701u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x004594B0u) [[unlikely]] return; }
L_004594B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004594B8u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x004594B8u) [[unlikely]] return; }
L_004594B8:
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004594C4u); set32(c.r[4], 0u + 20u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x004594C4u) [[unlikely]] return; }
L_004594C4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[17], c.r[18].w[0] + 12u);
    c.budget -= 4;
    if (c.r[17].d[0] == 0ull) { st32((c.r[18].w[0] + 4u), 0u);  goto L_00459504; }
    set32(c.r[16], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[17].w[0]), c.r[16].w[0]);  if (t) { goto L_004594F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004594E8u);  if (depth < kMaxDepth) unit_00A8(c, 278u, depth + 1u); else { c.pc = 0x003A2EE0u; return; } if (c.pc != 0x004594E8u) [[unlikely]] return; }
L_004594E8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004594F8u); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00A8(c, 280u, depth + 1u); else { c.pc = 0x003A2F30u; return; } if (c.pc != 0x004594F8u) [[unlikely]] return; }
L_004594F8:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 4u), 0u);
    c.budget -= 3;
L_00459504:
    st32((c.r[18].w[0]), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[22].d[0] == 0ull; st32((c.r[18].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00459524; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[18].w[0]);  if (t) { goto L_00459528; } }
L_00459524:
    st32((c.r[20].w[0] + 4u), c.r[18].w[0]);
    c.budget -= 1;
L_00459528:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459540u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 69u, depth + 1u); else { c.pc = 0x00114770u; return; } if (c.pc != 0x00459540u) [[unlikely]] return; }
L_00459540:
    c.budget -= 2;
    if (c.r[23].d[0] == 0ull) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_00459550; }
    st32((c.r[21].w[0] + 20u), c.r[18].w[0]);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_00459550:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00459580:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 84u)));
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    set32(c.r[4], c.r[18].w[0] + 12u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004595B4u); c.r[6].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0005(c, 152u, depth + 1u); else { c.pc = 0x00116360u; return; } if (c.pc != 0x004595B4u) [[unlikely]] return; }
L_004595B4:
    c.f[1] = ld32((c.r[18].w[0] + 32u));
    c.f[0] = ld32((c.r[28].w[0] - 32596u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 1u);  if (t) { goto L_004595CC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004595CC:
    st8((c.r[18].w[0] + 88u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[28].w[0] - 32208u));
    c.f[1] = ld32((c.r[18].w[0] + 32u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_004595E8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004595E8:
    st8((c.r[18].w[0] + 89u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = 0u;
    st32((c.r[18].w[0] + 84u), 0u);
    c.f[1] = ld32((c.r[18].w[0] + 32u));
    st32((c.r[18].w[0]), c.f[1]);
    c.f[0] = fp::max(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::min(c.f[0], c.f[1]);
    set32(c.r[4], c.r[18].w[0] + 12u);
    st32((c.r[18].w[0]), c.f[0]);
    st32((c.r[29].w[0] + 64u), 0u);
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 72u), 0u);
    c.f[12] = ld32((c.r[18].w[0]));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459638u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_0005(c, 148u, depth + 1u); else { c.pc = 0x00115FB0u; return; } if (c.pc != 0x00459638u) [[unlikely]] return; }
L_00459638:
    c.f[5] = ld32((c.r[17].w[0]));
    c.f[4] = ld32((c.r[29].w[0] + 64u));
    c.f[3] = ld32((c.r[17].w[0] + 4u));
    c.f[2] = ld32((c.r[29].w[0] + 68u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[0] = fp::sqrt(c.f[0]);
    c.budget -= 17;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[18].w[0] + 4u), c.f[0]);  if (t) { goto L_004596A4; } }
    c.f[0] = ld32((c.r[18].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[18].w[0]), c.f[0]);
    c.r[4].d[0] = ld8((c.r[18].w[0] + 88u));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 89u));
    st8((c.r[18].w[0] + 88u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[18].w[0] + 89u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 10;
L_004596A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_004596C0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] + 12u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001169C0u | kUnwind; return; } [[clang::musttail]] return unit_0005(c, 166u, depth); }
L_004596D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[1] = ld32((c.r[28].w[0] - 32200u));
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[28].w[0] - 32196u));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.f[1]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004596FCu); set32(c.r[4], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0005(c, 172u, depth + 1u); else { c.pc = 0x00116E80u; return; } if (c.pc != 0x004596FCu) [[unlikely]] return; }
L_004596FC:
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 84u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 88u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 89u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00459720:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00459790; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 29200u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00459778; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27696u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00459778; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00459778; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459778u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00459778u) [[unlikely]] return; }
L_00459778:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00459794; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459790u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00459790u) [[unlikely]] return; }
L_00459790:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00459794:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004597B0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_004597D8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 5u);  goto L_004597D0; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_004597D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004597DC; } }
L_004597D8:
    set32(c.r[2], c.r[2].w[0] + 30736u);
    c.budget -= 1;
L_004597DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004597F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 31008u);  c.pc = t; return; }
L_00459800:
    set32(c.r[29], c.r[29].w[0] - 240u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[6], c.r[6].w[0] + 31104u);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[7], 0u + 10u);
    c.r[8].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045983Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 430u, depth + 1u); else { c.pc = 0x00133EC0u; return; } if (c.pc != 0x0045983Cu) [[unlikely]] return; }
L_0045983C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045984Cu); set32(c.r[5], c.r[5].w[0] + 31106u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0045984Cu) [[unlikely]] return; }
L_0045984C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 176u);  goto L_00459888; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459864u); set32(c.r[5], c.r[5].w[0] + 31111u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00459864u) [[unlikely]] return; }
L_00459864:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00459884; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045987Cu); set32(c.r[5], c.r[5].w[0] + 31116u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0045987Cu) [[unlikely]] return; }
L_0045987C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_00459898; }
L_00459884:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 1;
L_00459888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459890u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x00459890u) [[unlikely]] return; }
L_00459890:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00459A2C; } }
L_00459898:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004598A4u); set32(c.r[5], c.r[5].w[0] + 31106u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004598A4u) [[unlikely]] return; }
L_004598A4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004598B0u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x004598B0u) [[unlikely]] return; }
L_004598B0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004598C0u); set32(c.r[5], c.r[5].w[0] + 31111u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004598C0u) [[unlikely]] return; }
L_004598C0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004598CCu); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x004598CCu) [[unlikely]] return; }
L_004598CC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004598DCu); set32(c.r[5], c.r[5].w[0] + 31116u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004598DCu) [[unlikely]] return; }
L_004598DC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004598E8u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x004598E8u) [[unlikely]] return; }
L_004598E8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004598F8u); set32(c.r[5], c.r[5].w[0] + 31132u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004598F8u) [[unlikely]] return; }
L_004598F8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[17].d[0] = 0ull + 0ull;  goto L_00459938; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459910u); set32(c.r[5], c.r[29].w[0] + 239u);  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x00459910u) [[unlikely]] return; }
L_00459910:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[17].d[0] = ld8((c.r[29].w[0] + 239u));  goto L_00459938; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00459934; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 239u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459934u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x00459934u) [[unlikely]] return; }
L_00459934:
    c.r[17].d[0] = ld8((c.r[29].w[0] + 239u));
    c.budget -= 1;
L_00459938:
    set32(c.r[4], 0u + 80u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459948u); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x00459948u) [[unlikely]] return; }
L_00459948:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_004599E4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[29].w[0] + 129u);  goto L_00459964; }
    set32(c.r[16], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_00459964:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459970u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000A(c, 393u, depth + 1u); else { c.pc = 0x0012B280u; return; } if (c.pc != 0x00459970u) [[unlikely]] return; }
L_00459970:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], 0u + 1u);  if (t) { goto L_00459988; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 168u)));  if (t) { goto L_0045998C; } }
L_00459988:
    set32(c.r[6], c.r[29].w[0] + 161u);
    c.budget -= 1;
L_0045998C:
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045999Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 74u, depth + 1u); else { c.pc = 0x00138F30u; return; } if (c.pc != 0x0045999Cu) [[unlikely]] return; }
L_0045999C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 29232u);
    set32(c.r[4], c.r[19].w[0] + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004599B4u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004599B4u) [[unlikely]] return; }
L_004599B4:
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004599C0u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000A(c, 387u, depth + 1u); else { c.pc = 0x0012B1E0u; return; } if (c.pc != 0x004599C0u) [[unlikely]] return; }
L_004599C0:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], 0u + 40u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004599D0u); st32((c.r[19].w[0] + 76u), 0u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004599D0u) [[unlikely]] return; }
L_004599D0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[19].w[0] + 76u), c.r[2].w[0]);  goto L_004599E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004599E0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0016(c, 35u, depth + 1u); else { c.pc = 0x001583D0u; return; } if (c.pc != 0x004599E0u) [[unlikely]] return; }
L_004599E0:
    st32((c.r[19].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 1;
L_004599E4:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 128u);  goto L_004599FC; }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004599F8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x004599F8u) [[unlikely]] return; }
L_004599F8:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_004599FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459A04u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00459A04u) [[unlikely]] return; }
L_00459A04:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459A10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00459A10u) [[unlikely]] return; }
L_00459A10:
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459A1Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00459A1Cu) [[unlikely]] return; }
L_00459A1C:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459A28u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x00459A28u) [[unlikely]] return; }
L_00459A28:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00459A2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_00459A50:
    set32(c.r[5], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[28].w[0] - 29004u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00143460u | kUnwind; return; } [[clang::musttail]] return unit_0010(c, 440u, depth); }
L_00459A60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 76u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459A7Cu); set32(c.r[6], c.r[16].w[0] + 48u);  if (depth < kMaxDepth) unit_0016(c, 27u, depth + 1u); else { c.pc = 0x00158280u; return; } if (c.pc != 0x00459A7Cu) [[unlikely]] return; }
L_00459A7C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[28].w[0] - 29004u)));  goto L_00459A8C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00459A9C; } }
L_00459A8C:
    set32(c.r[6], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459A98u); set32(c.r[5], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0010(c, 445u, depth + 1u); else { c.pc = 0x00143520u; return; } if (c.pc != 0x00459A98u) [[unlikely]] return; }
L_00459A98:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00459A9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00459AB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[4].w[0] + 31040u);
    set32(c.r[5], c.r[5].w[0] + 31144u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459ADCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0007(c, 125u, depth + 1u); else { c.pc = 0x0011CFB0u; return; } if (c.pc != 0x00459ADCu) [[unlikely]] return; }
L_00459ADC:
    set32(c.r[17], ld32((c.r[28].w[0] - 29076u)));
    set32(c.r[4], 0u + 24u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459AECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x00459AECu) [[unlikely]] return; }
L_00459AEC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 808u)));  goto L_00459B2C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459B0Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x00459B0Cu) [[unlikely]] return; }
L_00459B0C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 27696u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 29200u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 808u)));
    c.budget -= 8;
L_00459B2C:
    set32(c.r[3], 0u + 39u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00459B8C; }
    set32(c.r[2], c.r[4].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 31040u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459B58u); set32(c.r[4], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x00459B58u) [[unlikely]] return; }
L_00459B58:
    set32(c.r[3], ld32((c.r[17].w[0] + 808u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 24u), c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 808u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459B7Cu); set32(c.r[4], c.r[17].w[0] + 812u);  if (depth < kMaxDepth) unit_0006(c, 256u, depth + 1u); else { c.pc = 0x00119F20u; return; } if (c.pc != 0x00459B7Cu) [[unlikely]] return; }
L_00459B7C:
    set32(c.r[3], ld32((c.r[17].w[0] + 808u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 808u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 4;
L_00459B8C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00459BA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00459C2C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 29232u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 48u);  goto L_00459BE8; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00459BE4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00459BE4u) [[unlikely]] return; }
L_00459BE4:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 1;
L_00459BE8:
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459BF4u); st32((c.r[17].w[0] + 76u), 0u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x00459BF4u) [[unlikely]] return; }
L_00459BF4:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00459C0C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459C08u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00459C08u) [[unlikely]] return; }
L_00459C08:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00459C0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459C14u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 69u, depth + 1u); else { c.pc = 0x00138E80u; return; } if (c.pc != 0x00459C14u) [[unlikely]] return; }
L_00459C14:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00459C30; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459C2Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00459C2Cu) [[unlikely]] return; }
L_00459C2C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00459C30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00459C50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29984u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_00459C6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00459C7C; } }
L_00459C6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459C74u);  if (depth < kMaxDepth) unit_000E(c, 80u, depth + 1u); else { c.pc = 0x00138FF0u; return; } if (c.pc != 0x00459C74u) [[unlikely]] return; }
L_00459C74:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_00459C7C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00459C90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459CB4u); set32(c.r[4], c.r[4].w[0] + 31040u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00459CB4u) [[unlikely]] return; }
L_00459CB4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00459CC4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00459CD4; } }
L_00459CC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459CCCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 82u, depth + 1u); else { c.pc = 0x00139030u; return; } if (c.pc != 0x00459CCCu) [[unlikely]] return; }
L_00459CCC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00459CD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00459CF0:
    set32(c.r[2], ld32((c.r[28].w[0] - 31208u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_00459D00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29984u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00459D1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00459D24; } }
L_00459D1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459D24u);  if (depth < kMaxDepth) unit_000E(c, 89u, depth + 1u); else { c.pc = 0x001390A0u; return; } if (c.pc != 0x00459D24u) [[unlikely]] return; }
L_00459D24:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00459D30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29984u)));  c.pc = t; return; }
L_00459D40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 31072u);  c.pc = t; return; }
L_00459D50:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.f[20] = c.f[12];  if (t) { goto L_00459D80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 28u)));  if (t) { goto L_00459D8C; } }
L_00459D80:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 24u));
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = c.r[3].d[0] >> 57;
    c.budget -= 3;
L_00459D8C:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_00459F2C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459D9Cu); set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  if (depth < kMaxDepth) unit_00FC(c, 548u, depth + 1u); else { c.pc = 0x004F3F60u; return; } if (c.pc != 0x00459D9Cu) [[unlikely]] return; }
L_00459D9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00459F28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459DACu); set32(c.r[4], ld32((c.r[28].w[0] - 22500u)));  if (depth < kMaxDepth) unit_00FC(c, 548u, depth + 1u); else { c.pc = 0x004F3F60u; return; } if (c.pc != 0x00459DACu) [[unlikely]] return; }
L_00459DAC:
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[25], ld32((c.r[5].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 176u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00459DC0u); set32(c.r[4], c.r[29].w[0] + 64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00459DC0u) [[unlikely]] return; }
L_00459DC0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459DD0u); set32(c.r[5], c.r[5].w[0] + 31232u);  if (depth < kMaxDepth) unit_0001(c, 128u, depth + 1u); else { c.pc = 0x00105210u; return; } if (c.pc != 0x00459DD0u) [[unlikely]] return; }
L_00459DD0:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 65u);  goto L_00459DE4; }
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_00459DE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459DECu); set32(c.r[4], ld32((c.r[28].w[0] - 28808u)));  if (depth < kMaxDepth) unit_0027(c, 36u, depth + 1u); else { c.pc = 0x0019C7F0u; return; } if (c.pc != 0x00459DECu) [[unlikely]] return; }
L_00459DEC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[4], c.r[29].w[0] + 92u);  goto L_00459E0C; }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459E04u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00459E04u) [[unlikely]] return; }
L_00459E04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00459F28; } }
L_00459E0C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459E18u); set32(c.r[6], c.r[17].w[0] + 24u);  if (depth < kMaxDepth) unit_00D6(c, 305u, depth + 1u); else { c.pc = 0x0045A480u; return; } if (c.pc != 0x00459E18u) [[unlikely]] return; }
L_00459E18:
    set32(c.r[3], ld32((c.r[29].w[0] + 92u)));
    set32(c.r[2], c.r[17].w[0] + 12u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.f[0] = ld32((c.r[17].w[0] + 44u));  goto L_00459E3C; }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459E34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00459E34u) [[unlikely]] return; }
L_00459E34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00459F28; } }
L_00459E3C:
    c.f[2] = ld32((c.r[3].w[0] + 28u));
    c.f[1] = ld32((c.r[3].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    st32((c.r[17].w[0] + 44u), c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 40u)));
    st32((c.r[29].w[0] + 80u), c.f[2]);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] < 0; st32((c.r[29].w[0] + 84u), c.f[1]);  if (t) { goto L_00459EA0; } }
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 10;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], ld32((c.r[17].w[0] + 40u)));  goto L_00459EA4; }
    set32(c.r[2], 0u - 1u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459EA0u); set32(c.r[6], c.r[6].w[0] + 31242u);  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x00459EA0u) [[unlikely]] return; }
L_00459EA0:
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 1;
L_00459EA4:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[29].w[0] + 64u);  goto L_00459F20; }
    set32(c.r[4], ld32((c.r[29].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00459F10; } }
L_00459EC0:
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 44u));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_00459F10; }
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00459F0C; } }
    st32((c.r[17].w[0] + 40u), c.r[5].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459F04u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E2(c, 319u, depth + 1u); else { c.pc = 0x0048A9C0u; return; } if (c.pc != 0x00459F04u) [[unlikely]] return; }
L_00459F04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00459F1C; } }
L_00459F0C:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00459F10:
    c.r[2].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[5].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00459EC0u | kUnwind; return; } goto L_00459EC0; }
L_00459F1C:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 1;
L_00459F20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459F28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00459F28u) [[unlikely]] return; }
L_00459F28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00459F2C:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00459F40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00459F64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 32u)));  if (t) { goto L_00459F68; } }
L_00459F64:
    set32(c.r[2], c.r[16].w[0] + 25u);
    c.budget -= 1;
L_00459F68:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00459F74u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00459F74u) [[unlikely]] return; }
L_00459F74:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_00459FC8; }
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 32u)));  goto L_00459FB0; }
    st8((c.r[16].w[0] + 25u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = 0ull & 127ull;
    c.r[5].d[0] = ld8((c.r[16].w[0] + 24u));
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[3], 0u - 255u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 24u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00459FB8; } }
L_00459FB0:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 28u), 0u);
    c.budget -= 2;
L_00459FB8:
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 44u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
L_00459FC8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00459FE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A000u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0045A000u) [[unlikely]] return; }
L_0045A000:
    set32(c.r[4], c.r[29].w[0] + 76u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A010u); set32(c.r[6], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_00D6(c, 305u, depth + 1u); else { c.pc = 0x0045A480u; return; } if (c.pc != 0x0045A010u) [[unlikely]] return; }
L_0045A010:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A01Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0045A01Cu) [[unlikely]] return; }
L_0045A01C:
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    set32(c.r[3], c.r[17].w[0] + 12u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0045A048; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A038u); set32(c.r[4], c.r[17].w[0] + 24u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0045A038u) [[unlikely]] return; }
L_0045A038:
    set32(c.r[3], 0u - 1u);
    st32((c.r[17].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 44u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 4;
L_0045A048:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0045A060:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A078u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0045A078u) [[unlikely]] return; }
L_0045A078:
    set32(c.r[4], c.r[29].w[0] + 60u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A088u); set32(c.r[6], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_00D6(c, 305u, depth + 1u); else { c.pc = 0x0045A480u; return; } if (c.pc != 0x0045A088u) [[unlikely]] return; }
L_0045A088:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A094u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0045A094u) [[unlikely]] return; }
L_0045A094:
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[3], c.r[16].w[0] + 12u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0045A0B8; }
    st32((c.r[29].w[0] + 56u), c.r[4].w[0]);
    set32(c.r[5], c.r[29].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A0B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D6(c, 350u, depth + 1u); else { c.pc = 0x0045A840u; return; } if (c.pc != 0x0045A0B4u) [[unlikely]] return; }
L_0045A0B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0045A0B8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0045A0D0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A104u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0045A104u) [[unlikely]] return; }
L_0045A104:
    set32(c.r[4], c.r[29].w[0] + 140u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A114u); set32(c.r[6], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_00D6(c, 305u, depth + 1u); else { c.pc = 0x0045A480u; return; } if (c.pc != 0x0045A114u) [[unlikely]] return; }
L_0045A114:
    set32(c.r[3], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[2], c.r[19].w[0] + 12u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[20].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A130u); c.r[20].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0045A130u) [[unlikely]] return; }
L_0045A130:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  goto L_0045A168; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A144u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0045A144u) [[unlikely]] return; }
L_0045A144:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A150u); set32(c.r[5], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_00D6(c, 294u, depth + 1u); else { c.pc = 0x0045A2B0u; return; } if (c.pc != 0x0045A150u) [[unlikely]] return; }
L_0045A150:
    st32((c.r[2].w[0] + 16u), c.r[17].w[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    st32((c.r[2].w[0] + 20u), c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A164u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0045A164u) [[unlikely]] return; }
L_0045A164:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0045A168:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0045A190:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[28].w[0] - 24560u)));
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { st32((c.r[28].w[0] - 24560u), 0u);  goto L_0045A1F8; }
    set32(c.r[4], c.r[16].w[0] + 24u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[28].w[0] - 24560u), 0u);  if (t) { goto L_0045A1BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A1BCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0045A1BCu) [[unlikely]] return; }
L_0045A1BC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0045A1EC; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0045A1E8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0045A1E8; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0045A1E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A1E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D6(c, 309u, depth + 1u); else { c.pc = 0x0045A520u; return; } if (c.pc != 0x0045A1E8u) [[unlikely]] return; }
L_0045A1E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0045A1EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A1F4u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0045A1F4u) [[unlikely]] return; }
L_0045A1F4:
    st32((c.r[28].w[0] - 24560u), 0u);
    c.budget -= 1;
L_0045A1F8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0045A210:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], 0u + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A228u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0045A228u) [[unlikely]] return; }
L_0045A228:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0045A298; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A238u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x0045A238u) [[unlikely]] return; }
L_0045A238:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0045A250; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A24Cu);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x0045A24Cu) [[unlikely]] return; }
L_0045A24C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0045A250:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[29].w[0] + 40u), c.r[2].w[0]);  goto L_0045A264; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A260u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0045A260u) [[unlikely]] return; }
L_0045A260:
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 1;
L_0045A264:
    set32(c.r[5], c.r[29].w[0] + 36u);
    set32(c.r[2], c.r[29].w[0] + 44u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[6], c.r[29].w[0] + 40u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A280u); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00D6(c, 355u, depth + 1u); else { c.pc = 0x0045A900u; return; } if (c.pc != 0x0045A280u) [[unlikely]] return; }
L_0045A280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A288u); set32(c.r[4], c.r[16].w[0] + 24u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0045A288u) [[unlikely]] return; }
L_0045A288:
    st32((c.r[28].w[0] - 24560u), c.r[16].w[0]);
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 44u), 0u);
    c.budget -= 4;
L_0045A298:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0045A2B0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[21].w[0] + 12u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 12u)));
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0045A324; } }
L_0045A2F8:
    set32(c.r[5], c.r[17].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A304u); c.r[18].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x0045A304u) [[unlikely]] return; }
L_0045A304:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[19].d[0] = c.r[17].d[0] + 0ull;  goto L_0045A318; }
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0045A324; } }
L_0045A318:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[17], ld32((c.r[17].w[0] + 4u)));
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0045A324:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0045A2F8u | kUnwind; return; } goto L_0045A2F8; }
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[3], c.r[29].w[0] + 168u);  goto L_0045A34C; }
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A340u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x0045A340u) [[unlikely]] return; }
L_0045A340:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], c.r[19].w[0] + 12u);  goto L_0045A3D4; }
    set32(c.r[3], c.r[29].w[0] + 168u);
    c.budget -= 1;
L_0045A34C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_0045A374; } }
    set32(c.r[23], c.r[3].w[0] + 0u);
    c.budget -= 1;
L_0045A358:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0045A358u | kUnwind; return; } goto L_0045A358; } }
L_0045A374:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A380u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0045A380u) [[unlikely]] return; }
L_0045A380:
    c.f[1] = ld32((c.r[23].w[0]));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[0] = ld32((c.r[23].w[0] + 4u));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[29].w[0] + 160u), c.f[1]);
    set32(c.r[8], c.r[29].w[0] + 144u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A3A8u); st32((c.r[29].w[0] + 164u), c.f[0]);  if (depth < kMaxDepth) unit_00D6(c, 356u, depth + 1u); else { c.pc = 0x0045A930u; return; } if (c.pc != 0x0045A3A8u) [[unlikely]] return; }
L_0045A3A8:
    set32(c.r[16], c.r[2].w[0] + 12u);
    set32(c.r[2], ld32((c.r[29].w[0] + 144u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0045A3D4; }
    set32(c.r[4], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0045A3D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A3D0u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0045A3D0u) [[unlikely]] return; }
L_0045A3D0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0045A3D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
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
L_0045A400:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0045A468; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_0045A454; }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0045A450; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0045A450; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0045A450; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A450u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0045A450u) [[unlikely]] return; }
L_0045A450:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_0045A454:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0045A46C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A468u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0045A468u) [[unlikely]] return; }
L_0045A468:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0045A46C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0045A480:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[19].w[0] + 12u);  if (t) { goto L_0045A4CC; } }
L_0045A4B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A4BCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x0045A4BCu) [[unlikely]] return; }
L_0045A4BC:
    c.budget -= 2;
    if (c.r[2].sd[0] < 0) { set32(c.r[17], ld32((c.r[17].w[0] + 4u)));  goto L_0045A4CC; }
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 2;
L_0045A4CC:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[4], c.r[17].w[0] + 12u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0045A4B4u | kUnwind; return; } goto L_0045A4B4; }
    set32(c.r[3], c.r[19].w[0] + 12u);
    c.budget -= 3;
    if (c.r[16].d[0] == c.r[3].d[0]) { set32(c.r[3], c.r[19].w[0] + 12u);  goto L_0045A4F8; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A4ECu); set32(c.r[5], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_0005(c, 61u, depth + 1u); else { c.pc = 0x00114560u; return; } if (c.pc != 0x0045A4ECu) [[unlikely]] return; }
L_0045A4EC:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { st32((c.r[20].w[0]), c.r[16].w[0]);  goto L_0045A4FC; }
    set32(c.r[3], c.r[19].w[0] + 12u);
    c.budget -= 1;
L_0045A4F8:
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_0045A4FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0045A520:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[19].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0045A640; } }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_0045A5B0; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_0045A56C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A568u);  if (depth < kMaxDepth) unit_00D6(c, 309u, depth + 1u); else { c.pc = 0x0045A520u; return; } if (c.pc != 0x0045A568u) [[unlikely]] return; }
L_0045A568:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0045A56C:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0045A580; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A57Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D6(c, 309u, depth + 1u); else { c.pc = 0x0045A520u; return; } if (c.pc != 0x0045A57Cu) [[unlikely]] return; }
L_0045A57C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0045A580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A588u);  if (depth < kMaxDepth) unit_00D6(c, 349u, depth + 1u); else { c.pc = 0x0045A830u; return; } if (c.pc != 0x0045A588u) [[unlikely]] return; }
L_0045A588:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A594u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00D6(c, 347u, depth + 1u); else { c.pc = 0x0045A7E0u; return; } if (c.pc != 0x0045A594u) [[unlikely]] return; }
L_0045A594:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A59Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D6(c, 346u, depth + 1u); else { c.pc = 0x0045A7D0u; return; } if (c.pc != 0x0045A59Cu) [[unlikely]] return; }
L_0045A59C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A5ACu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00D6(c, 344u, depth + 1u); else { c.pc = 0x0045A7B0u; return; } if (c.pc != 0x0045A5ACu) [[unlikely]] return; }
L_0045A5AC:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_0045A5B0:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0045A614; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_0045A5D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A5CCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D6(c, 309u, depth + 1u); else { c.pc = 0x0045A520u; return; } if (c.pc != 0x0045A5CCu) [[unlikely]] return; }
L_0045A5CC:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0045A5D0:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0045A5E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A5E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D6(c, 309u, depth + 1u); else { c.pc = 0x0045A520u; return; } if (c.pc != 0x0045A5E0u) [[unlikely]] return; }
L_0045A5E0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0045A5E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A5ECu);  if (depth < kMaxDepth) unit_00D6(c, 349u, depth + 1u); else { c.pc = 0x0045A830u; return; } if (c.pc != 0x0045A5ECu) [[unlikely]] return; }
L_0045A5EC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A5F8u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00D6(c, 347u, depth + 1u); else { c.pc = 0x0045A7E0u; return; } if (c.pc != 0x0045A5F8u) [[unlikely]] return; }
L_0045A5F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A600u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D6(c, 346u, depth + 1u); else { c.pc = 0x0045A7D0u; return; } if (c.pc != 0x0045A600u) [[unlikely]] return; }
L_0045A600:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A610u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00D6(c, 344u, depth + 1u); else { c.pc = 0x0045A7B0u; return; } if (c.pc != 0x0045A610u) [[unlikely]] return; }
L_0045A610:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0045A614:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A61Cu);  if (depth < kMaxDepth) unit_00D6(c, 349u, depth + 1u); else { c.pc = 0x0045A830u; return; } if (c.pc != 0x0045A61Cu) [[unlikely]] return; }
L_0045A61C:
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A628u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00D6(c, 302u, depth + 1u); else { c.pc = 0x0045A400u; return; } if (c.pc != 0x0045A628u) [[unlikely]] return; }
L_0045A628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A630u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D6(c, 346u, depth + 1u); else { c.pc = 0x0045A7D0u; return; } if (c.pc != 0x0045A630u) [[unlikely]] return; }
L_0045A630:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[19], ld32((c.r[16].w[0] + 4u)));  goto L_0045A644; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A640u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0045A640u) [[unlikely]] return; }
L_0045A640:
    set32(c.r[19], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_0045A644:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[3], c.r[16].w[0] + 12u);  goto L_0045A748; }
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0] + 4u)));  goto L_0045A6B4; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_0045A670; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A66Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D6(c, 309u, depth + 1u); else { c.pc = 0x0045A520u; return; } if (c.pc != 0x0045A66Cu) [[unlikely]] return; }
L_0045A66C:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0045A670:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0045A684; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A680u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D6(c, 309u, depth + 1u); else { c.pc = 0x0045A520u; return; } if (c.pc != 0x0045A680u) [[unlikely]] return; }
L_0045A680:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0045A684:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A68Cu);  if (depth < kMaxDepth) unit_00D6(c, 349u, depth + 1u); else { c.pc = 0x0045A830u; return; } if (c.pc != 0x0045A68Cu) [[unlikely]] return; }
L_0045A68C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A698u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00D6(c, 347u, depth + 1u); else { c.pc = 0x0045A7E0u; return; } if (c.pc != 0x0045A698u) [[unlikely]] return; }
L_0045A698:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A6A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D6(c, 346u, depth + 1u); else { c.pc = 0x0045A7D0u; return; } if (c.pc != 0x0045A6A0u) [[unlikely]] return; }
L_0045A6A0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A6B0u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00D6(c, 344u, depth + 1u); else { c.pc = 0x0045A7B0u; return; } if (c.pc != 0x0045A6B0u) [[unlikely]] return; }
L_0045A6B0:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_0045A6B4:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0045A718; }
    set32(c.r[5], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 4u)));  goto L_0045A6D4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A6D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D6(c, 309u, depth + 1u); else { c.pc = 0x0045A520u; return; } if (c.pc != 0x0045A6D0u) [[unlikely]] return; }
L_0045A6D0:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_0045A6D4:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0045A6E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A6E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D6(c, 309u, depth + 1u); else { c.pc = 0x0045A520u; return; } if (c.pc != 0x0045A6E4u) [[unlikely]] return; }
L_0045A6E4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0045A6E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A6F0u);  if (depth < kMaxDepth) unit_00D6(c, 349u, depth + 1u); else { c.pc = 0x0045A830u; return; } if (c.pc != 0x0045A6F0u) [[unlikely]] return; }
L_0045A6F0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A6FCu); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_00D6(c, 347u, depth + 1u); else { c.pc = 0x0045A7E0u; return; } if (c.pc != 0x0045A6FCu) [[unlikely]] return; }
L_0045A6FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A704u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D6(c, 346u, depth + 1u); else { c.pc = 0x0045A7D0u; return; } if (c.pc != 0x0045A704u) [[unlikely]] return; }
L_0045A704:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A714u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_00D6(c, 344u, depth + 1u); else { c.pc = 0x0045A7B0u; return; } if (c.pc != 0x0045A714u) [[unlikely]] return; }
L_0045A714:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0045A718:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A720u);  if (depth < kMaxDepth) unit_00D6(c, 349u, depth + 1u); else { c.pc = 0x0045A830u; return; } if (c.pc != 0x0045A720u) [[unlikely]] return; }
L_0045A720:
    set32(c.r[4], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A72Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00D6(c, 302u, depth + 1u); else { c.pc = 0x0045A400u; return; } if (c.pc != 0x0045A72Cu) [[unlikely]] return; }
L_0045A72C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A734u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D6(c, 346u, depth + 1u); else { c.pc = 0x0045A7D0u; return; } if (c.pc != 0x0045A734u) [[unlikely]] return; }
L_0045A734:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0045A744; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A744u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0045A744u) [[unlikely]] return; }
L_0045A744:
    set32(c.r[3], c.r[16].w[0] + 12u);
    c.budget -= 1;
L_0045A748:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0045A784; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0045A784; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0045A784; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0045A784; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0045A784; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A784u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0045A784u) [[unlikely]] return; }
L_0045A784:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  goto L_0045A798; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A794u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0045A794u) [[unlikely]] return; }
L_0045A794:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0045A798:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0045A7B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0045A7C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A7C4u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0045A7C4u) [[unlikely]] return; }
L_0045A7C4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0045A7D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[4].w[0] + 8u);  c.pc = t; return; }
L_0045A7E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0045A820; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0]));  goto L_0045A824; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0045A820; } }
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0045A820; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0045A820; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A820u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0045A820u) [[unlikely]] return; }
L_0045A820:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0045A824:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0045A830:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0045A840:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[17], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0045A878; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A870u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 13u, depth + 1u); else { c.pc = 0x00114160u; return; } if (c.pc != 0x0045A870u) [[unlikely]] return; }
L_0045A870:
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_0045A878:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A884u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 45u, depth + 1u); else { c.pc = 0x001188B0u; return; } if (c.pc != 0x0045A884u) [[unlikely]] return; }
L_0045A884:
    set32(c.r[3], c.r[17].w[0] + 12u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0045A8C4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0045A8C4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0045A8C4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0045A8C4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0045A8C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A8C4u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0045A8C4u) [[unlikely]] return; }
L_0045A8C4:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_0045A8D8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A8D4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0045A8D4u) [[unlikely]] return; }
L_0045A8D4:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_0045A8D8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0045A900:
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
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 20u), c.r[3].w[0]);  c.pc = t; return; }
L_0045A930:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(-1ll) ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[1].d[0] != 0ull; c.r[18].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0045A994; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A98Cu); set32(c.r[5], c.r[5].w[0] + 31323u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x0045A98Cu) [[unlikely]] return; }
L_0045A98C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A994u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x0045A994u) [[unlikely]] return; }
L_0045A994:
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A9A0u); set32(c.r[4], 0u + 36u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x0045A9A0u) [[unlikely]] return; }
L_0045A9A0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[17].w[0] + 12u);
    c.budget -= 4;
    if (c.r[16].d[0] == 0ull) { st32((c.r[17].w[0] + 4u), 0u);  goto L_0045A9D0; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045A9BCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0045A9BCu) [[unlikely]] return; }
L_0045A9BC:
    c.f[1] = ld32((c.r[18].w[0] + 16u));
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    st32((c.r[16].w[0] + 16u), c.f[1]);
    st32((c.r[16].w[0] + 20u), c.f[0]);
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 5;
L_0045A9D0:
    st32((c.r[17].w[0]), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0045A9F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0]), c.r[17].w[0]);  if (t) { goto L_0045A9F4; } }
L_0045A9F0:
    st32((c.r[20].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 1;
L_0045A9F4:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045AA0Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 69u, depth + 1u); else { c.pc = 0x00114770u; return; } if (c.pc != 0x0045AA0Cu) [[unlikely]] return; }
L_0045AA0C:
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0045AA1C; }
    st32((c.r[21].w[0] + 20u), c.r[17].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0045AA1C:
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
L_0045AA50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0045AAC0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 29312u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0045AAA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27696u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0045AAA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_0045AAA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045AAA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0045AAA8u) [[unlikely]] return; }
L_0045AAA8:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0045AAC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045AAC0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0045AAC0u) [[unlikely]] return; }
L_0045AAC0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0045AAC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0045AAE0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_0045AB08; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 5u);  goto L_0045AB00; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_0045AB00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0045AB0C; } }
L_0045AB08:
    set32(c.r[2], c.r[2].w[0] + 31600u);
    c.budget -= 1;
L_0045AB0C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0045AB20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 31840u);  c.pc = t; return; }
L_0045AB30:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 144u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[6], c.r[6].w[0] + 31936u);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[7], 0u + 10u);
    c.r[8].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045AB6Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 430u, depth + 1u); else { c.pc = 0x00133EC0u; return; } if (c.pc != 0x0045AB6Cu) [[unlikely]] return; }
L_0045AB6C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045AB7Cu); set32(c.r[5], c.r[5].w[0] + 31938u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0045AB7Cu) [[unlikely]] return; }
L_0045AB7C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 144u);  goto L_0045ABB8; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045AB94u); set32(c.r[5], c.r[5].w[0] + 31943u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0045AB94u) [[unlikely]] return; }
L_0045AB94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0045ABB4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045ABACu); set32(c.r[5], c.r[5].w[0] + 31948u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0045ABACu) [[unlikely]] return; }
L_0045ABAC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_0045ABC8; }
L_0045ABB4:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 1;
L_0045ABB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045ABC0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x0045ABC0u) [[unlikely]] return; }
L_0045ABC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0045AD38; } }
L_0045ABC8:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045ABD4u); set32(c.r[5], c.r[5].w[0] + 31938u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0045ABD4u) [[unlikely]] return; }
L_0045ABD4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045ABE0u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x0045ABE0u) [[unlikely]] return; }
L_0045ABE0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045ABF0u); set32(c.r[5], c.r[5].w[0] + 31943u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0045ABF0u) [[unlikely]] return; }
L_0045ABF0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045ABFCu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x0045ABFCu) [[unlikely]] return; }
L_0045ABFC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045AC0Cu); set32(c.r[5], c.r[5].w[0] + 31948u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0045AC0Cu) [[unlikely]] return; }
L_0045AC0C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045AC18u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x0045AC18u) [[unlikely]] return; }
L_0045AC18:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045AC28u); set32(c.r[5], c.r[5].w[0] + 31952u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0045AC28u) [[unlikely]] return; }
L_0045AC28:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[18].d[0] = 0ull + 0ull;  goto L_0045AC68; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045AC40u); set32(c.r[5], c.r[29].w[0] + 207u);  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x0045AC40u) [[unlikely]] return; }
L_0045AC40:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[18].d[0] = ld8((c.r[29].w[0] + 207u));  goto L_0045AC68; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0045AC64; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 207u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045AC64u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x0045AC64u) [[unlikely]] return; }
L_0045AC64:
    c.r[18].d[0] = ld8((c.r[29].w[0] + 207u));
    c.budget -= 1;
L_0045AC68:
    set32(c.r[4], 0u + 76u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045AC74u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0045AC74u) [[unlikely]] return; }
L_0045AC74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0045AD04; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[29].w[0] + 97u);  goto L_0045AC90; }
    set32(c.r[17], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 1;
L_0045AC90:
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[29].w[0] + 113u);  goto L_0045ACA4; }
    set32(c.r[16], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 1;
L_0045ACA4:
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 129u);  goto L_0045ACB8; }
    set32(c.r[6], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 1;
L_0045ACB8:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045ACC8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 74u, depth + 1u); else { c.pc = 0x00138F30u; return; } if (c.pc != 0x0045ACC8u) [[unlikely]] return; }
L_0045ACC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 27888u);
    set32(c.r[4], c.r[19].w[0] + 36u);
    st32((c.r[19].w[0] + 32u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 29344u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 29416u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045ACF8u); st32((c.r[19].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0045ACF8u) [[unlikely]] return; }
L_0045ACF8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045AD04u); set32(c.r[4], c.r[19].w[0] + 52u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0045AD04u) [[unlikely]] return; }
L_0045AD04:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045AD10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0045AD10u) [[unlikely]] return; }
L_0045AD10:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045AD1Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0045AD1Cu) [[unlikely]] return; }
L_0045AD1C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045AD28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0045AD28u) [[unlikely]] return; }
L_0045AD28:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045AD34u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x0045AD34u) [[unlikely]] return; }
L_0045AD34:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0045AD38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0045AD60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0045AD88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 44u)));  if (t) { goto L_0045AD8C; } }
L_0045AD88:
    set32(c.r[5], c.r[17].w[0] + 37u);
    c.budget -= 1;
L_0045AD8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045AD94u); set32(c.r[4], ld32((c.r[28].w[0] - 24560u)));  if (depth < kMaxDepth) unit_00D6(c, 271u, depth + 1u); else { c.pc = 0x0045A060u; return; } if (c.pc != 0x0045AD94u) [[unlikely]] return; }
L_0045AD94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0045ADB8; } }
L_0045AD9C:
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045ADB4u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0045ADB4u) [[unlikely]] return; }
L_0045ADB4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0045ADB8:
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[16].w[0] << 1);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0045AD9Cu | kUnwind; return; } goto L_0045AD9C; }
    set32(c.r[4], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0045ADE0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045ADDCu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0045ADDCu) [[unlikely]] return; }
L_0045ADDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0045ADE0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0045ADF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045AE14u); set32(c.r[5], c.r[17].w[0] + 52u);  if (depth < kMaxDepth) unit_000A(c, 393u, depth + 1u); else { c.pc = 0x0012B280u; return; } if (c.pc != 0x0045AE14u) [[unlikely]] return; }
L_0045AE14:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[7].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0045AE20; } }
    set32(c.r[7], c.r[17].w[0] + 32u);
    c.budget -= 1;
L_0045AE20:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[6].w[0] + 31360u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045AE38u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 231u, depth + 1u); else { c.pc = 0x00102E60u; return; } if (c.pc != 0x0045AE38u) [[unlikely]] return; }
L_0045AE38:
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[17].w[0] + 37u);  goto L_0045AE4C; }
    set32(c.r[5], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 1;
L_0045AE4C:
    set32(c.r[6], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045AE5Cu); set32(c.r[4], ld32((c.r[28].w[0] - 24560u)));  if (depth < kMaxDepth) unit_00D6(c, 276u, depth + 1u); else { c.pc = 0x0045A0D0u; return; } if (c.pc != 0x0045AE5Cu) [[unlikely]] return; }
L_0045AE5C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045AE68u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000A(c, 383u, depth + 1u); else { c.pc = 0x0012B160u; return; } if (c.pc != 0x0045AE68u) [[unlikely]] return; }
L_0045AE68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0045AE80:
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[3], 0u + 261u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0045AEA4; } }
    set32(c.r[3], 0u + 12u);
    st32((c.r[4].w[0] + 68u), c.r[6].w[0]);
    mmi::divu(c, 0, c.r[7].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[4].w[0] + 72u), c.r[3].w[0]);
    c.budget -= 5;
L_0045AEA4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0045AEB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[4].w[0] + 31872u);
    set32(c.r[5], c.r[5].w[0] + 31964u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045AEDCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0007(c, 125u, depth + 1u); else { c.pc = 0x0011CFB0u; return; } if (c.pc != 0x0045AEDCu) [[unlikely]] return; }
L_0045AEDC:
    set32(c.r[17], ld32((c.r[28].w[0] - 29076u)));
    set32(c.r[4], 0u + 24u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045AEECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x0045AEECu) [[unlikely]] return; }
L_0045AEEC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 808u)));  goto L_0045AF2C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045AF0Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0045AF0Cu) [[unlikely]] return; }
L_0045AF0C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 27696u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 29312u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 808u)));
    c.budget -= 8;
L_0045AF2C:
    set32(c.r[3], 0u + 39u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0045AF8C; }
    set32(c.r[2], c.r[4].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 31872u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045AF58u); set32(c.r[4], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x0045AF58u) [[unlikely]] return; }
L_0045AF58:
    set32(c.r[3], ld32((c.r[17].w[0] + 808u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 24u), c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 808u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045AF7Cu); set32(c.r[4], c.r[17].w[0] + 812u);  if (depth < kMaxDepth) unit_0006(c, 256u, depth + 1u); else { c.pc = 0x00119F20u; return; } if (c.pc != 0x0045AF7Cu) [[unlikely]] return; }
L_0045AF7C:
    set32(c.r[3], ld32((c.r[17].w[0] + 808u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 808u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 4;
L_0045AF8C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0045AFA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0045B034; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 29344u);
    set32(c.r[2], c.r[2].w[0] + 29416u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 52u);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[16].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_0045AFE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045AFE4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0045AFE4u) [[unlikely]] return; }
L_0045AFE4:
    set32(c.r[4], c.r[16].w[0] + 36u);
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[16].w[0] + 32u);  goto L_0045AFFC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045AFF8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0045AFF8u) [[unlikely]] return; }
L_0045AFF8:
    set32(c.r[2], c.r[16].w[0] + 32u);
    c.budget -= 1;
L_0045AFFC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0045B014; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27888u);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_0045B014:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B01Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 69u, depth + 1u); else { c.pc = 0x00138E80u; return; } if (c.pc != 0x0045B01Cu) [[unlikely]] return; }
L_0045B01C:
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0045B038; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B034u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0045B034u) [[unlikely]] return; }
L_0045B034:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0045B038:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0045B050:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29980u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0045B06C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0045B07C; } }
L_0045B06C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B074u);  if (depth < kMaxDepth) unit_000E(c, 80u, depth + 1u); else { c.pc = 0x00138FF0u; return; } if (c.pc != 0x0045B074u) [[unlikely]] return; }
L_0045B074:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0045B07C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0045B090:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B0B4u); set32(c.r[4], c.r[4].w[0] + 31872u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0045B0B4u) [[unlikely]] return; }
L_0045B0B4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0045B0C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0045B0D4; } }
L_0045B0C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B0CCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 82u, depth + 1u); else { c.pc = 0x00139030u; return; } if (c.pc != 0x0045B0CCu) [[unlikely]] return; }
L_0045B0CC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0045B0D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0045B0F0:
    set32(c.r[2], ld32((c.r[28].w[0] - 31208u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0045B100:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 29980u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0045B11C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0045B124; } }
L_0045B11C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B124u);  if (depth < kMaxDepth) unit_000E(c, 89u, depth + 1u); else { c.pc = 0x001390A0u; return; } if (c.pc != 0x0045B124u) [[unlikely]] return; }
L_0045B124:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0045B130:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29980u)));  c.pc = t; return; }
L_0045B140:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 31904u);  c.pc = t; return; }
L_0045B150:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0045AE80u | kUnwind; return; } goto L_0045AE80; }
L_0045B160:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0045AFA0u | kUnwind; return; } goto L_0045AFA0; }
L_0045B170:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0045B1C0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 29440u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0045B1A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 23968u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0045B1A4:
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0045B1BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B1BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x0045B1BCu) [[unlikely]] return; }
L_0045B1BC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0045B1C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0045B1D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 29976u)));  c.pc = t; return; }
L_0045B1E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_0045B1F0:
    set32(c.r[29], c.r[29].w[0] - 320u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B234u); st32((c.r[29].w[0] + 316u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0045B234u) [[unlikely]] return; }
L_0045B234:
    set32(c.r[4], c.r[29].w[0] + 224u);
    set32(c.r[5], c.r[29].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B244u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 33u, depth + 1u); else { c.pc = 0x00140350u; return; } if (c.pc != 0x0045B244u) [[unlikely]] return; }
L_0045B244:
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[29].w[0] + 224u));  goto L_0045B25C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 228u)));  if (t) { goto L_0045B264; } }
L_0045B25C:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = c.r[2].d[0] >> 57;
    c.budget -= 2;
L_0045B264:
    c.r[20].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[29].w[0] + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B274u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0045B274u) [[unlikely]] return; }
L_0045B274:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B280u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0045B280u) [[unlikely]] return; }
L_0045B280:
    c.budget -= 2;
    if (c.r[20].d[0] == 0ull) { set32(c.r[20], ld32((c.r[16].w[0])));  goto L_0045B2E0; }
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B294u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0045B294u) [[unlikely]] return; }
L_0045B294:
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[29].w[0] + 208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B2A4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0010(c, 33u, depth + 1u); else { c.pc = 0x00140350u; return; } if (c.pc != 0x0045B2A4u) [[unlikely]] return; }
L_0045B2A4:
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 193u);  goto L_0045B2B8; }
    set32(c.r[4], ld32((c.r[29].w[0] + 200u)));
    c.budget -= 1;
L_0045B2B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B2C0u); set32(c.r[5], c.r[29].w[0] + 316u);  if (depth < kMaxDepth) unit_000F(c, 320u, depth + 1u); else { c.pc = 0x0013F170u; return; } if (c.pc != 0x0045B2C0u) [[unlikely]] return; }
L_0045B2C0:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B2CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0045B2CCu) [[unlikely]] return; }
L_0045B2CC:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B2D8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0045B2D8u) [[unlikely]] return; }
L_0045B2D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0045B430; } }
L_0045B2E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B2E8u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_0013(c, 344u, depth + 1u); else { c.pc = 0x0014EB90u; return; } if (c.pc != 0x0045B2E8u) [[unlikely]] return; }
L_0045B2E8:
    set32(c.r[2], c.r[20].w[0] >> 16);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_0045B304; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0045B31C; } }
L_0045B304:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_0045B31C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[2], c.r[20].w[0] >> 8);
    c.f[0] = c.r[3].w[0];
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[29].w[0] + 128u), c.f[0]);  if (t) { goto L_0045B34C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0045B368; } }
L_0045B34C:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_0045B368:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[2].d[0] = c.r[20].d[0] & 255ull;
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[29].w[0] + 132u), c.f[0]);  if (t) { goto L_0045B398; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0045B3B4; } }
L_0045B398:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_0045B3B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[2], c.r[20].w[0] >> 24);
    c.f[0] = c.r[3].w[0];
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[29].w[0] + 136u), c.f[0]);  if (t) { goto L_0045B3E4; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0045B400; } }
L_0045B3E4:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_0045B400:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 128u);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B424u); st32((c.r[29].w[0] + 140u), c.f[0]);  if (depth < kMaxDepth) unit_0013(c, 342u, depth + 1u); else { c.pc = 0x0014EB30u; return; } if (c.pc != 0x0045B424u) [[unlikely]] return; }
L_0045B424:
    c.f[0] = ld32((c.r[29].w[0] + 188u));
    st32((c.r[29].w[0] + 316u), c.f[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
L_0045B430:
    st8((c.r[21].w[0] + 56u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[20], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B440u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_0013(c, 344u, depth + 1u); else { c.pc = 0x0014EB90u; return; } if (c.pc != 0x0045B440u) [[unlikely]] return; }
L_0045B440:
    set32(c.r[2], c.r[20].w[0] >> 16);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 4;
    if (c.r[2].sd[0] < 0) { set32(c.r[3], c.r[2].w[0] >> 1);  goto L_0045B45C; }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0045B474; } }
L_0045B45C:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_0045B474:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[2], c.r[20].w[0] >> 8);
    c.f[0] = c.r[3].w[0];
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[29].w[0] + 112u), c.f[0]);  if (t) { goto L_0045B4A4; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0045B4C0; } }
L_0045B4A4:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_0045B4C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.r[2].d[0] = c.r[20].d[0] & 255ull;
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[29].w[0] + 116u), c.f[0]);  if (t) { goto L_0045B4F0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0045B50C; } }
L_0045B4F0:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_0045B50C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[2], c.r[20].w[0] >> 24);
    c.f[0] = c.r[3].w[0];
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[29].w[0] + 120u), c.f[0]);  if (t) { goto L_0045B53C; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0045B558; } }
L_0045B53C:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_0045B558:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], c.r[29].w[0] + 112u);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B57Cu); st32((c.r[29].w[0] + 124u), c.f[0]);  if (depth < kMaxDepth) unit_0013(c, 342u, depth + 1u); else { c.pc = 0x0014EB30u; return; } if (c.pc != 0x0045B57Cu) [[unlikely]] return; }
L_0045B57C:
    c.f[0] = ld32((c.r[29].w[0] + 316u));
    set32(c.r[4], c.r[29].w[0] + 268u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B58Cu); st32((c.r[29].w[0] + 300u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0045B58Cu) [[unlikely]] return; }
L_0045B58C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 268u);
    set32(c.r[5], c.r[5].w[0] + 19008u);
    st32((c.r[29].w[0] + 256u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B5A4u); st32((c.r[29].w[0] + 264u), 0u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x0045B5A4u) [[unlikely]] return; }
L_0045B5A4:
    st32((c.r[29].w[0] + 260u), 0u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[29].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 300u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.f[2] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 15;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[29].w[0] + 264u), c.r[3].w[0]);  if (t) { goto L_0045B5F0; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[29].w[0] + 288u));  if (t) { goto L_0045B60C; } }
L_0045B5F0:
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[1] = ld32((c.r[29].w[0] + 288u));
    c.budget -= 7;
L_0045B60C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[3].w[0] << 24);  if (t) { goto L_0045B640; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[29].w[0] + 292u));  if (t) { goto L_0045B65C; } }
L_0045B640:
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[1] = ld32((c.r[29].w[0] + 292u));
    c.budget -= 7;
L_0045B65C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[3], c.r[3].w[0] << 16);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];  if (t) { goto L_0045B694; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[29].w[0] + 296u));  if (t) { goto L_0045B6B0; } }
L_0045B694:
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[1] = ld32((c.r[29].w[0] + 296u));
    c.budget -= 7;
L_0045B6B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[3].d[0] | c.r[4].d[0];  if (t) { goto L_0045B6E8; } }
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[3].d[0] | c.r[4].d[0];  if (t) { goto L_0045B704; } }
L_0045B6E8:
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 7;
L_0045B704:
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[19].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B718u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045B718u) [[unlikely]] return; }
L_0045B718:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 268u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B730u); set32(c.r[5], c.r[5].w[0] + 32054u);  if (depth < kMaxDepth) unit_000F(c, 231u, depth + 1u); else { c.pc = 0x0013E4F0u; return; } if (c.pc != 0x0045B730u) [[unlikely]] return; }
L_0045B730:
    set32(c.r[6], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[4], c.r[29].w[0] + 156u);
    set32(c.r[3], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[5], c.r[29].w[0] + 268u);
    set32(c.r[2], ld32((c.r[29].w[0] + 264u)));
    st32((c.r[29].w[0] + 260u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 144u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 148u), c.r[6].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B758u); st32((c.r[29].w[0] + 152u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x0045B758u) [[unlikely]] return; }
L_0045B758:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 284u));
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B768u); st8((c.r[29].w[0] + 172u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0013(c, 341u, depth + 1u); else { c.pc = 0x0014EB10u; return; } if (c.pc != 0x0045B768u) [[unlikely]] return; }
L_0045B768:
    set32(c.r[4], c.r[29].w[0] + 156u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B774u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0045B774u) [[unlikely]] return; }
L_0045B774:
    set32(c.r[4], c.r[29].w[0] + 268u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B780u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x0045B780u) [[unlikely]] return; }
L_0045B780:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_0045B7B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 32192u);  c.pc = t; return; }
L_0045B7C0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[4].w[0] + 200u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0045B8EC; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 13u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 4u)));  goto L_0045B804; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_0045B8F0; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 1;
L_0045B804:
    c.f[20] = ld32((c.r[28].w[0] - 31728u));
    set32(c.r[17], c.r[19].w[0] + 180u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 152u)));
    set32(c.r[16], ld32((c.r[3].w[0] + 320u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; mmi::pminw(c.r[20], c.r[4], c.r[3]);  if (t) { goto L_0045B874; } }
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_0045B82C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B834u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B2(c, 346u, depth + 1u); else { c.pc = 0x003CBD80u; return; } if (c.pc != 0x0045B834u) [[unlikely]] return; }
L_0045B834:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B83Cu); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00EE(c, 275u, depth + 1u); else { c.pc = 0x004BA5A0u; return; } if (c.pc != 0x0045B83Cu) [[unlikely]] return; }
L_0045B83C:
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[17].w[0]));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    c.f[3] = fp::sub(c.f[3], c.f[2]);
    c.f[2] = fp::sub(c.f[1], c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[3], c.f[3]);
    c.facc = fp::add(c.facc, fp::mul(c.f[2], c.f[2]));
    c.f[0] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[20] = fp::min(c.f[20], c.f[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 14;
L_0045B874:
    c.r[3].d[0] = c.r[18].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[16].w[0] + 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0045B82Cu | kUnwind; return; } goto L_0045B82C; }
    set32(c.r[3], 0u + 22500u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0045B8EC; } }
    c.r[4].d[0] = ld8((c.r[19].w[0] + 204u));
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[19].w[0] + 204u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[19].w[0] + 196u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B8C4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C6(c, 293u, depth + 1u); else { c.pc = 0x0041A090u; return; } if (c.pc != 0x0045B8C4u) [[unlikely]] return; }
L_0045B8C4:
    set32(c.r[4], ld32((c.r[19].w[0] + 200u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 200u)));  goto L_0045B8DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B8D8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00D7(c, 156u, depth + 1u); else { c.pc = 0x0045DBF0u; return; } if (c.pc != 0x0045B8D8u) [[unlikely]] return; }
L_0045B8D8:
    set32(c.r[4], ld32((c.r[19].w[0] + 200u)));
    c.budget -= 1;
L_0045B8DC:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B8ECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045B8ECu) [[unlikely]] return; }
L_0045B8EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0045B8F0:
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0045B910:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u - 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = ld8((c.r[4].w[0] + 204u));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = c.r[16].d[0] & 1ull;
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st8((c.r[4].w[0] + 204u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 196u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B94Cu); set32(c.r[4], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_00C6(c, 293u, depth + 1u); else { c.pc = 0x0041A090u; return; } if (c.pc != 0x0045B94Cu) [[unlikely]] return; }
L_0045B94C:
    set32(c.r[4], ld32((c.r[17].w[0] + 200u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0045B964; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B960u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D7(c, 156u, depth + 1u); else { c.pc = 0x0045DBF0u; return; } if (c.pc != 0x0045B960u) [[unlikely]] return; }
L_0045B960:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0045B964:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0045B980:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 196u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[16].w[0] + 204u));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B9A4u); c.r[5].d[0] = c.r[2].d[0] & 1ull;  if (depth < kMaxDepth) unit_00C6(c, 293u, depth + 1u); else { c.pc = 0x0041A090u; return; } if (c.pc != 0x0045B9A4u) [[unlikely]] return; }
L_0045B9A4:
    set32(c.r[4], ld32((c.r[16].w[0] + 200u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0045B9C4; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 48u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B9C0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0045B9C0u) [[unlikely]] return; }
L_0045B9C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0045B9C4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0045B9D0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045B9F0u); set32(c.r[4], ld32((c.r[4].w[0] + 196u)));  if (depth < kMaxDepth) unit_00D8(c, 135u, depth + 1u); else { c.pc = 0x00461590u; return; } if (c.pc != 0x0045B9F0u) [[unlikely]] return; }
L_0045B9F0:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], 0u + 6u);
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 5u);  goto L_0045BA14; }
    set32(c.r[2], ld32((c.r[16].w[0] + 196u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045BA0Cu); set32(c.r[4], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_00C6(c, 292u, depth + 1u); else { c.pc = 0x0041A080u; return; } if (c.pc != 0x0045BA0Cu) [[unlikely]] return; }
L_0045BA0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0045BB2C; } }
L_0045BA14:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0045BB28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045BA24u); set32(c.r[4], ld32((c.r[16].w[0] + 196u)));  if (depth < kMaxDepth) unit_00D7(c, 43u, depth + 1u); else { c.pc = 0x0045C820u; return; } if (c.pc != 0x0045BA24u) [[unlikely]] return; }
L_0045BA24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045BA2Cu); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x0045BA2Cu) [[unlikely]] return; }
L_0045BA2C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[17].d[0] = c.r[2].d[0] & 1ull;  if (t) { goto L_0045BA40; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0045BA40; } }
    set32(c.r[17], c.r[17].w[0] - 2u);
    c.budget -= 1;
L_0045BA40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045BA48u);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x0045BA48u) [[unlikely]] return; }
L_0045BA48:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[16].d[0] = c.r[2].d[0] & 1ull;  if (t) { goto L_0045BA5C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0045BA5C; } }
    set32(c.r[16], c.r[16].w[0] - 2u);
    c.budget -= 1;
L_0045BA5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045BA64u);  if (depth < kMaxDepth) unit_00AE(c, 85u, depth + 1u); else { c.pc = 0x003B8D50u; return; } if (c.pc != 0x0045BA64u) [[unlikely]] return; }
L_0045BA64:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[5].d[0] = c.r[2].d[0] & 7ull;  if (t) { goto L_0045BA78; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_0045BA7C; }
    set32(c.r[5], c.r[5].w[0] - 8u);
    c.budget -= 1;
L_0045BA78:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0045BA7C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], c.r[3].w[0] - 15584u);
    st32((c.r[29].w[0] + 64u), c.r[3].w[0]);
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[4].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[0] = c.r[16].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 76u), c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 30;
    { const bool t = c.r[17].d[0] != 0ull; st32((c.r[29].w[0] + 80u), c.f[0]);  if (t) { goto L_0045BB00; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[6].w[0] + 32306u);  if (t) { goto L_0045BB08; } }
L_0045BB00:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] + 32321u);
    c.budget -= 2;
L_0045BB08:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 32294u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045BB1Cu); set32(c.r[7], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_00D8(c, 71u, depth + 1u); else { c.pc = 0x00460C00u; return; } if (c.pc != 0x0045BB1Cu) [[unlikely]] return; }
L_0045BB1C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 15584u);
    st32((c.r[29].w[0] + 64u), c.r[3].w[0]);
    c.budget -= 3;
L_0045BB28:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0045BB2C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0045BB40:
    set32(c.r[29], c.r[29].w[0] - 640u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 368u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 108u), c.f[31]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 104u), c.f[30]);
    set32(c.r[4], c.r[16].w[0] + 24u);
    st32((c.r[29].w[0] + 100u), c.f[29]);
    st32((c.r[29].w[0] + 96u), c.f[28]);
    st32((c.r[29].w[0] + 92u), c.f[27]);
    st32((c.r[29].w[0] + 88u), c.f[26]);
    st32((c.r[29].w[0] + 84u), c.f[25]);
    st32((c.r[29].w[0] + 80u), c.f[24]);
    st32((c.r[29].w[0] + 76u), c.f[23]);
    st32((c.r[29].w[0] + 72u), c.f[22]);
    st32((c.r[29].w[0] + 68u), c.f[21]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045BB90u); st32((c.r[29].w[0] + 64u), c.f[20]);  if (depth < kMaxDepth) unit_00D8(c, 191u, depth + 1u); else { c.pc = 0x00461FA0u; return; } if (c.pc != 0x0045BB90u) [[unlikely]] return; }
L_0045BB90:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));  [[clang::musttail]] return unit_00D7(c, 5u, depth); }
    c.f[20] = ld32((c.r[16].w[0] + 56u));
    set32(c.r[17], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045BBA8u); set32(c.r[4], c.r[16].w[0] + 24u);  if (depth < kMaxDepth) unit_00D8(c, 194u, depth + 1u); else { c.pc = 0x00462030u; return; } if (c.pc != 0x0045BBA8u) [[unlikely]] return; }
L_0045BBA8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[6], c.r[29].w[0] + 636u);
    set32(c.r[7], c.r[29].w[0] + 632u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045BBC4u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_00D9(c, 113u, depth + 1u); else { c.pc = 0x00465120u; return; } if (c.pc != 0x0045BBC4u) [[unlikely]] return; }
L_0045BBC4:
    set32(c.r[3], ld32((c.r[29].w[0] + 632u)));
    c.f[26] = 0u;
    set32(c.r[2], ld32((c.r[29].w[0] + 636u)));
    c.f[0] = ld32((c.r[28].w[0] - 32636u));
    c.f[3] = ld32((c.r[3].w[0] + 4u));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = fp::sub(c.f[2], c.f[3]);
    c.f[1] = fp::sub(c.f[1], c.f[26]);
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[4], ld32((c.r[2].w[0] + 8u)));  goto L_0045BC08; }
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    c.f[0] = fp::sub(c.f[3], c.f[2]);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_div(c, 26u, c.f[1], c.f[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 5;
L_0045BC08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045BC10u); set32(c.r[5], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_00DB(c, 139u, depth + 1u); else { c.pc = 0x0046E280u; return; } if (c.pc != 0x0045BC10u) [[unlikely]] return; }
L_0045BC10:
    set32(c.r[3], ld32((c.r[29].w[0] + 636u)));
    c.f[24] = ld32((c.r[2].w[0] + 4u));
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    c.f[25] = ld32((c.r[2].w[0] + 8u));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045BC2Cu); c.f[29] = ld32((c.r[2].w[0]));  if (depth < kMaxDepth) unit_00DB(c, 138u, depth + 1u); else { c.pc = 0x0046E260u; return; } if (c.pc != 0x0045BC2Cu) [[unlikely]] return; }
L_0045BC2C:
    set32(c.r[3], ld32((c.r[29].w[0] + 632u)));
    c.f[22] = ld32((c.r[2].w[0] + 4u));
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    c.f[23] = ld32((c.r[2].w[0] + 8u));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045BC48u); c.f[21] = ld32((c.r[2].w[0]));  if (depth < kMaxDepth) unit_00DB(c, 139u, depth + 1u); else { c.pc = 0x0046E280u; return; } if (c.pc != 0x0045BC48u) [[unlikely]] return; }
L_0045BC48:
    set32(c.r[3], ld32((c.r[29].w[0] + 632u)));
    c.f[28] = ld32((c.r[2].w[0] + 4u));
    set32(c.r[5], ld32((c.r[16].w[0] + 64u)));
    c.f[20] = ld32((c.r[2].w[0] + 8u));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045BC64u); c.f[27] = ld32((c.r[2].w[0]));  if (depth < kMaxDepth) unit_00DB(c, 138u, depth + 1u); else { c.pc = 0x0046E260u; return; } if (c.pc != 0x0045BC64u) [[unlikely]] return; }
L_0045BC64:
    c.f[0] = fp::sub(c.f[27], c.f[29]);
    c.f[0] = fp::mul(c.f[0], c.f[26]);
    c.f[3] = fp::add(c.f[29], c.f[0]);
    c.f[0] = fp::sub(c.f[28], c.f[24]);
    c.f[0] = fp::mul(c.f[0], c.f[26]);
    c.f[2] = fp::add(c.f[24], c.f[0]);
    c.f[0] = fp::sub(c.f[20], c.f[25]);
    c.f[0] = fp::mul(c.f[0], c.f[26]);
    c.f[1] = fp::add(c.f[25], c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[5] = ld32((c.r[2].w[0] + 4u));
    c.f[4] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = fp::sub(c.f[0], c.f[21]);
    c.f[0] = fp::mul(c.f[0], c.f[26]);
    st32((c.r[29].w[0] + 620u), c.f[2]);
    c.f[2] = fp::add(c.f[21], c.f[0]);
    c.f[0] = fp::sub(c.f[5], c.f[22]);
    c.f[0] = fp::mul(c.f[0], c.f[26]);
    st32((c.r[29].w[0] + 624u), c.f[1]);
    c.f[1] = fp::add(c.f[22], c.f[0]);
    c.f[0] = fp::sub(c.f[4], c.f[23]);
    c.f[0] = fp::mul(c.f[0], c.f[26]);
    c.f[0] = fp::add(c.f[23], c.f[0]);
    st32((c.r[29].w[0] + 616u), c.f[3]);
    st32((c.r[29].w[0] + 584u), c.f[2]);
    st32((c.r[29].w[0] + 588u), c.f[1]);
    st32((c.r[29].w[0] + 592u), c.f[0]);
    c.facc = fp::mul(c.f[2], c.f[2]);
    c.facc = fp::add(c.facc, fp::mul(c.f[1], c.f[1]));
    c.f[3] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));
    c.f[3] = fp::sqrt(c.f[3]);
    c.f[0] = ld32((c.r[28].w[0] - 31844u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 36;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[29].w[0] + 600u), 0u);  goto L_0045BD2C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 3u, c.f[0], c.f[3]);
    c.f[2] = ld32((c.r[29].w[0] + 592u));
    c.f[1] = ld32((c.r[29].w[0] + 588u));
    c.f[0] = ld32((c.r[29].w[0] + 584u));
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    st32((c.r[29].w[0] + 608u), c.f[2]);
    st32((c.r[29].w[0] + 604u), c.f[1]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 600u), c.f[0]);  if (t) { goto L_0045BD34; } }
L_0045BD2C:
    st32((c.r[29].w[0] + 604u), 0u);
    st32((c.r[29].w[0] + 608u), 0u);
    c.budget -= 2;
L_0045BD34:
    c.f[3] = ld32((c.r[29].w[0] + 616u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = ld32((c.r[29].w[0] + 620u));
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.f[4] = 0u;
    c.f[3] = fp::add(c.f[3], c.f[4]);
    c.f[2] = fp::add(c.f[2], c.f[4]);
    c.f[1] = ld32((c.r[29].w[0] + 624u));
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 568u), c.f[3]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 572u), c.f[2]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045BD70u); st32((c.r[29].w[0] + 576u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 317u, depth + 1u); else { c.pc = 0x00127590u; return; } if (c.pc != 0x0045BD70u) [[unlikely]] return; }
L_0045BD70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045BD78u); set32(c.r[4], c.r[29].w[0] + 552u);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x0045BD78u) [[unlikely]] return; }
L_0045BD78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045BD80u); set32(c.r[4], c.r[29].w[0] + 536u);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x0045BD80u) [[unlikely]] return; }
L_0045BD80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045BD88u); set32(c.r[4], c.r[29].w[0] + 520u);  if (depth < kMaxDepth) unit_0009(c, 332u, depth + 1u); else { c.pc = 0x001278D0u; return; } if (c.pc != 0x0045BD88u) [[unlikely]] return; }
L_0045BD88:
    set32(c.r[4], c.r[29].w[0] + 504u);
    set32(c.r[5], c.r[29].w[0] + 568u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045BD98u); set32(c.r[6], c.r[29].w[0] + 616u);  if (depth < kMaxDepth) unit_000A(c, 3u, depth + 1u); else { c.pc = 0x00128070u; return; } if (c.pc != 0x0045BD98u) [[unlikely]] return; }
L_0045BD98:
    set32(c.r[4], c.r[29].w[0] + 552u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045BDA4u); set32(c.r[5], c.r[29].w[0] + 504u);  if (depth < kMaxDepth) unit_0009(c, 363u, depth + 1u); else { c.pc = 0x00127FE0u; return; } if (c.pc != 0x0045BDA4u) [[unlikely]] return; }
L_0045BDA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045BDACu); set32(c.r[4], c.r[29].w[0] + 552u);  if (depth < kMaxDepth) unit_0013(c, 292u, depth + 1u); else { c.pc = 0x0014E450u; return; } if (c.pc != 0x0045BDACu) [[unlikely]] return; }
L_0045BDAC:
    c.f[20] = c.f[0];
    c.f[13] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045BDBCu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_000B(c, 307u, depth + 1u); else { c.pc = 0x0012ECC0u; return; } if (c.pc != 0x0045BDBCu) [[unlikely]] return; }
L_0045BDBC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_0045BDE4; }
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 552u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045BDDCu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0009(c, 362u, depth + 1u); else { c.pc = 0x00127FD0u; return; } if (c.pc != 0x0045BDDCu) [[unlikely]] return; }
L_0045BDDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 472u);  if (t) { goto L_0045BE08; } }
L_0045BDE4:
    set32(c.r[4], c.r[29].w[0] + 552u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[0], c.f[20]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045BE04u);  if (depth < kMaxDepth) unit_0013(c, 291u, depth + 1u); else { c.pc = 0x0014E420u; return; } if (c.pc != 0x0045BE04u) [[unlikely]] return; }
L_0045BE04:
    set32(c.r[4], c.r[29].w[0] + 472u);
    c.budget -= 1;
L_0045BE08:
    set32(c.r[5], c.r[29].w[0] + 600u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045BE14u); set32(c.r[6], c.r[29].w[0] + 552u);  if (depth < kMaxDepth) unit_0009(c, 361u, depth + 1u); else { c.pc = 0x00127F90u; return; } if (c.pc != 0x0045BE14u) [[unlikely]] return; }
L_0045BE14:
    set32(c.r[4], c.r[29].w[0] + 488u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045BE20u); set32(c.r[5], c.r[29].w[0] + 472u);  if (depth < kMaxDepth) unit_000A(c, 1u, depth + 1u); else { c.pc = 0x00128000u; return; } if (c.pc != 0x0045BE20u) [[unlikely]] return; }
L_0045BE20:
    set32(c.r[4], c.r[29].w[0] + 536u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045BE2Cu); set32(c.r[5], c.r[29].w[0] + 488u);  if (depth < kMaxDepth) unit_0009(c, 363u, depth + 1u); else { c.pc = 0x00127FE0u; return; } if (c.pc != 0x0045BE2Cu) [[unlikely]] return; }
L_0045BE2C:
    set32(c.r[4], c.r[29].w[0] + 440u);
    set32(c.r[5], c.r[29].w[0] + 552u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045BE3Cu); set32(c.r[6], c.r[29].w[0] + 536u);  if (depth < kMaxDepth) unit_0009(c, 361u, depth + 1u); else { c.pc = 0x00127F90u; return; } if (c.pc != 0x0045BE3Cu) [[unlikely]] return; }
L_0045BE3C:
    set32(c.r[4], c.r[29].w[0] + 456u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045BE48u); set32(c.r[5], c.r[29].w[0] + 440u);  if (depth < kMaxDepth) unit_000A(c, 1u, depth + 1u); else { c.pc = 0x00128000u; return; } if (c.pc != 0x0045BE48u) [[unlikely]] return; }
L_0045BE48:
    set32(c.r[4], c.r[29].w[0] + 520u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045BE54u); set32(c.r[5], c.r[29].w[0] + 456u);  if (depth < kMaxDepth) unit_0009(c, 363u, depth + 1u); else { c.pc = 0x00127FE0u; return; } if (c.pc != 0x0045BE54u) [[unlikely]] return; }
L_0045BE54:
    c.f[2] = ld32((c.r[29].w[0] + 536u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = ld32((c.r[29].w[0] + 540u));
    st32((c.r[29].w[0] + 352u), 0u);
    c.f[0] = ld32((c.r[29].w[0] + 544u));
    st32((c.r[29].w[0] + 356u), 0u);
    st32((c.r[29].w[0] + 304u), c.f[2]);
    st32((c.r[29].w[0] + 360u), 0u);
    st32((c.r[29].w[0] + 308u), c.f[1]);
    st32((c.r[29].w[0] + 364u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 312u), c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.f[2] = ld32((c.r[29].w[0] + 520u));
    set32(c.r[5], c.r[16].w[0] + 68u);
    c.f[1] = ld32((c.r[29].w[0] + 524u));
    set32(c.r[6], c.r[29].w[0] + 304u);
    c.f[0] = ld32((c.r[29].w[0] + 528u));
    st32((c.r[29].w[0] + 316u), 0u);
    st32((c.r[29].w[0] + 320u), c.f[2]);
    st32((c.r[29].w[0] + 332u), 0u);
    st32((c.r[29].w[0] + 324u), c.f[1]);
    st32((c.r[29].w[0] + 348u), 0u);
    st32((c.r[29].w[0] + 328u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 552u));
    c.f[1] = ld32((c.r[29].w[0] + 556u));
    c.f[0] = ld32((c.r[29].w[0] + 560u));
    st32((c.r[29].w[0] + 336u), c.f[2]);
    st32((c.r[29].w[0] + 340u), c.f[1]);
    st32((c.r[29].w[0] + 344u), c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 616u));
    c.f[1] = ld32((c.r[29].w[0] + 620u));
    c.f[0] = ld32((c.r[29].w[0] + 624u));
    st32((c.r[29].w[0] + 352u), c.f[2]);
    st32((c.r[29].w[0] + 356u), c.f[1]);
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0045BEE4u); st32((c.r[29].w[0] + 360u), c.f[0]);  if (depth < kMaxDepth) unit_0009(c, 356u, depth + 1u); else { c.pc = 0x00127C50u; return; } if (c.pc != 0x0045BEE4u) [[unlikely]] return; }
L_0045BEE4:
    c.f[12] = ld32((c.r[29].w[0] + 216u));
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.f[4] = ld32((c.r[29].w[0] + 384u));
    c.f[18] = ld32((c.r[29].w[0] + 180u));
    st32((c.r[29].w[0] + 172u), c.f[12]);
    c.f[12] = ld32((c.r[29].w[0] + 220u));
    c.f[17] = ld32((c.r[29].w[0] + 176u));
    c.f[3] = ld32((c.r[29].w[0] + 400u));
    st32((c.r[29].w[0] + 168u), c.f[12]);
    c.f[12] = ld32((c.r[29].w[0] + 368u));
    c.f[16] = ld32((c.r[29].w[0] + 184u));
    c.facc = fp::mul(c.f[18], c.f[4]);
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[12]));
    c.f[2] = ld32((c.r[29].w[0] + 416u));
    c.f[15] = ld32((c.r[29].w[0] + 188u));
    c.f[8] = ld32((c.r[29].w[0] + 388u));
    c.f[7] = ld32((c.r[29].w[0] + 372u));
    st32((c.r[29].w[0] + 164u), c.f[12]);
    c.facc = fp::add(c.facc, fp::mul(c.f[16], c.f[3]));
    c.f[12] = fp::add(c.facc, fp::mul(c.f[15], c.f[2]));
    c.facc = fp::mul(c.f[18], c.f[8]);
    c.f[6] = ld32((c.r[29].w[0] + 404u));
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[7]));
    c.f[5] = ld32((c.r[29].w[0] + 420u));
    c.facc = fp::add(c.facc, fp::mul(c.f[16], c.f[6]));
    c.f[20] = ld32((c.r[29].w[0] + 392u));
    c.f[13] = fp::add(c.facc, fp::mul(c.f[15], c.f[5]));
    c.f[11] = ld32((c.r[29].w[0] + 376u));
    c.facc = fp::mul(c.f[18], c.f[20]);
    c.f[10] = ld32((c.r[29].w[0] + 408u));
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[11]));
    c.f[9] = ld32((c.r[29].w[0] + 424u));
    c.facc = fp::add(c.facc, fp::mul(c.f[16], c.f[10]));
    c.f[28] = ld32((c.r[29].w[0] + 396u));
    c.f[14] = fp::add(c.facc, fp::mul(c.f[15], c.f[9]));
    c.f[26] = ld32((c.r[29].w[0] + 380u));
    c.facc = fp::mul(c.f[18], c.f[28]);
    c.f[24] = ld32((c.r[29].w[0] + 412u));
    c.facc = fp::add(c.facc, fp::mul(c.f[17], c.f[26]));
    c.f[22] = ld32((c.r[29].w[0] + 428u));
    c.facc = fp::add(c.facc, fp::mul(c.f[16], c.f[24]));
    c.f[31] = ld32((c.r[29].w[0] + 196u));
    c.f[15] = fp::add(c.facc, fp::mul(c.f[15], c.f[22]));
    c.f[30] = ld32((c.r[29].w[0] + 192u));
    c.f[16] = ld32((c.r[29].w[0] + 164u));
    c.facc = fp::mul(c.f[31], c.f[4]);
    c.f[29] = ld32((c.r[29].w[0] + 200u));
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[16]));
    c.f[19] = ld32((c.r[29].w[0] + 204u));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[3]));
    c.f[1] = ld32((c.r[29].w[0] + 212u));
    c.f[16] = fp::add(c.facc, fp::mul(c.f[19], c.f[2]));
    c.facc = fp::mul(c.f[31], c.f[8]);
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[7]));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[6]));
    c.f[17] = fp::add(c.facc, fp::mul(c.f[19], c.f[5]));
    c.facc = fp::mul(c.f[31], c.f[20]);
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[11]));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[10]));
    c.f[18] = fp::add(c.facc, fp::mul(c.f[19], c.f[9]));
    c.facc = fp::mul(c.f[31], c.f[28]);
    c.facc = fp::add(c.facc, fp::mul(c.f[30], c.f[26]));
    c.facc = fp::add(c.facc, fp::mul(c.f[29], c.f[24]));
    c.f[19] = fp::add(c.facc, fp::mul(c.f[19], c.f[22]));
    c.f[0] = ld32((c.r[29].w[0] + 208u));
    c.f[29] = ld32((c.r[29].w[0] + 164u));
    c.facc = fp::mul(c.f[1], c.f[4]);
    c.f[27] = ld32((c.r[29].w[0] + 228u));
    c.facc = fp::add(c.facc, fp::mul(c.f[0], c.f[29]));
    c.f[29] = ld32((c.r[29].w[0] + 172u));
    c.f[25] = ld32((c.r[29].w[0] + 224u));
    c.budget -= 71;
    [[clang::musttail]] return unit_00D7(c, 1u, depth);
}

}
