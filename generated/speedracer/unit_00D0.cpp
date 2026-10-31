#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00D0[4096] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0, 7, 0, 0, 8, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 14, 0,
    0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0,
    0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0,
    33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    40, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0,
    0, 0, 46, 0, 0, 47, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0,
    0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0,
    0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0,
    0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 81, 0, 0, 0, 82, 0,
    83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0,
    0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 92, 0, 0,
    93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0,
    101, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 107,
    0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0,
    0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0,
    0, 122, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0,
    0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0,
    146, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0,
    0, 161, 162, 0, 0, 0, 163, 0, 164, 165, 0, 166, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0,
    0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 0,
    0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 189, 0, 0, 0, 190, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0,
    0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0,
    200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0,
    0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0,
    209, 0, 0, 210, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    218, 0, 0, 0, 0, 0, 219, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0,
    0, 0, 224, 0, 0, 225, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0,
    0, 0, 0, 0, 239, 0, 0, 240, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0,
    0, 244, 0, 0, 0, 0, 0, 0, 245, 246, 0, 0, 0, 0, 247, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0,
    0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 253, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0,
    0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 264, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 270, 0, 0,
    0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 275, 0, 0, 276, 0, 0, 0,
    277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0,
    280, 0, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 286,
    0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    290, 0, 0, 0, 0, 0, 291, 0, 0, 292, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 0,
    0, 0, 296, 0, 0, 297, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0,
    0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 308, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 0,
    0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 319, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 325, 0, 0, 0,
    0, 0, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0,
    0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 340, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0,
    358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 0,
    0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 0,
    0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 373, 0, 0, 0, 374, 0, 375, 0, 0, 376, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0,
    383, 0, 0, 0, 384, 0, 385, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    390, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 402, 0,
    0, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 0, 0, 409,
    0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 413, 0, 0, 414, 0, 0, 0,
    0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 418, 0, 0, 0, 0,
    0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 422, 0, 423, 0, 0, 424, 0, 0, 0, 425, 0, 0, 426, 0, 427, 0, 428, 0,
    0, 429, 0, 0, 0, 430, 0, 0, 431, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 434,
    0, 0, 0, 0, 435, 0, 0, 0, 0, 436, 0, 0, 0, 0, 437, 0, 0, 0, 0, 438, 0, 0, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0,
    441, 442, 443, 0, 0, 0, 0, 444, 0, 0, 445, 0, 0, 446, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 449, 0, 450, 0, 0,
    0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 453, 0, 454, 0, 0, 0, 455, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 458, 0, 0, 459, 0, 460, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0,
    468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0,
    475, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 479, 0, 0, 0,
    0, 0, 0, 0, 0, 480, 0, 0, 481, 0, 0, 0, 482, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485,
    0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 501, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 512, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 517, 0, 0, 0, 0, 0,
    518, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 521, 0, 0, 0, 0, 522, 0, 0,
    0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0,
    526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 528, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0,
    531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539,
    0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 542, 0, 543, 0, 544, 0,
};

void unit_00D0(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00440000;
    case 2u: goto L_00440014;
    case 3u: goto L_00440028;
    case 4u: goto L_0044003C;
    case 5u: goto L_00440054;
    case 6u: goto L_0044005C;
    case 7u: goto L_0044006C;
    case 8u: goto L_00440078;
    case 9u: goto L_004400A4;
    case 10u: goto L_004400C0;
    case 11u: goto L_004400CC;
    case 12u: goto L_004400DC;
    case 13u: goto L_004400EC;
    case 14u: goto L_004400F8;
    case 15u: goto L_00440108;
    case 16u: goto L_00440124;
    case 17u: goto L_0044012C;
    case 18u: goto L_0044013C;
    case 19u: goto L_0044014C;
    case 20u: goto L_00440158;
    case 21u: goto L_00440180;
    case 22u: goto L_004401B8;
    case 23u: goto L_004401D0;
    case 24u: goto L_00440208;
    case 25u: goto L_00440220;
    case 26u: goto L_00440244;
    case 27u: goto L_00440258;
    case 28u: goto L_00440270;
    case 29u: goto L_00440294;
    case 30u: goto L_004402B0;
    case 31u: goto L_004402CC;
    case 32u: goto L_004402E0;
    case 33u: goto L_00440300;
    case 34u: goto L_00440328;
    case 35u: goto L_00440354;
    case 36u: goto L_00440380;
    case 37u: goto L_004403B0;
    case 38u: goto L_004403BC;
    case 39u: goto L_004403D8;
    case 40u: goto L_00440400;
    case 41u: goto L_00440418;
    case 42u: goto L_00440424;
    case 43u: goto L_00440440;
    case 44u: goto L_00440458;
    case 45u: goto L_00440470;
    case 46u: goto L_00440488;
    case 47u: goto L_00440494;
    case 48u: goto L_004404A0;
    case 49u: goto L_004404B0;
    case 50u: goto L_004404E0;
    case 51u: goto L_00440518;
    case 52u: goto L_00440530;
    case 53u: goto L_0044053C;
    case 54u: goto L_00440558;
    case 55u: goto L_00440570;
    case 56u: goto L_00440588;
    case 57u: goto L_004405A0;
    case 58u: goto L_004405AC;
    case 59u: goto L_004405B8;
    case 60u: goto L_004405C8;
    case 61u: goto L_004405F8;
    case 62u: goto L_00440630;
    case 63u: goto L_00440648;
    case 64u: goto L_00440654;
    case 65u: goto L_00440670;
    case 66u: goto L_00440688;
    case 67u: goto L_004406A0;
    case 68u: goto L_004406B8;
    case 69u: goto L_004406C4;
    case 70u: goto L_004406D0;
    case 71u: goto L_004406E0;
    case 72u: goto L_00440710;
    case 73u: goto L_00440748;
    case 74u: goto L_00440760;
    case 75u: goto L_0044076C;
    case 76u: goto L_00440788;
    case 77u: goto L_004407A0;
    case 78u: goto L_004407B8;
    case 79u: goto L_004407D0;
    case 80u: goto L_004407DC;
    case 81u: goto L_004407E8;
    case 82u: goto L_004407F8;
    case 83u: goto L_00440800;
    case 84u: goto L_00440828;
    case 85u: goto L_00440860;
    case 86u: goto L_00440878;
    case 87u: goto L_00440884;
    case 88u: goto L_004408A0;
    case 89u: goto L_004408B8;
    case 90u: goto L_004408D0;
    case 91u: goto L_004408E8;
    case 92u: goto L_004408F4;
    case 93u: goto L_00440900;
    case 94u: goto L_00440910;
    case 95u: goto L_0044093C;
    case 96u: goto L_00440968;
    case 97u: goto L_00440998;
    case 98u: goto L_004409A4;
    case 99u: goto L_004409C0;
    case 100u: goto L_004409E8;
    case 101u: goto L_00440A00;
    case 102u: goto L_00440A0C;
    case 103u: goto L_00440A28;
    case 104u: goto L_00440A40;
    case 105u: goto L_00440A58;
    case 106u: goto L_00440A70;
    case 107u: goto L_00440A7C;
    case 108u: goto L_00440A88;
    case 109u: goto L_00440A98;
    case 110u: goto L_00440AC4;
    case 111u: goto L_00440AF0;
    case 112u: goto L_00440B20;
    case 113u: goto L_00440B2C;
    case 114u: goto L_00440B48;
    case 115u: goto L_00440B70;
    case 116u: goto L_00440B88;
    case 117u: goto L_00440B94;
    case 118u: goto L_00440BB0;
    case 119u: goto L_00440BC8;
    case 120u: goto L_00440BE0;
    case 121u: goto L_00440BF8;
    case 122u: goto L_00440C04;
    case 123u: goto L_00440C10;
    case 124u: goto L_00440C20;
    case 125u: goto L_00440C50;
    case 126u: goto L_00440C88;
    case 127u: goto L_00440CA0;
    case 128u: goto L_00440CAC;
    case 129u: goto L_00440CC8;
    case 130u: goto L_00440CE0;
    case 131u: goto L_00440CF8;
    case 132u: goto L_00440D10;
    case 133u: goto L_00440D1C;
    case 134u: goto L_00440D28;
    case 135u: goto L_00440D38;
    case 136u: goto L_00440D64;
    case 137u: goto L_00440D90;
    case 138u: goto L_00440DC0;
    case 139u: goto L_00440DCC;
    case 140u: goto L_00440DE8;
    case 141u: goto L_00440E10;
    case 142u: goto L_00440E28;
    case 143u: goto L_00440E34;
    case 144u: goto L_00440E50;
    case 145u: goto L_00440E68;
    case 146u: goto L_00440E80;
    case 147u: goto L_00440E98;
    case 148u: goto L_00440EA4;
    case 149u: goto L_00440EB0;
    case 150u: goto L_00440EC0;
    case 151u: goto L_00440EEC;
    case 152u: goto L_00440F18;
    case 153u: goto L_00440F48;
    case 154u: goto L_00440F54;
    case 155u: goto L_00440F70;
    case 156u: goto L_00440F98;
    case 157u: goto L_00440FB0;
    case 158u: goto L_00440FBC;
    case 159u: goto L_00440FD8;
    case 160u: goto L_00440FF0;
    case 161u: goto L_00441004;
    case 162u: goto L_00441008;
    case 163u: goto L_00441018;
    case 164u: goto L_00441020;
    case 165u: goto L_00441024;
    case 166u: goto L_0044102C;
    case 167u: goto L_00441038;
    case 168u: goto L_00441048;
    case 169u: goto L_00441078;
    case 170u: goto L_004410B0;
    case 171u: goto L_004410C8;
    case 172u: goto L_004410D4;
    case 173u: goto L_004410F0;
    case 174u: goto L_00441108;
    case 175u: goto L_00441120;
    case 176u: goto L_00441138;
    case 177u: goto L_00441144;
    case 178u: goto L_00441150;
    case 179u: goto L_00441160;
    case 180u: goto L_00441190;
    case 181u: goto L_004411C8;
    case 182u: goto L_004411E0;
    case 183u: goto L_004411EC;
    case 184u: goto L_00441208;
    case 185u: goto L_00441220;
    case 186u: goto L_00441238;
    case 187u: goto L_00441250;
    case 188u: goto L_0044125C;
    case 189u: goto L_00441268;
    case 190u: goto L_00441278;
    case 191u: goto L_004412A8;
    case 192u: goto L_004412E0;
    case 193u: goto L_004412F8;
    case 194u: goto L_00441304;
    case 195u: goto L_00441320;
    case 196u: goto L_00441338;
    case 197u: goto L_00441350;
    case 198u: goto L_00441368;
    case 199u: goto L_00441374;
    case 200u: goto L_00441380;
    case 201u: goto L_00441390;
    case 202u: goto L_004413C0;
    case 203u: goto L_004413F8;
    case 204u: goto L_00441410;
    case 205u: goto L_0044141C;
    case 206u: goto L_00441438;
    case 207u: goto L_00441450;
    case 208u: goto L_00441468;
    case 209u: goto L_00441480;
    case 210u: goto L_0044148C;
    case 211u: goto L_00441498;
    case 212u: goto L_004414A8;
    case 213u: goto L_004414D4;
    case 214u: goto L_00441500;
    case 215u: goto L_00441530;
    case 216u: goto L_0044153C;
    case 217u: goto L_00441558;
    case 218u: goto L_00441580;
    case 219u: goto L_00441598;
    case 220u: goto L_004415A4;
    case 221u: goto L_004415C0;
    case 222u: goto L_004415D8;
    case 223u: goto L_004415F0;
    case 224u: goto L_00441608;
    case 225u: goto L_00441614;
    case 226u: goto L_00441620;
    case 227u: goto L_00441630;
    case 228u: goto L_0044165C;
    case 229u: goto L_00441688;
    case 230u: goto L_004416B8;
    case 231u: goto L_004416C4;
    case 232u: goto L_004416E0;
    case 233u: goto L_00441708;
    case 234u: goto L_00441720;
    case 235u: goto L_0044172C;
    case 236u: goto L_00441748;
    case 237u: goto L_00441760;
    case 238u: goto L_00441778;
    case 239u: goto L_00441790;
    case 240u: goto L_0044179C;
    case 241u: goto L_004417A8;
    case 242u: goto L_004417B8;
    case 243u: goto L_004417E8;
    case 244u: goto L_00441804;
    case 245u: goto L_00441820;
    case 246u: goto L_00441824;
    case 247u: goto L_00441838;
    case 248u: goto L_00441844;
    case 249u: goto L_00441860;
    case 250u: goto L_00441878;
    case 251u: goto L_00441890;
    case 252u: goto L_004418A8;
    case 253u: goto L_004418B4;
    case 254u: goto L_004418C0;
    case 255u: goto L_004418D0;
    case 256u: goto L_00441900;
    case 257u: goto L_00441938;
    case 258u: goto L_00441950;
    case 259u: goto L_0044195C;
    case 260u: goto L_00441978;
    case 261u: goto L_00441990;
    case 262u: goto L_004419A8;
    case 263u: goto L_004419C0;
    case 264u: goto L_004419CC;
    case 265u: goto L_004419D8;
    case 266u: goto L_004419E8;
    case 267u: goto L_00441A18;
    case 268u: goto L_00441A50;
    case 269u: goto L_00441A68;
    case 270u: goto L_00441A74;
    case 271u: goto L_00441A90;
    case 272u: goto L_00441AA8;
    case 273u: goto L_00441AC0;
    case 274u: goto L_00441AD8;
    case 275u: goto L_00441AE4;
    case 276u: goto L_00441AF0;
    case 277u: goto L_00441B00;
    case 278u: goto L_00441B30;
    case 279u: goto L_00441B68;
    case 280u: goto L_00441B80;
    case 281u: goto L_00441B8C;
    case 282u: goto L_00441BA8;
    case 283u: goto L_00441BC0;
    case 284u: goto L_00441BD8;
    case 285u: goto L_00441BF0;
    case 286u: goto L_00441BFC;
    case 287u: goto L_00441C08;
    case 288u: goto L_00441C18;
    case 289u: goto L_00441C48;
    case 290u: goto L_00441C80;
    case 291u: goto L_00441C98;
    case 292u: goto L_00441CA4;
    case 293u: goto L_00441CC0;
    case 294u: goto L_00441CD8;
    case 295u: goto L_00441CF0;
    case 296u: goto L_00441D08;
    case 297u: goto L_00441D14;
    case 298u: goto L_00441D20;
    case 299u: goto L_00441D30;
    case 300u: goto L_00441D5C;
    case 301u: goto L_00441D9C;
    case 302u: goto L_00441DB4;
    case 303u: goto L_00441DC0;
    case 304u: goto L_00441DDC;
    case 305u: goto L_00441DF4;
    case 306u: goto L_00441E0C;
    case 307u: goto L_00441E24;
    case 308u: goto L_00441E30;
    case 309u: goto L_00441E3C;
    case 310u: goto L_00441E4C;
    case 311u: goto L_00441E7C;
    case 312u: goto L_00441EB4;
    case 313u: goto L_00441ECC;
    case 314u: goto L_00441ED8;
    case 315u: goto L_00441EF4;
    case 316u: goto L_00441F0C;
    case 317u: goto L_00441F24;
    case 318u: goto L_00441F3C;
    case 319u: goto L_00441F48;
    case 320u: goto L_00441F54;
    case 321u: goto L_00441F64;
    case 322u: goto L_00441F94;
    case 323u: goto L_00441FCC;
    case 324u: goto L_00441FE4;
    case 325u: goto L_00441FF0;
    case 326u: goto L_0044200C;
    case 327u: goto L_00442024;
    case 328u: goto L_0044203C;
    case 329u: goto L_00442054;
    case 330u: goto L_00442060;
    case 331u: goto L_0044206C;
    case 332u: goto L_00442090;
    case 333u: goto L_004420A0;
    case 334u: goto L_004420D0;
    case 335u: goto L_004420E4;
    case 336u: goto L_00442120;
    case 337u: goto L_00442160;
    case 338u: goto L_00442190;
    case 339u: goto L_004421B0;
    case 340u: goto L_00442210;
    case 341u: goto L_00442218;
    case 342u: goto L_00442244;
    case 343u: goto L_00442268;
    case 344u: goto L_004422B0;
    case 345u: goto L_0044230C;
    case 346u: goto L_00442388;
    case 347u: goto L_004423B8;
    case 348u: goto L_00442414;
    case 349u: goto L_00442448;
    case 350u: goto L_00442470;
    case 351u: goto L_004424B8;
    case 352u: goto L_004424FC;
    case 353u: goto L_004425A4;
    case 354u: goto L_004425D0;
    case 355u: goto L_00442618;
    case 356u: goto L_00442640;
    case 357u: goto L_004426E8;
    case 358u: goto L_00442700;
    case 359u: goto L_0044273C;
    case 360u: goto L_00442754;
    case 361u: goto L_00442770;
    case 362u: goto L_004427C4;
    case 363u: goto L_004427D8;
    case 364u: goto L_004427F0;
    case 365u: goto L_00442810;
    case 366u: goto L_00442840;
    case 367u: goto L_0044285C;
    case 368u: goto L_0044286C;
    case 369u: goto L_00442888;
    case 370u: goto L_00442898;
    case 371u: goto L_004428AC;
    case 372u: goto L_004428BC;
    case 373u: goto L_004428C8;
    case 374u: goto L_004428D8;
    case 375u: goto L_004428E0;
    case 376u: goto L_004428EC;
    case 377u: goto L_00442914;
    case 378u: goto L_00442924;
    case 379u: goto L_00442940;
    case 380u: goto L_00442950;
    case 381u: goto L_00442964;
    case 382u: goto L_00442974;
    case 383u: goto L_00442980;
    case 384u: goto L_00442990;
    case 385u: goto L_00442998;
    case 386u: goto L_004429A4;
    case 387u: goto L_004429D0;
    case 388u: goto L_00442A30;
    case 389u: goto L_00442A58;
    case 390u: goto L_00442A80;
    case 391u: goto L_00442A90;
    case 392u: goto L_00442AA0;
    case 393u: goto L_00442AB0;
    case 394u: goto L_00442AC0;
    case 395u: goto L_00442AD0;
    case 396u: goto L_00442B28;
    case 397u: goto L_00442B40;
    case 398u: goto L_00442B60;
    case 399u: goto L_00442BA0;
    case 400u: goto L_00442BB0;
    case 401u: goto L_00442BE8;
    case 402u: goto L_00442BF8;
    case 403u: goto L_00442C0C;
    case 404u: goto L_00442C20;
    case 405u: goto L_00442C34;
    case 406u: goto L_00442C48;
    case 407u: goto L_00442C54;
    case 408u: goto L_00442C64;
    case 409u: goto L_00442C7C;
    case 410u: goto L_00442CA0;
    case 411u: goto L_00442CB0;
    case 412u: goto L_00442CCC;
    case 413u: goto L_00442CE4;
    case 414u: goto L_00442CF0;
    case 415u: goto L_00442D04;
    case 416u: goto L_00442D3C;
    case 417u: goto L_00442D60;
    case 418u: goto L_00442D6C;
    case 419u: goto L_00442D90;
    case 420u: goto L_00442E70;
    case 421u: goto L_00442EB0;
    case 422u: goto L_00442EB8;
    case 423u: goto L_00442EC0;
    case 424u: goto L_00442ECC;
    case 425u: goto L_00442EDC;
    case 426u: goto L_00442EE8;
    case 427u: goto L_00442EF0;
    case 428u: goto L_00442EF8;
    case 429u: goto L_00442F04;
    case 430u: goto L_00442F14;
    case 431u: goto L_00442F20;
    case 432u: goto L_00442F28;
    case 433u: goto L_00442F68;
    case 434u: goto L_00442F7C;
    case 435u: goto L_00442F90;
    case 436u: goto L_00442FA4;
    case 437u: goto L_00442FB8;
    case 438u: goto L_00442FCC;
    case 439u: goto L_00442FE0;
    case 440u: goto L_00442FF4;
    case 441u: goto L_00443000;
    case 442u: goto L_00443004;
    case 443u: goto L_00443008;
    case 444u: goto L_0044301C;
    case 445u: goto L_00443028;
    case 446u: goto L_00443034;
    case 447u: goto L_0044303C;
    case 448u: goto L_00443060;
    case 449u: goto L_0044306C;
    case 450u: goto L_00443074;
    case 451u: goto L_00443090;
    case 452u: goto L_004430B0;
    case 453u: goto L_004430BC;
    case 454u: goto L_004430C4;
    case 455u: goto L_004430D4;
    case 456u: goto L_004430E8;
    case 457u: goto L_00443120;
    case 458u: goto L_0044313C;
    case 459u: goto L_00443148;
    case 460u: goto L_00443150;
    case 461u: goto L_00443164;
    case 462u: goto L_00443190;
    case 463u: goto L_004431C0;
    case 464u: goto L_004431D0;
    case 465u: goto L_004431F0;
    case 466u: goto L_0044323C;
    case 467u: goto L_00443260;
    case 468u: goto L_00443280;
    case 469u: goto L_004432B0;
    case 470u: goto L_004432C8;
    case 471u: goto L_004432E0;
    case 472u: goto L_00443308;
    case 473u: goto L_00443340;
    case 474u: goto L_00443364;
    case 475u: goto L_00443380;
    case 476u: goto L_004433A4;
    case 477u: goto L_004433BC;
    case 478u: goto L_004433E0;
    case 479u: goto L_004433F0;
    case 480u: goto L_00443414;
    case 481u: goto L_00443420;
    case 482u: goto L_00443430;
    case 483u: goto L_00443440;
    case 484u: goto L_004434D0;
    case 485u: goto L_004434FC;
    case 486u: goto L_00443520;
    case 487u: goto L_00443540;
    case 488u: goto L_00443574;
    case 489u: goto L_004435C0;
    case 490u: goto L_0044362C;
    case 491u: goto L_00443660;
    case 492u: goto L_004436CC;
    case 493u: goto L_00443724;
    case 494u: goto L_0044375C;
    case 495u: goto L_004437BC;
    case 496u: goto L_004437FC;
    case 497u: goto L_00443844;
    case 498u: goto L_00443890;
    case 499u: goto L_004438C8;
    case 500u: goto L_004438E0;
    case 501u: goto L_004438F4;
    case 502u: goto L_00443930;
    case 503u: goto L_00443944;
    case 504u: goto L_00443990;
    case 505u: goto L_004439D0;
    case 506u: goto L_004439F8;
    case 507u: goto L_00443AB0;
    case 508u: goto L_00443AD0;
    case 509u: goto L_00443AE8;
    case 510u: goto L_00443B18;
    case 511u: goto L_00443B50;
    case 512u: goto L_00443B88;
    case 513u: goto L_00443BA0;
    case 514u: goto L_00443BC8;
    case 515u: goto L_00443BF8;
    case 516u: goto L_00443C5C;
    case 517u: goto L_00443C68;
    case 518u: goto L_00443C80;
    case 519u: goto L_00443CA0;
    case 520u: goto L_00443CD4;
    case 521u: goto L_00443CE0;
    case 522u: goto L_00443CF4;
    case 523u: goto L_00443D08;
    case 524u: goto L_00443D30;
    case 525u: goto L_00443D68;
    case 526u: goto L_00443D80;
    case 527u: goto L_00443DA8;
    case 528u: goto L_00443DB4;
    case 529u: goto L_00443DBC;
    case 530u: goto L_00443DE0;
    case 531u: goto L_00443E00;
    case 532u: goto L_00443E34;
    case 533u: goto L_00443E44;
    case 534u: goto L_00443E60;
    case 535u: goto L_00443EE4;
    case 536u: goto L_00443F10;
    case 537u: goto L_00443F28;
    case 538u: goto L_00443F40;
    case 539u: goto L_00443F7C;
    case 540u: goto L_00443F98;
    case 541u: goto L_00443FE0;
    case 542u: goto L_00443FE8;
    case 543u: goto L_00443FF0;
    case 544u: goto L_00443FF8;
    default: bad_entry(c, 0x00440000u); return;
    }
