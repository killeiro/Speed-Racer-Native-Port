#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0039[4096] = {
    1, 0, 0, 0, 2, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0,
    0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0,
    0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32,
    0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 39, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    47, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 50, 0, 0, 51, 0, 0, 52, 0, 0, 53, 0, 0, 54, 0, 0, 55, 0, 0, 56, 0, 0,
    0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0,
    0, 0, 0, 68, 0, 0, 69, 0, 70, 0, 0, 71, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0,
    0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0,
    0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 84, 85, 0,
    0, 86, 0, 87, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0,
    0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0,
    0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0,
    111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0,
    0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0,
    0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0,
    127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0,
    0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 143, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147,
    0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 152, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 156, 0, 0, 157, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 162,
    0, 163, 0, 0, 0, 164, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0,
    0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0,
    0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0,
    0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0,
    0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0,
    0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 194, 0, 0, 195,
    0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0,
    200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208,
    0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0,
    0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0,
    222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0,
    0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0,
    0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0,
    238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0,
    0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0,
    252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0,
    0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0,
    0, 0, 0, 0, 266, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 0,
    279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0,
    0, 0, 288, 0, 0, 0, 0, 0, 0, 289, 0, 290, 0, 291, 0, 0, 292, 0, 0, 293, 0, 0, 294, 0, 0, 295, 0, 0, 296, 0, 0, 0,
    297, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 300, 0, 0, 0, 301, 0, 302, 0, 303, 0, 0, 304,
    0, 0, 305, 0, 0, 306, 0, 0, 307, 0, 0, 308, 0, 0, 0, 309, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 312,
    0, 0, 313, 0, 0, 0, 314, 0, 0, 315, 0, 0, 0, 316, 0, 317, 0, 318, 0, 0, 319, 0, 0, 320, 0, 0, 321, 0, 0, 322, 0, 0,
    323, 0, 0, 0, 324, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 327, 0, 0, 0,
    0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 332, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 336, 0, 0, 0, 337,
    0, 0, 338, 0, 0, 339, 0, 0, 340, 0, 341, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    344, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0,
    348, 0, 0, 349, 0, 0, 350, 0, 0, 351, 0, 0, 352, 0, 0, 0, 353, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 358, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 0, 362, 0, 0, 363, 0, 0, 364, 0, 0, 365, 0, 0,
    366, 0, 0, 367, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 370, 0, 0, 371, 0, 0, 0, 372, 0, 0, 373,
    0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 376, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    378, 0, 0, 0, 0, 0, 379, 0, 0, 380, 0, 0, 381, 0, 0, 382, 0, 0, 383, 0, 0, 384, 0, 0, 385, 0, 386, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0039(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001E4000;
    case 2u: goto L_001E4010;
    case 3u: goto L_001E4014;
    case 4u: goto L_001E4020;
    case 5u: goto L_001E4064;
    case 6u: goto L_001E4094;
    case 7u: goto L_001E40A8;
    case 8u: goto L_001E40D8;
    case 9u: goto L_001E40F0;
    case 10u: goto L_001E4118;
    case 11u: goto L_001E4128;
    case 12u: goto L_001E4140;
    case 13u: goto L_001E418C;
    case 14u: goto L_001E41A8;
    case 15u: goto L_001E41BC;
    case 16u: goto L_001E41D4;
    case 17u: goto L_001E41F0;
    case 18u: goto L_001E423C;
    case 19u: goto L_001E4248;
    case 20u: goto L_001E425C;
    case 21u: goto L_001E4270;
    case 22u: goto L_001E4284;
    case 23u: goto L_001E42C0;
    case 24u: goto L_001E42D4;
    case 25u: goto L_001E42E8;
    case 26u: goto L_001E4304;
    case 27u: goto L_001E431C;
    case 28u: goto L_001E4328;
    case 29u: goto L_001E433C;
    case 30u: goto L_001E4350;
    case 31u: goto L_001E4364;
    case 32u: goto L_001E437C;
    case 33u: goto L_001E4390;
    case 34u: goto L_001E439C;
    case 35u: goto L_001E43B0;
    case 36u: goto L_001E43CC;
    case 37u: goto L_001E43E4;
    case 38u: goto L_001E43EC;
    case 39u: goto L_001E43F8;
    case 40u: goto L_001E4428;
    case 41u: goto L_001E443C;
    case 42u: goto L_001E4444;
    case 43u: goto L_001E4450;
    case 44u: goto L_001E4490;
    case 45u: goto L_001E44C0;
    case 46u: goto L_001E44D0;
    case 47u: goto L_001E4500;
    case 48u: goto L_001E4514;
    case 49u: goto L_001E4520;
    case 50u: goto L_001E452C;
    case 51u: goto L_001E4538;
    case 52u: goto L_001E4544;
    case 53u: goto L_001E4550;
    case 54u: goto L_001E455C;
    case 55u: goto L_001E4568;
    case 56u: goto L_001E4574;
    case 57u: goto L_001E4590;
    case 58u: goto L_001E45C0;
    case 59u: goto L_001E45F0;
    case 60u: goto L_001E462C;
    case 61u: goto L_001E4640;
    case 62u: goto L_001E465C;
    case 63u: goto L_001E4684;
    case 64u: goto L_001E4698;
    case 65u: goto L_001E46B4;
    case 66u: goto L_001E46DC;
    case 67u: goto L_001E46F0;
    case 68u: goto L_001E470C;
    case 69u: goto L_001E4718;
    case 70u: goto L_001E4720;
    case 71u: goto L_001E472C;
    case 72u: goto L_001E4738;
    case 73u: goto L_001E4748;
    case 74u: goto L_001E4768;
    case 75u: goto L_001E4788;
    case 76u: goto L_001E47B0;
    case 77u: goto L_001E4828;
    case 78u: goto L_001E4844;
    case 79u: goto L_001E4854;
    case 80u: goto L_001E4874;
    case 81u: goto L_001E4884;
    case 82u: goto L_001E48A0;
    case 83u: goto L_001E48D0;
    case 84u: goto L_001E48F4;
    case 85u: goto L_001E48F8;
    case 86u: goto L_001E4904;
    case 87u: goto L_001E490C;
    case 88u: goto L_001E4918;
    case 89u: goto L_001E4928;
    case 90u: goto L_001E4958;
    case 91u: goto L_001E496C;
    case 92u: goto L_001E4984;
    case 93u: goto L_001E499C;
    case 94u: goto L_001E49B4;
    case 95u: goto L_001E49C4;
    case 96u: goto L_001E49E0;
    case 97u: goto L_001E4A10;
    case 98u: goto L_001E4A30;
    case 99u: goto L_001E4A44;
    case 100u: goto L_001E4A6C;
    case 101u: goto L_001E4A9C;
    case 102u: goto L_001E4AA8;
    case 103u: goto L_001E4AC0;
    case 104u: goto L_001E4AD8;
    case 105u: goto L_001E4AF0;
    case 106u: goto L_001E4B08;
    case 107u: goto L_001E4B20;
    case 108u: goto L_001E4B38;
    case 109u: goto L_001E4B50;
    case 110u: goto L_001E4B68;
    case 111u: goto L_001E4B80;
    case 112u: goto L_001E4B98;
    case 113u: goto L_001E4BB0;
    case 114u: goto L_001E4BC8;
    case 115u: goto L_001E4BE0;
    case 116u: goto L_001E4BF8;
    case 117u: goto L_001E4C10;
    case 118u: goto L_001E4C28;
    case 119u: goto L_001E4C40;
    case 120u: goto L_001E4C58;
    case 121u: goto L_001E4C70;
    case 122u: goto L_001E4C88;
    case 123u: goto L_001E4CA0;
    case 124u: goto L_001E4CB8;
    case 125u: goto L_001E4CD0;
    case 126u: goto L_001E4CE8;
    case 127u: goto L_001E4D00;
    case 128u: goto L_001E4D18;
    case 129u: goto L_001E4D30;
    case 130u: goto L_001E4D48;
    case 131u: goto L_001E4D60;
    case 132u: goto L_001E4D78;
    case 133u: goto L_001E4D90;
    case 134u: goto L_001E4DA8;
    case 135u: goto L_001E4DC0;
    case 136u: goto L_001E4DD8;
    case 137u: goto L_001E4DEC;
    case 138u: goto L_001E4E20;
    case 139u: goto L_001E4E54;
    case 140u: goto L_001E4E9C;
    case 141u: goto L_001E4ECC;
    case 142u: goto L_001E4ED8;
    case 143u: goto L_001E4EE0;
    case 144u: goto L_001E4F28;
    case 145u: goto L_001E4F34;
    case 146u: goto L_001E4F3C;
    case 147u: goto L_001E4F7C;
    case 148u: goto L_001E4F88;
    case 149u: goto L_001E4F90;
    case 150u: goto L_001E4FD8;
    case 151u: goto L_001E4FE4;
    case 152u: goto L_001E4FEC;
    case 153u: goto L_001E502C;
    case 154u: goto L_001E5038;
    case 155u: goto L_001E5040;
    case 156u: goto L_001E5088;
    case 157u: goto L_001E5094;
    case 158u: goto L_001E509C;
    case 159u: goto L_001E50B0;
    case 160u: goto L_001E50D8;
    case 161u: goto L_001E50EC;
    case 162u: goto L_001E50FC;
    case 163u: goto L_001E5104;
    case 164u: goto L_001E5114;
    case 165u: goto L_001E511C;
    case 166u: goto L_001E5154;
    case 167u: goto L_001E5160;
    case 168u: goto L_001E5170;
    case 169u: goto L_001E5184;
    case 170u: goto L_001E519C;
    case 171u: goto L_001E51F0;
    case 172u: goto L_001E520C;
    case 173u: goto L_001E524C;
    case 174u: goto L_001E5294;
    case 175u: goto L_001E5330;
    case 176u: goto L_001E5348;
    case 177u: goto L_001E5378;
    case 178u: goto L_001E538C;
    case 179u: goto L_001E53C0;
    case 180u: goto L_001E53EC;
    case 181u: goto L_001E5418;
    case 182u: goto L_001E5438;
    case 183u: goto L_001E5450;
    case 184u: goto L_001E545C;
    case 185u: goto L_001E5478;
    case 186u: goto L_001E5490;
    case 187u: goto L_001E54D4;
    case 188u: goto L_001E54EC;
    case 189u: goto L_001E5510;
    case 190u: goto L_001E5528;
    case 191u: goto L_001E5540;
    case 192u: goto L_001E5558;
    case 193u: goto L_001E5568;
    case 194u: goto L_001E5570;
    case 195u: goto L_001E557C;
    case 196u: goto L_001E558C;
    case 197u: goto L_001E55BC;
    case 198u: goto L_001E55D0;
    case 199u: goto L_001E55E8;
    case 200u: goto L_001E5600;
    case 201u: goto L_001E5618;
    case 202u: goto L_001E5628;
    case 203u: goto L_001E5644;
    case 204u: goto L_001E5668;
    case 205u: goto L_001E567C;
    case 206u: goto L_001E56A4;
    case 207u: goto L_001E56CC;
    case 208u: goto L_001E56FC;
    case 209u: goto L_001E5714;
    case 210u: goto L_001E572C;
    case 211u: goto L_001E5744;
    case 212u: goto L_001E576C;
    case 213u: goto L_001E579C;
    case 214u: goto L_001E57C0;
    case 215u: goto L_001E57D8;
    case 216u: goto L_001E57F0;
    case 217u: goto L_001E5808;
    case 218u: goto L_001E5820;
    case 219u: goto L_001E5838;
    case 220u: goto L_001E5850;
    case 221u: goto L_001E5868;
    case 222u: goto L_001E5880;
    case 223u: goto L_001E5898;
    case 224u: goto L_001E58B0;
    case 225u: goto L_001E58C8;
    case 226u: goto L_001E58E0;
    case 227u: goto L_001E58F8;
    case 228u: goto L_001E5910;
    case 229u: goto L_001E5928;
    case 230u: goto L_001E5940;
    case 231u: goto L_001E5958;
    case 232u: goto L_001E5970;
    case 233u: goto L_001E5988;
    case 234u: goto L_001E59A0;
    case 235u: goto L_001E59B8;
    case 236u: goto L_001E59D0;
    case 237u: goto L_001E59E8;
    case 238u: goto L_001E5A00;
    case 239u: goto L_001E5A18;
    case 240u: goto L_001E5A30;
    case 241u: goto L_001E5A48;
    case 242u: goto L_001E5A60;
    case 243u: goto L_001E5A78;
    case 244u: goto L_001E5A90;
    case 245u: goto L_001E5AA8;
    case 246u: goto L_001E5ABC;
    case 247u: goto L_001E5AE0;
    case 248u: goto L_001E5B34;
    case 249u: goto L_001E5B50;
    case 250u: goto L_001E5B58;
    case 251u: goto L_001E5B6C;
    case 252u: goto L_001E5B80;
    case 253u: goto L_001E5B98;
    case 254u: goto L_001E5BAC;
    case 255u: goto L_001E5BBC;
    case 256u: goto L_001E5C78;
    case 257u: goto L_001E5C84;
    case 258u: goto L_001E5C9C;
    case 259u: goto L_001E5CA8;
    case 260u: goto L_001E5CBC;
    case 261u: goto L_001E5CD0;
    case 262u: goto L_001E5D04;
    case 263u: goto L_001E5D48;
    case 264u: goto L_001E5D5C;
    case 265u: goto L_001E5D70;
    case 266u: goto L_001E5D90;
    case 267u: goto L_001E5D98;
    case 268u: goto L_001E5DA8;
    case 269u: goto L_001E5DE0;
    case 270u: goto L_001E5DF0;
    case 271u: goto L_001E5E3C;
    case 272u: goto L_001E5E4C;
    case 273u: goto L_001E5E60;
    case 274u: goto L_001E5E88;
    case 275u: goto L_001E5EA0;
    case 276u: goto L_001E5EC0;
    case 277u: goto L_001E5EDC;
    case 278u: goto L_001E5EEC;
    case 279u: goto L_001E5F00;
    case 280u: goto L_001E5F50;
    case 281u: goto L_001E5FCC;
    case 282u: goto L_001E6060;
    case 283u: goto L_001E60A4;
    case 284u: goto L_001E60B0;
    case 285u: goto L_001E60D4;
    case 286u: goto L_001E60E0;
    case 287u: goto L_001E60F8;
    case 288u: goto L_001E6108;
    case 289u: goto L_001E6124;
    case 290u: goto L_001E612C;
    case 291u: goto L_001E6134;
    case 292u: goto L_001E6140;
    case 293u: goto L_001E614C;
    case 294u: goto L_001E6158;
    case 295u: goto L_001E6164;
    case 296u: goto L_001E6170;
    case 297u: goto L_001E6180;
    case 298u: goto L_001E6188;
    case 299u: goto L_001E61C4;
    case 300u: goto L_001E61D0;
    case 301u: goto L_001E61E0;
    case 302u: goto L_001E61E8;
    case 303u: goto L_001E61F0;
    case 304u: goto L_001E61FC;
    case 305u: goto L_001E6208;
    case 306u: goto L_001E6214;
    case 307u: goto L_001E6220;
    case 308u: goto L_001E622C;
    case 309u: goto L_001E623C;
    case 310u: goto L_001E6244;
    case 311u: goto L_001E626C;
    case 312u: goto L_001E627C;
    case 313u: goto L_001E6288;
    case 314u: goto L_001E6298;
    case 315u: goto L_001E62A4;
    case 316u: goto L_001E62B4;
    case 317u: goto L_001E62BC;
    case 318u: goto L_001E62C4;
    case 319u: goto L_001E62D0;
    case 320u: goto L_001E62DC;
    case 321u: goto L_001E62E8;
    case 322u: goto L_001E62F4;
    case 323u: goto L_001E6300;
    case 324u: goto L_001E6310;
    case 325u: goto L_001E6318;
    case 326u: goto L_001E63E4;
    case 327u: goto L_001E63F0;
    case 328u: goto L_001E640C;
    case 329u: goto L_001E641C;
    case 330u: goto L_001E6448;
    case 331u: goto L_001E6464;
    case 332u: goto L_001E646C;
    case 333u: goto L_001E6498;
    case 334u: goto L_001E64D0;
    case 335u: goto L_001E64E0;
    case 336u: goto L_001E64EC;
    case 337u: goto L_001E64FC;
    case 338u: goto L_001E6508;
    case 339u: goto L_001E6514;
    case 340u: goto L_001E6520;
    case 341u: goto L_001E6528;
    case 342u: goto L_001E6538;
    case 343u: goto L_001E6594;
    case 344u: goto L_001E6600;
    case 345u: goto L_001E660C;
    case 346u: goto L_001E665C;
    case 347u: goto L_001E6674;
    case 348u: goto L_001E6680;
    case 349u: goto L_001E668C;
    case 350u: goto L_001E6698;
    case 351u: goto L_001E66A4;
    case 352u: goto L_001E66B0;
    case 353u: goto L_001E66C0;
    case 354u: goto L_001E66C8;
    case 355u: goto L_001E671C;
    case 356u: goto L_001E6728;
    case 357u: goto L_001E6738;
    case 358u: goto L_001E6754;
    case 359u: goto L_001E6760;
    case 360u: goto L_001E67AC;
    case 361u: goto L_001E67C4;
    case 362u: goto L_001E67D0;
    case 363u: goto L_001E67DC;
    case 364u: goto L_001E67E8;
    case 365u: goto L_001E67F4;
    case 366u: goto L_001E6800;
    case 367u: goto L_001E680C;
    case 368u: goto L_001E6814;
    case 369u: goto L_001E683C;
    case 370u: goto L_001E6854;
    case 371u: goto L_001E6860;
    case 372u: goto L_001E6870;
    case 373u: goto L_001E687C;
    case 374u: goto L_001E688C;
    case 375u: goto L_001E689C;
    case 376u: goto L_001E68A8;
    case 377u: goto L_001E68B4;
    case 378u: goto L_001E6900;
    case 379u: goto L_001E6918;
    case 380u: goto L_001E6924;
    case 381u: goto L_001E6930;
    case 382u: goto L_001E693C;
    case 383u: goto L_001E6948;
    case 384u: goto L_001E6954;
    case 385u: goto L_001E6960;
    case 386u: goto L_001E6968;
    case 387u: goto L_001E69E0;
    case 388u: goto L_001E6A14;
    case 389u: goto L_001E6AFC;
    case 390u: goto L_001E6BE0;
    case 391u: goto L_001E6C10;
    case 392u: goto L_001E6CC0;
    case 393u: goto L_001E6D68;
    case 394u: goto L_001E6E18;
    case 395u: goto L_001E6EB0;
    case 396u: goto L_001E6F30;
    case 397u: goto L_001E7038;
    case 398u: goto L_001E70E4;
    case 399u: goto L_001E7200;
    case 400u: goto L_001E7294;
    case 401u: goto L_001E7320;
    case 402u: goto L_001E739C;
    case 403u: goto L_001E7430;
    case 404u: goto L_001E750C;
    case 405u: goto L_001E75A0;
    case 406u: goto L_001E7614;
    case 407u: goto L_001E765C;
    case 408u: goto L_001E7714;
    case 409u: goto L_001E775C;
    case 410u: goto L_001E7814;
    case 411u: goto L_001E783C;
    case 412u: goto L_001E7840;
    case 413u: goto L_001E7898;
    case 414u: goto L_001E797C;
    case 415u: goto L_001E79E0;
    case 416u: goto L_001E7A18;
    case 417u: goto L_001E7A60;
    case 418u: goto L_001E7B50;
    case 419u: goto L_001E7BD8;
    case 420u: goto L_001E7CA4;
    case 421u: goto L_001E7D2C;
    case 422u: goto L_001E7DE8;
    case 423u: goto L_001E7E60;
    case 424u: goto L_001E7E9C;
    case 425u: goto L_001E7EDC;
    case 426u: goto L_001E7F50;
    case 427u: goto L_001E7FB8;
    default: bad_entry(c, 0x001E4000u); return;
    }
L_001E4000:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001E4010; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4010u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x001002F0u; return; } if (c.pc != 0x001E4010u) [[unlikely]] return; }
L_001E4010:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001E4014:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001E4020:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001E40DC; }
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 844u)));  goto L_001E4050; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E40DC; } }
L_001E4050:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[5].d[0] << 32;  goto L_001E40A0; }
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4064u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E4064u) [[unlikely]] return; }
L_001E4064:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001E40DC; }
    c.r[3].d[0] = ld64((c.r[16].w[0] + 256u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E4094; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4094u); set32(c.r[5], c.r[5].w[0] - 21236u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001E4094u) [[unlikely]] return; }
L_001E4094:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E40DC; } }
L_001E40A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E40A8u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);  if (depth < kMaxDepth) unit_0000(c, 26u, depth + 1u); else { c.pc = 0x001002E0u; return; } if (c.pc != 0x001E40A8u) [[unlikely]] return; }
L_001E40A8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_001E40DC; }
    c.r[3].d[0] = ld64((c.r[16].w[0] + 256u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E40D8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E40D8u); set32(c.r[5], c.r[5].w[0] - 21221u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001E40D8u) [[unlikely]] return; }
L_001E40D8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001E40DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E40F0:
    set32(c.r[29], c.r[29].w[0] - 896u);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_001E4128; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E4120; } }
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 856u), c.r[6].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4118u); set32(c.r[4], c.r[29].w[0] + 16u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E4118u) [[unlikely]] return; }
L_001E4118:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001E412C; } }
L_001E4120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4128u);  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x001002F0u; return; } if (c.pc != 0x001E4128u) [[unlikely]] return; }
L_001E4128:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001E412C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 896u);  c.pc = t; return; }
L_001E4140:
    set32(c.r[29], c.r[29].w[0] - 928u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001E4164; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 400u);  if (t) { goto L_001E4174; } }
L_001E4164:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_001E41D8; }
    set32(c.r[17], 0u + 880u);
    c.budget -= 1;
L_001E4174:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_001E41B4; }
    st32((c.r[29].w[0] + 888u), c.r[6].w[0]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E418Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E418Cu) [[unlikely]] return; }
L_001E418C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001E41D8; }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E41A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x001E41A8u) [[unlikely]] return; }
L_001E41A8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E41D8; } }
L_001E41B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E41BCu);  if (depth < kMaxDepth) unit_0000(c, 26u, depth + 1u); else { c.pc = 0x001002E0u; return; } if (c.pc != 0x001E41BCu) [[unlikely]] return; }
L_001E41BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E41D4; } }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E41D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x001E41D4u) [[unlikely]] return; }
L_001E41D4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E41D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 928u);  c.pc = t; return; }
L_001E41F0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[23].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].d[0] = c.r[19].d[0] & 1024ull;
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_001E423C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E423Cu);  if (depth < kMaxDepth) unit_003C(c, 411u, depth + 1u); else { c.pc = 0x001F34C0u; return; } if (c.pc != 0x001E423Cu) [[unlikely]] return; }
L_001E423C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4248u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 186u, depth + 1u); else { c.pc = 0x001E5490u; return; } if (c.pc != 0x001E4248u) [[unlikely]] return; }
L_001E4248:
    c.r[2].d[0] = c.r[19].d[0] & 1ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[19].d[0] & 2ull;  goto L_001E4260; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E425Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 10u, depth + 1u); else { c.pc = 0x001EC310u; return; } if (c.pc != 0x001E425Cu) [[unlikely]] return; }
L_001E425C:
    c.r[2].d[0] = c.r[19].d[0] & 2ull;
    c.budget -= 1;
L_001E4260:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[19].d[0] & 8ull;  goto L_001E4274; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4270u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 9u, depth + 1u); else { c.pc = 0x001EC2F0u; return; } if (c.pc != 0x001E4270u) [[unlikely]] return; }
L_001E4270:
    c.r[2].d[0] = c.r[19].d[0] & 8ull;
    c.budget -= 1;
L_001E4274:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[19].d[0] & 16ull;  goto L_001E4288; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4284u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 416u, depth + 1u); else { c.pc = 0x001F3570u; return; } if (c.pc != 0x001E4284u) [[unlikely]] return; }
L_001E4284:
    c.r[2].d[0] = c.r[19].d[0] & 16ull;
    c.budget -= 1;
L_001E4288:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[19].d[0] & 32ull;  goto L_001E42D8; }
    c.r[2].d[0] = ld8((c.r[21].w[0] + 507u));
    c.r[2].d[0] = c.r[2].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  goto L_001E42CC; }
    c.r[3].d[0] = ld8((c.r[21].w[0] + 506u));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E42C8; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E42C0u); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0038(c, 532u, depth + 1u); else { c.pc = 0x001E3DB0u; return; } if (c.pc != 0x001E42C0u) [[unlikely]] return; }
L_001E42C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E42D4; } }
L_001E42C8:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_001E42CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E42D4u);  if (depth < kMaxDepth) unit_003B(c, 8u, depth + 1u); else { c.pc = 0x001EC2E0u; return; } if (c.pc != 0x001E42D4u) [[unlikely]] return; }
L_001E42D4:
    c.r[2].d[0] = c.r[19].d[0] & 32ull;
    c.budget -= 1;
L_001E42D8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[19].d[0] & 64ull;  goto L_001E42EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E42E8u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 410u, depth + 1u); else { c.pc = 0x001F34B0u; return; } if (c.pc != 0x001E42E8u) [[unlikely]] return; }
L_001E42E8:
    c.r[2].d[0] = c.r[19].d[0] & 64ull;
    c.budget -= 1;
L_001E42EC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[19].d[0] & 128ull;  goto L_001E432C; }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4304u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0038(c, 532u, depth + 1u); else { c.pc = 0x001E3DB0u; return; } if (c.pc != 0x001E4304u) [[unlikely]] return; }
L_001E4304:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E4328; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E431Cu); set32(c.r[6], c.r[29].w[0] + 188u);  if (depth < kMaxDepth) unit_0038(c, 530u, depth + 1u); else { c.pc = 0x001E3D30u; return; } if (c.pc != 0x001E431Cu) [[unlikely]] return; }
L_001E431C:
    set32(c.r[5], ld32((c.r[29].w[0] + 188u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4328u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 414u, depth + 1u); else { c.pc = 0x001F3530u; return; } if (c.pc != 0x001E4328u) [[unlikely]] return; }
L_001E4328:
    c.r[2].d[0] = c.r[19].d[0] & 128ull;
    c.budget -= 1;
L_001E432C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[19].d[0] & 256ull;  goto L_001E4340; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E433Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 418u, depth + 1u); else { c.pc = 0x001F35D0u; return; } if (c.pc != 0x001E433Cu) [[unlikely]] return; }
L_001E433C:
    c.r[2].d[0] = c.r[19].d[0] & 256ull;
    c.budget -= 1;
L_001E4340:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[19].d[0] & 512ull;  goto L_001E4354; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4350u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 412u, depth + 1u); else { c.pc = 0x001F34E0u; return; } if (c.pc != 0x001E4350u) [[unlikely]] return; }
L_001E4350:
    c.r[2].d[0] = c.r[19].d[0] & 512ull;
    c.budget -= 1;
L_001E4354:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld64((c.r[21].w[0] + 256u));  goto L_001E4368; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4364u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 417u, depth + 1u); else { c.pc = 0x001F35A0u; return; } if (c.pc != 0x001E4364u) [[unlikely]] return; }
L_001E4364:
    c.r[2].d[0] = ld64((c.r[21].w[0] + 256u));
    c.budget -= 1;
L_001E4368:
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001E4384; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E437Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 11u, depth + 1u); else { c.pc = 0x001EC320u; return; } if (c.pc != 0x001E437Cu) [[unlikely]] return; }
L_001E437C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_001E4394; } }
L_001E4384:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4390u); set32(c.r[5], c.r[5].w[0] - 21168u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001E4390u) [[unlikely]] return; }
L_001E4390:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_001E4394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E439Cu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 100u, depth + 1u); else { c.pc = 0x001EB110u; return; } if (c.pc != 0x001E439Cu) [[unlikely]] return; }
L_001E439C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], 0u + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E43B0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 428u, depth + 1u); else { c.pc = 0x001F3720u; return; } if (c.pc != 0x001E43B0u) [[unlikely]] return; }
L_001E43B0:
    set32(c.r[2], ld32((c.r[20].w[0] + 320u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[30], ld32((c.r[20].w[0] + 320u)));  goto L_001E4420; }
    c.r[2].d[0] = ld64((c.r[20].w[0] + 8u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E43CCu); c.r[5].d[0] = c.r[2].d[0] << 2;  if (depth < kMaxDepth) unit_0039(c, 4u, depth + 1u); else { c.pc = 0x001E4020u; return; } if (c.pc != 0x001E43CCu) [[unlikely]] return; }
L_001E43CC:
    st32((c.r[20].w[0] + 320u), c.r[2].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[2].d[0] = ld64((c.r[20].w[0] + 240u));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st64((c.r[20].w[0] + 240u), c.r[2].d[0]);  if (t) { goto L_001E440C; } }
L_001E43E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E43ECu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 531u, depth + 1u); else { c.pc = 0x001E3D80u; return; } if (c.pc != 0x001E43ECu) [[unlikely]] return; }
L_001E43EC:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E43F8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 4u, depth + 1u); else { c.pc = 0x001E4020u; return; } if (c.pc != 0x001E43F8u) [[unlikely]] return; }
L_001E43F8:
    set32(c.r[3], ld32((c.r[20].w[0] + 320u)));
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 5;
L_001E440C:
    set32(c.r[2], ld32((c.r[20].w[0] + 8u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E43E4u | kUnwind; return; } goto L_001E43E4; }
    set32(c.r[30], ld32((c.r[20].w[0] + 320u)));
    c.budget -= 1;
L_001E4420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4428u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 413u, depth + 1u); else { c.pc = 0x001F3500u; return; } if (c.pc != 0x001E4428u) [[unlikely]] return; }
L_001E4428:
    c.r[22].d[0] = ld64((c.r[21].w[0] + 368u));
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st64((c.r[21].w[0] + 376u), c.r[22].d[0]);  if (t) { goto L_001E4468; } }
L_001E443C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_001E4458; } }
L_001E4444:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4450u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0039(c, 138u, depth + 1u); else { c.pc = 0x001E4E20u; return; } if (c.pc != 0x001E4450u) [[unlikely]] return; }
L_001E4450:
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.r[18].d[0] = c.r[18].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_001E4458:
    c.r[2].d[0] = c.r[18].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E4444u | kUnwind; return; } goto L_001E4444; }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001E4468:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = c.r[30].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E443Cu | kUnwind; return; } goto L_001E443C; }
    c.r[2].d[0] = ld64((c.r[20].w[0] + 16u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4490u); st64((c.r[20].w[0] + 16u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0039(c, 83u, depth + 1u); else { c.pc = 0x001E48D0u; return; } if (c.pc != 0x001E4490u) [[unlikely]] return; }
L_001E4490:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001E4498; } }
L_001E4498:
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
    c.budget -= 10;
L_001E44C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_001E44D0:
    set32(c.r[29], c.r[29].w[0] - 304u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001E4500; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4500u);  if (depth < kMaxDepth) unit_003C(c, 424u, depth + 1u); else { c.pc = 0x001F36B0u; return; } if (c.pc != 0x001E4500u) [[unlikely]] return; }
L_001E4500:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 328u)));  goto L_001E4518; }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4514u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 424u, depth + 1u); else { c.pc = 0x001F36B0u; return; } if (c.pc != 0x001E4514u) [[unlikely]] return; }
L_001E4514:
    set32(c.r[5], ld32((c.r[16].w[0] + 328u)));
    c.budget -= 1;
L_001E4518:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4520u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001E4520u) [[unlikely]] return; }
L_001E4520:
    set32(c.r[5], ld32((c.r[16].w[0] + 852u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E452Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001E452Cu) [[unlikely]] return; }
L_001E452C:
    set32(c.r[5], ld32((c.r[16].w[0] + 424u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4538u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001E4538u) [[unlikely]] return; }
L_001E4538:
    set32(c.r[5], ld32((c.r[16].w[0] + 728u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4544u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001E4544u) [[unlikely]] return; }
L_001E4544:
    set32(c.r[5], ld32((c.r[16].w[0] + 732u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4550u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001E4550u) [[unlikely]] return; }
L_001E4550:
    set32(c.r[5], ld32((c.r[16].w[0] + 580u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E455Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001E455Cu) [[unlikely]] return; }
L_001E455C:
    set32(c.r[5], ld32((c.r[16].w[0] + 584u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4568u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001E4568u) [[unlikely]] return; }
L_001E4568:
    set32(c.r[5], ld32((c.r[16].w[0] + 588u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4574u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001E4574u) [[unlikely]] return; }
L_001E4574:
    c.r[2].d[0] = ld64((c.r[16].w[0] + 768u));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld64((c.r[16].w[0] + 768u));  goto L_001E4594; }
    set32(c.r[5], ld32((c.r[16].w[0] + 488u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4590u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 462u, depth + 1u); else { c.pc = 0x001F3D50u; return; } if (c.pc != 0x001E4590u) [[unlikely]] return; }
L_001E4590:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 768u));
    c.budget -= 1;
L_001E4594:
    set32(c.r[2], 0u - 4097u);
    mmi::pcpyld(c.r[2], c.r[0], c.r[2]);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st64((c.r[16].w[0] + 768u), c.r[2].d[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 768u));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld64((c.r[16].w[0] + 768u));  goto L_001E45C4; }
    set32(c.r[5], ld32((c.r[16].w[0] + 616u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E45C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001E45C0u) [[unlikely]] return; }
L_001E45C0:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 768u));
    c.budget -= 1;
L_001E45C4:
    set32(c.r[2], 0u - 8193u);
    mmi::pcpyld(c.r[2], c.r[0], c.r[2]);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st64((c.r[16].w[0] + 768u), c.r[2].d[0]);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 768u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld64((c.r[16].w[0] + 768u));  goto L_001E45F4; }
    set32(c.r[5], ld32((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E45F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001E45F0u) [[unlikely]] return; }
L_001E45F0:
    c.r[3].d[0] = ld64((c.r[16].w[0] + 768u));
    c.budget -= 1;
L_001E45F4:
    set32(c.r[2], 0u - 9u);
    mmi::pcpyld(c.r[2], c.r[0], c.r[2]);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st64((c.r[16].w[0] + 768u), c.r[2].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 592u)));
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 596u)));  goto L_001E4660; }
    set32(c.r[4], ld32((c.r[16].w[0] + 568u)));
    set32(c.r[3], 0u + 8u);
    set32(c.r[2], 0u + 1u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] << (c.r[3].w[0] & 31u));  if (t) { goto L_001E4644; } }
L_001E462C:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4640u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001E4640u) [[unlikely]] return; }
L_001E4640:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001E4644:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 592u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E462Cu | kUnwind; return; } goto L_001E462C; }
    set32(c.r[5], ld32((c.r[16].w[0] + 592u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E465Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001E465Cu) [[unlikely]] return; }
L_001E465C:
    set32(c.r[2], ld32((c.r[16].w[0] + 596u)));
    c.budget -= 1;
L_001E4660:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 600u)));  goto L_001E46B8; }
    set32(c.r[4], ld32((c.r[16].w[0] + 568u)));
    set32(c.r[3], 0u + 8u);
    set32(c.r[2], 0u + 1u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] << (c.r[3].w[0] & 31u));  if (t) { goto L_001E469C; } }
L_001E4684:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4698u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001E4698u) [[unlikely]] return; }
L_001E4698:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001E469C:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 596u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E4684u | kUnwind; return; } goto L_001E4684; }
    set32(c.r[5], ld32((c.r[16].w[0] + 596u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E46B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001E46B4u) [[unlikely]] return; }
L_001E46B4:
    set32(c.r[2], ld32((c.r[16].w[0] + 600u)));
    c.budget -= 1;
L_001E46B8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 764u)));  goto L_001E4710; }
    set32(c.r[4], ld32((c.r[16].w[0] + 568u)));
    set32(c.r[3], 0u + 8u);
    set32(c.r[2], 0u + 1u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] << (c.r[3].w[0] & 31u));  if (t) { goto L_001E46F4; } }
L_001E46DC:
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E46F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001E46F0u) [[unlikely]] return; }
L_001E46F0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001E46F4:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 600u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E46DCu | kUnwind; return; } goto L_001E46DC; }
    set32(c.r[5], ld32((c.r[16].w[0] + 600u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E470Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001E470Cu) [[unlikely]] return; }
L_001E470C:
    set32(c.r[5], ld32((c.r[16].w[0] + 764u)));
    c.budget -= 1;
L_001E4710:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4718u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001E4718u) [[unlikely]] return; }
L_001E4718:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4720u); set32(c.r[4], c.r[16].w[0] + 272u);  if (depth < kMaxDepth) unit_00A4(c, 103u, depth + 1u); else { c.pc = 0x00393460u; return; } if (c.pc != 0x001E4720u) [[unlikely]] return; }
L_001E4720:
    set32(c.r[5], ld32((c.r[16].w[0] + 656u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E472Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001E472Cu) [[unlikely]] return; }
L_001E472C:
    set32(c.r[5], ld32((c.r[16].w[0] + 720u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4738u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001E4738u) [[unlikely]] return; }
L_001E4738:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4748u); set32(c.r[6], 0u + 208u);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001E4748u) [[unlikely]] return; }
L_001E4748:
    set32(c.r[20], ld32((c.r[16].w[0] + 208u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[19], ld32((c.r[16].w[0] + 212u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[18], ld32((c.r[16].w[0] + 216u)));
    set32(c.r[17], ld32((c.r[16].w[0] + 848u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4768u); set32(c.r[6], 0u + 880u);  if (depth < kMaxDepth) unit_00AE(c, 14u, depth + 1u); else { c.pc = 0x003B8250u; return; } if (c.pc != 0x001E4768u) [[unlikely]] return; }
L_001E4768:
    st32((c.r[16].w[0] + 208u), c.r[20].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 212u), c.r[19].w[0]);
    set32(c.r[5], c.r[29].w[0] + 96u);
    st32((c.r[16].w[0] + 216u), c.r[18].w[0]);
    set32(c.r[6], 0u + 208u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4788u); st32((c.r[16].w[0] + 848u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x001E4788u) [[unlikely]] return; }
L_001E4788:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 304u);  c.pc = t; return; }
L_001E47B0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 17;
    { const bool t = c.r[21].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001E47F8; } }
    set32(c.r[18], ld32((c.r[21].w[0])));
    c.budget -= 1;
L_001E47F8:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001E4804; } }
    set32(c.r[17], ld32((c.r[20].w[0])));
    c.budget -= 1;
L_001E4804:
    c.budget -= 2;
    if (c.r[19].d[0] == 0ull) { set32(c.r[22], ld32((c.r[18].w[0] + 848u)));  goto L_001E4814; }
    set32(c.r[16], ld32((c.r[19].w[0])));
    set32(c.r[22], ld32((c.r[18].w[0] + 848u)));
    c.budget -= 2;
L_001E4814:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[23], ld32((c.r[18].w[0] + 840u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4828u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 46u, depth + 1u); else { c.pc = 0x001E44D0u; return; } if (c.pc != 0x001E4828u) [[unlikely]] return; }
L_001E4828:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001E4858; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 16384u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4844u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_003C(c, 428u, depth + 1u); else { c.pc = 0x001F3720u; return; } if (c.pc != 0x001E4844u) [[unlikely]] return; }
L_001E4844:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4854u); c.r[6].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 9u, depth + 1u); else { c.pc = 0x001E40F0u; return; } if (c.pc != 0x001E4854u) [[unlikely]] return; }
L_001E4854:
    st32((c.r[20].w[0]), 0u);
    c.budget -= 1;
L_001E4858:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001E4888; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 16384u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4874u); set32(c.r[7], 0u - 1u);  if (depth < kMaxDepth) unit_003C(c, 428u, depth + 1u); else { c.pc = 0x001F3720u; return; } if (c.pc != 0x001E4874u) [[unlikely]] return; }
L_001E4874:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4884u); c.r[6].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 9u, depth + 1u); else { c.pc = 0x001E40F0u; return; } if (c.pc != 0x001E4884u) [[unlikely]] return; }
L_001E4884:
    st32((c.r[19].w[0]), 0u);
    c.budget -= 1;
L_001E4888:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  goto L_001E48A8; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E48A0u); c.r[6].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 9u, depth + 1u); else { c.pc = 0x001E40F0u; return; } if (c.pc != 0x001E48A0u) [[unlikely]] return; }
L_001E48A0:
    st32((c.r[21].w[0]), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 2;
L_001E48A8:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001E48D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E48F4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001E48F4u) [[unlikely]] return; }
L_001E48F4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001E48F8:
    set32(c.r[5], c.r[29].w[0] + 76u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4904u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0039(c, 276u, depth + 1u); else { c.pc = 0x001E5EC0u; return; } if (c.pc != 0x001E4904u) [[unlikely]] return; }
L_001E4904:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E490Cu); set32(c.r[4], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_003C(c, 132u, depth + 1u); else { c.pc = 0x001F1070u; return; } if (c.pc != 0x001E490Cu) [[unlikely]] return; }
L_001E490C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4918u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 460u, depth + 1u); else { c.pc = 0x001F3D10u; return; } if (c.pc != 0x001E4918u) [[unlikely]] return; }
L_001E4918:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 496u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4928u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_003C(c, 129u, depth + 1u); else { c.pc = 0x001F1020u; return; } if (c.pc != 0x001E4928u) [[unlikely]] return; }
L_001E4928:
    c.r[1].d[0] = 0ull | 0ull;
    c.r[1].d[0] = c.r[1].d[0] << 16;
    c.r[1].d[0] = c.r[1].d[0] << 16;
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.r[1].d[0] = c.r[1].d[0] << 16;
    c.r[1].d[0] = c.r[16].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E4958; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4958u); set32(c.r[5], c.r[5].w[0] - 21097u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001E4958u) [[unlikely]] return; }
L_001E4958:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[18].w[0] + 496u);
    set32(c.r[5], c.r[5].w[0] - 15368u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E496Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001E496Cu) [[unlikely]] return; }
L_001E496C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001E498C; }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4984u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 78u, depth + 1u); else { c.pc = 0x001F0860u; return; } if (c.pc != 0x001E4984u) [[unlikely]] return; }
L_001E4984:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld64((c.r[18].w[0] + 248u));  if (t) { goto L_001E4DF0; } }
L_001E498C:
    set32(c.r[4], c.r[18].w[0] + 496u);
    set32(c.r[5], c.r[5].w[0] - 15352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E499Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001E499Cu) [[unlikely]] return; }
L_001E499C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001E49BC; }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E49B4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 55u, depth + 1u); else { c.pc = 0x001F05A0u; return; } if (c.pc != 0x001E49B4u) [[unlikely]] return; }
L_001E49B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E4DEC; } }
L_001E49BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E49C4u); set32(c.r[5], c.r[18].w[0] + 496u);  if (depth < kMaxDepth) unit_003C(c, 420u, depth + 1u); else { c.pc = 0x001F3600u; return; } if (c.pc != 0x001E49C4u) [[unlikely]] return; }
L_001E49C4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001E4A5C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[18].w[0] + 496u);
    set32(c.r[5], c.r[5].w[0] - 15360u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E49E0u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001E49E0u) [[unlikely]] return; }
L_001E49E0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld64((c.r[18].w[0] + 248u));  goto L_001E4A18; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001E4A00; } }
    c.r[2].d[0] = ld64((c.r[18].w[0] + 248u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[6].d[0] = c.r[16].d[0] + 0ull;  goto L_001E4A24; }
L_001E4A00:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4A10u); set32(c.r[5], c.r[5].w[0] - 21075u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001E4A10u) [[unlikely]] return; }
L_001E4A10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E4A20; } }
L_001E4A18:
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st64((c.r[18].w[0] + 248u), c.r[2].d[0]);
    c.budget -= 2;
L_001E4A20:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E4A24:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4A30u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 70u, depth + 1u); else { c.pc = 0x001ED780u; return; } if (c.pc != 0x001E4A30u) [[unlikely]] return; }
L_001E4A30:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[18].w[0] + 496u);
    set32(c.r[5], c.r[5].w[0] - 15344u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4A44u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001E4A44u) [[unlikely]] return; }
L_001E4A44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E4DEC; } }
    c.r[3].d[0] = ld64((c.r[18].w[0] + 248u));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st64((c.r[18].w[0] + 248u), c.r[3].d[0]);  if (t) { goto L_001E4DEC; } }
L_001E4A5C:
    set32(c.r[4], c.r[18].w[0] + 496u);
    set32(c.r[5], c.r[5].w[0] - 15360u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4A6Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001E4A6Cu) [[unlikely]] return; }
L_001E4A6C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001E4AB0; }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001E4A8C; } }
    c.r[2].d[0] = ld64((c.r[18].w[0] + 248u));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[16].d[0] + 0ull;  goto L_001E4AA0; }
L_001E4A8C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4A9Cu); set32(c.r[5], c.r[5].w[0] - 21075u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001E4A9Cu) [[unlikely]] return; }
L_001E4A9C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E4AA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4AA8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001E4AA8u) [[unlikely]] return; }
L_001E4AA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E4DEC; } }
L_001E4AB0:
    set32(c.r[4], c.r[18].w[0] + 496u);
    set32(c.r[5], c.r[5].w[0] - 15344u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4AC0u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001E4AC0u) [[unlikely]] return; }
L_001E4AC0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001E4AE0; }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4AD8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 59u, depth + 1u); else { c.pc = 0x001F0620u; return; } if (c.pc != 0x001E4AD8u) [[unlikely]] return; }
L_001E4AD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E4DEC; } }
L_001E4AE0:
    set32(c.r[4], c.r[18].w[0] + 496u);
    set32(c.r[5], c.r[5].w[0] - 15336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4AF0u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001E4AF0u) [[unlikely]] return; }
L_001E4AF0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001E4B10; }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4B08u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 226u, depth + 1u); else { c.pc = 0x001EE9A0u; return; } if (c.pc != 0x001E4B08u) [[unlikely]] return; }
L_001E4B08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E4DEC; } }
L_001E4B10:
    set32(c.r[4], c.r[18].w[0] + 496u);
    set32(c.r[5], c.r[5].w[0] - 15328u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4B20u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001E4B20u) [[unlikely]] return; }