L_00440000:
    set32(c.r[16], c.r[18].w[0] + 476u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0044003C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440014u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x00440014u) [[unlikely]] return; }
L_00440014:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_0044002C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440028u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x00440028u) [[unlikely]] return; }
L_00440028:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0044002C:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_00440040; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044003Cu);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x0044003Cu) [[unlikely]] return; }
L_0044003C:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00440040:
    set32(c.r[4], c.r[18].w[0] + 492u);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440054u); st32((c.r[16].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x00440054u) [[unlikely]] return; }
L_00440054:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044005Cu); set32(c.r[4], c.r[18].w[0] + 508u);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x0044005Cu) [[unlikely]] return; }
L_0044005C:
    set32(c.r[4], c.r[18].w[0] + 72u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044006Cu); st32((c.r[18].w[0] + 24u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0004(c, 170u, depth + 1u); else { c.pc = 0x00112340u; return; } if (c.pc != 0x0044006Cu) [[unlikely]] return; }
L_0044006C:
    set32(c.r[4], c.r[18].w[0] + 476u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440078u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_00D0(c, 354u, depth + 1u); else { c.pc = 0x004425D0u; return; } if (c.pc != 0x00440078u) [[unlikely]] return; }
L_00440078:
    st32((c.r[18].w[0] + 32u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].d[0] = ld8((c.r[18].w[0] + 12u));
    set32(c.r[2], 0u - 2u);
    c.r[3].d[0] = 0ull & 1ull;
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[5].w[0] + 24507u);
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004400A4u); st8((c.r[18].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x004400A4u) [[unlikely]] return; }
L_004400A4:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], c.r[29].w[0] + 65u);  goto L_004400B8; }
    set32(c.r[5], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 1;
L_004400B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004400C0u); set32(c.r[4], c.r[18].w[0] + 100u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004400C0u) [[unlikely]] return; }
L_004400C0:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004400CCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x004400CCu) [[unlikely]] return; }
L_004400CC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[18].w[0] + 40u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004400DCu); set32(c.r[5], c.r[5].w[0] + 24515u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004400DCu) [[unlikely]] return; }
L_004400DC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[18].w[0] + 56u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004400ECu); set32(c.r[5], c.r[5].w[0] + 24533u);  if (depth < kMaxDepth) unit_0001(c, 129u, depth + 1u); else { c.pc = 0x00105240u; return; } if (c.pc != 0x004400ECu) [[unlikely]] return; }
L_004400EC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004400F8u); set32(c.r[4], 0u + 44u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004400F8u) [[unlikely]] return; }
L_004400F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00440108; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440108u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0011(c, 115u, depth + 1u); else { c.pc = 0x00144B80u; return; } if (c.pc != 0x00440108u) [[unlikely]] return; }
L_00440108:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st32((c.r[18].w[0] + 36u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 24554u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440124u); set32(c.r[6], c.r[6].w[0] - 5584u);  if (depth < kMaxDepth) unit_0011(c, 100u, depth + 1u); else { c.pc = 0x001449A0u; return; } if (c.pc != 0x00440124u) [[unlikely]] return; }
L_00440124:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044012Cu); set32(c.r[4], ld32((c.r[18].w[0] + 36u)));  if (depth < kMaxDepth) unit_0011(c, 85u, depth + 1u); else { c.pc = 0x001447C0u; return; } if (c.pc != 0x0044012Cu) [[unlikely]] return; }
L_0044012C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044013Cu); set32(c.r[5], c.r[5].w[0] + 24575u);  if (depth < kMaxDepth) unit_000F(c, 247u, depth + 1u); else { c.pc = 0x0013E7C0u; return; } if (c.pc != 0x0044013Cu) [[unlikely]] return; }
L_0044013C:
    set32(c.r[4], ld32((c.r[28].w[0] - 29004u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044014Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0010(c, 445u, depth + 1u); else { c.pc = 0x00143520u; return; } if (c.pc != 0x0044014Cu) [[unlikely]] return; }
L_0044014C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440158u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00440158u) [[unlikely]] return; }
L_00440158:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00440180:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_004401BC; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 28480u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_004401B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004401B8u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004401B8u) [[unlikely]] return; }
L_004401B8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004401BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004401D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0044020C; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 28464u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_00440208; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440208u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00440208u) [[unlikely]] return; }
L_00440208:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0044020C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00440220:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_0044025C; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 28448u);
    c.budget -= 3;
L_00440244:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_00440258; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440258u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00440258u) [[unlikely]] return; }
L_00440258:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0044025C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00440270:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 24928u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { st32((c.r[28].w[0] - 24928u), 0u);  goto L_00440298; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00440294u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00440294u) [[unlikely]] return; }
L_00440294:
    st32((c.r[28].w[0] - 24928u), 0u);
    c.budget -= 1;
L_00440298:
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_004402B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 524u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004402CCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004402CCu) [[unlikely]] return; }
L_004402CC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[28].w[0] - 24928u), c.r[2].w[0]);  goto L_004402E4; }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004402E0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 482u, depth + 1u); else { c.pc = 0x0043FE80u; return; } if (c.pc != 0x004402E0u) [[unlikely]] return; }
L_004402E0:
    st32((c.r[28].w[0] - 24928u), c.r[2].w[0]);
    c.budget -= 1;
L_004402E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00440300:
    set32(c.r[29], c.r[29].w[0] - 848u);
    set32(c.r[5], 0u - 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[29].w[0] + 816u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440328u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x00440328u) [[unlikely]] return; }
L_00440328:
    st16((c.r[29].w[0] + 840u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 24578u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 816u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 820u);
    st32((c.r[29].w[0] + 836u), c.r[2].w[0]);
    set32(c.r[2], 0u + 512u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440354u); st16((c.r[29].w[0] + 842u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00440354u) [[unlikely]] return; }
L_00440354:
    set32(c.r[3], ld32((c.r[29].w[0] + 836u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[29].w[0] + 820u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[17], 0u + 16u);  if (t) { goto L_00440388; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[17], ld32((c.r[18].w[0] + 4u)));  goto L_00440388; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440380u); set32(c.r[4], ld32((c.r[18].w[0] + 20u)));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00440380u) [[unlikely]] return; }
L_00440380:
    set32(c.r[2], c.r[18].w[0] + 4u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_00440388:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 20u)));  goto L_004403CC; }
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], c.r[18].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 24u)));  goto L_004403B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004403B0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004403B0u) [[unlikely]] return; }
L_004403B0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 24u)));
    c.budget -= 1;
L_004403B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004403BCu); set32(c.r[4], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004403BCu) [[unlikely]] return; }
L_004403BC:
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 1u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 4;
L_004403CC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004403D8u); set32(c.r[5], c.r[5].w[0] + 24578u);  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x004403D8u) [[unlikely]] return; }
L_004403D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00440400u); set32(c.r[5], c.r[5].w[0] + 24587u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00440400u) [[unlikely]] return; }
L_00440400:
    set32(c.r[4], c.r[29].w[0] + 816u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24928u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00440418u); set32(c.r[16], c.r[2].w[0] + 116u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00440418u) [[unlikely]] return; }
L_00440418:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440424u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00440424u) [[unlikely]] return; }
L_00440424:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 816u);  goto L_00440460; }
    set32(c.r[4], c.r[29].w[0] + 816u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00440440u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00440440u) [[unlikely]] return; }
L_00440440:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440458u); set32(c.r[6], c.r[6].w[0] + 24131u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00440458u) [[unlikely]] return; }
L_00440458:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 816u);  if (t) { goto L_00440498; } }
L_00440460:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00440470u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00440470u) [[unlikely]] return; }
L_00440470:
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440488u); set32(c.r[6], c.r[6].w[0] + 24237u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00440488u) [[unlikely]] return; }
L_00440488:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440494u); set32(c.r[5], c.r[29].w[0] + 816u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x00440494u) [[unlikely]] return; }
L_00440494:
    set32(c.r[4], c.r[29].w[0] + 816u);
    c.budget -= 1;
L_00440498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004404A0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004404A0u) [[unlikely]] return; }
L_004404A0:
    set32(c.r[16], c.r[29].w[0] + 784u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004404B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x004404B0u) [[unlikely]] return; }
L_004404B0:
    st16((c.r[29].w[0] + 808u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[29].w[0] + 788u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[29].w[0] + 804u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 784u), c.r[2].w[0]);
    c.f[20] = ld32((c.r[28].w[0] - 30072u));
    set32(c.r[2], 0u + 8u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[3].d[0]; st16((c.r[29].w[0] + 810u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_004404E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004404E0u); set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004404E0u) [[unlikely]] return; }
L_004404E0:
    set32(c.r[2], c.r[16].w[0] + 4u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_004404E8:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[3].w[0]), c.f[20]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00440518u); set32(c.r[5], c.r[5].w[0] + 24447u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00440518u) [[unlikely]] return; }
L_00440518:
    set32(c.r[4], c.r[29].w[0] + 784u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24928u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00440530u); set32(c.r[16], c.r[2].w[0] + 116u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00440530u) [[unlikely]] return; }
L_00440530:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044053Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0044053Cu) [[unlikely]] return; }
L_0044053C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 784u);  goto L_00440578; }
    set32(c.r[4], c.r[29].w[0] + 784u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00440558u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00440558u) [[unlikely]] return; }
L_00440558:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440570u); set32(c.r[6], c.r[6].w[0] + 24131u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00440570u) [[unlikely]] return; }
L_00440570:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 784u);  if (t) { goto L_004405B0; } }
L_00440578:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00440588u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00440588u) [[unlikely]] return; }
L_00440588:
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004405A0u); set32(c.r[6], c.r[6].w[0] + 24237u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x004405A0u) [[unlikely]] return; }
L_004405A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004405ACu); set32(c.r[5], c.r[29].w[0] + 784u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x004405ACu) [[unlikely]] return; }
L_004405AC:
    set32(c.r[4], c.r[29].w[0] + 784u);
    c.budget -= 1;