L_001E4B20:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001E4B40; }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4B38u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 326u, depth + 1u); else { c.pc = 0x001EF810u; return; } if (c.pc != 0x001E4B38u) [[unlikely]] return; }
L_001E4B38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E4DEC; } }
L_001E4B40:
    set32(c.r[4], c.r[18].w[0] + 496u);
    set32(c.r[5], c.r[5].w[0] - 15320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4B50u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001E4B50u) [[unlikely]] return; }
L_001E4B50:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001E4B70; }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4B68u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 36u, depth + 1u); else { c.pc = 0x001F0360u; return; } if (c.pc != 0x001E4B68u) [[unlikely]] return; }
L_001E4B68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E4DEC; } }
L_001E4B70:
    set32(c.r[4], c.r[18].w[0] + 496u);
    set32(c.r[5], c.r[5].w[0] - 15312u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4B80u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001E4B80u) [[unlikely]] return; }
L_001E4B80:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001E4BA0; }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4B98u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 211u, depth + 1u); else { c.pc = 0x001EE800u; return; } if (c.pc != 0x001E4B98u) [[unlikely]] return; }
L_001E4B98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E4DEC; } }
L_001E4BA0:
    set32(c.r[4], c.r[18].w[0] + 496u);
    set32(c.r[5], c.r[5].w[0] - 15296u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4BB0u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001E4BB0u) [[unlikely]] return; }
L_001E4BB0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001E4BD0; }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4BC8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 187u, depth + 1u); else { c.pc = 0x001EE500u; return; } if (c.pc != 0x001E4BC8u) [[unlikely]] return; }
L_001E4BC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E4DEC; } }
L_001E4BD0:
    set32(c.r[4], c.r[18].w[0] + 496u);
    set32(c.r[5], c.r[5].w[0] - 15288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4BE0u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001E4BE0u) [[unlikely]] return; }
L_001E4BE0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001E4C00; }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4BF8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 156u, depth + 1u); else { c.pc = 0x001EE110u; return; } if (c.pc != 0x001E4BF8u) [[unlikely]] return; }
L_001E4BF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E4DEC; } }
L_001E4C00:
    set32(c.r[4], c.r[18].w[0] + 496u);
    set32(c.r[5], c.r[5].w[0] - 15280u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4C10u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001E4C10u) [[unlikely]] return; }
L_001E4C10:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001E4C30; }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4C28u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 133u, depth + 1u); else { c.pc = 0x001EDEB0u; return; } if (c.pc != 0x001E4C28u) [[unlikely]] return; }
L_001E4C28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E4DEC; } }
L_001E4C30:
    set32(c.r[4], c.r[18].w[0] + 496u);
    set32(c.r[5], c.r[5].w[0] - 15272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4C40u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001E4C40u) [[unlikely]] return; }
L_001E4C40:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001E4C60; }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4C58u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 199u, depth + 1u); else { c.pc = 0x001EE680u; return; } if (c.pc != 0x001E4C58u) [[unlikely]] return; }
L_001E4C58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E4DEC; } }
L_001E4C60:
    set32(c.r[4], c.r[18].w[0] + 496u);
    set32(c.r[5], c.r[5].w[0] - 15264u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4C70u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001E4C70u) [[unlikely]] return; }
L_001E4C70:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001E4C90; }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4C88u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 23u, depth + 1u); else { c.pc = 0x001F0190u; return; } if (c.pc != 0x001E4C88u) [[unlikely]] return; }
L_001E4C88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E4DEC; } }
L_001E4C90:
    set32(c.r[4], c.r[18].w[0] + 496u);
    set32(c.r[5], c.r[5].w[0] - 15248u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4CA0u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001E4CA0u) [[unlikely]] return; }
L_001E4CA0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001E4CC0; }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4CB8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 309u, depth + 1u); else { c.pc = 0x001EF4D0u; return; } if (c.pc != 0x001E4CB8u) [[unlikely]] return; }
L_001E4CB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E4DEC; } }
L_001E4CC0:
    set32(c.r[4], c.r[18].w[0] + 496u);
    set32(c.r[5], c.r[5].w[0] - 15304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4CD0u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001E4CD0u) [[unlikely]] return; }
L_001E4CD0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001E4CF0; }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4CE8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 286u, depth + 1u); else { c.pc = 0x001EF200u; return; } if (c.pc != 0x001E4CE8u) [[unlikely]] return; }
L_001E4CE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E4DEC; } }
L_001E4CF0:
    set32(c.r[4], c.r[18].w[0] + 496u);
    set32(c.r[5], c.r[5].w[0] - 15256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4D00u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001E4D00u) [[unlikely]] return; }
L_001E4D00:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001E4D20; }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4D18u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 266u, depth + 1u); else { c.pc = 0x001EEF20u; return; } if (c.pc != 0x001E4D18u) [[unlikely]] return; }
L_001E4D18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E4DEC; } }
L_001E4D20:
    set32(c.r[4], c.r[18].w[0] + 496u);
    set32(c.r[5], c.r[5].w[0] - 15240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4D30u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001E4D30u) [[unlikely]] return; }
L_001E4D30:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001E4D50; }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4D48u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 106u, depth + 1u); else { c.pc = 0x001EDB90u; return; } if (c.pc != 0x001E4D48u) [[unlikely]] return; }
L_001E4D48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E4DEC; } }
L_001E4D50:
    set32(c.r[4], c.r[18].w[0] + 496u);
    set32(c.r[5], c.r[5].w[0] - 15232u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4D60u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001E4D60u) [[unlikely]] return; }
L_001E4D60:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001E4D80; }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4D78u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 123u, depth + 1u); else { c.pc = 0x001EDD60u; return; } if (c.pc != 0x001E4D78u) [[unlikely]] return; }
L_001E4D78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E4DEC; } }
L_001E4D80:
    set32(c.r[4], c.r[18].w[0] + 496u);
    set32(c.r[5], c.r[5].w[0] - 15224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4D90u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001E4D90u) [[unlikely]] return; }
L_001E4D90:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001E4DB0; }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4DA8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 241u, depth + 1u); else { c.pc = 0x001EEC40u; return; } if (c.pc != 0x001E4DA8u) [[unlikely]] return; }
L_001E4DA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E4DEC; } }
L_001E4DB0:
    set32(c.r[4], c.r[18].w[0] + 496u);
    set32(c.r[5], c.r[5].w[0] - 15216u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4DC0u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001E4DC0u) [[unlikely]] return; }
L_001E4DC0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[6].d[0] = c.r[16].d[0] + 0ull;  goto L_001E4DE0; }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4DD8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x001ED960u; return; } if (c.pc != 0x001E4DD8u) [[unlikely]] return; }
L_001E4DD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E4DEC; } }
L_001E4DE0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4DECu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 70u, depth + 1u); else { c.pc = 0x001ED780u; return; } if (c.pc != 0x001E4DECu) [[unlikely]] return; }
L_001E4DEC:
    c.r[3].d[0] = ld64((c.r[18].w[0] + 248u));
    c.budget -= 1;
L_001E4DF0:
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E48F8u | kUnwind; return; } goto L_001E48F8; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001E4E20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = ld64((c.r[4].w[0] + 256u));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001E4E54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4E54u);  if (depth < kMaxDepth) unit_003B(c, 11u, depth + 1u); else { c.pc = 0x001EC320u; return; } if (c.pc != 0x001E4E54u) [[unlikely]] return; }
L_001E4E54:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 503u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = ld64((c.r[18].w[0] + 416u));  if (t) { goto L_001E50B8; } }
    c.r[2].d[0] = ld64((c.r[18].w[0] + 264u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld64((c.r[18].w[0] + 248u));  goto L_001E50BC; }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 504u));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E50B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 21200u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001E4000u < 16384u) { entry = entries_0039[(t - 0x001E4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001E4E9C:
    c.r[2].d[0] = c.r[5].d[0] & 7ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E50B8; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001E4ED0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 15040u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4ECCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 61u, depth + 1u); else { c.pc = 0x001ED2D0u; return; } if (c.pc != 0x001E4ECCu) [[unlikely]] return; }
L_001E4ECC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001E4ED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4ED8u);  if (depth < kMaxDepth) unit_003B(c, 19u, depth + 1u); else { c.pc = 0x001EC6D0u; return; } if (c.pc != 0x001E4ED8u) [[unlikely]] return; }
L_001E4ED8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001E547C; } }
L_001E4EE0:
    c.r[2].d[0] = c.r[5].d[0] & 7ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E4EFC; } }
    c.r[2].d[0] = ld64((c.r[18].w[0] + 360u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E50B8; } }
L_001E4EFC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001E4F2C; }
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 15040u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4F28u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 61u, depth + 1u); else { c.pc = 0x001ED2D0u; return; } if (c.pc != 0x001E4F28u) [[unlikely]] return; }
L_001E4F28:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001E4F2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4F34u);  if (depth < kMaxDepth) unit_003B(c, 19u, depth + 1u); else { c.pc = 0x001EC6D0u; return; } if (c.pc != 0x001E4F34u) [[unlikely]] return; }
L_001E4F34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E5478; } }
L_001E4F3C:
    c.r[3].d[0] = c.r[5].d[0] & 7ull;
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E50B8; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001E4F80; }
    c.r[2].d[0] = c.r[5].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E4F7C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 15040u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4F7Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 61u, depth + 1u); else { c.pc = 0x001ED2D0u; return; } if (c.pc != 0x001E4F7Cu) [[unlikely]] return; }
L_001E4F7C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001E4F80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4F88u);  if (depth < kMaxDepth) unit_003B(c, 19u, depth + 1u); else { c.pc = 0x001EC6D0u; return; } if (c.pc != 0x001E4F88u) [[unlikely]] return; }
L_001E4F88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E5478; } }
L_001E4F90:
    c.r[2].d[0] = c.r[5].d[0] & 3ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E4FAC; } }
    c.r[2].d[0] = ld64((c.r[18].w[0] + 360u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E50B8; } }
L_001E4FAC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001E4FDC; }
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 15040u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4FD8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 61u, depth + 1u); else { c.pc = 0x001ED2D0u; return; } if (c.pc != 0x001E4FD8u) [[unlikely]] return; }
L_001E4FD8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001E4FDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E4FE4u);  if (depth < kMaxDepth) unit_003B(c, 19u, depth + 1u); else { c.pc = 0x001EC6D0u; return; } if (c.pc != 0x001E4FE4u) [[unlikely]] return; }
L_001E4FE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E5478; } }
L_001E4FEC:
    c.r[3].d[0] = c.r[5].d[0] & 3ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001E50B8; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001E5030; }
    c.r[2].d[0] = c.r[5].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E502C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 15040u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E502Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 61u, depth + 1u); else { c.pc = 0x001ED2D0u; return; } if (c.pc != 0x001E502Cu) [[unlikely]] return; }
L_001E502C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001E5030:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5038u);  if (depth < kMaxDepth) unit_003B(c, 19u, depth + 1u); else { c.pc = 0x001EC6D0u; return; } if (c.pc != 0x001E5038u) [[unlikely]] return; }
L_001E5038:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E5478; } }
L_001E5040:
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E505C; } }
    c.r[2].d[0] = ld64((c.r[18].w[0] + 360u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E50B8; } }
L_001E505C:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001E508C; }
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 15040u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5088u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 61u, depth + 1u); else { c.pc = 0x001ED2D0u; return; } if (c.pc != 0x001E5088u) [[unlikely]] return; }
L_001E5088:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001E508C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5094u);  if (depth < kMaxDepth) unit_003B(c, 19u, depth + 1u); else { c.pc = 0x001EC6D0u; return; } if (c.pc != 0x001E5094u) [[unlikely]] return; }
L_001E5094:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E5478; } }
L_001E509C:
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E50B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E50B0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 19u, depth + 1u); else { c.pc = 0x001EC6D0u; return; } if (c.pc != 0x001E50B0u) [[unlikely]] return; }
L_001E50B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E5478; } }
L_001E50B8:
    c.r[2].d[0] = ld64((c.r[18].w[0] + 248u));
    c.budget -= 1;
L_001E50BC:
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 428u)));  goto L_001E50DC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E50D8u); set32(c.r[5], c.r[5].w[0] - 21053u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001E50D8u) [[unlikely]] return; }
L_001E50D8:
    set32(c.r[2], ld32((c.r[18].w[0] + 428u)));
    c.budget -= 1;
L_001E50DC:
    st32((c.r[18].w[0] + 284u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 400u)));
    st32((c.r[18].w[0] + 288u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 276u)));
    c.budget -= 4;
L_001E50EC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[18].w[0] + 272u);  goto L_001E5204; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld64((c.r[18].w[0] + 472u));  if (t) { goto L_001E51A0; } }
L_001E50FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5104u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_003C(c, 120u, depth + 1u); else { c.pc = 0x001F0E70u; return; } if (c.pc != 0x001E5104u) [[unlikely]] return; }
L_001E5104:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 76u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5114u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0039(c, 276u, depth + 1u); else { c.pc = 0x001E5EC0u; return; } if (c.pc != 0x001E5114u) [[unlikely]] return; }
L_001E5114:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E511Cu); set32(c.r[4], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_003C(c, 132u, depth + 1u); else { c.pc = 0x001F1070u; return; } if (c.pc != 0x001E511Cu) [[unlikely]] return; }
L_001E511C:
    c.r[1].d[0] = 0ull | 0ull;
    st64((c.r[18].w[0] + 472u), c.r[2].d[0]);
    c.r[1].d[0] = c.r[1].d[0] << 16;
    c.r[2].d[0] = ld64((c.r[18].w[0] + 472u));
    c.r[1].d[0] = c.r[1].d[0] << 16;
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.r[1].d[0] = c.r[1].d[0] << 16;
    c.r[1].d[0] = c.r[2].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[1].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001E5158; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5154u); set32(c.r[5], c.r[5].w[0] - 21097u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001E5154u) [[unlikely]] return; }
L_001E5154:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001E5158:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5160u);  if (depth < kMaxDepth) unit_003C(c, 460u, depth + 1u); else { c.pc = 0x001F3D10u; return; } if (c.pc != 0x001E5160u) [[unlikely]] return; }
L_001E5160:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 496u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5170u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_003C(c, 129u, depth + 1u); else { c.pc = 0x001F1020u; return; } if (c.pc != 0x001E5170u) [[unlikely]] return; }
L_001E5170:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[18].w[0] + 496u);
    set32(c.r[5], c.r[5].w[0] - 15360u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5184u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001E5184u) [[unlikely]] return; }
L_001E5184:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E519C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E519Cu); set32(c.r[5], c.r[5].w[0] - 21020u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001E519Cu) [[unlikely]] return; }
L_001E519C:
    c.r[2].d[0] = ld64((c.r[18].w[0] + 472u));
    c.budget -= 1;
L_001E51A0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E50FCu | kUnwind; return; } goto L_001E50FC; }
    set32(c.r[2], ld32((c.r[18].w[0] + 332u)));
    st32((c.r[18].w[0] + 276u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 328u)));
    st32((c.r[18].w[0] + 272u), c.r[2].w[0]);
    c.r[3].d[0] = ld64((c.r[18].w[0] + 472u));
    c.r[2].d[0] = ld32((c.r[18].w[0] + 332u));
    c.r[1].d[0] = c.r[3].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 328u)));  goto L_001E51E4; }
    c.r[2].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[18].w[0] + 276u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 328u)));
    c.budget -= 4;
L_001E51E4:
    set32(c.r[6], ld32((c.r[18].w[0] + 276u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E51F0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 129u, depth + 1u); else { c.pc = 0x001F1020u; return; } if (c.pc != 0x001E51F0u) [[unlikely]] return; }
L_001E51F0:
    c.r[3].d[0] = ld32((c.r[18].w[0] + 276u));
    c.r[2].d[0] = ld64((c.r[18].w[0] + 472u));
    c.r[2].d[0] = c.r[2].d[0] - c.r[3].d[0];
    st64((c.r[18].w[0] + 472u), c.r[2].d[0]);
    set32(c.r[4], c.r[18].w[0] + 272u);
    c.budget -= 5;
L_001E5204:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E520Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00A4(c, 106u, depth + 1u); else { c.pc = 0x003934E0u; return; } if (c.pc != 0x001E520Cu) [[unlikely]] return; }
L_001E520C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001E5268; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 288u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E523C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 276u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001E523C; } }
    c.r[2].d[0] = ld64((c.r[18].w[0] + 472u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld64((c.r[18].w[0] + 248u));  goto L_001E5250; }
L_001E523C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E524Cu); set32(c.r[5], c.r[5].w[0] - 20998u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001E524Cu) [[unlikely]] return; }
L_001E524C:
    c.r[2].d[0] = ld64((c.r[18].w[0] + 248u));
    c.budget -= 1;
L_001E5250:
    c.r[2].d[0] = c.r[2].d[0] | 8ull;
    st64((c.r[18].w[0] + 248u), c.r[2].d[0]);
    c.r[2].d[0] = ld64((c.r[18].w[0] + 256u));
    c.r[2].d[0] = c.r[2].d[0] | 32ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st64((c.r[18].w[0] + 256u), c.r[2].d[0]);  if (t) { goto L_001E52A0; } }
L_001E5268:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 288u)));  goto L_001E5298; }
    set32(c.r[5], ld32((c.r[18].w[0] + 296u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001E5284; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001E528C; } }
L_001E5284:
    set32(c.r[5], c.r[5].w[0] - 20976u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_001E528C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5294u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001E5294u) [[unlikely]] return; }
L_001E5294:
    set32(c.r[2], ld32((c.r[18].w[0] + 288u)));
    c.budget -= 1;
L_001E5298:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 276u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E50ECu | kUnwind; return; } goto L_001E50EC; }
L_001E52A0:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 506u));
    st8((c.r[18].w[0] + 464u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld64((c.r[18].w[0] + 408u));
    st64((c.r[18].w[0] + 448u), c.r[2].d[0]);
    c.r[2].d[0] = ld8((c.r[18].w[0] + 510u));
    st8((c.r[18].w[0] + 466u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 507u));
    st8((c.r[18].w[0] + 465u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 509u));
    st8((c.r[18].w[0] + 467u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld64((c.r[18].w[0] + 448u));
    c.r[5].d[0] = ld8((c.r[18].w[0] + 467u));
    c.r[3].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    mmi::multu(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[3].d[0] = c.hi.d[0];
    mmi::pextlw(c.r[3], c.r[3], c.r[4]);
    c.r[2].d[0] = c.r[2].d[0] + c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(7ll);
    c.r[2].d[0] = c.r[2].d[0] >> 3;
    st64((c.r[18].w[0] + 456u), c.r[2].d[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 428u)));
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 29;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld64((c.r[18].w[0] + 392u));  goto L_001E5334; }
    c.r[8].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[6], c.r[3].w[0] + 1u);
    set32(c.r[2], ld32((c.r[18].w[0] + 424u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 448u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5330u); set32(c.r[7], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_003B(c, 41u, depth + 1u); else { c.pc = 0x001ECAB0u; return; } if (c.pc != 0x001E5330u) [[unlikely]] return; }
L_001E5330:
    c.r[2].d[0] = ld64((c.r[18].w[0] + 392u));
    c.budget -= 1;
L_001E5334:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 424u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 428u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5348u); c.r[7].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);  if (depth < kMaxDepth) unit_0038(c, 537u, depth + 1u); else { c.pc = 0x001E3E60u; return; } if (c.pc != 0x001E5348u) [[unlikely]] return; }
L_001E5348:
    c.r[2].d[0] = ld64((c.r[18].w[0] + 800u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld64((c.r[18].w[0] + 264u));  goto L_001E537C; }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 816u));
    set32(c.r[2], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E5378; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 428u)));
    set32(c.r[4], c.r[18].w[0] + 448u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5378u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0039(c, 279u, depth + 1u); else { c.pc = 0x001E5F00u; return; } if (c.pc != 0x001E5378u) [[unlikely]] return; }
L_001E5378:
    c.r[2].d[0] = ld64((c.r[18].w[0] + 264u));
    c.budget -= 1;
L_001E537C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[18].w[0] + 503u));  goto L_001E5390; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E538Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003A(c, 72u, depth + 1u); else { c.pc = 0x001EAB60u; return; } if (c.pc != 0x001E538Cu) [[unlikely]] return; }
L_001E538C:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 503u));
    c.budget -= 1;
L_001E5390:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E5420; } }
    c.r[2].d[0] = ld64((c.r[18].w[0] + 264u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E5420; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 504u));
    c.r[1].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E53C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E53C0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 49u, depth + 1u); else { c.pc = 0x001ECD60u; return; } if (c.pc != 0x001E53C0u) [[unlikely]] return; }
L_001E53C0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001E53EC; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 504u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 15040u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E53ECu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 61u, depth + 1u); else { c.pc = 0x001ED2D0u; return; } if (c.pc != 0x001E53ECu) [[unlikely]] return; }
L_001E53EC:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001E5454; }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 504u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 15072u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5418u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 61u, depth + 1u); else { c.pc = 0x001ED2D0u; return; } if (c.pc != 0x001E5418u) [[unlikely]] return; }
L_001E5418:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E5450; } }
L_001E5420:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001E5438; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5438u); set32(c.r[6], 0u + 255u);  if (depth < kMaxDepth) unit_003B(c, 61u, depth + 1u); else { c.pc = 0x001ED2D0u; return; } if (c.pc != 0x001E5438u) [[unlikely]] return; }
L_001E5438:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001E5450; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5450u); set32(c.r[6], 0u + 255u);  if (depth < kMaxDepth) unit_003B(c, 61u, depth + 1u); else { c.pc = 0x001ED2D0u; return; } if (c.pc != 0x001E5450u) [[unlikely]] return; }
L_001E5450:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001E5454:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E545Cu);  if (depth < kMaxDepth) unit_003B(c, 19u, depth + 1u); else { c.pc = 0x001EC6D0u; return; } if (c.pc != 0x001E545Cu) [[unlikely]] return; }
L_001E545C:
    set32(c.r[3], ld32((c.r[18].w[0] + 632u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E5478; } }
    c.r[6].d[0] = ld8((c.r[18].w[0] + 504u));
    c.r[5].d[0] = ld64((c.r[18].w[0] + 416u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5478u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E5478u) [[unlikely]] return; }
L_001E5478:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_001E547C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001E5490:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = ld8((c.r[4].w[0] + 512u));
    c.r[1].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001E5558; } }
    set32(c.r[3], 0u + 8u);
    set32(c.r[2], c.r[17].w[0] + c.r[16].w[0]);
    set32(c.r[19], c.r[3].w[0] - c.r[16].w[0]);
    set32(c.r[5], c.r[2].w[0] + 48u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E54D4u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 276u, depth + 1u); else { c.pc = 0x001E5EC0u; return; } if (c.pc != 0x001E54D4u) [[unlikely]] return; }
L_001E54D4:
    set32(c.r[2], 0u + 8u);
    set32(c.r[4], c.r[17].w[0] + 48u);
    st8((c.r[18].w[0] + 512u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E54ECu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 468u, depth + 1u); else { c.pc = 0x001F3E40u; return; } if (c.pc != 0x001E54ECu) [[unlikely]] return; }
L_001E54EC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;  goto L_001E5544; }
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E5530; } }
    set32(c.r[6], c.r[19].w[0] - 4u);
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5510u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 468u, depth + 1u); else { c.pc = 0x001F3E40u; return; } if (c.pc != 0x001E5510u) [[unlikely]] return; }
L_001E5510:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001E5530; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5528u); set32(c.r[5], c.r[5].w[0] - 20956u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001E5528u) [[unlikely]] return; }
L_001E5528:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E5540; } }
L_001E5530:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5540u); set32(c.r[5], c.r[5].w[0] - 20941u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001E5540u) [[unlikely]] return; }
L_001E5540:
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 1;
L_001E5544:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001E555C; }
    c.r[2].d[0] = ld64((c.r[18].w[0] + 248u));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    st64((c.r[18].w[0] + 248u), c.r[2].d[0]);
    c.budget -= 3;
L_001E5558:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001E555C:
    set32(c.r[5], c.r[29].w[0] + 92u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5568u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0039(c, 276u, depth + 1u); else { c.pc = 0x001E5EC0u; return; } if (c.pc != 0x001E5568u) [[unlikely]] return; }
L_001E5568:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5570u); set32(c.r[4], c.r[29].w[0] + 92u);  if (depth < kMaxDepth) unit_003C(c, 132u, depth + 1u); else { c.pc = 0x001F1070u; return; } if (c.pc != 0x001E5570u) [[unlikely]] return; }
L_001E5570:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E557Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 460u, depth + 1u); else { c.pc = 0x001F3D10u; return; } if (c.pc != 0x001E557Cu) [[unlikely]] return; }
L_001E557C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 496u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E558Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_003C(c, 129u, depth + 1u); else { c.pc = 0x001F1020u; return; } if (c.pc != 0x001E558Cu) [[unlikely]] return; }
L_001E558C:
    c.r[1].d[0] = 0ull | 0ull;
    c.r[1].d[0] = c.r[1].d[0] << 16;
    c.r[1].d[0] = c.r[1].d[0] << 16;
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.r[1].d[0] = c.r[1].d[0] << 16;
    c.r[1].d[0] = c.r[16].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E55BC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E55BCu); set32(c.r[5], c.r[5].w[0] - 21097u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001E55BCu) [[unlikely]] return; }
L_001E55BC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[18].w[0] + 496u);
    set32(c.r[5], c.r[5].w[0] - 15368u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E55D0u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001E55D0u) [[unlikely]] return; }
L_001E55D0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001E55F0; }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E55E8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 78u, depth + 1u); else { c.pc = 0x001F0860u; return; } if (c.pc != 0x001E55E8u) [[unlikely]] return; }
L_001E55E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E5558u | kUnwind; return; } goto L_001E5558; } }
L_001E55F0:
    set32(c.r[4], c.r[18].w[0] + 496u);
    set32(c.r[5], c.r[5].w[0] - 15352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5600u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001E5600u) [[unlikely]] return; }
L_001E5600:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_001E5620; }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5618u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 55u, depth + 1u); else { c.pc = 0x001F05A0u; return; } if (c.pc != 0x001E5618u) [[unlikely]] return; }
L_001E5618:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E5558u | kUnwind; return; } goto L_001E5558; } }
L_001E5620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5628u); set32(c.r[5], c.r[18].w[0] + 496u);  if (depth < kMaxDepth) unit_003C(c, 420u, depth + 1u); else { c.pc = 0x001F3600u; return; } if (c.pc != 0x001E5628u) [[unlikely]] return; }
L_001E5628:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001E5704; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[18].w[0] + 496u);
    set32(c.r[5], c.r[5].w[0] - 15360u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5644u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001E5644u) [[unlikely]] return; }
L_001E5644:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[6].d[0] = c.r[16].d[0] + 0ull;  goto L_001E565C; }
    c.r[2].d[0] = ld64((c.r[18].w[0] + 248u));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st64((c.r[18].w[0] + 248u), c.r[2].d[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_001E565C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5668u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 70u, depth + 1u); else { c.pc = 0x001ED780u; return; } if (c.pc != 0x001E5668u) [[unlikely]] return; }
L_001E5668:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[18].w[0] + 496u);
    set32(c.r[5], c.r[5].w[0] - 15344u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E567Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001E567Cu) [[unlikely]] return; }
L_001E567C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001E5694; }
    c.r[2].d[0] = ld64((c.r[18].w[0] + 248u));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st64((c.r[18].w[0] + 248u), c.r[2].d[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E5558u | kUnwind; return; } goto L_001E5558; } }
L_001E5694:
    set32(c.r[4], c.r[18].w[0] + 496u);
    set32(c.r[5], c.r[5].w[0] - 15360u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E56A4u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001E56A4u) [[unlikely]] return; }
L_001E56A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E5558u | kUnwind; return; } goto L_001E5558; } }
    c.r[5].d[0] = ld64((c.r[18].w[0] + 248u));
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = ld8((c.r[18].w[0] + 506u));  goto L_001E56D4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E56CCu); set32(c.r[5], c.r[5].w[0] - 20902u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001E56CCu) [[unlikely]] return; }
L_001E56CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_001E5AC8; } }
L_001E56D4:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001E5AC4; } }
    c.r[3].d[0] = c.r[5].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E5AC4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E56FCu); set32(c.r[5], c.r[5].w[0] - 20877u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001E56FCu) [[unlikely]] return; }
L_001E56FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E5AC4; } }
L_001E5704:
    set32(c.r[4], c.r[18].w[0] + 496u);
    set32(c.r[5], c.r[5].w[0] - 15344u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5714u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001E5714u) [[unlikely]] return; }
L_001E5714:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001E5734; }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E572Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 59u, depth + 1u); else { c.pc = 0x001F0620u; return; } if (c.pc != 0x001E572Cu) [[unlikely]] return; }
L_001E572C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E5558u | kUnwind; return; } goto L_001E5558; } }
L_001E5734:
    set32(c.r[4], c.r[18].w[0] + 496u);
    set32(c.r[5], c.r[5].w[0] - 15360u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5744u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001E5744u) [[unlikely]] return; }
L_001E5744:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001E57B0; }
    c.r[5].d[0] = ld64((c.r[18].w[0] + 248u));
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = ld8((c.r[18].w[0] + 506u));  goto L_001E5774; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E576Cu); set32(c.r[5], c.r[5].w[0] - 20902u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001E576Cu) [[unlikely]] return; }
L_001E576C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st64((c.r[18].w[0] + 472u), c.r[16].d[0]);  if (t) { goto L_001E57A0; } }
L_001E5774:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001E579C; } }
    c.r[3].d[0] = c.r[5].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001E579C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E579Cu); set32(c.r[5], c.r[5].w[0] - 20877u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001E579Cu) [[unlikely]] return; }
L_001E579C:
    st64((c.r[18].w[0] + 472u), c.r[16].d[0]);
    c.budget -= 1;
L_001E57A0:
    c.r[3].d[0] = ld64((c.r[18].w[0] + 248u));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st64((c.r[18].w[0] + 248u), c.r[3].d[0]);  if (t) { goto L_001E5AC4; } }
L_001E57B0:
    set32(c.r[4], c.r[18].w[0] + 496u);
    set32(c.r[5], c.r[5].w[0] - 15336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E57C0u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001E57C0u) [[unlikely]] return; }
L_001E57C0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001E57E0; }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E57D8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 226u, depth + 1u); else { c.pc = 0x001EE9A0u; return; } if (c.pc != 0x001E57D8u) [[unlikely]] return; }
L_001E57D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E5558u | kUnwind; return; } goto L_001E5558; } }
L_001E57E0:
    set32(c.r[4], c.r[18].w[0] + 496u);
    set32(c.r[5], c.r[5].w[0] - 15328u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E57F0u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001E57F0u) [[unlikely]] return; }
L_001E57F0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001E5810; }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5808u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 326u, depth + 1u); else { c.pc = 0x001EF810u; return; } if (c.pc != 0x001E5808u) [[unlikely]] return; }
L_001E5808:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E5558u | kUnwind; return; } goto L_001E5558; } }
L_001E5810:
    set32(c.r[4], c.r[18].w[0] + 496u);
    set32(c.r[5], c.r[5].w[0] - 15320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5820u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001E5820u) [[unlikely]] return; }
L_001E5820:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001E5840; }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5838u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 36u, depth + 1u); else { c.pc = 0x001F0360u; return; } if (c.pc != 0x001E5838u) [[unlikely]] return; }
L_001E5838:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E5558u | kUnwind; return; } goto L_001E5558; } }
L_001E5840:
    set32(c.r[4], c.r[18].w[0] + 496u);
    set32(c.r[5], c.r[5].w[0] - 15312u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5850u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001E5850u) [[unlikely]] return; }
L_001E5850:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001E5870; }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5868u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 211u, depth + 1u); else { c.pc = 0x001EE800u; return; } if (c.pc != 0x001E5868u) [[unlikely]] return; }
L_001E5868:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E5558u | kUnwind; return; } goto L_001E5558; } }
L_001E5870:
    set32(c.r[4], c.r[18].w[0] + 496u);
    set32(c.r[5], c.r[5].w[0] - 15296u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5880u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001E5880u) [[unlikely]] return; }
L_001E5880:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001E58A0; }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5898u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 187u, depth + 1u); else { c.pc = 0x001EE500u; return; } if (c.pc != 0x001E5898u) [[unlikely]] return; }
L_001E5898:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E5558u | kUnwind; return; } goto L_001E5558; } }
L_001E58A0:
    set32(c.r[4], c.r[18].w[0] + 496u);
    set32(c.r[5], c.r[5].w[0] - 15288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E58B0u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001E58B0u) [[unlikely]] return; }
L_001E58B0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001E58D0; }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E58C8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 156u, depth + 1u); else { c.pc = 0x001EE110u; return; } if (c.pc != 0x001E58C8u) [[unlikely]] return; }
L_001E58C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E5558u | kUnwind; return; } goto L_001E5558; } }
L_001E58D0:
    set32(c.r[4], c.r[18].w[0] + 496u);
    set32(c.r[5], c.r[5].w[0] - 15280u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E58E0u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001E58E0u) [[unlikely]] return; }
L_001E58E0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001E5900; }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E58F8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 133u, depth + 1u); else { c.pc = 0x001EDEB0u; return; } if (c.pc != 0x001E58F8u) [[unlikely]] return; }
L_001E58F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E5558u | kUnwind; return; } goto L_001E5558; } }
L_001E5900:
    set32(c.r[4], c.r[18].w[0] + 496u);
    set32(c.r[5], c.r[5].w[0] - 15272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5910u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001E5910u) [[unlikely]] return; }
L_001E5910:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001E5930; }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5928u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 199u, depth + 1u); else { c.pc = 0x001EE680u; return; } if (c.pc != 0x001E5928u) [[unlikely]] return; }
L_001E5928:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E5558u | kUnwind; return; } goto L_001E5558; } }
L_001E5930:
    set32(c.r[4], c.r[18].w[0] + 496u);
    set32(c.r[5], c.r[5].w[0] - 15264u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5940u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001E5940u) [[unlikely]] return; }
L_001E5940:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001E5960; }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5958u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003C(c, 23u, depth + 1u); else { c.pc = 0x001F0190u; return; } if (c.pc != 0x001E5958u) [[unlikely]] return; }
L_001E5958:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E5558u | kUnwind; return; } goto L_001E5558; } }
L_001E5960:
    set32(c.r[4], c.r[18].w[0] + 496u);
    set32(c.r[5], c.r[5].w[0] - 15248u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5970u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001E5970u) [[unlikely]] return; }
L_001E5970:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001E5990; }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5988u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 309u, depth + 1u); else { c.pc = 0x001EF4D0u; return; } if (c.pc != 0x001E5988u) [[unlikely]] return; }
L_001E5988:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E5558u | kUnwind; return; } goto L_001E5558; } }
L_001E5990:
    set32(c.r[4], c.r[18].w[0] + 496u);
    set32(c.r[5], c.r[5].w[0] - 15304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E59A0u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001E59A0u) [[unlikely]] return; }
L_001E59A0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001E59C0; }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E59B8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 286u, depth + 1u); else { c.pc = 0x001EF200u; return; } if (c.pc != 0x001E59B8u) [[unlikely]] return; }
L_001E59B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E5558u | kUnwind; return; } goto L_001E5558; } }
L_001E59C0:
    set32(c.r[4], c.r[18].w[0] + 496u);
    set32(c.r[5], c.r[5].w[0] - 15256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E59D0u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001E59D0u) [[unlikely]] return; }
L_001E59D0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001E59F0; }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E59E8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 266u, depth + 1u); else { c.pc = 0x001EEF20u; return; } if (c.pc != 0x001E59E8u) [[unlikely]] return; }
L_001E59E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E5558u | kUnwind; return; } goto L_001E5558; } }
L_001E59F0:
    set32(c.r[4], c.r[18].w[0] + 496u);
    set32(c.r[5], c.r[5].w[0] - 15240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5A00u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001E5A00u) [[unlikely]] return; }
L_001E5A00:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001E5A20; }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5A18u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 106u, depth + 1u); else { c.pc = 0x001EDB90u; return; } if (c.pc != 0x001E5A18u) [[unlikely]] return; }
L_001E5A18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E5558u | kUnwind; return; } goto L_001E5558; } }
L_001E5A20:
    set32(c.r[4], c.r[18].w[0] + 496u);
    set32(c.r[5], c.r[5].w[0] - 15232u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5A30u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001E5A30u) [[unlikely]] return; }
L_001E5A30:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001E5A50; }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5A48u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 123u, depth + 1u); else { c.pc = 0x001EDD60u; return; } if (c.pc != 0x001E5A48u) [[unlikely]] return; }
L_001E5A48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E5558u | kUnwind; return; } goto L_001E5558; } }
L_001E5A50:
    set32(c.r[4], c.r[18].w[0] + 496u);
    set32(c.r[5], c.r[5].w[0] - 15224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5A60u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001E5A60u) [[unlikely]] return; }
L_001E5A60:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001E5A80; }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5A78u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 241u, depth + 1u); else { c.pc = 0x001EEC40u; return; } if (c.pc != 0x001E5A78u) [[unlikely]] return; }
L_001E5A78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E5558u | kUnwind; return; } goto L_001E5558; } }
L_001E5A80:
    set32(c.r[4], c.r[18].w[0] + 496u);
    set32(c.r[5], c.r[5].w[0] - 15216u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5A90u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_00AE(c, 1u, depth + 1u); else { c.pc = 0x003B8000u; return; } if (c.pc != 0x001E5A90u) [[unlikely]] return; }
L_001E5A90:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[6].d[0] = c.r[16].d[0] + 0ull;  goto L_001E5AB0; }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5AA8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 87u, depth + 1u); else { c.pc = 0x001ED960u; return; } if (c.pc != 0x001E5AA8u) [[unlikely]] return; }
L_001E5AA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E5558u | kUnwind; return; } goto L_001E5558; } }
L_001E5AB0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5ABCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_003B(c, 70u, depth + 1u); else { c.pc = 0x001ED780u; return; } if (c.pc != 0x001E5ABCu) [[unlikely]] return; }
L_001E5ABC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E5558u | kUnwind; return; } goto L_001E5558; } }
L_001E5AC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_001E5AC8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001E5AE0:
    set32(c.r[29], c.r[29].w[0] - 224u);
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
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[9].d[0] + 0ull;
    c.r[17].d[0] = c.r[10].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5B34u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0039(c, 12u, depth + 1u); else { c.pc = 0x001E4140u; return; } if (c.pc != 0x001E5B34u) [[unlikely]] return; }
L_001E5B34:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_001E5B48; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E5DAC; } }
L_001E5B48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5B50u);  if (depth < kMaxDepth) unit_003C(c, 419u, depth + 1u); else { c.pc = 0x001F35E0u; return; } if (c.pc != 0x001E5B50u) [[unlikely]] return; }
L_001E5B50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5B58u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 102u, depth + 1u); else { c.pc = 0x003B8FF8u; return; } if (c.pc != 0x001E5B58u) [[unlikely]] return; }
L_001E5B58:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[5].d[0] = c.r[19].d[0] + 0ull;  goto L_001E5B88; }
    set32(c.r[5], ld32((c.r[16].w[0] + 328u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5B6Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 545u, depth + 1u); else { c.pc = 0x001E3FC0u; return; } if (c.pc != 0x001E5B6Cu) [[unlikely]] return; }
L_001E5B6C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5B80u); st32((c.r[16].w[0] + 328u), 0u);  if (depth < kMaxDepth) unit_0039(c, 9u, depth + 1u); else { c.pc = 0x001E40F0u; return; } if (c.pc != 0x001E5B80u) [[unlikely]] return; }
L_001E5B80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001E5DAC; } }
L_001E5B88:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5B98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 533u, depth + 1u); else { c.pc = 0x001E3DE0u; return; } if (c.pc != 0x001E5B98u) [[unlikely]] return; }
L_001E5B98:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5BACu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0038(c, 498u, depth + 1u); else { c.pc = 0x001E37A0u; return; } if (c.pc != 0x001E5BACu) [[unlikely]] return; }
L_001E5BAC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[5], c.r[5].w[0] - 15392u);
    c.budget -= 4;
L_001E5BBC:
    set32(c.r[4], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[21].w[0] + c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    if (c.r[4].d[0] == c.r[2].d[0]) { set32(c.r[2], c.r[5].w[0] + c.r[6].w[0]);  goto L_001E5BE4; }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 256u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st64((c.r[16].w[0] + 256u), c.r[2].d[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 4;
L_001E5BE4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E5BBCu | kUnwind; return; } goto L_001E5BBC; } }
    c.r[3].d[0] = ld64((c.r[16].w[0] + 256u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 8192u);  goto L_001E5CC0; }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_001E5C5C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0])));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] - 15392u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001E5C5C; } }
    set32(c.r[2], 0u + 49u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 48u);  goto L_001E5C44; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] - 15390u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001E5C5C; } }
    set32(c.r[2], 0u + 48u);
    c.budget -= 1;
L_001E5C44:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001E5CBC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 2u)));
    c.r[1].d[0] = c.r[2].sd[0] < 57ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E5CBC; } }
L_001E5C5C:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_001E5C84; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5C78u); set32(c.r[5], c.r[5].w[0] - 20732u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x001E5C78u) [[unlikely]] return; }
L_001E5C78:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5C84u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001E5C84u) [[unlikely]] return; }
L_001E5C84:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], c.r[5].w[0] - 20678u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5C9Cu); set32(c.r[6], c.r[6].w[0] - 15392u);  if (depth < kMaxDepth) unit_00AE(c, 122u, depth + 1u); else { c.pc = 0x003B9568u; return; } if (c.pc != 0x001E5C9Cu) [[unlikely]] return; }
L_001E5C9C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5CA8u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001E5CA8u) [[unlikely]] return; }
L_001E5CA8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 20470u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5CBCu); st64((c.r[16].w[0] + 256u), 0ull);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001E5CBCu) [[unlikely]] return; }
L_001E5CBC:
    set32(c.r[2], 0u + 8192u);
    c.budget -= 1;
L_001E5CC0:
    st32((c.r[16].w[0] + 332u), c.r[2].w[0]);
    c.r[5].d[0] = ld32((c.r[16].w[0] + 332u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5CD0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 4u, depth + 1u); else { c.pc = 0x001E4020u; return; } if (c.pc != 0x001E5CD0u) [[unlikely]] return; }
L_001E5CD0:
    st32((c.r[16].w[0] + 328u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    set32(c.r[4], c.r[16].w[0] + 272u);
    set32(c.r[2], c.r[2].w[0] + 15712u);
    set32(c.r[5], c.r[5].w[0] - 20782u);
    st32((c.r[16].w[0] + 304u), c.r[2].w[0]);
    set32(c.r[6], 0u + 56u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    set32(c.r[2], c.r[2].w[0] + 15696u);
    st32((c.r[16].w[0] + 308u), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5D04u); st32((c.r[16].w[0] + 312u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_00A5(c, 49u, depth + 1u); else { c.pc = 0x00394DD0u; return; } if (c.pc != 0x001E5D04u) [[unlikely]] return; }
L_001E5D04:
    set32(c.r[3], 0u - 6u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001E5D50; }
    set32(c.r[3], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001E5D38; } }
    set32(c.r[3], 0u - 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001E5D38; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 328u)));  goto L_001E5D74; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_001E5D64; } }
L_001E5D38:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5D48u); set32(c.r[5], c.r[5].w[0] - 20415u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001E5D48u) [[unlikely]] return; }
L_001E5D48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E5D70; } }
L_001E5D50:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5D5Cu); set32(c.r[5], c.r[5].w[0] - 20397u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001E5D5Cu) [[unlikely]] return; }
L_001E5D5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E5D70; } }
L_001E5D64:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5D70u); set32(c.r[5], c.r[5].w[0] - 20751u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001E5D70u) [[unlikely]] return; }
L_001E5D70:
    set32(c.r[2], ld32((c.r[16].w[0] + 328u)));
    c.budget -= 1;
L_001E5D74:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 284u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 332u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5D90u); st32((c.r[16].w[0] + 288u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0039(c, 270u, depth + 1u); else { c.pc = 0x001E5DF0u; return; } if (c.pc != 0x001E5D90u) [[unlikely]] return; }
L_001E5D90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5D98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 102u, depth + 1u); else { c.pc = 0x003B8FF8u; return; } if (c.pc != 0x001E5D98u) [[unlikely]] return; }
L_001E5D98:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_001E5DAC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5DA8u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x001E5DA8u) [[unlikely]] return; }
L_001E5DA8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001E5DAC:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_001E5DE0:
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[10].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E5AE0u | kUnwind; return; } goto L_001E5AE0; }
L_001E5DF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 228u), c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_001E5E10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 224u), c.r[6].w[0]);  if (t) { goto L_001E5E1C; } }
L_001E5E10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001E0000u);
    set32(c.r[3], c.r[3].w[0] + 24160u);
    st32((c.r[16].w[0] + 224u), c.r[3].w[0]);
    c.budget -= 3;
L_001E5E1C:
    set32(c.r[3], ld32((c.r[16].w[0] + 220u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { st32((c.r[16].w[0] + 544u), 0u);  goto L_001E5E50; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 20368u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5E3Cu); st32((c.r[16].w[0] + 220u), 0u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001E5E3Cu) [[unlikely]] return; }
L_001E5E3C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5E4Cu); set32(c.r[5], c.r[5].w[0] - 20303u);  if (depth < kMaxDepth) unit_0038(c, 521u, depth + 1u); else { c.pc = 0x001E3BA0u; return; } if (c.pc != 0x001E5E4Cu) [[unlikely]] return; }
L_001E5E4C:
    st32((c.r[16].w[0] + 544u), 0u);
    c.budget -= 1;