L_004405B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004405B8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004405B8u) [[unlikely]] return; }
L_004405B8:
    set32(c.r[16], c.r[29].w[0] + 752u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004405C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x004405C8u) [[unlikely]] return; }
L_004405C8:
    st16((c.r[29].w[0] + 776u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[29].w[0] + 756u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[29].w[0] + 772u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 752u), c.r[2].w[0]);
    c.f[20] = ld32((c.r[28].w[0] - 30068u));
    set32(c.r[2], 0u + 8u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[3].d[0]; st16((c.r[29].w[0] + 778u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00440600; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004405F8u); set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004405F8u) [[unlikely]] return; }
L_004405F8:
    set32(c.r[2], c.r[16].w[0] + 4u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_00440600:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[3].w[0]), c.f[20]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00440630u); set32(c.r[5], c.r[5].w[0] + 24460u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00440630u) [[unlikely]] return; }
L_00440630:
    set32(c.r[4], c.r[29].w[0] + 752u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24928u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00440648u); set32(c.r[16], c.r[2].w[0] + 116u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00440648u) [[unlikely]] return; }
L_00440648:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440654u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00440654u) [[unlikely]] return; }
L_00440654:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 752u);  goto L_00440690; }
    set32(c.r[4], c.r[29].w[0] + 752u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00440670u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00440670u) [[unlikely]] return; }
L_00440670:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440688u); set32(c.r[6], c.r[6].w[0] + 24131u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00440688u) [[unlikely]] return; }
L_00440688:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 752u);  if (t) { goto L_004406C8; } }
L_00440690:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004406A0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004406A0u) [[unlikely]] return; }
L_004406A0:
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004406B8u); set32(c.r[6], c.r[6].w[0] + 24237u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x004406B8u) [[unlikely]] return; }
L_004406B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004406C4u); set32(c.r[5], c.r[29].w[0] + 752u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x004406C4u) [[unlikely]] return; }
L_004406C4:
    set32(c.r[4], c.r[29].w[0] + 752u);
    c.budget -= 1;
L_004406C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004406D0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004406D0u) [[unlikely]] return; }
L_004406D0:
    set32(c.r[16], c.r[29].w[0] + 720u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004406E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x004406E0u) [[unlikely]] return; }
L_004406E0:
    st16((c.r[29].w[0] + 744u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[29].w[0] + 724u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[29].w[0] + 740u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 720u), c.r[2].w[0]);
    c.f[20] = ld32((c.r[28].w[0] - 30064u));
    set32(c.r[2], 0u + 8u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[3].d[0]; st16((c.r[29].w[0] + 746u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00440718; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440710u); set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00440710u) [[unlikely]] return; }
L_00440710:
    set32(c.r[2], c.r[16].w[0] + 4u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_00440718:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[3].w[0]), c.f[20]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00440748u); set32(c.r[5], c.r[5].w[0] + 24433u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00440748u) [[unlikely]] return; }
L_00440748:
    set32(c.r[4], c.r[29].w[0] + 720u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24928u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00440760u); set32(c.r[16], c.r[2].w[0] + 116u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00440760u) [[unlikely]] return; }
L_00440760:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044076Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0044076Cu) [[unlikely]] return; }
L_0044076C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 720u);  goto L_004407A8; }
    set32(c.r[4], c.r[29].w[0] + 720u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00440788u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00440788u) [[unlikely]] return; }
L_00440788:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004407A0u); set32(c.r[6], c.r[6].w[0] + 24131u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x004407A0u) [[unlikely]] return; }
L_004407A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 720u);  if (t) { goto L_004407E0; } }
L_004407A8:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004407B8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004407B8u) [[unlikely]] return; }
L_004407B8:
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004407D0u); set32(c.r[6], c.r[6].w[0] + 24237u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x004407D0u) [[unlikely]] return; }
L_004407D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004407DCu); set32(c.r[5], c.r[29].w[0] + 720u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x004407DCu) [[unlikely]] return; }
L_004407DC:
    set32(c.r[4], c.r[29].w[0] + 720u);
    c.budget -= 1;
L_004407E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004407E8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004407E8u) [[unlikely]] return; }
L_004407E8:
    set32(c.r[16], c.r[29].w[0] + 688u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004407F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x004407F8u) [[unlikely]] return; }
L_004407F8:
    st16((c.r[29].w[0] + 712u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[29].w[0] + 692u);
    c.budget -= 2;
L_00440800:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[17].d[0] = ld8((c.r[28].w[0] - 30060u));
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 708u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 688u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[3].d[0]; st16((c.r[29].w[0] + 714u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00440830; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440828u); set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00440828u) [[unlikely]] return; }
L_00440828:
    set32(c.r[2], c.r[16].w[0] + 4u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_00440830:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00440860u); set32(c.r[5], c.r[5].w[0] + 24599u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00440860u) [[unlikely]] return; }
L_00440860:
    set32(c.r[4], c.r[29].w[0] + 688u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24928u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00440878u); set32(c.r[16], c.r[2].w[0] + 116u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00440878u) [[unlikely]] return; }
L_00440878:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440884u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00440884u) [[unlikely]] return; }
L_00440884:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 688u);  goto L_004408C0; }
    set32(c.r[4], c.r[29].w[0] + 688u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004408A0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004408A0u) [[unlikely]] return; }
L_004408A0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004408B8u); set32(c.r[6], c.r[6].w[0] + 24131u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x004408B8u) [[unlikely]] return; }
L_004408B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 688u);  if (t) { goto L_004408F8; } }
L_004408C0:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004408D0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004408D0u) [[unlikely]] return; }
L_004408D0:
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004408E8u); set32(c.r[6], c.r[6].w[0] + 24237u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x004408E8u) [[unlikely]] return; }
L_004408E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004408F4u); set32(c.r[5], c.r[29].w[0] + 688u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x004408F4u) [[unlikely]] return; }
L_004408F4:
    set32(c.r[4], c.r[29].w[0] + 688u);
    c.budget -= 1;
L_004408F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440900u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x00440900u) [[unlikely]] return; }
L_00440900:
    set32(c.r[18], c.r[29].w[0] + 656u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440910u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x00440910u) [[unlikely]] return; }
L_00440910:
    st16((c.r[29].w[0] + 680u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 24623u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 656u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 660u);
    st32((c.r[29].w[0] + 676u), c.r[2].w[0]);
    set32(c.r[2], 0u + 512u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044093Cu); st16((c.r[29].w[0] + 682u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0044093Cu) [[unlikely]] return; }
L_0044093C:
    set32(c.r[3], ld32((c.r[29].w[0] + 676u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[29].w[0] + 660u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[17], 0u + 16u);  if (t) { goto L_00440970; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[17], ld32((c.r[18].w[0] + 4u)));  goto L_00440970; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440968u); set32(c.r[4], ld32((c.r[18].w[0] + 20u)));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00440968u) [[unlikely]] return; }
L_00440968:
    set32(c.r[2], c.r[18].w[0] + 4u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_00440970:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 20u)));  goto L_004409B4; }
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], c.r[18].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 24u)));  goto L_0044099C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440998u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00440998u) [[unlikely]] return; }
L_00440998:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 24u)));
    c.budget -= 1;
L_0044099C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004409A4u); set32(c.r[4], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004409A4u) [[unlikely]] return; }
L_004409A4:
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 1u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 4;
L_004409B4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004409C0u); set32(c.r[5], c.r[5].w[0] + 24623u);  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x004409C0u) [[unlikely]] return; }
L_004409C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004409E8u); set32(c.r[5], c.r[5].w[0] + 24632u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004409E8u) [[unlikely]] return; }
L_004409E8:
    set32(c.r[4], c.r[29].w[0] + 656u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24928u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00440A00u); set32(c.r[16], c.r[2].w[0] + 116u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00440A00u) [[unlikely]] return; }
L_00440A00:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440A0Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00440A0Cu) [[unlikely]] return; }
L_00440A0C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 656u);  goto L_00440A48; }
    set32(c.r[4], c.r[29].w[0] + 656u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00440A28u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00440A28u) [[unlikely]] return; }
L_00440A28:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440A40u); set32(c.r[6], c.r[6].w[0] + 24131u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00440A40u) [[unlikely]] return; }
L_00440A40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 656u);  if (t) { goto L_00440A80; } }
L_00440A48:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00440A58u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00440A58u) [[unlikely]] return; }
L_00440A58:
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440A70u); set32(c.r[6], c.r[6].w[0] + 24237u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00440A70u) [[unlikely]] return; }
L_00440A70:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440A7Cu); set32(c.r[5], c.r[29].w[0] + 656u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x00440A7Cu) [[unlikely]] return; }
L_00440A7C:
    set32(c.r[4], c.r[29].w[0] + 656u);
    c.budget -= 1;
L_00440A80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440A88u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x00440A88u) [[unlikely]] return; }
L_00440A88:
    set32(c.r[18], c.r[29].w[0] + 624u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440A98u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x00440A98u) [[unlikely]] return; }
L_00440A98:
    st16((c.r[29].w[0] + 648u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 24623u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 624u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 628u);
    st32((c.r[29].w[0] + 644u), c.r[2].w[0]);
    set32(c.r[2], 0u + 512u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440AC4u); st16((c.r[29].w[0] + 650u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00440AC4u) [[unlikely]] return; }
L_00440AC4:
    set32(c.r[3], ld32((c.r[29].w[0] + 644u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[29].w[0] + 628u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[17], 0u + 16u);  if (t) { goto L_00440AF8; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[17], ld32((c.r[18].w[0] + 4u)));  goto L_00440AF8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440AF0u); set32(c.r[4], ld32((c.r[18].w[0] + 20u)));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00440AF0u) [[unlikely]] return; }
L_00440AF0:
    set32(c.r[2], c.r[18].w[0] + 4u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_00440AF8:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 20u)));  goto L_00440B3C; }
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], c.r[18].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 24u)));  goto L_00440B24; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440B20u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00440B20u) [[unlikely]] return; }
L_00440B20:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 24u)));
    c.budget -= 1;
L_00440B24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440B2Cu); set32(c.r[4], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x00440B2Cu) [[unlikely]] return; }
L_00440B2C:
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 1u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 4;
L_00440B3C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440B48u); set32(c.r[5], c.r[5].w[0] + 24623u);  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x00440B48u) [[unlikely]] return; }
L_00440B48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00440B70u); set32(c.r[5], c.r[5].w[0] + 24646u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00440B70u) [[unlikely]] return; }
L_00440B70:
    set32(c.r[4], c.r[29].w[0] + 624u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24928u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00440B88u); set32(c.r[16], c.r[2].w[0] + 116u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00440B88u) [[unlikely]] return; }
L_00440B88:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440B94u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00440B94u) [[unlikely]] return; }
L_00440B94:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 624u);  goto L_00440BD0; }
    set32(c.r[4], c.r[29].w[0] + 624u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00440BB0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00440BB0u) [[unlikely]] return; }
L_00440BB0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440BC8u); set32(c.r[6], c.r[6].w[0] + 24131u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00440BC8u) [[unlikely]] return; }
L_00440BC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 624u);  if (t) { goto L_00440C08; } }
L_00440BD0:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00440BE0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00440BE0u) [[unlikely]] return; }
L_00440BE0:
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440BF8u); set32(c.r[6], c.r[6].w[0] + 24237u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00440BF8u) [[unlikely]] return; }
L_00440BF8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440C04u); set32(c.r[5], c.r[29].w[0] + 624u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x00440C04u) [[unlikely]] return; }
L_00440C04:
    set32(c.r[4], c.r[29].w[0] + 624u);
    c.budget -= 1;
L_00440C08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440C10u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x00440C10u) [[unlikely]] return; }
L_00440C10:
    set32(c.r[16], c.r[29].w[0] + 592u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440C20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x00440C20u) [[unlikely]] return; }
L_00440C20:
    st16((c.r[29].w[0] + 616u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[29].w[0] + 596u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[17].d[0] = ld8((c.r[28].w[0] - 30056u));
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 612u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 592u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[3].d[0]; st16((c.r[29].w[0] + 618u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00440C58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440C50u); set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00440C50u) [[unlikely]] return; }
L_00440C50:
    set32(c.r[2], c.r[16].w[0] + 4u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_00440C58:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00440C88u); set32(c.r[5], c.r[5].w[0] + 24660u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00440C88u) [[unlikely]] return; }
L_00440C88:
    set32(c.r[4], c.r[29].w[0] + 592u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24928u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00440CA0u); set32(c.r[16], c.r[2].w[0] + 116u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00440CA0u) [[unlikely]] return; }
L_00440CA0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440CACu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00440CACu) [[unlikely]] return; }
L_00440CAC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 592u);  goto L_00440CE8; }
    set32(c.r[4], c.r[29].w[0] + 592u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00440CC8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00440CC8u) [[unlikely]] return; }
L_00440CC8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440CE0u); set32(c.r[6], c.r[6].w[0] + 24131u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00440CE0u) [[unlikely]] return; }
L_00440CE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 592u);  if (t) { goto L_00440D20; } }
L_00440CE8:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00440CF8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00440CF8u) [[unlikely]] return; }
L_00440CF8:
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440D10u); set32(c.r[6], c.r[6].w[0] + 24237u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00440D10u) [[unlikely]] return; }
L_00440D10:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440D1Cu); set32(c.r[5], c.r[29].w[0] + 592u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x00440D1Cu) [[unlikely]] return; }
L_00440D1C:
    set32(c.r[4], c.r[29].w[0] + 592u);
    c.budget -= 1;
L_00440D20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440D28u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x00440D28u) [[unlikely]] return; }
L_00440D28:
    set32(c.r[18], c.r[29].w[0] + 560u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440D38u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x00440D38u) [[unlikely]] return; }
L_00440D38:
    st16((c.r[29].w[0] + 584u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 24672u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 560u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 564u);
    st32((c.r[29].w[0] + 580u), c.r[2].w[0]);
    set32(c.r[2], 0u + 512u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440D64u); st16((c.r[29].w[0] + 586u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00440D64u) [[unlikely]] return; }
L_00440D64:
    set32(c.r[3], ld32((c.r[29].w[0] + 580u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[29].w[0] + 564u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[17], 0u + 16u);  if (t) { goto L_00440D98; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[17], ld32((c.r[18].w[0] + 4u)));  goto L_00440D98; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440D90u); set32(c.r[4], ld32((c.r[18].w[0] + 20u)));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00440D90u) [[unlikely]] return; }
L_00440D90:
    set32(c.r[2], c.r[18].w[0] + 4u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_00440D98:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 20u)));  goto L_00440DDC; }
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], c.r[18].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 24u)));  goto L_00440DC4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440DC0u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00440DC0u) [[unlikely]] return; }
L_00440DC0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 24u)));
    c.budget -= 1;
L_00440DC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440DCCu); set32(c.r[4], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x00440DCCu) [[unlikely]] return; }
L_00440DCC:
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 1u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 4;
L_00440DDC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440DE8u); set32(c.r[5], c.r[5].w[0] + 24672u);  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x00440DE8u) [[unlikely]] return; }
L_00440DE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00440E10u); set32(c.r[5], c.r[5].w[0] + 24679u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00440E10u) [[unlikely]] return; }
L_00440E10:
    set32(c.r[4], c.r[29].w[0] + 560u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24928u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00440E28u); set32(c.r[16], c.r[2].w[0] + 116u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00440E28u) [[unlikely]] return; }
L_00440E28:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440E34u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00440E34u) [[unlikely]] return; }
L_00440E34:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 560u);  goto L_00440E70; }
    set32(c.r[4], c.r[29].w[0] + 560u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00440E50u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00440E50u) [[unlikely]] return; }
L_00440E50:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440E68u); set32(c.r[6], c.r[6].w[0] + 24131u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00440E68u) [[unlikely]] return; }
L_00440E68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 560u);  if (t) { goto L_00440EA8; } }
L_00440E70:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00440E80u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00440E80u) [[unlikely]] return; }
L_00440E80:
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440E98u); set32(c.r[6], c.r[6].w[0] + 24237u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00440E98u) [[unlikely]] return; }
L_00440E98:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440EA4u); set32(c.r[5], c.r[29].w[0] + 560u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x00440EA4u) [[unlikely]] return; }
L_00440EA4:
    set32(c.r[4], c.r[29].w[0] + 560u);
    c.budget -= 1;
L_00440EA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440EB0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x00440EB0u) [[unlikely]] return; }
L_00440EB0:
    set32(c.r[18], c.r[29].w[0] + 528u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440EC0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x00440EC0u) [[unlikely]] return; }
L_00440EC0:
    st16((c.r[29].w[0] + 552u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 24672u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 528u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 532u);
    st32((c.r[29].w[0] + 548u), c.r[2].w[0]);
    set32(c.r[2], 0u + 512u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440EECu); st16((c.r[29].w[0] + 554u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x00440EECu) [[unlikely]] return; }
L_00440EEC:
    set32(c.r[3], ld32((c.r[29].w[0] + 548u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[29].w[0] + 532u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[17], 0u + 16u);  if (t) { goto L_00440F20; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[17], ld32((c.r[18].w[0] + 4u)));  goto L_00440F20; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440F18u); set32(c.r[4], ld32((c.r[18].w[0] + 20u)));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00440F18u) [[unlikely]] return; }
L_00440F18:
    set32(c.r[2], c.r[18].w[0] + 4u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_00440F20:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 20u)));  goto L_00440F64; }
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], c.r[18].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 24u)));  goto L_00440F4C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440F48u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00440F48u) [[unlikely]] return; }
L_00440F48:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 24u)));
    c.budget -= 1;
L_00440F4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440F54u); set32(c.r[4], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x00440F54u) [[unlikely]] return; }
L_00440F54:
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 1u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 4;
L_00440F64:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440F70u); set32(c.r[5], c.r[5].w[0] + 24672u);  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x00440F70u) [[unlikely]] return; }
L_00440F70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00440F98u); set32(c.r[5], c.r[5].w[0] + 24694u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00440F98u) [[unlikely]] return; }
L_00440F98:
    set32(c.r[4], c.r[29].w[0] + 528u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24928u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00440FB0u); set32(c.r[16], c.r[2].w[0] + 116u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00440FB0u) [[unlikely]] return; }
L_00440FB0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440FBCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00440FBCu) [[unlikely]] return; }
L_00440FBC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 528u);  goto L_00440FF8; }
    set32(c.r[4], c.r[29].w[0] + 528u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00440FD8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00440FD8u) [[unlikely]] return; }
L_00440FD8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00440FF0u); set32(c.r[6], c.r[6].w[0] + 24131u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00440FF0u) [[unlikely]] return; }
L_00440FF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 528u);  if (t) { goto L_00441030; } }
L_00440FF8:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00441008u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00441008u) [[unlikely]] return; }
    goto L_00441008;
L_00441004:
    c.budget -= 1;
L_00441008:
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
L_00441018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441020u); set32(c.r[6], c.r[6].w[0] + 24237u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00441020u) [[unlikely]] return; }
L_00441020:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00441024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044102Cu); set32(c.r[5], c.r[29].w[0] + 528u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0044102Cu) [[unlikely]] return; }
L_0044102C:
    set32(c.r[4], c.r[29].w[0] + 528u);
    c.budget -= 1;
L_00441030:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441038u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x00441038u) [[unlikely]] return; }
L_00441038:
    set32(c.r[16], c.r[29].w[0] + 496u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441048u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x00441048u) [[unlikely]] return; }
L_00441048:
    st16((c.r[29].w[0] + 520u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[29].w[0] + 500u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[17], ld32((c.r[28].w[0] - 30052u)));
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 516u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 496u), c.r[2].w[0]);
    set32(c.r[2], 0u + 4u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[3].d[0]; st16((c.r[29].w[0] + 522u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00441080; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441078u); set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00441078u) [[unlikely]] return; }
L_00441078:
    set32(c.r[2], c.r[16].w[0] + 4u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_00441080:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[3].w[0]), c.r[17].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004410B0u); set32(c.r[5], c.r[5].w[0] + 24709u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004410B0u) [[unlikely]] return; }
L_004410B0:
    set32(c.r[4], c.r[29].w[0] + 496u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24928u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004410C8u); set32(c.r[16], c.r[2].w[0] + 116u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004410C8u) [[unlikely]] return; }
L_004410C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004410D4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004410D4u) [[unlikely]] return; }
L_004410D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 496u);  goto L_00441110; }
    set32(c.r[4], c.r[29].w[0] + 496u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004410F0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004410F0u) [[unlikely]] return; }
L_004410F0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441108u); set32(c.r[6], c.r[6].w[0] + 24131u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00441108u) [[unlikely]] return; }
L_00441108:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 496u);  if (t) { goto L_00441148; } }
L_00441110:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00441120u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00441120u) [[unlikely]] return; }
L_00441120:
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441138u); set32(c.r[6], c.r[6].w[0] + 24237u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00441138u) [[unlikely]] return; }
L_00441138:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441144u); set32(c.r[5], c.r[29].w[0] + 496u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x00441144u) [[unlikely]] return; }
L_00441144:
    set32(c.r[4], c.r[29].w[0] + 496u);
    c.budget -= 1;
L_00441148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441150u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x00441150u) [[unlikely]] return; }
L_00441150:
    set32(c.r[16], c.r[29].w[0] + 464u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441160u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x00441160u) [[unlikely]] return; }
L_00441160:
    st16((c.r[29].w[0] + 488u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[29].w[0] + 468u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[17], ld32((c.r[28].w[0] - 30048u)));
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 484u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 464u), c.r[2].w[0]);
    set32(c.r[2], 0u + 4u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[3].d[0]; st16((c.r[29].w[0] + 490u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00441198; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441190u); set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00441190u) [[unlikely]] return; }
L_00441190:
    set32(c.r[2], c.r[16].w[0] + 4u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_00441198:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[3].w[0]), c.r[17].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004411C8u); set32(c.r[5], c.r[5].w[0] + 24724u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004411C8u) [[unlikely]] return; }
L_004411C8:
    set32(c.r[4], c.r[29].w[0] + 464u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24928u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004411E0u); set32(c.r[16], c.r[2].w[0] + 116u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004411E0u) [[unlikely]] return; }
L_004411E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004411ECu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004411ECu) [[unlikely]] return; }
L_004411EC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 464u);  goto L_00441228; }
    set32(c.r[4], c.r[29].w[0] + 464u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00441208u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00441208u) [[unlikely]] return; }
L_00441208:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441220u); set32(c.r[6], c.r[6].w[0] + 24131u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00441220u) [[unlikely]] return; }
L_00441220:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 464u);  if (t) { goto L_00441260; } }
L_00441228:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00441238u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00441238u) [[unlikely]] return; }
L_00441238:
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441250u); set32(c.r[6], c.r[6].w[0] + 24237u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00441250u) [[unlikely]] return; }
L_00441250:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044125Cu); set32(c.r[5], c.r[29].w[0] + 464u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0044125Cu) [[unlikely]] return; }
L_0044125C:
    set32(c.r[4], c.r[29].w[0] + 464u);
    c.budget -= 1;
L_00441260:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441268u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x00441268u) [[unlikely]] return; }
L_00441268:
    set32(c.r[16], c.r[29].w[0] + 432u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441278u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x00441278u) [[unlikely]] return; }
L_00441278:
    st16((c.r[29].w[0] + 456u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[29].w[0] + 436u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[17].d[0] = ld8((c.r[28].w[0] - 30044u));
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 452u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 432u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[3].d[0]; st16((c.r[29].w[0] + 458u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_004412B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004412A8u); set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004412A8u) [[unlikely]] return; }
L_004412A8:
    set32(c.r[2], c.r[16].w[0] + 4u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_004412B0:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004412E0u); set32(c.r[5], c.r[5].w[0] + 24739u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004412E0u) [[unlikely]] return; }
L_004412E0:
    set32(c.r[4], c.r[29].w[0] + 432u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24928u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004412F8u); set32(c.r[16], c.r[2].w[0] + 116u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004412F8u) [[unlikely]] return; }
L_004412F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441304u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00441304u) [[unlikely]] return; }
L_00441304:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 432u);  goto L_00441340; }
    set32(c.r[4], c.r[29].w[0] + 432u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00441320u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00441320u) [[unlikely]] return; }
L_00441320:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441338u); set32(c.r[6], c.r[6].w[0] + 24131u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00441338u) [[unlikely]] return; }
L_00441338:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 432u);  if (t) { goto L_00441378; } }
L_00441340:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00441350u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00441350u) [[unlikely]] return; }
L_00441350:
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441368u); set32(c.r[6], c.r[6].w[0] + 24237u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00441368u) [[unlikely]] return; }
L_00441368:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441374u); set32(c.r[5], c.r[29].w[0] + 432u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x00441374u) [[unlikely]] return; }
L_00441374:
    set32(c.r[4], c.r[29].w[0] + 432u);
    c.budget -= 1;
L_00441378:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441380u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x00441380u) [[unlikely]] return; }
L_00441380:
    set32(c.r[16], c.r[29].w[0] + 400u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441390u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x00441390u) [[unlikely]] return; }
L_00441390:
    st16((c.r[29].w[0] + 424u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[29].w[0] + 404u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[17].d[0] = ld8((c.r[28].w[0] - 30040u));
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 420u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 400u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[3].d[0]; st16((c.r[29].w[0] + 426u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_004413C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004413C0u); set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004413C0u) [[unlikely]] return; }
L_004413C0:
    set32(c.r[2], c.r[16].w[0] + 4u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_004413C8:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004413F8u); set32(c.r[5], c.r[5].w[0] + 24757u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004413F8u) [[unlikely]] return; }
L_004413F8:
    set32(c.r[4], c.r[29].w[0] + 400u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24928u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00441410u); set32(c.r[16], c.r[2].w[0] + 116u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00441410u) [[unlikely]] return; }
L_00441410:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044141Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0044141Cu) [[unlikely]] return; }
L_0044141C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 400u);  goto L_00441458; }
    set32(c.r[4], c.r[29].w[0] + 400u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00441438u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00441438u) [[unlikely]] return; }
L_00441438:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441450u); set32(c.r[6], c.r[6].w[0] + 24131u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00441450u) [[unlikely]] return; }
L_00441450:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 400u);  if (t) { goto L_00441490; } }
L_00441458:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00441468u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00441468u) [[unlikely]] return; }
L_00441468:
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441480u); set32(c.r[6], c.r[6].w[0] + 24237u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00441480u) [[unlikely]] return; }
L_00441480:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044148Cu); set32(c.r[5], c.r[29].w[0] + 400u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0044148Cu) [[unlikely]] return; }
L_0044148C:
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.budget -= 1;
L_00441490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441498u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x00441498u) [[unlikely]] return; }
L_00441498:
    set32(c.r[18], c.r[29].w[0] + 368u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004414A8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x004414A8u) [[unlikely]] return; }
L_004414A8:
    st16((c.r[29].w[0] + 392u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 24784u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 368u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 372u);
    st32((c.r[29].w[0] + 388u), c.r[2].w[0]);
    set32(c.r[2], 0u + 512u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004414D4u); st16((c.r[29].w[0] + 394u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x004414D4u) [[unlikely]] return; }
L_004414D4:
    set32(c.r[3], ld32((c.r[29].w[0] + 388u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[29].w[0] + 372u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[17], 0u + 16u);  if (t) { goto L_00441508; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[17], ld32((c.r[18].w[0] + 4u)));  goto L_00441508; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441500u); set32(c.r[4], ld32((c.r[18].w[0] + 20u)));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00441500u) [[unlikely]] return; }
L_00441500:
    set32(c.r[2], c.r[18].w[0] + 4u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_00441508:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 20u)));  goto L_0044154C; }
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], c.r[18].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 24u)));  goto L_00441534; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441530u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00441530u) [[unlikely]] return; }
L_00441530:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 24u)));
    c.budget -= 1;
L_00441534:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044153Cu); set32(c.r[4], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x0044153Cu) [[unlikely]] return; }
L_0044153C:
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 1u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 4;
L_0044154C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441558u); set32(c.r[5], c.r[5].w[0] + 24784u);  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x00441558u) [[unlikely]] return; }
L_00441558:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00441580u); set32(c.r[5], c.r[5].w[0] + 24790u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00441580u) [[unlikely]] return; }
L_00441580:
    set32(c.r[4], c.r[29].w[0] + 368u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24928u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00441598u); set32(c.r[16], c.r[2].w[0] + 116u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00441598u) [[unlikely]] return; }
L_00441598:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004415A4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x004415A4u) [[unlikely]] return; }
L_004415A4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 368u);  goto L_004415E0; }
    set32(c.r[4], c.r[29].w[0] + 368u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004415C0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004415C0u) [[unlikely]] return; }
L_004415C0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004415D8u); set32(c.r[6], c.r[6].w[0] + 24131u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x004415D8u) [[unlikely]] return; }
L_004415D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 368u);  if (t) { goto L_00441618; } }
L_004415E0:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004415F0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004415F0u) [[unlikely]] return; }
L_004415F0:
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441608u); set32(c.r[6], c.r[6].w[0] + 24237u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00441608u) [[unlikely]] return; }
L_00441608:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441614u); set32(c.r[5], c.r[29].w[0] + 368u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x00441614u) [[unlikely]] return; }
L_00441614:
    set32(c.r[4], c.r[29].w[0] + 368u);
    c.budget -= 1;
L_00441618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441620u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x00441620u) [[unlikely]] return; }
L_00441620:
    set32(c.r[18], c.r[29].w[0] + 336u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441630u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x00441630u) [[unlikely]] return; }
L_00441630:
    st16((c.r[29].w[0] + 360u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 24784u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 336u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 340u);
    st32((c.r[29].w[0] + 356u), c.r[2].w[0]);
    set32(c.r[2], 0u + 512u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044165Cu); st16((c.r[29].w[0] + 362u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_00AE(c, 255u, depth + 1u); else { c.pc = 0x003BA300u; return; } if (c.pc != 0x0044165Cu) [[unlikely]] return; }
L_0044165C:
    set32(c.r[3], ld32((c.r[29].w[0] + 356u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[29].w[0] + 340u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[17], 0u + 16u);  if (t) { goto L_00441690; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[17], ld32((c.r[18].w[0] + 4u)));  goto L_00441690; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441688u); set32(c.r[4], ld32((c.r[18].w[0] + 20u)));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00441688u) [[unlikely]] return; }
L_00441688:
    set32(c.r[2], c.r[18].w[0] + 4u);
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_00441690:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], ld32((c.r[18].w[0] + 20u)));  goto L_004416D4; }
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[2], c.r[18].w[0] + 4u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 24u)));  goto L_004416BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004416B8u);  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004416B8u) [[unlikely]] return; }
L_004416B8:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 24u)));
    c.budget -= 1;
L_004416BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004416C4u); set32(c.r[4], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_0000(c, 17u, depth + 1u); else { c.pc = 0x00100250u; return; } if (c.pc != 0x004416C4u) [[unlikely]] return; }
L_004416C4:
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 1u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 4;
L_004416D4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004416E0u); set32(c.r[5], c.r[5].w[0] + 24784u);  if (depth < kMaxDepth) unit_00AE(c, 158u, depth + 1u); else { c.pc = 0x003B9D28u; return; } if (c.pc != 0x004416E0u) [[unlikely]] return; }
L_004416E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00441708u); set32(c.r[5], c.r[5].w[0] + 24816u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00441708u) [[unlikely]] return; }
L_00441708:
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24928u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00441720u); set32(c.r[16], c.r[2].w[0] + 116u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00441720u) [[unlikely]] return; }
L_00441720:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044172Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0044172Cu) [[unlikely]] return; }
L_0044172C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 336u);  goto L_00441768; }
    set32(c.r[4], c.r[29].w[0] + 336u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00441748u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00441748u) [[unlikely]] return; }
L_00441748:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441760u); set32(c.r[6], c.r[6].w[0] + 24131u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00441760u) [[unlikely]] return; }
L_00441760:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 336u);  if (t) { goto L_004417A0; } }
L_00441768:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00441778u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00441778u) [[unlikely]] return; }
L_00441778:
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441790u); set32(c.r[6], c.r[6].w[0] + 24237u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00441790u) [[unlikely]] return; }
L_00441790:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044179Cu); set32(c.r[5], c.r[29].w[0] + 336u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x0044179Cu) [[unlikely]] return; }
L_0044179C:
    set32(c.r[4], c.r[29].w[0] + 336u);
    c.budget -= 1;
L_004417A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004417A8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004417A8u) [[unlikely]] return; }
L_004417A8:
    set32(c.r[16], c.r[29].w[0] + 304u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004417B8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x004417B8u) [[unlikely]] return; }
L_004417B8:
    st16((c.r[29].w[0] + 328u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[29].w[0] + 308u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[17], ld32((c.r[28].w[0] - 30036u)));
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 324u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 304u), c.r[2].w[0]);
    set32(c.r[2], 0u + 4u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[3].d[0]; st16((c.r[29].w[0] + 330u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_004417F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004417E8u); set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x004417E8u) [[unlikely]] return; }
L_004417E8:
    set32(c.r[2], c.r[16].w[0] + 4u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_004417F0:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
L_00441804:
    st32((c.r[3].w[0]), c.r[17].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00441820u); set32(c.r[5], c.r[5].w[0] + 24843u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00441820u) [[unlikely]] return; }