L_001E5E50:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001E5E60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[17].w[0] + 228u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5E88u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00AD(c, 277u, depth + 1u); else { c.pc = 0x003B7130u; return; } if (c.pc != 0x001E5E88u) [[unlikely]] return; }
L_001E5E88:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[16].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_001E5EA4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5EA0u); set32(c.r[5], c.r[5].w[0] - 20253u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001E5EA0u) [[unlikely]] return; }
L_001E5EA0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001E5EA4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001E5EC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 224u)));
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_001E5EE4; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5EDCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001E5EDCu) [[unlikely]] return; }
L_001E5EDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_001E5EF0; } }
L_001E5EE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E5EECu); set32(c.r[5], c.r[5].w[0] - 20242u);  if (depth < kMaxDepth) unit_0038(c, 525u, depth + 1u); else { c.pc = 0x001E3C30u; return; } if (c.pc != 0x001E5EECu) [[unlikely]] return; }
L_001E5EEC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_001E5EF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001E5F00:
    c.r[8].d[0] = ld8((c.r[4].w[0] + 16u));
    c.r[3].d[0] = c.r[8].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E6054; } }
    c.r[7].d[0] = ld8((c.r[4].w[0] + 17u));
    set32(c.r[6], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[6].d[0]; c.r[3].d[0] = ld64((c.r[4].w[0]));  if (t) { goto L_001E5F90; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    if (c.r[8].d[0] != c.r[4].d[0]) { set32(c.r[4], 0u + 6u);  goto L_001E5F38; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[8], 0u + 3u);  if (t) { goto L_001E5F44; } }
    set32(c.r[4], 0u + 6u);
    c.budget -= 1;
L_001E5F38:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[4].d[0];  if (t) { goto L_001E6054; } }
    set32(c.r[8], 0u + 4u);
    c.budget -= 1;
L_001E5F44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_001E5F7C; } }
    c.r[6].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 1;
L_001E5F50:
    c.r[7].d[0] = c.r[7].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[6], c.r[6].w[0] + 256u);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 2u));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[6], c.r[6].w[0] + 256u);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], c.r[5].w[0] + c.r[8].w[0]);
    c.budget -= 11;
L_001E5F7C:
    c.r[4].d[0] = c.r[7].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { c.r[6].d[0] = ld8((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E5F50u | kUnwind; return; } goto L_001E5F50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E6054; } }
L_001E5F90:
    set32(c.r[4], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[4].d[0];  if (t) { goto L_001E6054; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    if (c.r[8].d[0] != c.r[4].d[0]) { set32(c.r[4], 0u + 6u);  goto L_001E5FB4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 6u);  if (t) { goto L_001E5FBC; } }
    set32(c.r[4], 0u + 6u);
    c.budget -= 1;
L_001E5FB4:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[4].d[0];  if (t) { goto L_001E6054; } }
L_001E5FBC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[10].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_001E6048; } }
    c.r[7].d[0] = ld8((c.r[5].w[0] + 2u));
    c.budget -= 1;
L_001E5FCC:
    c.r[4].d[0] = c.r[4].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[9].d[0] = ld8((c.r[5].w[0]));
    c.r[8].d[0] = ld8((c.r[5].w[0] + 3u));
    set32(c.r[11], c.r[7].w[0] << 8);
    c.r[7].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[9], c.r[9].w[0] << 8);
    c.r[11].d[0] = c.r[11].d[0] | c.r[8].d[0];
    c.r[8].d[0] = ld8((c.r[5].w[0] + 4u));
    c.r[11].d[0] = c.r[11].d[0] << 32;
    c.r[9].d[0] = c.r[9].d[0] | c.r[7].d[0];
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 32);
    c.r[7].d[0] = ld8((c.r[5].w[0] + 5u));
    c.r[9].d[0] = c.r[9].d[0] << 32;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 32);
    set32(c.r[8], c.r[8].w[0] << 8);
    c.r[9].d[0] = c.r[9].d[0] + c.r[10].d[0];
    c.r[7].d[0] = c.r[8].d[0] | c.r[7].d[0];
    c.r[8].d[0] = c.r[9].d[0] + c.r[11].d[0];
    c.r[7].d[0] = c.r[7].d[0] << 32;
    c.r[9].d[0] = c.r[8].d[0] & 65535ull;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[8].d[0] = c.r[7].d[0] + c.r[10].d[0];
    c.r[7].d[0] = c.r[9].d[0] >> 8;
    c.r[8].d[0] = c.r[8].d[0] + c.r[11].d[0];
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[8].d[0] = c.r[8].d[0] & 65535ull;
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[7].d[0] = c.r[8].d[0] >> 8;
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 31;
L_001E6048:
    c.r[7].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[7].d[0] != 0ull) { c.r[7].d[0] = ld8((c.r[5].w[0] + 2u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E5FCCu | kUnwind; return; } goto L_001E5FCC; }
L_001E6054:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E6060:
    set32(c.r[29], c.r[29].w[0] - 352u);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[20] = ld32((c.r[4].w[0] + 572u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E60A4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001E60A4u) [[unlikely]] return; }
L_001E60A4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E60B0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 218u, depth + 1u); else { c.pc = 0x003BDD60u; return; } if (c.pc != 0x001E60B0u) [[unlikely]] return; }
L_001E60B0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));  goto L_001E69A0; }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 507u));
    c.r[1].d[0] = c.r[2].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0] + 506u));  goto L_001E633C; }
    c.f[21] = ld32((c.r[17].w[0] + 576u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E60D4u); c.f[12] = c.f[21];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001E60D4u) [[unlikely]] return; }
L_001E60D4:
    c.r[5].d[0] = ld64((c.r[28].w[0] - 32712u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E60E0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 212u, depth + 1u); else { c.pc = 0x003BDCF0u; return; } if (c.pc != 0x001E60E0u) [[unlikely]] return; }
L_001E60E0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3FF00000u);  goto L_001E6110; }
    c.f[12] = fp::mul(c.f[20], c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FF00000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E60F8u); c.r[19].d[0] = c.r[2].d[0] << 32;  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001E60F8u) [[unlikely]] return; }
L_001E60F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FF00000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6108u); c.r[4].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x001E6108u) [[unlikely]] return; }
L_001E6108:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E6118; } }
L_001E6110:
    c.r[19].d[0] = c.r[2].d[0] << 32;
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_001E6118:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6124u); set32(c.r[5], 0u + 256u);  if (depth < kMaxDepth) unit_0039(c, 4u, depth + 1u); else { c.pc = 0x001E4020u; return; } if (c.pc != 0x001E6124u) [[unlikely]] return; }
L_001E6124:
    st32((c.r[17].w[0] + 580u), c.r[2].w[0]);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001E612C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6134u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001E6134u) [[unlikely]] return; }
L_001E6134:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6140u); set32(c.r[4], 0u + 255u);  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001E6140u) [[unlikely]] return; }
L_001E6140:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E614Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x001E614Cu) [[unlikely]] return; }
L_001E614C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6158u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 426u, depth + 1u); else { c.pc = 0x003AF6E0u; return; } if (c.pc != 0x001E6158u) [[unlikely]] return; }
L_001E6158:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6164u); set32(c.r[4], 0u + 255u);  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001E6164u) [[unlikely]] return; }
L_001E6164:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6170u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x001E6170u) [[unlikely]] return; }
L_001E6170:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6180u); c.r[4].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x001E6180u) [[unlikely]] return; }
L_001E6180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6188u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 111u, depth + 1u); else { c.pc = 0x003B25F8u; return; } if (c.pc != 0x001E6188u) [[unlikely]] return; }
L_001E6188:
    set32(c.r[3], ld32((c.r[17].w[0] + 580u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E612Cu | kUnwind; return; } goto L_001E612C; } }
    c.r[6].d[0] = ld64((c.r[17].w[0] + 264u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E699C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E61C4u); c.f[12] = ld32((c.r[17].w[0] + 572u));  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001E61C4u) [[unlikely]] return; }
L_001E61C4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E61D0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x001E61D0u) [[unlikely]] return; }
L_001E61D0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E61E0u); set32(c.r[5], 0u + 256u);  if (depth < kMaxDepth) unit_0039(c, 4u, depth + 1u); else { c.pc = 0x001E4020u; return; } if (c.pc != 0x001E61E0u) [[unlikely]] return; }
L_001E61E0:
    st32((c.r[17].w[0] + 588u), c.r[2].w[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001E61E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E61F0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001E61F0u) [[unlikely]] return; }
L_001E61F0:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E61FCu); set32(c.r[4], 0u + 255u);  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001E61FCu) [[unlikely]] return; }
L_001E61FC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6208u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x001E6208u) [[unlikely]] return; }
L_001E6208:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6214u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 426u, depth + 1u); else { c.pc = 0x003AF6E0u; return; } if (c.pc != 0x001E6214u) [[unlikely]] return; }
L_001E6214:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6220u); set32(c.r[4], 0u + 255u);  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001E6220u) [[unlikely]] return; }
L_001E6220:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E622Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x001E622Cu) [[unlikely]] return; }
L_001E622C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E623Cu); c.r[4].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x001E623Cu) [[unlikely]] return; }
L_001E623C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6244u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 111u, depth + 1u); else { c.pc = 0x003B25F8u; return; } if (c.pc != 0x001E6244u) [[unlikely]] return; }
L_001E6244:
    set32(c.r[3], ld32((c.r[17].w[0] + 588u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E61E8u | kUnwind; return; } goto L_001E61E8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E626Cu); set32(c.r[5], 0u + 256u);  if (depth < kMaxDepth) unit_0039(c, 4u, depth + 1u); else { c.pc = 0x001E4020u; return; } if (c.pc != 0x001E626Cu) [[unlikely]] return; }
L_001E626C:
    st32((c.r[17].w[0] + 584u), c.r[2].w[0]);
    c.f[20] = ld32((c.r[17].w[0] + 576u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E627Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001E627Cu) [[unlikely]] return; }
L_001E627C:
    c.r[5].d[0] = ld64((c.r[28].w[0] - 32712u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6288u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 212u, depth + 1u); else { c.pc = 0x003BDCF0u; return; } if (c.pc != 0x001E6288u) [[unlikely]] return; }
L_001E6288:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[12] = ld32((c.r[17].w[0] + 572u));  goto L_001E62AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6298u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001E6298u) [[unlikely]] return; }
L_001E6298:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E62A4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x001E62A4u) [[unlikely]] return; }
L_001E62A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E62B8; } }
L_001E62AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E62B4u);  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001E62B4u) [[unlikely]] return; }
L_001E62B4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001E62B8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001E62BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E62C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001E62C4u) [[unlikely]] return; }
L_001E62C4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E62D0u); set32(c.r[4], 0u + 255u);  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001E62D0u) [[unlikely]] return; }
L_001E62D0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E62DCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x001E62DCu) [[unlikely]] return; }
L_001E62DC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E62E8u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 426u, depth + 1u); else { c.pc = 0x003AF6E0u; return; } if (c.pc != 0x001E62E8u) [[unlikely]] return; }
L_001E62E8:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E62F4u); set32(c.r[4], 0u + 255u);  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001E62F4u) [[unlikely]] return; }
L_001E62F4:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6300u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x001E6300u) [[unlikely]] return; }
L_001E6300:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6310u); c.r[4].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x001E6310u) [[unlikely]] return; }
L_001E6310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6318u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 111u, depth + 1u); else { c.pc = 0x003B25F8u; return; } if (c.pc != 0x001E6318u) [[unlikely]] return; }
L_001E6318:
    set32(c.r[3], ld32((c.r[17].w[0] + 584u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E62BCu | kUnwind; return; } goto L_001E62BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E699C; } }
L_001E633C:
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[3].d[0] = ld8((c.r[17].w[0] + 607u));  goto L_001E6374; }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 604u));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 605u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0] + 606u));  goto L_001E6364; }
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[17].w[0] + 606u));
    c.budget -= 2;
L_001E6364:
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E6374; } }
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001E6374:
    c.budget -= 2;
    if (c.r[3].sd[0] <= 0) { c.r[16].d[0] = 0ull + 0ull;  goto L_001E6384; }
    set32(c.r[2], 0u + 16u);
    set32(c.r[16], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 2;
L_001E6384:
    c.r[2].d[0] = ld64((c.r[17].w[0] + 264u));
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[1].d[0] = c.r[16].sd[0] < 9ll ? 1ull : 0ull;  goto L_001E63A8; }
    c.r[1].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001E63A4; } }
    set32(c.r[16], 0u + 5u);
    c.budget -= 1;
L_001E63A4:
    c.r[1].d[0] = c.r[16].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 1;
L_001E63A8:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001E63B4; } }
    set32(c.r[16], 0u + 8u);
    c.budget -= 1;
L_001E63B4:
    c.budget -= 2;
    if (c.r[16].sd[0] >= 0) { c.r[3].d[0] = c.r[16].d[0] & 255ull;  goto L_001E63C4; }
    c.r[16].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 2;
L_001E63C4:
    set32(c.r[2], 0u + 8u);
    st32((c.r[17].w[0] + 568u), c.r[3].w[0]);
    set32(c.r[23], c.r[2].w[0] - c.r[16].w[0]);
    c.f[20] = ld32((c.r[17].w[0] + 576u));
    set32(c.r[2], 0u + 1u);
    set32(c.r[18], c.r[2].w[0] << (c.r[23].w[0] & 31u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E63E4u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001E63E4u) [[unlikely]] return; }
L_001E63E4:
    c.r[5].d[0] = ld64((c.r[28].w[0] - 32712u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E63F0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 212u, depth + 1u); else { c.pc = 0x003BDCF0u; return; } if (c.pc != 0x001E63F0u) [[unlikely]] return; }
L_001E63F0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3FF00000u);  goto L_001E6424; }
    c.f[0] = ld32((c.r[17].w[0] + 572u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FF00000u);
    c.r[21].d[0] = c.r[2].d[0] << 32;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E640Cu); c.f[12] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001E640Cu) [[unlikely]] return; }
L_001E640C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FF00000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E641Cu); c.r[4].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x001E641Cu) [[unlikely]] return; }
L_001E641C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_001E642C; } }
L_001E6424:
    c.r[21].d[0] = c.r[2].d[0] << 32;
    c.r[22].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 2;
L_001E642C:
    set32(c.r[2], c.r[18].w[0] << 2);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    st64((c.r[29].w[0] + 304u), c.r[2].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6448u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 4u, depth + 1u); else { c.pc = 0x001E4020u; return; } if (c.pc != 0x001E6448u) [[unlikely]] return; }
L_001E6448:
    st32((c.r[17].w[0] + 592u), c.r[2].w[0]);
    c.r[3].d[0] = ld64((c.r[17].w[0] + 264u));
    c.r[3].d[0] = c.r[3].d[0] & 1152ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);  goto L_001E65E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_001E6480; } }
L_001E6464:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E646Cu); set32(c.r[5], 0u + 512u);  if (depth < kMaxDepth) unit_0039(c, 4u, depth + 1u); else { c.pc = 0x001E4020u; return; } if (c.pc != 0x001E646Cu) [[unlikely]] return; }
L_001E646C:
    set32(c.r[3], ld32((c.r[17].w[0] + 592u)));
    set32(c.r[4], c.r[19].w[0] << 2);
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 5;
L_001E6480:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E6464u | kUnwind; return; } goto L_001E6464; }
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6498u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x001E6498u) [[unlikely]] return; }
L_001E6498:
    st64((c.r[29].w[0] + 288u), c.r[2].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    c.r[19].d[0] = 0ull + 0ull;
    c.r[30].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[22].d[0] = c.r[2].d[0] << 8;
    set32(c.r[2], 0u + 255u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[16].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st64((c.r[29].w[0] + 320u), c.r[2].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    c.budget -= 14;
L_001E64D0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E64E0u); st128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001E64E0u) [[unlikely]] return; }
L_001E64E0:
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[4]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E64ECu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x001E64ECu) [[unlikely]] return; }
L_001E64EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40700000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E64FCu); c.r[5].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x001E64FCu) [[unlikely]] return; }
L_001E64FC:
    c.r[5].d[0] = ld64((c.r[29].w[0] + 288u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6508u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 426u, depth + 1u); else { c.pc = 0x003AF6E0u; return; } if (c.pc != 0x001E6508u) [[unlikely]] return; }
L_001E6508:
    st64((c.r[29].w[0] + 344u), c.r[2].d[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6514u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 226u, depth + 1u); else { c.pc = 0x003BDE00u; return; } if (c.pc != 0x001E6514u) [[unlikely]] return; }
L_001E6514:
    c.r[4].d[0] = ld64((c.r[29].w[0] + 344u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6520u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x001E6520u) [[unlikely]] return; }
L_001E6520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6528u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 451u, depth + 1u); else { c.pc = 0x003AF968u; return; } if (c.pc != 0x001E6528u) [[unlikely]] return; }
L_001E6528:
    c.r[6].d[0] = c.r[19].d[0] & 65535ull;
    set32(c.r[3], c.r[6].w[0] << 8);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[6].d[0] | c.r[3].d[0];  if (t) { goto L_001E6570; } }
L_001E6538:
    set32(c.r[7], ld32((c.r[17].w[0] + 592u)));
    c.r[6].d[0] = c.r[20].d[0] & c.r[6].d[0];
    c.r[8].d[0] = c.r[6].d[0] << 32;
    c.r[6].d[0] = c.r[20].d[0] >> (c.r[23].w[0] & 63u);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    set32(c.r[8], c.r[8].w[0] << 2);
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    set32(c.r[8], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[6].w[0] << 1);
    c.r[20].d[0] = c.r[20].d[0] + static_cast<std::uint64_t>(1ll);
    set32(c.r[6], ld32((c.r[8].w[0])));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 14;
L_001E6570:
    c.r[1].d[0] = c.r[2].d[0] < c.r[20].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[6].d[0] = ld64((c.r[29].w[0] + 320u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E6538u | kUnwind; return; } goto L_001E6538; }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[3].d[0] = c.r[19].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3FE00000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E64D0u | kUnwind; return; } goto L_001E64D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull | 65535ull;  if (t) { goto L_001E65CC; } }
L_001E6594:
    set32(c.r[7], ld32((c.r[17].w[0] + 592u)));
    c.r[6].d[0] = c.r[20].d[0] & c.r[6].d[0];
    c.r[8].d[0] = c.r[6].d[0] << 32;
    c.r[6].d[0] = c.r[20].d[0] >> (c.r[23].w[0] & 63u);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    set32(c.r[8], c.r[8].w[0] << 2);
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    set32(c.r[8], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[6].w[0] << 1);
    c.r[20].d[0] = c.r[20].d[0] + static_cast<std::uint64_t>(1ll);
    set32(c.r[6], ld32((c.r[8].w[0])));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 14;
L_001E65CC:
    c.r[6].d[0] = c.r[20].d[0] < c.r[22].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[6].d[0] != 0ull) { c.r[6].d[0] = ld64((c.r[29].w[0] + 320u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E6594u | kUnwind; return; } goto L_001E6594; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = ld64((c.r[17].w[0] + 264u));  if (t) { goto L_001E6700; } }
L_001E65E0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    set32(c.r[7], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 5760u);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[3]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[30].d[0] = c.r[6].d[0] << 32;  if (t) { goto L_001E66F0; } }
L_001E6600:
    set32(c.r[5], 0u + 512u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E660Cu); set32(c.r[23], c.r[19].w[0] << 2);  if (depth < kMaxDepth) unit_0039(c, 4u, depth + 1u); else { c.pc = 0x001E4020u; return; } if (c.pc != 0x001E660Cu) [[unlikely]] return; }
L_001E660C:
    set32(c.r[6], ld32((c.r[17].w[0] + 592u)));
    c.r[4].d[0] = c.r[19].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[20].d[0] = 0ull + 0ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[6], c.r[6].w[0] + c.r[23].w[0]);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);
    set32(c.r[7], ld32((c.r[2].w[0])));
    mmi::multu(c, 0, c.r[4].w[0], c.r[7].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    mmi::mult(c, 1, c.r[2].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    c.r[2].d[0] = c.hi.d[0];
    mmi::pextlw(c.r[6], c.r[2], c.r[6]);
    mmi::mult(c, 0, c.r[7].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[4].d[0] + c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] + c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] >> 4;
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    c.budget -= 20;
L_001E665C:
    c.r[2].d[0] = c.r[20].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].d[0] = c.r[2].d[0] << 8;
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6674u); c.r[4].d[0] = c.r[2].d[0] + c.r[3].d[0];  if (depth < kMaxDepth) unit_00AF(c, 226u, depth + 1u); else { c.pc = 0x003BDE00u; return; } if (c.pc != 0x001E6674u) [[unlikely]] return; }
L_001E6674:
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6680u); c.r[4].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001E6680u) [[unlikely]] return; }
L_001E6680:
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[4]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E668Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x001E668Cu) [[unlikely]] return; }
L_001E668C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6698u); c.r[5].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 426u, depth + 1u); else { c.pc = 0x003AF6E0u; return; } if (c.pc != 0x001E6698u) [[unlikely]] return; }
L_001E6698:
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E66A4u); c.r[4].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001E66A4u) [[unlikely]] return; }
L_001E66A4:
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[5]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E66B0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x001E66B0u) [[unlikely]] return; }
L_001E66B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FE00000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E66C0u); c.r[4].d[0] = c.r[3].d[0] << 32;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x001E66C0u) [[unlikely]] return; }
L_001E66C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E66C8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 111u, depth + 1u); else { c.pc = 0x003B25F8u; return; } if (c.pc != 0x001E66C8u) [[unlikely]] return; }
L_001E66C8:
    set32(c.r[6], ld32((c.r[17].w[0] + 592u)));
    set32(c.r[7], c.r[20].w[0] << 1);
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].sd[0] < 256ll ? 1ull : 0ull;
    set32(c.r[6], c.r[23].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E665Cu | kUnwind; return; } goto L_001E665C; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_001E66F0:
    c.r[3].d[0] = c.r[19].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E6600u | kUnwind; return; } goto L_001E6600; }
    c.r[6].d[0] = ld64((c.r[17].w[0] + 264u));
    c.budget -= 1;
L_001E6700:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001E699C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E671Cu); c.f[12] = ld32((c.r[17].w[0] + 572u));  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001E671Cu) [[unlikely]] return; }
L_001E671C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6728u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x001E6728u) [[unlikely]] return; }
L_001E6728:
    c.r[5].d[0] = ld64((c.r[29].w[0] + 304u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6738u); st64((c.r[29].w[0] + 296u), c.r[2].d[0]);  if (depth < kMaxDepth) unit_0039(c, 4u, depth + 1u); else { c.pc = 0x001E4020u; return; } if (c.pc != 0x001E6738u) [[unlikely]] return; }
L_001E6738:
    st32((c.r[17].w[0] + 600u), c.r[2].w[0]);
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 5760u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[22], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001E683C; } }
L_001E6754:
    set32(c.r[5], 0u + 512u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6760u); set32(c.r[20], c.r[19].w[0] << 2);  if (depth < kMaxDepth) unit_0039(c, 4u, depth + 1u); else { c.pc = 0x001E4020u; return; } if (c.pc != 0x001E6760u) [[unlikely]] return; }