L_00441820:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 1;
L_00441824:
    set32(c.r[2], ld32((c.r[28].w[0] - 24928u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00441838u); set32(c.r[16], c.r[2].w[0] + 116u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00441838u) [[unlikely]] return; }
L_00441838:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441844u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00441844u) [[unlikely]] return; }
L_00441844:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 304u);  goto L_00441880; }
    set32(c.r[4], c.r[29].w[0] + 304u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00441860u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00441860u) [[unlikely]] return; }
L_00441860:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441878u); set32(c.r[6], c.r[6].w[0] + 24131u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00441878u) [[unlikely]] return; }
L_00441878:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 304u);  if (t) { goto L_004418B8; } }
L_00441880:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00441890u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00441890u) [[unlikely]] return; }
L_00441890:
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004418A8u); set32(c.r[6], c.r[6].w[0] + 24237u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x004418A8u) [[unlikely]] return; }
L_004418A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004418B4u); set32(c.r[5], c.r[29].w[0] + 304u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x004418B4u) [[unlikely]] return; }
L_004418B4:
    set32(c.r[4], c.r[29].w[0] + 304u);
    c.budget -= 1;
L_004418B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004418C0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004418C0u) [[unlikely]] return; }
L_004418C0:
    set32(c.r[16], c.r[29].w[0] + 272u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004418D0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x004418D0u) [[unlikely]] return; }
L_004418D0:
    st16((c.r[29].w[0] + 296u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[29].w[0] + 276u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[17], ld32((c.r[28].w[0] - 30032u)));
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 292u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    set32(c.r[2], 0u + 4u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[3].d[0]; st16((c.r[29].w[0] + 298u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00441908; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441900u); set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00441900u) [[unlikely]] return; }
L_00441900:
    set32(c.r[2], c.r[16].w[0] + 4u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_00441908:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[3].w[0]), c.r[17].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00441938u); set32(c.r[5], c.r[5].w[0] + 24857u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00441938u) [[unlikely]] return; }
L_00441938:
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24928u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00441950u); set32(c.r[16], c.r[2].w[0] + 116u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00441950u) [[unlikely]] return; }
L_00441950:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044195Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x0044195Cu) [[unlikely]] return; }
L_0044195C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 272u);  goto L_00441998; }
    set32(c.r[4], c.r[29].w[0] + 272u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00441978u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00441978u) [[unlikely]] return; }
L_00441978:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441990u); set32(c.r[6], c.r[6].w[0] + 24131u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00441990u) [[unlikely]] return; }
L_00441990:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 272u);  if (t) { goto L_004419D0; } }
L_00441998:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x004419A8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x004419A8u) [[unlikely]] return; }
L_004419A8:
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004419C0u); set32(c.r[6], c.r[6].w[0] + 24237u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x004419C0u) [[unlikely]] return; }
L_004419C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004419CCu); set32(c.r[5], c.r[29].w[0] + 272u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x004419CCu) [[unlikely]] return; }
L_004419CC:
    set32(c.r[4], c.r[29].w[0] + 272u);
    c.budget -= 1;
L_004419D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004419D8u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x004419D8u) [[unlikely]] return; }
L_004419D8:
    set32(c.r[16], c.r[29].w[0] + 240u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004419E8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x004419E8u) [[unlikely]] return; }
L_004419E8:
    st16((c.r[29].w[0] + 264u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[29].w[0] + 244u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[17], ld32((c.r[28].w[0] - 30028u)));
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 260u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    set32(c.r[2], 0u + 4u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[3].d[0]; st16((c.r[29].w[0] + 266u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00441A20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441A18u); set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00441A18u) [[unlikely]] return; }
L_00441A18:
    set32(c.r[2], c.r[16].w[0] + 4u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_00441A20:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[3].w[0]), c.r[17].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00441A50u); set32(c.r[5], c.r[5].w[0] + 24878u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00441A50u) [[unlikely]] return; }
L_00441A50:
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24928u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00441A68u); set32(c.r[16], c.r[2].w[0] + 116u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00441A68u) [[unlikely]] return; }
L_00441A68:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441A74u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00441A74u) [[unlikely]] return; }
L_00441A74:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 240u);  goto L_00441AB0; }
    set32(c.r[4], c.r[29].w[0] + 240u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00441A90u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00441A90u) [[unlikely]] return; }
L_00441A90:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441AA8u); set32(c.r[6], c.r[6].w[0] + 24131u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00441AA8u) [[unlikely]] return; }
L_00441AA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 240u);  if (t) { goto L_00441AE8; } }
L_00441AB0:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00441AC0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00441AC0u) [[unlikely]] return; }
L_00441AC0:
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441AD8u); set32(c.r[6], c.r[6].w[0] + 24237u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00441AD8u) [[unlikely]] return; }
L_00441AD8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441AE4u); set32(c.r[5], c.r[29].w[0] + 240u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x00441AE4u) [[unlikely]] return; }
L_00441AE4:
    set32(c.r[4], c.r[29].w[0] + 240u);
    c.budget -= 1;
L_00441AE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441AF0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x00441AF0u) [[unlikely]] return; }
L_00441AF0:
    set32(c.r[16], c.r[29].w[0] + 208u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441B00u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x00441B00u) [[unlikely]] return; }
L_00441B00:
    st16((c.r[29].w[0] + 232u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[29].w[0] + 212u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[17].d[0] = ld8((c.r[28].w[0] - 30024u));
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 228u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[3].d[0]; st16((c.r[29].w[0] + 234u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00441B38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441B30u); set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00441B30u) [[unlikely]] return; }
L_00441B30:
    set32(c.r[2], c.r[16].w[0] + 4u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_00441B38:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00441B68u); set32(c.r[5], c.r[5].w[0] + 24891u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00441B68u) [[unlikely]] return; }
L_00441B68:
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24928u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00441B80u); set32(c.r[16], c.r[2].w[0] + 116u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00441B80u) [[unlikely]] return; }
L_00441B80:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441B8Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00441B8Cu) [[unlikely]] return; }
L_00441B8C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 208u);  goto L_00441BC8; }
    set32(c.r[4], c.r[29].w[0] + 208u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00441BA8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00441BA8u) [[unlikely]] return; }
L_00441BA8:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441BC0u); set32(c.r[6], c.r[6].w[0] + 24131u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00441BC0u) [[unlikely]] return; }
L_00441BC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 208u);  if (t) { goto L_00441C00; } }
L_00441BC8:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00441BD8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00441BD8u) [[unlikely]] return; }
L_00441BD8:
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441BF0u); set32(c.r[6], c.r[6].w[0] + 24237u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00441BF0u) [[unlikely]] return; }
L_00441BF0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441BFCu); set32(c.r[5], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x00441BFCu) [[unlikely]] return; }
L_00441BFC:
    set32(c.r[4], c.r[29].w[0] + 208u);
    c.budget -= 1;
L_00441C00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441C08u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x00441C08u) [[unlikely]] return; }
L_00441C08:
    set32(c.r[16], c.r[29].w[0] + 176u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441C18u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x00441C18u) [[unlikely]] return; }
L_00441C18:
    st16((c.r[29].w[0] + 200u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[29].w[0] + 180u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[17], ld32((c.r[28].w[0] - 30020u)));
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 196u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[2], 0u + 4u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[3].d[0]; st16((c.r[29].w[0] + 202u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00441C50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441C48u); set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00441C48u) [[unlikely]] return; }
L_00441C48:
    set32(c.r[2], c.r[16].w[0] + 4u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_00441C50:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[3].w[0]), c.r[17].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00441C80u); set32(c.r[5], c.r[5].w[0] + 24922u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00441C80u) [[unlikely]] return; }
L_00441C80:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24928u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00441C98u); set32(c.r[16], c.r[2].w[0] + 116u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00441C98u) [[unlikely]] return; }
L_00441C98:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441CA4u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00441CA4u) [[unlikely]] return; }
L_00441CA4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 176u);  goto L_00441CE0; }
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00441CC0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00441CC0u) [[unlikely]] return; }
L_00441CC0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441CD8u); set32(c.r[6], c.r[6].w[0] + 24131u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00441CD8u) [[unlikely]] return; }
L_00441CD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 176u);  if (t) { goto L_00441D18; } }
L_00441CE0:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00441CF0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00441CF0u) [[unlikely]] return; }
L_00441CF0:
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441D08u); set32(c.r[6], c.r[6].w[0] + 24237u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00441D08u) [[unlikely]] return; }
L_00441D08:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441D14u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x00441D14u) [[unlikely]] return; }
L_00441D14:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 1;
L_00441D18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441D20u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x00441D20u) [[unlikely]] return; }
L_00441D20:
    set32(c.r[16], c.r[29].w[0] + 144u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441D30u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x00441D30u) [[unlikely]] return; }
L_00441D30:
    st16((c.r[29].w[0] + 168u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[29].w[0] + 148u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[29].w[0] + 164u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    set32(c.r[2], 0u + 4u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[3].d[0]; st16((c.r[29].w[0] + 170u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00441D64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441D5Cu); set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00441D5Cu) [[unlikely]] return; }
L_00441D5C:
    set32(c.r[2], c.r[16].w[0] + 4u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_00441D64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 24112u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00441D9Cu); set32(c.r[5], c.r[5].w[0] + 24931u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00441D9Cu) [[unlikely]] return; }
L_00441D9C:
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24928u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00441DB4u); set32(c.r[16], c.r[2].w[0] + 116u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00441DB4u) [[unlikely]] return; }
L_00441DB4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441DC0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00441DC0u) [[unlikely]] return; }
L_00441DC0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 144u);  goto L_00441DFC; }
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00441DDCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00441DDCu) [[unlikely]] return; }
L_00441DDC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441DF4u); set32(c.r[6], c.r[6].w[0] + 24131u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00441DF4u) [[unlikely]] return; }
L_00441DF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 144u);  if (t) { goto L_00441E34; } }
L_00441DFC:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00441E0Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00441E0Cu) [[unlikely]] return; }
L_00441E0C:
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441E24u); set32(c.r[6], c.r[6].w[0] + 24237u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00441E24u) [[unlikely]] return; }
L_00441E24:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441E30u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x00441E30u) [[unlikely]] return; }
L_00441E30:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 1;
L_00441E34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441E3Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x00441E3Cu) [[unlikely]] return; }
L_00441E3C:
    set32(c.r[16], c.r[29].w[0] + 112u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441E4Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x00441E4Cu) [[unlikely]] return; }
L_00441E4C:
    st16((c.r[29].w[0] + 136u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[29].w[0] + 116u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[17].d[0] = ld8((c.r[28].w[0] - 30016u));
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 132u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[3].d[0]; st16((c.r[29].w[0] + 138u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00441E84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441E7Cu); set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00441E7Cu) [[unlikely]] return; }
L_00441E7C:
    set32(c.r[2], c.r[16].w[0] + 4u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_00441E84:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00441EB4u); set32(c.r[5], c.r[5].w[0] + 24473u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00441EB4u) [[unlikely]] return; }
L_00441EB4:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24928u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00441ECCu); set32(c.r[16], c.r[2].w[0] + 116u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00441ECCu) [[unlikely]] return; }
L_00441ECC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441ED8u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00441ED8u) [[unlikely]] return; }
L_00441ED8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 112u);  goto L_00441F14; }
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00441EF4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00441EF4u) [[unlikely]] return; }
L_00441EF4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441F0Cu); set32(c.r[6], c.r[6].w[0] + 24131u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00441F0Cu) [[unlikely]] return; }
L_00441F0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 112u);  if (t) { goto L_00441F4C; } }
L_00441F14:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00441F24u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00441F24u) [[unlikely]] return; }
L_00441F24:
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441F3Cu); set32(c.r[6], c.r[6].w[0] + 24237u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00441F3Cu) [[unlikely]] return; }
L_00441F3C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441F48u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x00441F48u) [[unlikely]] return; }
L_00441F48:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_00441F4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441F54u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x00441F54u) [[unlikely]] return; }
L_00441F54:
    set32(c.r[16], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441F64u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 257u, depth + 1u); else { c.pc = 0x00132D00u; return; } if (c.pc != 0x00441F64u) [[unlikely]] return; }
L_00441F64:
    st16((c.r[29].w[0] + 104u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[29].w[0] + 84u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[17].d[0] = ld8((c.r[28].w[0] - 30012u));
    set32(c.r[2], c.r[2].w[0] - 26768u);
    st32((c.r[29].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[3].d[0]; st16((c.r[29].w[0] + 106u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00441F9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441F94u); set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (depth < kMaxDepth) unit_0000(c, 15u, depth + 1u); else { c.pc = 0x00100230u; return; } if (c.pc != 0x00441F94u) [[unlikely]] return; }
L_00441F94:
    set32(c.r[2], c.r[16].w[0] + 4u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_00441F9C:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] - 25680u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[25], ld32((c.r[16].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 12u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00441FCCu); set32(c.r[5], c.r[5].w[0] + 24946u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00441FCCu) [[unlikely]] return; }
L_00441FCC:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24928u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00441FE4u); set32(c.r[16], c.r[2].w[0] + 116u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00441FE4u) [[unlikely]] return; }
L_00441FE4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00441FF0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00441FF0u) [[unlikely]] return; }
L_00441FF0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[29].w[0] + 80u);  goto L_0044202C; }
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044200Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044200Cu) [[unlikely]] return; }
L_0044200C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442024u); set32(c.r[6], c.r[6].w[0] + 24131u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00442024u) [[unlikely]] return; }
L_00442024:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 80u);  if (t) { goto L_00442064; } }
L_0044202C:
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 16u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044203Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044203Cu) [[unlikely]] return; }
L_0044203C:
    set32(c.r[4], 0u + 2u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442054u); set32(c.r[6], c.r[6].w[0] + 24237u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00442054u) [[unlikely]] return; }
L_00442054:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442060u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000C(c, 397u, depth + 1u); else { c.pc = 0x00133B00u; return; } if (c.pc != 0x00442060u) [[unlikely]] return; }
L_00442060:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_00442064:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044206Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 239u, depth + 1u); else { c.pc = 0x00132A90u; return; } if (c.pc != 0x0044206Cu) [[unlikely]] return; }
L_0044206C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 848u);  c.pc = t; return; }
L_00442090:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), 0u);  c.pc = t; return; }
L_004420A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] != c.r[17].d[0];  if (t) { goto L_004420C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0044214C; } }
L_004420C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004420D0u);  if (depth < kMaxDepth) unit_00BF(c, 544u, depth + 1u); else { c.pc = 0x003FFE70u; return; } if (c.pc != 0x004420D0u) [[unlikely]] return; }
L_004420D0:
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 4u)));  goto L_00442100; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004420E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 365u, depth + 1u); else { c.pc = 0x00442810u; return; } if (c.pc != 0x004420E4u) [[unlikely]] return; }
L_004420E4:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 12u);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 7;
L_00442100:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 16u));
    st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[16].w[0] + 12u);  goto L_00442144; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[16].w[0] + 20u);  if (t) { goto L_00442124; } }
L_00442120:
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_00442124:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00442120u | kUnwind; return; } goto L_00442120; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), c.r[4].w[0]);  if (t) { goto L_00442148; } }
L_00442144:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 1;
L_00442148:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0044214C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00442160:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == c.r[5].d[0]) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00442194; }
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 44u)));
    set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442190u); c.r[5].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 361u, depth + 1u); else { c.pc = 0x00442770u; return; } if (c.pc != 0x00442190u) [[unlikely]] return; }
L_00442190:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00442194:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004421B0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_004425A4; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[5], ld32((c.r[19].w[0] + 8u)));  goto L_0044221C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 30960u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442210u); set32(c.r[5], c.r[5].w[0] + 25046u);  if (depth < kMaxDepth) unit_00AD(c, 272u, depth + 1u); else { c.pc = 0x003B70A8u; return; } if (c.pc != 0x00442210u) [[unlikely]] return; }
L_00442210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442218u);  if (depth < kMaxDepth) unit_00AD(c, 218u, depth + 1u); else { c.pc = 0x003B6878u; return; } if (c.pc != 0x00442218u) [[unlikely]] return; }
L_00442218:
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 1;
L_0044221C:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], c.r[5].w[0] + c.r[17].w[0]);
    c.r[1].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0])));  goto L_004423E4; }
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], 0u + 12u);
    c.budget -= 5;
L_00442244:
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[3].w[0] - c.r[18].w[0]);
    mmi::div(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[5].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] << 1);  goto L_004422F8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0044229C; } }
L_00442268:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 8u)));  goto L_0044228C; }
    set32(c.r[4], ld32((c.r[16].w[0])));
    st32((c.r[6].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[6].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[6].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 7;
L_0044228C:
    set32(c.r[6], c.r[6].w[0] + 12u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 4;
L_0044229C:
    c.r[1].d[0] = c.r[5].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00442268u | kUnwind; return; } goto L_00442268; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_004422E4; } }