L_001E6760:
    set32(c.r[6], ld32((c.r[17].w[0] + 600u)));
    c.r[4].d[0] = c.r[19].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[6], c.r[6].w[0] + c.r[20].w[0]);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[22].w[0])));
    mmi::multu(c, 0, c.r[4].w[0], c.r[7].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    mmi::mult(c, 1, c.r[2].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    c.r[2].d[0] = c.hi.d[0];
    mmi::pextlw(c.r[6], c.r[2], c.r[6]);
    mmi::mult(c, 0, c.r[7].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[4].d[0] + c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] + c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] >> 4;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.budget -= 19;
L_001E67AC:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].d[0] = c.r[2].d[0] << 8;
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E67C4u); c.r[4].d[0] = c.r[2].d[0] + c.r[3].d[0];  if (depth < kMaxDepth) unit_00AF(c, 226u, depth + 1u); else { c.pc = 0x003BDE00u; return; } if (c.pc != 0x001E67C4u) [[unlikely]] return; }
L_001E67C4:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E67D0u); c.r[4].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001E67D0u) [[unlikely]] return; }
L_001E67D0:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E67DCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x001E67DCu) [[unlikely]] return; }
L_001E67DC:
    c.r[5].d[0] = ld64((c.r[29].w[0] + 296u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E67E8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 426u, depth + 1u); else { c.pc = 0x003AF6E0u; return; } if (c.pc != 0x001E67E8u) [[unlikely]] return; }
L_001E67E8:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E67F4u); c.r[4].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001E67F4u) [[unlikely]] return; }
L_001E67F4:
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6800u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x001E6800u) [[unlikely]] return; }
L_001E6800:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E680Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x001E680Cu) [[unlikely]] return; }
L_001E680C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6814u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 111u, depth + 1u); else { c.pc = 0x003B25F8u; return; } if (c.pc != 0x001E6814u) [[unlikely]] return; }
L_001E6814:
    set32(c.r[6], ld32((c.r[17].w[0] + 600u)));
    set32(c.r[7], c.r[16].w[0] << 1);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 256ll ? 1ull : 0ull;
    set32(c.r[6], c.r[20].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E67ACu | kUnwind; return; } goto L_001E67AC; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_001E683C:
    c.r[2].d[0] = c.r[19].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E6754u | kUnwind; return; } goto L_001E6754; }
    c.f[20] = ld32((c.r[17].w[0] + 576u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6854u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001E6854u) [[unlikely]] return; }
L_001E6854:
    c.r[5].d[0] = ld64((c.r[28].w[0] - 32712u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6860u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AF(c, 212u, depth + 1u); else { c.pc = 0x003BDCF0u; return; } if (c.pc != 0x001E6860u) [[unlikely]] return; }
L_001E6860:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[12] = ld32((c.r[17].w[0] + 572u));  goto L_001E6884; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6870u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001E6870u) [[unlikely]] return; }
L_001E6870:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E687Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x001E687Cu) [[unlikely]] return; }
L_001E687C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld64((c.r[29].w[0] + 304u));  if (t) { goto L_001E6890; } }
L_001E6884:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E688Cu);  if (depth < kMaxDepth) unit_00AC(c, 44u, depth + 1u); else { c.pc = 0x003B1AB0u; return; } if (c.pc != 0x001E688Cu) [[unlikely]] return; }
L_001E688C:
    c.r[5].d[0] = ld64((c.r[29].w[0] + 304u));
    c.budget -= 1;
L_001E6890:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E689Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0039(c, 4u, depth + 1u); else { c.pc = 0x001E4020u; return; } if (c.pc != 0x001E689Cu) [[unlikely]] return; }
L_001E689C:
    st32((c.r[17].w[0] + 596u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_001E6990; } }
L_001E68A8:
    set32(c.r[5], 0u + 512u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E68B4u); set32(c.r[20], c.r[19].w[0] << 2);  if (depth < kMaxDepth) unit_0039(c, 4u, depth + 1u); else { c.pc = 0x001E4020u; return; } if (c.pc != 0x001E68B4u) [[unlikely]] return; }
L_001E68B4:
    set32(c.r[6], ld32((c.r[17].w[0] + 596u)));
    c.r[4].d[0] = c.r[19].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[16].d[0] = 0ull + 0ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[6], c.r[6].w[0] + c.r[20].w[0]);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[22].w[0])));
    mmi::multu(c, 0, c.r[4].w[0], c.r[7].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    mmi::mult(c, 1, c.r[2].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    c.r[2].d[0] = c.hi.d[0];
    mmi::pextlw(c.r[6], c.r[2], c.r[6]);
    mmi::mult(c, 0, c.r[7].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[4].d[0] + c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] + c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] >> 4;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.budget -= 19;
L_001E6900:
    c.r[2].d[0] = c.r[16].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].d[0] = c.r[2].d[0] << 8;
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6918u); c.r[4].d[0] = c.r[2].d[0] + c.r[3].d[0];  if (depth < kMaxDepth) unit_00AF(c, 226u, depth + 1u); else { c.pc = 0x003BDE00u; return; } if (c.pc != 0x001E6918u) [[unlikely]] return; }
L_001E6918:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6924u); c.r[4].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001E6924u) [[unlikely]] return; }
L_001E6924:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6930u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 83u, depth + 1u); else { c.pc = 0x003B2180u; return; } if (c.pc != 0x001E6930u) [[unlikely]] return; }
L_001E6930:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E693Cu); c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AB(c, 426u, depth + 1u); else { c.pc = 0x003AF6E0u; return; } if (c.pc != 0x001E693Cu) [[unlikely]] return; }
L_001E693C:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6948u); c.r[4].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00AC(c, 98u, depth + 1u); else { c.pc = 0x003B2420u; return; } if (c.pc != 0x001E6948u) [[unlikely]] return; }
L_001E6948:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6954u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 71u, depth + 1u); else { c.pc = 0x003B1F30u; return; } if (c.pc != 0x001E6954u) [[unlikely]] return; }
L_001E6954:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6960u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 61u, depth + 1u); else { c.pc = 0x003B1E70u; return; } if (c.pc != 0x001E6960u) [[unlikely]] return; }
L_001E6960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001E6968u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AC(c, 111u, depth + 1u); else { c.pc = 0x003B25F8u; return; } if (c.pc != 0x001E6968u) [[unlikely]] return; }
L_001E6968:
    set32(c.r[4], ld32((c.r[17].w[0] + 596u)));
    set32(c.r[6], c.r[16].w[0] << 1);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 256ll ? 1ull : 0ull;
    set32(c.r[4], c.r[20].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001E6900u | kUnwind; return; } goto L_001E6900; } }
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 1;
L_001E6990:
    c.r[3].d[0] = c.r[19].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E68A8u | kUnwind; return; } goto L_001E68A8; }
L_001E699C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.budget -= 1;
L_001E69A0:
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 352u);  c.pc = t; return; }
L_001E69E0:
    c.r[10].d[0] = ld8((c.r[4].w[0] + 16u));
    set32(c.r[8], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[10].d[0] != c.r[8].d[0]; c.r[3].d[0] = ld64((c.r[4].w[0]));  if (t) { goto L_001E6ACC; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[8], 0u + 6u);  goto L_001E6AD0; }
    c.r[9].d[0] = ld8((c.r[4].w[0] + 17u));
    set32(c.r[8], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[9].d[0] != c.r[8].d[0];  if (t) { goto L_001E6ACC; } }
    c.r[12].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[11].d[0] = 0ull + 0ull;  if (t) { goto L_001E6A5C; } }
L_001E6A14:
    c.r[11].d[0] = c.r[11].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[9].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[10].d[0] = ld8((c.r[5].w[0] + 2u));
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 3));
    c.r[8].d[0] = c.r[7].d[0] & 31ull;
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 3));
    set32(c.r[5], c.r[5].w[0] + 3u);
    set32(c.r[9], c.r[8].w[0] << 10);
    c.r[7].d[0] = c.r[7].d[0] & 31ull;
    set32(c.r[8], c.r[7].w[0] << 5);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 3));
    c.r[8].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.r[7].d[0] = c.r[7].d[0] & 31ull;
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[7].w[0]));
    st8((c.r[12].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.budget -= 18;
L_001E6A5C:
    c.r[7].d[0] = c.r[11].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[7].d[0] != 0ull) { c.r[7].d[0] = ld8((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E6A14u | kUnwind; return; } goto L_001E6A14; }
    set32(c.r[6], 0u + 3u);
    set32(c.r[5], 0u + 1u);
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[6].d[0] = c.r[3].d[0] << 32;
    c.r[5].d[0] = ld8((c.r[4].w[0] + 17u));
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st8((c.r[4].w[0] + 19u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 19u));
    c.r[8].d[0] = c.r[5].d[0] << 32;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    mmi::multu(c, 0, c.r[6].w[0], c.r[8].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    mmi::mult(c, 1, c.r[5].w[0], c.r[6].w[0]);
    c.r[5].d[0] = c.lo.d[1];
    c.r[6].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[8].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::pextlw(c.r[6], c.r[6], c.r[7]);
    c.r[3].d[0] = c.r[5].d[0] + c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] + c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(7ll);
    c.r[3].d[0] = c.r[3].d[0] >> 3;
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st64((c.r[4].w[0] + 8u), c.r[3].d[0]);  if (t) { goto L_001E6C00; } }
L_001E6ACC:
    set32(c.r[8], 0u + 6u);
    c.budget -= 1;
L_001E6AD0:
    c.budget -= 2;
    if (c.r[10].d[0] != c.r[8].d[0]) { set32(c.r[6], 0u + 3u);  goto L_001E6BB8; }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001E6BB4; } }
    c.r[9].d[0] = ld8((c.r[4].w[0] + 17u));
    set32(c.r[8], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[9].d[0] != c.r[8].d[0];  if (t) { goto L_001E6BB4; } }
    c.r[12].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[11].d[0] = 0ull + 0ull;  if (t) { goto L_001E6B44; } }
L_001E6AFC:
    c.r[11].d[0] = c.r[11].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[9].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[10].d[0] = ld8((c.r[5].w[0] + 2u));
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 3));
    c.r[8].d[0] = c.r[7].d[0] & 31ull;
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 3));
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[9], c.r[8].w[0] << 10);
    c.r[7].d[0] = c.r[7].d[0] & 31ull;
    set32(c.r[8], c.r[7].w[0] << 5);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 3));
    c.r[8].d[0] = c.r[9].d[0] | c.r[8].d[0];
    c.r[7].d[0] = c.r[7].d[0] & 31ull;
    c.r[7].d[0] = c.r[7].d[0] | c.r[8].d[0];
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[7].w[0]));
    st8((c.r[12].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.budget -= 18;
L_001E6B44:
    c.r[7].d[0] = c.r[11].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[7].d[0] != 0ull) { c.r[7].d[0] = ld8((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E6AFCu | kUnwind; return; } goto L_001E6AFC; }
    set32(c.r[6], 0u + 3u);
    set32(c.r[5], 0u + 1u);
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[6].d[0] = c.r[3].d[0] << 32;
    c.r[5].d[0] = ld8((c.r[4].w[0] + 17u));
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st8((c.r[4].w[0] + 19u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 19u));
    c.r[8].d[0] = c.r[5].d[0] << 32;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    mmi::multu(c, 0, c.r[6].w[0], c.r[8].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    mmi::mult(c, 1, c.r[5].w[0], c.r[6].w[0]);
    c.r[5].d[0] = c.lo.d[1];
    c.r[6].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[8].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::pextlw(c.r[6], c.r[6], c.r[7]);
    c.r[3].d[0] = c.r[5].d[0] + c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] + c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(7ll);
    c.r[3].d[0] = c.r[3].d[0] >> 3;
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st64((c.r[4].w[0] + 8u), c.r[3].d[0]);  if (t) { goto L_001E6C00; } }
L_001E6BB4:
    set32(c.r[6], 0u + 3u);
    c.budget -= 1;
L_001E6BB8:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != c.r[6].d[0];  if (t) { goto L_001E6C00; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_001E6C00; } }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 17u));
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[4].d[0];  if (t) { goto L_001E6C00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_001E6BF4; } }
L_001E6BE0:
    c.r[6].d[0] = c.r[6].d[0] + static_cast<std::uint64_t>(1ll);
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 5;
L_001E6BF4:
    c.r[4].d[0] = c.r[6].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { c.r[4].d[0] = ld8((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E6BE0u | kUnwind; return; } goto L_001E6BE0; }
L_001E6C00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E6C10:
    c.r[8].d[0] = ld8((c.r[4].w[0] + 16u));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != 0ull; c.r[7].d[0] = ld64((c.r[4].w[0]));  if (t) { goto L_001E6FE8; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_001E6C28; }
    c.r[3].d[0] = ld16((c.r[6].w[0] + 8u));
    c.budget -= 1;
L_001E6C28:
    c.r[8].d[0] = ld8((c.r[4].w[0] + 17u));
    c.r[1].d[0] = c.r[8].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[10].d[0] = c.r[3].d[0] & 65535ull;  if (t) { goto L_001E6E64; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[3].d[0]) { c.r[10].d[0] = c.r[10].d[0] & 65535ull;  goto L_001E6DBC; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_001E6D00; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_001E6C64; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 8u);  if (t) { goto L_001E6E58; } }
L_001E6C64:
    c.r[9].d[0] = c.r[10].d[0] & 65535ull;
    mmi::pcpyld(c.r[3], c.r[0], c.r[3]);
    c.r[3].d[0] = c.r[7].d[0] + c.r[3].d[0];
    set32(c.r[8], c.r[9].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] >> 3;
    set32(c.r[8], c.r[8].w[0] - c.r[9].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[10].d[0] = c.r[8].d[0] & 65535ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[9], 0u + 7u);
    set32(c.r[13], c.r[5].w[0] + c.r[3].w[0]);
    c.r[11].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[7].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[8], c.r[5].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[7].d[0] + static_cast<std::uint64_t>(7ll);
    set32(c.r[12], c.r[8].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    set32(c.r[8], 0u + 255u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; set32(c.r[14], c.r[9].w[0] - c.r[3].w[0]);  if (t) { goto L_001E6CEC; } }
L_001E6CC0:
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> (c.r[14].w[0] & 31u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { st8((c.r[12].w[0]), static_cast<std::uint8_t>(0u));  goto L_001E6CD4; }
    st8((c.r[12].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 1;
L_001E6CD4:
    c.budget -= 2;
    if (c.r[14].d[0] != c.r[9].d[0]) { set32(c.r[14], c.r[14].w[0] + 1u);  goto L_001E6CE4; }
    c.r[14].d[0] = 0ull + 0ull;
    set32(c.r[13], c.r[13].w[0] - 1u);
    c.budget -= 2;
L_001E6CE4:
    set32(c.r[12], c.r[12].w[0] - 1u);
    c.r[11].d[0] = c.r[11].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_001E6CEC:
    c.r[3].d[0] = c.r[11].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[13].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E6CC0u | kUnwind; return; } goto L_001E6CC0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E6E54; } }
L_001E6D00:
    c.r[9].d[0] = c.r[10].d[0] & 65535ull;
    mmi::pcpyld(c.r[3], c.r[0], c.r[3]);
    c.r[3].d[0] = c.r[7].d[0] + c.r[3].d[0];
    set32(c.r[8], c.r[9].w[0] << 4);
    set32(c.r[9], c.r[8].w[0] + c.r[9].w[0]);
    c.r[3].d[0] = c.r[3].d[0] >> 2;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    set32(c.r[8], c.r[9].w[0] << 2);
    set32(c.r[8], c.r[9].w[0] + c.r[8].w[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[9], c.r[5].w[0] + c.r[3].w[0]);
    c.r[10].d[0] = c.r[8].d[0] & 65535ull;
    c.r[3].d[0] = c.r[7].d[0] << 32;
    set32(c.r[11], 0u + 3u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[8], c.r[5].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[7].d[0] + static_cast<std::uint64_t>(3ll);
    set32(c.r[8], c.r[8].w[0] - 1u);
    c.r[12].d[0] = c.r[3].d[0] & 3ull;
    c.r[11].d[0] = c.r[11].d[0] - c.r[12].d[0];
    c.r[3].d[0] = 0ull + 0ull;
    c.r[11].d[0] = c.r[11].d[0] << 1;
    set32(c.r[12], 0u + 6u);
    c.r[24].d[0] = c.r[11].d[0] << 32;
    c.budget -= 26;
    { const bool t = 0ull == 0ull; c.r[24].d[0] = static_cast<std::uint64_t>(c.r[24].sd[0] >> 32);  if (t) { goto L_001E6DA8; } }
L_001E6D68:
    set32(c.r[11], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> (c.r[24].w[0] & 31u)));
    c.r[15].d[0] = c.r[11].d[0] & 3ull;
    set32(c.r[11], c.r[15].w[0] << 2);
    set32(c.r[14], c.r[15].w[0] << 4);
    c.r[13].d[0] = c.r[15].d[0] | c.r[11].d[0];
    set32(c.r[11], c.r[15].w[0] << 6);
    c.r[13].d[0] = c.r[14].d[0] | c.r[13].d[0];
    c.r[11].d[0] = c.r[11].d[0] | c.r[13].d[0];
    c.budget -= 10;
    { const bool t = c.r[24].d[0] != c.r[12].d[0]; st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));  if (t) { goto L_001E6D9C; } }
    c.r[24].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[9], c.r[9].w[0] - 1u);  if (t) { goto L_001E6DA0; } }
L_001E6D9C:
    set32(c.r[24], c.r[24].w[0] + 2u);
    c.budget -= 1;
L_001E6DA0:
    set32(c.r[8], c.r[8].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_001E6DA8:
    c.r[11].d[0] = c.r[3].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[11].d[0] != 0ull) { c.r[11].d[0] = ld8((c.r[9].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E6D68u | kUnwind; return; } goto L_001E6D68; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E6E54; } }
L_001E6DBC:
    set32(c.r[8], 0u - 1u);
    set32(c.r[9], c.r[10].w[0] << 4);
    c.r[12].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[9].w[0] + c.r[10].w[0]);
    c.r[10].d[0] = c.r[9].d[0] & 65535ull;
    c.r[9].d[0] = c.r[7].d[0] << 32;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 32);
    set32(c.r[11], c.r[5].w[0] + c.r[9].w[0]);
    c.r[9].d[0] = c.r[7].d[0] + static_cast<std::uint64_t>(1ll);
    set32(c.r[14], c.r[11].w[0] - 1u);
    mmi::pcpyld(c.r[8], c.r[0], c.r[8]);
    c.r[11].d[0] = c.r[9].d[0] & 1ull;
    c.r[8].d[0] = c.r[7].d[0] + c.r[8].d[0];
    set32(c.r[9], 0u + 1u);
    c.r[8].d[0] = c.r[8].d[0] >> 1;
    c.r[9].d[0] = c.r[9].d[0] - c.r[11].d[0];
    c.r[8].d[0] = c.r[8].d[0] << 32;
    c.r[9].d[0] = c.r[9].d[0] << 2;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[13].d[0] = c.r[9].d[0] << 32;
    set32(c.r[8], c.r[5].w[0] + c.r[8].w[0]);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; c.r[13].d[0] = static_cast<std::uint64_t>(c.r[13].sd[0] >> 32);  if (t) { goto L_001E6E48; } }
L_001E6E18:
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> (c.r[13].w[0] & 31u)));
    c.r[11].d[0] = c.r[9].d[0] & 15ull;
    set32(c.r[9], c.r[11].w[0] << 4);
    c.r[9].d[0] = c.r[11].d[0] | c.r[9].d[0];
    c.budget -= 6;
    { const bool t = c.r[13].d[0] != c.r[3].d[0]; st8((c.r[14].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));  if (t) { goto L_001E6E3C; } }
    c.r[13].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[8].w[0] - 1u);  if (t) { goto L_001E6E40; } }
L_001E6E3C:
    c.r[13].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001E6E40:
    set32(c.r[14], c.r[14].w[0] - 1u);
    c.r[12].d[0] = c.r[12].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_001E6E48:
    c.r[9].d[0] = c.r[12].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[9].d[0] != 0ull) { c.r[9].d[0] = ld8((c.r[8].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E6E18u | kUnwind; return; } goto L_001E6E18; }
L_001E6E54:
    set32(c.r[3], 0u + 8u);
    c.budget -= 1;
L_001E6E58:
    st8((c.r[4].w[0] + 17u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 19u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st64((c.r[4].w[0] + 8u), c.r[7].d[0]);
    c.budget -= 3;
L_001E6E64:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001E71F8; } }
    c.r[6].d[0] = ld8((c.r[4].w[0] + 17u));
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
    if (c.r[6].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 16u);  goto L_001E6EF0; }
    c.r[3].d[0] = c.r[7].d[0] << 32;
    c.r[6].d[0] = c.r[10].d[0] & 65535ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[8], c.r[5].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[7].d[0] << 1;
    set32(c.r[10], c.r[8].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[9], c.r[3].w[0] - 1u);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 255u);  if (t) { goto L_001E6EDC; } }
L_001E6EB0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[6].d[0]) { st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  goto L_001E6EC4; }
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[9], c.r[9].w[0] - 1u);  if (t) { goto L_001E6EC8; } }
L_001E6EC4:
    set32(c.r[9], c.r[9].w[0] - 1u);
    c.budget -= 1;
L_001E6EC8:
    c.r[3].d[0] = ld8((c.r[10].w[0]));
    c.r[8].d[0] = c.r[8].d[0] + static_cast<std::uint64_t>(1ll);
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[10], c.r[10].w[0] - 1u);
    set32(c.r[9], c.r[9].w[0] - 1u);
    c.budget -= 5;
L_001E6EDC:
    c.r[3].d[0] = c.r[8].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[10].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E6EB0u | kUnwind; return; } goto L_001E6EB0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 4u);  if (t) { goto L_001E6F88; } }
L_001E6EF0:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_001E6F84; } }
    c.r[3].d[0] = ld64((c.r[4].w[0] + 8u));
    c.r[8].d[0] = c.r[10].d[0] & 65535ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 255u);
    c.r[9].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] << 1;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    set32(c.r[9], c.r[5].w[0] + c.r[9].w[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[11], c.r[9].w[0] - 1u);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; set32(c.r[9], c.r[3].w[0] - 1u);  if (t) { goto L_001E6F78; } }