L_004422B0:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 8u)));  goto L_004422D4; }
    set32(c.r[4], ld32((c.r[5].w[0])));
    st32((c.r[6].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[6].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[6].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 7;
L_004422D4:
    set32(c.r[5], c.r[5].w[0] + 12u);
    set32(c.r[6], c.r[6].w[0] + 12u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 4;
L_004422E4:
    c.r[4].d[0] = c.r[5].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004422B0u | kUnwind; return; } goto L_004422B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004423B0; } }
L_004422F8:
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[6], c.r[4].w[0] << 2);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[3].w[0] - c.r[6].w[0]);  if (t) { goto L_00442340; } }
L_0044230C:
    c.budget -= 2;
    if (c.r[7].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 8u)));  goto L_00442330; }
    set32(c.r[4], ld32((c.r[8].w[0])));
    st32((c.r[7].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[8].w[0] + 4u)));
    st32((c.r[7].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[8].w[0] + 8u)));
    st32((c.r[7].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 7;
L_00442330:
    set32(c.r[8], c.r[8].w[0] + 12u);
    set32(c.r[7], c.r[7].w[0] + 12u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[19].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 4;
L_00442340:
    c.r[4].d[0] = c.r[8].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0044230Cu | kUnwind; return; } goto L_0044230C; } }
    set32(c.r[5], c.r[5].w[0] - c.r[17].w[0]);
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] - c.r[5].w[0]);
    c.r[1].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[1].d[0] != 0ull) { set32(c.r[5], c.r[18].w[0] + c.r[5].w[0]);  goto L_004423A4; }
    c.r[1].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0044237C; } }
    set32(c.r[16], c.r[16].w[0] + c.r[6].w[0]);
    c.budget -= 1;
L_0044237C:
    set32(c.r[5], c.r[18].w[0] + c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004423A4; } }
L_00442388:
    set32(c.r[3], c.r[3].w[0] - 12u);
    set32(c.r[4], ld32((c.r[5].w[0])));
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 7;
L_004423A4:
    c.r[1].d[0] = c.r[18].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] - 12u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00442388u | kUnwind; return; } goto L_00442388; }
L_004423B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004423D4; } }
L_004423B8:
    set32(c.r[17], c.r[17].w[0] - 1u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[18], c.r[18].w[0] + 12u);
    c.budget -= 7;
L_004423D4:
    c.budget -= 2;
    if (c.r[17].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x004423B8u | kUnwind; return; } goto L_004423B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_004425A8; } }
L_004423E4:
    set32(c.r[20], ld32((c.r[19].w[0] + 4u)));
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 104u), 0u);
    st32((c.r[29].w[0] + 108u), 0u);
    c.budget -= 6;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[29].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_00442404; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0044240C; } }
L_00442404:
    set32(c.r[20], 0u + 1u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 2;
L_0044240C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[1].d[0] = c.r[20].d[0] < c.r[4].d[0] ? 1ull : 0ull;  if (t) { goto L_0044242C; } }
L_00442414:
    c.r[1].d[0] = c.r[1].d[0] | 65535ull;
    c.r[1].d[0] = c.r[20].d[0] < c.r[1].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[20].d[0] = c.r[2].d[0] + 0ull;  goto L_00442428; }
    set32(c.r[20], c.r[20].w[0] << 1);
    c.budget -= 1;
L_00442428:
    c.r[1].d[0] = c.r[20].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0044242C:
    c.budget -= 2;
    if (c.r[1].d[0] != 0ull) { c.r[1].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00442414u | kUnwind; return; } goto L_00442414; }
    set32(c.r[2], c.r[20].w[0] << 1);
    set32(c.r[5], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442448u); set32(c.r[4], c.r[2].w[0] << 2);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x00442448u) [[unlikely]] return; }
L_00442448:
    set32(c.r[6], ld32((c.r[19].w[0] + 8u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    st32((c.r[29].w[0] + 100u), c.r[20].w[0]);
    set32(c.r[3], c.r[6].w[0] << 1);
    st32((c.r[29].w[0] + 108u), c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);  if (t) { goto L_004424A4; } }
L_00442470:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[6], ld32((c.r[29].w[0] + 104u)));  goto L_00442494; }
    set32(c.r[6], ld32((c.r[4].w[0])));
    st32((c.r[5].w[0]), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[5].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[5].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 7;
L_00442494:
    set32(c.r[4], c.r[4].w[0] + 12u);
    set32(c.r[5], c.r[5].w[0] + 12u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[6].w[0]);
    c.budget -= 4;
L_004424A4:
    c.r[6].d[0] = c.r[4].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00442470u | kUnwind; return; } goto L_00442470; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004424EC; } }
L_004424B8:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[6], ld32((c.r[29].w[0] + 104u)));  goto L_004424DC; }
    set32(c.r[6], ld32((c.r[16].w[0])));
    st32((c.r[5].w[0]), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[5].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[5].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 7;
L_004424DC:
    set32(c.r[5], c.r[5].w[0] + 12u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[6].w[0]);
    c.budget -= 4;
L_004424EC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004424B8u | kUnwind; return; } goto L_004424B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;  if (t) { goto L_00442534; } }
L_004424FC:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[6], ld32((c.r[29].w[0] + 104u)));  goto L_00442520; }
    set32(c.r[6], ld32((c.r[4].w[0])));
    st32((c.r[5].w[0]), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[5].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[5].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 7;
L_00442520:
    set32(c.r[4], c.r[4].w[0] + 12u);
    set32(c.r[5], c.r[5].w[0] + 12u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[29].w[0] + 104u), c.r[6].w[0]);
    c.r[6].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
L_00442534:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004424FCu | kUnwind; return; } goto L_004424FC; } }
    set32(c.r[3], c.r[29].w[0] + 96u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[19].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 108u)));  goto L_0044258C; }
    set32(c.r[4], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[6], ld32((c.r[29].w[0] + 100u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 108u)));
    st32((c.r[19].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    st32((c.r[29].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    st32((c.r[29].w[0] + 108u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    st32((c.r[19].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 17;
L_0044258C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 104u), 0u);  if (t) { goto L_004425A4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_004425A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004425A4u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004425A4u) [[unlikely]] return; }
L_004425A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_004425A8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_004425D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004426E8; } }
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[29].w[0] + 52u), 0u);
    set32(c.r[4], c.r[2].w[0] << 2);
    st32((c.r[29].w[0] + 56u), 0u);
    st32((c.r[29].w[0] + 48u), c.r[5].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442618u); st32((c.r[29].w[0] + 60u), 0u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x00442618u) [[unlikely]] return; }
L_00442618:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[29].w[0] + 52u), c.r[17].w[0]);
    set32(c.r[3], c.r[4].w[0] << 1);
    st32((c.r[29].w[0] + 60u), c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[5].w[0] + c.r[3].w[0]);  if (t) { goto L_00442674; } }
L_00442640:
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[3], ld32((c.r[29].w[0] + 56u)));  goto L_00442664; }
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    st32((c.r[6].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    st32((c.r[6].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 7;
L_00442664:
    set32(c.r[5], c.r[5].w[0] + 12u);
    set32(c.r[6], c.r[6].w[0] + 12u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 4;
L_00442674:
    c.r[3].d[0] = c.r[5].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00442640u | kUnwind; return; } goto L_00442640; } }
    set32(c.r[3], c.r[29].w[0] + 48u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[16].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 60u)));  goto L_004426D0; }
    set32(c.r[4], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[6], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 60u)));
    st32((c.r[16].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    st32((c.r[29].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[29].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    c.budget -= 17;
L_004426D0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 56u), 0u);  if (t) { goto L_004426E8; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_004426EC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004426E8u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004426E8u) [[unlikely]] return; }
L_004426E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_004426EC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00442700:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00442754; } }
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] << 48;  goto L_00442740; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0044273C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044273Cu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x0044273Cu) [[unlikely]] return; }
L_0044273C:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00442740:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00442758; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442754u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00442754u) [[unlikely]] return; }
L_00442754:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00442758:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00442770:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[16], c.r[17].w[0] - c.r[18].w[0]);
    c.r[1].d[0] = c.r[2].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull; c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_004427E0; } }
    st32((c.r[19].w[0] + 8u), 0u);
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 4;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[19].w[0])));  goto L_004427D0; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st32((c.r[19].w[0] + 12u), 0u);  goto L_004427C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004427C4u);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x004427C4u) [[unlikely]] return; }
L_004427C4:
    st32((c.r[19].w[0] + 12u), 0u);
    c.budget -= 1;
L_004427C8:
    st32((c.r[19].w[0] + 4u), 0u);
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.budget -= 2;
L_004427D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004427D8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x004427D8u) [[unlikely]] return; }
L_004427D8:
    st32((c.r[19].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 2;
L_004427E0:
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[6], c.r[17].w[0] - c.r[18].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004427F0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 5u, depth + 1u); else { c.pc = 0x003B8098u; return; } if (c.pc != 0x004427F0u) [[unlikely]] return; }
L_004427F0:
    st32((c.r[19].w[0] + 8u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00442810:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442840u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x00442840u) [[unlikely]] return; }
L_00442840:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[20], ld32((c.r[18].w[0])));
    c.budget -= 5;
    { const bool t = c.r[20].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00442900; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044285Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 540u, depth + 1u); else { c.pc = 0x003FFE00u; return; } if (c.pc != 0x0044285Cu) [[unlikely]] return; }
L_0044285C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044286Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 390u, depth + 1u); else { c.pc = 0x00442A80u; return; } if (c.pc != 0x0044286Cu) [[unlikely]] return; }
L_0044286C:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[5], ld32((c.r[20].w[0])));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00442898; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442888u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 365u, depth + 1u); else { c.pc = 0x00442810u; return; } if (c.pc != 0x00442888u) [[unlikely]] return; }
L_00442888:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[2].w[0] + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442898u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 302u, depth + 1u); else { c.pc = 0x00166CF0u; return; } if (c.pc != 0x00442898u) [[unlikely]] return; }
L_00442898:
    set32(c.r[5], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_004428C0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004428ACu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 365u, depth + 1u); else { c.pc = 0x00442810u; return; } if (c.pc != 0x004428ACu) [[unlikely]] return; }
L_004428AC:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], c.r[2].w[0] + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004428BCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 302u, depth + 1u); else { c.pc = 0x00166CF0u; return; } if (c.pc != 0x004428BCu) [[unlikely]] return; }
L_004428BC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_004428C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004428C8u);  if (depth < kMaxDepth) unit_00BF(c, 543u, depth + 1u); else { c.pc = 0x003FFE60u; return; } if (c.pc != 0x004428C8u) [[unlikely]] return; }
L_004428C8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004428D8u); set32(c.r[6], c.r[20].w[0] + 12u);  if (depth < kMaxDepth) unit_00D0(c, 388u, depth + 1u); else { c.pc = 0x00442A30u; return; } if (c.pc != 0x004428D8u) [[unlikely]] return; }
L_004428D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004428E0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 300u, depth + 1u); else { c.pc = 0x00166CC0u; return; } if (c.pc != 0x004428E0u) [[unlikely]] return; }
L_004428E0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004428ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 299u, depth + 1u); else { c.pc = 0x00166C90u; return; } if (c.pc != 0x004428ECu) [[unlikely]] return; }
L_004428EC:
    st32((c.r[17].w[0]), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[17].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
L_00442900:
    set32(c.r[20], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[20].d[0] == 0ull) { set32(c.r[16], c.r[17].w[0] + 12u);  goto L_004429BC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442914u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 540u, depth + 1u); else { c.pc = 0x003FFE00u; return; } if (c.pc != 0x00442914u) [[unlikely]] return; }
L_00442914:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442924u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 390u, depth + 1u); else { c.pc = 0x00442A80u; return; } if (c.pc != 0x00442924u) [[unlikely]] return; }
L_00442924:
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[5], ld32((c.r[20].w[0])));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00442950; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442940u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 365u, depth + 1u); else { c.pc = 0x00442810u; return; } if (c.pc != 0x00442940u) [[unlikely]] return; }
L_00442940:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[2].w[0] + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442950u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 302u, depth + 1u); else { c.pc = 0x00166CF0u; return; } if (c.pc != 0x00442950u) [[unlikely]] return; }
L_00442950:
    set32(c.r[5], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[5].d[0] == 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_00442978; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442964u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 365u, depth + 1u); else { c.pc = 0x00442810u; return; } if (c.pc != 0x00442964u) [[unlikely]] return; }
L_00442964:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], c.r[2].w[0] + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442974u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 302u, depth + 1u); else { c.pc = 0x00166CF0u; return; } if (c.pc != 0x00442974u) [[unlikely]] return; }
L_00442974:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00442978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442980u);  if (depth < kMaxDepth) unit_00BF(c, 543u, depth + 1u); else { c.pc = 0x003FFE60u; return; } if (c.pc != 0x00442980u) [[unlikely]] return; }
L_00442980:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442990u); set32(c.r[6], c.r[20].w[0] + 12u);  if (depth < kMaxDepth) unit_00D0(c, 388u, depth + 1u); else { c.pc = 0x00442A30u; return; } if (c.pc != 0x00442990u) [[unlikely]] return; }
L_00442990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442998u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 300u, depth + 1u); else { c.pc = 0x00166CC0u; return; } if (c.pc != 0x00442998u) [[unlikely]] return; }
L_00442998:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004429A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0019(c, 299u, depth + 1u); else { c.pc = 0x00166C90u; return; } if (c.pc != 0x004429A4u) [[unlikely]] return; }
L_004429A4:
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[17].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[16], c.r[17].w[0] + 12u);
    c.budget -= 6;
L_004429BC:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 8u)));  goto L_004429DC; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004429D0u); set32(c.r[5], c.r[18].w[0] + 12u);  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x004429D0u) [[unlikely]] return; }
L_004429D0:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
L_004429DC:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 8u)));  goto L_004429FC; }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00442A08; } }
L_004429FC:
    set32(c.r[2], 0u - 2u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
L_00442A08:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00442A30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_00442A60; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442A58u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000F(c, 258u, depth + 1u); else { c.pc = 0x0013E8E0u; return; } if (c.pc != 0x00442A58u) [[unlikely]] return; }
L_00442A58:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 2;
L_00442A60:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00442A80:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[5].w[0] << 5);
    c.budget -= 4;
    { set32(c.r[5], ld32((c.r[2].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001024B0u | kUnwind; return; } [[clang::musttail]] return unit_0000(c, 163u, depth); }
L_00442A90:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0043FC70u | kUnwind; return; } [[clang::musttail]] return unit_00CF(c, 469u, depth); }
L_00442AA0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0043F370u | kUnwind; return; } [[clang::musttail]] return unit_00CF(c, 415u, depth); }
L_00442AB0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0043FC70u | kUnwind; return; } [[clang::musttail]] return unit_00CF(c, 469u, depth); }
L_00442AC0:
    c.budget -= 2;
    { set32(c.r[4], c.r[4].w[0] - 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0043F320u | kUnwind; return; } [[clang::musttail]] return unit_00CF(c, 414u, depth); }
L_00442AD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00442B40; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 28528u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00442B28; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] - 27696u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00442B28; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_00442B28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442B28u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00442B28u) [[unlikely]] return; }
L_00442B28:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00442B44; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442B40u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00442B40u) [[unlikely]] return; }
L_00442B40:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00442B44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00442B60:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 20u));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_00442B88; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 5u);  goto L_00442B80; }
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 1;
L_00442B80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00442B8C; } }
L_00442B88:
    set32(c.r[2], c.r[2].w[0] + 25168u);
    c.budget -= 1;