L_001E6F30:
    c.r[3].d[0] = ld8((c.r[11].w[0]));
    set32(c.r[5], c.r[5].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 5;
    if (c.r[8].d[0] != c.r[3].d[0]) { st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));  goto L_001E6F54; }
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[9].w[0] - 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[9], c.r[9].w[0] - 2u);  if (t) { goto L_001E6F5C; } }
L_001E6F54:
    st8((c.r[9].w[0] - 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[9], c.r[9].w[0] - 2u);
    c.budget -= 2;
L_001E6F5C:
    c.r[3].d[0] = ld8((c.r[11].w[0]));
    c.r[10].d[0] = c.r[10].d[0] + static_cast<std::uint64_t>(1ll);
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[11].w[0] - 1u));
    st8((c.r[9].w[0] - 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[11], c.r[11].w[0] - 2u);
    set32(c.r[9], c.r[9].w[0] - 2u);
    c.budget -= 7;
L_001E6F78:
    c.r[3].d[0] = c.r[10].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[5].d[0] = ld8((c.r[11].w[0] - 1u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E6F30u | kUnwind; return; } goto L_001E6F30; }
L_001E6F84:
    set32(c.r[5], 0u + 4u);
    c.budget -= 1;
L_001E6F88:
    c.r[6].d[0] = c.r[7].d[0] << 32;
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 17u));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    set32(c.r[5], c.r[5].w[0] << 1);
    st8((c.r[4].w[0] + 19u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 19u));
    c.r[8].d[0] = c.r[5].d[0] << 32;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    mmi::multu(c, 0, c.r[6].w[0], c.r[8].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    mmi::mult(c, 1, c.r[5].w[0], c.r[6].w[0]);
    c.r[5].d[0] = c.lo.d[1];
    c.r[6].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[8].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::pextlw(c.r[6], c.r[6], c.r[7]);
    c.r[3].d[0] = c.r[5].d[0] + c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] + c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] >> 3;
    c.budget -= 24;
    { const bool t = 0ull == 0ull; st64((c.r[4].w[0] + 8u), c.r[3].d[0]);  if (t) { goto L_001E71F8; } }
L_001E6FE8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[3].d[0];  if (t) { goto L_001E71F8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001E71F8; } }
    c.r[8].d[0] = ld8((c.r[4].w[0] + 17u));
    set32(c.r[3], 0u + 8u);
    c.budget -= 4;
    if (c.r[8].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 16u);  goto L_001E70B0; }
    c.r[3].d[0] = c.r[7].d[0] << 2;
    set32(c.r[9], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[10].d[0] = 0ull + 0ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[8], 0u + 255u);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[3].w[0] - 1u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[11], c.r[5].w[0] - 1u);  if (t) { goto L_001E709C; } }
L_001E7038:
    c.r[3].d[0] = ld16((c.r[6].w[0] + 2u));
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[3].d[0]) { st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));  goto L_001E7074; }
    c.r[5].d[0] = ld8((c.r[11].w[0] - 1u));
    c.r[3].d[0] = ld16((c.r[6].w[0] + 4u));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001E7070; } }
    c.r[5].d[0] = ld8((c.r[11].w[0]));
    c.r[3].d[0] = ld16((c.r[6].w[0] + 6u));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_001E7070; } }
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[9], c.r[9].w[0] - 1u);  if (t) { goto L_001E7078; } }
L_001E7070:
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 1;
L_001E7074:
    set32(c.r[9], c.r[9].w[0] - 1u);
    c.budget -= 1;
L_001E7078:
    c.r[3].d[0] = ld8((c.r[11].w[0]));
    c.r[10].d[0] = c.r[10].d[0] + static_cast<std::uint64_t>(1ll);
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[11].w[0] - 1u));
    st8((c.r[9].w[0] - 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[11].w[0] - 2u));
    st8((c.r[9].w[0] - 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[11], c.r[11].w[0] - 3u);
    set32(c.r[9], c.r[9].w[0] - 3u);
    c.budget -= 9;
L_001E709C:
    c.r[3].d[0] = c.r[10].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[5].d[0] = ld8((c.r[11].w[0] - 2u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E7038u | kUnwind; return; } goto L_001E7038; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 6u);  if (t) { goto L_001E719C; } }
L_001E70B0:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[3].d[0];  if (t) { goto L_001E7198; } }
    set32(c.r[9], ld32((c.r[4].w[0] + 8u)));
    c.r[3].d[0] = c.r[7].d[0] << 3;
    c.r[8].d[0] = c.r[3].d[0] << 32;
    set32(c.r[10], 0u + 255u);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[9], c.r[5].w[0] + c.r[9].w[0]);
    set32(c.r[5], c.r[8].w[0] - 1u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[9].w[0] - 1u);  if (t) { goto L_001E718C; } }
L_001E70E4:
    c.r[11].d[0] = ld8((c.r[8].w[0] - 4u));
    c.r[12].d[0] = ld16((c.r[6].w[0] + 2u));
    set32(c.r[9], c.r[9].w[0] << 8);
    c.r[9].d[0] = c.r[11].d[0] | c.r[9].d[0];
    c.budget -= 6;
    if (c.r[12].d[0] != c.r[9].d[0]) { st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));  goto L_001E7148; }
    c.r[9].d[0] = ld8((c.r[8].w[0] - 3u));
    c.r[11].d[0] = ld8((c.r[8].w[0] - 2u));
    c.r[12].d[0] = ld16((c.r[6].w[0] + 4u));
    set32(c.r[9], c.r[9].w[0] << 8);
    c.r[9].d[0] = c.r[11].d[0] | c.r[9].d[0];
    c.budget -= 7;
    { const bool t = c.r[12].d[0] != c.r[9].d[0];  if (t) { goto L_001E7144; } }
    c.r[11].d[0] = ld8((c.r[8].w[0] - 1u));
    c.r[9].d[0] = ld8((c.r[8].w[0]));
    c.r[12].d[0] = ld16((c.r[6].w[0] + 6u));
    set32(c.r[11], c.r[11].w[0] << 8);
    c.r[9].d[0] = c.r[9].d[0] | c.r[11].d[0];
    c.budget -= 7;
    { const bool t = c.r[12].d[0] != c.r[9].d[0];  if (t) { goto L_001E7144; } }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] - 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] - 2u);  if (t) { goto L_001E7150; } }
L_001E7144:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.budget -= 1;
L_001E7148:
    st8((c.r[5].w[0] - 1u), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[5], c.r[5].w[0] - 2u);
    c.budget -= 2;
L_001E7150:
    c.r[9].d[0] = ld8((c.r[8].w[0]));
    c.r[3].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(1ll);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[8].w[0] - 1u));
    st8((c.r[5].w[0] - 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[8].w[0] - 2u));
    st8((c.r[5].w[0] - 2u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[8].w[0] - 3u));
    st8((c.r[5].w[0] - 3u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[8].w[0] - 4u));
    st8((c.r[5].w[0] - 4u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.r[9].d[0] = ld8((c.r[8].w[0] - 5u));
    st8((c.r[5].w[0] - 5u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[8], c.r[8].w[0] - 6u);
    set32(c.r[5], c.r[5].w[0] - 6u);
    c.budget -= 15;
L_001E718C:
    c.r[9].d[0] = c.r[3].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[9].d[0] != 0ull) { c.r[9].d[0] = ld8((c.r[8].w[0] - 5u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E70E4u | kUnwind; return; } goto L_001E70E4; }
L_001E7198:
    set32(c.r[5], 0u + 6u);
    c.budget -= 1;
L_001E719C:
    c.r[6].d[0] = c.r[7].d[0] << 32;
    set32(c.r[3], 0u + 4u);
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 17u));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    set32(c.r[5], c.r[5].w[0] << 2);
    st8((c.r[4].w[0] + 19u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 19u));
    c.r[8].d[0] = c.r[5].d[0] << 32;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    mmi::multu(c, 0, c.r[6].w[0], c.r[8].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    mmi::mult(c, 1, c.r[5].w[0], c.r[6].w[0]);
    c.r[5].d[0] = c.lo.d[1];
    c.r[6].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[8].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::pextlw(c.r[6], c.r[6], c.r[7]);
    c.r[3].d[0] = c.r[5].d[0] + c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] + c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] >> 3;
    st64((c.r[4].w[0] + 8u), c.r[3].d[0]);
    c.budget -= 23;
L_001E71F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E7200:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 16u));
    set32(c.r[12], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[12].d[0]; c.r[9].d[0] = ld64((c.r[4].w[0]));  if (t) { goto L_001E758C; } }
    c.r[10].d[0] = ld8((c.r[4].w[0] + 17u));
    c.r[1].d[0] = c.r[10].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[10].d[0] = ld8((c.r[4].w[0] + 17u));  goto L_001E73E4; }
    set32(c.r[11], 0u + 4u);
    c.budget -= 3;
    if (c.r[10].d[0] == c.r[11].d[0]) { set32(c.r[10], 0u - 1u);  goto L_001E735C; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[10].d[0] == c.r[3].d[0]) { c.r[3].d[0] = c.r[9].d[0] << 32;  goto L_001E72D4; }
    set32(c.r[11], 0u + 1u);
    c.budget -= 3;
    if (c.r[10].d[0] == c.r[11].d[0]) { set32(c.r[10], 0u - 1u);  goto L_001E724C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 8u);  if (t) { goto L_001E73D4; } }
L_001E724C:
    c.r[3].d[0] = c.r[9].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[12].d[0] = 0ull + 0ull;
    mmi::pcpyld(c.r[10], c.r[0], c.r[10]);
    c.r[10].d[0] = c.r[9].d[0] + c.r[10].d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[10].d[0] = c.r[10].d[0] >> 3;
    set32(c.r[13], c.r[3].w[0] - 1u);
    c.r[10].d[0] = c.r[10].d[0] << 32;
    c.r[3].d[0] = c.r[9].d[0] + static_cast<std::uint64_t>(7ll);
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] & 7ull;
    set32(c.r[14], c.r[5].w[0] + c.r[10].w[0]);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[10], 0u + 7u);
    c.budget -= 18;
    { const bool t = 0ull == 0ull; set32(c.r[15], c.r[10].w[0] - c.r[3].w[0]);  if (t) { goto L_001E72C0; } }
L_001E7294:
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> (c.r[15].w[0] & 31u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { st8((c.r[13].w[0]), static_cast<std::uint8_t>(0u));  goto L_001E72A8; }
    st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.budget -= 1;
L_001E72A8:
    c.budget -= 2;
    if (c.r[15].d[0] != c.r[10].d[0]) { set32(c.r[15], c.r[15].w[0] + 1u);  goto L_001E72B8; }
    c.r[15].d[0] = 0ull + 0ull;
    set32(c.r[14], c.r[14].w[0] - 1u);
    c.budget -= 2;
L_001E72B8:
    set32(c.r[13], c.r[13].w[0] - 1u);
    c.r[12].d[0] = c.r[12].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_001E72C0:
    c.r[3].d[0] = c.r[12].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[14].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E7294u | kUnwind; return; } goto L_001E7294; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E73D0; } }
L_001E72D4:
    set32(c.r[10], 0u - 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[11].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    mmi::pcpyld(c.r[10], c.r[0], c.r[10]);
    set32(c.r[13], c.r[3].w[0] - 1u);
    c.r[10].d[0] = c.r[9].d[0] + c.r[10].d[0];
    c.r[3].d[0] = c.r[9].d[0] + static_cast<std::uint64_t>(3ll);
    c.r[10].d[0] = c.r[10].d[0] >> 2;
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.r[10].d[0] = c.r[10].d[0] << 32;
    c.r[3].d[0] = c.r[12].d[0] - c.r[3].d[0];
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] << 1;
    set32(c.r[14], c.r[5].w[0] + c.r[10].w[0]);
    c.r[12].d[0] = c.r[3].d[0] << 32;
    set32(c.r[10], 0u + 6u);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 32);  if (t) { goto L_001E7348; } }
L_001E7320:
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> (c.r[12].w[0] & 31u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[12].d[0] != c.r[10].d[0]; st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E733C; } }
    c.r[12].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[14], c.r[14].w[0] - 1u);  if (t) { goto L_001E7340; } }
L_001E733C:
    set32(c.r[12], c.r[12].w[0] + 2u);
    c.budget -= 1;
L_001E7340:
    set32(c.r[13], c.r[13].w[0] - 1u);
    c.r[11].d[0] = c.r[11].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_001E7348:
    c.r[3].d[0] = c.r[11].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[14].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E7320u | kUnwind; return; } goto L_001E7320; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E73D0; } }
L_001E735C:
    c.r[3].d[0] = c.r[9].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    mmi::pcpyld(c.r[10], c.r[0], c.r[10]);
    c.r[10].d[0] = c.r[9].d[0] + c.r[10].d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[10].d[0] = c.r[10].d[0] >> 1;
    set32(c.r[13], c.r[3].w[0] - 1u);
    c.r[10].d[0] = c.r[10].d[0] << 32;
    c.r[3].d[0] = c.r[9].d[0] & 1ull;
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] << 2;
    set32(c.r[14], c.r[5].w[0] + c.r[10].w[0]);
    c.r[12].d[0] = c.r[3].d[0] << 32;
    c.r[12].d[0] = static_cast<std::uint64_t>(c.r[12].sd[0] >> 32);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = 0ull + 0ull;  if (t) { goto L_001E73C4; } }
L_001E739C:
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> (c.r[12].w[0] & 31u)));
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    c.budget -= 4;
    { const bool t = c.r[12].d[0] != c.r[11].d[0]; st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E73B8; } }
    c.r[12].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[14], c.r[14].w[0] - 1u);  if (t) { goto L_001E73BC; } }
L_001E73B8:
    set32(c.r[12], c.r[12].w[0] + 4u);
    c.budget -= 1;
L_001E73BC:
    set32(c.r[13], c.r[13].w[0] - 1u);
    c.r[10].d[0] = c.r[10].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 2;
L_001E73C4:
    c.r[3].d[0] = c.r[10].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[14].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E739Cu | kUnwind; return; } goto L_001E739C; }
L_001E73D0:
    set32(c.r[3], 0u + 8u);
    c.budget -= 1;
L_001E73D4:
    st8((c.r[4].w[0] + 17u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 19u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st64((c.r[4].w[0] + 8u), c.r[9].d[0]);
    c.r[10].d[0] = ld8((c.r[4].w[0] + 17u));
    c.budget -= 4;
L_001E73E4:
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[10].d[0] == c.r[3].d[0];  if (t) { goto L_001E73F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E758C; } }
L_001E73F8:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { c.r[7].d[0] = c.r[9].d[0] << 32;  goto L_001E74E0; }
    c.r[10].d[0] = c.r[9].d[0] << 32;
    c.r[3].d[0] = c.r[9].d[0] << 2;
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    set32(c.r[10], c.r[5].w[0] + c.r[10].w[0]);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[11], c.r[10].w[0] - 1u);
    set32(c.r[10], c.r[3].w[0] - 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 255u);  if (t) { goto L_001E74A8; } }
L_001E7430:
    c.r[12].d[0] = c.r[13].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[12].d[0] != 0ull) { set32(c.r[12], c.r[7].w[0] + c.r[13].w[0]);  goto L_001E7448; }
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[10], c.r[10].w[0] - 1u);  if (t) { goto L_001E7454; } }
L_001E7448:
    c.r[12].d[0] = ld8((c.r[12].w[0]));
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[12].w[0]));
    set32(c.r[10], c.r[10].w[0] - 1u);
    c.budget -= 3;
L_001E7454:
    c.r[13].d[0] = ld8((c.r[11].w[0]));
    c.r[5].d[0] = c.r[5].d[0] + static_cast<std::uint64_t>(1ll);
    set32(c.r[12], c.r[13].w[0] << 1);
    set32(c.r[12], c.r[12].w[0] + c.r[13].w[0]);
    set32(c.r[12], c.r[6].w[0] + c.r[12].w[0]);
    c.r[12].d[0] = ld8((c.r[12].w[0] + 2u));
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[13].d[0] = ld8((c.r[11].w[0]));
    set32(c.r[12], c.r[13].w[0] << 1);
    set32(c.r[12], c.r[12].w[0] + c.r[13].w[0]);
    set32(c.r[12], c.r[6].w[0] + c.r[12].w[0]);
    c.r[12].d[0] = ld8((c.r[12].w[0] + 1u));
    st8((c.r[10].w[0] - 1u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[13].d[0] = ld8((c.r[11].w[0]));
    set32(c.r[12], c.r[13].w[0] << 1);
    set32(c.r[11], c.r[11].w[0] - 1u);
    set32(c.r[12], c.r[12].w[0] + c.r[13].w[0]);
    set32(c.r[12], c.r[6].w[0] + c.r[12].w[0]);
    c.r[12].d[0] = ld8((c.r[12].w[0]));
    st8((c.r[10].w[0] - 2u), static_cast<std::uint8_t>(c.r[12].w[0]));
    set32(c.r[10], c.r[10].w[0] - 3u);
    c.budget -= 21;
L_001E74A8:
    c.r[12].d[0] = c.r[5].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[12].d[0] != 0ull) { c.r[13].d[0] = ld8((c.r[11].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E7430u | kUnwind; return; } goto L_001E7430; }
    set32(c.r[5], 0u + 8u);
    c.r[3].d[0] = c.r[9].d[0] << 2;
    st8((c.r[4].w[0] + 17u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], 0u + 32u);
    st8((c.r[4].w[0] + 19u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st64((c.r[4].w[0] + 8u), c.r[3].d[0]);
    set32(c.r[5], 0u + 6u);
    set32(c.r[3], 0u + 4u);
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E758C; } }
L_001E74E0:
    c.r[3].d[0] = c.r[9].d[0] << 1;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] + c.r[9].d[0];
    set32(c.r[7], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[8], c.r[7].w[0] - 1u);
    c.r[7].d[0] = c.r[3].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    set32(c.r[7], c.r[5].w[0] + c.r[7].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[7].w[0] - 1u);  if (t) { goto L_001E755C; } }
L_001E750C:
    c.r[5].d[0] = c.r[5].d[0] + static_cast<std::uint64_t>(1ll);
    set32(c.r[10], c.r[11].w[0] << 1);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[10], c.r[6].w[0] + c.r[10].w[0]);
    c.r[10].d[0] = ld8((c.r[10].w[0] + 2u));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[11].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[10], c.r[11].w[0] << 1);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[10], c.r[6].w[0] + c.r[10].w[0]);
    c.r[10].d[0] = ld8((c.r[10].w[0] + 1u));
    st8((c.r[7].w[0] - 1u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[11].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[10], c.r[11].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] - 1u);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[10], c.r[6].w[0] + c.r[10].w[0]);
    c.r[10].d[0] = ld8((c.r[10].w[0]));
    st8((c.r[7].w[0] - 2u), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[7], c.r[7].w[0] - 3u);
    c.budget -= 20;
L_001E755C:
    c.r[10].d[0] = c.r[5].d[0] < c.r[9].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[10].d[0] != 0ull) { c.r[11].d[0] = ld8((c.r[8].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E750Cu | kUnwind; return; } goto L_001E750C; }
    set32(c.r[6], 0u + 8u);
    set32(c.r[5], 0u + 24u);
    st8((c.r[4].w[0] + 17u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 19u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], 0u + 2u);
    st64((c.r[4].w[0] + 8u), c.r[3].d[0]);
    set32(c.r[5], 0u + 3u);
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 18u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 9;
L_001E758C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E75A0:
    c.r[10].d[0] = ld8((c.r[4].w[0] + 17u));
    c.r[1].d[0] = c.r[10].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[11].d[0] = ld64((c.r[4].w[0]));  if (t) { goto L_001E75B8; } }
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { c.r[9].d[0] = ld8((c.r[4].w[0] + 16u));  goto L_001E75D0; }
L_001E75B8:
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[10].d[0] != c.r[3].d[0];  if (t) { goto L_001E7A58; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_001E7A58; } }
    c.r[9].d[0] = ld8((c.r[4].w[0] + 16u));
    c.budget -= 1;
L_001E75D0:
    c.budget -= 2;
    if (c.r[9].d[0] == 0ull) { set32(c.r[3], 0u + 2u);  goto L_001E7884; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[9].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 8u);  goto L_001E7804; }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    if (c.r[9].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 8u);  goto L_001E7704; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[9].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 8u);  goto L_001E7604; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E7A58; } }
L_001E7604:
    c.budget -= 2;
    if (c.r[10].d[0] != c.r[3].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_001E76F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001E7648; } }
L_001E7614:
    c.r[4].d[0] = c.r[4].d[0] + static_cast<std::uint64_t>(1ll);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2u));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 3u);
    c.budget -= 13;
L_001E7648:
    c.r[3].d[0] = c.r[4].d[0] < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E7614u | kUnwind; return; } goto L_001E7614; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E7A58; } }
L_001E765C:
    c.r[3].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> (c.r[8].w[0] & 31u)));
    set32(c.r[9], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 8));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 3u));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2u));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> (c.r[8].w[0] & 31u)));
    set32(c.r[9], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 8));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 5u));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 4u));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> (c.r[8].w[0] & 31u)));
    set32(c.r[9], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 8));
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[5], c.r[5].w[0] + 6u);
    c.budget -= 37;
L_001E76F0:
    c.r[4].d[0] = c.r[3].d[0] < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { c.r[6].d[0] = ld8((c.r[5].w[0] + 1u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E765Cu | kUnwind; return; } goto L_001E765C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E7A58; } }
L_001E7704:
    c.budget -= 2;
    if (c.r[10].d[0] != c.r[3].d[0]) { c.r[3].d[0] = 0ull + 0ull;  goto L_001E77F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001E7748; } }
L_001E7714:
    c.r[4].d[0] = c.r[4].d[0] + static_cast<std::uint64_t>(1ll);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2u));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 13;
L_001E7748:
    c.r[3].d[0] = c.r[4].d[0] < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E7714u | kUnwind; return; } goto L_001E7714; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E7A58; } }
L_001E775C:
    c.r[3].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[4].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> (c.r[8].w[0] & 31u)));
    set32(c.r[9], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 8));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 3u));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2u));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> (c.r[8].w[0] & 31u)));
    set32(c.r[9], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 8));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 5u));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 4u));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> (c.r[8].w[0] & 31u)));
    set32(c.r[9], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[7].w[0] + c.r[9].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 8));
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.budget -= 37;
L_001E77F0:
    c.r[4].d[0] = c.r[3].d[0] < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { c.r[6].d[0] = ld8((c.r[5].w[0] + 1u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E775Cu | kUnwind; return; } goto L_001E775C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E7A58; } }
L_001E7804:
    c.budget -= 2;
    if (c.r[10].d[0] != c.r[3].d[0]) { c.r[9].d[0] = 0ull + 0ull;  goto L_001E7870; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001E7828; } }
L_001E7814:
    c.r[4].d[0] = c.r[4].d[0] + static_cast<std::uint64_t>(1ll);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.budget -= 5;
L_001E7828:
    c.r[3].d[0] = c.r[4].d[0] < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E7814u | kUnwind; return; } goto L_001E7814; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E7A58; } }
L_001E783C:
    c.r[9].d[0] = c.r[9].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_001E7840:
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> (c.r[8].w[0] & 31u)));
    set32(c.r[6], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 8));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 12;
L_001E7870:
    c.r[3].d[0] = c.r[9].d[0] < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = ld8((c.r[5].w[0] + 1u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E783Cu | kUnwind; return; } goto L_001E783C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E7A58; } }
L_001E7884:
    c.budget -= 2;
    if (c.r[10].d[0] != c.r[3].d[0]) { c.r[4].d[0] = ld8((c.r[4].w[0] + 17u));  goto L_001E7968; }
    c.r[13].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[12].d[0] = 0ull + 0ull;  if (t) { goto L_001E7958; } }