L_00442B8C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00442BA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 25296u);  c.pc = t; return; }
L_00442BB0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[4], c.r[29].w[0] + 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[6], c.r[6].w[0] + 25396u);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[7], 0u + 10u);
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442BE8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000C(c, 430u, depth + 1u); else { c.pc = 0x00133EC0u; return; } if (c.pc != 0x00442BE8u) [[unlikely]] return; }
L_00442BE8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442BF8u); set32(c.r[5], c.r[5].w[0] + 25398u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00442BF8u) [[unlikely]] return; }
L_00442BF8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_00442C14; }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442C0Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x00442C0Cu) [[unlikely]] return; }
L_00442C0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00442D70; } }
L_00442C14:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442C20u); set32(c.r[5], c.r[5].w[0] + 25403u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00442C20u) [[unlikely]] return; }
L_00442C20:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_00442C3C; }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442C34u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x00442C34u) [[unlikely]] return; }
L_00442C34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00442D70; } }
L_00442C3C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442C48u); set32(c.r[5], c.r[5].w[0] + 25398u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00442C48u) [[unlikely]] return; }
L_00442C48:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442C54u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0004(c, 252u, depth + 1u); else { c.pc = 0x001130F0u; return; } if (c.pc != 0x00442C54u) [[unlikely]] return; }
L_00442C54:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442C64u); set32(c.r[5], c.r[5].w[0] + 25408u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00442C64u) [[unlikely]] return; }
L_00442C64:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = 0ull + 0ull;  goto L_00442CA4; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442C7Cu); set32(c.r[5], c.r[29].w[0] + 175u);  if (depth < kMaxDepth) unit_0004(c, 246u, depth + 1u); else { c.pc = 0x00112FA0u; return; } if (c.pc != 0x00442C7Cu) [[unlikely]] return; }
L_00442C7C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld8((c.r[29].w[0] + 175u));  goto L_00442CA4; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 26u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00442CA0; } }
    c.r[5].d[0] = ld8((c.r[29].w[0] + 175u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442CA0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0004(c, 244u, depth + 1u); else { c.pc = 0x00112F40u; return; } if (c.pc != 0x00442CA0u) [[unlikely]] return; }
L_00442CA0:
    c.r[16].d[0] = ld8((c.r[29].w[0] + 175u));
    c.budget -= 1;
L_00442CA4:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 25088u);  if (t) { goto L_00442CB0; } }
L_00442CB0:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 96u);  goto L_00442CFC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442CCCu); set32(c.r[5], c.r[5].w[0] + 25403u);  if (depth < kMaxDepth) unit_000C(c, 385u, depth + 1u); else { c.pc = 0x001339E0u; return; } if (c.pc != 0x00442CCCu) [[unlikely]] return; }
L_00442CCC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 164u);
    set32(c.r[2], c.r[29].w[0] + 168u);
    st32((c.r[29].w[0] + 168u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442CE4u); st32((c.r[29].w[0] + 164u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00D0(c, 419u, depth + 1u); else { c.pc = 0x00442D90u; return; } if (c.pc != 0x00442CE4u) [[unlikely]] return; }
L_00442CE4:
    set32(c.r[5], ld32((c.r[29].w[0] + 168u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442CF0u); set32(c.r[4], ld32((c.r[18].w[0])));  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00442CF0u) [[unlikely]] return; }
L_00442CF0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], c.r[18].w[0] + 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00442CB0u | kUnwind; return; } goto L_00442CB0; }
    set32(c.r[4], 0u + 96u);
    c.budget -= 1;
L_00442CFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442D04u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x00442D04u) [[unlikely]] return; }
L_00442D04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00442D54; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[29].w[0] + 81u);  goto L_00442D20; }
    set32(c.r[6], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 1;
L_00442D20:
    set32(c.r[18], ld32((c.r[18].w[0] + 4u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], 0u + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442D3Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 319u, depth + 1u); else { c.pc = 0x0013AFC0u; return; } if (c.pc != 0x00442D3Cu) [[unlikely]] return; }
L_00442D3C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + 28560u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 88u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 92u), c.r[18].w[0]);
    c.budget -= 6;
L_00442D54:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442D60u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 296u, depth + 1u); else { c.pc = 0x00103430u; return; } if (c.pc != 0x00442D60u) [[unlikely]] return; }
L_00442D60:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442D6Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_000C(c, 424u, depth + 1u); else { c.pc = 0x00133DD0u; return; } if (c.pc != 0x00442D6Cu) [[unlikely]] return; }
L_00442D6C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00442D70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00442D90:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 26u)));
    c.r[2].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.r[3].d[0] = c.r[7].d[0] & 512ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_00442DB4; } }
    c.r[3].d[0] = c.r[7].d[0] & 1024ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[8], c.r[4].w[0] + 20u);  if (t) { goto L_00442DB4; } }
    set32(c.r[8], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 1;
L_00442DB4:
    set32(c.r[6], 0u - 1025u);
    set32(c.r[3], 0u + 128u);
    c.r[6].d[0] = c.r[7].d[0] & c.r[6].d[0];
    c.budget -= 5;
    if (c.r[6].d[0] == c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00442E68; }
    set32(c.r[3], 0u + 64u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00442E68; }
    set32(c.r[3], 0u + 32u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00442E68; }
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00442E68; }
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00442E68; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00442E68; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_00442E68; }
    set32(c.r[3], 0u + 512u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[8].w[0])));  goto L_00442E60; }
    set32(c.r[3], 0u + 256u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[4], ld32((c.r[4].w[0] + 20u)));  goto L_00442E3C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00442E68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00442E68; } }
L_00442E3C:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], ld32((c.r[5].w[0])));  if (t) { goto L_00442E54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[4].w[0] + 8u)));  if (t) { goto L_00442E58; } }
L_00442E54:
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_00442E58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[3].w[0]);  if (t) { goto L_00442E68; } }
L_00442E60:
    set32(c.r[3], ld32((c.r[5].w[0])));
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 2;
L_00442E68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00442E70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 92u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00443074; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 25136u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00440000u < 16384u) { entry = entries_00D0[(t - 0x00440000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00442EB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442EB8u);  if (depth < kMaxDepth) unit_00CC(c, 137u, depth + 1u); else { c.pc = 0x00430F70u; return; } if (c.pc != 0x00442EB8u) [[unlikely]] return; }
L_00442EB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442EC0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 146u, depth + 1u); else { c.pc = 0x00431030u; return; } if (c.pc != 0x00442EC0u) [[unlikely]] return; }
L_00442EC0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442ECCu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 59u, depth + 1u); else { c.pc = 0x00138D10u; return; } if (c.pc != 0x00442ECCu) [[unlikely]] return; }
L_00442ECC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442EDCu); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_00AE(c, 259u, depth + 1u); else { c.pc = 0x003BA438u; return; } if (c.pc != 0x00442EDCu) [[unlikely]] return; }
L_00442EDC:
    c.r[16].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_00443074; } }
L_00442EE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442EF0u);  if (depth < kMaxDepth) unit_00CC(c, 134u, depth + 1u); else { c.pc = 0x00430F10u; return; } if (c.pc != 0x00442EF0u) [[unlikely]] return; }
L_00442EF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442EF8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 146u, depth + 1u); else { c.pc = 0x00431030u; return; } if (c.pc != 0x00442EF8u) [[unlikely]] return; }
L_00442EF8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442F04u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 59u, depth + 1u); else { c.pc = 0x00138D10u; return; } if (c.pc != 0x00442F04u) [[unlikely]] return; }
L_00442F04:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442F14u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_00AE(c, 259u, depth + 1u); else { c.pc = 0x003BA438u; return; } if (c.pc != 0x00442F14u) [[unlikely]] return; }
L_00442F14:
    c.r[16].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_00443074; } }
L_00442F20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442F28u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 392u, depth + 1u); else { c.pc = 0x003F7660u; return; } if (c.pc != 0x00442F28u) [[unlikely]] return; }
L_00442F28:
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00442FD8; }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00442FB0; }
    set32(c.r[3], 0u + 9u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00442F88; }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00442F60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00443078; } }
L_00442F60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442F68u);  if (depth < kMaxDepth) unit_000E(c, 59u, depth + 1u); else { c.pc = 0x00138D10u; return; } if (c.pc != 0x00442F68u) [[unlikely]] return; }
L_00442F68:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 25420u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442F7Cu); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_00AE(c, 259u, depth + 1u); else { c.pc = 0x003BA438u; return; } if (c.pc != 0x00442F7Cu) [[unlikely]] return; }
L_00442F7C:
    c.r[16].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_00443074; } }
L_00442F88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442F90u);  if (depth < kMaxDepth) unit_000E(c, 59u, depth + 1u); else { c.pc = 0x00138D10u; return; } if (c.pc != 0x00442F90u) [[unlikely]] return; }
L_00442F90:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 25428u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442FA4u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_00AE(c, 259u, depth + 1u); else { c.pc = 0x003BA438u; return; } if (c.pc != 0x00442FA4u) [[unlikely]] return; }
L_00442FA4:
    c.r[16].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_00443074; } }
L_00442FB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442FB8u);  if (depth < kMaxDepth) unit_000E(c, 59u, depth + 1u); else { c.pc = 0x00138D10u; return; } if (c.pc != 0x00442FB8u) [[unlikely]] return; }
L_00442FB8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 25435u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442FCCu); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_00AE(c, 259u, depth + 1u); else { c.pc = 0x003BA438u; return; } if (c.pc != 0x00442FCCu) [[unlikely]] return; }
L_00442FCC:
    c.r[16].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_00443074; } }
L_00442FD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442FE0u);  if (depth < kMaxDepth) unit_000E(c, 59u, depth + 1u); else { c.pc = 0x00138D10u; return; } if (c.pc != 0x00442FE0u) [[unlikely]] return; }
L_00442FE0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 25444u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00442FF4u); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_00AE(c, 259u, depth + 1u); else { c.pc = 0x003BA438u; return; } if (c.pc != 0x00442FF4u) [[unlikely]] return; }
L_00442FF4:
    c.r[16].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_00443074; } }
L_00443000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443008u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 59u, depth + 1u); else { c.pc = 0x00138D10u; return; } if (c.pc != 0x00443008u) [[unlikely]] return; }
    goto L_00443008;
L_00443004:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00443008:
    set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 80u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0044301Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0044301Cu) [[unlikely]] return; }
L_0044301C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443028u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x00443028u) [[unlikely]] return; }
L_00443028:
    c.r[16].d[0] = c.r[2].d[0] ^ 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_00443074; } }
L_00443034:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044303Cu); set32(c.r[4], ld32((c.r[28].w[0] - 26060u)));  if (depth < kMaxDepth) unit_00C2(c, 312u, depth + 1u); else { c.pc = 0x0040AC50u; return; } if (c.pc != 0x0044303Cu) [[unlikely]] return; }
L_0044303C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_00443054; }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 25452u);  if (t) { goto L_00443058; } }
L_00443054:
    set32(c.r[16], c.r[16].w[0] + 25465u);
    c.budget -= 1;
L_00443058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443060u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 59u, depth + 1u); else { c.pc = 0x00138D10u; return; } if (c.pc != 0x00443060u) [[unlikely]] return; }
L_00443060:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044306Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x0044306Cu) [[unlikely]] return; }
L_0044306C:
    c.r[16].d[0] = c.r[2].d[0] ^ 0ull;
    c.r[16].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 2;
L_00443074:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00443078:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00443090:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004430B0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013A9E0u; return; } if (c.pc != 0x004430B0u) [[unlikely]] return; }
L_004430B0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_004430EC; } }
L_004430BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004430C4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 279u, depth + 1u); else { c.pc = 0x0013A9F0u; return; } if (c.pc != 0x004430C4u) [[unlikely]] return; }
L_004430C4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004430D4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D0(c, 420u, depth + 1u); else { c.pc = 0x00442E70u; return; } if (c.pc != 0x004430D4u) [[unlikely]] return; }
L_004430D4:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_004430EC; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004430E8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 67u, depth + 1u); else { c.pc = 0x00138E10u; return; } if (c.pc != 0x004430E8u) [[unlikely]] return; }
L_004430E8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_004430EC:
    c.r[2].d[0] = c.r[18].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x004430BCu | kUnwind; return; } goto L_004430BC; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00443120:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044313Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013A9E0u; return; } if (c.pc != 0x0044313Cu) [[unlikely]] return; }
L_0044313C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00443168; } }
L_00443148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443150u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 279u, depth + 1u); else { c.pc = 0x0013A9F0u; return; } if (c.pc != 0x00443150u) [[unlikely]] return; }
L_00443150:
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00443164; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443164u);  if (depth < kMaxDepth) unit_000E(c, 63u, depth + 1u); else { c.pc = 0x00138D80u; return; } if (c.pc != 0x00443164u) [[unlikely]] return; }
L_00443164:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00443168:
    c.r[3].d[0] = c.r[17].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00443148u | kUnwind; return; } goto L_00443148; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00443190:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[4].w[0] + 25312u);
    set32(c.r[5], c.r[5].w[0] + 25477u);
    set32(c.r[6], c.r[6].w[0] + 25492u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004431C0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0007(c, 125u, depth + 1u); else { c.pc = 0x0011CFB0u; return; } if (c.pc != 0x004431C0u) [[unlikely]] return; }
L_004431C0:
    set32(c.r[17], ld32((c.r[28].w[0] - 29076u)));
    set32(c.r[4], 0u + 24u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004431D0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x004431D0u) [[unlikely]] return; }
L_004431D0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 808u)));  goto L_00443210; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004431F0u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 263u, depth + 1u); else { c.pc = 0x0013E970u; return; } if (c.pc != 0x004431F0u) [[unlikely]] return; }
L_004431F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 27696u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 28528u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 808u)));
    c.budget -= 8;
L_00443210:
    set32(c.r[3], 0u + 39u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00443270; }
    set32(c.r[2], c.r[4].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 25507u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0044323Cu); set32(c.r[4], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_0006(c, 259u, depth + 1u); else { c.pc = 0x00119FF0u; return; } if (c.pc != 0x0044323Cu) [[unlikely]] return; }
L_0044323C:
    set32(c.r[3], ld32((c.r[17].w[0] + 808u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[2].w[0] + 24u), c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 808u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443260u); set32(c.r[4], c.r[17].w[0] + 812u);  if (depth < kMaxDepth) unit_0006(c, 256u, depth + 1u); else { c.pc = 0x00119F20u; return; } if (c.pc != 0x00443260u) [[unlikely]] return; }
L_00443260:
    set32(c.r[3], ld32((c.r[17].w[0] + 808u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 808u), c.r[3].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 4;
L_00443270:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00443280:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004432C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 28560u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004432B0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 312u, depth + 1u); else { c.pc = 0x0013AE50u; return; } if (c.pc != 0x004432B0u) [[unlikely]] return; }
L_004432B0:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_004432CC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004432C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004432C8u) [[unlikely]] return; }
L_004432C8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_004432CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004432E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[7], 0u + 16u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443308u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000E(c, 319u, depth + 1u); else { c.pc = 0x0013AFC0u; return; } if (c.pc != 0x00443308u) [[unlikely]] return; }
L_00443308:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + 28560u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 88u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 92u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00443340:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30008u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0044335C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0044336C; } }
L_0044335C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443364u);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013B110u; return; } if (c.pc != 0x00443364u) [[unlikely]] return; }
L_00443364:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0044336C:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00443380:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004433A4u); set32(c.r[4], c.r[4].w[0] + 25312u);  if (depth < kMaxDepth) unit_00AE(c, 153u, depth + 1u); else { c.pc = 0x003B9BC8u; return; } if (c.pc != 0x004433A4u) [[unlikely]] return; }
L_004433A4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_004433B4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_004433C4; } }
L_004433B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004433BCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000E(c, 333u, depth + 1u); else { c.pc = 0x0013B150u; return; } if (c.pc != 0x004433BCu) [[unlikely]] return; }
L_004433BC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_004433C4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_004433E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 31192u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[5].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_004433F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 30008u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0044340C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00443414; } }
L_0044340C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443414u);  if (depth < kMaxDepth) unit_000E(c, 337u, depth + 1u); else { c.pc = 0x0013B1C0u; return; } if (c.pc != 0x00443414u) [[unlikely]] return; }
L_00443414:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00443420:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[28].w[0] - 30008u)));  c.pc = t; return; }
L_00443430:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 25328u);  c.pc = t; return; }
L_00443440:
    set32(c.r[6], ld32((c.r[4].w[0] + 44u)));
    c.r[1].d[0] = c.r[6].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] != 0ull) { c.r[2].d[0] = c.r[5].d[0] + 0ull;  goto L_004434BC; }
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.r[1].d[0] = c.r[3].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { c.r[1].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;  goto L_0044346C; }
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_004434BC; } }
L_0044346C:
    c.budget -= 2;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u + 5u);  goto L_0044347C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004434BC; } }
L_0044347C:
    c.budget -= 2;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[2], c.r[3].w[0] - 1u);  goto L_0044348C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_004434BC; } }
L_0044348C:
    c.r[1].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_004434A4; } }
    set32(c.r[2], c.r[5].w[0] - 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);  if (t) { goto L_004434BC; } }
L_004434A4:
    c.budget -= 2;
    if (c.r[6].d[0] != c.r[2].d[0]) { set32(c.r[2], c.r[5].w[0] - 10u);  goto L_004434B8; }
    set32(c.r[2], c.r[5].w[0] - 9u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);  if (t) { goto L_004434BC; } }
L_004434B8:
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_004434BC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_004434D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 5;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[4].w[0] + 48u)));  goto L_004434EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0044350C; } }
L_004434EC:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], c.r[5].w[0] << 2);  goto L_00443504; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004434FCu);  if (depth < kMaxDepth) unit_00D0(c, 483u, depth + 1u); else { c.pc = 0x00443440u; return; } if (c.pc != 0x004434FCu) [[unlikely]] return; }
L_004434FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0044350C; } }
L_00443504:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_0044350C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00443520:
    st32((c.r[4].w[0] + 44u), c.r[5].w[0]);
    set32(c.r[3], 0u - 2u);
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 52u), c.r[6].w[0]);  c.pc = t; return; }
L_00443540:
    mmi::pminw(c.r[8], c.r[5], c.r[6]);
    st32((c.r[4].w[0] + 44u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 48u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 52u), c.r[7].w[0]);
    mmi::pmaxw(c.r[3], c.r[5], c.r[6]);
    c.r[1].d[0] = c.r[8].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; c.r[6].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_00443564; } }
    set32(c.r[6], 0u + 4u);
    c.budget -= 1;