L_001E7898:
    c.r[12].d[0] = c.r[12].d[0] + static_cast<std::uint64_t>(4ll);
    c.r[25].d[0] = c.r[9].d[0] & 192ull;
    c.r[3].d[0] = c.r[9].d[0] & 48ull;
    set32(c.r[14], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[25].w[0]) >> 2));
    c.r[10].d[0] = c.r[9].d[0] & 12ull;
    c.r[15].d[0] = c.r[25].d[0] | c.r[14].d[0];
    set32(c.r[24], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[25].w[0]) >> 4));
    c.r[24].d[0] = c.r[24].d[0] | c.r[15].d[0];
    set32(c.r[14], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[25].w[0]) >> 6));
    c.r[24].d[0] = c.r[14].d[0] | c.r[24].d[0];
    set32(c.r[15], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    set32(c.r[14], c.r[3].w[0] << 2);
    set32(c.r[24], c.r[6].w[0] + c.r[24].w[0]);
    c.r[14].d[0] = c.r[3].d[0] | c.r[14].d[0];
    c.r[24].d[0] = ld8((c.r[24].w[0]));
    c.r[15].d[0] = c.r[15].d[0] | c.r[14].d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.r[15].d[0] = c.r[3].d[0] | c.r[15].d[0];
    set32(c.r[14], c.r[10].w[0] << 4);
    set32(c.r[3], c.r[10].w[0] << 2);
    set32(c.r[15], c.r[6].w[0] + c.r[15].w[0]);
    c.r[14].d[0] = c.r[14].d[0] | c.r[3].d[0];
    c.r[9].d[0] = c.r[9].d[0] & 3ull;
    c.r[3].d[0] = c.r[24].d[0] & 192ull;
    c.r[14].d[0] = c.r[10].d[0] | c.r[14].d[0];
    c.r[24].d[0] = ld8((c.r[15].w[0]));
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 2));
    c.r[10].d[0] = c.r[10].d[0] | c.r[14].d[0];
    set32(c.r[14], c.r[9].w[0] << 6);
    set32(c.r[15], c.r[6].w[0] + c.r[10].w[0]);
    set32(c.r[10], c.r[9].w[0] << 4);
    c.r[10].d[0] = c.r[14].d[0] | c.r[10].d[0];
    set32(c.r[14], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[24].w[0]) >> 2));
    c.r[24].d[0] = c.r[14].d[0] & 48ull;
    c.r[14].d[0] = ld8((c.r[15].w[0]));
    c.r[15].d[0] = c.r[3].d[0] | c.r[24].d[0];
    set32(c.r[3], c.r[9].w[0] << 2);
    c.r[3].d[0] = c.r[3].d[0] | c.r[10].d[0];
    c.r[3].d[0] = c.r[9].d[0] | c.r[3].d[0];
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[14].w[0]) >> 4));
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.r[9].d[0] = c.r[9].d[0] & 12ull;
    c.r[9].d[0] = c.r[9].d[0] | c.r[15].d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 6));
    c.r[3].d[0] = c.r[3].d[0] | c.r[9].d[0];
    st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[13], c.r[13].w[0] + 1u);
    c.budget -= 48;
L_001E7958:
    c.r[3].d[0] = c.r[12].d[0] < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[9].d[0] = ld8((c.r[13].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E7898u | kUnwind; return; } goto L_001E7898; }
    c.r[4].d[0] = ld8((c.r[4].w[0] + 17u));
    c.budget -= 1;
L_001E7968:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 8u);  goto L_001E79D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_001E79BC; } }
L_001E797C:
    c.r[9].d[0] = c.r[9].d[0] + static_cast<std::uint64_t>(2ll);
    c.r[8].d[0] = c.r[3].d[0] & 240ull;
    c.r[7].d[0] = c.r[3].d[0] & 15ull;
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> 4));
    set32(c.r[3], c.r[7].w[0] << 4);
    c.r[4].d[0] = c.r[8].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[7].d[0] | c.r[3].d[0];
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    c.r[4].d[0] = c.r[4].d[0] & 240ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 16;
L_001E79BC:
    c.r[3].d[0] = c.r[9].d[0] < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E797Cu | kUnwind; return; } goto L_001E797C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E7A58; } }
L_001E79D0:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u + 16u);  goto L_001E7A08; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001E79F4; } }
L_001E79E0:
    c.r[4].d[0] = c.r[4].d[0] + static_cast<std::uint64_t>(1ll);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 5;
L_001E79F4:
    c.r[3].d[0] = c.r[4].d[0] < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E79E0u | kUnwind; return; } goto L_001E79E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001E7A58; } }
L_001E7A08:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001E7A58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_001E7A4C; } }
L_001E7A18:
    c.r[9].d[0] = c.r[9].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> (c.r[8].w[0] & 31u)));
    set32(c.r[6], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 8));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.budget -= 13;
L_001E7A4C:
    c.r[3].d[0] = c.r[9].d[0] < c.r[11].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = ld8((c.r[5].w[0] + 1u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E7A18u | kUnwind; return; } goto L_001E7A18; }
L_001E7A58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001E7A60:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = ld64((c.r[4].w[0]));
    set32(c.r[7], ld32((c.r[29].w[0] + 136u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 18;
    { const bool t = c.r[20].d[0] == 0ull; set32(c.r[8], ld32((c.r[29].w[0] + 128u)));  if (t) { [[clang::musttail]] return unit_003A(c, 24u, depth); } }
    c.r[14].d[0] = ld8((c.r[21].w[0] + 16u));
    c.r[12].d[0] = c.r[14].d[0] & 4ull;
    c.budget -= 4;
    if (c.r[12].d[0] == 0ull) { set32(c.r[12], 0u + 6u);  goto L_001E7AD0; }
    set32(c.r[12], 0u + 3u);
    c.budget -= 3;
    if (c.r[14].d[0] == c.r[12].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  [[clang::musttail]] return unit_003A(c, 25u, depth); }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_003A(c, 24u, depth); } }
    set32(c.r[12], 0u + 6u);
    c.budget -= 1;
L_001E7AD0:
    c.budget -= 2;
    if (c.r[14].d[0] == c.r[12].d[0]) { c.r[12].d[0] = ld8((c.r[21].w[0] + 17u));  [[clang::musttail]] return unit_003A(c, 16u, depth); }
    set32(c.r[13], 0u + 4u);
    c.budget -= 3;
    if (c.r[14].d[0] == c.r[13].d[0]) { c.r[12].d[0] = ld8((c.r[21].w[0] + 17u));  [[clang::musttail]] return unit_003A(c, 10u, depth); }
    set32(c.r[10], 0u + 2u);
    c.budget -= 3;
    if (c.r[14].d[0] == c.r[10].d[0]) { c.r[7].d[0] = ld8((c.r[21].w[0] + 17u));  goto L_001E7F9C; }
    c.budget -= 2;
    if (c.r[14].d[0] == 0ull) { c.r[7].d[0] = ld8((c.r[21].w[0] + 17u));  goto L_001E7B00; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = ld8((c.r[21].w[0] + 16u));  if (t) { [[clang::musttail]] return unit_003A(c, 23u, depth); } }
L_001E7B00:
    set32(c.r[4], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[4].d[0];  if (t) { goto L_001E7ECC; } }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_001E7E50; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[13].d[0];  if (t) { goto L_001E7D0C; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[10].d[0];  if (t) { goto L_001E7BB8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[7].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 7u);  goto L_001E7B3C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003A(c, 22u, depth); } }
L_001E7B3C:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[11].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[10], 0u + 32639u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_001E7BA4; } }
L_001E7B50:
    c.r[12].d[0] = ld16((c.r[6].w[0] + 8u));
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[7].d[0] = c.r[7].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[12].d[0] != c.r[7].d[0];  if (t) { goto L_001E7B90; } }
    set32(c.r[7], c.r[11].w[0] - c.r[3].w[0]);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> (c.r[7].w[0] & 31u)));
    c.r[7].d[0] = c.r[7].d[0] & 255ull;
    c.r[7].d[0] = c.r[9].d[0] & c.r[7].d[0];
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[9].d[0] = ld16((c.r[20].w[0] + 8u));
    c.r[7].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[9], c.r[9].w[0] << (c.r[3].w[0] & 31u));
    c.r[9].d[0] = c.r[9].d[0] & 255ull;
    c.r[7].d[0] = c.r[7].d[0] | c.r[9].d[0];
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 11;
L_001E7B90:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_001E7BA0; }
    c.r[3].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_001E7BA0:
    c.r[4].d[0] = c.r[4].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_001E7BA4:
    c.r[7].d[0] = c.r[4].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[7].d[0] != 0ull) { c.r[9].d[0] = ld8((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E7B50u | kUnwind; return; } goto L_001E7B50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003A(c, 22u, depth); } }
L_001E7BB8:
    c.budget -= 2;
    if (c.r[9].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_001E7C94; }
    c.r[8].d[0] = 0ull + 0ull;
    c.r[13].d[0] = c.r[12].d[0] + 0ull;
    set32(c.r[3], 0u + 16191u);
    c.r[4].d[0] = c.r[12].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = c.r[12].d[0] + 0ull;  if (t) { goto L_001E7C80; } }
L_001E7BD8:
    c.r[11].d[0] = ld16((c.r[6].w[0] + 8u));
    set32(c.r[14], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[12].w[0] & 31u)));
    c.r[14].d[0] = c.r[14].d[0] & 3ull;
    c.budget -= 5;
    if (c.r[11].d[0] != c.r[14].d[0]) { set32(c.r[11], c.r[13].w[0] - c.r[12].w[0]);  goto L_001E7C1C; }
    set32(c.r[11], c.r[4].w[0] - c.r[12].w[0]);
    set32(c.r[11], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> (c.r[11].w[0] & 31u)));
    c.r[11].d[0] = c.r[11].d[0] & 255ull;
    c.r[7].d[0] = c.r[7].d[0] & c.r[11].d[0];
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[11].d[0] = ld16((c.r[20].w[0] + 8u));
    c.r[7].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[11], c.r[11].w[0] << (c.r[12].w[0] & 31u));
    c.r[11].d[0] = c.r[11].d[0] & 255ull;
    c.r[7].d[0] = c.r[7].d[0] | c.r[11].d[0];
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { goto L_001E7C6C; } }
L_001E7C1C:
    c.r[17].d[0] = c.r[14].d[0] & 255ull;
    set32(c.r[11], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> (c.r[11].w[0] & 31u)));
    set32(c.r[14], c.r[17].w[0] << 2);
    c.r[11].d[0] = c.r[11].d[0] & 255ull;
    set32(c.r[15], c.r[17].w[0] << 4);
    c.r[7].d[0] = c.r[7].d[0] & c.r[11].d[0];
    c.r[11].d[0] = c.r[17].d[0] | c.r[14].d[0];
    c.r[14].d[0] = c.r[15].d[0] | c.r[11].d[0];
    set32(c.r[11], c.r[17].w[0] << 6);
    c.r[11].d[0] = c.r[11].d[0] | c.r[14].d[0];
    set32(c.r[11], c.r[9].w[0] + c.r[11].w[0]);
    c.r[11].d[0] = ld8((c.r[11].w[0]));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> 6));
    c.r[11].d[0] = c.r[7].d[0] & 3ull;
    c.r[7].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[11], c.r[11].w[0] << (c.r[12].w[0] & 31u));
    c.r[11].d[0] = c.r[11].d[0] & 255ull;
    c.r[7].d[0] = c.r[7].d[0] | c.r[11].d[0];
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 20;
L_001E7C6C:
    c.budget -= 2;
    if (c.r[12].d[0] != 0ull) { set32(c.r[12], c.r[12].w[0] - 2u);  goto L_001E7C7C; }
    c.r[12].d[0] = c.r[10].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_001E7C7C:
    c.r[8].d[0] = c.r[8].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_001E7C80:
    c.r[7].d[0] = c.r[8].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[7].d[0] != 0ull) { c.r[7].d[0] = ld8((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E7BD8u | kUnwind; return; } goto L_001E7BD8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003A(c, 22u, depth); } }
L_001E7C94:
    c.r[10].d[0] = c.r[12].d[0] + 0ull;
    set32(c.r[9], 0u + 16191u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[12].d[0] + 0ull;  if (t) { goto L_001E7CF8; } }
L_001E7CA4:
    c.r[11].d[0] = ld16((c.r[6].w[0] + 8u));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> (c.r[12].w[0] & 31u)));
    c.r[4].d[0] = c.r[4].d[0] & 3ull;
    c.budget -= 5;
    { const bool t = c.r[11].d[0] != c.r[4].d[0];  if (t) { goto L_001E7CE4; } }
    set32(c.r[4], c.r[10].w[0] - c.r[12].w[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> (c.r[4].w[0] & 31u)));
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[4].d[0] = c.r[8].d[0] & c.r[4].d[0];
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[8].d[0] = ld16((c.r[20].w[0] + 8u));
    c.r[4].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[8], c.r[8].w[0] << (c.r[12].w[0] & 31u));
    c.r[8].d[0] = c.r[8].d[0] & 255ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[8].d[0];
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 11;
L_001E7CE4:
    c.budget -= 2;
    if (c.r[12].d[0] != 0ull) { set32(c.r[12], c.r[12].w[0] - 2u);  goto L_001E7CF4; }
    c.r[12].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_001E7CF4:
    c.r[3].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_001E7CF8:
    c.r[4].d[0] = c.r[3].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { c.r[8].d[0] = ld8((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E7CA4u | kUnwind; return; } goto L_001E7CA4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003A(c, 22u, depth); } }
L_001E7D0C:
    c.budget -= 2;
    if (c.r[9].d[0] == 0ull) { c.r[3].d[0] = 0ull + 0ull;  goto L_001E7DD8; }
    c.r[8].d[0] = 0ull + 0ull;
    c.r[12].d[0] = c.r[13].d[0] + 0ull;
    set32(c.r[3], 0u + 3855u);
    c.r[4].d[0] = c.r[13].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[10].d[0] = c.r[13].d[0] + 0ull;  if (t) { goto L_001E7DC4; } }
L_001E7D2C:
    c.r[11].d[0] = ld16((c.r[6].w[0] + 8u));
    set32(c.r[14], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[13].w[0] & 31u)));
    c.r[14].d[0] = c.r[14].d[0] & 15ull;
    c.budget -= 5;
    if (c.r[11].d[0] != c.r[14].d[0]) { set32(c.r[11], c.r[12].w[0] - c.r[13].w[0]);  goto L_001E7D70; }
    set32(c.r[11], c.r[4].w[0] - c.r[13].w[0]);
    set32(c.r[11], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> (c.r[11].w[0] & 31u)));
    c.r[11].d[0] = c.r[11].d[0] & 255ull;
    c.r[7].d[0] = c.r[7].d[0] & c.r[11].d[0];
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[11].d[0] = ld16((c.r[20].w[0] + 8u));
    c.r[7].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[11], c.r[11].w[0] << (c.r[13].w[0] & 31u));
    c.r[11].d[0] = c.r[11].d[0] & 255ull;
    c.r[7].d[0] = c.r[7].d[0] | c.r[11].d[0];
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { goto L_001E7DB0; } }
L_001E7D70:
    c.r[15].d[0] = c.r[14].d[0] & 255ull;
    set32(c.r[11], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> (c.r[11].w[0] & 31u)));
    set32(c.r[14], c.r[15].w[0] << 4);
    c.r[11].d[0] = c.r[11].d[0] & 255ull;
    c.r[14].d[0] = c.r[15].d[0] | c.r[14].d[0];
    c.r[7].d[0] = c.r[7].d[0] & c.r[11].d[0];
    set32(c.r[11], c.r[9].w[0] + c.r[14].w[0]);
    c.r[11].d[0] = ld8((c.r[11].w[0]));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> 4));
    c.r[11].d[0] = c.r[7].d[0] & 15ull;
    c.r[7].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[11], c.r[11].w[0] << (c.r[13].w[0] & 31u));
    c.r[11].d[0] = c.r[11].d[0] & 255ull;
    c.r[7].d[0] = c.r[7].d[0] | c.r[11].d[0];
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 16;
L_001E7DB0:
    c.budget -= 2;
    if (c.r[13].d[0] != 0ull) { set32(c.r[13], c.r[13].w[0] - 4u);  goto L_001E7DC0; }
    c.r[13].d[0] = c.r[10].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_001E7DC0:
    c.r[8].d[0] = c.r[8].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_001E7DC4:
    c.r[7].d[0] = c.r[8].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[7].d[0] != 0ull) { c.r[7].d[0] = ld8((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E7D2Cu | kUnwind; return; } goto L_001E7D2C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003A(c, 22u, depth); } }
L_001E7DD8:
    c.r[10].d[0] = c.r[13].d[0] + 0ull;
    set32(c.r[9], 0u + 3855u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[13].d[0] + 0ull;  if (t) { goto L_001E7E3C; } }
L_001E7DE8:
    c.r[11].d[0] = ld16((c.r[6].w[0] + 8u));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[8].w[0]) >> (c.r[13].w[0] & 31u)));
    c.r[4].d[0] = c.r[4].d[0] & 15ull;
    c.budget -= 5;
    { const bool t = c.r[11].d[0] != c.r[4].d[0];  if (t) { goto L_001E7E28; } }
    set32(c.r[4], c.r[10].w[0] - c.r[13].w[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> (c.r[4].w[0] & 31u)));
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[4].d[0] = c.r[8].d[0] & c.r[4].d[0];
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[8].d[0] = ld16((c.r[20].w[0] + 8u));
    c.r[4].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[8], c.r[8].w[0] << (c.r[13].w[0] & 31u));
    c.r[8].d[0] = c.r[8].d[0] & 255ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[8].d[0];
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 11;
L_001E7E28:
    c.budget -= 2;
    if (c.r[13].d[0] != 0ull) { set32(c.r[13], c.r[13].w[0] - 4u);  goto L_001E7E38; }
    c.r[13].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_001E7E38:
    c.r[3].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_001E7E3C:
    c.r[4].d[0] = c.r[3].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] != 0ull) { c.r[8].d[0] = ld8((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E7DE8u | kUnwind; return; } goto L_001E7DE8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003A(c, 22u, depth); } }
L_001E7E50:
    c.budget -= 2;
    if (c.r[9].d[0] == 0ull) { c.r[7].d[0] = 0ull + 0ull;  goto L_001E7EB8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_001E7E88; } }
L_001E7E60:
    c.r[3].d[0] = ld16((c.r[6].w[0] + 8u));
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[3], c.r[9].w[0] + c.r[4].w[0]);  goto L_001E7E78; }
    c.r[3].d[0] = ld16((c.r[20].w[0] + 8u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001E7E80; } }
L_001E7E78:
    c.r[3].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001E7E80:
    c.r[7].d[0] = c.r[7].d[0] + static_cast<std::uint64_t>(1ll);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_001E7E88:
    c.r[3].d[0] = c.r[7].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = ld8((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E7E60u | kUnwind; return; } goto L_001E7E60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003A(c, 22u, depth); } }
L_001E7E9C:
    c.r[3].d[0] = ld16((c.r[6].w[0] + 8u));
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[7].d[0] = c.r[7].d[0] + static_cast<std::uint64_t>(1ll);  goto L_001E7EB4; }
    c.r[3].d[0] = ld16((c.r[20].w[0] + 8u));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[7].d[0] = c.r[7].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 3;
L_001E7EB4:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_001E7EB8:
    c.r[3].d[0] = c.r[7].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = ld8((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E7E9Cu | kUnwind; return; } goto L_001E7E9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003A(c, 22u, depth); } }
L_001E7ECC:
    c.budget -= 2;
    if (c.r[8].d[0] == 0ull) { c.r[8].d[0] = 0ull + 0ull;  goto L_001E7F88; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_001E7F3C; } }
L_001E7EDC:
    c.r[11].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[7].d[0] = ld16((c.r[6].w[0] + 8u));
    set32(c.r[9], c.r[10].w[0] << 8);
    set32(c.r[9], c.r[9].w[0] + c.r[11].w[0]);
    c.r[9].d[0] = c.r[9].d[0] & 65535ull;
    c.budget -= 7;
    if (c.r[9].d[0] != c.r[7].d[0]) { set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[11].w[0]) >> (c.r[3].w[0] & 31u)));  goto L_001E7F10; }
    c.r[7].d[0] = ld16((c.r[20].w[0] + 8u));
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 8));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[20].w[0] + 8u));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { goto L_001E7F34; } }
L_001E7F10:
    set32(c.r[9], c.r[10].w[0] << 1);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[7], ld32((c.r[7].w[0])));
    set32(c.r[7], c.r[7].w[0] + c.r[9].w[0]);
    c.r[9].d[0] = ld16((c.r[7].w[0]));
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 8));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    c.budget -= 9;
L_001E7F34:
    c.r[4].d[0] = c.r[4].d[0] + static_cast<std::uint64_t>(1ll);
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.budget -= 2;
L_001E7F3C:
    c.r[7].d[0] = c.r[4].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[7].d[0] != 0ull) { c.r[10].d[0] = ld8((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E7EDCu | kUnwind; return; } goto L_001E7EDC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003A(c, 22u, depth); } }
L_001E7F50:
    c.r[4].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[3].d[0] = ld16((c.r[6].w[0] + 8u));
    set32(c.r[7], c.r[7].w[0] << 8);
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 7;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[8].d[0] = c.r[8].d[0] + static_cast<std::uint64_t>(1ll);  goto L_001E7F84; }
    c.r[3].d[0] = ld16((c.r[20].w[0] + 8u));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 8));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 8u));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[8].d[0] = c.r[8].d[0] + static_cast<std::uint64_t>(1ll);
    c.budget -= 6;
L_001E7F84:
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.budget -= 1;
L_001E7F88:
    c.r[3].d[0] = c.r[8].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[7].d[0] = ld8((c.r[5].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001E7F50u | kUnwind; return; } goto L_001E7F50; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003A(c, 22u, depth); } }
L_001E7F9C:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[4].d[0];  if (t) { [[clang::musttail]] return unit_003A(c, 7u, depth); } }
    c.budget -= 2;
    if (c.r[9].d[0] == 0ull) { c.r[7].d[0] = 0ull + 0ull;  [[clang::musttail]] return unit_003A(c, 6u, depth); }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_003A(c, 4u, depth); } }
L_001E7FB8:
    c.r[4].d[0] = ld16((c.r[6].w[0] + 2u));
    c.budget -= 3;
    if (c.r[8].d[0] != c.r[4].d[0]) { set32(c.r[4], c.r[9].w[0] + c.r[8].w[0]);  [[clang::musttail]] return unit_003A(c, 2u, depth); }
    c.r[7].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[4].d[0] = ld16((c.r[6].w[0] + 4u));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[4].d[0];  if (t) { [[clang::musttail]] return unit_003A(c, 1u, depth); } }
    c.r[7].d[0] = ld8((c.r[5].w[0] + 2u));
    c.r[4].d[0] = ld16((c.r[6].w[0] + 6u));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[4].d[0];  if (t) { [[clang::musttail]] return unit_003A(c, 1u, depth); } }
    c.r[4].d[0] = ld16((c.r[20].w[0] + 2u));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[20].w[0] + 4u));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[20].w[0] + 6u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { [[clang::musttail]] return unit_003A(c, 3u, depth); } }
    [[clang::musttail]] return unit_003A(c, 1u, depth);
}

}