L_00443564:
    c.r[1].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { c.r[5].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;  goto L_00443598; }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00443574:
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[5].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00443574u | kUnwind; return; } goto L_00443574; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00443884; } }
L_00443598:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[5], c.r[3].w[0] - c.r[6].w[0]);  goto L_00443610; }
    set32(c.r[5], c.r[3].w[0] - c.r[8].w[0]);
    c.r[1].d[0] = c.r[5].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0044360C; } }
    c.r[5].d[0] = c.r[8].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0044360C; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004435C0:
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[6].w[0]);
    c.r[5].d[0] = c.r[6].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull; c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004435C0u | kUnwind; return; } goto L_004435C0; } }
    set32(c.r[7], 0u - 1u);
    set32(c.r[5], c.r[8].w[0] - 1u);
    st32((c.r[4].w[0] + 16u), c.r[7].w[0]);
    set32(c.r[6], c.r[8].w[0] + 1u);
    st32((c.r[4].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[8].w[0]);
    set32(c.r[5], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 28u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 32u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[5].w[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 40u), c.r[3].w[0]);  if (t) { goto L_00443884; } }
L_0044360C:
    set32(c.r[5], c.r[3].w[0] - c.r[6].w[0]);
    c.budget -= 1;
L_00443610:
    c.r[5].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[5].d[0] != 0ull) { c.r[5].d[0] = c.r[8].sd[0] < 7ll ? 1ull : 0ull;  goto L_0044369C; }
    set32(c.r[5], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[5].d[0]) { c.r[7].d[0] = 0ull + 0ull;  goto L_00443660; }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0044362C:
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[6].w[0]);
    c.r[5].d[0] = c.r[6].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull; c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0044362Cu | kUnwind; return; } goto L_0044362C; } }
    set32(c.r[6], 0u - 1u);
    set32(c.r[5], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 32u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 40u), c.r[3].w[0]);  if (t) { goto L_00443884; } }
L_00443660:
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[6].w[0]);
    c.r[5].d[0] = c.r[6].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull; c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00443660u | kUnwind; return; } goto L_00443660; } }
    set32(c.r[5], 0u - 1u);
    set32(c.r[6], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 28u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 32u), c.r[6].w[0]);
    set32(c.r[5], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 40u), c.r[5].w[0]);  if (t) { goto L_00443884; } }
L_0044369C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00443884; } }
    set32(c.r[5], c.r[3].w[0] - c.r[8].w[0]);
    c.r[1].d[0] = c.r[5].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00443884; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[5], c.r[6].w[0] - 2u);
    c.r[1].d[0] = c.r[5].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00443704; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004436CC:
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[6].w[0]);
    c.r[5].d[0] = c.r[6].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull; c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004436CCu | kUnwind; return; } goto L_004436CC; } }
    set32(c.r[6], 0u - 1u);
    set32(c.r[5], c.r[8].w[0] - 1u);
    st32((c.r[4].w[0] + 28u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 32u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[8].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 40u), c.r[3].w[0]);  if (t) { goto L_00443884; } }
L_00443704:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[6].d[0]) { st32((c.r[4].w[0] + 36u), c.r[3].w[0]);  goto L_004437A4; }
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[5], c.r[3].w[0] - 1u);
    set32(c.r[7], c.r[3].w[0] - 2u);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == 0ull; st32((c.r[4].w[0] + 36u), c.r[5].w[0]);  if (t) { goto L_00443758; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00443724:
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00443724u | kUnwind; return; } goto L_00443724; } }
    set32(c.r[5], 0u - 1u);
    set32(c.r[3], c.r[7].w[0] - 1u);
    st32((c.r[4].w[0] + 24u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 32u), c.r[7].w[0]);  if (t) { goto L_00443884; } }
L_00443758:
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0044375C:
    set32(c.r[5], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[8].w[0] + 1u);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[6].w[0]);
    c.r[5].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull; c.r[8].d[0] = c.r[6].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0044375Cu | kUnwind; return; } goto L_0044375C; } }
    set32(c.r[6], 0u - 1u);
    set32(c.r[5], c.r[7].w[0] - 1u);
    st32((c.r[4].w[0] + 20u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[6], c.r[7].w[0] + 1u);
    st32((c.r[4].w[0] + 28u), c.r[7].w[0]);
    set32(c.r[5], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 32u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[5].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 40u), c.r[3].w[0]);  if (t) { goto L_00443884; } }
L_004437A4:
    set32(c.r[5], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 40u), c.r[5].w[0]);
    set32(c.r[5], c.r[3].w[0] - 1u);
    c.budget -= 5;
    if (c.r[8].d[0] != c.r[5].d[0]) { set32(c.r[5], c.r[3].w[0] - 2u);  goto L_004437F0; }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004437BC:
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004437BCu | kUnwind; return; } goto L_004437BC; } }
    set32(c.r[5], 0u - 1u);
    set32(c.r[3], c.r[8].w[0] - 1u);
    st32((c.r[4].w[0] + 24u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 32u), c.r[8].w[0]);  if (t) { goto L_00443884; } }
L_004437F0:
    c.budget -= 2;
    if (c.r[8].d[0] != c.r[5].d[0]) { set32(c.r[5], c.r[3].w[0] - 3u);  goto L_00443838; }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_004437FC:
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[5].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = c.r[5].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004437FCu | kUnwind; return; } goto L_004437FC; } }
    set32(c.r[3], 0u - 1u);
    set32(c.r[5], c.r[8].w[0] - 1u);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[3], c.r[8].w[0] + 1u);
    st32((c.r[4].w[0] + 28u), c.r[8].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 32u), c.r[3].w[0]);  if (t) { goto L_00443884; } }
L_00443838:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[5].d[0];  if (t) { goto L_00443884; } }
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00443844:
    set32(c.r[5], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[6].w[0]);
    c.r[5].d[0] = c.r[6].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull; c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00443844u | kUnwind; return; } goto L_00443844; } }
    set32(c.r[5], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0] + 16u), c.r[5].w[0]);
    set32(c.r[5], c.r[8].w[0] - 1u);
    st32((c.r[4].w[0] + 20u), c.r[5].w[0]);
    set32(c.r[5], c.r[8].w[0] + 1u);
    st32((c.r[4].w[0] + 24u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 28u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 9;
L_00443884:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00443890:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_004438CC; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 28632u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_004438C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004438C8u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x004438C8u) [[unlikely]] return; }
L_004438C8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_004438CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_004438E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 28632u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u - 2u);
    c.budget -= 5;
L_004438F4:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x004438F4u | kUnwind; return; } goto L_004438F4; } }
    st32((c.r[4].w[0] + 44u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 52u), c.r[3].w[0]);  c.pc = t; return; }
L_00443930:
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);  if (t) { goto L_00443960; } }
L_00443944:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[5].d[0]) { set32(c.r[3], c.r[4].w[0] + 4u);  goto L_00443960; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00443980; } }
L_00443960:
    c.r[2].d[0] = c.r[3].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[3].d[0] << 32;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00443944u | kUnwind; return; } goto L_00443944; }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00443980:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00443990:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_004439D0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 28u)));  goto L_004439C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_004439FC; } }
L_004439C4:
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004439D0u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_00D0(c, 531u, depth + 1u); else { c.pc = 0x00443E00u; return; } if (c.pc != 0x004439D0u) [[unlikely]] return; }
L_004439D0:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_004439FC; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x004439F8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00F9(c, 192u, depth + 1u); else { c.pc = 0x004E5D30u; return; } if (c.pc != 0x004439F8u) [[unlikely]] return; }
L_004439F8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_004439FC:
    st32((c.r[29].w[0] + 60u), c.r[4].w[0]);
    set32(c.r[6], 0u + 1u);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 4u));
    set32(c.r[7], c.r[29].w[0] + 60u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    st32((c.r[4].w[0] + 20u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[4].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 28u));
    st32((c.r[4].w[0] + 28u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    st32((c.r[4].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    st32((c.r[4].w[0] + 36u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 40u));
    st8((c.r[4].w[0] + 40u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 41u));
    st8((c.r[4].w[0] + 41u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 42u));
    st8((c.r[4].w[0] + 42u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 43u));
    st8((c.r[4].w[0] + 43u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    st32((c.r[4].w[0] + 44u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    st32((c.r[4].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    st32((c.r[4].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    st32((c.r[4].w[0] + 56u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 60u));
    st8((c.r[4].w[0] + 60u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[4], c.r[17].w[0] + 32u);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 45;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443AB0u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0004(c, 158u, depth + 1u); else { c.pc = 0x001120D0u; return; } if (c.pc != 0x00443AB0u) [[unlikely]] return; }
L_00443AB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00443AD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00443B30; } }
L_00443AE8:
    set32(c.r[5], 0u - 1u);
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0] - 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[17].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00443B18u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00443B18u) [[unlikely]] return; }
L_00443B18:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    c.budget -= 6;
L_00443B30:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 40u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00443AE8u | kUnwind; return; } goto L_00443AE8; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00443B50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].d[0] = c.r[16].d[0] + 0ull;  goto L_00443B8C; }
    c.r[2].d[0] = c.r[5].d[0] << 48;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 28648u);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_00443B88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443B88u);  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00443B88u) [[unlikely]] return; }
L_00443B88:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00443B8C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00443BA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00443C80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 40u)));  if (t) { goto L_00443C14; } }
L_00443BC8:
    set32(c.r[5], 0u - 1u);
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[18], ld32((c.r[3].w[0] - 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[25], ld32((c.r[18].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00443BF8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00443BF8u) [[unlikely]] return; }
L_00443BF8:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 7;
L_00443C14:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 40u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00443BC8u | kUnwind; return; } goto L_00443BC8; }
    set32(c.r[2], c.r[17].w[0] + 32u);
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[17].w[0] + 4u);  goto L_00443C60; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00443C5C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00443C5C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00443C5C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00443C5C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00443C5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443C5Cu);  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00443C5Cu) [[unlikely]] return; }
L_00443C5C:
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 1;
L_00443C60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443C68u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00D0(c, 526u, depth + 1u); else { c.pc = 0x00443D80u; return; } if (c.pc != 0x00443C68u) [[unlikely]] return; }
L_00443C68:
    c.r[2].d[0] = c.r[16].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_00443C84; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443C80u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00443C80u) [[unlikely]] return; }
L_00443C80:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00443C84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00443CA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[8].w[0]);
    set32(c.r[5], 0u + 32u);
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443CD4u); set32(c.r[7], c.r[7].w[0] + 25584u);  if (depth < kMaxDepth) unit_00D0(c, 524u, depth + 1u); else { c.pc = 0x00443D30u; return; } if (c.pc != 0x00443CD4u) [[unlikely]] return; }
L_00443CD4:
    set32(c.r[16], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443CE0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 171u, depth + 1u); else { c.pc = 0x001025B0u; return; } if (c.pc != 0x00443CE0u) [[unlikely]] return; }
L_00443CE0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], 0u - 1u);  goto L_00443CF8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443CF4u);  if (depth < kMaxDepth) unit_0000(c, 105u, depth + 1u); else { c.pc = 0x00101C70u; return; } if (c.pc != 0x00443CF4u) [[unlikely]] return; }
L_00443CF4:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_00443CF8:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[16].w[0]), c.r[2].w[0]);  goto L_00443D0C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443D08u);  if (depth < kMaxDepth) unit_0000(c, 177u, depth + 1u); else { c.pc = 0x001026A0u; return; } if (c.pc != 0x00443D08u) [[unlikely]] return; }
L_00443D08:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00443D0C:
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00443D30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 12u), c.r[6].w[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 20u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0]), 0u);
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[4].w[0] + 4u), 0u);  if (t) { goto L_00443D68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443D68u);  if (depth < kMaxDepth) unit_00D0(c, 531u, depth + 1u); else { c.pc = 0x00443E00u; return; } if (c.pc != 0x00443D68u) [[unlikely]] return; }
L_00443D68:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00443D80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00443DE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[18].w[0])));  if (t) { goto L_00443DC0; } }
L_00443DA8:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443DB4u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0000(c, 27u, depth + 1u); else { c.pc = 0x001002F0u; return; } if (c.pc != 0x00443DB4u) [[unlikely]] return; }
L_00443DB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443DBCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00443DBCu) [[unlikely]] return; }
L_00443DBC:
    set32(c.r[16], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_00443DC0:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00443DA8u | kUnwind; return; } goto L_00443DA8; }
    c.r[2].d[0] = c.r[17].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    if (c.r[2].sd[0] <= 0) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_00443DE4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443DE0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 16u, depth + 1u); else { c.pc = 0x00100240u; return; } if (c.pc != 0x00443DE0u) [[unlikely]] return; }
L_00443DE0:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00443DE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00443E00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[1].d[0] = c.r[3].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00443EF0; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443E34u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_0000(c, 18u, depth + 1u); else { c.pc = 0x00100260u; return; } if (c.pc != 0x00443E34u) [[unlikely]] return; }
L_00443E34:
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443E44u); set32(c.r[4], c.r[16].w[0] << 6);  if (depth < kMaxDepth) unit_0000(c, 163u, depth + 1u); else { c.pc = 0x001024B0u; return; } if (c.pc != 0x00443E44u) [[unlikely]] return; }
L_00443E44:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[6], c.r[16].w[0] - 1u);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.r[18].w[0]);  if (t) { goto L_00443EA4; } }
L_00443E60:
    c.budget -= 2;
    if (c.r[7].d[0] != c.r[6].d[0]) { set32(c.r[5], ld32((c.r[17].w[0])));  goto L_00443E84; }
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[7].w[0] << 6);
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[5].w[0]);  if (t) { goto L_00443EA0; } }
L_00443E84:
    set32(c.r[3], c.r[7].w[0] + 1u);
    set32(c.r[4], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[7].w[0] << 6);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 7;
L_00443EA0:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_00443EA4:
    c.r[3].d[0] = c.r[7].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00443E60u | kUnwind; return; } goto L_00443E60; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 24u)));  goto L_00443EE8; }
    set32(c.r[7], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[4], 0u + 4u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[8], c.r[3].w[0] + c.r[16].w[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443EE4u); set32(c.r[6], c.r[6].w[0] + 25607u);  if (depth < kMaxDepth) unit_000B(c, 416u, depth + 1u); else { c.pc = 0x0012FFE0u; return; } if (c.pc != 0x00443EE4u) [[unlikely]] return; }
L_00443EE4:
    set32(c.r[3], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_00443EE8:
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 2;
L_00443EF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00443F10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443F28u); set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  if (depth < kMaxDepth) unit_0000(c, 160u, depth + 1u); else { c.pc = 0x00102450u; return; } if (c.pc != 0x00443F28u) [[unlikely]] return; }
L_00443F28:
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0]), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00443F40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[29].w[0] + 44u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 44u));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 32u), c.f[0]);  if (t) { goto L_00443FA4; } }
L_00443F7C:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 36u)));  goto L_00443F9C; }
    set32(c.r[25], ld32((c.r[4].w[0])));
    set32(c.r[25], ld32((c.r[25].w[0] + 8u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[25].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00443F98u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00443F98u) [[unlikely]] return; }
L_00443F98:
    set32(c.r[2], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 1;
L_00443F9C:
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[29].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 2;
L_00443FA4:
    set32(c.r[3], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 36u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00443F7Cu | kUnwind; return; } goto L_00443F7C; }
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    st32((c.r[16].w[0] + 28u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 25052u)));
    st32((c.r[2].w[0] + 60u), 0u);
    set32(c.r[4], ld32((c.r[28].w[0] - 25052u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443FE0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0018(c, 276u, depth + 1u); else { c.pc = 0x00162490u; return; } if (c.pc != 0x00443FE0u) [[unlikely]] return; }
L_00443FE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443FE8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0019(c, 30u, depth + 1u); else { c.pc = 0x001644B0u; return; } if (c.pc != 0x00443FE8u) [[unlikely]] return; }
L_00443FE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443FF0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0019(c, 24u, depth + 1u); else { c.pc = 0x001643C0u; return; } if (c.pc != 0x00443FF0u) [[unlikely]] return; }
L_00443FF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00443FF8u); set32(c.r[4], ld32((c.r[28].w[0] - 25052u)));  if (depth < kMaxDepth) unit_00CE(c, 127u, depth + 1u); else { c.pc = 0x00439230u; return; } if (c.pc != 0x00443FF8u) [[unlikely]] return; }
L_00443FF8:
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { st32((c.r[16].w[0] + 32u), 0u);  [[clang::musttail]] return unit_00D1(c, 4u, depth); }
    [[clang::musttail]] return unit_00D1(c, 2u, depth);
}

}
